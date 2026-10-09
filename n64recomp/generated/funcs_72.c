#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_802787A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802787A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802787AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802787B0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802787B4: addiu       $a0, $a0, -0x781C
    ctx->r4 = ADD32(ctx->r4, -0X781C);
    // 0x802787B8: jal         0x800293DC
    // 0x802787BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x802787BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x802787C0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x802787C4: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x802787C8: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x802787CC: jal         0x8027894C
    // 0x802787D0: nop

    func_8027894C(rdram, ctx);
        goto after_1;
    // 0x802787D0: nop

    after_1:
    // 0x802787D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802787D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802787DC: jr          $ra
    // 0x802787E0: nop

    return;
    // 0x802787E0: nop

;}
RECOMP_FUNC void func_802787E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802787E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802787E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802787EC: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x802787F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802787F4: lb          $v0, 0x38($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X38);
    // 0x802787F8: lbu         $v1, 0x3A($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X3A);
    // 0x802787FC: lbu         $t0, 0x3D($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X3D);
    // 0x80278800: beq         $v0, $at, L_80278828
    if (ctx->r2 == ctx->r1) {
        // 0x80278804: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80278828;
    }
    // 0x80278804: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80278808: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027880C: beq         $v0, $at, L_802788B0
    if (ctx->r2 == ctx->r1) {
        // 0x80278810: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_802788B0;
    }
    // 0x80278810: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80278814: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80278818: jal         0x8002A468
    // 0x8027881C: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x8027881C: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_0:
    // 0x80278820: b           L_80278940
    // 0x80278824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278940;
    // 0x80278824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278828:
    // 0x80278828: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8027882C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80278830: sb          $v1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r3;
    // 0x80278834: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80278838: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8027883C: jal         0x8027894C
    // 0x80278840: sb          $t0, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r8;
    func_8027894C(rdram, ctx);
        goto after_1;
    // 0x80278840: sb          $t0, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r8;
    after_1:
    // 0x80278844: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80278848: lbu         $v1, 0x1F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1F);
    // 0x8027884C: lb          $v0, 0x3E($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3E);
    // 0x80278850: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80278854: lbu         $t0, 0x1D($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1D);
    // 0x80278858: beq         $v0, $zero, L_80278874
    if (ctx->r2 == 0) {
        // 0x8027885C: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_80278874;
    }
    // 0x8027885C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80278860: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80278864: beq         $v0, $at, L_80278884
    if (ctx->r2 == ctx->r1) {
        // 0x80278868: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_80278884;
    }
    // 0x80278868: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8027886C: b           L_80278940
    // 0x80278870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278940;
    // 0x80278870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278874:
    // 0x80278874: jal         0x8002A468
    // 0x80278878: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_2;
    // 0x80278878: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_2:
    // 0x8027887C: b           L_80278940
    // 0x80278880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278940;
    // 0x80278880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278884:
    // 0x80278884: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x80278888: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8027888C: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x80278890: addu        $t7, $t6, $t0
    ctx->r15 = ADD32(ctx->r14, ctx->r8);
    // 0x80278894: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80278898: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x8027889C: lbu         $a1, -0x6AA4($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X6AA4);
    // 0x802788A0: jal         0x80278A00
    // 0x802788A4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80278A00(rdram, ctx);
        goto after_3;
    // 0x802788A4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
    // 0x802788A8: b           L_80278940
    // 0x802788AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278940;
    // 0x802788AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802788B0:
    // 0x802788B0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x802788B4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802788B8: jal         0x8027894C
    // 0x802788BC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8027894C(rdram, ctx);
        goto after_4;
    // 0x802788BC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_4:
    // 0x802788C0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802788C4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x802788C8: lb          $t8, 0x42($a2)
    ctx->r24 = MEM_B(ctx->r6, 0X42);
    // 0x802788CC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x802788D0: bne         $t8, $zero, L_802788E8
    if (ctx->r24 != 0) {
        // 0x802788D4: nop
    
            goto L_802788E8;
    }
    // 0x802788D4: nop

    // 0x802788D8: jal         0x8002A468
    // 0x802788DC: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_5;
    // 0x802788DC: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_5:
    // 0x802788E0: b           L_80278940
    // 0x802788E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278940;
    // 0x802788E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802788E8:
    // 0x802788E8: lb          $v0, 0x43($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X43);
    // 0x802788EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802788F0: beq         $v0, $zero, L_80278914
    if (ctx->r2 == 0) {
        // 0x802788F4: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80278914;
    }
    // 0x802788F4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802788F8: beq         $v0, $at, L_80278924
    if (ctx->r2 == ctx->r1) {
        // 0x802788FC: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80278924;
    }
    // 0x802788FC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80278900: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80278904: beq         $v0, $at, L_80278934
    if (ctx->r2 == ctx->r1) {
        // 0x80278908: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80278934;
    }
    // 0x80278908: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8027890C: b           L_80278940
    // 0x80278910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278940;
    // 0x80278910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278914:
    // 0x80278914: jal         0x80278A00
    // 0x80278918: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80278A00(rdram, ctx);
        goto after_6;
    // 0x80278918: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x8027891C: b           L_80278940
    // 0x80278920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278940;
    // 0x80278920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278924:
    // 0x80278924: jal         0x80278A00
    // 0x80278928: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80278A00(rdram, ctx);
        goto after_7;
    // 0x80278928: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x8027892C: b           L_80278940
    // 0x80278930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278940;
    // 0x80278930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278934:
    // 0x80278934: jal         0x80278A00
    // 0x80278938: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80278A00(rdram, ctx);
        goto after_8;
    // 0x80278938: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x8027893C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278940:
    // 0x80278940: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80278944: jr          $ra
    // 0x80278948: nop

    return;
    // 0x80278948: nop

;}
RECOMP_FUNC void func_80278814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278814: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80278818: jal         0x8002A468
    // 0x8027881C: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x8027881C: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_0:
    // 0x80278820: b           L_80278940
    // 0x80278824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278940;
    // 0x80278824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278828: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8027882C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80278830: sb          $v1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r3;
    // 0x80278834: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80278838: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8027883C: jal         0x8027894C
    // 0x80278840: sb          $t0, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r8;
    func_8027894C(rdram, ctx);
        goto after_1;
    // 0x80278840: sb          $t0, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r8;
    after_1:
    // 0x80278844: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80278848: lbu         $v1, 0x1F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1F);
    // 0x8027884C: lb          $v0, 0x3E($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3E);
    // 0x80278850: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80278854: lbu         $t0, 0x1D($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1D);
    // 0x80278858: beq         $v0, $zero, L_80278874
    if (ctx->r2 == 0) {
        // 0x8027885C: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_80278874;
    }
    // 0x8027885C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80278860: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80278864: beq         $v0, $at, L_80278884
    if (ctx->r2 == ctx->r1) {
        // 0x80278868: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_80278884;
    }
    // 0x80278868: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8027886C: b           L_80278940
    // 0x80278870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278940;
    // 0x80278870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278874:
    // 0x80278874: jal         0x8002A468
    // 0x80278878: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_2;
    // 0x80278878: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_2:
    // 0x8027887C: b           L_80278940
    // 0x80278880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278940;
    // 0x80278880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278884:
    // 0x80278884: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x80278888: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8027888C: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x80278890: addu        $t7, $t6, $t0
    ctx->r15 = ADD32(ctx->r14, ctx->r8);
    // 0x80278894: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80278898: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x8027889C: lbu         $a1, -0x6AA4($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X6AA4);
    // 0x802788A0: jal         0x80278A00
    // 0x802788A4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80278A00(rdram, ctx);
        goto after_3;
    // 0x802788A4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
    // 0x802788A8: b           L_80278940
    // 0x802788AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278940;
    // 0x802788AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802788B0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x802788B4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802788B8: jal         0x8027894C
    // 0x802788BC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8027894C(rdram, ctx);
        goto after_4;
    // 0x802788BC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_4:
    // 0x802788C0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802788C4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x802788C8: lb          $t8, 0x42($a2)
    ctx->r24 = MEM_B(ctx->r6, 0X42);
    // 0x802788CC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x802788D0: bne         $t8, $zero, L_802788E8
    if (ctx->r24 != 0) {
        // 0x802788D4: nop
    
            goto L_802788E8;
    }
    // 0x802788D4: nop

    // 0x802788D8: jal         0x8002A468
    // 0x802788DC: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_5;
    // 0x802788DC: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_5:
    // 0x802788E0: b           L_80278940
    // 0x802788E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278940;
    // 0x802788E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802788E8:
    // 0x802788E8: lb          $v0, 0x43($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X43);
    // 0x802788EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802788F0: beq         $v0, $zero, L_80278914
    if (ctx->r2 == 0) {
        // 0x802788F4: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80278914;
    }
    // 0x802788F4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802788F8: beq         $v0, $at, L_80278924
    if (ctx->r2 == ctx->r1) {
        // 0x802788FC: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80278924;
    }
    // 0x802788FC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80278900: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80278904: beq         $v0, $at, L_80278934
    if (ctx->r2 == ctx->r1) {
        // 0x80278908: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80278934;
    }
    // 0x80278908: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8027890C: b           L_80278940
    // 0x80278910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278940;
    // 0x80278910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278914:
    // 0x80278914: jal         0x80278A00
    // 0x80278918: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80278A00(rdram, ctx);
        goto after_6;
    // 0x80278918: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x8027891C: b           L_80278940
    // 0x80278920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278940;
    // 0x80278920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278924:
    // 0x80278924: jal         0x80278A00
    // 0x80278928: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80278A00(rdram, ctx);
        goto after_7;
    // 0x80278928: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x8027892C: b           L_80278940
    // 0x80278930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278940;
    // 0x80278930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278934:
    // 0x80278934: jal         0x80278A00
    // 0x80278938: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80278A00(rdram, ctx);
        goto after_8;
    // 0x80278938: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x8027893C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278940:
    // 0x80278940: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80278944: jr          $ra
    // 0x80278948: nop

    return;
    // 0x80278948: nop

;}
RECOMP_FUNC void func_8027892C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027892C: b           L_80278940
    // 0x80278930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278940;
    // 0x80278930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278934: jal         0x80278A00
    // 0x80278938: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80278A00(rdram, ctx);
        goto after_0;
    // 0x80278938: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x8027893C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278940:
    // 0x80278940: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80278944: jr          $ra
    // 0x80278948: nop

    return;
    // 0x80278948: nop

;}
RECOMP_FUNC void func_8027894C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027894C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80278950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80278954: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x80278958: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027895C: beq         $v0, $at, L_80278978
    if (ctx->r2 == ctx->r1) {
        // 0x80278960: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80278978;
    }
    // 0x80278960: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80278964: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80278968: beq         $v0, $at, L_802789B8
    if (ctx->r2 == ctx->r1) {
        // 0x8027896C: nop
    
            goto L_802789B8;
    }
    // 0x8027896C: nop

    // 0x80278970: b           L_802789F4
    // 0x80278974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802789F4;
    // 0x80278974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278978:
    // 0x80278978: lb          $t6, 0x2E($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2E);
    // 0x8027897C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80278980: bne         $t6, $zero, L_802789A4
    if (ctx->r14 != 0) {
        // 0x80278984: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_802789A4;
    }
    // 0x80278984: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278988: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027898C: addiu       $a1, $a1, 0x136C
    ctx->r5 = ADD32(ctx->r5, 0X136C);
    // 0x80278990: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80278994: jal         0x8004A4AC
    // 0x80278998: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8004A4AC(rdram, ctx);
        goto after_0;
    // 0x80278998: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x8027899C: b           L_802789F4
    // 0x802789A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802789F4;
    // 0x802789A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802789A4:
    // 0x802789A4: addiu       $a1, $a1, 0x138A
    ctx->r5 = ADD32(ctx->r5, 0X138A);
    // 0x802789A8: jal         0x8004A4AC
    // 0x802789AC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8004A4AC(rdram, ctx);
        goto after_1;
    // 0x802789AC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x802789B0: b           L_802789F4
    // 0x802789B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802789F4;
    // 0x802789B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802789B8:
    // 0x802789B8: lb          $t7, 0x2E($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X2E);
    // 0x802789BC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802789C0: bne         $t7, $zero, L_802789E4
    if (ctx->r15 != 0) {
        // 0x802789C4: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_802789E4;
    }
    // 0x802789C4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802789C8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802789CC: addiu       $a1, $a1, 0x14A4
    ctx->r5 = ADD32(ctx->r5, 0X14A4);
    // 0x802789D0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802789D4: jal         0x8004A4AC
    // 0x802789D8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8004A4AC(rdram, ctx);
        goto after_2;
    // 0x802789D8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x802789DC: b           L_802789F4
    // 0x802789E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802789F4;
    // 0x802789E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802789E4:
    // 0x802789E4: addiu       $a1, $a1, 0x14C2
    ctx->r5 = ADD32(ctx->r5, 0X14C2);
    // 0x802789E8: jal         0x8004A4AC
    // 0x802789EC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8004A4AC(rdram, ctx);
        goto after_3;
    // 0x802789EC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x802789F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802789F4:
    // 0x802789F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802789F8: jr          $ra
    // 0x802789FC: nop

    return;
    // 0x802789FC: nop

;}
RECOMP_FUNC void func_80278A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278A00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80278A04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80278A08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80278A0C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80278A10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80278A14: jal         0x8002A468
    // 0x80278A18: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x80278A18: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    after_0:
    // 0x80278A1C: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
    // 0x80278A20: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80278A24: beq         $v0, $at, L_80278A48
    if (ctx->r2 == ctx->r1) {
        // 0x80278A28: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80278A48;
    }
    // 0x80278A28: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80278A2C: beq         $v0, $at, L_80278A54
    if (ctx->r2 == ctx->r1) {
        // 0x80278A30: lui         $a0, 0x801B
        ctx->r4 = S32(0X801B << 16);
            goto L_80278A54;
    }
    // 0x80278A30: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80278A34: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80278A38: beq         $v0, $at, L_80278A68
    if (ctx->r2 == ctx->r1) {
        // 0x80278A3C: lui         $a0, 0x801B
        ctx->r4 = S32(0X801B << 16);
            goto L_80278A68;
    }
    // 0x80278A3C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80278A40: b           L_80278A7C
    // 0x80278A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278A7C;
    // 0x80278A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278A48:
    // 0x80278A48: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80278A4C: b           L_80278A78
    // 0x80278A50: sb          $zero, 0x4($t6)
    MEM_B(0X4, ctx->r14) = 0;
        goto L_80278A78;
    // 0x80278A50: sb          $zero, 0x4($t6)
    MEM_B(0X4, ctx->r14) = 0;
L_80278A54:
    // 0x80278A54: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x80278A58: jal         0x8002A7B0
    // 0x80278A5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002A7B0(rdram, ctx);
        goto after_1;
    // 0x80278A5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80278A60: b           L_80278A78
    // 0x80278A64: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
        goto L_80278A78;
    // 0x80278A64: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
L_80278A68:
    // 0x80278A68: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x80278A6C: jal         0x8002A7B0
    // 0x80278A70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002A7B0(rdram, ctx);
        goto after_2;
    // 0x80278A70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80278A74: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
L_80278A78:
    // 0x80278A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278A7C:
    // 0x80278A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80278A80: jr          $ra
    // 0x80278A84: nop

    return;
    // 0x80278A84: nop

;}
RECOMP_FUNC void func_80278A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278A40: b           L_80278A7C
    // 0x80278A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278A7C;
    // 0x80278A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278A48: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80278A4C: b           L_80278A78
    // 0x80278A50: sb          $zero, 0x4($t6)
    MEM_B(0X4, ctx->r14) = 0;
        goto L_80278A78;
    // 0x80278A50: sb          $zero, 0x4($t6)
    MEM_B(0X4, ctx->r14) = 0;
    // 0x80278A54: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x80278A58: jal         0x8002A7B0
    // 0x80278A5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002A7B0(rdram, ctx);
        goto after_0;
    // 0x80278A5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80278A60: b           L_80278A78
    // 0x80278A64: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
        goto L_80278A78;
    // 0x80278A64: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x80278A68: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x80278A6C: jal         0x8002A7B0
    // 0x80278A70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002A7B0(rdram, ctx);
        goto after_1;
    // 0x80278A70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80278A74: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
L_80278A78:
    // 0x80278A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278A7C:
    // 0x80278A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80278A80: jr          $ra
    // 0x80278A84: nop

    return;
    // 0x80278A84: nop

;}
RECOMP_FUNC void func_80278A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278A88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80278A8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80278A90: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80278A94: addiu       $a0, $a0, -0x7550
    ctx->r4 = ADD32(ctx->r4, -0X7550);
    // 0x80278A98: jal         0x800293DC
    // 0x80278A9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80278A9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80278AA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278AA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80278AA8: jr          $ra
    // 0x80278AAC: nop

    return;
    // 0x80278AAC: nop

;}
RECOMP_FUNC void func_80278AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278AB0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80278AB4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80278AB8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80278ABC: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80278AC0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80278AC4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80278AC8: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    // 0x80278ACC: jal         0x8002A468
    // 0x80278AD0: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x80278AD0: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80278AD4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x80278AD8: nop

    // 0x80278ADC: lb          $t6, 0x38($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X38);
    // 0x80278AE0: nop

    // 0x80278AE4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80278AE8: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x80278AEC: beq         $at, $zero, L_80278CC0
    if (ctx->r1 == 0) {
        // 0x80278AF0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80278CC0;
    }
    // 0x80278AF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80278AF4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80278AF8: addu        $at, $at, $t7
    gpr jr_addend_80278B04 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80278AFC: lw          $t7, 0x1ECC($at)
    ctx->r15 = ADD32(ctx->r1, 0X1ECC);
    // 0x80278B00: nop

    // 0x80278B04: jr          $t7
    // 0x80278B08: nop

    switch (jr_addend_80278B04 >> 2) {
        case 0: goto L_80278B0C; break;
        case 1: goto L_80278CC0; break;
        case 2: goto L_80278B68; break;
        case 3: goto L_80278BB8; break;
        case 4: goto L_80278C50; break;
        case 5: goto L_80278C6C; break;
        case 6: goto L_80278CAC; break;
        case 7: goto L_80278CAC; break;
        case 8: goto L_80278B28; break;
        default: switch_error(__func__, 0x80278B04, 0x80281ECC);
    }
    // 0x80278B08: nop

L_80278B0C:
    // 0x80278B0C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278B10: addiu       $a1, $a1, 0x1194
    ctx->r5 = ADD32(ctx->r5, 0X1194);
    // 0x80278B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278B18: jal         0x8004A298
    // 0x80278B1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x80278B1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80278B20: b           L_80278CC4
    // 0x80278B24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80278CC4;
    // 0x80278B24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80278B28:
    // 0x80278B28: lb          $t8, 0x49($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X49);
    // 0x80278B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278B30: bne         $t8, $zero, L_80278B54
    if (ctx->r24 != 0) {
        // 0x80278B34: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80278B54;
    }
    // 0x80278B34: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278B38: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278B3C: addiu       $a1, $a1, 0x17FC
    ctx->r5 = ADD32(ctx->r5, 0X17FC);
    // 0x80278B40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278B44: jal         0x8004A298
    // 0x80278B48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_2;
    // 0x80278B48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80278B4C: b           L_80278CC4
    // 0x80278B50: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80278CC4;
    // 0x80278B50: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80278B54:
    // 0x80278B54: addiu       $a1, $a1, 0x17FC
    ctx->r5 = ADD32(ctx->r5, 0X17FC);
    // 0x80278B58: jal         0x8004A298
    // 0x80278B5C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_3;
    // 0x80278B5C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80278B60: b           L_80278CC4
    // 0x80278B64: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80278CC4;
    // 0x80278B64: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80278B68:
    // 0x80278B68: addiu       $t9, $zero, 0x90
    ctx->r25 = ADD32(0, 0X90);
    // 0x80278B6C: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x80278B70: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80278B74: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80278B78: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80278B7C: addiu       $t6, $zero, 0xB3
    ctx->r14 = ADD32(0, 0XB3);
    // 0x80278B80: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80278B84: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80278B88: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80278B8C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80278B90: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80278B94: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80278B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278B9C: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80278BA0: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    // 0x80278BA4: jal         0x8004A5E4
    // 0x80278BA8: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_8004A5E4(rdram, ctx);
        goto after_4;
    // 0x80278BA8: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_4:
    // 0x80278BAC: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x80278BB0: b           L_80278CC0
    // 0x80278BB4: sb          $t7, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r15;
        goto L_80278CC0;
    // 0x80278BB4: sb          $t7, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r15;
L_80278BB8:
    // 0x80278BB8: lb          $t8, 0x3A($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X3A);
    // 0x80278BBC: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x80278BC0: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80278BC4: lbu         $v0, 0x15BC($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X15BC);
    // 0x80278BC8: addiu       $t1, $zero, 0xE
    ctx->r9 = ADD32(0, 0XE);
    // 0x80278BCC: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80278BD0: addiu       $t2, $zero, 0xC2
    ctx->r10 = ADD32(0, 0XC2);
    // 0x80278BD4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80278BD8: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x80278BDC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80278BE0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80278BE4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80278BE8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80278BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278BF0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80278BF4: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x80278BF8: mflo        $t9
    ctx->r25 = lo;
    // 0x80278BFC: subu        $a3, $t2, $t9
    ctx->r7 = SUB32(ctx->r10, ctx->r25);
    // 0x80278C00: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x80278C04: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80278C08: addiu       $t9, $zero, 0xB3
    ctx->r25 = ADD32(0, 0XB3);
    // 0x80278C0C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80278C10: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80278C14: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80278C18: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80278C1C: mflo        $t6
    ctx->r14 = lo;
    // 0x80278C20: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80278C24: jal         0x8004A5E4
    // 0x80278C28: nop

    func_8004A5E4(rdram, ctx);
        goto after_5;
    // 0x80278C28: nop

    after_5:
    // 0x80278C2C: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x80278C30: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80278C34: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278C38: sb          $t3, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r11;
    // 0x80278C3C: addiu       $a1, $a1, 0x15CC
    ctx->r5 = ADD32(ctx->r5, 0X15CC);
    // 0x80278C40: jal         0x8004A298
    // 0x80278C44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_6;
    // 0x80278C44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x80278C48: b           L_80278CC4
    // 0x80278C4C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80278CC4;
    // 0x80278C4C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80278C50:
    // 0x80278C50: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278C54: addiu       $a1, $a1, 0x169C
    ctx->r5 = ADD32(ctx->r5, 0X169C);
    // 0x80278C58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278C5C: jal         0x8004A298
    // 0x80278C60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_7;
    // 0x80278C60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80278C64: b           L_80278CC4
    // 0x80278C68: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80278CC4;
    // 0x80278C68: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80278C6C:
    // 0x80278C6C: lb          $t4, 0x4C($v1)
    ctx->r12 = MEM_B(ctx->r3, 0X4C);
    // 0x80278C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278C74: bne         $t4, $zero, L_80278C98
    if (ctx->r12 != 0) {
        // 0x80278C78: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80278C98;
    }
    // 0x80278C78: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278C7C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278C80: addiu       $a1, $a1, 0x1754
    ctx->r5 = ADD32(ctx->r5, 0X1754);
    // 0x80278C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278C88: jal         0x8004A298
    // 0x80278C8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_8;
    // 0x80278C8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x80278C90: b           L_80278CC4
    // 0x80278C94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80278CC4;
    // 0x80278C94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80278C98:
    // 0x80278C98: addiu       $a1, $a1, 0x175E
    ctx->r5 = ADD32(ctx->r5, 0X175E);
    // 0x80278C9C: jal         0x8004A298
    // 0x80278CA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_9;
    // 0x80278CA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x80278CA4: b           L_80278CC4
    // 0x80278CA8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80278CC4;
    // 0x80278CA8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80278CAC:
    // 0x80278CAC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278CB0: addiu       $a1, $a1, 0x1358
    ctx->r5 = ADD32(ctx->r5, 0X1358);
    // 0x80278CB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278CB8: jal         0x8004A298
    // 0x80278CBC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_10;
    // 0x80278CBC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_10:
L_80278CC0:
    // 0x80278CC0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80278CC4:
    // 0x80278CC4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80278CC8: jr          $ra
    // 0x80278CCC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80278CCC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80278AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278AD4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x80278AD8: nop

    // 0x80278ADC: lb          $t6, 0x38($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X38);
    // 0x80278AE0: nop

    // 0x80278AE4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80278AE8: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x80278AEC: beq         $at, $zero, L_80278CC0
    if (ctx->r1 == 0) {
        // 0x80278AF0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80278CC0;
    }
    // 0x80278AF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80278AF4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80278AF8: addu        $at, $at, $t7
    gpr jr_addend_80278B04 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80278AFC: lw          $t7, 0x1ECC($at)
    ctx->r15 = ADD32(ctx->r1, 0X1ECC);
    // 0x80278B00: nop

    // 0x80278B04: jr          $t7
    // 0x80278B08: nop

    switch (jr_addend_80278B04 >> 2) {
        case 0: goto L_80278B0C; break;
        case 1: goto L_80278CC0; break;
        case 2: goto L_80278B68; break;
        case 3: goto L_80278BB8; break;
        case 4: goto L_80278C50; break;
        case 5: goto L_80278C6C; break;
        case 6: goto L_80278CAC; break;
        case 7: goto L_80278CAC; break;
        case 8: goto L_80278B28; break;
        default: switch_error(__func__, 0x80278B04, 0x80281ECC);
    }
    // 0x80278B08: nop

L_80278B0C:
    // 0x80278B0C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278B10: addiu       $a1, $a1, 0x1194
    ctx->r5 = ADD32(ctx->r5, 0X1194);
    // 0x80278B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278B18: jal         0x8004A298
    // 0x80278B1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_0;
    // 0x80278B1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80278B20: b           L_80278CC4
    // 0x80278B24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80278CC4;
    // 0x80278B24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80278B28:
    // 0x80278B28: lb          $t8, 0x49($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X49);
    // 0x80278B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278B30: bne         $t8, $zero, L_80278B54
    if (ctx->r24 != 0) {
        // 0x80278B34: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80278B54;
    }
    // 0x80278B34: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278B38: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278B3C: addiu       $a1, $a1, 0x17FC
    ctx->r5 = ADD32(ctx->r5, 0X17FC);
    // 0x80278B40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278B44: jal         0x8004A298
    // 0x80278B48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x80278B48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80278B4C: b           L_80278CC4
    // 0x80278B50: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80278CC4;
    // 0x80278B50: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80278B54:
    // 0x80278B54: addiu       $a1, $a1, 0x17FC
    ctx->r5 = ADD32(ctx->r5, 0X17FC);
    // 0x80278B58: jal         0x8004A298
    // 0x80278B5C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_2;
    // 0x80278B5C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x80278B60: b           L_80278CC4
    // 0x80278B64: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80278CC4;
    // 0x80278B64: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80278B68:
    // 0x80278B68: addiu       $t9, $zero, 0x90
    ctx->r25 = ADD32(0, 0X90);
    // 0x80278B6C: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x80278B70: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80278B74: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80278B78: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80278B7C: addiu       $t6, $zero, 0xB3
    ctx->r14 = ADD32(0, 0XB3);
    // 0x80278B80: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80278B84: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80278B88: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80278B8C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80278B90: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80278B94: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80278B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278B9C: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80278BA0: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    // 0x80278BA4: jal         0x8004A5E4
    // 0x80278BA8: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_8004A5E4(rdram, ctx);
        goto after_3;
    // 0x80278BA8: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_3:
    // 0x80278BAC: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x80278BB0: b           L_80278CC0
    // 0x80278BB4: sb          $t7, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r15;
        goto L_80278CC0;
    // 0x80278BB4: sb          $t7, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r15;
L_80278BB8:
    // 0x80278BB8: lb          $t8, 0x3A($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X3A);
    // 0x80278BBC: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x80278BC0: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80278BC4: lbu         $v0, 0x15BC($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X15BC);
    // 0x80278BC8: addiu       $t1, $zero, 0xE
    ctx->r9 = ADD32(0, 0XE);
    // 0x80278BCC: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80278BD0: addiu       $t2, $zero, 0xC2
    ctx->r10 = ADD32(0, 0XC2);
    // 0x80278BD4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80278BD8: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x80278BDC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80278BE0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80278BE4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80278BE8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80278BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278BF0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80278BF4: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x80278BF8: mflo        $t9
    ctx->r25 = lo;
    // 0x80278BFC: subu        $a3, $t2, $t9
    ctx->r7 = SUB32(ctx->r10, ctx->r25);
    // 0x80278C00: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x80278C04: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80278C08: addiu       $t9, $zero, 0xB3
    ctx->r25 = ADD32(0, 0XB3);
    // 0x80278C0C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80278C10: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80278C14: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80278C18: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80278C1C: mflo        $t6
    ctx->r14 = lo;
    // 0x80278C20: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80278C24: jal         0x8004A5E4
    // 0x80278C28: nop

    func_8004A5E4(rdram, ctx);
        goto after_4;
    // 0x80278C28: nop

    after_4:
    // 0x80278C2C: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x80278C30: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80278C34: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278C38: sb          $t3, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r11;
    // 0x80278C3C: addiu       $a1, $a1, 0x15CC
    ctx->r5 = ADD32(ctx->r5, 0X15CC);
    // 0x80278C40: jal         0x8004A298
    // 0x80278C44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_5;
    // 0x80278C44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80278C48: b           L_80278CC4
    // 0x80278C4C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80278CC4;
    // 0x80278C4C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80278C50:
    // 0x80278C50: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278C54: addiu       $a1, $a1, 0x169C
    ctx->r5 = ADD32(ctx->r5, 0X169C);
    // 0x80278C58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278C5C: jal         0x8004A298
    // 0x80278C60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_6;
    // 0x80278C60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x80278C64: b           L_80278CC4
    // 0x80278C68: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80278CC4;
    // 0x80278C68: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80278C6C:
    // 0x80278C6C: lb          $t4, 0x4C($v1)
    ctx->r12 = MEM_B(ctx->r3, 0X4C);
    // 0x80278C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278C74: bne         $t4, $zero, L_80278C98
    if (ctx->r12 != 0) {
        // 0x80278C78: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80278C98;
    }
    // 0x80278C78: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278C7C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278C80: addiu       $a1, $a1, 0x1754
    ctx->r5 = ADD32(ctx->r5, 0X1754);
    // 0x80278C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278C88: jal         0x8004A298
    // 0x80278C8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_7;
    // 0x80278C8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80278C90: b           L_80278CC4
    // 0x80278C94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80278CC4;
    // 0x80278C94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80278C98:
    // 0x80278C98: addiu       $a1, $a1, 0x175E
    ctx->r5 = ADD32(ctx->r5, 0X175E);
    // 0x80278C9C: jal         0x8004A298
    // 0x80278CA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_8;
    // 0x80278CA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x80278CA4: b           L_80278CC4
    // 0x80278CA8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80278CC4;
    // 0x80278CA8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80278CAC:
    // 0x80278CAC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278CB0: addiu       $a1, $a1, 0x1358
    ctx->r5 = ADD32(ctx->r5, 0X1358);
    // 0x80278CB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278CB8: jal         0x8004A298
    // 0x80278CBC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_9;
    // 0x80278CBC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_9:
L_80278CC0:
    // 0x80278CC0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80278CC4:
    // 0x80278CC4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80278CC8: jr          $ra
    // 0x80278CCC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80278CCC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80278CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278CD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80278CD4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80278CD8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80278CDC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80278CE0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80278CE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80278CE8: addiu       $a0, $a0, -0x72BC
    ctx->r4 = ADD32(ctx->r4, -0X72BC);
    // 0x80278CEC: jal         0x800293DC
    // 0x80278CF0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80278CF0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x80278CF4: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80278CF8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80278CFC: beq         $s0, $s2, L_80278D2C
    if (ctx->r16 == ctx->r18) {
        // 0x80278D00: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80278D2C;
    }
    // 0x80278D00: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80278D04:
    // 0x80278D04: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x80278D08: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80278D0C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80278D10: jal         0x80278F00
    // 0x80278D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80278F00(rdram, ctx);
        goto after_1;
    // 0x80278D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80278D18: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80278D1C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80278D20: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x80278D24: bne         $s0, $s2, L_80278D04
    if (ctx->r16 != ctx->r18) {
        // 0x80278D28: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_80278D04;
    }
    // 0x80278D28: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_80278D2C:
    // 0x80278D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80278D30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80278D34: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80278D38: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80278D3C: jr          $ra
    // 0x80278D40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80278D40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80278D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278D44: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80278D48: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80278D4C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80278D50: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80278D54: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80278D58: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80278D5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80278D60: lw          $s4, 0x8($a0)
    ctx->r20 = MEM_W(ctx->r4, 0X8);
    // 0x80278D64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80278D68: lb          $v0, 0x38($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X38);
    // 0x80278D6C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80278D70: beq         $v0, $at, L_80278D98
    if (ctx->r2 == ctx->r1) {
        // 0x80278D74: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_80278D98;
    }
    // 0x80278D74: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80278D78: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80278D7C: beq         $v0, $at, L_80278E14
    if (ctx->r2 == ctx->r1) {
        // 0x80278D80: addiu       $s3, $zero, -0x1
        ctx->r19 = ADD32(0, -0X1);
            goto L_80278E14;
    }
    // 0x80278D80: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x80278D84: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80278D88: beq         $v0, $at, L_80278E14
    if (ctx->r2 == ctx->r1) {
        // 0x80278D8C: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_80278E14;
    }
    // 0x80278D8C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80278D90: b           L_80278E6C
    // 0x80278D94: nop

        goto L_80278E6C;
    // 0x80278D94: nop

L_80278D98:
    // 0x80278D98: jal         0x8002A468
    // 0x80278D9C: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x80278D9C: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    after_0:
    // 0x80278DA0: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x80278DA4: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x80278DA8: beq         $s2, $s3, L_80278E74
    if (ctx->r18 == ctx->r19) {
        // 0x80278DAC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80278E74;
    }
    // 0x80278DAC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80278DB0:
    // 0x80278DB0: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x80278DB4: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80278DB8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80278DBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278DC0: jal         0x80278F00
    // 0x80278DC4: or          $s2, $s1, $zero
    ctx->r18 = ctx->r17 | 0;
    func_80278F00(rdram, ctx);
        goto after_1;
    // 0x80278DC4: or          $s2, $s1, $zero
    ctx->r18 = ctx->r17 | 0;
    after_1:
    // 0x80278DC8: lb          $t7, 0x3A($s4)
    ctx->r15 = MEM_B(ctx->r20, 0X3A);
    // 0x80278DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278DD0: bne         $s2, $t7, L_80278DF0
    if (ctx->r18 != ctx->r15) {
        // 0x80278DD4: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80278DF0;
    }
    // 0x80278DD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80278DD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278DDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80278DE0: jal         0x8002135C
    // 0x80278DE4: addiu       $a2, $zero, 0xD1
    ctx->r6 = ADD32(0, 0XD1);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80278DE4: addiu       $a2, $zero, 0xD1
    ctx->r6 = ADD32(0, 0XD1);
    after_2:
    // 0x80278DE8: b           L_80278DFC
    // 0x80278DEC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_80278DFC;
    // 0x80278DEC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80278DF0:
    // 0x80278DF0: jal         0x8002135C
    // 0x80278DF4: addiu       $a2, $zero, 0xD0
    ctx->r6 = ADD32(0, 0XD0);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x80278DF4: addiu       $a2, $zero, 0xD0
    ctx->r6 = ADD32(0, 0XD0);
    after_3:
    // 0x80278DF8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80278DFC:
    // 0x80278DFC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80278E00: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x80278E04: bne         $s0, $s3, L_80278DB0
    if (ctx->r16 != ctx->r19) {
        // 0x80278E08: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_80278DB0;
    }
    // 0x80278E08: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x80278E0C: b           L_80278E78
    // 0x80278E10: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80278E78;
    // 0x80278E10: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80278E14:
    // 0x80278E14: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x80278E18: beq         $s2, $s3, L_80278E74
    if (ctx->r18 == ctx->r19) {
        // 0x80278E1C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80278E74;
    }
    // 0x80278E1C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80278E20: lui         $s4, 0x8028
    ctx->r20 = S32(0X8028 << 16);
    // 0x80278E24: lui         $s2, 0x8029
    ctx->r18 = S32(0X8029 << 16);
    // 0x80278E28: addiu       $s2, $s2, -0x79C8
    ctx->r18 = ADD32(ctx->r18, -0X79C8);
    // 0x80278E2C: addiu       $s4, $s4, 0x11F4
    ctx->r20 = ADD32(ctx->r20, 0X11F4);
L_80278E30:
    // 0x80278E30: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x80278E34: addu        $v0, $s4, $t0
    ctx->r2 = ADD32(ctx->r20, ctx->r8);
    // 0x80278E38: addu        $t9, $s2, $s1
    ctx->r25 = ADD32(ctx->r18, ctx->r17);
    // 0x80278E3C: lb          $a1, 0x0($t9)
    ctx->r5 = MEM_B(ctx->r25, 0X0);
    // 0x80278E40: lh          $a2, 0x0($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X0);
    // 0x80278E44: lh          $a3, 0x2($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X2);
    // 0x80278E48: jal         0x80278E94
    // 0x80278E4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80278E94(rdram, ctx);
        goto after_4;
    // 0x80278E4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80278E50: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80278E54: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80278E58: andi        $t1, $s1, 0xFF
    ctx->r9 = ctx->r17 & 0XFF;
    // 0x80278E5C: bne         $s0, $s3, L_80278E30
    if (ctx->r16 != ctx->r19) {
        // 0x80278E60: or          $s1, $t1, $zero
        ctx->r17 = ctx->r9 | 0;
            goto L_80278E30;
    }
    // 0x80278E60: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x80278E64: b           L_80278E78
    // 0x80278E68: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80278E78;
    // 0x80278E68: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80278E6C:
    // 0x80278E6C: jal         0x8002A468
    // 0x80278E70: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_5;
    // 0x80278E70: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_5:
L_80278E74:
    // 0x80278E74: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80278E78:
    // 0x80278E78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80278E7C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80278E80: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80278E84: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80278E88: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80278E8C: jr          $ra
    // 0x80278E90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80278E90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80278E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278E94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80278E98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80278E9C: lb          $t6, 0x1F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1F);
    // 0x80278EA0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80278EA4: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80278EA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80278EAC: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x80278EB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80278EB4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80278EB8: lw          $a3, 0x11B0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X11B0);
    // 0x80278EBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80278EC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80278EC4: jal         0x8004CD24
    // 0x80278EC8: addiu       $a1, $zero, 0x3E3
    ctx->r5 = ADD32(0, 0X3E3);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x80278EC8: addiu       $a1, $zero, 0x3E3
    ctx->r5 = ADD32(0, 0X3E3);
    after_0:
    // 0x80278ECC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80278ED0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80278ED4: jal         0x8002135C
    // 0x80278ED8: addiu       $a2, $zero, 0xD0
    ctx->r6 = ADD32(0, 0XD0);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80278ED8: addiu       $a2, $zero, 0xD0
    ctx->r6 = ADD32(0, 0XD0);
    after_1:
    // 0x80278EDC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80278EE0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x80278EE4: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80278EE8: jal         0x8004CD44
    // 0x80278EEC: nop

    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x80278EEC: nop

    after_2:
    // 0x80278EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80278EF8: jr          $ra
    // 0x80278EFC: nop

    return;
    // 0x80278EFC: nop

;}
RECOMP_FUNC void func_80278EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80278EF8: jr          $ra
    // 0x80278EFC: nop

    return;
    // 0x80278EFC: nop

;}
RECOMP_FUNC void func_80278F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80278F04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80278F08: lb          $t6, 0x1F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1F);
    // 0x80278F0C: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80278F10: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80278F14: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x80278F18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80278F1C: lw          $a3, 0x10C4($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X10C4);
    // 0x80278F20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80278F24: addiu       $a1, $zero, 0x3E3
    ctx->r5 = ADD32(0, 0X3E3);
    // 0x80278F28: jal         0x8004CD24
    // 0x80278F2C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x80278F2C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x80278F30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80278F34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80278F38: jal         0x8002135C
    // 0x80278F3C: addiu       $a2, $zero, 0xD0
    ctx->r6 = ADD32(0, 0XD0);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80278F3C: addiu       $a2, $zero, 0xD0
    ctx->r6 = ADD32(0, 0XD0);
    after_1:
    // 0x80278F40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80278F44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80278F48: jal         0x8004CD44
    // 0x80278F4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x80278F4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80278F50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278F54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80278F58: jr          $ra
    // 0x80278F5C: nop

    return;
    // 0x80278F5C: nop

;}
RECOMP_FUNC void func_80278F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278F60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80278F64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80278F68: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80278F6C: addiu       $a0, $a0, -0x7068
    ctx->r4 = ADD32(ctx->r4, -0X7068);
    // 0x80278F70: jal         0x800293DC
    // 0x80278F74: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80278F74: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80278F78: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x80278F7C: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x80278F80: jal         0x802790F4
    // 0x80278F84: nop

    func_802790F4(rdram, ctx);
        goto after_1;
    // 0x80278F84: nop

    after_1:
    // 0x80278F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278F8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80278F90: jr          $ra
    // 0x80278F94: nop

    return;
    // 0x80278F94: nop

;}
RECOMP_FUNC void func_80278F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278F98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80278F9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80278FA0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80278FA4: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x80278FA8: jal         0x80279E2C
    // 0x80278FAC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80279E2C(rdram, ctx);
        goto after_0;
    // 0x80278FAC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x80278FB0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80278FB4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80278FB8: beq         $v0, $zero, L_80279000
    if (ctx->r2 == 0) {
        // 0x80278FBC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80279000;
    }
    // 0x80278FBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80278FC0: bne         $v0, $a1, L_80279010
    if (ctx->r2 != ctx->r5) {
        // 0x80278FC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80279010;
    }
    // 0x80278FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278FC8: lb          $v0, 0x3F($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3F);
    // 0x80278FCC: nop

    // 0x80278FD0: beq         $v0, $zero, L_80278FF0
    if (ctx->r2 == 0) {
        // 0x80278FD4: nop
    
            goto L_80278FF0;
    }
    // 0x80278FD4: nop

    // 0x80278FD8: bne         $v0, $a1, L_80279010
    if (ctx->r2 != ctx->r5) {
        // 0x80278FDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80279010;
    }
    // 0x80278FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278FE0: jal         0x8027901C
    // 0x80278FE4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8027901C(rdram, ctx);
        goto after_1;
    // 0x80278FE4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x80278FE8: b           L_80279010
    // 0x80278FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80279010;
    // 0x80278FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278FF0:
    // 0x80278FF0: jal         0x802790F4
    // 0x80278FF4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_802790F4(rdram, ctx);
        goto after_2;
    // 0x80278FF4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_2:
    // 0x80278FF8: b           L_80279010
    // 0x80278FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80279010;
    // 0x80278FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80279000:
    // 0x80279000: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80279004: jal         0x8002A468
    // 0x80279008: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_3;
    // 0x80279008: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_3:
    // 0x8027900C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80279010:
    // 0x80279010: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80279014: jr          $ra
    // 0x80279018: nop

    return;
    // 0x80279018: nop

;}
RECOMP_FUNC void func_80278FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278FBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80278FC0: bne         $v0, $a1, L_80279010
    if (ctx->r2 != ctx->r5) {
        // 0x80278FC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80279010;
    }
    // 0x80278FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278FC8: lb          $v0, 0x3F($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3F);
    // 0x80278FCC: nop

    // 0x80278FD0: beq         $v0, $zero, L_80278FF0
    if (ctx->r2 == 0) {
        // 0x80278FD4: nop
    
            goto L_80278FF0;
    }
    // 0x80278FD4: nop

    // 0x80278FD8: bne         $v0, $a1, L_80279010
    if (ctx->r2 != ctx->r5) {
        // 0x80278FDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80279010;
    }
    // 0x80278FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278FE0: jal         0x8027901C
    // 0x80278FE4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8027901C(rdram, ctx);
        goto after_0;
    // 0x80278FE4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x80278FE8: b           L_80279010
    // 0x80278FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80279010;
    // 0x80278FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278FF0:
    // 0x80278FF0: jal         0x802790F4
    // 0x80278FF4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_802790F4(rdram, ctx);
        goto after_1;
    // 0x80278FF4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x80278FF8: b           L_80279010
    // 0x80278FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80279010;
    // 0x80278FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279000: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80279004: jal         0x8002A468
    // 0x80279008: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_2;
    // 0x80279008: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_2:
    // 0x8027900C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80279010:
    // 0x80279010: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80279014: jr          $ra
    // 0x80279018: nop

    return;
    // 0x80279018: nop

;}
RECOMP_FUNC void func_8027901C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027901C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80279020: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80279024: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80279028: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8027902C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80279030: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80279034: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80279038: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027903C: lbu         $v1, 0x3A($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3A);
    // 0x80279040: lui         $s3, 0x8028
    ctx->r19 = S32(0X8028 << 16);
    // 0x80279044: sll         $s2, $v1, 2
    ctx->r18 = S32(ctx->r3 << 2);
    // 0x80279048: subu        $s2, $s2, $v1
    ctx->r18 = SUB32(ctx->r18, ctx->r3);
    // 0x8027904C: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x80279050: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x80279054: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80279058: addiu       $s5, $s5, 0x13E8
    ctx->r21 = ADD32(ctx->r21, 0X13E8);
    // 0x8027905C: addiu       $s3, $s3, 0xFA0
    ctx->r19 = ADD32(ctx->r19, 0XFA0);
    // 0x80279060: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80279064: addiu       $s4, $zero, 0x6
    ctx->r20 = ADD32(0, 0X6);
    // 0x80279068: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8027906C: subu        $s2, $s2, $v1
    ctx->r18 = SUB32(ctx->r18, ctx->r3);
L_80279070:
    // 0x80279070: multu       $v0, $s4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80279074: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    // 0x80279078: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x8027907C: subu        $t7, $t7, $s2
    ctx->r15 = SUB32(ctx->r15, ctx->r18);
    // 0x80279080: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80279084: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80279088: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8027908C: mflo        $t9
    ctx->r25 = lo;
    // 0x80279090: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80279094: lbu         $a1, 0x5($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X5);
    // 0x80279098: jal         0x8004CAD8
    // 0x8027909C: nop

    func_8004CAD8(rdram, ctx);
        goto after_0;
    // 0x8027909C: nop

    after_0:
    // 0x802790A0: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x802790A4: addu        $v0, $s5, $t1
    ctx->r2 = ADD32(ctx->r21, ctx->r9);
    // 0x802790A8: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x802790AC: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x802790B0: jal         0x8004CD44
    // 0x802790B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x802790B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x802790B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802790BC: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x802790C0: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802790C4: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x802790C8: bne         $at, $zero, L_80279070
    if (ctx->r1 != 0) {
        // 0x802790CC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80279070;
    }
    // 0x802790CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802790D0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802790D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802790D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802790DC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802790E0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802790E4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x802790E8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x802790EC: jr          $ra
    // 0x802790F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802790F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80279050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279050: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x80279054: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80279058: addiu       $s5, $s5, 0x13E8
    ctx->r21 = ADD32(ctx->r21, 0X13E8);
    // 0x8027905C: addiu       $s3, $s3, 0xFA0
    ctx->r19 = ADD32(ctx->r19, 0XFA0);
    // 0x80279060: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80279064: addiu       $s4, $zero, 0x6
    ctx->r20 = ADD32(0, 0X6);
    // 0x80279068: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8027906C: subu        $s2, $s2, $v1
    ctx->r18 = SUB32(ctx->r18, ctx->r3);
L_80279070:
    // 0x80279070: multu       $v0, $s4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80279074: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    // 0x80279078: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x8027907C: subu        $t7, $t7, $s2
    ctx->r15 = SUB32(ctx->r15, ctx->r18);
    // 0x80279080: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80279084: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80279088: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8027908C: mflo        $t9
    ctx->r25 = lo;
    // 0x80279090: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80279094: lbu         $a1, 0x5($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X5);
    // 0x80279098: jal         0x8004CAD8
    // 0x8027909C: nop

    func_8004CAD8(rdram, ctx);
        goto after_0;
    // 0x8027909C: nop

    after_0:
    // 0x802790A0: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x802790A4: addu        $v0, $s5, $t1
    ctx->r2 = ADD32(ctx->r21, ctx->r9);
    // 0x802790A8: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x802790AC: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x802790B0: jal         0x8004CD44
    // 0x802790B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x802790B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x802790B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802790BC: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x802790C0: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802790C4: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x802790C8: bne         $at, $zero, L_80279070
    if (ctx->r1 != 0) {
        // 0x802790CC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80279070;
    }
    // 0x802790CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802790D0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802790D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802790D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802790DC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802790E0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802790E4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x802790E8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x802790EC: jr          $ra
    // 0x802790F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802790F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802790F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802790F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802790F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802790FC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80279100: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80279104: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80279108: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027910C: lbu         $v0, 0x3A($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3A);
    // 0x80279110: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80279114: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80279118: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8027911C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80279120: addiu       $t7, $t7, -0x6AA4
    ctx->r15 = ADD32(ctx->r15, -0X6AA4);
    // 0x80279124: lui         $s3, 0x8028
    ctx->r19 = S32(0X8028 << 16);
    // 0x80279128: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8027912C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80279130: addu        $s2, $t6, $t7
    ctx->r18 = ADD32(ctx->r14, ctx->r15);
    // 0x80279134: addiu       $s3, $s3, 0x13E8
    ctx->r19 = ADD32(ctx->r19, 0X13E8);
    // 0x80279138: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8027913C:
    // 0x8027913C: addu        $t8, $s2, $s0
    ctx->r24 = ADD32(ctx->r18, ctx->r16);
    // 0x80279140: lbu         $a1, 0x0($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X0);
    // 0x80279144: jal         0x8004C764
    // 0x80279148: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8004C764(rdram, ctx);
        goto after_0;
    // 0x80279148: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8027914C: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x80279150: addu        $v0, $s3, $t9
    ctx->r2 = ADD32(ctx->r19, ctx->r25);
    // 0x80279154: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x80279158: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8027915C: jal         0x8004CD44
    // 0x80279160: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x80279160: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80279164: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80279168: andi        $t0, $s0, 0xFF
    ctx->r8 = ctx->r16 & 0XFF;
    // 0x8027916C: slti        $at, $t0, 0xB
    ctx->r1 = SIGNED(ctx->r8) < 0XB ? 1 : 0;
    // 0x80279170: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80279174: bne         $at, $zero, L_8027913C
    if (ctx->r1 != 0) {
        // 0x80279178: or          $s0, $t0, $zero
        ctx->r16 = ctx->r8 | 0;
            goto L_8027913C;
    }
    // 0x80279178: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x8027917C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80279180: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80279184: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80279188: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027918C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80279190: jr          $ra
    // 0x80279194: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80279194: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80279198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279198: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027919C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802791A0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802791A4: addiu       $a0, $a0, -0x6E1C
    ctx->r4 = ADD32(ctx->r4, -0X6E1C);
    // 0x802791A8: jal         0x800293DC
    // 0x802791AC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x802791AC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x802791B0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802791B4: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x802791B8: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x802791BC: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x802791C0: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802791C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802791C8: addiu       $a2, $a2, 0x13E8
    ctx->r6 = ADD32(ctx->r6, 0X13E8);
    // 0x802791CC: jal         0x8004C9FC
    // 0x802791D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8004C9FC(rdram, ctx);
        goto after_1;
    // 0x802791D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x802791D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802791D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802791DC: jr          $ra
    // 0x802791E0: nop

    return;
    // 0x802791E0: nop

;}
RECOMP_FUNC void func_802791D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802791D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802791D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802791D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802791DC: jr          $ra
    // 0x802791E0: nop

    return;
    // 0x802791E0: nop

;}
RECOMP_FUNC void func_802791E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802791E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802791E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802791EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802791F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802791F4: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x802791F8: jal         0x80279E2C
    // 0x802791FC: nop

    func_80279E2C(rdram, ctx);
        goto after_0;
    // 0x802791FC: nop

    after_0:
    // 0x80279200: beq         $v0, $zero, L_80279224
    if (ctx->r2 == 0) {
        // 0x80279204: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_80279224;
    }
    // 0x80279204: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80279208: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027920C: bne         $v0, $at, L_8027922C
    if (ctx->r2 != ctx->r1) {
        // 0x80279210: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_8027922C;
    }
    // 0x80279210: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80279214: jal         0x8002A468
    // 0x80279218: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x80279218: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    after_1:
    // 0x8027921C: b           L_80279230
    // 0x80279220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80279230;
    // 0x80279220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80279224:
    // 0x80279224: jal         0x8002A468
    // 0x80279228: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_2;
    // 0x80279228: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_2:
L_8027922C:
    // 0x8027922C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80279230:
    // 0x80279230: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80279234: jr          $ra
    // 0x80279238: nop

    return;
    // 0x80279238: nop

;}
RECOMP_FUNC void func_8027923C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027923C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80279240: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80279244: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80279248: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8027924C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279250: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x80279254: jal         0x8002F224
    // 0x80279258: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_8002F224(rdram, ctx);
        goto after_0;
    // 0x80279258: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8027925C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x80279260: jal         0x8002F224
    // 0x80279264: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    func_8002F224(rdram, ctx);
        goto after_1;
    // 0x80279264: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    after_1:
    // 0x80279268: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8027926C: nop

    // 0x80279270: lb          $t6, 0x38($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X38);
    // 0x80279274: nop

    // 0x80279278: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8027927C: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x80279280: beq         $at, $zero, L_80279458
    if (ctx->r1 == 0) {
        // 0x80279284: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80279458;
    }
    // 0x80279284: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80279288: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027928C: addu        $at, $at, $t7
    gpr jr_addend_80279298 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80279290: lw          $t7, 0x1EF0($at)
    ctx->r15 = ADD32(ctx->r1, 0X1EF0);
    // 0x80279294: nop

    // 0x80279298: jr          $t7
    // 0x8027929C: nop

    switch (jr_addend_80279298 >> 2) {
        case 0: goto L_802792E0; break;
        case 1: goto L_80279458; break;
        case 2: goto L_80279318; break;
        case 3: goto L_802792FC; break;
        case 4: goto L_80279334; break;
        case 5: goto L_80279374; break;
        case 6: goto L_802793F8; break;
        case 7: goto L_8027942C; break;
        case 8: goto L_802792A0; break;
        default: switch_error(__func__, 0x80279298, 0x80281EF0);
    }
    // 0x8027929C: nop

L_802792A0:
    // 0x802792A0: lb          $t8, 0x49($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X49);
    // 0x802792A4: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x802792A8: bne         $t8, $zero, L_802792CC
    if (ctx->r24 != 0) {
        // 0x802792AC: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_802792CC;
    }
    // 0x802792AC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802792B0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802792B4: addiu       $a1, $a1, 0x1810
    ctx->r5 = ADD32(ctx->r5, 0X1810);
    // 0x802792B8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x802792BC: jal         0x8002F444
    // 0x802792C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_2;
    // 0x802792C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x802792C4: b           L_8027945C
    // 0x802792C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x802792C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802792CC:
    // 0x802792CC: addiu       $a1, $a1, 0x1810
    ctx->r5 = ADD32(ctx->r5, 0X1810);
    // 0x802792D0: jal         0x8002F444
    // 0x802792D4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8002F444(rdram, ctx);
        goto after_3;
    // 0x802792D4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x802792D8: b           L_8027945C
    // 0x802792DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x802792DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802792E0:
    // 0x802792E0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802792E4: addiu       $a1, $a1, 0x11A0
    ctx->r5 = ADD32(ctx->r5, 0X11A0);
    // 0x802792E8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x802792EC: jal         0x8002F444
    // 0x802792F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_4;
    // 0x802792F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x802792F4: b           L_8027945C
    // 0x802792F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x802792F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802792FC:
    // 0x802792FC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80279300: addiu       $a1, $a1, 0x15D8
    ctx->r5 = ADD32(ctx->r5, 0X15D8);
    // 0x80279304: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279308: jal         0x8002F444
    // 0x8027930C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_5;
    // 0x8027930C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80279310: b           L_8027945C
    // 0x80279314: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x80279314: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80279318:
    // 0x80279318: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027931C: addiu       $a1, $a1, 0x15AC
    ctx->r5 = ADD32(ctx->r5, 0X15AC);
    // 0x80279320: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279324: jal         0x8002F444
    // 0x80279328: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_6;
    // 0x80279328: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x8027932C: b           L_8027945C
    // 0x80279330: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x80279330: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80279334:
    // 0x80279334: lb          $t9, 0x45($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X45);
    // 0x80279338: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x8027933C: bne         $t9, $zero, L_80279360
    if (ctx->r25 != 0) {
        // 0x80279340: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80279360;
    }
    // 0x80279340: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80279344: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80279348: addiu       $a1, $a1, 0x16A8
    ctx->r5 = ADD32(ctx->r5, 0X16A8);
    // 0x8027934C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279350: jal         0x8002F444
    // 0x80279354: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_7;
    // 0x80279354: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80279358: b           L_8027945C
    // 0x8027935C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x8027935C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80279360:
    // 0x80279360: addiu       $a1, $a1, 0x16B8
    ctx->r5 = ADD32(ctx->r5, 0X16B8);
    // 0x80279364: jal         0x8002F444
    // 0x80279368: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_8;
    // 0x80279368: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x8027936C: b           L_8027945C
    // 0x80279370: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x80279370: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80279374:
    // 0x80279374: lb          $t0, 0x4C($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X4C);
    // 0x80279378: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8027937C: bne         $t0, $zero, L_802793A0
    if (ctx->r8 != 0) {
        // 0x80279380: addiu       $a0, $a0, -0x3428
        ctx->r4 = ADD32(ctx->r4, -0X3428);
            goto L_802793A0;
    }
    // 0x80279380: addiu       $a0, $a0, -0x3428
    ctx->r4 = ADD32(ctx->r4, -0X3428);
    // 0x80279384: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80279388: addiu       $a1, $a1, 0x1768
    ctx->r5 = ADD32(ctx->r5, 0X1768);
    // 0x8027938C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279390: jal         0x8002F444
    // 0x80279394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_9;
    // 0x80279394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x80279398: b           L_8027945C
    // 0x8027939C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x8027939C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802793A0:
    // 0x802793A0: lb          $t1, 0x4D($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X4D);
    // 0x802793A4: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x802793A8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x802793AC: lb          $t4, 0x4E($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X4E);
    // 0x802793B0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x802793B4: lw          $t3, 0x5720($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5720);
    // 0x802793B8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802793BC: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x802793C0: lw          $a3, 0x0($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X0);
    // 0x802793C4: addiu       $t7, $zero, 0x1F
    ctx->r15 = ADD32(0, 0X1F);
    // 0x802793C8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802793CC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x802793D0: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x802793D4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802793D8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802793DC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802793E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802793E4: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x802793E8: jal         0x8002F528
    // 0x802793EC: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    func_8002F528(rdram, ctx);
        goto after_10;
    // 0x802793EC: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    after_10:
    // 0x802793F0: b           L_8027945C
    // 0x802793F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x802793F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802793F8:
    // 0x802793F8: lb          $t1, 0x55($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X55);
    // 0x802793FC: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80279400: addiu       $t4, $t4, 0x1298
    ctx->r12 = ADD32(ctx->r12, 0X1298);
    // 0x80279404: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80279408: addu        $a1, $t2, $t4
    ctx->r5 = ADD32(ctx->r10, ctx->r12);
    // 0x8027940C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279410: jal         0x8002F444
    // 0x80279414: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_11;
    // 0x80279414: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x80279418: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8027941C: jal         0x80279468
    // 0x80279420: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    func_80279468(rdram, ctx);
        goto after_12;
    // 0x80279420: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    after_12:
    // 0x80279424: b           L_8027945C
    // 0x80279428: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x80279428: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027942C:
    // 0x8027942C: lb          $t3, 0x56($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X56);
    // 0x80279430: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80279434: addiu       $t6, $t6, 0x1308
    ctx->r14 = ADD32(ctx->r14, 0X1308);
    // 0x80279438: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x8027943C: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    // 0x80279440: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279444: jal         0x8002F444
    // 0x80279448: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_13;
    // 0x80279448: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x8027944C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80279450: jal         0x80279468
    // 0x80279454: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    func_80279468(rdram, ctx);
        goto after_14;
    // 0x80279454: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    after_14:
L_80279458:
    // 0x80279458: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027945C:
    // 0x8027945C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80279460: jr          $ra
    // 0x80279464: nop

    return;
    // 0x80279464: nop

;}
RECOMP_FUNC void func_8027924C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027924C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279250: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x80279254: jal         0x8002F224
    // 0x80279258: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_8002F224(rdram, ctx);
        goto after_0;
    // 0x80279258: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8027925C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x80279260: jal         0x8002F224
    // 0x80279264: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    func_8002F224(rdram, ctx);
        goto after_1;
    // 0x80279264: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    after_1:
    // 0x80279268: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8027926C: nop

    // 0x80279270: lb          $t6, 0x38($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X38);
    // 0x80279274: nop

    // 0x80279278: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8027927C: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x80279280: beq         $at, $zero, L_80279458
    if (ctx->r1 == 0) {
        // 0x80279284: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80279458;
    }
    // 0x80279284: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80279288: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027928C: addu        $at, $at, $t7
    gpr jr_addend_80279298 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80279290: lw          $t7, 0x1EF0($at)
    ctx->r15 = ADD32(ctx->r1, 0X1EF0);
    // 0x80279294: nop

    // 0x80279298: jr          $t7
    // 0x8027929C: nop

    switch (jr_addend_80279298 >> 2) {
        case 0: goto L_802792E0; break;
        case 1: goto L_80279458; break;
        case 2: goto L_80279318; break;
        case 3: goto L_802792FC; break;
        case 4: goto L_80279334; break;
        case 5: goto L_80279374; break;
        case 6: goto L_802793F8; break;
        case 7: goto L_8027942C; break;
        case 8: goto L_802792A0; break;
        default: switch_error(__func__, 0x80279298, 0x80281EF0);
    }
    // 0x8027929C: nop

L_802792A0:
    // 0x802792A0: lb          $t8, 0x49($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X49);
    // 0x802792A4: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x802792A8: bne         $t8, $zero, L_802792CC
    if (ctx->r24 != 0) {
        // 0x802792AC: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_802792CC;
    }
    // 0x802792AC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802792B0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802792B4: addiu       $a1, $a1, 0x1810
    ctx->r5 = ADD32(ctx->r5, 0X1810);
    // 0x802792B8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x802792BC: jal         0x8002F444
    // 0x802792C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_2;
    // 0x802792C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x802792C4: b           L_8027945C
    // 0x802792C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x802792C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802792CC:
    // 0x802792CC: addiu       $a1, $a1, 0x1810
    ctx->r5 = ADD32(ctx->r5, 0X1810);
    // 0x802792D0: jal         0x8002F444
    // 0x802792D4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8002F444(rdram, ctx);
        goto after_3;
    // 0x802792D4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x802792D8: b           L_8027945C
    // 0x802792DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x802792DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802792E0:
    // 0x802792E0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802792E4: addiu       $a1, $a1, 0x11A0
    ctx->r5 = ADD32(ctx->r5, 0X11A0);
    // 0x802792E8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x802792EC: jal         0x8002F444
    // 0x802792F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_4;
    // 0x802792F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x802792F4: b           L_8027945C
    // 0x802792F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x802792F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802792FC:
    // 0x802792FC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80279300: addiu       $a1, $a1, 0x15D8
    ctx->r5 = ADD32(ctx->r5, 0X15D8);
    // 0x80279304: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279308: jal         0x8002F444
    // 0x8027930C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_5;
    // 0x8027930C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80279310: b           L_8027945C
    // 0x80279314: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x80279314: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80279318:
    // 0x80279318: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027931C: addiu       $a1, $a1, 0x15AC
    ctx->r5 = ADD32(ctx->r5, 0X15AC);
    // 0x80279320: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279324: jal         0x8002F444
    // 0x80279328: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_6;
    // 0x80279328: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x8027932C: b           L_8027945C
    // 0x80279330: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x80279330: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80279334:
    // 0x80279334: lb          $t9, 0x45($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X45);
    // 0x80279338: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x8027933C: bne         $t9, $zero, L_80279360
    if (ctx->r25 != 0) {
        // 0x80279340: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80279360;
    }
    // 0x80279340: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80279344: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80279348: addiu       $a1, $a1, 0x16A8
    ctx->r5 = ADD32(ctx->r5, 0X16A8);
    // 0x8027934C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279350: jal         0x8002F444
    // 0x80279354: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_7;
    // 0x80279354: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80279358: b           L_8027945C
    // 0x8027935C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x8027935C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80279360:
    // 0x80279360: addiu       $a1, $a1, 0x16B8
    ctx->r5 = ADD32(ctx->r5, 0X16B8);
    // 0x80279364: jal         0x8002F444
    // 0x80279368: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_8;
    // 0x80279368: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x8027936C: b           L_8027945C
    // 0x80279370: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x80279370: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80279374:
    // 0x80279374: lb          $t0, 0x4C($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X4C);
    // 0x80279378: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8027937C: bne         $t0, $zero, L_802793A0
    if (ctx->r8 != 0) {
        // 0x80279380: addiu       $a0, $a0, -0x3428
        ctx->r4 = ADD32(ctx->r4, -0X3428);
            goto L_802793A0;
    }
    // 0x80279380: addiu       $a0, $a0, -0x3428
    ctx->r4 = ADD32(ctx->r4, -0X3428);
    // 0x80279384: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80279388: addiu       $a1, $a1, 0x1768
    ctx->r5 = ADD32(ctx->r5, 0X1768);
    // 0x8027938C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279390: jal         0x8002F444
    // 0x80279394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_9;
    // 0x80279394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x80279398: b           L_8027945C
    // 0x8027939C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x8027939C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802793A0:
    // 0x802793A0: lb          $t1, 0x4D($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X4D);
    // 0x802793A4: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x802793A8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x802793AC: lb          $t4, 0x4E($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X4E);
    // 0x802793B0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x802793B4: lw          $t3, 0x5720($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5720);
    // 0x802793B8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802793BC: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x802793C0: lw          $a3, 0x0($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X0);
    // 0x802793C4: addiu       $t7, $zero, 0x1F
    ctx->r15 = ADD32(0, 0X1F);
    // 0x802793C8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802793CC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x802793D0: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x802793D4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802793D8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802793DC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802793E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802793E4: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x802793E8: jal         0x8002F528
    // 0x802793EC: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    func_8002F528(rdram, ctx);
        goto after_10;
    // 0x802793EC: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    after_10:
    // 0x802793F0: b           L_8027945C
    // 0x802793F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x802793F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802793F8:
    // 0x802793F8: lb          $t1, 0x55($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X55);
    // 0x802793FC: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80279400: addiu       $t4, $t4, 0x1298
    ctx->r12 = ADD32(ctx->r12, 0X1298);
    // 0x80279404: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80279408: addu        $a1, $t2, $t4
    ctx->r5 = ADD32(ctx->r10, ctx->r12);
    // 0x8027940C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279410: jal         0x8002F444
    // 0x80279414: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_11;
    // 0x80279414: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x80279418: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8027941C: jal         0x80279468
    // 0x80279420: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    func_80279468(rdram, ctx);
        goto after_12;
    // 0x80279420: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    after_12:
    // 0x80279424: b           L_8027945C
    // 0x80279428: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x80279428: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027942C:
    // 0x8027942C: lb          $t3, 0x56($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X56);
    // 0x80279430: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80279434: addiu       $t6, $t6, 0x1308
    ctx->r14 = ADD32(ctx->r14, 0X1308);
    // 0x80279438: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x8027943C: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    // 0x80279440: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279444: jal         0x8002F444
    // 0x80279448: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_13;
    // 0x80279448: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x8027944C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80279450: jal         0x80279468
    // 0x80279454: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    func_80279468(rdram, ctx);
        goto after_14;
    // 0x80279454: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    after_14:
L_80279458:
    // 0x80279458: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027945C:
    // 0x8027945C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80279460: jr          $ra
    // 0x80279464: nop

    return;
    // 0x80279464: nop

;}
RECOMP_FUNC void func_80279308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279308: jal         0x8002F444
    // 0x8027930C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_0;
    // 0x8027930C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80279310: b           L_8027945C
    // 0x80279314: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x80279314: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80279318: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027931C: addiu       $a1, $a1, 0x15AC
    ctx->r5 = ADD32(ctx->r5, 0X15AC);
    // 0x80279320: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279324: jal         0x8002F444
    // 0x80279328: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_1;
    // 0x80279328: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8027932C: b           L_8027945C
    // 0x80279330: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x80279330: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80279334: lb          $t9, 0x45($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X45);
    // 0x80279338: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x8027933C: bne         $t9, $zero, L_80279360
    if (ctx->r25 != 0) {
        // 0x80279340: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80279360;
    }
    // 0x80279340: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80279344: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80279348: addiu       $a1, $a1, 0x16A8
    ctx->r5 = ADD32(ctx->r5, 0X16A8);
    // 0x8027934C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279350: jal         0x8002F444
    // 0x80279354: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_2;
    // 0x80279354: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80279358: b           L_8027945C
    // 0x8027935C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x8027935C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80279360:
    // 0x80279360: addiu       $a1, $a1, 0x16B8
    ctx->r5 = ADD32(ctx->r5, 0X16B8);
    // 0x80279364: jal         0x8002F444
    // 0x80279368: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_3;
    // 0x80279368: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8027936C: b           L_8027945C
    // 0x80279370: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x80279370: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80279374: lb          $t0, 0x4C($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X4C);
    // 0x80279378: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8027937C: bne         $t0, $zero, L_802793A0
    if (ctx->r8 != 0) {
        // 0x80279380: addiu       $a0, $a0, -0x3428
        ctx->r4 = ADD32(ctx->r4, -0X3428);
            goto L_802793A0;
    }
    // 0x80279380: addiu       $a0, $a0, -0x3428
    ctx->r4 = ADD32(ctx->r4, -0X3428);
    // 0x80279384: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80279388: addiu       $a1, $a1, 0x1768
    ctx->r5 = ADD32(ctx->r5, 0X1768);
    // 0x8027938C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279390: jal         0x8002F444
    // 0x80279394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_4;
    // 0x80279394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80279398: b           L_8027945C
    // 0x8027939C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x8027939C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802793A0:
    // 0x802793A0: lb          $t1, 0x4D($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X4D);
    // 0x802793A4: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x802793A8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x802793AC: lb          $t4, 0x4E($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X4E);
    // 0x802793B0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x802793B4: lw          $t3, 0x5720($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5720);
    // 0x802793B8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802793BC: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x802793C0: lw          $a3, 0x0($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X0);
    // 0x802793C4: addiu       $t7, $zero, 0x1F
    ctx->r15 = ADD32(0, 0X1F);
    // 0x802793C8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802793CC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x802793D0: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x802793D4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802793D8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802793DC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802793E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802793E4: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x802793E8: jal         0x8002F528
    // 0x802793EC: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    func_8002F528(rdram, ctx);
        goto after_5;
    // 0x802793EC: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    after_5:
    // 0x802793F0: b           L_8027945C
    // 0x802793F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x802793F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802793F8: lb          $t1, 0x55($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X55);
    // 0x802793FC: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80279400: addiu       $t4, $t4, 0x1298
    ctx->r12 = ADD32(ctx->r12, 0X1298);
    // 0x80279404: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80279408: addu        $a1, $t2, $t4
    ctx->r5 = ADD32(ctx->r10, ctx->r12);
    // 0x8027940C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279410: jal         0x8002F444
    // 0x80279414: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_6;
    // 0x80279414: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x80279418: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8027941C: jal         0x80279468
    // 0x80279420: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    func_80279468(rdram, ctx);
        goto after_7;
    // 0x80279420: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    after_7:
    // 0x80279424: b           L_8027945C
    // 0x80279428: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x80279428: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027942C: lb          $t3, 0x56($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X56);
    // 0x80279430: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80279434: addiu       $t6, $t6, 0x1308
    ctx->r14 = ADD32(ctx->r14, 0X1308);
    // 0x80279438: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x8027943C: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    // 0x80279440: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279444: jal         0x8002F444
    // 0x80279448: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_8;
    // 0x80279448: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x8027944C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80279450: jal         0x80279468
    // 0x80279454: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    func_80279468(rdram, ctx);
        goto after_9;
    // 0x80279454: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    after_9:
    // 0x80279458: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027945C:
    // 0x8027945C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80279460: jr          $ra
    // 0x80279464: nop

    return;
    // 0x80279464: nop

;}
RECOMP_FUNC void func_80279330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279330: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80279334: lb          $t9, 0x45($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X45);
    // 0x80279338: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x8027933C: bne         $t9, $zero, L_80279360
    if (ctx->r25 != 0) {
        // 0x80279340: lui         $a1, 0x8028
        ctx->r5 = S32(0X8028 << 16);
            goto L_80279360;
    }
    // 0x80279340: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80279344: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80279348: addiu       $a1, $a1, 0x16A8
    ctx->r5 = ADD32(ctx->r5, 0X16A8);
    // 0x8027934C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279350: jal         0x8002F444
    // 0x80279354: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_0;
    // 0x80279354: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80279358: b           L_8027945C
    // 0x8027935C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x8027935C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80279360:
    // 0x80279360: addiu       $a1, $a1, 0x16B8
    ctx->r5 = ADD32(ctx->r5, 0X16B8);
    // 0x80279364: jal         0x8002F444
    // 0x80279368: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_1;
    // 0x80279368: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8027936C: b           L_8027945C
    // 0x80279370: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x80279370: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80279374: lb          $t0, 0x4C($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X4C);
    // 0x80279378: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8027937C: bne         $t0, $zero, L_802793A0
    if (ctx->r8 != 0) {
        // 0x80279380: addiu       $a0, $a0, -0x3428
        ctx->r4 = ADD32(ctx->r4, -0X3428);
            goto L_802793A0;
    }
    // 0x80279380: addiu       $a0, $a0, -0x3428
    ctx->r4 = ADD32(ctx->r4, -0X3428);
    // 0x80279384: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80279388: addiu       $a1, $a1, 0x1768
    ctx->r5 = ADD32(ctx->r5, 0X1768);
    // 0x8027938C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279390: jal         0x8002F444
    // 0x80279394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_2;
    // 0x80279394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80279398: b           L_8027945C
    // 0x8027939C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x8027939C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802793A0:
    // 0x802793A0: lb          $t1, 0x4D($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X4D);
    // 0x802793A4: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x802793A8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x802793AC: lb          $t4, 0x4E($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X4E);
    // 0x802793B0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x802793B4: lw          $t3, 0x5720($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5720);
    // 0x802793B8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802793BC: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x802793C0: lw          $a3, 0x0($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X0);
    // 0x802793C4: addiu       $t7, $zero, 0x1F
    ctx->r15 = ADD32(0, 0X1F);
    // 0x802793C8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802793CC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x802793D0: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x802793D4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802793D8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802793DC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802793E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802793E4: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x802793E8: jal         0x8002F528
    // 0x802793EC: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    func_8002F528(rdram, ctx);
        goto after_3;
    // 0x802793EC: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    after_3:
    // 0x802793F0: b           L_8027945C
    // 0x802793F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x802793F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802793F8: lb          $t1, 0x55($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X55);
    // 0x802793FC: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80279400: addiu       $t4, $t4, 0x1298
    ctx->r12 = ADD32(ctx->r12, 0X1298);
    // 0x80279404: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80279408: addu        $a1, $t2, $t4
    ctx->r5 = ADD32(ctx->r10, ctx->r12);
    // 0x8027940C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279410: jal         0x8002F444
    // 0x80279414: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_4;
    // 0x80279414: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80279418: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8027941C: jal         0x80279468
    // 0x80279420: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    func_80279468(rdram, ctx);
        goto after_5;
    // 0x80279420: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    after_5:
    // 0x80279424: b           L_8027945C
    // 0x80279428: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x80279428: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027942C: lb          $t3, 0x56($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X56);
    // 0x80279430: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80279434: addiu       $t6, $t6, 0x1308
    ctx->r14 = ADD32(ctx->r14, 0X1308);
    // 0x80279438: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x8027943C: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    // 0x80279440: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279444: jal         0x8002F444
    // 0x80279448: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_6;
    // 0x80279448: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x8027944C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80279450: jal         0x80279468
    // 0x80279454: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    func_80279468(rdram, ctx);
        goto after_7;
    // 0x80279454: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    after_7:
    // 0x80279458: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027945C:
    // 0x8027945C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80279460: jr          $ra
    // 0x80279464: nop

    return;
    // 0x80279464: nop

;}
RECOMP_FUNC void func_802793B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802793B0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x802793B4: lw          $t3, 0x5720($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5720);
    // 0x802793B8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802793BC: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x802793C0: lw          $a3, 0x0($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X0);
    // 0x802793C4: addiu       $t7, $zero, 0x1F
    ctx->r15 = ADD32(0, 0X1F);
    // 0x802793C8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802793CC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x802793D0: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x802793D4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802793D8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802793DC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802793E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802793E4: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x802793E8: jal         0x8002F528
    // 0x802793EC: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    func_8002F528(rdram, ctx);
        goto after_0;
    // 0x802793EC: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    after_0:
    // 0x802793F0: b           L_8027945C
    // 0x802793F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x802793F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802793F8: lb          $t1, 0x55($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X55);
    // 0x802793FC: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80279400: addiu       $t4, $t4, 0x1298
    ctx->r12 = ADD32(ctx->r12, 0X1298);
    // 0x80279404: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80279408: addu        $a1, $t2, $t4
    ctx->r5 = ADD32(ctx->r10, ctx->r12);
    // 0x8027940C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279410: jal         0x8002F444
    // 0x80279414: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_1;
    // 0x80279414: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80279418: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8027941C: jal         0x80279468
    // 0x80279420: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    func_80279468(rdram, ctx);
        goto after_2;
    // 0x80279420: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    after_2:
    // 0x80279424: b           L_8027945C
    // 0x80279428: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x80279428: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027942C: lb          $t3, 0x56($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X56);
    // 0x80279430: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80279434: addiu       $t6, $t6, 0x1308
    ctx->r14 = ADD32(ctx->r14, 0X1308);
    // 0x80279438: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x8027943C: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    // 0x80279440: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279444: jal         0x8002F444
    // 0x80279448: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_3;
    // 0x80279448: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8027944C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80279450: jal         0x80279468
    // 0x80279454: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    func_80279468(rdram, ctx);
        goto after_4;
    // 0x80279454: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    after_4:
    // 0x80279458: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027945C:
    // 0x8027945C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80279460: jr          $ra
    // 0x80279464: nop

    return;
    // 0x80279464: nop

;}
RECOMP_FUNC void func_80279410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279410: jal         0x8002F444
    // 0x80279414: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_0;
    // 0x80279414: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80279418: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8027941C: jal         0x80279468
    // 0x80279420: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    func_80279468(rdram, ctx);
        goto after_1;
    // 0x80279420: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    after_1:
    // 0x80279424: b           L_8027945C
    // 0x80279428: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8027945C;
    // 0x80279428: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027942C: lb          $t3, 0x56($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X56);
    // 0x80279430: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80279434: addiu       $t6, $t6, 0x1308
    ctx->r14 = ADD32(ctx->r14, 0X1308);
    // 0x80279438: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x8027943C: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    // 0x80279440: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80279444: jal         0x8002F444
    // 0x80279448: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_2;
    // 0x80279448: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8027944C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80279450: jal         0x80279468
    // 0x80279454: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    func_80279468(rdram, ctx);
        goto after_3;
    // 0x80279454: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    after_3:
    // 0x80279458: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027945C:
    // 0x8027945C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80279460: jr          $ra
    // 0x80279464: nop

    return;
    // 0x80279464: nop

;}
RECOMP_FUNC void func_80279468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279468: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027946C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80279470: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80279474: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80279478: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8027947C: lui         $s3, 0x8028
    ctx->r19 = S32(0X8028 << 16);
    // 0x80279480: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80279484: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80279488: addiu       $s3, $s3, 0x1B60
    ctx->r19 = ADD32(ctx->r19, 0X1B60);
    // 0x8027948C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80279490: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80279494:
    // 0x80279494: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x80279498: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x8027949C: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x802794A0: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x802794A4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802794A8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802794AC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802794B0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802794B4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802794B8: jal         0x8002F6EC
    // 0x802794BC: addiu       $a3, $s1, 0x1
    ctx->r7 = ADD32(ctx->r17, 0X1);
    func_8002F6EC(rdram, ctx);
        goto after_0;
    // 0x802794BC: addiu       $a3, $s1, 0x1
    ctx->r7 = ADD32(ctx->r17, 0X1);
    after_0:
    // 0x802794C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802794C4: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x802794C8: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x802794CC: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x802794D0: bne         $at, $zero, L_80279494
    if (ctx->r1 != 0) {
        // 0x802794D4: addiu       $s2, $s2, 0x20
        ctx->r18 = ADD32(ctx->r18, 0X20);
            goto L_80279494;
    }
    // 0x802794D4: addiu       $s2, $s2, 0x20
    ctx->r18 = ADD32(ctx->r18, 0X20);
    // 0x802794D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802794DC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802794E0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802794E4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x802794E8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x802794EC: jr          $ra
    // 0x802794F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802794F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802794F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802794F4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x802794F8: lw          $v1, 0x1CF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1CF0);
    // 0x802794FC: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80279500: lb          $t6, 0x4D($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X4D);
    // 0x80279504: lb          $a0, 0x4E($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X4E);
    // 0x80279508: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8027950C: lbu         $v0, 0x16E4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X16E4);
    // 0x80279510: addiu       $t7, $a0, 0x1
    ctx->r15 = ADD32(ctx->r4, 0X1);
    // 0x80279514: bne         $v0, $a0, L_80279524
    if (ctx->r2 != ctx->r4) {
        // 0x80279518: nop
    
            goto L_80279524;
    }
    // 0x80279518: nop

    // 0x8027951C: jr          $ra
    // 0x80279520: sb          $zero, 0x4E($v1)
    MEM_B(0X4E, ctx->r3) = 0;
    return;
    // 0x80279520: sb          $zero, 0x4E($v1)
    MEM_B(0X4E, ctx->r3) = 0;
L_80279524:
    // 0x80279524: sb          $t7, 0x4E($v1)
    MEM_B(0X4E, ctx->r3) = ctx->r15;
    // 0x80279528: jr          $ra
    // 0x8027952C: nop

    return;
    // 0x8027952C: nop

;}
RECOMP_FUNC void func_80279520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279520: sb          $zero, 0x4E($v1)
    MEM_B(0X4E, ctx->r3) = 0;
    // 0x80279524: sb          $t7, 0x4E($v1)
    MEM_B(0X4E, ctx->r3) = ctx->r15;
    // 0x80279528: jr          $ra
    // 0x8027952C: nop

    return;
    // 0x8027952C: nop

;}
RECOMP_FUNC void func_80279530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279530: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80279534: lw          $v1, 0x1CF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1CF0);
    // 0x80279538: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8027953C: lb          $t6, 0x4D($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X4D);
    // 0x80279540: lb          $a0, 0x4E($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X4E);
    // 0x80279544: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80279548: lbu         $v0, 0x16E4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X16E4);
    // 0x8027954C: bne         $a0, $zero, L_8027955C
    if (ctx->r4 != 0) {
        // 0x80279550: addiu       $t7, $a0, -0x1
        ctx->r15 = ADD32(ctx->r4, -0X1);
            goto L_8027955C;
    }
    // 0x80279550: addiu       $t7, $a0, -0x1
    ctx->r15 = ADD32(ctx->r4, -0X1);
    // 0x80279554: jr          $ra
    // 0x80279558: sb          $v0, 0x4E($v1)
    MEM_B(0X4E, ctx->r3) = ctx->r2;
    return;
    // 0x80279558: sb          $v0, 0x4E($v1)
    MEM_B(0X4E, ctx->r3) = ctx->r2;
L_8027955C:
    // 0x8027955C: sb          $t7, 0x4E($v1)
    MEM_B(0X4E, ctx->r3) = ctx->r15;
    // 0x80279560: jr          $ra
    // 0x80279564: nop

    return;
    // 0x80279564: nop

;}
RECOMP_FUNC void func_80279568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279568: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x8027956C: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80279570: lui         $t8, 0x8029
    ctx->r24 = S32(0X8029 << 16);
    // 0x80279574: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80279578: lbu         $t8, -0x79D8($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X79D8);
    // 0x8027957C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80279580: andi        $t9, $t8, 0x80
    ctx->r25 = ctx->r24 & 0X80;
    // 0x80279584: beq         $t9, $zero, L_80279594
    if (ctx->r25 == 0) {
        // 0x80279588: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_80279594;
    }
    // 0x80279588: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8027958C: jr          $ra
    // 0x80279590: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80279590: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80279594:
    // 0x80279594: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80279598: jr          $ra
    // 0x8027959C: nop

    return;
    // 0x8027959C: nop

;}
RECOMP_FUNC void func_802795A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802795A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802795A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802795A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802795AC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802795B0: lbu         $v1, 0x3A($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3A);
    // 0x802795B4: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x802795B8: sll         $a3, $v1, 2
    ctx->r7 = S32(ctx->r3 << 2);
    // 0x802795BC: subu        $a3, $a3, $v1
    ctx->r7 = SUB32(ctx->r7, ctx->r3);
    // 0x802795C0: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x802795C4: subu        $a3, $a3, $v1
    ctx->r7 = SUB32(ctx->r7, ctx->r3);
    // 0x802795C8: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x802795CC: sll         $t4, $a3, 2
    ctx->r12 = S32(ctx->r7 << 2);
    // 0x802795D0: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x802795D4: lw          $t9, 0xFA0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XFA0);
    // 0x802795D8: subu        $t4, $t4, $a3
    ctx->r12 = SUB32(ctx->r12, ctx->r7);
    // 0x802795DC: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x802795E0: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x802795E4: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x802795E8: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x802795EC: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x802795F0: addu        $t1, $t5, $t0
    ctx->r9 = ADD32(ctx->r13, ctx->r8);
    // 0x802795F4: lbu         $v0, 0x4($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X4);
    // 0x802795F8: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x802795FC: beq         $t8, $zero, L_8027963C
    if (ctx->r24 == 0) {
        // 0x80279600: or          $t3, $v0, $zero
        ctx->r11 = ctx->r2 | 0;
            goto L_8027963C;
    }
    // 0x80279600: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x80279604: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80279608: bne         $t8, $at, L_80279668
    if (ctx->r24 != ctx->r1) {
        // 0x8027960C: ori         $t6, $v0, 0x80
        ctx->r14 = ctx->r2 | 0X80;
            goto L_80279668;
    }
    // 0x8027960C: ori         $t6, $v0, 0x80
    ctx->r14 = ctx->r2 | 0X80;
    // 0x80279610: sb          $t6, 0x4($t1)
    MEM_B(0X4, ctx->r9) = ctx->r14;
    // 0x80279614: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80279618: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x8027961C: lw          $t7, 0xFA0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XFA0);
    // 0x80279620: subu        $t8, $t8, $a3
    ctx->r24 = SUB32(ctx->r24, ctx->r7);
    // 0x80279624: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x80279628: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8027962C: addu        $t4, $t9, $t0
    ctx->r12 = ADD32(ctx->r25, ctx->r8);
    // 0x80279630: lbu         $v0, 0x4($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0X4);
    // 0x80279634: b           L_8027966C
    // 0x80279638: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
        goto L_8027966C;
    // 0x80279638: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_8027963C:
    // 0x8027963C: andi        $t5, $v0, 0xFF7F
    ctx->r13 = ctx->r2 & 0XFF7F;
    // 0x80279640: sb          $t5, 0x4($t1)
    MEM_B(0X4, ctx->r9) = ctx->r13;
    // 0x80279644: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80279648: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x8027964C: lw          $t6, 0xFA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XFA0);
    // 0x80279650: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x80279654: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80279658: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8027965C: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x80279660: lbu         $v0, 0x4($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X4);
    // 0x80279664: nop

L_80279668:
    // 0x80279668: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_8027966C:
    // 0x8027966C: beq         $v1, $t3, L_8027967C
    if (ctx->r3 == ctx->r11) {
        // 0x80279670: nop
    
            goto L_8027967C;
    }
    // 0x80279670: nop

    // 0x80279674: jal         0x80035734
    // 0x80279678: nop

    func_80035734(rdram, ctx);
        goto after_0;
    // 0x80279678: nop

    after_0:
L_8027967C:
    // 0x8027967C: jal         0x802771FC
    // 0x80279680: nop

    func_802771FC(rdram, ctx);
        goto after_1;
    // 0x80279680: nop

    after_1:
    // 0x80279684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027968C: jr          $ra
    // 0x80279690: nop

    return;
    // 0x80279690: nop

;}
RECOMP_FUNC void func_80279640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279640: sb          $t5, 0x4($t1)
    MEM_B(0X4, ctx->r9) = ctx->r13;
    // 0x80279644: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80279648: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x8027964C: lw          $t6, 0xFA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XFA0);
    // 0x80279650: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x80279654: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80279658: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8027965C: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x80279660: lbu         $v0, 0x4($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X4);
    // 0x80279664: nop

    // 0x80279668: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8027966C: beq         $v1, $t3, L_8027967C
    if (ctx->r3 == ctx->r11) {
        // 0x80279670: nop
    
            goto L_8027967C;
    }
    // 0x80279670: nop

    // 0x80279674: jal         0x80035734
    // 0x80279678: nop

    func_80035734(rdram, ctx);
        goto after_0;
    // 0x80279678: nop

    after_0:
L_8027967C:
    // 0x8027967C: jal         0x802771FC
    // 0x80279680: nop

    func_802771FC(rdram, ctx);
        goto after_1;
    // 0x80279680: nop

    after_1:
    // 0x80279684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027968C: jr          $ra
    // 0x80279690: nop

    return;
    // 0x80279690: nop

;}
RECOMP_FUNC void func_80279694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279694: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80279698: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027969C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802796A0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x802796A4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x802796A8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802796AC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802796B0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802796B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802796B8: addiu       $a0, $a0, -0x68B0
    ctx->r4 = ADD32(ctx->r4, -0X68B0);
    // 0x802796BC: jal         0x800293DC
    // 0x802796C0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x802796C0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x802796C4: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x802796C8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x802796CC: beq         $s0, $s2, L_8027972C
    if (ctx->r16 == ctx->r18) {
        // 0x802796D0: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_8027972C;
    }
    // 0x802796D0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802796D4: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x802796D8: lui         $s4, 0x803C
    ctx->r20 = S32(0X803C << 16);
    // 0x802796DC: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x802796E0: addiu       $s3, $s3, -0x32B0
    ctx->r19 = ADD32(ctx->r19, -0X32B0);
    // 0x802796E4: addiu       $s4, $s4, 0x6BB4
    ctx->r20 = ADD32(ctx->r20, 0X6BB4);
    // 0x802796E8: addiu       $s5, $s5, 0x13E8
    ctx->r21 = ADD32(ctx->r21, 0X13E8);
L_802796EC:
    // 0x802796EC: lbu         $a1, 0x44($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X44);
    // 0x802796F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802796F4: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    // 0x802796F8: jal         0x8004C4B0
    // 0x802796FC: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_8004C4B0(rdram, ctx);
        goto after_1;
    // 0x802796FC: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_1:
    // 0x80279700: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x80279704: addu        $v0, $s5, $t6
    ctx->r2 = ADD32(ctx->r21, ctx->r14);
    // 0x80279708: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8027970C: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x80279710: jal         0x8004CD44
    // 0x80279714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x80279714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80279718: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8027971C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80279720: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x80279724: bne         $s0, $s2, L_802796EC
    if (ctx->r16 != ctx->r18) {
        // 0x80279728: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_802796EC;
    }
    // 0x80279728: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_8027972C:
    // 0x8027972C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80279730: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80279734: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80279738: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027973C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80279740: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80279744: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80279748: jr          $ra
    // 0x8027974C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027974C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80279750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80279754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80279758: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027975C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80279760: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x80279764: jal         0x80279E2C
    // 0x80279768: nop

    func_80279E2C(rdram, ctx);
        goto after_0;
    // 0x80279768: nop

    after_0:
    // 0x8027976C: beq         $v0, $zero, L_80279788
    if (ctx->r2 == 0) {
        // 0x80279770: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_80279788;
    }
    // 0x80279770: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80279774: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80279778: beq         $v0, $at, L_80279798
    if (ctx->r2 == ctx->r1) {
        // 0x8027977C: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_80279798;
    }
    // 0x8027977C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80279780: b           L_802797A4
    // 0x80279784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802797A4;
    // 0x80279784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80279788:
    // 0x80279788: jal         0x8002A468
    // 0x8027978C: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x8027978C: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_1:
    // 0x80279790: b           L_802797A4
    // 0x80279794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802797A4;
    // 0x80279794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80279798:
    // 0x80279798: jal         0x8002A468
    // 0x8027979C: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    func_8002A468(rdram, ctx);
        goto after_2;
    // 0x8027979C: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    after_2:
    // 0x802797A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802797A4:
    // 0x802797A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802797A8: jr          $ra
    // 0x802797AC: nop

    return;
    // 0x802797AC: nop

;}
RECOMP_FUNC void func_802797A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802797A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802797A8: jr          $ra
    // 0x802797AC: nop

    return;
    // 0x802797AC: nop

;}
RECOMP_FUNC void func_802797B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802797B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802797B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802797B8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802797BC: jal         0x80029220
    // 0x802797C0: addiu       $a0, $a0, -0x682C
    ctx->r4 = ADD32(ctx->r4, -0X682C);
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x802797C0: addiu       $a0, $a0, -0x682C
    ctx->r4 = ADD32(ctx->r4, -0X682C);
    after_0:
    // 0x802797C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802797C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802797CC: jr          $ra
    // 0x802797D0: nop

    return;
    // 0x802797D0: nop

;}
RECOMP_FUNC void func_802797D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802797D4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802797D8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802797DC: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x802797E0: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x802797E4: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x802797E8: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x802797EC: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x802797F0: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x802797F4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802797F8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802797FC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80279800: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80279804: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x80279808: jal         0x80279E2C
    // 0x8027980C: nop

    func_80279E2C(rdram, ctx);
        goto after_0;
    // 0x8027980C: nop

    after_0:
    // 0x80279810: beq         $v0, $zero, L_802798D4
    if (ctx->r2 == 0) {
        // 0x80279814: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802798D4;
    }
    // 0x80279814: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80279818: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027981C: bne         $v0, $at, L_802798E8
    if (ctx->r2 != ctx->r1) {
        // 0x80279820: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_802798E8;
    }
    // 0x80279820: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80279824: lui         $s7, 0x3
    ctx->r23 = S32(0X3 << 16);
    // 0x80279828: lui         $s6, 0x8028
    ctx->r22 = S32(0X8028 << 16);
    // 0x8027982C: lui         $s5, 0x2
    ctx->r21 = S32(0X2 << 16);
    // 0x80279830: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x80279834: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x80279838: addiu       $s3, $s3, -0x32B0
    ctx->r19 = ADD32(ctx->r19, -0X32B0);
    // 0x8027983C: addiu       $s4, $s4, -0x3770
    ctx->r20 = ADD32(ctx->r20, -0X3770);
    // 0x80279840: ori         $s5, $s5, 0xFEC8
    ctx->r21 = ctx->r21 | 0XFEC8;
    // 0x80279844: addiu       $s6, $s6, 0x13E8
    ctx->r22 = ADD32(ctx->r22, 0X13E8);
    // 0x80279848: ori         $s7, $s7, 0x8
    ctx->r23 = ctx->r23 | 0X8;
    // 0x8027984C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80279850:
    // 0x80279850: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80279854: addu        $s1, $s6, $t7
    ctx->r17 = ADD32(ctx->r22, ctx->r15);
    // 0x80279858: lh          $a3, 0x0($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X0);
    // 0x8027985C: lh          $t0, 0x2($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X2);
    // 0x80279860: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x80279864: addiu       $a3, $a3, 0x21
    ctx->r7 = ADD32(ctx->r7, 0X21);
    // 0x80279868: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x8027986C: addu        $s2, $s4, $t6
    ctx->r18 = ADD32(ctx->r20, ctx->r14);
    // 0x80279870: lbu         $a1, 0x44($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X44);
    // 0x80279874: addiu       $t1, $t0, 0x2
    ctx->r9 = ADD32(ctx->r8, 0X2);
    // 0x80279878: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8027987C: addu        $a0, $s2, $s5
    ctx->r4 = ADD32(ctx->r18, ctx->r21);
    // 0x80279880: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80279884: jal         0x8004CEE8
    // 0x80279888: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8004CEE8(rdram, ctx);
        goto after_1;
    // 0x80279888: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_1:
    // 0x8027988C: lh          $a3, 0x0($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X0);
    // 0x80279890: lh          $t4, 0x2($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X2);
    // 0x80279894: addiu       $a3, $a3, -0xE
    ctx->r7 = ADD32(ctx->r7, -0XE);
    // 0x80279898: sll         $t2, $a3, 16
    ctx->r10 = S32(ctx->r7 << 16);
    // 0x8027989C: lbu         $a1, 0x44($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X44);
    // 0x802798A0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802798A4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802798A8: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802798AC: addu        $a0, $s2, $s7
    ctx->r4 = ADD32(ctx->r18, ctx->r23);
    // 0x802798B0: jal         0x8004D320
    // 0x802798B4: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8004D320(rdram, ctx);
        goto after_2;
    // 0x802798B4: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_2:
    // 0x802798B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802798BC: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x802798C0: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802798C4: bne         $at, $zero, L_80279850
    if (ctx->r1 != 0) {
        // 0x802798C8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80279850;
    }
    // 0x802798C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802798CC: b           L_802798EC
    // 0x802798D0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_802798EC;
    // 0x802798D0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_802798D4:
    // 0x802798D4: jal         0x8002F224
    // 0x802798D8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8002F224(rdram, ctx);
        goto after_3;
    // 0x802798D8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_3:
    // 0x802798DC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x802798E0: jal         0x8002F224
    // 0x802798E4: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_8002F224(rdram, ctx);
        goto after_4;
    // 0x802798E4: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_4:
L_802798E8:
    // 0x802798E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_802798EC:
    // 0x802798EC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802798F0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802798F4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x802798F8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x802798FC: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80279900: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80279904: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x80279908: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x8027990C: jr          $ra
    // 0x80279910: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80279910: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802797E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802797E8: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x802797EC: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x802797F0: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x802797F4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802797F8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802797FC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80279800: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80279804: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x80279808: jal         0x80279E2C
    // 0x8027980C: nop

    func_80279E2C(rdram, ctx);
        goto after_0;
    // 0x8027980C: nop

    after_0:
    // 0x80279810: beq         $v0, $zero, L_802798D4
    if (ctx->r2 == 0) {
        // 0x80279814: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802798D4;
    }
    // 0x80279814: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80279818: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027981C: bne         $v0, $at, L_802798E8
    if (ctx->r2 != ctx->r1) {
        // 0x80279820: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_802798E8;
    }
    // 0x80279820: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80279824: lui         $s7, 0x3
    ctx->r23 = S32(0X3 << 16);
    // 0x80279828: lui         $s6, 0x8028
    ctx->r22 = S32(0X8028 << 16);
    // 0x8027982C: lui         $s5, 0x2
    ctx->r21 = S32(0X2 << 16);
    // 0x80279830: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x80279834: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x80279838: addiu       $s3, $s3, -0x32B0
    ctx->r19 = ADD32(ctx->r19, -0X32B0);
    // 0x8027983C: addiu       $s4, $s4, -0x3770
    ctx->r20 = ADD32(ctx->r20, -0X3770);
    // 0x80279840: ori         $s5, $s5, 0xFEC8
    ctx->r21 = ctx->r21 | 0XFEC8;
    // 0x80279844: addiu       $s6, $s6, 0x13E8
    ctx->r22 = ADD32(ctx->r22, 0X13E8);
    // 0x80279848: ori         $s7, $s7, 0x8
    ctx->r23 = ctx->r23 | 0X8;
    // 0x8027984C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80279850:
    // 0x80279850: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80279854: addu        $s1, $s6, $t7
    ctx->r17 = ADD32(ctx->r22, ctx->r15);
    // 0x80279858: lh          $a3, 0x0($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X0);
    // 0x8027985C: lh          $t0, 0x2($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X2);
    // 0x80279860: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x80279864: addiu       $a3, $a3, 0x21
    ctx->r7 = ADD32(ctx->r7, 0X21);
    // 0x80279868: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x8027986C: addu        $s2, $s4, $t6
    ctx->r18 = ADD32(ctx->r20, ctx->r14);
    // 0x80279870: lbu         $a1, 0x44($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X44);
    // 0x80279874: addiu       $t1, $t0, 0x2
    ctx->r9 = ADD32(ctx->r8, 0X2);
    // 0x80279878: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8027987C: addu        $a0, $s2, $s5
    ctx->r4 = ADD32(ctx->r18, ctx->r21);
    // 0x80279880: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80279884: jal         0x8004CEE8
    // 0x80279888: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8004CEE8(rdram, ctx);
        goto after_1;
    // 0x80279888: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_1:
    // 0x8027988C: lh          $a3, 0x0($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X0);
    // 0x80279890: lh          $t4, 0x2($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X2);
    // 0x80279894: addiu       $a3, $a3, -0xE
    ctx->r7 = ADD32(ctx->r7, -0XE);
    // 0x80279898: sll         $t2, $a3, 16
    ctx->r10 = S32(ctx->r7 << 16);
    // 0x8027989C: lbu         $a1, 0x44($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X44);
    // 0x802798A0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802798A4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802798A8: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802798AC: addu        $a0, $s2, $s7
    ctx->r4 = ADD32(ctx->r18, ctx->r23);
    // 0x802798B0: jal         0x8004D320
    // 0x802798B4: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8004D320(rdram, ctx);
        goto after_2;
    // 0x802798B4: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_2:
    // 0x802798B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802798BC: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x802798C0: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802798C4: bne         $at, $zero, L_80279850
    if (ctx->r1 != 0) {
        // 0x802798C8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80279850;
    }
    // 0x802798C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802798CC: b           L_802798EC
    // 0x802798D0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_802798EC;
    // 0x802798D0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_802798D4:
    // 0x802798D4: jal         0x8002F224
    // 0x802798D8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8002F224(rdram, ctx);
        goto after_3;
    // 0x802798D8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_3:
    // 0x802798DC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x802798E0: jal         0x8002F224
    // 0x802798E4: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_8002F224(rdram, ctx);
        goto after_4;
    // 0x802798E4: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_4:
L_802798E8:
    // 0x802798E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_802798EC:
    // 0x802798EC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802798F0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802798F4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x802798F8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x802798FC: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80279900: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80279904: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x80279908: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x8027990C: jr          $ra
    // 0x80279910: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80279910: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80279914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279914: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80279918: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x8027991C: lbu         $v0, 0x6B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X6B);
    // 0x80279920: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80279924: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80279928: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8027992C: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x80279930: lbu         $t7, 0x38($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X38);
    // 0x80279934: lui         $t0, 0x8029
    ctx->r8 = S32(0X8029 << 16);
    // 0x80279938: lui         $t1, 0x8029
    ctx->r9 = S32(0X8029 << 16);
    // 0x8027993C: lb          $a3, 0x2E($a1)
    ctx->r7 = MEM_B(ctx->r5, 0X2E);
    // 0x80279940: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80279944: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80279948: lh          $t0, -0x7A38($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X7A38);
    // 0x8027994C: lh          $t1, -0x7A20($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X7A20);
    // 0x80279950: sltiu       $at, $t7, 0xA
    ctx->r1 = ctx->r15 < 0XA ? 1 : 0;
    // 0x80279954: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80279958: beq         $at, $zero, L_80279BE8
    if (ctx->r1 == 0) {
        // 0x8027995C: andi        $t2, $a3, 0xFF
        ctx->r10 = ctx->r7 & 0XFF;
            goto L_80279BE8;
    }
    // 0x8027995C: andi        $t2, $a3, 0xFF
    ctx->r10 = ctx->r7 & 0XFF;
    // 0x80279960: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80279964: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80279968: addu        $at, $at, $t7
    gpr jr_addend_80279974 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8027996C: lw          $t7, 0x1F14($at)
    ctx->r15 = ADD32(ctx->r1, 0X1F14);
    // 0x80279970: nop

    // 0x80279974: jr          $t7
    // 0x80279978: nop

    switch (jr_addend_80279974 >> 2) {
        case 0: goto L_8027997C; break;
        case 1: goto L_8027997C; break;
        case 2: goto L_80279A44; break;
        case 3: goto L_8027997C; break;
        case 4: goto L_80279A44; break;
        case 5: goto L_80279A44; break;
        case 6: goto L_8027997C; break;
        case 7: goto L_80279B0C; break;
        case 8: goto L_80279B0C; break;
        case 9: goto L_8027997C; break;
        default: switch_error(__func__, 0x80279974, 0x80281F14);
    }
    // 0x80279978: nop

L_8027997C:
    // 0x8027997C: lbu         $a2, 0x3A($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X3A);
    // 0x80279980: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80279984: addiu       $t8, $t8, 0x14E0
    ctx->r24 = ADD32(ctx->r24, 0X14E0);
    // 0x80279988: sll         $v0, $t2, 4
    ctx->r2 = S32(ctx->r10 << 4);
    // 0x8027998C: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80279990: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80279994: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80279998: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x8027999C: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x802799A0: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x802799A4: swl         $at, 0x18($sp)
    do_swl(rdram, 0X18, ctx->r29, ctx->r1);
    // 0x802799A8: swr         $at, 0x1B($sp)
    do_swr(rdram, 0X1B, ctx->r29, ctx->r1);
    // 0x802799AC: lwl         $t4, 0x4($t9)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r25, 0X4);
    // 0x802799B0: lwr         $t4, 0x7($t9)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r25, 0X7);
    // 0x802799B4: addiu       $t5, $t5, 0x1500
    ctx->r13 = ADD32(ctx->r13, 0X1500);
    // 0x802799B8: swl         $t4, 0x1C($sp)
    do_swl(rdram, 0X1C, ctx->r29, ctx->r12);
    // 0x802799BC: swr         $t4, 0x1F($sp)
    do_swr(rdram, 0X1F, ctx->r29, ctx->r12);
    // 0x802799C0: lwl         $at, 0x8($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X8);
    // 0x802799C4: lwr         $at, 0xB($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0XB);
    // 0x802799C8: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x802799CC: swl         $at, 0x20($sp)
    do_swl(rdram, 0X20, ctx->r29, ctx->r1);
    // 0x802799D0: swr         $at, 0x23($sp)
    do_swr(rdram, 0X23, ctx->r29, ctx->r1);
    // 0x802799D4: lwl         $t4, 0xC($t9)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r25, 0XC);
    // 0x802799D8: lwr         $t4, 0xF($t9)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r25, 0XF);
    // 0x802799DC: lbu         $a1, 0x6B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X6B);
    // 0x802799E0: swl         $t4, 0x24($sp)
    do_swl(rdram, 0X24, ctx->r29, ctx->r12);
    // 0x802799E4: swr         $t4, 0x27($sp)
    do_swr(rdram, 0X27, ctx->r29, ctx->r12);
    // 0x802799E8: lwl         $at, 0x0($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X0);
    // 0x802799EC: lwr         $at, 0x3($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0X3);
    // 0x802799F0: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x802799F4: swl         $at, 0x28($sp)
    do_swl(rdram, 0X28, ctx->r29, ctx->r1);
    // 0x802799F8: swr         $at, 0x2B($sp)
    do_swr(rdram, 0X2B, ctx->r29, ctx->r1);
    // 0x802799FC: lwl         $t8, 0x4($t6)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r14, 0X4);
    // 0x80279A00: lwr         $t8, 0x7($t6)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r14, 0X7);
    // 0x80279A04: nop

    // 0x80279A08: swl         $t8, 0x2C($sp)
    do_swl(rdram, 0X2C, ctx->r29, ctx->r24);
    // 0x80279A0C: swr         $t8, 0x2F($sp)
    do_swr(rdram, 0X2F, ctx->r29, ctx->r24);
    // 0x80279A10: lwl         $at, 0x8($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X8);
    // 0x80279A14: lwr         $at, 0xB($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0XB);
    // 0x80279A18: nop

    // 0x80279A1C: swl         $at, 0x30($sp)
    do_swl(rdram, 0X30, ctx->r29, ctx->r1);
    // 0x80279A20: swr         $at, 0x33($sp)
    do_swr(rdram, 0X33, ctx->r29, ctx->r1);
    // 0x80279A24: lwl         $t8, 0xC($t6)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r14, 0XC);
    // 0x80279A28: lwr         $t8, 0xF($t6)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r14, 0XF);
    // 0x80279A2C: nop

    // 0x80279A30: swl         $t8, 0x34($sp)
    do_swl(rdram, 0X34, ctx->r29, ctx->r24);
    // 0x80279A34: jal         0x8006D974
    // 0x80279A38: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    func_8006D974(rdram, ctx);
        goto after_0;
    // 0x80279A38: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    after_0:
    // 0x80279A3C: b           L_80279BEC
    // 0x80279A40: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
        goto L_80279BEC;
    // 0x80279A40: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
L_80279A44:
    // 0x80279A44: lbu         $a2, 0x3A($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X3A);
    // 0x80279A48: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80279A4C: addiu       $t3, $t3, 0x13A8
    ctx->r11 = ADD32(ctx->r11, 0X13A8);
    // 0x80279A50: sll         $v0, $t2, 4
    ctx->r2 = S32(ctx->r10 << 4);
    // 0x80279A54: addu        $t9, $v0, $t3
    ctx->r25 = ADD32(ctx->r2, ctx->r11);
    // 0x80279A58: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80279A5C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80279A60: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x80279A64: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x80279A68: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80279A6C: swl         $at, 0x18($sp)
    do_swl(rdram, 0X18, ctx->r29, ctx->r1);
    // 0x80279A70: swr         $at, 0x1B($sp)
    do_swr(rdram, 0X1B, ctx->r29, ctx->r1);
    // 0x80279A74: lwl         $t5, 0x4($t9)
    ctx->r13 = do_lwl(rdram, ctx->r13, ctx->r25, 0X4);
    // 0x80279A78: lwr         $t5, 0x7($t9)
    ctx->r13 = do_lwr(rdram, ctx->r13, ctx->r25, 0X7);
    // 0x80279A7C: addiu       $t7, $t7, 0x13C8
    ctx->r15 = ADD32(ctx->r15, 0X13C8);
    // 0x80279A80: swl         $t5, 0x1C($sp)
    do_swl(rdram, 0X1C, ctx->r29, ctx->r13);
    // 0x80279A84: swr         $t5, 0x1F($sp)
    do_swr(rdram, 0X1F, ctx->r29, ctx->r13);
    // 0x80279A88: lwl         $at, 0x8($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X8);
    // 0x80279A8C: lwr         $at, 0xB($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0XB);
    // 0x80279A90: addu        $t6, $v0, $t7
    ctx->r14 = ADD32(ctx->r2, ctx->r15);
    // 0x80279A94: swl         $at, 0x20($sp)
    do_swl(rdram, 0X20, ctx->r29, ctx->r1);
    // 0x80279A98: swr         $at, 0x23($sp)
    do_swr(rdram, 0X23, ctx->r29, ctx->r1);
    // 0x80279A9C: lwl         $t5, 0xC($t9)
    ctx->r13 = do_lwl(rdram, ctx->r13, ctx->r25, 0XC);
    // 0x80279AA0: lwr         $t5, 0xF($t9)
    ctx->r13 = do_lwr(rdram, ctx->r13, ctx->r25, 0XF);
    // 0x80279AA4: lbu         $a1, 0x6B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X6B);
    // 0x80279AA8: swl         $t5, 0x24($sp)
    do_swl(rdram, 0X24, ctx->r29, ctx->r13);
    // 0x80279AAC: swr         $t5, 0x27($sp)
    do_swr(rdram, 0X27, ctx->r29, ctx->r13);
    // 0x80279AB0: lwl         $at, 0x0($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X0);
    // 0x80279AB4: lwr         $at, 0x3($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0X3);
    // 0x80279AB8: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80279ABC: swl         $at, 0x28($sp)
    do_swl(rdram, 0X28, ctx->r29, ctx->r1);
    // 0x80279AC0: swr         $at, 0x2B($sp)
    do_swr(rdram, 0X2B, ctx->r29, ctx->r1);
    // 0x80279AC4: lwl         $t3, 0x4($t6)
    ctx->r11 = do_lwl(rdram, ctx->r11, ctx->r14, 0X4);
    // 0x80279AC8: lwr         $t3, 0x7($t6)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r14, 0X7);
    // 0x80279ACC: nop

    // 0x80279AD0: swl         $t3, 0x2C($sp)
    do_swl(rdram, 0X2C, ctx->r29, ctx->r11);
    // 0x80279AD4: swr         $t3, 0x2F($sp)
    do_swr(rdram, 0X2F, ctx->r29, ctx->r11);
    // 0x80279AD8: lwl         $at, 0x8($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X8);
    // 0x80279ADC: lwr         $at, 0xB($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0XB);
    // 0x80279AE0: nop

    // 0x80279AE4: swl         $at, 0x30($sp)
    do_swl(rdram, 0X30, ctx->r29, ctx->r1);
    // 0x80279AE8: swr         $at, 0x33($sp)
    do_swr(rdram, 0X33, ctx->r29, ctx->r1);
    // 0x80279AEC: lwl         $t3, 0xC($t6)
    ctx->r11 = do_lwl(rdram, ctx->r11, ctx->r14, 0XC);
    // 0x80279AF0: lwr         $t3, 0xF($t6)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r14, 0XF);
    // 0x80279AF4: nop

    // 0x80279AF8: swl         $t3, 0x34($sp)
    do_swl(rdram, 0X34, ctx->r29, ctx->r11);
    // 0x80279AFC: jal         0x8006D974
    // 0x80279B00: swr         $t3, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r11);
    func_8006D974(rdram, ctx);
        goto after_1;
    // 0x80279B00: swr         $t3, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r11);
    after_1:
    // 0x80279B04: b           L_80279BEC
    // 0x80279B08: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
        goto L_80279BEC;
    // 0x80279B08: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
L_80279B0C:
    // 0x80279B0C: lb          $v0, 0x59($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X59);
    // 0x80279B10: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80279B14: bne         $v0, $at, L_80279B24
    if (ctx->r2 != ctx->r1) {
        // 0x80279B18: lui         $t9, 0x8028
        ctx->r25 = S32(0X8028 << 16);
            goto L_80279B24;
    }
    // 0x80279B18: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80279B1C: b           L_80279B30
    // 0x80279B20: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_80279B30;
    // 0x80279B20: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80279B24:
    // 0x80279B24: sll         $v1, $v0, 24
    ctx->r3 = S32(ctx->r2 << 24);
    // 0x80279B28: sra         $t4, $v1, 24
    ctx->r12 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80279B2C: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
L_80279B30:
    // 0x80279B30: sll         $v0, $t2, 4
    ctx->r2 = S32(ctx->r10 << 4);
    // 0x80279B34: addiu       $t9, $t9, 0x14E0
    ctx->r25 = ADD32(ctx->r25, 0X14E0);
    // 0x80279B38: addu        $t5, $v0, $t9
    ctx->r13 = ADD32(ctx->r2, ctx->r25);
    // 0x80279B3C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80279B40: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80279B44: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x80279B48: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x80279B4C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80279B50: swl         $at, 0x18($sp)
    do_swl(rdram, 0X18, ctx->r29, ctx->r1);
    // 0x80279B54: swr         $at, 0x1B($sp)
    do_swr(rdram, 0X1B, ctx->r29, ctx->r1);
    // 0x80279B58: lwl         $t8, 0x4($t5)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r13, 0X4);
    // 0x80279B5C: lwr         $t8, 0x7($t5)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r13, 0X7);
    // 0x80279B60: addiu       $t6, $t6, 0x1500
    ctx->r14 = ADD32(ctx->r14, 0X1500);
    // 0x80279B64: swl         $t8, 0x1C($sp)
    do_swl(rdram, 0X1C, ctx->r29, ctx->r24);
    // 0x80279B68: swr         $t8, 0x1F($sp)
    do_swr(rdram, 0X1F, ctx->r29, ctx->r24);
    // 0x80279B6C: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x80279B70: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x80279B74: addu        $t3, $v0, $t6
    ctx->r11 = ADD32(ctx->r2, ctx->r14);
    // 0x80279B78: swl         $at, 0x20($sp)
    do_swl(rdram, 0X20, ctx->r29, ctx->r1);
    // 0x80279B7C: swr         $at, 0x23($sp)
    do_swr(rdram, 0X23, ctx->r29, ctx->r1);
    // 0x80279B80: lwl         $t8, 0xC($t5)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r13, 0XC);
    // 0x80279B84: lwr         $t8, 0xF($t5)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r13, 0XF);
    // 0x80279B88: lbu         $a1, 0x6B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X6B);
    // 0x80279B8C: swl         $t8, 0x24($sp)
    do_swl(rdram, 0X24, ctx->r29, ctx->r24);
    // 0x80279B90: swr         $t8, 0x27($sp)
    do_swr(rdram, 0X27, ctx->r29, ctx->r24);
    // 0x80279B94: lwl         $at, 0x0($t3)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r11, 0X0);
    // 0x80279B98: lwr         $at, 0x3($t3)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r11, 0X3);
    // 0x80279B9C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80279BA0: swl         $at, 0x28($sp)
    do_swl(rdram, 0X28, ctx->r29, ctx->r1);
    // 0x80279BA4: swr         $at, 0x2B($sp)
    do_swr(rdram, 0X2B, ctx->r29, ctx->r1);
    // 0x80279BA8: lwl         $t9, 0x4($t3)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r11, 0X4);
    // 0x80279BAC: lwr         $t9, 0x7($t3)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r11, 0X7);
    // 0x80279BB0: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
    // 0x80279BB4: swl         $t9, 0x2C($sp)
    do_swl(rdram, 0X2C, ctx->r29, ctx->r25);
    // 0x80279BB8: swr         $t9, 0x2F($sp)
    do_swr(rdram, 0X2F, ctx->r29, ctx->r25);
    // 0x80279BBC: lwl         $at, 0x8($t3)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r11, 0X8);
    // 0x80279BC0: lwr         $at, 0xB($t3)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r11, 0XB);
    // 0x80279BC4: nop

    // 0x80279BC8: swl         $at, 0x30($sp)
    do_swl(rdram, 0X30, ctx->r29, ctx->r1);
    // 0x80279BCC: swr         $at, 0x33($sp)
    do_swr(rdram, 0X33, ctx->r29, ctx->r1);
    // 0x80279BD0: lwl         $t9, 0xC($t3)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r11, 0XC);
    // 0x80279BD4: lwr         $t9, 0xF($t3)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r11, 0XF);
    // 0x80279BD8: nop

    // 0x80279BDC: swl         $t9, 0x34($sp)
    do_swl(rdram, 0X34, ctx->r29, ctx->r25);
    // 0x80279BE0: jal         0x8006D974
    // 0x80279BE4: swr         $t9, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r25);
    func_8006D974(rdram, ctx);
        goto after_2;
    // 0x80279BE4: swr         $t9, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r25);
    after_2:
L_80279BE8:
    // 0x80279BE8: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
L_80279BEC:
    // 0x80279BEC: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80279BF0: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x80279BF4: nop

    // 0x80279BF8: swl         $at, 0x0($t7)
    do_swl(rdram, 0X0, ctx->r15, ctx->r1);
    // 0x80279BFC: swr         $at, 0x3($t7)
    do_swr(rdram, 0X3, ctx->r15, ctx->r1);
    // 0x80279C00: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80279C04: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80279C08: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x80279C0C: jr          $ra
    // 0x80279C10: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80279C10: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80279960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279960: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80279964: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80279968: addu        $at, $at, $t7
    gpr jr_addend_80279974 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8027996C: lw          $t7, 0x1F14($at)
    ctx->r15 = ADD32(ctx->r1, 0X1F14);
    // 0x80279970: nop

    // 0x80279974: jr          $t7
    // 0x80279978: nop

    switch (jr_addend_80279974 >> 2) {
        case 0: goto L_8027997C; break;
        case 1: goto L_8027997C; break;
        case 2: goto L_80279A44; break;
        case 3: goto L_8027997C; break;
        case 4: goto L_80279A44; break;
        case 5: goto L_80279A44; break;
        case 6: goto L_8027997C; break;
        case 7: goto L_80279B0C; break;
        case 8: goto L_80279B0C; break;
        case 9: goto L_8027997C; break;
        default: switch_error(__func__, 0x80279974, 0x80281F14);
    }
    // 0x80279978: nop

L_8027997C:
    // 0x8027997C: lbu         $a2, 0x3A($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X3A);
    // 0x80279980: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80279984: addiu       $t8, $t8, 0x14E0
    ctx->r24 = ADD32(ctx->r24, 0X14E0);
    // 0x80279988: sll         $v0, $t2, 4
    ctx->r2 = S32(ctx->r10 << 4);
    // 0x8027998C: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80279990: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80279994: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80279998: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x8027999C: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x802799A0: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x802799A4: swl         $at, 0x18($sp)
    do_swl(rdram, 0X18, ctx->r29, ctx->r1);
    // 0x802799A8: swr         $at, 0x1B($sp)
    do_swr(rdram, 0X1B, ctx->r29, ctx->r1);
    // 0x802799AC: lwl         $t4, 0x4($t9)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r25, 0X4);
    // 0x802799B0: lwr         $t4, 0x7($t9)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r25, 0X7);
    // 0x802799B4: addiu       $t5, $t5, 0x1500
    ctx->r13 = ADD32(ctx->r13, 0X1500);
    // 0x802799B8: swl         $t4, 0x1C($sp)
    do_swl(rdram, 0X1C, ctx->r29, ctx->r12);
    // 0x802799BC: swr         $t4, 0x1F($sp)
    do_swr(rdram, 0X1F, ctx->r29, ctx->r12);
    // 0x802799C0: lwl         $at, 0x8($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X8);
    // 0x802799C4: lwr         $at, 0xB($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0XB);
    // 0x802799C8: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x802799CC: swl         $at, 0x20($sp)
    do_swl(rdram, 0X20, ctx->r29, ctx->r1);
    // 0x802799D0: swr         $at, 0x23($sp)
    do_swr(rdram, 0X23, ctx->r29, ctx->r1);
    // 0x802799D4: lwl         $t4, 0xC($t9)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r25, 0XC);
    // 0x802799D8: lwr         $t4, 0xF($t9)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r25, 0XF);
    // 0x802799DC: lbu         $a1, 0x6B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X6B);
    // 0x802799E0: swl         $t4, 0x24($sp)
    do_swl(rdram, 0X24, ctx->r29, ctx->r12);
    // 0x802799E4: swr         $t4, 0x27($sp)
    do_swr(rdram, 0X27, ctx->r29, ctx->r12);
    // 0x802799E8: lwl         $at, 0x0($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X0);
    // 0x802799EC: lwr         $at, 0x3($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0X3);
    // 0x802799F0: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x802799F4: swl         $at, 0x28($sp)
    do_swl(rdram, 0X28, ctx->r29, ctx->r1);
    // 0x802799F8: swr         $at, 0x2B($sp)
    do_swr(rdram, 0X2B, ctx->r29, ctx->r1);
    // 0x802799FC: lwl         $t8, 0x4($t6)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r14, 0X4);
    // 0x80279A00: lwr         $t8, 0x7($t6)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r14, 0X7);
    // 0x80279A04: nop

    // 0x80279A08: swl         $t8, 0x2C($sp)
    do_swl(rdram, 0X2C, ctx->r29, ctx->r24);
    // 0x80279A0C: swr         $t8, 0x2F($sp)
    do_swr(rdram, 0X2F, ctx->r29, ctx->r24);
    // 0x80279A10: lwl         $at, 0x8($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X8);
    // 0x80279A14: lwr         $at, 0xB($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0XB);
    // 0x80279A18: nop

    // 0x80279A1C: swl         $at, 0x30($sp)
    do_swl(rdram, 0X30, ctx->r29, ctx->r1);
    // 0x80279A20: swr         $at, 0x33($sp)
    do_swr(rdram, 0X33, ctx->r29, ctx->r1);
    // 0x80279A24: lwl         $t8, 0xC($t6)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r14, 0XC);
    // 0x80279A28: lwr         $t8, 0xF($t6)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r14, 0XF);
    // 0x80279A2C: nop

    // 0x80279A30: swl         $t8, 0x34($sp)
    do_swl(rdram, 0X34, ctx->r29, ctx->r24);
    // 0x80279A34: jal         0x8006D974
    // 0x80279A38: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    func_8006D974(rdram, ctx);
        goto after_0;
    // 0x80279A38: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    after_0:
    // 0x80279A3C: b           L_80279BEC
    // 0x80279A40: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
        goto L_80279BEC;
    // 0x80279A40: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
L_80279A44:
    // 0x80279A44: lbu         $a2, 0x3A($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X3A);
    // 0x80279A48: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80279A4C: addiu       $t3, $t3, 0x13A8
    ctx->r11 = ADD32(ctx->r11, 0X13A8);
    // 0x80279A50: sll         $v0, $t2, 4
    ctx->r2 = S32(ctx->r10 << 4);
    // 0x80279A54: addu        $t9, $v0, $t3
    ctx->r25 = ADD32(ctx->r2, ctx->r11);
    // 0x80279A58: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80279A5C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80279A60: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x80279A64: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x80279A68: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80279A6C: swl         $at, 0x18($sp)
    do_swl(rdram, 0X18, ctx->r29, ctx->r1);
    // 0x80279A70: swr         $at, 0x1B($sp)
    do_swr(rdram, 0X1B, ctx->r29, ctx->r1);
    // 0x80279A74: lwl         $t5, 0x4($t9)
    ctx->r13 = do_lwl(rdram, ctx->r13, ctx->r25, 0X4);
    // 0x80279A78: lwr         $t5, 0x7($t9)
    ctx->r13 = do_lwr(rdram, ctx->r13, ctx->r25, 0X7);
    // 0x80279A7C: addiu       $t7, $t7, 0x13C8
    ctx->r15 = ADD32(ctx->r15, 0X13C8);
    // 0x80279A80: swl         $t5, 0x1C($sp)
    do_swl(rdram, 0X1C, ctx->r29, ctx->r13);
    // 0x80279A84: swr         $t5, 0x1F($sp)
    do_swr(rdram, 0X1F, ctx->r29, ctx->r13);
    // 0x80279A88: lwl         $at, 0x8($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X8);
    // 0x80279A8C: lwr         $at, 0xB($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0XB);
    // 0x80279A90: addu        $t6, $v0, $t7
    ctx->r14 = ADD32(ctx->r2, ctx->r15);
    // 0x80279A94: swl         $at, 0x20($sp)
    do_swl(rdram, 0X20, ctx->r29, ctx->r1);
    // 0x80279A98: swr         $at, 0x23($sp)
    do_swr(rdram, 0X23, ctx->r29, ctx->r1);
    // 0x80279A9C: lwl         $t5, 0xC($t9)
    ctx->r13 = do_lwl(rdram, ctx->r13, ctx->r25, 0XC);
    // 0x80279AA0: lwr         $t5, 0xF($t9)
    ctx->r13 = do_lwr(rdram, ctx->r13, ctx->r25, 0XF);
    // 0x80279AA4: lbu         $a1, 0x6B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X6B);
    // 0x80279AA8: swl         $t5, 0x24($sp)
    do_swl(rdram, 0X24, ctx->r29, ctx->r13);
    // 0x80279AAC: swr         $t5, 0x27($sp)
    do_swr(rdram, 0X27, ctx->r29, ctx->r13);
    // 0x80279AB0: lwl         $at, 0x0($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X0);
    // 0x80279AB4: lwr         $at, 0x3($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0X3);
    // 0x80279AB8: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80279ABC: swl         $at, 0x28($sp)
    do_swl(rdram, 0X28, ctx->r29, ctx->r1);
    // 0x80279AC0: swr         $at, 0x2B($sp)
    do_swr(rdram, 0X2B, ctx->r29, ctx->r1);
    // 0x80279AC4: lwl         $t3, 0x4($t6)
    ctx->r11 = do_lwl(rdram, ctx->r11, ctx->r14, 0X4);
    // 0x80279AC8: lwr         $t3, 0x7($t6)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r14, 0X7);
    // 0x80279ACC: nop

    // 0x80279AD0: swl         $t3, 0x2C($sp)
    do_swl(rdram, 0X2C, ctx->r29, ctx->r11);
    // 0x80279AD4: swr         $t3, 0x2F($sp)
    do_swr(rdram, 0X2F, ctx->r29, ctx->r11);
    // 0x80279AD8: lwl         $at, 0x8($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X8);
    // 0x80279ADC: lwr         $at, 0xB($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0XB);
    // 0x80279AE0: nop

    // 0x80279AE4: swl         $at, 0x30($sp)
    do_swl(rdram, 0X30, ctx->r29, ctx->r1);
    // 0x80279AE8: swr         $at, 0x33($sp)
    do_swr(rdram, 0X33, ctx->r29, ctx->r1);
    // 0x80279AEC: lwl         $t3, 0xC($t6)
    ctx->r11 = do_lwl(rdram, ctx->r11, ctx->r14, 0XC);
    // 0x80279AF0: lwr         $t3, 0xF($t6)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r14, 0XF);
    // 0x80279AF4: nop

    // 0x80279AF8: swl         $t3, 0x34($sp)
    do_swl(rdram, 0X34, ctx->r29, ctx->r11);
    // 0x80279AFC: jal         0x8006D974
    // 0x80279B00: swr         $t3, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r11);
    func_8006D974(rdram, ctx);
        goto after_1;
    // 0x80279B00: swr         $t3, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r11);
    after_1:
    // 0x80279B04: b           L_80279BEC
    // 0x80279B08: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
        goto L_80279BEC;
    // 0x80279B08: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
L_80279B0C:
    // 0x80279B0C: lb          $v0, 0x59($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X59);
    // 0x80279B10: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80279B14: bne         $v0, $at, L_80279B24
    if (ctx->r2 != ctx->r1) {
        // 0x80279B18: lui         $t9, 0x8028
        ctx->r25 = S32(0X8028 << 16);
            goto L_80279B24;
    }
    // 0x80279B18: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80279B1C: b           L_80279B30
    // 0x80279B20: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_80279B30;
    // 0x80279B20: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80279B24:
    // 0x80279B24: sll         $v1, $v0, 24
    ctx->r3 = S32(ctx->r2 << 24);
    // 0x80279B28: sra         $t4, $v1, 24
    ctx->r12 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80279B2C: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
L_80279B30:
    // 0x80279B30: sll         $v0, $t2, 4
    ctx->r2 = S32(ctx->r10 << 4);
    // 0x80279B34: addiu       $t9, $t9, 0x14E0
    ctx->r25 = ADD32(ctx->r25, 0X14E0);
    // 0x80279B38: addu        $t5, $v0, $t9
    ctx->r13 = ADD32(ctx->r2, ctx->r25);
    // 0x80279B3C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80279B40: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80279B44: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x80279B48: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x80279B4C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80279B50: swl         $at, 0x18($sp)
    do_swl(rdram, 0X18, ctx->r29, ctx->r1);
    // 0x80279B54: swr         $at, 0x1B($sp)
    do_swr(rdram, 0X1B, ctx->r29, ctx->r1);
    // 0x80279B58: lwl         $t8, 0x4($t5)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r13, 0X4);
    // 0x80279B5C: lwr         $t8, 0x7($t5)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r13, 0X7);
    // 0x80279B60: addiu       $t6, $t6, 0x1500
    ctx->r14 = ADD32(ctx->r14, 0X1500);
    // 0x80279B64: swl         $t8, 0x1C($sp)
    do_swl(rdram, 0X1C, ctx->r29, ctx->r24);
    // 0x80279B68: swr         $t8, 0x1F($sp)
    do_swr(rdram, 0X1F, ctx->r29, ctx->r24);
    // 0x80279B6C: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x80279B70: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x80279B74: addu        $t3, $v0, $t6
    ctx->r11 = ADD32(ctx->r2, ctx->r14);
    // 0x80279B78: swl         $at, 0x20($sp)
    do_swl(rdram, 0X20, ctx->r29, ctx->r1);
    // 0x80279B7C: swr         $at, 0x23($sp)
    do_swr(rdram, 0X23, ctx->r29, ctx->r1);
    // 0x80279B80: lwl         $t8, 0xC($t5)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r13, 0XC);
    // 0x80279B84: lwr         $t8, 0xF($t5)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r13, 0XF);
    // 0x80279B88: lbu         $a1, 0x6B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X6B);
    // 0x80279B8C: swl         $t8, 0x24($sp)
    do_swl(rdram, 0X24, ctx->r29, ctx->r24);
    // 0x80279B90: swr         $t8, 0x27($sp)
    do_swr(rdram, 0X27, ctx->r29, ctx->r24);
    // 0x80279B94: lwl         $at, 0x0($t3)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r11, 0X0);
    // 0x80279B98: lwr         $at, 0x3($t3)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r11, 0X3);
    // 0x80279B9C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80279BA0: swl         $at, 0x28($sp)
    do_swl(rdram, 0X28, ctx->r29, ctx->r1);
    // 0x80279BA4: swr         $at, 0x2B($sp)
    do_swr(rdram, 0X2B, ctx->r29, ctx->r1);
    // 0x80279BA8: lwl         $t9, 0x4($t3)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r11, 0X4);
    // 0x80279BAC: lwr         $t9, 0x7($t3)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r11, 0X7);
    // 0x80279BB0: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
    // 0x80279BB4: swl         $t9, 0x2C($sp)
    do_swl(rdram, 0X2C, ctx->r29, ctx->r25);
    // 0x80279BB8: swr         $t9, 0x2F($sp)
    do_swr(rdram, 0X2F, ctx->r29, ctx->r25);
    // 0x80279BBC: lwl         $at, 0x8($t3)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r11, 0X8);
    // 0x80279BC0: lwr         $at, 0xB($t3)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r11, 0XB);
    // 0x80279BC4: nop

    // 0x80279BC8: swl         $at, 0x30($sp)
    do_swl(rdram, 0X30, ctx->r29, ctx->r1);
    // 0x80279BCC: swr         $at, 0x33($sp)
    do_swr(rdram, 0X33, ctx->r29, ctx->r1);
    // 0x80279BD0: lwl         $t9, 0xC($t3)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r11, 0XC);
    // 0x80279BD4: lwr         $t9, 0xF($t3)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r11, 0XF);
    // 0x80279BD8: nop

    // 0x80279BDC: swl         $t9, 0x34($sp)
    do_swl(rdram, 0X34, ctx->r29, ctx->r25);
    // 0x80279BE0: jal         0x8006D974
    // 0x80279BE4: swr         $t9, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r25);
    func_8006D974(rdram, ctx);
        goto after_2;
    // 0x80279BE4: swr         $t9, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r25);
    after_2:
    // 0x80279BE8: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
L_80279BEC:
    // 0x80279BEC: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80279BF0: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x80279BF4: nop

    // 0x80279BF8: swl         $at, 0x0($t7)
    do_swl(rdram, 0X0, ctx->r15, ctx->r1);
    // 0x80279BFC: swr         $at, 0x3($t7)
    do_swr(rdram, 0X3, ctx->r15, ctx->r1);
    // 0x80279C00: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80279C04: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80279C08: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x80279C0C: jr          $ra
    // 0x80279C10: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80279C10: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80279A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279A54: addu        $t9, $v0, $t3
    ctx->r25 = ADD32(ctx->r2, ctx->r11);
    // 0x80279A58: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80279A5C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80279A60: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x80279A64: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x80279A68: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80279A6C: swl         $at, 0x18($sp)
    do_swl(rdram, 0X18, ctx->r29, ctx->r1);
    // 0x80279A70: swr         $at, 0x1B($sp)
    do_swr(rdram, 0X1B, ctx->r29, ctx->r1);
    // 0x80279A74: lwl         $t5, 0x4($t9)
    ctx->r13 = do_lwl(rdram, ctx->r13, ctx->r25, 0X4);
    // 0x80279A78: lwr         $t5, 0x7($t9)
    ctx->r13 = do_lwr(rdram, ctx->r13, ctx->r25, 0X7);
    // 0x80279A7C: addiu       $t7, $t7, 0x13C8
    ctx->r15 = ADD32(ctx->r15, 0X13C8);
    // 0x80279A80: swl         $t5, 0x1C($sp)
    do_swl(rdram, 0X1C, ctx->r29, ctx->r13);
    // 0x80279A84: swr         $t5, 0x1F($sp)
    do_swr(rdram, 0X1F, ctx->r29, ctx->r13);
    // 0x80279A88: lwl         $at, 0x8($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X8);
    // 0x80279A8C: lwr         $at, 0xB($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0XB);
    // 0x80279A90: addu        $t6, $v0, $t7
    ctx->r14 = ADD32(ctx->r2, ctx->r15);
    // 0x80279A94: swl         $at, 0x20($sp)
    do_swl(rdram, 0X20, ctx->r29, ctx->r1);
    // 0x80279A98: swr         $at, 0x23($sp)
    do_swr(rdram, 0X23, ctx->r29, ctx->r1);
    // 0x80279A9C: lwl         $t5, 0xC($t9)
    ctx->r13 = do_lwl(rdram, ctx->r13, ctx->r25, 0XC);
    // 0x80279AA0: lwr         $t5, 0xF($t9)
    ctx->r13 = do_lwr(rdram, ctx->r13, ctx->r25, 0XF);
    // 0x80279AA4: lbu         $a1, 0x6B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X6B);
    // 0x80279AA8: swl         $t5, 0x24($sp)
    do_swl(rdram, 0X24, ctx->r29, ctx->r13);
    // 0x80279AAC: swr         $t5, 0x27($sp)
    do_swr(rdram, 0X27, ctx->r29, ctx->r13);
    // 0x80279AB0: lwl         $at, 0x0($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X0);
    // 0x80279AB4: lwr         $at, 0x3($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0X3);
    // 0x80279AB8: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80279ABC: swl         $at, 0x28($sp)
    do_swl(rdram, 0X28, ctx->r29, ctx->r1);
    // 0x80279AC0: swr         $at, 0x2B($sp)
    do_swr(rdram, 0X2B, ctx->r29, ctx->r1);
    // 0x80279AC4: lwl         $t3, 0x4($t6)
    ctx->r11 = do_lwl(rdram, ctx->r11, ctx->r14, 0X4);
    // 0x80279AC8: lwr         $t3, 0x7($t6)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r14, 0X7);
    // 0x80279ACC: nop

    // 0x80279AD0: swl         $t3, 0x2C($sp)
    do_swl(rdram, 0X2C, ctx->r29, ctx->r11);
    // 0x80279AD4: swr         $t3, 0x2F($sp)
    do_swr(rdram, 0X2F, ctx->r29, ctx->r11);
    // 0x80279AD8: lwl         $at, 0x8($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X8);
    // 0x80279ADC: lwr         $at, 0xB($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0XB);
    // 0x80279AE0: nop

    // 0x80279AE4: swl         $at, 0x30($sp)
    do_swl(rdram, 0X30, ctx->r29, ctx->r1);
    // 0x80279AE8: swr         $at, 0x33($sp)
    do_swr(rdram, 0X33, ctx->r29, ctx->r1);
    // 0x80279AEC: lwl         $t3, 0xC($t6)
    ctx->r11 = do_lwl(rdram, ctx->r11, ctx->r14, 0XC);
    // 0x80279AF0: lwr         $t3, 0xF($t6)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r14, 0XF);
    // 0x80279AF4: nop

    // 0x80279AF8: swl         $t3, 0x34($sp)
    do_swl(rdram, 0X34, ctx->r29, ctx->r11);
    // 0x80279AFC: jal         0x8006D974
    // 0x80279B00: swr         $t3, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r11);
    func_8006D974(rdram, ctx);
        goto after_0;
    // 0x80279B00: swr         $t3, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r11);
    after_0:
    // 0x80279B04: b           L_80279BEC
    // 0x80279B08: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
        goto L_80279BEC;
    // 0x80279B08: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
    // 0x80279B0C: lb          $v0, 0x59($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X59);
    // 0x80279B10: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80279B14: bne         $v0, $at, L_80279B24
    if (ctx->r2 != ctx->r1) {
        // 0x80279B18: lui         $t9, 0x8028
        ctx->r25 = S32(0X8028 << 16);
            goto L_80279B24;
    }
    // 0x80279B18: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80279B1C: b           L_80279B30
    // 0x80279B20: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_80279B30;
    // 0x80279B20: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80279B24:
    // 0x80279B24: sll         $v1, $v0, 24
    ctx->r3 = S32(ctx->r2 << 24);
    // 0x80279B28: sra         $t4, $v1, 24
    ctx->r12 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80279B2C: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
L_80279B30:
    // 0x80279B30: sll         $v0, $t2, 4
    ctx->r2 = S32(ctx->r10 << 4);
    // 0x80279B34: addiu       $t9, $t9, 0x14E0
    ctx->r25 = ADD32(ctx->r25, 0X14E0);
    // 0x80279B38: addu        $t5, $v0, $t9
    ctx->r13 = ADD32(ctx->r2, ctx->r25);
    // 0x80279B3C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80279B40: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80279B44: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x80279B48: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x80279B4C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80279B50: swl         $at, 0x18($sp)
    do_swl(rdram, 0X18, ctx->r29, ctx->r1);
    // 0x80279B54: swr         $at, 0x1B($sp)
    do_swr(rdram, 0X1B, ctx->r29, ctx->r1);
    // 0x80279B58: lwl         $t8, 0x4($t5)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r13, 0X4);
    // 0x80279B5C: lwr         $t8, 0x7($t5)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r13, 0X7);
    // 0x80279B60: addiu       $t6, $t6, 0x1500
    ctx->r14 = ADD32(ctx->r14, 0X1500);
    // 0x80279B64: swl         $t8, 0x1C($sp)
    do_swl(rdram, 0X1C, ctx->r29, ctx->r24);
    // 0x80279B68: swr         $t8, 0x1F($sp)
    do_swr(rdram, 0X1F, ctx->r29, ctx->r24);
    // 0x80279B6C: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x80279B70: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x80279B74: addu        $t3, $v0, $t6
    ctx->r11 = ADD32(ctx->r2, ctx->r14);
    // 0x80279B78: swl         $at, 0x20($sp)
    do_swl(rdram, 0X20, ctx->r29, ctx->r1);
    // 0x80279B7C: swr         $at, 0x23($sp)
    do_swr(rdram, 0X23, ctx->r29, ctx->r1);
    // 0x80279B80: lwl         $t8, 0xC($t5)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r13, 0XC);
    // 0x80279B84: lwr         $t8, 0xF($t5)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r13, 0XF);
    // 0x80279B88: lbu         $a1, 0x6B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X6B);
    // 0x80279B8C: swl         $t8, 0x24($sp)
    do_swl(rdram, 0X24, ctx->r29, ctx->r24);
    // 0x80279B90: swr         $t8, 0x27($sp)
    do_swr(rdram, 0X27, ctx->r29, ctx->r24);
    // 0x80279B94: lwl         $at, 0x0($t3)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r11, 0X0);
    // 0x80279B98: lwr         $at, 0x3($t3)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r11, 0X3);
    // 0x80279B9C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80279BA0: swl         $at, 0x28($sp)
    do_swl(rdram, 0X28, ctx->r29, ctx->r1);
    // 0x80279BA4: swr         $at, 0x2B($sp)
    do_swr(rdram, 0X2B, ctx->r29, ctx->r1);
    // 0x80279BA8: lwl         $t9, 0x4($t3)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r11, 0X4);
    // 0x80279BAC: lwr         $t9, 0x7($t3)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r11, 0X7);
    // 0x80279BB0: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
    // 0x80279BB4: swl         $t9, 0x2C($sp)
    do_swl(rdram, 0X2C, ctx->r29, ctx->r25);
    // 0x80279BB8: swr         $t9, 0x2F($sp)
    do_swr(rdram, 0X2F, ctx->r29, ctx->r25);
    // 0x80279BBC: lwl         $at, 0x8($t3)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r11, 0X8);
    // 0x80279BC0: lwr         $at, 0xB($t3)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r11, 0XB);
    // 0x80279BC4: nop

    // 0x80279BC8: swl         $at, 0x30($sp)
    do_swl(rdram, 0X30, ctx->r29, ctx->r1);
    // 0x80279BCC: swr         $at, 0x33($sp)
    do_swr(rdram, 0X33, ctx->r29, ctx->r1);
    // 0x80279BD0: lwl         $t9, 0xC($t3)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r11, 0XC);
    // 0x80279BD4: lwr         $t9, 0xF($t3)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r11, 0XF);
    // 0x80279BD8: nop

    // 0x80279BDC: swl         $t9, 0x34($sp)
    do_swl(rdram, 0X34, ctx->r29, ctx->r25);
    // 0x80279BE0: jal         0x8006D974
    // 0x80279BE4: swr         $t9, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r25);
    func_8006D974(rdram, ctx);
        goto after_1;
    // 0x80279BE4: swr         $t9, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r25);
    after_1:
    // 0x80279BE8: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
L_80279BEC:
    // 0x80279BEC: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80279BF0: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x80279BF4: nop

    // 0x80279BF8: swl         $at, 0x0($t7)
    do_swl(rdram, 0X0, ctx->r15, ctx->r1);
    // 0x80279BFC: swr         $at, 0x3($t7)
    do_swr(rdram, 0X3, ctx->r15, ctx->r1);
    // 0x80279C00: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80279C04: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80279C08: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x80279C0C: jr          $ra
    // 0x80279C10: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80279C10: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80279BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279BC4: nop

    // 0x80279BC8: swl         $at, 0x30($sp)
    do_swl(rdram, 0X30, ctx->r29, ctx->r1);
    // 0x80279BCC: swr         $at, 0x33($sp)
    do_swr(rdram, 0X33, ctx->r29, ctx->r1);
    // 0x80279BD0: lwl         $t9, 0xC($t3)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r11, 0XC);
    // 0x80279BD4: lwr         $t9, 0xF($t3)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r11, 0XF);
    // 0x80279BD8: nop

    // 0x80279BDC: swl         $t9, 0x34($sp)
    do_swl(rdram, 0X34, ctx->r29, ctx->r25);
    // 0x80279BE0: jal         0x8006D974
    // 0x80279BE4: swr         $t9, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r25);
    func_8006D974(rdram, ctx);
        goto after_0;
    // 0x80279BE4: swr         $t9, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r25);
    after_0:
    // 0x80279BE8: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
    // 0x80279BEC: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80279BF0: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x80279BF4: nop

    // 0x80279BF8: swl         $at, 0x0($t7)
    do_swl(rdram, 0X0, ctx->r15, ctx->r1);
    // 0x80279BFC: swr         $at, 0x3($t7)
    do_swr(rdram, 0X3, ctx->r15, ctx->r1);
    // 0x80279C00: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80279C04: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80279C08: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x80279C0C: jr          $ra
    // 0x80279C10: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80279C10: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80279C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279C14: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80279C18: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80279C1C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80279C20: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80279C24: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80279C28: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80279C2C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80279C30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80279C34: addiu       $a0, $a0, -0x6304
    ctx->r4 = ADD32(ctx->r4, -0X6304);
    // 0x80279C38: jal         0x800293DC
    // 0x80279C3C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80279C3C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80279C40: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80279C44: lui         $a3, 0x803C
    ctx->r7 = S32(0X803C << 16);
    // 0x80279C48: addiu       $a3, $a3, 0x7C40
    ctx->r7 = ADD32(ctx->r7, 0X7C40);
    // 0x80279C4C: addiu       $a1, $zero, 0x2E4
    ctx->r5 = ADD32(0, 0X2E4);
    // 0x80279C50: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80279C54: jal         0x8004CD24
    // 0x80279C58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x80279C58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80279C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80279C60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80279C64: jal         0x8002135C
    // 0x80279C68: addiu       $a2, $zero, 0xF0
    ctx->r6 = ADD32(0, 0XF0);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80279C68: addiu       $a2, $zero, 0xF0
    ctx->r6 = ADD32(0, 0XF0);
    after_2:
    // 0x80279C6C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80279C70: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x80279C74: beq         $s0, $s4, L_80279CDC
    if (ctx->r16 == ctx->r20) {
        // 0x80279C78: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_80279CDC;
    }
    // 0x80279C78: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80279C7C: lui         $s3, 0x8028
    ctx->r19 = S32(0X8028 << 16);
    // 0x80279C80: lui         $s2, 0x803C
    ctx->r18 = S32(0X803C << 16);
    // 0x80279C84: addiu       $s2, $s2, 0x7C58
    ctx->r18 = ADD32(ctx->r18, 0X7C58);
    // 0x80279C88: addiu       $s3, $s3, 0x13E8
    ctx->r19 = ADD32(ctx->r19, 0X13E8);
L_80279C8C:
    // 0x80279C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80279C90: addiu       $a1, $zero, 0x2E4
    ctx->r5 = ADD32(0, 0X2E4);
    // 0x80279C94: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80279C98: jal         0x8004CD24
    // 0x80279C9C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_8004CD24(rdram, ctx);
        goto after_3;
    // 0x80279C9C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_3:
    // 0x80279CA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80279CA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80279CA8: jal         0x8002135C
    // 0x80279CAC: addiu       $a2, $zero, 0xF0
    ctx->r6 = ADD32(0, 0XF0);
    func_8002135C(rdram, ctx);
        goto after_4;
    // 0x80279CAC: addiu       $a2, $zero, 0xF0
    ctx->r6 = ADD32(0, 0XF0);
    after_4:
    // 0x80279CB0: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x80279CB4: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x80279CB8: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x80279CBC: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x80279CC0: jal         0x8004CD44
    // 0x80279CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_5;
    // 0x80279CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80279CC8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80279CCC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80279CD0: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x80279CD4: bne         $s0, $s4, L_80279C8C
    if (ctx->r16 != ctx->r20) {
        // 0x80279CD8: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_80279C8C;
    }
    // 0x80279CD8: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_80279CDC:
    // 0x80279CDC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80279CE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80279CE4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80279CE8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80279CEC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80279CF0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80279CF4: jr          $ra
    // 0x80279CF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80279CF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80279CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279CFC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80279D00: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80279D04: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80279D08: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80279D0C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80279D10: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80279D14: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80279D18: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80279D1C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80279D20: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80279D24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80279D28: lw          $s2, 0x8($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X8);
    // 0x80279D2C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80279D30: lb          $t6, 0x38($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X38);
    // 0x80279D34: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80279D38: beq         $t6, $at, L_80279D50
    if (ctx->r14 == ctx->r1) {
        // 0x80279D3C: nop
    
            goto L_80279D50;
    }
    // 0x80279D3C: nop

    // 0x80279D40: jal         0x8002A468
    // 0x80279D44: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x80279D44: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_0:
    // 0x80279D48: b           L_80279E00
    // 0x80279D4C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80279E00;
    // 0x80279D4C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80279D50:
    // 0x80279D50: lw          $s0, 0x0($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X0);
    // 0x80279D54: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x80279D58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80279D5C: sb          $fp, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r30;
    // 0x80279D60: beq         $s0, $at, L_80279DFC
    if (ctx->r16 == ctx->r1) {
        // 0x80279D64: andi        $s1, $fp, 0xFF
        ctx->r17 = ctx->r30 & 0XFF;
            goto L_80279DFC;
    }
    // 0x80279D64: andi        $s1, $fp, 0xFF
    ctx->r17 = ctx->r30 & 0XFF;
    // 0x80279D68: lui         $s7, 0x803C
    ctx->r23 = S32(0X803C << 16);
    // 0x80279D6C: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80279D70: lui         $s4, 0x803C
    ctx->r20 = S32(0X803C << 16);
    // 0x80279D74: addiu       $s4, $s4, 0x7C58
    ctx->r20 = ADD32(ctx->r20, 0X7C58);
    // 0x80279D78: addiu       $s6, $s6, -0x6AA4
    ctx->r22 = ADD32(ctx->r22, -0X6AA4);
    // 0x80279D7C: addiu       $s7, $s7, 0x7C4C
    ctx->r23 = ADD32(ctx->r23, 0X7C4C);
    // 0x80279D80: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x80279D84: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80279D88:
    // 0x80279D88: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x80279D8C: sra         $t7, $a1, 24
    ctx->r15 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80279D90: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80279D94: jal         0x80279568
    // 0x80279D98: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80279568(rdram, ctx);
        goto after_1;
    // 0x80279D98: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x80279D9C: bne         $s3, $v0, L_80279DAC
    if (ctx->r19 != ctx->r2) {
        // 0x80279DA0: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_80279DAC;
    }
    // 0x80279DA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80279DA4: b           L_80279DB0
    // 0x80279DA8: sw          $s4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r20;
        goto L_80279DB0;
    // 0x80279DA8: sw          $s4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r20;
L_80279DAC:
    // 0x80279DAC: sw          $s7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r23;
L_80279DB0:
    // 0x80279DB0: lb          $t8, 0x3A($s2)
    ctx->r24 = MEM_B(ctx->r18, 0X3A);
    // 0x80279DB4: nop

    // 0x80279DB8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80279DBC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80279DC0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80279DC4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80279DC8: addu        $t0, $s6, $t9
    ctx->r8 = ADD32(ctx->r22, ctx->r25);
    // 0x80279DCC: addu        $t1, $t0, $s1
    ctx->r9 = ADD32(ctx->r8, ctx->r17);
    // 0x80279DD0: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80279DD4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80279DD8: bne         $s5, $t2, L_80279DE8
    if (ctx->r21 != ctx->r10) {
        // 0x80279DDC: nop
    
            goto L_80279DE8;
    }
    // 0x80279DDC: nop

    // 0x80279DE0: b           L_80279DEC
    // 0x80279DE4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_80279DEC;
    // 0x80279DE4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80279DE8:
    // 0x80279DE8: sb          $fp, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r30;
L_80279DEC:
    // 0x80279DEC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80279DF0: andi        $t3, $s1, 0xFF
    ctx->r11 = ctx->r17 & 0XFF;
    // 0x80279DF4: bne         $s0, $at, L_80279D88
    if (ctx->r16 != ctx->r1) {
        // 0x80279DF8: or          $s1, $t3, $zero
        ctx->r17 = ctx->r11 | 0;
            goto L_80279D88;
    }
    // 0x80279DF8: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
L_80279DFC:
    // 0x80279DFC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80279E00:
    // 0x80279E00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80279E04: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80279E08: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80279E0C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80279E10: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80279E14: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80279E18: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80279E1C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80279E20: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80279E24: jr          $ra
    // 0x80279E28: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80279E28: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80279DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279DF8: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80279DFC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80279E00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80279E04: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80279E08: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80279E0C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80279E10: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80279E14: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80279E18: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80279E1C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80279E20: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80279E24: jr          $ra
    // 0x80279E28: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80279E28: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80279E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279E2C: lbu         $t6, 0x38($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X38);
    // 0x80279E30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80279E34: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x80279E38: beq         $at, $zero, L_80279E68
    if (ctx->r1 == 0) {
        // 0x80279E3C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80279E68;
    }
    // 0x80279E3C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80279E40: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80279E44: addu        $at, $at, $t6
    gpr jr_addend_80279E50 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80279E48: lw          $t6, 0x1F3C($at)
    ctx->r14 = ADD32(ctx->r1, 0X1F3C);
    // 0x80279E4C: nop

    // 0x80279E50: jr          $t6
    // 0x80279E54: nop

    switch (jr_addend_80279E50 >> 2) {
        case 0: goto L_80279E58; break;
        case 1: goto L_80279E58; break;
        case 2: goto L_80279E60; break;
        case 3: goto L_80279E58; break;
        case 4: goto L_80279E60; break;
        case 5: goto L_80279E60; break;
        case 6: goto L_80279E58; break;
        case 7: goto L_80279E58; break;
        case 8: goto L_80279E58; break;
        case 9: goto L_80279E58; break;
        default: switch_error(__func__, 0x80279E50, 0x80281F3C);
    }
    // 0x80279E54: nop

L_80279E58:
    // 0x80279E58: jr          $ra
    // 0x80279E5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80279E5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80279E60:
    // 0x80279E60: jr          $ra
    // 0x80279E64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80279E64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80279E68:
    // 0x80279E68: jr          $ra
    // 0x80279E6C: nop

    return;
    // 0x80279E6C: nop

;}
RECOMP_FUNC void func_80279E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279E6C: nop

;}
RECOMP_FUNC void func_80279E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279E70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80279E74: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80279E78: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x80279E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80279E80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80279E84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80279E88: lhu         $v0, 0x0($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X0);
    // 0x80279E8C: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x80279E90: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x80279E94: beq         $t7, $zero, L_80279EBC
    if (ctx->r15 == 0) {
        // 0x80279E98: andi        $t9, $v0, 0x400
        ctx->r25 = ctx->r2 & 0X400;
            goto L_80279EBC;
    }
    // 0x80279E98: andi        $t9, $v0, 0x400
    ctx->r25 = ctx->r2 & 0X400;
    // 0x80279E9C: jal         0x80279F44
    // 0x80279EA0: nop

    func_80279F44(rdram, ctx);
        goto after_0;
    // 0x80279EA0: nop

    after_0:
    // 0x80279EA4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80279EA8: lw          $t8, -0x3250($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3250);
    // 0x80279EAC: nop

    // 0x80279EB0: lhu         $v0, 0x0($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X0);
    // 0x80279EB4: nop

    // 0x80279EB8: andi        $t9, $v0, 0x400
    ctx->r25 = ctx->r2 & 0X400;
L_80279EBC:
    // 0x80279EBC: beq         $t9, $zero, L_80279EEC
    if (ctx->r25 == 0) {
        // 0x80279EC0: andi        $t1, $v0, 0x100
        ctx->r9 = ctx->r2 & 0X100;
            goto L_80279EEC;
    }
    // 0x80279EC0: andi        $t1, $v0, 0x100
    ctx->r9 = ctx->r2 & 0X100;
    // 0x80279EC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80279EC8: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x80279ECC: jal         0x80279F9C
    // 0x80279ED0: nop

    func_80279F9C(rdram, ctx);
        goto after_1;
    // 0x80279ED0: nop

    after_1:
    // 0x80279ED4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80279ED8: lw          $t0, -0x3250($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3250);
    // 0x80279EDC: nop

    // 0x80279EE0: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x80279EE4: nop

    // 0x80279EE8: andi        $t1, $v0, 0x100
    ctx->r9 = ctx->r2 & 0X100;
L_80279EEC:
    // 0x80279EEC: beq         $t1, $zero, L_80279F1C
    if (ctx->r9 == 0) {
        // 0x80279EF0: andi        $t3, $v0, 0x200
        ctx->r11 = ctx->r2 & 0X200;
            goto L_80279F1C;
    }
    // 0x80279EF0: andi        $t3, $v0, 0x200
    ctx->r11 = ctx->r2 & 0X200;
    // 0x80279EF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80279EF8: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x80279EFC: jal         0x80279FF4
    // 0x80279F00: nop

    func_80279FF4(rdram, ctx);
        goto after_2;
    // 0x80279F00: nop

    after_2:
    // 0x80279F04: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80279F08: lw          $t2, -0x3250($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3250);
    // 0x80279F0C: nop

    // 0x80279F10: lhu         $v0, 0x0($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X0);
    // 0x80279F14: nop

    // 0x80279F18: andi        $t3, $v0, 0x200
    ctx->r11 = ctx->r2 & 0X200;
L_80279F1C:
    // 0x80279F1C: beq         $t3, $zero, L_80279F38
    if (ctx->r11 == 0) {
        // 0x80279F20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80279F38;
    }
    // 0x80279F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80279F24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80279F28: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x80279F2C: jal         0x8027A04C
    // 0x80279F30: nop

    func_8027A04C(rdram, ctx);
        goto after_3;
    // 0x80279F30: nop

    after_3:
    // 0x80279F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80279F38:
    // 0x80279F38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80279F3C: jr          $ra
    // 0x80279F40: nop

    return;
    // 0x80279F40: nop

;}
RECOMP_FUNC void func_80279F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279F3C: jr          $ra
    // 0x80279F40: nop

    return;
    // 0x80279F40: nop

;}
RECOMP_FUNC void func_80279F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279F44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80279F48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80279F4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80279F50: lb          $v0, 0x2E($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2E);
    // 0x80279F54: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x80279F58: beq         $v0, $zero, L_80279F74
    if (ctx->r2 == 0) {
        // 0x80279F5C: sra         $a1, $t6, 24
        ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
            goto L_80279F74;
    }
    // 0x80279F5C: sra         $a1, $t6, 24
    ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80279F60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80279F64: beq         $v0, $at, L_80279F84
    if (ctx->r2 == ctx->r1) {
        // 0x80279F68: nop
    
            goto L_80279F84;
    }
    // 0x80279F68: nop

    // 0x80279F6C: b           L_80279F90
    // 0x80279F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80279F90;
    // 0x80279F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80279F74:
    // 0x80279F74: jal         0x8027A0A4
    // 0x80279F78: nop

    func_8027A0A4(rdram, ctx);
        goto after_0;
    // 0x80279F78: nop

    after_0:
    // 0x80279F7C: b           L_80279F90
    // 0x80279F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80279F90;
    // 0x80279F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80279F84:
    // 0x80279F84: jal         0x8027A0FC
    // 0x80279F88: nop

    func_8027A0FC(rdram, ctx);
        goto after_1;
    // 0x80279F88: nop

    after_1:
    // 0x80279F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80279F90:
    // 0x80279F90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80279F94: jr          $ra
    // 0x80279F98: nop

    return;
    // 0x80279F98: nop

;}
RECOMP_FUNC void func_80279F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279F9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80279FA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80279FA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80279FA8: lb          $v0, 0x2E($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2E);
    // 0x80279FAC: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x80279FB0: beq         $v0, $zero, L_80279FCC
    if (ctx->r2 == 0) {
        // 0x80279FB4: sra         $a1, $t6, 24
        ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
            goto L_80279FCC;
    }
    // 0x80279FB4: sra         $a1, $t6, 24
    ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80279FB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80279FBC: beq         $v0, $at, L_80279FDC
    if (ctx->r2 == ctx->r1) {
        // 0x80279FC0: nop
    
            goto L_80279FDC;
    }
    // 0x80279FC0: nop

    // 0x80279FC4: b           L_80279FE8
    // 0x80279FC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80279FE8;
    // 0x80279FC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80279FCC:
    // 0x80279FCC: jal         0x8027A0FC
    // 0x80279FD0: nop

    func_8027A0FC(rdram, ctx);
        goto after_0;
    // 0x80279FD0: nop

    after_0:
    // 0x80279FD4: b           L_80279FE8
    // 0x80279FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80279FE8;
    // 0x80279FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80279FDC:
    // 0x80279FDC: jal         0x8027A0A4
    // 0x80279FE0: nop

    func_8027A0A4(rdram, ctx);
        goto after_1;
    // 0x80279FE0: nop

    after_1:
    // 0x80279FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80279FE8:
    // 0x80279FE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80279FEC: jr          $ra
    // 0x80279FF0: nop

    return;
    // 0x80279FF0: nop

;}
RECOMP_FUNC void func_80279FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279FF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80279FF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80279FFC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027A000: lb          $v0, 0x2E($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2E);
    // 0x8027A004: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x8027A008: beq         $v0, $zero, L_8027A024
    if (ctx->r2 == 0) {
        // 0x8027A00C: sra         $a1, $t6, 24
        ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
            goto L_8027A024;
    }
    // 0x8027A00C: sra         $a1, $t6, 24
    ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8027A010: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027A014: beq         $v0, $at, L_8027A034
    if (ctx->r2 == ctx->r1) {
        // 0x8027A018: nop
    
            goto L_8027A034;
    }
    // 0x8027A018: nop

    // 0x8027A01C: b           L_8027A040
    // 0x8027A020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027A040;
    // 0x8027A020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027A024:
    // 0x8027A024: jal         0x8027A154
    // 0x8027A028: nop

    func_8027A154(rdram, ctx);
        goto after_0;
    // 0x8027A028: nop

    after_0:
    // 0x8027A02C: b           L_8027A040
    // 0x8027A030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027A040;
    // 0x8027A030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027A034:
    // 0x8027A034: jal         0x8027A1AC
    // 0x8027A038: nop

    func_8027A1AC(rdram, ctx);
        goto after_1;
    // 0x8027A038: nop

    after_1:
    // 0x8027A03C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027A040:
    // 0x8027A040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027A044: jr          $ra
    // 0x8027A048: nop

    return;
    // 0x8027A048: nop

;}
RECOMP_FUNC void func_8027A02C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A02C: b           L_8027A040
    // 0x8027A030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027A040;
    // 0x8027A030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027A034: jal         0x8027A1AC
    // 0x8027A038: nop

    func_8027A1AC(rdram, ctx);
        goto after_0;
    // 0x8027A038: nop

    after_0:
    // 0x8027A03C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027A040:
    // 0x8027A040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027A044: jr          $ra
    // 0x8027A048: nop

    return;
    // 0x8027A048: nop

;}
RECOMP_FUNC void func_8027A04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A04C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027A050: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027A054: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027A058: lb          $v0, 0x2E($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2E);
    // 0x8027A05C: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x8027A060: beq         $v0, $zero, L_8027A07C
    if (ctx->r2 == 0) {
        // 0x8027A064: sra         $a1, $t6, 24
        ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
            goto L_8027A07C;
    }
    // 0x8027A064: sra         $a1, $t6, 24
    ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8027A068: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027A06C: beq         $v0, $at, L_8027A08C
    if (ctx->r2 == ctx->r1) {
        // 0x8027A070: nop
    
            goto L_8027A08C;
    }
    // 0x8027A070: nop

    // 0x8027A074: b           L_8027A098
    // 0x8027A078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027A098;
    // 0x8027A078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027A07C:
    // 0x8027A07C: jal         0x8027A1AC
    // 0x8027A080: nop

    func_8027A1AC(rdram, ctx);
        goto after_0;
    // 0x8027A080: nop

    after_0:
    // 0x8027A084: b           L_8027A098
    // 0x8027A088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027A098;
    // 0x8027A088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027A08C:
    // 0x8027A08C: jal         0x8027A154
    // 0x8027A090: nop

    func_8027A154(rdram, ctx);
        goto after_1;
    // 0x8027A090: nop

    after_1:
    // 0x8027A094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027A098:
    // 0x8027A098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027A09C: jr          $ra
    // 0x8027A0A0: nop

    return;
    // 0x8027A0A0: nop

;}
RECOMP_FUNC void func_8027A0A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A0A4: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x8027A0A8: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8027A0AC: lui         $t8, 0x8029
    ctx->r24 = S32(0X8029 << 16);
    // 0x8027A0B0: addiu       $t8, $t8, -0x7A20
    ctx->r24 = ADD32(ctx->r24, -0X7A20);
    // 0x8027A0B4: sll         $v0, $t7, 1
    ctx->r2 = S32(ctx->r15 << 1);
    // 0x8027A0B8: addu        $v1, $v0, $t8
    ctx->r3 = ADD32(ctx->r2, ctx->r24);
    // 0x8027A0BC: lh          $t9, 0x0($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X0);
    // 0x8027A0C0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8027A0C4: addiu       $t0, $t9, 0x12
    ctx->r8 = ADD32(ctx->r25, 0X12);
    // 0x8027A0C8: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
    // 0x8027A0CC: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x8027A0D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8027A0D4: slti        $at, $a0, 0x12C
    ctx->r1 = SIGNED(ctx->r4) < 0X12C ? 1 : 0;
    // 0x8027A0D8: bne         $at, $zero, L_8027A0EC
    if (ctx->r1 != 0) {
        // 0x8027A0DC: addiu       $t1, $zero, 0x12C
        ctx->r9 = ADD32(0, 0X12C);
            goto L_8027A0EC;
    }
    // 0x8027A0DC: addiu       $t1, $zero, 0x12C
    ctx->r9 = ADD32(0, 0X12C);
    // 0x8027A0E0: sh          $t1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r9;
    // 0x8027A0E4: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x8027A0E8: nop

L_8027A0EC:
    // 0x8027A0EC: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8027A0F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8027A0F4: jr          $ra
    // 0x8027A0F8: sh          $a0, -0x79F0($at)
    MEM_H(-0X79F0, ctx->r1) = ctx->r4;
    return;
    // 0x8027A0F8: sh          $a0, -0x79F0($at)
    MEM_H(-0X79F0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8027A0FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A0FC: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x8027A100: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8027A104: lui         $t8, 0x8029
    ctx->r24 = S32(0X8029 << 16);
    // 0x8027A108: addiu       $t8, $t8, -0x7A20
    ctx->r24 = ADD32(ctx->r24, -0X7A20);
    // 0x8027A10C: sll         $v0, $t7, 1
    ctx->r2 = S32(ctx->r15 << 1);
    // 0x8027A110: addu        $v1, $v0, $t8
    ctx->r3 = ADD32(ctx->r2, ctx->r24);
    // 0x8027A114: lh          $t9, 0x0($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X0);
    // 0x8027A118: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8027A11C: addiu       $t0, $t9, -0x12
    ctx->r8 = ADD32(ctx->r25, -0X12);
    // 0x8027A120: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
    // 0x8027A124: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x8027A128: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8027A12C: slti        $at, $a0, -0x12B
    ctx->r1 = SIGNED(ctx->r4) < -0X12B ? 1 : 0;
    // 0x8027A130: beq         $at, $zero, L_8027A144
    if (ctx->r1 == 0) {
        // 0x8027A134: addiu       $t1, $zero, -0x12C
        ctx->r9 = ADD32(0, -0X12C);
            goto L_8027A144;
    }
    // 0x8027A134: addiu       $t1, $zero, -0x12C
    ctx->r9 = ADD32(0, -0X12C);
    // 0x8027A138: sh          $t1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r9;
    // 0x8027A13C: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x8027A140: nop

L_8027A144:
    // 0x8027A144: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8027A148: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8027A14C: jr          $ra
    // 0x8027A150: sh          $a0, -0x79F0($at)
    MEM_H(-0X79F0, ctx->r1) = ctx->r4;
    return;
    // 0x8027A150: sh          $a0, -0x79F0($at)
    MEM_H(-0X79F0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8027A154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A154: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x8027A158: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8027A15C: lui         $t8, 0x8029
    ctx->r24 = S32(0X8029 << 16);
    // 0x8027A160: addiu       $t8, $t8, -0x7A38
    ctx->r24 = ADD32(ctx->r24, -0X7A38);
    // 0x8027A164: sll         $v0, $t7, 1
    ctx->r2 = S32(ctx->r15 << 1);
    // 0x8027A168: addu        $v1, $v0, $t8
    ctx->r3 = ADD32(ctx->r2, ctx->r24);
    // 0x8027A16C: lh          $t9, 0x0($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X0);
    // 0x8027A170: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8027A174: addiu       $t0, $t9, 0x9
    ctx->r8 = ADD32(ctx->r25, 0X9);
    // 0x8027A178: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
    // 0x8027A17C: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x8027A180: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8027A184: slti        $at, $a0, 0x3C
    ctx->r1 = SIGNED(ctx->r4) < 0X3C ? 1 : 0;
    // 0x8027A188: bne         $at, $zero, L_8027A19C
    if (ctx->r1 != 0) {
        // 0x8027A18C: addiu       $t1, $zero, 0x3C
        ctx->r9 = ADD32(0, 0X3C);
            goto L_8027A19C;
    }
    // 0x8027A18C: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x8027A190: sh          $t1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r9;
    // 0x8027A194: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x8027A198: nop

L_8027A19C:
    // 0x8027A19C: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8027A1A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8027A1A4: jr          $ra
    // 0x8027A1A8: sh          $a0, -0x7A08($at)
    MEM_H(-0X7A08, ctx->r1) = ctx->r4;
    return;
    // 0x8027A1A8: sh          $a0, -0x7A08($at)
    MEM_H(-0X7A08, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8027A184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A184: slti        $at, $a0, 0x3C
    ctx->r1 = SIGNED(ctx->r4) < 0X3C ? 1 : 0;
    // 0x8027A188: bne         $at, $zero, L_8027A19C
    if (ctx->r1 != 0) {
        // 0x8027A18C: addiu       $t1, $zero, 0x3C
        ctx->r9 = ADD32(0, 0X3C);
            goto L_8027A19C;
    }
    // 0x8027A18C: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x8027A190: sh          $t1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r9;
    // 0x8027A194: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x8027A198: nop

L_8027A19C:
    // 0x8027A19C: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8027A1A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8027A1A4: jr          $ra
    // 0x8027A1A8: sh          $a0, -0x7A08($at)
    MEM_H(-0X7A08, ctx->r1) = ctx->r4;
    return;
    // 0x8027A1A8: sh          $a0, -0x7A08($at)
    MEM_H(-0X7A08, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8027A1AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A1AC: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x8027A1B0: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8027A1B4: lui         $t8, 0x8029
    ctx->r24 = S32(0X8029 << 16);
    // 0x8027A1B8: addiu       $t8, $t8, -0x7A38
    ctx->r24 = ADD32(ctx->r24, -0X7A38);
    // 0x8027A1BC: sll         $v0, $t7, 1
    ctx->r2 = S32(ctx->r15 << 1);
    // 0x8027A1C0: addu        $v1, $v0, $t8
    ctx->r3 = ADD32(ctx->r2, ctx->r24);
    // 0x8027A1C4: lh          $t9, 0x0($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X0);
    // 0x8027A1C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8027A1CC: addiu       $t0, $t9, -0x9
    ctx->r8 = ADD32(ctx->r25, -0X9);
    // 0x8027A1D0: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
    // 0x8027A1D4: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x8027A1D8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8027A1DC: slti        $at, $a0, -0x3B
    ctx->r1 = SIGNED(ctx->r4) < -0X3B ? 1 : 0;
    // 0x8027A1E0: beq         $at, $zero, L_8027A1F4
    if (ctx->r1 == 0) {
        // 0x8027A1E4: addiu       $t1, $zero, -0x3C
        ctx->r9 = ADD32(0, -0X3C);
            goto L_8027A1F4;
    }
    // 0x8027A1E4: addiu       $t1, $zero, -0x3C
    ctx->r9 = ADD32(0, -0X3C);
    // 0x8027A1E8: sh          $t1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r9;
    // 0x8027A1EC: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x8027A1F0: nop

L_8027A1F4:
    // 0x8027A1F4: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8027A1F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8027A1FC: jr          $ra
    // 0x8027A200: sh          $a0, -0x7A08($at)
    MEM_H(-0X7A08, ctx->r1) = ctx->r4;
    return;
    // 0x8027A200: sh          $a0, -0x7A08($at)
    MEM_H(-0X7A08, ctx->r1) = ctx->r4;
;}
