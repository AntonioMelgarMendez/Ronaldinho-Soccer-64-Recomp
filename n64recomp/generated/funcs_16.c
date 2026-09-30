#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800372F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800372F4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800372F8: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x800372FC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80037300: sb          $zero, 0x64($v0)
    MEM_B(0X64, ctx->r2) = 0;
    // 0x80037304: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x80037308: sb          $zero, 0x66($v0)
    MEM_B(0X66, ctx->r2) = 0;
    // 0x8003730C: sb          $zero, 0x67($v0)
    MEM_B(0X67, ctx->r2) = 0;
    // 0x80037310: sb          $v1, 0x68($v0)
    MEM_B(0X68, ctx->r2) = ctx->r3;
    // 0x80037314: jr          $ra
    // 0x80037318: sb          $v1, 0x69($v0)
    MEM_B(0X69, ctx->r2) = ctx->r3;
    return;
    // 0x80037318: sb          $v1, 0x69($v0)
    MEM_B(0X69, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_8003731C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003731C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80037320: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80037324: lb          $t6, 0x69($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X69);
    // 0x80037328: lb          $t7, 0x68($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X68);
    // 0x8003732C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80037330: bne         $t6, $t7, L_8003733C
    if (ctx->r14 != ctx->r15) {
        // 0x80037334: nop
    
            goto L_8003733C;
    }
    // 0x80037334: nop

    // 0x80037338: sb          $t8, 0x69($v0)
    MEM_B(0X69, ctx->r2) = ctx->r24;
L_8003733C:
    // 0x8003733C: jr          $ra
    // 0x80037340: nop

    return;
    // 0x80037340: nop

;}
RECOMP_FUNC void func_80037344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037344: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80037348: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x8003734C: lb          $v0, 0x44($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X44);
    // 0x80037350: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037354: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037358: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8003735C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80037360: beq         $v0, $zero, L_8003737C
    if (ctx->r2 == 0) {
        // 0x80037364: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8003737C;
    }
    // 0x80037364: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037368: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003736C: beq         $v0, $at, L_8003738C
    if (ctx->r2 == ctx->r1) {
        // 0x80037370: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_8003738C;
    }
    // 0x80037370: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80037374: b           L_80037398
    // 0x80037378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80037398;
    // 0x80037378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003737C:
    // 0x8003737C: jal         0x80037908
    // 0x80037380: nop

    func_80037908(rdram, ctx);
        goto after_0;
    // 0x80037380: nop

    after_0:
    // 0x80037384: b           L_80037398
    // 0x80037388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80037398;
    // 0x80037388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003738C:
    // 0x8003738C: jal         0x80037908
    // 0x80037390: sb          $t7, 0x69($v1)
    MEM_B(0X69, ctx->r3) = ctx->r15;
    func_80037908(rdram, ctx);
        goto after_1;
    // 0x80037390: sb          $t7, 0x69($v1)
    MEM_B(0X69, ctx->r3) = ctx->r15;
    after_1:
    // 0x80037394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80037398:
    // 0x80037398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003739C: jr          $ra
    // 0x800373A0: nop

    return;
    // 0x800373A0: nop

;}
RECOMP_FUNC void func_800373A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800373A4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800373A8: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x800373AC: lb          $v0, 0x44($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X44);
    // 0x800373B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800373B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800373B8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800373BC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800373C0: beq         $v0, $zero, L_800373DC
    if (ctx->r2 == 0) {
        // 0x800373C4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800373DC;
    }
    // 0x800373C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800373C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800373CC: beq         $v0, $at, L_800373EC
    if (ctx->r2 == ctx->r1) {
        // 0x800373D0: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_800373EC;
    }
    // 0x800373D0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x800373D4: b           L_800373F8
    // 0x800373D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800373F8;
    // 0x800373D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800373DC:
    // 0x800373DC: jal         0x80037AB8
    // 0x800373E0: nop

    func_80037AB8(rdram, ctx);
        goto after_0;
    // 0x800373E0: nop

    after_0:
    // 0x800373E4: b           L_800373F8
    // 0x800373E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800373F8;
    // 0x800373E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800373EC:
    // 0x800373EC: jal         0x80037AB8
    // 0x800373F0: sb          $t7, 0x69($v1)
    MEM_B(0X69, ctx->r3) = ctx->r15;
    func_80037AB8(rdram, ctx);
        goto after_1;
    // 0x800373F0: sb          $t7, 0x69($v1)
    MEM_B(0X69, ctx->r3) = ctx->r15;
    after_1:
    // 0x800373F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800373F8:
    // 0x800373F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800373FC: jr          $ra
    // 0x80037400: nop

    return;
    // 0x80037400: nop

;}
RECOMP_FUNC void func_80037404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037404: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80037408: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x8003740C: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x80037410: lbu         $t8, 0x19($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X19);
    // 0x80037414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037418: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8003741C: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x80037420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037424: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037428: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003742C: beq         $v1, $t8, L_80037444
    if (ctx->r3 == ctx->r24) {
        // 0x80037430: sh          $t7, 0x2($v0)
        MEM_H(0X2, ctx->r2) = ctx->r15;
            goto L_80037444;
    }
    // 0x80037430: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
    // 0x80037434: lbu         $t9, 0x14($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X14);
    // 0x80037438: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x8003743C: bne         $v1, $t9, L_80037474
    if (ctx->r3 != ctx->r25) {
        // 0x80037440: nop
    
            goto L_80037474;
    }
    // 0x80037440: nop

L_80037444:
    // 0x80037444: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80037448: jal         0x80025A10
    // 0x8003744C: addiu       $a0, $a0, 0x3C98
    ctx->r4 = ADD32(ctx->r4, 0X3C98);
    func_80025A10(rdram, ctx);
        goto after_0;
    // 0x8003744C: addiu       $a0, $a0, 0x3C98
    ctx->r4 = ADD32(ctx->r4, 0X3C98);
    after_0:
    // 0x80037450: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80037454: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80037458: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x8003745C: sb          $zero, 0x19($v0)
    MEM_B(0X19, ctx->r2) = 0;
    // 0x80037460: addiu       $a0, $a0, 0x748C
    ctx->r4 = ADD32(ctx->r4, 0X748C);
    // 0x80037464: jal         0x8002989C
    // 0x80037468: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x80037468: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8003746C: b           L_80037480
    // 0x80037470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80037480;
    // 0x80037470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80037474:
    // 0x80037474: jal         0x800296E0
    // 0x80037478: addiu       $a0, $a0, 0x748C
    ctx->r4 = ADD32(ctx->r4, 0X748C);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x80037478: addiu       $a0, $a0, 0x748C
    ctx->r4 = ADD32(ctx->r4, 0X748C);
    after_2:
    // 0x8003747C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80037480:
    // 0x80037480: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037484: jr          $ra
    // 0x80037488: nop

    return;
    // 0x80037488: nop

;}
RECOMP_FUNC void func_8003748C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003748C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80037490: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80037494: lbu         $t6, 0x14($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X14);
    // 0x80037498: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003749C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800374A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800374A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800374A8: bne         $t6, $at, L_800374D4
    if (ctx->r14 != ctx->r1) {
        // 0x800374AC: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800374D4;
    }
    // 0x800374AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800374B0: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x800374B4: sb          $zero, 0x14($v0)
    MEM_B(0X14, ctx->r2) = 0;
    // 0x800374B8: addiu       $t7, $t7, 0x74F0
    ctx->r15 = ADD32(ctx->r15, 0X74F0);
    // 0x800374BC: sw          $t7, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r15;
    // 0x800374C0: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x800374C4: jal         0x800296E0
    // 0x800374C8: addiu       $a0, $a0, 0x7628
    ctx->r4 = ADD32(ctx->r4, 0X7628);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x800374C8: addiu       $a0, $a0, 0x7628
    ctx->r4 = ADD32(ctx->r4, 0X7628);
    after_0:
    // 0x800374CC: b           L_800374E4
    // 0x800374D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800374E4;
    // 0x800374D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800374D4:
    // 0x800374D4: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x800374D8: jal         0x800296E0
    // 0x800374DC: addiu       $a0, $a0, 0x74F0
    ctx->r4 = ADD32(ctx->r4, 0X74F0);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x800374DC: addiu       $a0, $a0, 0x74F0
    ctx->r4 = ADD32(ctx->r4, 0X74F0);
    after_1:
    // 0x800374E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800374E4:
    // 0x800374E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800374E8: jr          $ra
    // 0x800374EC: nop

    return;
    // 0x800374EC: nop

;}
RECOMP_FUNC void func_800374F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800374F0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800374F4: lbu         $t6, -0x329A($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X329A);
    // 0x800374F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800374FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80037500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037504: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037508: bne         $t6, $at, L_8003753C
    if (ctx->r14 != ctx->r1) {
        // 0x8003750C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8003753C;
    }
    // 0x8003750C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80037510: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80037514: jal         0x80025A10
    // 0x80037518: addiu       $a0, $a0, 0x3BB8
    ctx->r4 = ADD32(ctx->r4, 0X3BB8);
    func_80025A10(rdram, ctx);
        goto after_0;
    // 0x80037518: addiu       $a0, $a0, 0x3BB8
    ctx->r4 = ADD32(ctx->r4, 0X3BB8);
    after_0:
    // 0x8003751C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80037520: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037524: sb          $zero, -0x329A($at)
    MEM_B(-0X329A, ctx->r1) = 0;
    // 0x80037528: addiu       $a0, $a0, 0x7558
    ctx->r4 = ADD32(ctx->r4, 0X7558);
    // 0x8003752C: jal         0x8002989C
    // 0x80037530: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x80037530: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x80037534: b           L_8003754C
    // 0x80037538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003754C;
    // 0x80037538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003753C:
    // 0x8003753C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037540: jal         0x800296E0
    // 0x80037544: addiu       $a0, $a0, 0x7558
    ctx->r4 = ADD32(ctx->r4, 0X7558);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x80037544: addiu       $a0, $a0, 0x7558
    ctx->r4 = ADD32(ctx->r4, 0X7558);
    after_2:
    // 0x80037548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003754C:
    // 0x8003754C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037550: jr          $ra
    // 0x80037554: nop

    return;
    // 0x80037554: nop

;}
RECOMP_FUNC void func_80037558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037558: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8003755C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80037560: lbu         $t6, 0x15($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X15);
    // 0x80037564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037568: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003756C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037570: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80037574: bne         $t6, $at, L_800375A0
    if (ctx->r14 != ctx->r1) {
        // 0x80037578: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_800375A0;
    }
    // 0x80037578: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8003757C: sb          $zero, 0x15($v0)
    MEM_B(0X15, ctx->r2) = 0;
    // 0x80037580: lw          $t7, 0x28($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X28);
    // 0x80037584: nop

    // 0x80037588: sw          $t7, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r15;
    // 0x8003758C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037590: jal         0x800296E0
    // 0x80037594: addiu       $a0, $a0, 0x7720
    ctx->r4 = ADD32(ctx->r4, 0X7720);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x80037594: addiu       $a0, $a0, 0x7720
    ctx->r4 = ADD32(ctx->r4, 0X7720);
    after_0:
    // 0x80037598: b           L_800375B0
    // 0x8003759C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800375B0;
    // 0x8003759C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800375A0:
    // 0x800375A0: lw          $a0, 0x28($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X28);
    // 0x800375A4: jal         0x8002989C
    // 0x800375A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x800375A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x800375AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800375B0:
    // 0x800375B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800375B4: jr          $ra
    // 0x800375B8: nop

    return;
    // 0x800375B8: nop

;}
RECOMP_FUNC void func_800375BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800375BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800375C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800375C4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800375C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800375CC: lbu         $a0, -0x32A3($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X32A3);
    // 0x800375D0: jal         0x800354D0
    // 0x800375D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800354D0(rdram, ctx);
        goto after_0;
    // 0x800375D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800375D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800375DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800375E0: jr          $ra
    // 0x800375E4: nop

    return;
    // 0x800375E4: nop

;}
RECOMP_FUNC void func_800375E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800375E8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800375EC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800375F0: jr          $ra
    // 0x800375F4: sb          $t6, -0x329C($at)
    MEM_B(-0X329C, ctx->r1) = ctx->r14;
    return;
    // 0x800375F4: sb          $t6, -0x329C($at)
    MEM_B(-0X329C, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800375F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800375F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800375FC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80037600: jr          $ra
    // 0x80037604: sb          $t6, -0x329A($at)
    MEM_B(-0X329A, ctx->r1) = ctx->r14;
    return;
    // 0x80037604: sb          $t6, -0x329A($at)
    MEM_B(-0X329A, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80037608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037608: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003760C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80037610: jr          $ra
    // 0x80037614: sb          $t6, -0x329B($at)
    MEM_B(-0X329B, ctx->r1) = ctx->r14;
    return;
    // 0x80037614: sb          $t6, -0x329B($at)
    MEM_B(-0X329B, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80037618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037618: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003761C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80037620: jr          $ra
    // 0x80037624: sb          $t6, -0x3297($at)
    MEM_B(-0X3297, ctx->r1) = ctx->r14;
    return;
    // 0x80037624: sb          $t6, -0x3297($at)
    MEM_B(-0X3297, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80037628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003762C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037630: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037634: jal         0x8003A348
    // 0x80037638: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003A348(rdram, ctx);
        goto after_0;
    // 0x80037638: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003763C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037640: jal         0x800296E0
    // 0x80037644: addiu       $a0, $a0, 0x7658
    ctx->r4 = ADD32(ctx->r4, 0X7658);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x80037644: addiu       $a0, $a0, 0x7658
    ctx->r4 = ADD32(ctx->r4, 0X7658);
    after_1:
    // 0x80037648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003764C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037650: jr          $ra
    // 0x80037654: nop

    return;
    // 0x80037654: nop

;}
RECOMP_FUNC void func_80037658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003765C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037660: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037664: jal         0x8003A390
    // 0x80037668: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003A390(rdram, ctx);
        goto after_0;
    // 0x80037668: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003766C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037670: jal         0x800296E0
    // 0x80037674: addiu       $a0, $a0, 0x7688
    ctx->r4 = ADD32(ctx->r4, 0X7688);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x80037674: addiu       $a0, $a0, 0x7688
    ctx->r4 = ADD32(ctx->r4, 0X7688);
    after_1:
    // 0x80037678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003767C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037680: jr          $ra
    // 0x80037684: nop

    return;
    // 0x80037684: nop

;}
RECOMP_FUNC void func_80037688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037688: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003768C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037690: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037694: jal         0x8003A3D8
    // 0x80037698: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003A3D8(rdram, ctx);
        goto after_0;
    // 0x80037698: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003769C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x800376A0: jal         0x800296E0
    // 0x800376A4: addiu       $a0, $a0, 0x76B8
    ctx->r4 = ADD32(ctx->r4, 0X76B8);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x800376A4: addiu       $a0, $a0, 0x76B8
    ctx->r4 = ADD32(ctx->r4, 0X76B8);
    after_1:
    // 0x800376A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800376AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800376B0: jr          $ra
    // 0x800376B4: nop

    return;
    // 0x800376B4: nop

;}
RECOMP_FUNC void func_800376B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800376B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800376BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800376C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800376C4: jal         0x8003A420
    // 0x800376C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003A420(rdram, ctx);
        goto after_0;
    // 0x800376C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800376CC: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x800376D0: jal         0x800296E0
    // 0x800376D4: addiu       $a0, $a0, 0x76E8
    ctx->r4 = ADD32(ctx->r4, 0X76E8);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x800376D4: addiu       $a0, $a0, 0x76E8
    ctx->r4 = ADD32(ctx->r4, 0X76E8);
    after_1:
    // 0x800376D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800376DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800376E0: jr          $ra
    // 0x800376E4: nop

    return;
    // 0x800376E4: nop

;}
RECOMP_FUNC void func_800376E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800376E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800376EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800376F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800376F4: jal         0x8003A468
    // 0x800376F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003A468(rdram, ctx);
        goto after_0;
    // 0x800376F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800376FC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80037700: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80037704: lw          $a0, 0x30($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X30);
    // 0x80037708: jal         0x8002989C
    // 0x8003770C: nop

    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x8003770C: nop

    after_1:
    // 0x80037710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037714: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037718: jr          $ra
    // 0x8003771C: nop

    return;
    // 0x8003771C: nop

;}
RECOMP_FUNC void func_80037720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037720: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037728: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003772C: jal         0x8003A198
    // 0x80037730: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003A198(rdram, ctx);
        goto after_0;
    // 0x80037730: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80037734: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037738: jal         0x800296E0
    // 0x8003773C: addiu       $a0, $a0, 0x7750
    ctx->r4 = ADD32(ctx->r4, 0X7750);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x8003773C: addiu       $a0, $a0, 0x7750
    ctx->r4 = ADD32(ctx->r4, 0X7750);
    after_1:
    // 0x80037740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037748: jr          $ra
    // 0x8003774C: nop

    return;
    // 0x8003774C: nop

;}
RECOMP_FUNC void func_80037750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037758: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003775C: jal         0x8003A1E0
    // 0x80037760: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003A1E0(rdram, ctx);
        goto after_0;
    // 0x80037760: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80037764: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037768: jal         0x800296E0
    // 0x8003776C: addiu       $a0, $a0, 0x7780
    ctx->r4 = ADD32(ctx->r4, 0X7780);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x8003776C: addiu       $a0, $a0, 0x7780
    ctx->r4 = ADD32(ctx->r4, 0X7780);
    after_1:
    // 0x80037770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037774: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037778: jr          $ra
    // 0x8003777C: nop

    return;
    // 0x8003777C: nop

;}
RECOMP_FUNC void func_80037780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037780: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037788: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003778C: jal         0x8003A228
    // 0x80037790: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003A228(rdram, ctx);
        goto after_0;
    // 0x80037790: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80037794: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037798: jal         0x800296E0
    // 0x8003779C: addiu       $a0, $a0, 0x77B0
    ctx->r4 = ADD32(ctx->r4, 0X77B0);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x8003779C: addiu       $a0, $a0, 0x77B0
    ctx->r4 = ADD32(ctx->r4, 0X77B0);
    after_1:
    // 0x800377A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800377A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800377A8: jr          $ra
    // 0x800377AC: nop

    return;
    // 0x800377AC: nop

;}
RECOMP_FUNC void func_800377B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800377B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800377B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800377B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800377BC: jal         0x8003A270
    // 0x800377C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003A270(rdram, ctx);
        goto after_0;
    // 0x800377C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800377C4: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x800377C8: jal         0x800296E0
    // 0x800377CC: addiu       $a0, $a0, 0x77E0
    ctx->r4 = ADD32(ctx->r4, 0X77E0);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x800377CC: addiu       $a0, $a0, 0x77E0
    ctx->r4 = ADD32(ctx->r4, 0X77E0);
    after_1:
    // 0x800377D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800377D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800377D8: jr          $ra
    // 0x800377DC: nop

    return;
    // 0x800377DC: nop

;}
RECOMP_FUNC void func_800377E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800377E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800377E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800377E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800377EC: jal         0x8003A2B8
    // 0x800377F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003A2B8(rdram, ctx);
        goto after_0;
    // 0x800377F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800377F4: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x800377F8: jal         0x800296E0
    // 0x800377FC: addiu       $a0, $a0, 0x7810
    ctx->r4 = ADD32(ctx->r4, 0X7810);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x800377FC: addiu       $a0, $a0, 0x7810
    ctx->r4 = ADD32(ctx->r4, 0X7810);
    after_1:
    // 0x80037800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037808: jr          $ra
    // 0x8003780C: nop

    return;
    // 0x8003780C: nop

;}
RECOMP_FUNC void func_80037810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037818: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003781C: jal         0x8003A150
    // 0x80037820: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003A150(rdram, ctx);
        goto after_0;
    // 0x80037820: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80037824: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037828: jal         0x800296E0
    // 0x8003782C: addiu       $a0, $a0, 0x7840
    ctx->r4 = ADD32(ctx->r4, 0X7840);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x8003782C: addiu       $a0, $a0, 0x7840
    ctx->r4 = ADD32(ctx->r4, 0X7840);
    after_1:
    // 0x80037830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037838: jr          $ra
    // 0x8003783C: nop

    return;
    // 0x8003783C: nop

;}
RECOMP_FUNC void func_80037840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037848: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003784C: jal         0x8003A4B0
    // 0x80037850: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003A4B0(rdram, ctx);
        goto after_0;
    // 0x80037850: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80037854: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037858: jal         0x800296E0
    // 0x8003785C: addiu       $a0, $a0, 0x7870
    ctx->r4 = ADD32(ctx->r4, 0X7870);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x8003785C: addiu       $a0, $a0, 0x7870
    ctx->r4 = ADD32(ctx->r4, 0X7870);
    after_1:
    // 0x80037860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037868: jr          $ra
    // 0x8003786C: nop

    return;
    // 0x8003786C: nop

;}
RECOMP_FUNC void func_80037870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037878: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003787C: jal         0x8003A4F8
    // 0x80037880: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003A4F8(rdram, ctx);
        goto after_0;
    // 0x80037880: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80037884: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037888: jal         0x800296E0
    // 0x8003788C: addiu       $a0, $a0, 0x78A0
    ctx->r4 = ADD32(ctx->r4, 0X78A0);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x8003788C: addiu       $a0, $a0, 0x78A0
    ctx->r4 = ADD32(ctx->r4, 0X78A0);
    after_1:
    // 0x80037890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037894: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037898: jr          $ra
    // 0x8003789C: nop

    return;
    // 0x8003789C: nop

;}
RECOMP_FUNC void func_800378A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800378A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800378A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800378A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800378AC: jal         0x8003A0C0
    // 0x800378B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003A0C0(rdram, ctx);
        goto after_0;
    // 0x800378B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800378B4: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x800378B8: jal         0x800296E0
    // 0x800378BC: addiu       $a0, $a0, 0x78D0
    ctx->r4 = ADD32(ctx->r4, 0X78D0);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x800378BC: addiu       $a0, $a0, 0x78D0
    ctx->r4 = ADD32(ctx->r4, 0X78D0);
    after_1:
    // 0x800378C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800378C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800378C8: jr          $ra
    // 0x800378CC: nop

    return;
    // 0x800378CC: nop

;}
RECOMP_FUNC void func_800378D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800378D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800378D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800378D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800378DC: jal         0x8003A108
    // 0x800378E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003A108(rdram, ctx);
        goto after_0;
    // 0x800378E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800378E4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800378E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800378EC: lw          $a0, 0x30($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X30);
    // 0x800378F0: jal         0x8002989C
    // 0x800378F4: nop

    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x800378F4: nop

    after_1:
    // 0x800378F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800378FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037900: jr          $ra
    // 0x80037904: nop

    return;
    // 0x80037904: nop

;}
RECOMP_FUNC void func_80037908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003790C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80037910: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80037914: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037918: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003791C: sb          $zero, 0x6A($v1)
    MEM_B(0X6A, ctx->r3) = 0;
    // 0x80037920: sb          $a0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r4;
    // 0x80037924: jal         0x800356EC
    // 0x80037928: sb          $a0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r4;
    func_800356EC(rdram, ctx);
        goto after_0;
    // 0x80037928: sb          $a0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r4;
    after_0:
    // 0x8003792C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80037930: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80037934: lbu         $v0, 0x40($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X40);
    // 0x80037938: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x8003793C: andi        $a1, $v0, 0x7
    ctx->r5 = ctx->r2 & 0X7;
    // 0x80037940: beq         $a1, $zero, L_800379AC
    if (ctx->r5 == 0) {
        // 0x80037944: nop
    
            goto L_800379AC;
    }
    // 0x80037944: nop

    // 0x80037948: lbu         $t7, 0x3F($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X3F);
    // 0x8003794C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80037950: bne         $t7, $at, L_800379AC
    if (ctx->r15 != ctx->r1) {
        // 0x80037954: andi        $t8, $v0, 0xC0
        ctx->r24 = ctx->r2 & 0XC0;
            goto L_800379AC;
    }
    // 0x80037954: andi        $t8, $v0, 0xC0
    ctx->r24 = ctx->r2 & 0XC0;
    // 0x80037958: beq         $t8, $zero, L_80037968
    if (ctx->r24 == 0) {
        // 0x8003795C: nop
    
            goto L_80037968;
    }
    // 0x8003795C: nop

    // 0x80037960: beq         $a0, $zero, L_80037974
    if (ctx->r4 == 0) {
        // 0x80037964: nop
    
            goto L_80037974;
    }
    // 0x80037964: nop

L_80037968:
    // 0x80037968: beq         $a0, $zero, L_800379AC
    if (ctx->r4 == 0) {
        // 0x8003796C: andi        $t9, $v0, 0x40
        ctx->r25 = ctx->r2 & 0X40;
            goto L_800379AC;
    }
    // 0x8003796C: andi        $t9, $v0, 0x40
    ctx->r25 = ctx->r2 & 0X40;
    // 0x80037970: bne         $t9, $zero, L_800379AC
    if (ctx->r25 != 0) {
        // 0x80037974: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_800379AC;
    }
L_80037974:
    // 0x80037974: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80037978: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8003797C: lbu         $a0, 0x502C($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X502C);
    // 0x80037980: jal         0x80015BC0
    // 0x80037984: nop

    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x80037984: nop

    after_1:
    // 0x80037988: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003798C: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80037990: lbu         $a1, 0x41($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X41);
    // 0x80037994: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037998: sb          $zero, 0x3F($v1)
    MEM_B(0X3F, ctx->r3) = 0;
    // 0x8003799C: jal         0x8002989C
    // 0x800379A0: addiu       $a0, $a0, 0x79C8
    ctx->r4 = ADD32(ctx->r4, 0X79C8);
    func_8002989C(rdram, ctx);
        goto after_2;
    // 0x800379A0: addiu       $a0, $a0, 0x79C8
    ctx->r4 = ADD32(ctx->r4, 0X79C8);
    after_2:
    // 0x800379A4: b           L_800379BC
    // 0x800379A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800379BC;
    // 0x800379A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800379AC:
    // 0x800379AC: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x800379B0: jal         0x800296E0
    // 0x800379B4: addiu       $a0, $a0, 0x79C8
    ctx->r4 = ADD32(ctx->r4, 0X79C8);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x800379B4: addiu       $a0, $a0, 0x79C8
    ctx->r4 = ADD32(ctx->r4, 0X79C8);
    after_3:
    // 0x800379B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800379BC:
    // 0x800379BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800379C0: jr          $ra
    // 0x800379C4: nop

    return;
    // 0x800379C4: nop

;}
RECOMP_FUNC void func_800379C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800379C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800379CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800379D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800379D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800379D8: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x800379DC: addiu       $a0, $a0, 0x7A3C
    ctx->r4 = ADD32(ctx->r4, 0X7A3C);
    // 0x800379E0: jal         0x8004A6E0
    // 0x800379E4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_8004A6E0(rdram, ctx);
        goto after_0;
    // 0x800379E4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x800379E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800379EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800379F0: jr          $ra
    // 0x800379F4: nop

    return;
    // 0x800379F4: nop

;}
RECOMP_FUNC void func_80037A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037A3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037A40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037A44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037A48: jal         0x8001C820
    // 0x80037A4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001C820(rdram, ctx);
        goto after_0;
    // 0x80037A4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80037A50: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80037A54: jal         0x8002A320
    // 0x80037A58: nop

    func_8002A320(rdram, ctx);
        goto after_1;
    // 0x80037A58: nop

    after_1:
    // 0x80037A5C: jal         0x80029520
    // 0x80037A60: nop

    func_80029520(rdram, ctx);
        goto after_2;
    // 0x80037A60: nop

    after_2:
    // 0x80037A64: jal         0x8002F2AC
    // 0x80037A68: nop

    func_8002F2AC(rdram, ctx);
        goto after_3;
    // 0x80037A68: nop

    after_3:
    // 0x80037A6C: jal         0x8000E300
    // 0x80037A70: nop

    func_8000E300(rdram, ctx);
        goto after_4;
    // 0x80037A70: nop

    after_4:
    // 0x80037A74: jal         0x80073F40
    // 0x80037A78: nop

    func_80073F40(rdram, ctx);
        goto after_5;
    // 0x80037A78: nop

    after_5:
    // 0x80037A7C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80037A80: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x80037A84: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80037A88: addiu       $t6, $t6, 0x75BC
    ctx->r14 = ADD32(ctx->r14, 0X75BC);
    // 0x80037A8C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80037A90: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037A94: sw          $t6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r14;
    // 0x80037A98: sb          $zero, 0x40($v0)
    MEM_B(0X40, ctx->r2) = 0;
    // 0x80037A9C: sb          $zero, 0x41($v0)
    MEM_B(0X41, ctx->r2) = 0;
    // 0x80037AA0: jal         0x800296E0
    // 0x80037AA4: addiu       $a0, $a0, 0x7404
    ctx->r4 = ADD32(ctx->r4, 0X7404);
    func_800296E0(rdram, ctx);
        goto after_6;
    // 0x80037AA4: addiu       $a0, $a0, 0x7404
    ctx->r4 = ADD32(ctx->r4, 0X7404);
    after_6:
    // 0x80037AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037AAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037AB0: jr          $ra
    // 0x80037AB4: nop

    return;
    // 0x80037AB4: nop

;}
RECOMP_FUNC void func_80037AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037AB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037ABC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80037AC0: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80037AC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037AC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037ACC: sb          $zero, 0x6A($v1)
    MEM_B(0X6A, ctx->r3) = 0;
    // 0x80037AD0: sb          $a0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r4;
    // 0x80037AD4: jal         0x800356EC
    // 0x80037AD8: sb          $a0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r4;
    func_800356EC(rdram, ctx);
        goto after_0;
    // 0x80037AD8: sb          $a0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r4;
    after_0:
    // 0x80037ADC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80037AE0: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80037AE4: lbu         $v0, 0x40($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X40);
    // 0x80037AE8: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x80037AEC: andi        $a1, $v0, 0x7
    ctx->r5 = ctx->r2 & 0X7;
    // 0x80037AF0: beq         $a1, $zero, L_80037B5C
    if (ctx->r5 == 0) {
        // 0x80037AF4: nop
    
            goto L_80037B5C;
    }
    // 0x80037AF4: nop

    // 0x80037AF8: lbu         $t7, 0x3F($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X3F);
    // 0x80037AFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80037B00: bne         $t7, $at, L_80037B5C
    if (ctx->r15 != ctx->r1) {
        // 0x80037B04: andi        $t8, $v0, 0xC0
        ctx->r24 = ctx->r2 & 0XC0;
            goto L_80037B5C;
    }
    // 0x80037B04: andi        $t8, $v0, 0xC0
    ctx->r24 = ctx->r2 & 0XC0;
    // 0x80037B08: beq         $t8, $zero, L_80037B18
    if (ctx->r24 == 0) {
        // 0x80037B0C: nop
    
            goto L_80037B18;
    }
    // 0x80037B0C: nop

    // 0x80037B10: beq         $a0, $zero, L_80037B24
    if (ctx->r4 == 0) {
        // 0x80037B14: nop
    
            goto L_80037B24;
    }
    // 0x80037B14: nop

L_80037B18:
    // 0x80037B18: beq         $a0, $zero, L_80037B5C
    if (ctx->r4 == 0) {
        // 0x80037B1C: andi        $t9, $v0, 0x40
        ctx->r25 = ctx->r2 & 0X40;
            goto L_80037B5C;
    }
    // 0x80037B1C: andi        $t9, $v0, 0x40
    ctx->r25 = ctx->r2 & 0X40;
    // 0x80037B20: bne         $t9, $zero, L_80037B5C
    if (ctx->r25 != 0) {
        // 0x80037B24: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_80037B5C;
    }
L_80037B24:
    // 0x80037B24: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80037B28: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80037B2C: lbu         $a0, 0x502C($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X502C);
    // 0x80037B30: jal         0x80015BC0
    // 0x80037B34: nop

    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x80037B34: nop

    after_1:
    // 0x80037B38: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80037B3C: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80037B40: lbu         $a1, 0x41($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X41);
    // 0x80037B44: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037B48: sb          $zero, 0x3F($v1)
    MEM_B(0X3F, ctx->r3) = 0;
    // 0x80037B4C: jal         0x8002989C
    // 0x80037B50: addiu       $a0, $a0, 0x7B78
    ctx->r4 = ADD32(ctx->r4, 0X7B78);
    func_8002989C(rdram, ctx);
        goto after_2;
    // 0x80037B50: addiu       $a0, $a0, 0x7B78
    ctx->r4 = ADD32(ctx->r4, 0X7B78);
    after_2:
    // 0x80037B54: b           L_80037B6C
    // 0x80037B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80037B6C;
    // 0x80037B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80037B5C:
    // 0x80037B5C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037B60: jal         0x800296E0
    // 0x80037B64: addiu       $a0, $a0, 0x7B78
    ctx->r4 = ADD32(ctx->r4, 0X7B78);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x80037B64: addiu       $a0, $a0, 0x7B78
    ctx->r4 = ADD32(ctx->r4, 0X7B78);
    after_3:
    // 0x80037B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80037B6C:
    // 0x80037B6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037B70: jr          $ra
    // 0x80037B74: nop

    return;
    // 0x80037B74: nop

;}
RECOMP_FUNC void func_80037B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037B78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037B7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037B80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037B84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80037B88: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037B8C: addiu       $a0, $a0, 0x7A3C
    ctx->r4 = ADD32(ctx->r4, 0X7A3C);
    // 0x80037B90: jal         0x8004AD90
    // 0x80037B94: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AD90(rdram, ctx);
        goto after_0;
    // 0x80037B94: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x80037B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037B9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037BA0: jr          $ra
    // 0x80037BA4: nop

    return;
    // 0x80037BA4: nop

;}
RECOMP_FUNC void func_80037BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037BA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037BAC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80037BB0: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80037BB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037BB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037BBC: sb          $zero, 0x6A($v0)
    MEM_B(0X6A, ctx->r2) = 0;
    // 0x80037BC0: jal         0x800356EC
    // 0x80037BC4: sb          $a0, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r4;
    func_800356EC(rdram, ctx);
        goto after_0;
    // 0x80037BC4: sb          $a0, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r4;
    after_0:
    // 0x80037BC8: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037BCC: jal         0x800296E0
    // 0x80037BD0: addiu       $a0, $a0, 0x7BE4
    ctx->r4 = ADD32(ctx->r4, 0X7BE4);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x80037BD0: addiu       $a0, $a0, 0x7BE4
    ctx->r4 = ADD32(ctx->r4, 0X7BE4);
    after_1:
    // 0x80037BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037BDC: jr          $ra
    // 0x80037BE0: nop

    return;
    // 0x80037BE0: nop

;}
RECOMP_FUNC void func_80037BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037BE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037BE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037BEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037BF0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80037BF4: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037BF8: addiu       $a0, $a0, 0x7C14
    ctx->r4 = ADD32(ctx->r4, 0X7C14);
    // 0x80037BFC: jal         0x8004AD90
    // 0x80037C00: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_8004AD90(rdram, ctx);
        goto after_0;
    // 0x80037C00: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x80037C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037C0C: jr          $ra
    // 0x80037C10: nop

    return;
    // 0x80037C10: nop

;}
RECOMP_FUNC void func_80037C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037C14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037C18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037C1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037C20: jal         0x8001C820
    // 0x80037C24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001C820(rdram, ctx);
        goto after_0;
    // 0x80037C24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80037C28: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80037C2C: jal         0x8002A320
    // 0x80037C30: nop

    func_8002A320(rdram, ctx);
        goto after_1;
    // 0x80037C30: nop

    after_1:
    // 0x80037C34: jal         0x80029520
    // 0x80037C38: nop

    func_80029520(rdram, ctx);
        goto after_2;
    // 0x80037C38: nop

    after_2:
    // 0x80037C3C: jal         0x8002F2AC
    // 0x80037C40: nop

    func_8002F2AC(rdram, ctx);
        goto after_3;
    // 0x80037C40: nop

    after_3:
    // 0x80037C44: jal         0x8000E300
    // 0x80037C48: nop

    func_8000E300(rdram, ctx);
        goto after_4;
    // 0x80037C48: nop

    after_4:
    // 0x80037C4C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80037C50: jal         0x80020318
    // 0x80037C54: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    func_80020318(rdram, ctx);
        goto after_5;
    // 0x80037C54: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    after_5:
    // 0x80037C58: jal         0x80073F40
    // 0x80037C5C: nop

    func_80073F40(rdram, ctx);
        goto after_6;
    // 0x80037C5C: nop

    after_6:
    // 0x80037C60: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037C64: jal         0x800296E0
    // 0x80037C68: addiu       $a0, $a0, 0x7C7C
    ctx->r4 = ADD32(ctx->r4, 0X7C7C);
    func_800296E0(rdram, ctx);
        goto after_7;
    // 0x80037C68: addiu       $a0, $a0, 0x7C7C
    ctx->r4 = ADD32(ctx->r4, 0X7C7C);
    after_7:
    // 0x80037C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037C70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037C74: jr          $ra
    // 0x80037C78: nop

    return;
    // 0x80037C78: nop

;}
RECOMP_FUNC void func_80037C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037C7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037C80: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x80037C84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037C88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80037C8C: addiu       $t6, $t6, 0x75BC
    ctx->r14 = ADD32(ctx->r14, 0X75BC);
    // 0x80037C90: sw          $t6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r14;
    // 0x80037C94: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037C98: addiu       $a0, $a0, 0x7CB4
    ctx->r4 = ADD32(ctx->r4, 0X7CB4);
    // 0x80037C9C: jal         0x8002989C
    // 0x80037CA0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x80037CA0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_0:
    // 0x80037CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037CA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037CAC: jr          $ra
    // 0x80037CB0: nop

    return;
    // 0x80037CB0: nop

;}
RECOMP_FUNC void func_80037CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037CB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037CB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037CC0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80037CC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80037CC8: jal         0x80025A10
    // 0x80037CCC: addiu       $a0, $a0, 0x3BC0
    ctx->r4 = ADD32(ctx->r4, 0X3BC0);
    func_80025A10(rdram, ctx);
        goto after_0;
    // 0x80037CCC: addiu       $a0, $a0, 0x3BC0
    ctx->r4 = ADD32(ctx->r4, 0X3BC0);
    after_0:
    // 0x80037CD0: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037CD4: jal         0x800296E0
    // 0x80037CD8: addiu       $a0, $a0, 0x7404
    ctx->r4 = ADD32(ctx->r4, 0X7404);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x80037CD8: addiu       $a0, $a0, 0x7404
    ctx->r4 = ADD32(ctx->r4, 0X7404);
    after_1:
    // 0x80037CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037CE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037CE4: jr          $ra
    // 0x80037CE8: nop

    return;
    // 0x80037CE8: nop

;}
RECOMP_FUNC void func_80037CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037CEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037CF0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80037CF4: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80037CF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037CFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037D00: sb          $zero, 0x6A($v0)
    MEM_B(0X6A, ctx->r2) = 0;
    // 0x80037D04: jal         0x8001C820
    // 0x80037D08: sb          $a0, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r4;
    func_8001C820(rdram, ctx);
        goto after_0;
    // 0x80037D08: sb          $a0, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r4;
    after_0:
    // 0x80037D0C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80037D10: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x80037D14: jal         0x8002A320
    // 0x80037D18: nop

    func_8002A320(rdram, ctx);
        goto after_1;
    // 0x80037D18: nop

    after_1:
    // 0x80037D1C: jal         0x80029520
    // 0x80037D20: nop

    func_80029520(rdram, ctx);
        goto after_2;
    // 0x80037D20: nop

    after_2:
    // 0x80037D24: jal         0x8002F2AC
    // 0x80037D28: nop

    func_8002F2AC(rdram, ctx);
        goto after_3;
    // 0x80037D28: nop

    after_3:
    // 0x80037D2C: jal         0x8000E300
    // 0x80037D30: nop

    func_8000E300(rdram, ctx);
        goto after_4;
    // 0x80037D30: nop

    after_4:
    // 0x80037D34: jal         0x80073F40
    // 0x80037D38: nop

    func_80073F40(rdram, ctx);
        goto after_5;
    // 0x80037D38: nop

    after_5:
    // 0x80037D3C: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x80037D40: lw          $t8, 0x1CF0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1CF0);
    // 0x80037D44: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x80037D48: addiu       $t7, $t7, 0x75BC
    ctx->r15 = ADD32(ctx->r15, 0X75BC);
    // 0x80037D4C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037D50: addiu       $a0, $a0, 0x7404
    ctx->r4 = ADD32(ctx->r4, 0X7404);
    // 0x80037D54: jal         0x800296E0
    // 0x80037D58: sw          $t7, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->r15;
    func_800296E0(rdram, ctx);
        goto after_6;
    // 0x80037D58: sw          $t7, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->r15;
    after_6:
    // 0x80037D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037D60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037D64: jr          $ra
    // 0x80037D68: nop

    return;
    // 0x80037D68: nop

;}
RECOMP_FUNC void func_80037D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037D6C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80037D70: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80037D74: lb          $v0, 0x44($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X44);
    // 0x80037D78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037D7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037D80: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80037D84: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80037D88: beq         $v0, $zero, L_80037DA4
    if (ctx->r2 == 0) {
        // 0x80037D8C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80037DA4;
    }
    // 0x80037D8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037D90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80037D94: beq         $v0, $at, L_80037DB4
    if (ctx->r2 == ctx->r1) {
        // 0x80037D98: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_80037DB4;
    }
    // 0x80037D98: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80037D9C: b           L_80037DC0
    // 0x80037DA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80037DC0;
    // 0x80037DA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80037DA4:
    // 0x80037DA4: jal         0x80037CEC
    // 0x80037DA8: nop

    func_80037CEC(rdram, ctx);
        goto after_0;
    // 0x80037DA8: nop

    after_0:
    // 0x80037DAC: b           L_80037DC0
    // 0x80037DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80037DC0;
    // 0x80037DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80037DB4:
    // 0x80037DB4: jal         0x80037CEC
    // 0x80037DB8: sb          $t7, 0x69($v1)
    MEM_B(0X69, ctx->r3) = ctx->r15;
    func_80037CEC(rdram, ctx);
        goto after_1;
    // 0x80037DB8: sb          $t7, 0x69($v1)
    MEM_B(0X69, ctx->r3) = ctx->r15;
    after_1:
    // 0x80037DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80037DC0:
    // 0x80037DC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037DC4: jr          $ra
    // 0x80037DC8: nop

    return;
    // 0x80037DC8: nop

;}
RECOMP_FUNC void func_80037DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037DCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037DD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037DD4: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037DD8: jal         0x800296E0
    // 0x80037DDC: addiu       $a0, $a0, 0x7DF0
    ctx->r4 = ADD32(ctx->r4, 0X7DF0);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x80037DDC: addiu       $a0, $a0, 0x7DF0
    ctx->r4 = ADD32(ctx->r4, 0X7DF0);
    after_0:
    // 0x80037DE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037DE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037DE8: jr          $ra
    // 0x80037DEC: nop

    return;
    // 0x80037DEC: nop

;}
RECOMP_FUNC void func_80037DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037DF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037DF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037DFC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80037E00: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037E04: addiu       $a0, $a0, 0x7E20
    ctx->r4 = ADD32(ctx->r4, 0X7E20);
    // 0x80037E08: jal         0x8004AD90
    // 0x80037E0C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_8004AD90(rdram, ctx);
        goto after_0;
    // 0x80037E0C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x80037E10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037E14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037E18: jr          $ra
    // 0x80037E1C: nop

    return;
    // 0x80037E1C: nop

;}
RECOMP_FUNC void func_80037E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037E20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037E24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037E28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037E2C: jal         0x8002A320
    // 0x80037E30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002A320(rdram, ctx);
        goto after_0;
    // 0x80037E30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80037E34: jal         0x80029520
    // 0x80037E38: nop

    func_80029520(rdram, ctx);
        goto after_1;
    // 0x80037E38: nop

    after_1:
    // 0x80037E3C: jal         0x8002F2AC
    // 0x80037E40: nop

    func_8002F2AC(rdram, ctx);
        goto after_2;
    // 0x80037E40: nop

    after_2:
    // 0x80037E44: jal         0x80020270
    // 0x80037E48: nop

    func_80020270(rdram, ctx);
        goto after_3;
    // 0x80037E48: nop

    after_3:
    // 0x80037E4C: jal         0x8000E300
    // 0x80037E50: nop

    func_8000E300(rdram, ctx);
        goto after_4;
    // 0x80037E50: nop

    after_4:
    // 0x80037E54: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80037E58: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x80037E5C: addiu       $t6, $t6, 0x7E84
    ctx->r14 = ADD32(ctx->r14, 0X7E84);
    // 0x80037E60: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037E64: addiu       $a0, $a0, 0x7404
    ctx->r4 = ADD32(ctx->r4, 0X7404);
    // 0x80037E68: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80037E6C: jal         0x8002989C
    // 0x80037E70: sw          $t6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r14;
    func_8002989C(rdram, ctx);
        goto after_5;
    // 0x80037E70: sw          $t6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r14;
    after_5:
    // 0x80037E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037E78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037E7C: jr          $ra
    // 0x80037E80: nop

    return;
    // 0x80037E80: nop

;}
RECOMP_FUNC void func_80037E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037E84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037E88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037E8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037E90: jal         0x800364A8
    // 0x80037E94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800364A8(rdram, ctx);
        goto after_0;
    // 0x80037E94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80037E98: jal         0x8003977C
    // 0x80037E9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003977C(rdram, ctx);
        goto after_1;
    // 0x80037E9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80037EA0: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037EA4: jal         0x800296E0
    // 0x80037EA8: addiu       $a0, $a0, 0x7EBC
    ctx->r4 = ADD32(ctx->r4, 0X7EBC);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x80037EA8: addiu       $a0, $a0, 0x7EBC
    ctx->r4 = ADD32(ctx->r4, 0X7EBC);
    after_2:
    // 0x80037EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037EB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037EB4: jr          $ra
    // 0x80037EB8: nop

    return;
    // 0x80037EB8: nop

;}
RECOMP_FUNC void func_80037EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037EBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037EC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037EC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037EC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80037ECC: jal         0x8003977C
    // 0x80037ED0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003977C(rdram, ctx);
        goto after_0;
    // 0x80037ED0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80037ED4: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037ED8: jal         0x800296E0
    // 0x80037EDC: addiu       $a0, $a0, 0x7EF0
    ctx->r4 = ADD32(ctx->r4, 0X7EF0);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x80037EDC: addiu       $a0, $a0, 0x7EF0
    ctx->r4 = ADD32(ctx->r4, 0X7EF0);
    after_1:
    // 0x80037EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037EE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037EE8: jr          $ra
    // 0x80037EEC: nop

    return;
    // 0x80037EEC: nop

;}
RECOMP_FUNC void func_80037EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037EF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037EF4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80037EF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037EFC: sb          $zero, -0x301C($at)
    MEM_B(-0X301C, ctx->r1) = 0;
    // 0x80037F00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037F04: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80037F08: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80037F0C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037F10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80037F14: sh          $t6, 0x5220($at)
    MEM_H(0X5220, ctx->r1) = ctx->r14;
    // 0x80037F18: jal         0x800296E0
    // 0x80037F1C: addiu       $a0, $a0, 0x7F30
    ctx->r4 = ADD32(ctx->r4, 0X7F30);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x80037F1C: addiu       $a0, $a0, 0x7F30
    ctx->r4 = ADD32(ctx->r4, 0X7F30);
    after_0:
    // 0x80037F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037F28: jr          $ra
    // 0x80037F2C: nop

    return;
    // 0x80037F2C: nop

;}
RECOMP_FUNC void func_80037F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037F30: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80037F34: lbu         $v0, -0x32A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A4);
    // 0x80037F38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037F3C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80037F40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037F44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037F48: beq         $v0, $at, L_80037F64
    if (ctx->r2 == ctx->r1) {
        // 0x80037F4C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80037F64;
    }
    // 0x80037F4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80037F50: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80037F54: beq         $v0, $at, L_80037F7C
    if (ctx->r2 == ctx->r1) {
        // 0x80037F58: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_80037F7C;
    }
    // 0x80037F58: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80037F5C: b           L_80037F90
    // 0x80037F60: nop

        goto L_80037F90;
    // 0x80037F60: nop

L_80037F64:
    // 0x80037F64: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80037F68: sb          $zero, 0xB6A($at)
    MEM_B(0XB6A, ctx->r1) = 0;
    // 0x80037F6C: jal         0x8001B854
    // 0x80037F70: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8001B854(rdram, ctx);
        goto after_0;
    // 0x80037F70: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x80037F74: b           L_80037F9C
    // 0x80037F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80037F9C;
    // 0x80037F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80037F7C:
    // 0x80037F7C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80037F80: jal         0x8001B854
    // 0x80037F84: sb          $zero, 0x3A18($at)
    MEM_B(0X3A18, ctx->r1) = 0;
    func_8001B854(rdram, ctx);
        goto after_1;
    // 0x80037F84: sb          $zero, 0x3A18($at)
    MEM_B(0X3A18, ctx->r1) = 0;
    after_1:
    // 0x80037F88: b           L_80037F9C
    // 0x80037F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80037F9C;
    // 0x80037F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80037F90:
    // 0x80037F90: jal         0x8001B854
    // 0x80037F94: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_8001B854(rdram, ctx);
        goto after_2;
    // 0x80037F94: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_2:
    // 0x80037F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80037F9C:
    // 0x80037F9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037FA0: jr          $ra
    // 0x80037FA4: nop

    return;
    // 0x80037FA4: nop

;}
RECOMP_FUNC void func_80037FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037FA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037FAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037FB0: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037FB4: jal         0x800296E0
    // 0x80037FB8: addiu       $a0, $a0, 0x7FCC
    ctx->r4 = ADD32(ctx->r4, 0X7FCC);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x80037FB8: addiu       $a0, $a0, 0x7FCC
    ctx->r4 = ADD32(ctx->r4, 0X7FCC);
    after_0:
    // 0x80037FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037FC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037FC4: jr          $ra
    // 0x80037FC8: nop

    return;
    // 0x80037FC8: nop

;}
RECOMP_FUNC void func_80037FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037FCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037FD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037FD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037FD8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80037FDC: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80037FE0: addiu       $a0, $a0, 0x7FFC
    ctx->r4 = ADD32(ctx->r4, 0X7FFC);
    // 0x80037FE4: jal         0x8004AD90
    // 0x80037FE8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_8004AD90(rdram, ctx);
        goto after_0;
    // 0x80037FE8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x80037FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037FF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037FF4: jr          $ra
    // 0x80037FF8: nop

    return;
    // 0x80037FF8: nop

;}
RECOMP_FUNC void func_80037FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037FFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80038000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80038004: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80038008: jal         0x8002A320
    // 0x8003800C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002A320(rdram, ctx);
        goto after_0;
    // 0x8003800C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80038010: jal         0x80029520
    // 0x80038014: nop

    func_80029520(rdram, ctx);
        goto after_1;
    // 0x80038014: nop

    after_1:
    // 0x80038018: jal         0x8002F2AC
    // 0x8003801C: nop

    func_8002F2AC(rdram, ctx);
        goto after_2;
    // 0x8003801C: nop

    after_2:
    // 0x80038020: jal         0x80020270
    // 0x80038024: nop

    func_80020270(rdram, ctx);
        goto after_3;
    // 0x80038024: nop

    after_3:
    // 0x80038028: jal         0x8000E300
    // 0x8003802C: nop

    func_8000E300(rdram, ctx);
        goto after_4;
    // 0x8003802C: nop

    after_4:
    // 0x80038030: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80038034: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80038038: addiu       $t6, $t6, -0x7FA0
    ctx->r14 = ADD32(ctx->r14, -0X7FA0);
    // 0x8003803C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80038040: addiu       $a0, $a0, 0x7404
    ctx->r4 = ADD32(ctx->r4, 0X7404);
    // 0x80038044: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80038048: jal         0x8002989C
    // 0x8003804C: sw          $t6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r14;
    func_8002989C(rdram, ctx);
        goto after_5;
    // 0x8003804C: sw          $t6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r14;
    after_5:
    // 0x80038050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80038054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038058: jr          $ra
    // 0x8003805C: nop

    return;
    // 0x8003805C: nop

;}
RECOMP_FUNC void func_80038060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80038064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80038068: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003806C: jal         0x800364A8
    // 0x80038070: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800364A8(rdram, ctx);
        goto after_0;
    // 0x80038070: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80038074: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80038078: sb          $zero, -0x301C($at)
    MEM_B(-0X301C, ctx->r1) = 0;
    // 0x8003807C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80038080: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80038084: sh          $t6, 0x5220($at)
    MEM_H(0X5220, ctx->r1) = ctx->r14;
    // 0x80038088: jal         0x8001B854
    // 0x8003808C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8001B854(rdram, ctx);
        goto after_1;
    // 0x8003808C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x80038090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80038094: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038098: jr          $ra
    // 0x8003809C: nop

    return;
    // 0x8003809C: nop

;}
RECOMP_FUNC void func_800380A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800380A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800380A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800380A8: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800380AC: jal         0x800296E0
    // 0x800380B0: addiu       $a0, $a0, -0x7F3C
    ctx->r4 = ADD32(ctx->r4, -0X7F3C);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x800380B0: addiu       $a0, $a0, -0x7F3C
    ctx->r4 = ADD32(ctx->r4, -0X7F3C);
    after_0:
    // 0x800380B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800380B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800380BC: jr          $ra
    // 0x800380C0: nop

    return;
    // 0x800380C0: nop

;}
RECOMP_FUNC void func_800380C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800380C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800380C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800380CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800380D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800380D4: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800380D8: addiu       $a0, $a0, -0x7F0C
    ctx->r4 = ADD32(ctx->r4, -0X7F0C);
    // 0x800380DC: jal         0x8004AD90
    // 0x800380E0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_8004AD90(rdram, ctx);
        goto after_0;
    // 0x800380E0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x800380E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800380E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800380EC: jr          $ra
    // 0x800380F0: nop

    return;
    // 0x800380F0: nop

;}
RECOMP_FUNC void func_800380F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800380F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800380F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800380FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80038100: jal         0x8002A320
    // 0x80038104: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002A320(rdram, ctx);
        goto after_0;
    // 0x80038104: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80038108: jal         0x80029520
    // 0x8003810C: nop

    func_80029520(rdram, ctx);
        goto after_1;
    // 0x8003810C: nop

    after_1:
    // 0x80038110: jal         0x8002F2AC
    // 0x80038114: nop

    func_8002F2AC(rdram, ctx);
        goto after_2;
    // 0x80038114: nop

    after_2:
    // 0x80038118: jal         0x80020270
    // 0x8003811C: nop

    func_80020270(rdram, ctx);
        goto after_3;
    // 0x8003811C: nop

    after_3:
    // 0x80038120: jal         0x8000E300
    // 0x80038124: nop

    func_8000E300(rdram, ctx);
        goto after_4;
    // 0x80038124: nop

    after_4:
    // 0x80038128: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003812C: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80038130: addiu       $t6, $t6, -0x7EA8
    ctx->r14 = ADD32(ctx->r14, -0X7EA8);
    // 0x80038134: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80038138: addiu       $a0, $a0, 0x7404
    ctx->r4 = ADD32(ctx->r4, 0X7404);
    // 0x8003813C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80038140: jal         0x8002989C
    // 0x80038144: sw          $t6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r14;
    func_8002989C(rdram, ctx);
        goto after_5;
    // 0x80038144: sw          $t6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r14;
    after_5:
    // 0x80038148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003814C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038150: jr          $ra
    // 0x80038154: nop

    return;
    // 0x80038154: nop

;}
RECOMP_FUNC void func_80038158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038158: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003815C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80038160: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80038164: jal         0x800364A8
    // 0x80038168: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800364A8(rdram, ctx);
        goto after_0;
    // 0x80038168: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003816C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80038170: sb          $zero, -0x301C($at)
    MEM_B(-0X301C, ctx->r1) = 0;
    // 0x80038174: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80038178: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003817C: jal         0x80039754
    // 0x80038180: sh          $t6, 0x5220($at)
    MEM_H(0X5220, ctx->r1) = ctx->r14;
    func_80039754(rdram, ctx);
        goto after_1;
    // 0x80038180: sh          $t6, 0x5220($at)
    MEM_H(0X5220, ctx->r1) = ctx->r14;
    after_1:
    // 0x80038184: jal         0x8001B854
    // 0x80038188: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_8001B854(rdram, ctx);
        goto after_2;
    // 0x80038188: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x8003818C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80038190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038194: jr          $ra
    // 0x80038198: nop

    return;
    // 0x80038198: nop

;}
RECOMP_FUNC void func_8003819C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003819C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800381A0: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x800381A4: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x800381A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800381AC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800381B0: addu        $v1, $t7, $a2
    ctx->r3 = ADD32(ctx->r15, ctx->r6);
    // 0x800381B4: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x800381B8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800381BC: sw          $t8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r24;
    // 0x800381C0: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x800381C4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x800381C8: sh          $t9, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r25;
    // 0x800381CC: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x800381D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800381D4: andi        $t0, $v0, 0x80
    ctx->r8 = ctx->r2 & 0X80;
    // 0x800381D8: beq         $t0, $zero, L_80038254
    if (ctx->r8 == 0) {
        // 0x800381DC: andi        $t1, $v0, 0xC0
        ctx->r9 = ctx->r2 & 0XC0;
            goto L_80038254;
    }
    // 0x800381DC: andi        $t1, $v0, 0xC0
    ctx->r9 = ctx->r2 & 0XC0;
    // 0x800381E0: beq         $t1, $zero, L_800381FC
    if (ctx->r9 == 0) {
        // 0x800381E4: nop
    
            goto L_800381FC;
    }
    // 0x800381E4: nop

    // 0x800381E8: lbu         $t3, 0xB($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XB);
    // 0x800381EC: nop

    // 0x800381F0: ori         $t4, $t3, 0x20
    ctx->r12 = ctx->r11 | 0X20;
    // 0x800381F4: b           L_8003820C
    // 0x800381F8: sb          $t4, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r12;
        goto L_8003820C;
    // 0x800381F8: sb          $t4, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r12;
L_800381FC:
    // 0x800381FC: lbu         $t5, 0xB($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0XB);
    // 0x80038200: nop

    // 0x80038204: andi        $t6, $t5, 0xFFDF
    ctx->r14 = ctx->r13 & 0XFFDF;
    // 0x80038208: sb          $t6, 0xB($a3)
    MEM_B(0XB, ctx->r7) = ctx->r14;
L_8003820C:
    // 0x8003820C: lbu         $t7, 0x2($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X2);
    // 0x80038210: nop

    // 0x80038214: andi        $t8, $t7, 0xA0
    ctx->r24 = ctx->r15 & 0XA0;
    // 0x80038218: beq         $t8, $zero, L_8003823C
    if (ctx->r24 == 0) {
        // 0x8003821C: nop
    
            goto L_8003823C;
    }
    // 0x8003821C: nop

    // 0x80038220: lbu         $t0, 0xB($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0XB);
    // 0x80038224: nop

    // 0x80038228: ori         $t1, $t0, 0x10
    ctx->r9 = ctx->r8 | 0X10;
    // 0x8003822C: sb          $t1, 0xB($a3)
    MEM_B(0XB, ctx->r7) = ctx->r9;
    // 0x80038230: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80038234: b           L_80038258
    // 0x80038238: andi        $t4, $v0, 0x3F
    ctx->r12 = ctx->r2 & 0X3F;
        goto L_80038258;
    // 0x80038238: andi        $t4, $v0, 0x3F
    ctx->r12 = ctx->r2 & 0X3F;
L_8003823C:
    // 0x8003823C: lbu         $t2, 0xB($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0XB);
    // 0x80038240: nop

    // 0x80038244: andi        $t3, $t2, 0xFFEF
    ctx->r11 = ctx->r10 & 0XFFEF;
    // 0x80038248: sb          $t3, 0xB($a3)
    MEM_B(0XB, ctx->r7) = ctx->r11;
    // 0x8003824C: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80038250: nop

L_80038254:
    // 0x80038254: andi        $t4, $v0, 0x3F
    ctx->r12 = ctx->r2 & 0X3F;
L_80038258:
    // 0x80038258: beq         $t4, $zero, L_8003827C
    if (ctx->r12 == 0) {
        // 0x8003825C: sw          $t4, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r12;
            goto L_8003827C;
    }
    // 0x8003825C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80038260: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80038264: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80038268: jal         0x8001D4C0
    // 0x8003826C: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    func_8001D4C0(rdram, ctx);
        goto after_0;
    // 0x8003826C: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_0:
    // 0x80038270: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80038274: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80038278: sb          $v0, 0x5($a3)
    MEM_B(0X5, ctx->r7) = ctx->r2;
L_8003827C:
    // 0x8003827C: lbu         $t6, 0x3($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X3);
    // 0x80038280: nop

    // 0x80038284: beq         $t6, $zero, L_8003829C
    if (ctx->r14 == 0) {
        // 0x80038288: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003829C;
    }
    // 0x80038288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003828C: lbu         $t7, 0x2($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X2);
    // 0x80038290: nop

    // 0x80038294: sh          $t7, 0x6($a3)
    MEM_H(0X6, ctx->r7) = ctx->r15;
    // 0x80038298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003829C:
    // 0x8003829C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800382A0: jr          $ra
    // 0x800382A4: nop

    return;
    // 0x800382A4: nop

;}
RECOMP_FUNC void func_800382A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800382A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800382AC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800382B0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800382B4: lui         $s1, 0x8011
    ctx->r17 = S32(0X8011 << 16);
    // 0x800382B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800382BC: addiu       $s1, $s1, 0x37B0
    ctx->r17 = ADD32(ctx->r17, 0X37B0);
    // 0x800382C0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800382C4: sll         $t6, $s0, 5
    ctx->r14 = S32(ctx->r16 << 5);
L_800382C8:
    // 0x800382C8: addu        $a0, $s1, $t6
    ctx->r4 = ADD32(ctx->r17, ctx->r14);
    // 0x800382CC: jal         0x8005B2C8
    // 0x800382D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8005B2C8(rdram, ctx);
        goto after_0;
    // 0x800382D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x800382D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800382D8: sll         $t7, $s0, 16
    ctx->r15 = S32(ctx->r16 << 16);
    // 0x800382DC: sra         $s0, $t7, 16
    ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800382E0: slti        $at, $s0, 0x24
    ctx->r1 = SIGNED(ctx->r16) < 0X24 ? 1 : 0;
    // 0x800382E4: bne         $at, $zero, L_800382C8
    if (ctx->r1 != 0) {
        // 0x800382E8: sll         $t6, $s0, 5
        ctx->r14 = S32(ctx->r16 << 5);
            goto L_800382C8;
    }
    // 0x800382E8: sll         $t6, $s0, 5
    ctx->r14 = S32(ctx->r16 << 5);
    // 0x800382EC: addiu       $s0, $zero, 0x2A
    ctx->r16 = ADD32(0, 0X2A);
L_800382F0:
    // 0x800382F0: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800382F4: addiu       $t0, $t0, 0x37B0
    ctx->r8 = ADD32(ctx->r8, 0X37B0);
    // 0x800382F8: sll         $t9, $s0, 5
    ctx->r25 = S32(ctx->r16 << 5);
    // 0x800382FC: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x80038300: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80038304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80038308:
    // 0x80038308: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x8003830C: addu        $v0, $a1, $t1
    ctx->r2 = ADD32(ctx->r5, ctx->r9);
    // 0x80038310: sb          $v1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r3;
    // 0x80038314: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80038318: sll         $t2, $v1, 16
    ctx->r10 = S32(ctx->r3 << 16);
    // 0x8003831C: sra         $v1, $t2, 16
    ctx->r3 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80038320: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80038324: bne         $at, $zero, L_80038308
    if (ctx->r1 != 0) {
        // 0x80038328: sb          $a0, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r4;
            goto L_80038308;
    }
    // 0x80038328: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
    // 0x8003832C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80038330: sll         $t4, $s0, 16
    ctx->r12 = S32(ctx->r16 << 16);
    // 0x80038334: sra         $s0, $t4, 16
    ctx->r16 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80038338: slti        $at, $s0, 0x2C
    ctx->r1 = SIGNED(ctx->r16) < 0X2C ? 1 : 0;
    // 0x8003833C: bne         $at, $zero, L_800382F0
    if (ctx->r1 != 0) {
        // 0x80038340: nop
    
            goto L_800382F0;
    }
    // 0x80038340: nop

    // 0x80038344: jal         0x80038360
    // 0x80038348: nop

    func_80038360(rdram, ctx);
        goto after_1;
    // 0x80038348: nop

    after_1:
    // 0x8003834C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80038350: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80038354: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80038358: jr          $ra
    // 0x8003835C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8003835C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80038360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038360: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x80038364: addiu       $t1, $t1, 0x7B00
    ctx->r9 = ADD32(ctx->r9, 0X7B00);
    // 0x80038368: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x8003836C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
L_80038370:
    // 0x80038370: addu        $t7, $t1, $t6
    ctx->r15 = ADD32(ctx->r9, ctx->r14);
    // 0x80038374: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80038378: addiu       $t9, $t9, 0x37B0
    ctx->r25 = ADD32(ctx->r25, 0X37B0);
    // 0x8003837C: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x80038380: lw          $v1, -0x90($t7)
    ctx->r3 = MEM_W(ctx->r15, -0X90);
    // 0x80038384: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x80038388: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8003838C:
    // 0x8003838C: sll         $a2, $a0, 1
    ctx->r6 = S32(ctx->r4 << 1);
    // 0x80038390: addu        $t0, $v1, $a2
    ctx->r8 = ADD32(ctx->r3, ctx->r6);
    // 0x80038394: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x80038398: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8003839C: addu        $a3, $a1, $a2
    ctx->r7 = ADD32(ctx->r5, ctx->r6);
    // 0x800383A0: sll         $t4, $a0, 16
    ctx->r12 = S32(ctx->r4 << 16);
    // 0x800383A4: sb          $t2, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r10;
    // 0x800383A8: lbu         $t3, 0x1($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X1);
    // 0x800383AC: sra         $a0, $t4, 16
    ctx->r4 = S32(SIGNED(ctx->r12) >> 16);
    // 0x800383B0: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x800383B4: bne         $at, $zero, L_8003838C
    if (ctx->r1 != 0) {
        // 0x800383B8: sb          $t3, 0x1($a3)
        MEM_B(0X1, ctx->r7) = ctx->r11;
            goto L_8003838C;
    }
    // 0x800383B8: sb          $t3, 0x1($a3)
    MEM_B(0X1, ctx->r7) = ctx->r11;
    // 0x800383BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800383C0: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x800383C4: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800383C8: slti        $at, $v0, 0x2A
    ctx->r1 = SIGNED(ctx->r2) < 0X2A ? 1 : 0;
    // 0x800383CC: bne         $at, $zero, L_80038370
    if (ctx->r1 != 0) {
        // 0x800383D0: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_80038370;
    }
    // 0x800383D0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800383D4: jr          $ra
    // 0x800383D8: nop

    return;
    // 0x800383D8: nop

;}
RECOMP_FUNC void func_800383DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800383DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800383E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800383E4: jal         0x80038404
    // 0x800383E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80038404(rdram, ctx);
        goto after_0;
    // 0x800383E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800383EC: jal         0x80038404
    // 0x800383F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038404(rdram, ctx);
        goto after_1;
    // 0x800383F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800383F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800383F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800383FC: jr          $ra
    // 0x80038400: nop

    return;
    // 0x80038400: nop

;}
RECOMP_FUNC void func_80038404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038404: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80038408: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003840C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80038410: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80038414: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80038418: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003841C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80038420: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80038424: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80038428: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8003842C: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x80038430: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80038434: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x80038438: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8003843C: addiu       $a2, $a2, 0x37B0
    ctx->r6 = ADD32(ctx->r6, 0X37B0);
    // 0x80038440: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80038444: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80038448:
    // 0x80038448: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x8003844C: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x80038450: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x80038454: addu        $t1, $a2, $t0
    ctx->r9 = ADD32(ctx->r6, ctx->r8);
    // 0x80038458: addu        $t2, $t1, $a0
    ctx->r10 = ADD32(ctx->r9, ctx->r4);
    // 0x8003845C: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x80038460: addu        $a1, $v1, $a0
    ctx->r5 = ADD32(ctx->r3, ctx->r4);
    // 0x80038464: sb          $t3, 0x2E8($a1)
    MEM_B(0X2E8, ctx->r5) = ctx->r11;
    // 0x80038468: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x8003846C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80038470: sll         $t5, $t4, 5
    ctx->r13 = S32(ctx->r12 << 5);
    // 0x80038474: addu        $t6, $a2, $t5
    ctx->r14 = ADD32(ctx->r6, ctx->r13);
    // 0x80038478: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x8003847C: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x80038480: lbu         $t8, 0x1($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1);
    // 0x80038484: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80038488: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8003848C: bne         $at, $zero, L_80038448
    if (ctx->r1 != 0) {
        // 0x80038490: sb          $t8, 0x2E9($a1)
        MEM_B(0X2E9, ctx->r5) = ctx->r24;
            goto L_80038448;
    }
    // 0x80038490: sb          $t8, 0x2E9($a1)
    MEM_B(0X2E9, ctx->r5) = ctx->r24;
    // 0x80038494: jr          $ra
    // 0x80038498: nop

    return;
    // 0x80038498: nop

;}
RECOMP_FUNC void func_8003849C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003849C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800384A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800384A4: jal         0x800384C4
    // 0x800384A8: nop

    func_800384C4(rdram, ctx);
        goto after_0;
    // 0x800384A8: nop

    after_0:
    // 0x800384AC: jal         0x80038500
    // 0x800384B0: nop

    func_80038500(rdram, ctx);
        goto after_1;
    // 0x800384B0: nop

    after_1:
    // 0x800384B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800384B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800384BC: jr          $ra
    // 0x800384C0: nop

    return;
    // 0x800384C0: nop

;}
RECOMP_FUNC void func_800384C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800384C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800384C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800384CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800384D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800384D4:
    // 0x800384D4: jal         0x8003853C
    // 0x800384D8: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_8003853C(rdram, ctx);
        goto after_0;
    // 0x800384D8: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x800384DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800384E0: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x800384E4: slti        $at, $t6, 0x2A
    ctx->r1 = SIGNED(ctx->r14) < 0X2A ? 1 : 0;
    // 0x800384E8: bne         $at, $zero, L_800384D4
    if (ctx->r1 != 0) {
        // 0x800384EC: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_800384D4;
    }
    // 0x800384EC: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x800384F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800384F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800384F8: jr          $ra
    // 0x800384FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800384FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80038500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80038500: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80038504: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80038508: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003850C: addiu       $s0, $zero, 0x2A
    ctx->r16 = ADD32(0, 0X2A);
L_80038510:
    // 0x80038510: jal         0x8003853C
    // 0x80038514: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_8003853C(rdram, ctx);
        goto after_0;
    // 0x80038514: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x80038518: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003851C: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x80038520: slti        $at, $t6, 0x2C
    ctx->r1 = SIGNED(ctx->r14) < 0X2C ? 1 : 0;
    // 0x80038524: bne         $at, $zero, L_80038510
    if (ctx->r1 != 0) {
        // 0x80038528: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_80038510;
    }
    // 0x80038528: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8003852C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80038530: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80038534: jr          $ra
    // 0x80038538: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80038538: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003853C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003853C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80038540: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80038544: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80038548: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x8003854C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80038550: addiu       $t9, $t9, 0x3D30
    ctx->r25 = ADD32(ctx->r25, 0X3D30);
    // 0x80038554: sll         $t8, $t6, 7
    ctx->r24 = S32(ctx->r14 << 7);
    // 0x80038558: lw          $v0, 0x7278($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7278);
    // 0x8003855C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80038560: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80038564: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80038568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8003856C:
    // 0x8003856C: sll         $a0, $a1, 3
    ctx->r4 = S32(ctx->r5 << 3);
    // 0x80038570: addu        $a2, $a0, $v0
    ctx->r6 = ADD32(ctx->r4, ctx->r2);
    // 0x80038574: addu        $t1, $t0, $a0
    ctx->r9 = ADD32(ctx->r8, ctx->r4);
    // 0x80038578: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8003857C: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
L_80038580:
    // 0x80038580: addu        $t3, $a3, $a2
    ctx->r11 = ADD32(ctx->r7, ctx->r6);
    // 0x80038584: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80038588: addu        $t5, $t1, $t2
    ctx->r13 = ADD32(ctx->r9, ctx->r10);
    // 0x8003858C: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x80038590: andi        $t2, $a3, 0xFF
    ctx->r10 = ctx->r7 & 0XFF;
    // 0x80038594: slti        $at, $t2, 0x8
    ctx->r1 = SIGNED(ctx->r10) < 0X8 ? 1 : 0;
    // 0x80038598: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x8003859C: bne         $at, $zero, L_80038580
    if (ctx->r1 != 0) {
        // 0x800385A0: sb          $t4, 0x0($t5)
        MEM_B(0X0, ctx->r13) = ctx->r12;
            goto L_80038580;
    }
    // 0x800385A0: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
    // 0x800385A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800385A8: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    // 0x800385AC: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x800385B0: bne         $at, $zero, L_8003856C
    if (ctx->r1 != 0) {
        // 0x800385B4: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8003856C;
    }
    // 0x800385B4: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x800385B8: jr          $ra
    // 0x800385BC: nop

    return;
    // 0x800385BC: nop

;}
