#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_803F95A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F95A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F95AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F95B0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F95B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F95B8: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F95BC: addiu       $a1, $a1, -0x46CC
    ctx->r5 = ADD32(ctx->r5, -0X46CC);
    // 0x803F95C0: jal         0x8004A298
    // 0x803F95C4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8004A298(rdram, ctx);
        goto after_0;
    // 0x803F95C4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_0:
    // 0x803F95C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F95CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F95D0: jr          $ra
    // 0x803F95D4: nop

    return;
    // 0x803F95D4: nop

    // 0x803F95D8: nop

    // 0x803F95DC: nop

;}
RECOMP_FUNC void func_803F95E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F95E0: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803F95E4: lh          $t6, -0x6A6($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6A6);
    // 0x803F95E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F95EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F95F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F95F4: bne         $t6, $zero, L_803F960C
    if (ctx->r14 != 0) {
        // 0x803F95F8: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_803F960C;
    }
    // 0x803F95F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F95FC: jal         0x80029548
    // 0x803F9600: nop

    func_80029548(rdram, ctx);
        goto after_0;
    // 0x803F9600: nop

    after_0:
    // 0x803F9604: b           L_803F966C
    // 0x803F9608: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F966C;
    // 0x803F9608: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F960C:
    // 0x803F960C: jal         0x803FA204
    // 0x803F9610: nop

    func_803FA204(rdram, ctx);
        goto after_1;
    // 0x803F9610: nop

    after_1:
    // 0x803F9614: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x803F9618: lh          $t7, -0x6B6($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6B6);
    // 0x803F961C: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F9620: div         $zero, $t7, $v0
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r2)));
    // 0x803F9624: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F9628: bne         $v0, $zero, L_803F9634
    if (ctx->r2 != 0) {
        // 0x803F962C: nop
    
            goto L_803F9634;
    }
    // 0x803F962C: nop

    // 0x803F9630: break       7
    do_break(2151650864);
L_803F9634:
    // 0x803F9634: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803F9638: bne         $v0, $at, L_803F964C
    if (ctx->r2 != ctx->r1) {
        // 0x803F963C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_803F964C;
    }
    // 0x803F963C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F9640: bne         $t7, $at, L_803F964C
    if (ctx->r15 != ctx->r1) {
        // 0x803F9644: nop
    
            goto L_803F964C;
    }
    // 0x803F9644: nop

    // 0x803F9648: break       6
    do_break(2151650888);
L_803F964C:
    // 0x803F964C: mflo        $t8
    ctx->r24 = lo;
    // 0x803F9650: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x803F9654: lb          $a1, -0x3CD4($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X3CD4);
    // 0x803F9658: nop

    // 0x803F965C: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x803F9660: jal         0x8002BB50
    // 0x803F9664: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x803F9664: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_2:
    // 0x803F9668: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F966C:
    // 0x803F966C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F9670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F9674: jr          $ra
    // 0x803F9678: nop

    return;
    // 0x803F9678: nop

;}
RECOMP_FUNC void func_803F967C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F967C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803F9680: lh          $t6, -0x6A6($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6A6);
    // 0x803F9684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F9688: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F968C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F9690: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F9694: beq         $t6, $at, L_803F96AC
    if (ctx->r14 == ctx->r1) {
        // 0x803F9698: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_803F96AC;
    }
    // 0x803F9698: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F969C: jal         0x80029548
    // 0x803F96A0: nop

    func_80029548(rdram, ctx);
        goto after_0;
    // 0x803F96A0: nop

    after_0:
    // 0x803F96A4: b           L_803F970C
    // 0x803F96A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F970C;
    // 0x803F96A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F96AC:
    // 0x803F96AC: jal         0x803FA204
    // 0x803F96B0: nop

    func_803FA204(rdram, ctx);
        goto after_1;
    // 0x803F96B0: nop

    after_1:
    // 0x803F96B4: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x803F96B8: lh          $t7, -0x6B6($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6B6);
    // 0x803F96BC: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F96C0: div         $zero, $t7, $v0
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r2)));
    // 0x803F96C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F96C8: bne         $v0, $zero, L_803F96D4
    if (ctx->r2 != 0) {
        // 0x803F96CC: nop
    
            goto L_803F96D4;
    }
    // 0x803F96CC: nop

    // 0x803F96D0: break       7
    do_break(2151651024);
L_803F96D4:
    // 0x803F96D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803F96D8: bne         $v0, $at, L_803F96EC
    if (ctx->r2 != ctx->r1) {
        // 0x803F96DC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_803F96EC;
    }
    // 0x803F96DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F96E0: bne         $t7, $at, L_803F96EC
    if (ctx->r15 != ctx->r1) {
        // 0x803F96E4: nop
    
            goto L_803F96EC;
    }
    // 0x803F96E4: nop

    // 0x803F96E8: break       6
    do_break(2151651048);
L_803F96EC:
    // 0x803F96EC: mflo        $t8
    ctx->r24 = lo;
    // 0x803F96F0: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x803F96F4: lb          $a1, -0x3CCC($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X3CCC);
    // 0x803F96F8: nop

    // 0x803F96FC: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x803F9700: jal         0x8002BB50
    // 0x803F9704: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x803F9704: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_2:
    // 0x803F9708: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F970C:
    // 0x803F970C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F9710: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F9714: jr          $ra
    // 0x803F9718: nop

    return;
    // 0x803F9718: nop

;}
RECOMP_FUNC void func_803F971C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F971C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803F9720: lbu         $t6, -0x329F($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X329F);
    // 0x803F9724: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F9728: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F972C: beq         $t6, $zero, L_803F9744
    if (ctx->r14 == 0) {
        // 0x803F9730: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_803F9744;
    }
    // 0x803F9730: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F9734: jal         0x8002BB50
    // 0x803F9738: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x803F9738: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x803F973C: b           L_803F9750
    // 0x803F9740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F9750;
    // 0x803F9740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F9744:
    // 0x803F9744: jal         0x8002BB50
    // 0x803F9748: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8002BB50(rdram, ctx);
        goto after_1;
    // 0x803F9748: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x803F974C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F9750:
    // 0x803F9750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F9754: jr          $ra
    // 0x803F9758: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803F9758: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803F975C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F975C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803F9760: lhu         $t6, 0x1E($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1E);
    // 0x803F9764: lui         $t8, 0x8040
    ctx->r24 = S32(0X8040 << 16);
    // 0x803F9768: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x803F976C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803F9770: lh          $t8, -0x3D48($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X3D48);
    // 0x803F9774: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F9778: sh          $t8, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r24;
    // 0x803F977C: lh          $t9, 0x22($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X22);
    // 0x803F9780: nop

    // 0x803F9784: addiu       $t0, $t9, 0xC0
    ctx->r8 = ADD32(ctx->r25, 0XC0);
    // 0x803F9788: jr          $ra
    // 0x803F978C: sh          $t0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r8;
    return;
    // 0x803F978C: sh          $t0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r8;
;}
RECOMP_FUNC void func_803F9790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F9790: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803F9794: lhu         $t7, 0x1E($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X1E);
    // 0x803F9798: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F979C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x803F97A0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803F97A4: lh          $t9, -0x3D48($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X3D48);
    // 0x803F97A8: lh          $t6, 0x22($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X22);
    // 0x803F97AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F97B0: subu        $t0, $t6, $t9
    ctx->r8 = SUB32(ctx->r14, ctx->r25);
    // 0x803F97B4: jr          $ra
    // 0x803F97B8: sh          $t0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r8;
    return;
    // 0x803F97B8: sh          $t0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r8;
;}
RECOMP_FUNC void func_803F97BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F97BC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803F97C0: lh          $v0, -0x6B4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X6B4);
    // 0x803F97C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F97C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F97CC: bgtz        $v0, L_803F97E4
    if (SIGNED(ctx->r2) > 0) {
        // 0x803F97D0: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_803F97E4;
    }
    // 0x803F97D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F97D4: jal         0x8002BB50
    // 0x803F97D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x803F97D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x803F97DC: b           L_803F980C
    // 0x803F97E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F980C;
    // 0x803F97E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F97E4:
    // 0x803F97E4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x803F97E8: bne         $at, $zero, L_803F9800
    if (ctx->r1 != 0) {
        // 0x803F97EC: nop
    
            goto L_803F9800;
    }
    // 0x803F97EC: nop

    // 0x803F97F0: jal         0x8002BB50
    // 0x803F97F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002BB50(rdram, ctx);
        goto after_1;
    // 0x803F97F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x803F97F8: b           L_803F980C
    // 0x803F97FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F980C;
    // 0x803F97FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F9800:
    // 0x803F9800: jal         0x8002BB50
    // 0x803F9804: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x803F9804: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x803F9808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F980C:
    // 0x803F980C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F9810: jr          $ra
    // 0x803F9814: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803F9814: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803F9818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F9818: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x803F981C: addiu       $t0, $t0, -0x750
    ctx->r8 = ADD32(ctx->r8, -0X750);
    // 0x803F9820: lh          $t6, 0x9A($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X9A);
    // 0x803F9824: lhu         $a2, 0x1E($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X1E);
    // 0x803F9828: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803F982C: lb          $t9, -0x32A1($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X32A1);
    // 0x803F9830: addu        $v1, $t6, $a2
    ctx->r3 = ADD32(ctx->r14, ctx->r6);
    // 0x803F9834: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x803F9838: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x803F983C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803F9840: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x803F9844: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x803F9848: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x803F984C: lb          $t2, -0x3138($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X3138);
    // 0x803F9850: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803F9854: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x803F9858: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x803F985C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803F9860: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x803F9864: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803F9868: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803F986C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803F9870: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x803F9874: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803F9878: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803F987C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803F9880: lh          $t5, 0xAA($t0)
    ctx->r13 = MEM_H(ctx->r8, 0XAA);
    // 0x803F9884: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x803F9888: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803F988C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803F9890: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x803F9894: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x803F9898: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x803F989C: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x803F98A0: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x803F98A4: addu        $a3, $a3, $t4
    ctx->r7 = ADD32(ctx->r7, ctx->r12);
    // 0x803F98A8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x803F98AC: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F98B0: lb          $a3, -0x2AD4($a3)
    ctx->r7 = MEM_B(ctx->r7, -0X2AD4);
    // 0x803F98B4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803F98B8: lw          $t9, -0x40D0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X40D0);
    // 0x803F98BC: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x803F98C0: sll         $t2, $a3, 1
    ctx->r10 = S32(ctx->r7 << 1);
    // 0x803F98C4: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x803F98C8: sw          $t9, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r25;
    // 0x803F98CC: lhu         $t1, -0x6B68($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X6B68);
    // 0x803F98D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F98D4: jr          $ra
    // 0x803F98D8: sh          $t1, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r9;
    return;
    // 0x803F98D8: sh          $t1, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_803F98DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F98DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F98E0: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x803F98E4: addiu       $a2, $a2, -0x750
    ctx->r6 = ADD32(ctx->r6, -0X750);
    // 0x803F98E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F98EC: lhu         $v0, 0x1E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1E);
    // 0x803F98F0: lh          $t6, 0x9A($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X9A);
    // 0x803F98F4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803F98F8: lb          $t9, -0x32A1($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X32A1);
    // 0x803F98FC: addu        $v1, $t6, $v0
    ctx->r3 = ADD32(ctx->r14, ctx->r2);
    // 0x803F9900: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x803F9904: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x803F9908: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x803F990C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803F9910: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803F9914: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x803F9918: lb          $t1, -0x3138($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X3138);
    // 0x803F991C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803F9920: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803F9924: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x803F9928: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803F992C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x803F9930: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803F9934: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803F9938: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803F993C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803F9940: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803F9944: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803F9948: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803F994C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x803F9950: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x803F9954: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803F9958: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x803F995C: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x803F9960: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x803F9964: addu        $a3, $a3, $t3
    ctx->r7 = ADD32(ctx->r7, ctx->r11);
    // 0x803F9968: lb          $a3, -0x2AD4($a3)
    ctx->r7 = MEM_B(ctx->r7, -0X2AD4);
    // 0x803F996C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x803F9970: bne         $at, $zero, L_803F99A4
    if (ctx->r1 != 0) {
        // 0x803F9974: nop
    
            goto L_803F99A4;
    }
    // 0x803F9974: nop

    // 0x803F9978: lh          $t4, 0xAA($a2)
    ctx->r12 = MEM_H(ctx->r6, 0XAA);
    // 0x803F997C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F9980: bne         $t4, $at, L_803F99A4
    if (ctx->r12 != ctx->r1) {
        // 0x803F9984: nop
    
            goto L_803F99A4;
    }
    // 0x803F9984: nop

    // 0x803F9988: lh          $t5, 0x1C($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X1C);
    // 0x803F998C: nop

    // 0x803F9990: addiu       $t6, $t5, 0x22
    ctx->r14 = ADD32(ctx->r13, 0X22);
    // 0x803F9994: sh          $t6, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r14;
    // 0x803F9998: lhu         $v0, 0x1E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1E);
    // 0x803F999C: b           L_803F99F4
    // 0x803F99A0: sll         $a1, $a3, 16
    ctx->r5 = S32(ctx->r7 << 16);
        goto L_803F99F4;
    // 0x803F99A0: sll         $a1, $a3, 16
    ctx->r5 = S32(ctx->r7 << 16);
L_803F99A4:
    // 0x803F99A4: lh          $t7, 0xAA($a2)
    ctx->r15 = MEM_H(ctx->r6, 0XAA);
    // 0x803F99A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F99AC: bne         $t7, $at, L_803F99F0
    if (ctx->r15 != ctx->r1) {
        // 0x803F99B0: slti        $at, $v0, 0x4
        ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
            goto L_803F99F0;
    }
    // 0x803F99B0: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x803F99B4: beq         $at, $zero, L_803F99D8
    if (ctx->r1 == 0) {
        // 0x803F99B8: nop
    
            goto L_803F99D8;
    }
    // 0x803F99B8: nop

    // 0x803F99BC: lh          $t8, 0x1C($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X1C);
    // 0x803F99C0: nop

    // 0x803F99C4: addiu       $t9, $t8, -0x8
    ctx->r25 = ADD32(ctx->r24, -0X8);
    // 0x803F99C8: sh          $t9, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r25;
    // 0x803F99CC: lhu         $v0, 0x1E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1E);
    // 0x803F99D0: b           L_803F99F4
    // 0x803F99D4: sll         $a1, $a3, 16
    ctx->r5 = S32(ctx->r7 << 16);
        goto L_803F99F4;
    // 0x803F99D4: sll         $a1, $a3, 16
    ctx->r5 = S32(ctx->r7 << 16);
L_803F99D8:
    // 0x803F99D8: lh          $t1, 0x1C($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X1C);
    // 0x803F99DC: nop

    // 0x803F99E0: addiu       $t0, $t1, 0x8
    ctx->r8 = ADD32(ctx->r9, 0X8);
    // 0x803F99E4: sh          $t0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r8;
    // 0x803F99E8: lhu         $v0, 0x1E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1E);
    // 0x803F99EC: nop

L_803F99F0:
    // 0x803F99F0: sll         $a1, $a3, 16
    ctx->r5 = S32(ctx->r7 << 16);
L_803F99F4:
    // 0x803F99F4: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x803F99F8: sra         $t3, $a2, 16
    ctx->r11 = S32(SIGNED(ctx->r6) >> 16);
    // 0x803F99FC: sra         $t2, $a1, 16
    ctx->r10 = S32(SIGNED(ctx->r5) >> 16);
    // 0x803F9A00: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x803F9A04: jal         0x80039E94
    // 0x803F9A08: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    func_80039E94(rdram, ctx);
        goto after_0;
    // 0x803F9A08: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_0:
    // 0x803F9A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F9A10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F9A14: jr          $ra
    // 0x803F9A18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803F9A18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803F9A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F9A1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F9A20: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x803F9A24: addiu       $a3, $a3, -0x750
    ctx->r7 = ADD32(ctx->r7, -0X750);
    // 0x803F9A28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F9A2C: lhu         $v0, 0x1E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1E);
    // 0x803F9A30: lh          $t9, 0xAA($a3)
    ctx->r25 = MEM_H(ctx->r7, 0XAA);
    // 0x803F9A34: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x803F9A38: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x803F9A3C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x803F9A40: lui         $t3, 0x8040
    ctx->r11 = S32(0X8040 << 16);
    // 0x803F9A44: lh          $t6, 0x9A($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X9A);
    // 0x803F9A48: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803F9A4C: lw          $t3, -0x4070($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4070);
    // 0x803F9A50: addu        $v1, $t6, $v0
    ctx->r3 = ADD32(ctx->r14, ctx->r2);
    // 0x803F9A54: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803F9A58: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x803F9A5C: sw          $t3, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r11;
    // 0x803F9A60: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x803F9A64: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803F9A68: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x803F9A6C: lb          $a0, -0x3138($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3138);
    // 0x803F9A70: jal         0x8003CB98
    // 0x803F9A74: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8003CB98(rdram, ctx);
        goto after_0;
    // 0x803F9A74: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803F9A78: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803F9A7C: bgez        $v0, L_803F9A8C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x803F9A80: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_803F9A8C;
    }
    // 0x803F9A80: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803F9A84: b           L_803F9A90
    // 0x803F9A88: sb          $t4, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r12;
        goto L_803F9A90;
    // 0x803F9A88: sb          $t4, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r12;
L_803F9A8C:
    // 0x803F9A8C: sb          $zero, 0x4($a2)
    MEM_B(0X4, ctx->r6) = 0;
L_803F9A90:
    // 0x803F9A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F9A94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F9A98: jr          $ra
    // 0x803F9A9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803F9A9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803F9AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F9AA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F9AA4: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x803F9AA8: lb          $t5, -0x32A1($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X32A1);
    // 0x803F9AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F9AB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F9AB4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F9AB8: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803F9ABC: lh          $t6, -0x6B6($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6B6);
    // 0x803F9AC0: lhu         $t8, 0x1E($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X1E);
    // 0x803F9AC4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803F9AC8: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x803F9ACC: addu        $t1, $t6, $t8
    ctx->r9 = ADD32(ctx->r14, ctx->r24);
    // 0x803F9AD0: sll         $t9, $t1, 16
    ctx->r25 = S32(ctx->r9 << 16);
    // 0x803F9AD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F9AD8: sra         $t4, $t9, 16
    ctx->r12 = S32(SIGNED(ctx->r25) >> 16);
    // 0x803F9ADC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803F9AE0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803F9AE4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803F9AE8: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x803F9AEC: lb          $t8, -0x3138($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X3138);
    // 0x803F9AF0: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x803F9AF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F9AF8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803F9AFC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803F9B00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F9B04: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803F9B08: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803F9B0C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x803F9B10: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x803F9B14: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803F9B18: addiu       $t6, $t6, -0x2F80
    ctx->r14 = ADD32(ctx->r14, -0X2F80);
    // 0x803F9B1C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803F9B20: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803F9B24: addu        $v0, $t7, $t6
    ctx->r2 = ADD32(ctx->r15, ctx->r14);
    // 0x803F9B28: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x803F9B2C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803F9B30: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803F9B34: addu        $t2, $v0, $t9
    ctx->r10 = ADD32(ctx->r2, ctx->r25);
    // 0x803F9B38: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x803F9B3C: addiu       $t2, $t2, 0x4AC
    ctx->r10 = ADD32(ctx->r10, 0X4AC);
    // 0x803F9B40: subu        $t4, $t4, $v1
    ctx->r12 = SUB32(ctx->r12, ctx->r3);
    // 0x803F9B44: addu        $a2, $t2, $t4
    ctx->r6 = ADD32(ctx->r10, ctx->r12);
    // 0x803F9B48: lb          $a3, 0x5F($a2)
    ctx->r7 = MEM_B(ctx->r6, 0X5F);
    // 0x803F9B4C: lb          $t0, 0x5C($a2)
    ctx->r8 = MEM_B(ctx->r6, 0X5C);
    // 0x803F9B50: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x803F9B54: bne         $at, $zero, L_803F9BA4
    if (ctx->r1 != 0) {
        // 0x803F9B58: addiu       $t3, $zero, 0xC
        ctx->r11 = ADD32(0, 0XC);
            goto L_803F9BA4;
    }
    // 0x803F9B58: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x803F9B5C: slt         $at, $a3, $t0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x803F9B60: beq         $at, $zero, L_803F9B84
    if (ctx->r1 == 0) {
        // 0x803F9B64: subu        $t5, $t0, $a3
        ctx->r13 = SUB32(ctx->r8, ctx->r7);
            goto L_803F9B84;
    }
    // 0x803F9B64: subu        $t5, $t0, $a3
    ctx->r13 = SUB32(ctx->r8, ctx->r7);
    // 0x803F9B68: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x803F9B6C: beq         $at, $zero, L_803F9B7C
    if (ctx->r1 == 0) {
        // 0x803F9B70: nop
    
            goto L_803F9B7C;
    }
    // 0x803F9B70: nop

    // 0x803F9B74: b           L_803F9BA4
    // 0x803F9B78: addiu       $t3, $zero, 0x17
    ctx->r11 = ADD32(0, 0X17);
        goto L_803F9BA4;
    // 0x803F9B78: addiu       $t3, $zero, 0x17
    ctx->r11 = ADD32(0, 0X17);
L_803F9B7C:
    // 0x803F9B7C: b           L_803F9BA4
    // 0x803F9B80: addiu       $t3, $zero, 0x18
    ctx->r11 = ADD32(0, 0X18);
        goto L_803F9BA4;
    // 0x803F9B80: addiu       $t3, $zero, 0x18
    ctx->r11 = ADD32(0, 0X18);
L_803F9B84:
    // 0x803F9B84: slt         $at, $t0, $a3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x803F9B88: beq         $at, $zero, L_803F9BA4
    if (ctx->r1 == 0) {
        // 0x803F9B8C: subu        $t7, $a3, $t0
        ctx->r15 = SUB32(ctx->r7, ctx->r8);
            goto L_803F9BA4;
    }
    // 0x803F9B8C: subu        $t7, $a3, $t0
    ctx->r15 = SUB32(ctx->r7, ctx->r8);
    // 0x803F9B90: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x803F9B94: beq         $at, $zero, L_803F9BA4
    if (ctx->r1 == 0) {
        // 0x803F9B98: addiu       $t3, $zero, 0x19
        ctx->r11 = ADD32(0, 0X19);
            goto L_803F9BA4;
    }
    // 0x803F9B98: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x803F9B9C: b           L_803F9BA4
    // 0x803F9BA0: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
        goto L_803F9BA4;
    // 0x803F9BA0: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
L_803F9BA4:
    // 0x803F9BA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F9BA8: jal         0x8002BB50
    // 0x803F9BAC: andi        $a1, $t3, 0xFFFF
    ctx->r5 = ctx->r11 & 0XFFFF;
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x803F9BAC: andi        $a1, $t3, 0xFFFF
    ctx->r5 = ctx->r11 & 0XFFFF;
    after_0:
    // 0x803F9BB0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803F9BB4: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803F9BB8: lh          $t6, -0x6A6($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6A6);
    // 0x803F9BBC: lhu         $t4, 0x1E($t9)
    ctx->r12 = MEM_HU(ctx->r25, 0X1E);
    // 0x803F9BC0: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x803F9BC4: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F9BC8: addu        $t5, $t8, $t4
    ctx->r13 = ADD32(ctx->r24, ctx->r12);
    // 0x803F9BCC: addu        $a2, $a2, $t5
    ctx->r6 = ADD32(ctx->r6, ctx->r13);
    // 0x803F9BD0: lbu         $a2, -0x3D60($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X3D60);
    // 0x803F9BD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F9BD8: jal         0x8002AB30
    // 0x803F9BDC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_8002AB30(rdram, ctx);
        goto after_1;
    // 0x803F9BDC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_1:
    // 0x803F9BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F9BE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F9BE8: jr          $ra
    // 0x803F9BEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803F9BEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803F9BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F9BF0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803F9BF4: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x803F9BF8: lh          $v0, 0x9A($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X9A);
    // 0x803F9BFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F9C00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F9C04: bgtz        $v0, L_803F9C1C
    if (SIGNED(ctx->r2) > 0) {
        // 0x803F9C08: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_803F9C1C;
    }
    // 0x803F9C08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F9C0C: jal         0x8002BB50
    // 0x803F9C10: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x803F9C10: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x803F9C14: b           L_803F9C90
    // 0x803F9C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F9C90;
    // 0x803F9C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F9C1C:
    // 0x803F9C1C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803F9C20: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x803F9C24: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x803F9C28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803F9C2C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803F9C30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F9C34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F9C38: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803F9C3C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803F9C40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F9C44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F9C48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F9C4C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803F9C50: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803F9C54: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803F9C58: lb          $t8, -0x2F7C($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X2F7C);
    // 0x803F9C5C: lh          $t9, 0xA8($v1)
    ctx->r25 = MEM_H(ctx->r3, 0XA8);
    // 0x803F9C60: nop

    // 0x803F9C64: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x803F9C68: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x803F9C6C: bne         $at, $zero, L_803F9C84
    if (ctx->r1 != 0) {
        // 0x803F9C70: nop
    
            goto L_803F9C84;
    }
    // 0x803F9C70: nop

    // 0x803F9C74: jal         0x8002BB50
    // 0x803F9C78: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002BB50(rdram, ctx);
        goto after_1;
    // 0x803F9C78: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x803F9C7C: b           L_803F9C90
    // 0x803F9C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F9C90;
    // 0x803F9C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F9C84:
    // 0x803F9C84: jal         0x8002BB50
    // 0x803F9C88: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x803F9C88: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x803F9C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F9C90:
    // 0x803F9C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F9C94: jr          $ra
    // 0x803F9C98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803F9C98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803F9C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F9C9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F9CA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F9CA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F9CA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F9CAC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803F9CB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F9CB4: jal         0x80021214
    // 0x803F9CB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_0;
    // 0x803F9CB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x803F9CBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F9CC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F9CC4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x803F9CC8: jal         0x8002B608
    // 0x803F9CCC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_1;
    // 0x803F9CCC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x803F9CD0: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x803F9CD4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803F9CD8: addiu       $t7, $t7, -0x6CE4
    ctx->r15 = ADD32(ctx->r15, -0X6CE4);
    // 0x803F9CDC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x803F9CE0: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x803F9CE4: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803F9CE8: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    // 0x803F9CEC: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803F9CF0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803F9CF4: lw          $a3, 0x8($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X8);
    // 0x803F9CF8: jal         0x8004B078
    // 0x803F9CFC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_2;
    // 0x803F9CFC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_2:
    // 0x803F9D00: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x803F9D04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F9D08: sb          $zero, 0x4($t0)
    MEM_B(0X4, ctx->r8) = 0;
    // 0x803F9D0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F9D10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F9D14: jr          $ra
    // 0x803F9D18: nop

    return;
    // 0x803F9D18: nop

;}
RECOMP_FUNC void func_803F9D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F9D1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F9D20: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803F9D24: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x803F9D28: addiu       $s1, $s1, -0x750
    ctx->r17 = ADD32(ctx->r17, -0X750);
    // 0x803F9D2C: lh          $t6, 0xA8($s1)
    ctx->r14 = MEM_H(ctx->r17, 0XA8);
    // 0x803F9D30: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803F9D34: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803F9D38: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x803F9D3C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F9D40: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803F9D44: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803F9D48: blez        $t6, L_803F9DD8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x803F9D4C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_803F9DD8;
    }
    // 0x803F9D4C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803F9D50: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x803F9D54: addiu       $s2, $s2, -0x3138
    ctx->r18 = ADD32(ctx->r18, -0X3138);
L_803F9D58:
    // 0x803F9D58: lh          $t7, 0x9A($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X9A);
    // 0x803F9D5C: nop

    // 0x803F9D60: addu        $v0, $t7, $s0
    ctx->r2 = ADD32(ctx->r15, ctx->r16);
    // 0x803F9D64: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x803F9D68: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x803F9D6C: addu        $t0, $s2, $t9
    ctx->r8 = ADD32(ctx->r18, ctx->r25);
    // 0x803F9D70: lb          $a0, 0x0($t0)
    ctx->r4 = MEM_B(ctx->r8, 0X0);
    // 0x803F9D74: jal         0x8003CB98
    // 0x803F9D78: nop

    func_8003CB98(rdram, ctx);
        goto after_0;
    // 0x803F9D78: nop

    after_0:
    // 0x803F9D7C: bgez        $v0, L_803F9D90
    if (SIGNED(ctx->r2) >= 0) {
        // 0x803F9D80: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_803F9D90;
    }
    // 0x803F9D80: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803F9D84: b           L_803F9DBC
    // 0x803F9D88: sb          $zero, 0x4($s3)
    MEM_B(0X4, ctx->r19) = 0;
        goto L_803F9DBC;
    // 0x803F9D88: sb          $zero, 0x4($s3)
    MEM_B(0X4, ctx->r19) = 0;
    // 0x803F9D8C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_803F9D90:
    // 0x803F9D90: addiu       $t2, $zero, 0x30
    ctx->r10 = ADD32(0, 0X30);
    // 0x803F9D94: sb          $t1, 0x4($s3)
    MEM_B(0X4, ctx->r19) = ctx->r9;
    // 0x803F9D98: sh          $t2, 0x18($s3)
    MEM_H(0X18, ctx->r19) = ctx->r10;
    // 0x803F9D9C: lh          $t3, 0xAA($s1)
    ctx->r11 = MEM_H(ctx->r17, 0XAA);
    // 0x803F9DA0: lui         $t6, 0x8040
    ctx->r14 = S32(0X8040 << 16);
    // 0x803F9DA4: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x803F9DA8: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x803F9DAC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803F9DB0: lbu         $t6, -0x3D60($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3D60);
    // 0x803F9DB4: b           L_803F9DD8
    // 0x803F9DB8: sh          $t6, 0x1C($s3)
    MEM_H(0X1C, ctx->r19) = ctx->r14;
        goto L_803F9DD8;
    // 0x803F9DB8: sh          $t6, 0x1C($s3)
    MEM_H(0X1C, ctx->r19) = ctx->r14;
L_803F9DBC:
    // 0x803F9DBC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F9DC0: lh          $t9, 0xA8($s1)
    ctx->r25 = MEM_H(ctx->r17, 0XA8);
    // 0x803F9DC4: sll         $t7, $s0, 16
    ctx->r15 = S32(ctx->r16 << 16);
    // 0x803F9DC8: sra         $s0, $t7, 16
    ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
    // 0x803F9DCC: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x803F9DD0: bne         $at, $zero, L_803F9D58
    if (ctx->r1 != 0) {
        // 0x803F9DD4: nop
    
            goto L_803F9D58;
    }
    // 0x803F9DD4: nop

L_803F9DD8:
    // 0x803F9DD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F9DDC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803F9DE0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803F9DE4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803F9DE8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803F9DEC: jr          $ra
    // 0x803F9DF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F9DF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F9DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F9DF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F9DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F9DFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F9E00: lhu         $t6, 0x1E($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1E);
    // 0x803F9E04: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x803F9E08: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x803F9E0C: bne         $at, $zero, L_803F9E34
    if (ctx->r1 != 0) {
        // 0x803F9E10: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F9E34;
    }
    // 0x803F9E10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F9E14: lh          $t7, -0x6A6($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6A6);
    // 0x803F9E18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F9E1C: bne         $t7, $at, L_803F9E34
    if (ctx->r15 != ctx->r1) {
        // 0x803F9E20: nop
    
            goto L_803F9E34;
    }
    // 0x803F9E20: nop

    // 0x803F9E24: jal         0x80029548
    // 0x803F9E28: nop

    func_80029548(rdram, ctx);
        goto after_0;
    // 0x803F9E28: nop

    after_0:
    // 0x803F9E2C: b           L_803F9E34
    // 0x803F9E30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F9E34;
    // 0x803F9E30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F9E34:
    // 0x803F9E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F9E38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F9E3C: jr          $ra
    // 0x803F9E40: nop

    return;
    // 0x803F9E40: nop

;}
RECOMP_FUNC void func_803F9E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F9E44: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803F9E48: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x803F9E4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F9E50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803F9E54: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803F9E58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F9E5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F9E60: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803F9E64: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803F9E68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F9E6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F9E70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F9E74: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x803F9E78: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803F9E7C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F9E80: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F9E84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F9E88: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803F9E8C: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x803F9E90: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x803F9E94: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F9E98: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803F9E9C: jal         0x80036234
    // 0x803F9EA0: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803F9EA0: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x803F9EA4: jal         0x8004974C
    // 0x803F9EA8: nop

    func_8004974C(rdram, ctx);
        goto after_1;
    // 0x803F9EA8: nop

    after_1:
    // 0x803F9EAC: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x803F9EB0: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x803F9EB4: lui         $t0, 0x8040
    ctx->r8 = S32(0X8040 << 16);
    // 0x803F9EB8: addiu       $t0, $t0, -0x4430
    ctx->r8 = ADD32(ctx->r8, -0X4430);
    // 0x803F9EBC: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x803F9EC0: jal         0x80035FF0
    // 0x803F9EC4: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    func_80035FF0(rdram, ctx);
        goto after_2;
    // 0x803F9EC4: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    after_2:
    // 0x803F9EC8: lb          $t1, 0x1($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X1);
    // 0x803F9ECC: nop

    // 0x803F9ED0: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x803F9ED4: jal         0x8004974C
    // 0x803F9ED8: sh          $t2, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r10;
    func_8004974C(rdram, ctx);
        goto after_3;
    // 0x803F9ED8: sh          $t2, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r10;
    after_3:
    // 0x803F9EDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F9EE0: bne         $v0, $at, L_803F9EF4
    if (ctx->r2 != ctx->r1) {
        // 0x803F9EE4: sh          $v0, 0x36($s2)
        MEM_H(0X36, ctx->r18) = ctx->r2;
            goto L_803F9EF4;
    }
    // 0x803F9EE4: sh          $v0, 0x36($s2)
    MEM_H(0X36, ctx->r18) = ctx->r2;
    // 0x803F9EE8: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x803F9EEC: b           L_803F9EFC
    // 0x803F9EF0: sh          $t3, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r11;
        goto L_803F9EFC;
    // 0x803F9EF0: sh          $t3, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r11;
L_803F9EF4:
    // 0x803F9EF4: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x803F9EF8: sh          $t4, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r12;
L_803F9EFC:
    // 0x803F9EFC: lh          $t5, 0x36($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X36);
    // 0x803F9F00: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x803F9F04: bne         $t5, $zero, L_803F9FB4
    if (ctx->r13 != 0) {
        // 0x803F9F08: addiu       $s1, $s1, -0x3138
        ctx->r17 = ADD32(ctx->r17, -0X3138);
            goto L_803F9FB4;
    }
    // 0x803F9F08: addiu       $s1, $s1, -0x3138
    ctx->r17 = ADD32(ctx->r17, -0X3138);
    // 0x803F9F0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803F9F10: addu        $t6, $s1, $s0
    ctx->r14 = ADD32(ctx->r17, ctx->r16);
L_803F9F14:
    // 0x803F9F14: lb          $a0, 0x0($t6)
    ctx->r4 = MEM_B(ctx->r14, 0X0);
    // 0x803F9F18: jal         0x8003CB98
    // 0x803F9F1C: nop

    func_8003CB98(rdram, ctx);
        goto after_4;
    // 0x803F9F1C: nop

    after_4:
    // 0x803F9F20: bltz        $v0, L_803F9F94
    if (SIGNED(ctx->r2) < 0) {
        // 0x803F9F24: lui         $t8, 0x8012
        ctx->r24 = S32(0X8012 << 16);
            goto L_803F9F94;
    }
    // 0x803F9F24: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803F9F28: lb          $t8, -0x32A1($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X32A1);
    // 0x803F9F2C: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x803F9F30: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803F9F34: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803F9F38: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803F9F3C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803F9F40: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803F9F44: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803F9F48: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803F9F4C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803F9F50: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803F9F54: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803F9F58: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803F9F5C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803F9F60: lb          $t0, -0x2F7C($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X2F7C);
    // 0x803F9F64: lh          $t1, 0x34($s2)
    ctx->r9 = MEM_H(ctx->r18, 0X34);
    // 0x803F9F68: bgez        $s0, L_803F9F78
    if (SIGNED(ctx->r16) >= 0) {
        // 0x803F9F6C: sra         $a0, $s0, 3
        ctx->r4 = S32(SIGNED(ctx->r16) >> 3);
            goto L_803F9F78;
    }
    // 0x803F9F6C: sra         $a0, $s0, 3
    ctx->r4 = S32(SIGNED(ctx->r16) >> 3);
    // 0x803F9F70: addiu       $at, $s0, 0x7
    ctx->r1 = ADD32(ctx->r16, 0X7);
    // 0x803F9F74: sra         $a0, $at, 3
    ctx->r4 = S32(SIGNED(ctx->r1) >> 3);
L_803F9F78:
    // 0x803F9F78: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x803F9F7C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x803F9F80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F9F84: jal         0x8001D4C0
    // 0x803F9F88: subu        $a2, $t0, $t1
    ctx->r6 = SUB32(ctx->r8, ctx->r9);
    func_8001D4C0(rdram, ctx);
        goto after_5;
    // 0x803F9F88: subu        $a2, $t0, $t1
    ctx->r6 = SUB32(ctx->r8, ctx->r9);
    after_5:
    // 0x803F9F8C: b           L_803F9FF0
    // 0x803F9F90: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_803F9FF0;
    // 0x803F9F90: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_803F9F94:
    // 0x803F9F94: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F9F98: sll         $t2, $s0, 16
    ctx->r10 = S32(ctx->r16 << 16);
    // 0x803F9F9C: sra         $s0, $t2, 16
    ctx->r16 = S32(SIGNED(ctx->r10) >> 16);
    // 0x803F9FA0: slti        $at, $s0, 0x24
    ctx->r1 = SIGNED(ctx->r16) < 0X24 ? 1 : 0;
    // 0x803F9FA4: bne         $at, $zero, L_803F9F14
    if (ctx->r1 != 0) {
        // 0x803F9FA8: addu        $t6, $s1, $s0
        ctx->r14 = ADD32(ctx->r17, ctx->r16);
            goto L_803F9F14;
    }
    // 0x803F9FA8: addu        $t6, $s1, $s0
    ctx->r14 = ADD32(ctx->r17, ctx->r16);
    // 0x803F9FAC: b           L_803F9FF0
    // 0x803F9FB0: nop

        goto L_803F9FF0;
    // 0x803F9FB0: nop

L_803F9FB4:
    // 0x803F9FB4: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x803F9FB8: jal         0x800498B8
    // 0x803F9FBC: nop

    func_800498B8(rdram, ctx);
        goto after_6;
    // 0x803F9FBC: nop

    after_6:
    // 0x803F9FC0: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x803F9FC4: sra         $t4, $s0, 16
    ctx->r12 = S32(SIGNED(ctx->r16) >> 16);
    // 0x803F9FC8: jal         0x803FA204
    // 0x803F9FCC: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    func_803FA204(rdram, ctx);
        goto after_7;
    // 0x803F9FCC: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    after_7:
    // 0x803F9FD0: bgez        $s0, L_803F9FE0
    if (SIGNED(ctx->r16) >= 0) {
        // 0x803F9FD4: sra         $t5, $s0, 1
        ctx->r13 = S32(SIGNED(ctx->r16) >> 1);
            goto L_803F9FE0;
    }
    // 0x803F9FD4: sra         $t5, $s0, 1
    ctx->r13 = S32(SIGNED(ctx->r16) >> 1);
    // 0x803F9FD8: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x803F9FDC: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_803F9FE0:
    // 0x803F9FE0: multu       $v0, $t5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F9FE4: mflo        $t6
    ctx->r14 = lo;
    // 0x803F9FE8: sh          $t6, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r14;
    // 0x803F9FEC: nop

L_803F9FF0:
    // 0x803F9FF0: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F9FF4: addiu       $a0, $a0, -0x5D4C
    ctx->r4 = ADD32(ctx->r4, -0X5D4C);
    // 0x803F9FF8: jal         0x800293DC
    // 0x803F9FFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800293DC(rdram, ctx);
        goto after_8;
    // 0x803F9FFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x803FA000: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803FA004: jal         0x8002AAC0
    // 0x803FA008: addiu       $a0, $a0, -0x3E74
    ctx->r4 = ADD32(ctx->r4, -0X3E74);
    func_8002AAC0(rdram, ctx);
        goto after_9;
    // 0x803FA008: addiu       $a0, $a0, -0x3E74
    ctx->r4 = ADD32(ctx->r4, -0X3E74);
    after_9:
    // 0x803FA00C: jal         0x80039DF0
    // 0x803FA010: nop

    func_80039DF0(rdram, ctx);
        goto after_10;
    // 0x803FA010: nop

    after_10:
    // 0x803FA014: jal         0x8006FB58
    // 0x803FA018: nop

    func_8006FB58(rdram, ctx);
        goto after_11;
    // 0x803FA018: nop

    after_11:
    // 0x803FA01C: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803FA020: addiu       $a0, $a0, -0x5FBC
    ctx->r4 = ADD32(ctx->r4, -0X5FBC);
    // 0x803FA024: jal         0x8004A9B4
    // 0x803FA028: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_12;
    // 0x803FA028: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_12:
    // 0x803FA02C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803FA030: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803FA034: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803FA038: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803FA03C: jr          $ra
    // 0x803FA040: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803FA040: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803FA044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803FA044: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803FA048: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803FA04C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803FA050: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803FA054: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x803FA058: lh          $t7, 0x28($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X28);
    // 0x803FA05C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803FA060: sb          $t6, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r14;
    // 0x803FA064: sb          $t7, 0x31($a0)
    MEM_B(0X31, ctx->r4) = ctx->r15;
    // 0x803FA068: lw          $t8, -0x3250($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3250);
    // 0x803FA06C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803FA070: lhu         $a0, 0x0($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X0);
    // 0x803FA074: jal         0x80035D2C
    // 0x803FA078: nop

    func_80035D2C(rdram, ctx);
        goto after_0;
    // 0x803FA078: nop

    after_0:
    // 0x803FA07C: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x803FA080: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803FA084: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803FA088: lw          $t9, -0x3D9C($at)
    ctx->r25 = MEM_W(ctx->r1, -0X3D9C);
    // 0x803FA08C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x803FA090: jalr        $t9
    // 0x803FA094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x803FA094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803FA098: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803FA09C: lb          $t0, -0x32A1($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X32A1);
    // 0x803FA0A0: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x803FA0A4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803FA0A8: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x803FA0AC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803FA0B0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803FA0B4: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x803FA0B8: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x803FA0BC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803FA0C0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803FA0C4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803FA0C8: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x803FA0CC: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x803FA0D0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803FA0D4: lb          $t2, -0x2F7C($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X2F7C);
    // 0x803FA0D8: lh          $t3, 0x34($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X34);
    // 0x803FA0DC: lh          $a0, 0x26($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X26);
    // 0x803FA0E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803FA0E4: jal         0x8001D4C0
    // 0x803FA0E8: subu        $a2, $t2, $t3
    ctx->r6 = SUB32(ctx->r10, ctx->r11);
    func_8001D4C0(rdram, ctx);
        goto after_2;
    // 0x803FA0E8: subu        $a2, $t2, $t3
    ctx->r6 = SUB32(ctx->r10, ctx->r11);
    after_2:
    // 0x803FA0EC: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x803FA0F0: lh          $t5, 0x26($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X26);
    // 0x803FA0F4: lb          $t4, 0x30($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X30);
    // 0x803FA0F8: nop

    // 0x803FA0FC: bne         $t4, $t5, L_803FA118
    if (ctx->r12 != ctx->r13) {
        // 0x803FA100: nop
    
            goto L_803FA118;
    }
    // 0x803FA100: nop

    // 0x803FA104: lb          $t6, 0x31($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X31);
    // 0x803FA108: lh          $t7, 0x28($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X28);
    // 0x803FA10C: nop

    // 0x803FA110: beq         $t6, $t7, L_803FA124
    if (ctx->r14 == ctx->r15) {
        // 0x803FA114: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803FA124;
    }
    // 0x803FA114: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803FA118:
    // 0x803FA118: jal         0x80035734
    // 0x803FA11C: nop

    func_80035734(rdram, ctx);
        goto after_3;
    // 0x803FA11C: nop

    after_3:
    // 0x803FA120: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803FA124:
    // 0x803FA124: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803FA128: jr          $ra
    // 0x803FA12C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803FA12C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803FA130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803FA130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803FA134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803FA138: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803FA13C: jal         0x80035770
    // 0x803FA140: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803FA140: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803FA144: jal         0x80037908
    // 0x803FA148: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_1;
    // 0x803FA148: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x803FA14C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803FA150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803FA154: jr          $ra
    // 0x803FA158: nop

    return;
    // 0x803FA158: nop

;}
RECOMP_FUNC void func_803FA15C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803FA15C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803FA160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803FA164: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803FA168: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803FA16C: jal         0x80037908
    // 0x803FA170: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x803FA170: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803FA174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803FA178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803FA17C: jr          $ra
    // 0x803FA180: nop

    return;
    // 0x803FA180: nop

;}
RECOMP_FUNC void func_803FA184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803FA184: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803FA188: lh          $v0, 0x28($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X28);
    // 0x803FA18C: nop

    // 0x803FA190: blez        $v0, L_803FA19C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x803FA194: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_803FA19C;
    }
    // 0x803FA194: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x803FA198: sh          $t6, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r14;
L_803FA19C:
    // 0x803FA19C: jr          $ra
    // 0x803FA1A0: nop

    return;
    // 0x803FA1A0: nop

;}
RECOMP_FUNC void func_803FA1A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803FA1A4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803FA1A8: lh          $v0, 0x28($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X28);
    // 0x803FA1AC: nop

    // 0x803FA1B0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x803FA1B4: beq         $at, $zero, L_803FA1C0
    if (ctx->r1 == 0) {
        // 0x803FA1B8: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_803FA1C0;
    }
    // 0x803FA1B8: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x803FA1BC: sh          $t6, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r14;
L_803FA1C0:
    // 0x803FA1C0: jr          $ra
    // 0x803FA1C4: nop

    return;
    // 0x803FA1C4: nop

;}
RECOMP_FUNC void func_803FA1C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803FA1C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803FA1CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803FA1D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803FA1D4: jal         0x803FA204
    // 0x803FA1D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803FA204(rdram, ctx);
        goto after_0;
    // 0x803FA1D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803FA1DC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x803FA1E0: nop

    // 0x803FA1E4: lh          $t6, 0x26($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X26);
    // 0x803FA1E8: nop

    // 0x803FA1EC: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x803FA1F0: sh          $t7, 0x26($v1)
    MEM_H(0X26, ctx->r3) = ctx->r15;
    // 0x803FA1F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803FA1F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803FA1FC: jr          $ra
    // 0x803FA200: nop

    return;
    // 0x803FA200: nop

;}
RECOMP_FUNC void func_803FA204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803FA204: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803FA208: lh          $v0, -0x6A6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X6A6);
    // 0x803FA20C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803FA210: beq         $v0, $at, L_803FA228
    if (ctx->r2 == ctx->r1) {
        // 0x803FA214: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803FA228;
    }
    // 0x803FA214: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803FA218: beq         $v0, $at, L_803FA230
    if (ctx->r2 == ctx->r1) {
        // 0x803FA21C: nop
    
            goto L_803FA230;
    }
    // 0x803FA21C: nop

    // 0x803FA220: b           L_803FA238
    // 0x803FA224: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803FA238;
    // 0x803FA224: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803FA228:
    // 0x803FA228: jr          $ra
    // 0x803FA22C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    return;
    // 0x803FA22C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_803FA230:
    // 0x803FA230: jr          $ra
    // 0x803FA234: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x803FA234: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_803FA238:
    // 0x803FA238: jr          $ra
    // 0x803FA23C: nop

    return;
    // 0x803FA23C: nop

;}
RECOMP_FUNC void func_803FA240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803FA240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803FA244: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803FA248: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803FA24C: jal         0x803FA204
    // 0x803FA250: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803FA204(rdram, ctx);
        goto after_0;
    // 0x803FA250: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803FA254: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x803FA258: nop

    // 0x803FA25C: lh          $t6, 0x26($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X26);
    // 0x803FA260: nop

    // 0x803FA264: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x803FA268: sh          $t7, 0x26($v1)
    MEM_H(0X26, ctx->r3) = ctx->r15;
    // 0x803FA26C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803FA270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803FA274: jr          $ra
    // 0x803FA278: nop

    return;
    // 0x803FA278: nop

;}
RECOMP_FUNC void func_803FA27C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803FA27C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803FA280: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x803FA284: lh          $t7, 0x34($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X34);
    // 0x803FA288: nop

    // 0x803FA28C: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x803FA290: jr          $ra
    // 0x803FA294: sh          $t8, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r24;
    return;
    // 0x803FA294: sh          $t8, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_803FA298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803FA298: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803FA29C: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x803FA2A0: lh          $t7, 0x34($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X34);
    // 0x803FA2A4: nop

    // 0x803FA2A8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x803FA2AC: jr          $ra
    // 0x803FA2B0: sh          $t8, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r24;
    return;
    // 0x803FA2B0: sh          $t8, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_803FA2B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803FA2B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803FA2B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803FA2BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803FA2C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803FA2C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803FA2C8: jal         0x8003BEC4
    // 0x803FA2CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003BEC4(rdram, ctx);
        goto after_0;
    // 0x803FA2CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803FA2D0: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803FA2D4: jal         0x800296E0
    // 0x803FA2D8: addiu       $a0, $a0, -0x5D14
    ctx->r4 = ADD32(ctx->r4, -0X5D14);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x803FA2D8: addiu       $a0, $a0, -0x5D14
    ctx->r4 = ADD32(ctx->r4, -0X5D14);
    after_1:
    // 0x803FA2DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803FA2E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803FA2E4: jr          $ra
    // 0x803FA2E8: nop

    return;
    // 0x803FA2E8: nop

;}
RECOMP_FUNC void func_803FA2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803FA2EC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x803FA2F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803FA2F4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803FA2F8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x803FA2FC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x803FA300: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x803FA304: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x803FA308: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x803FA30C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x803FA310: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x803FA314: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x803FA318: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x803FA31C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x803FA320: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x803FA324: jal         0x8003BFB4
    // 0x803FA328: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003BFB4(rdram, ctx);
        goto after_0;
    // 0x803FA328: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x803FA32C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803FA330: lhu         $t6, -0x32AE($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X32AE);
    // 0x803FA334: lui         $s1, 0x8040
    ctx->r17 = S32(0X8040 << 16);
    // 0x803FA338: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x803FA33C: bne         $t7, $zero, L_803FA714
    if (ctx->r15 != 0) {
        // 0x803FA340: addiu       $s1, $s1, -0x3D78
        ctx->r17 = ADD32(ctx->r17, -0X3D78);
            goto L_803FA714;
    }
    // 0x803FA340: addiu       $s1, $s1, -0x3D78
    ctx->r17 = ADD32(ctx->r17, -0X3D78);
    // 0x803FA344: lui         $s4, 0x801B
    ctx->r20 = S32(0X801B << 16);
    // 0x803FA348: addiu       $s4, $s4, -0x750
    ctx->r20 = ADD32(ctx->r20, -0X750);
    // 0x803FA34C: lh          $t8, 0xAA($s4)
    ctx->r24 = MEM_H(ctx->r20, 0XAA);
    // 0x803FA350: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x803FA354: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x803FA358: addu        $v0, $s1, $t9
    ctx->r2 = ADD32(ctx->r17, ctx->r25);
    // 0x803FA35C: lbu         $t1, 0x1($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X1);
    // 0x803FA360: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x803FA364: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x803FA368: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x803FA36C: jal         0x8004A55C
    // 0x803FA370: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_8004A55C(rdram, ctx);
        goto after_1;
    // 0x803FA370: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_1:
    // 0x803FA374: lh          $t0, 0xAA($s4)
    ctx->r8 = MEM_H(ctx->r20, 0XAA);
    // 0x803FA378: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x803FA37C: beq         $t0, $zero, L_803FA3A4
    if (ctx->r8 == 0) {
        // 0x803FA380: sll         $t3, $t0, 1
        ctx->r11 = S32(ctx->r8 << 1);
            goto L_803FA3A4;
    }
    // 0x803FA380: sll         $t3, $t0, 1
    ctx->r11 = S32(ctx->r8 << 1);
    // 0x803FA384: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x803FA388: addu        $v0, $s1, $t3
    ctx->r2 = ADD32(ctx->r17, ctx->r11);
    // 0x803FA38C: lbu         $t4, 0x7($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X7);
    // 0x803FA390: lbu         $a2, 0x6($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X6);
    // 0x803FA394: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x803FA398: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x803FA39C: jal         0x8004A55C
    // 0x803FA3A0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_8004A55C(rdram, ctx);
        goto after_2;
    // 0x803FA3A0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_2:
L_803FA3A4:
    // 0x803FA3A4: lh          $t5, 0xA8($s4)
    ctx->r13 = MEM_H(ctx->r20, 0XA8);
    // 0x803FA3A8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x803FA3AC: blez        $t5, L_803FA714
    if (SIGNED(ctx->r13) <= 0) {
        // 0x803FA3B0: lui         $fp, 0x8011
        ctx->r30 = S32(0X8011 << 16);
            goto L_803FA714;
    }
    // 0x803FA3B0: lui         $fp, 0x8011
    ctx->r30 = S32(0X8011 << 16);
    // 0x803FA3B4: lui         $s7, 0x3
    ctx->r23 = S32(0X3 << 16);
    // 0x803FA3B8: lui         $s6, 0x3
    ctx->r22 = S32(0X3 << 16);
    // 0x803FA3BC: ori         $s6, $s6, 0x88
    ctx->r22 = ctx->r22 | 0X88;
    // 0x803FA3C0: ori         $s7, $s7, 0x188
    ctx->r23 = ctx->r23 | 0X188;
    // 0x803FA3C4: addiu       $fp, $fp, -0x2F80
    ctx->r30 = ADD32(ctx->r30, -0X2F80);
    // 0x803FA3C8: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
L_803FA3CC:
    // 0x803FA3CC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803FA3D0: lb          $t9, -0x32A1($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X32A1);
    // 0x803FA3D4: lh          $t6, 0x9A($s4)
    ctx->r14 = MEM_H(ctx->r20, 0X9A);
    // 0x803FA3D8: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x803FA3DC: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x803FA3E0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803FA3E4: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x803FA3E8: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x803FA3EC: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x803FA3F0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803FA3F4: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x803FA3F8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803FA3FC: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x803FA400: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x803FA404: addu        $v0, $fp, $t1
    ctx->r2 = ADD32(ctx->r30, ctx->r9);
    // 0x803FA408: lb          $t4, 0x1($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X1);
    // 0x803FA40C: addu        $v1, $t6, $s3
    ctx->r3 = ADD32(ctx->r14, ctx->r19);
    // 0x803FA410: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x803FA414: multu       $t4, $s5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803FA418: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x803FA41C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803FA420: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x803FA424: lb          $t2, -0x3138($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X3138);
    // 0x803FA428: sll         $a0, $s3, 4
    ctx->r4 = S32(ctx->r19 << 4);
    // 0x803FA42C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803FA430: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803FA434: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803FA438: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803FA43C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803FA440: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803FA444: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803FA448: addu        $s2, $v0, $t3
    ctx->r18 = ADD32(ctx->r2, ctx->r11);
    // 0x803FA44C: addu        $a0, $a0, $s3
    ctx->r4 = ADD32(ctx->r4, ctx->r19);
    // 0x803FA450: addiu       $s2, $s2, 0x4AC
    ctx->r18 = ADD32(ctx->r18, 0X4AC);
    // 0x803FA454: mflo        $t5
    ctx->r13 = lo;
    // 0x803FA458: addiu       $a0, $a0, 0x42
    ctx->r4 = ADD32(ctx->r4, 0X42);
    // 0x803FA45C: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x803FA460: sll         $s0, $a0, 16
    ctx->r16 = S32(ctx->r4 << 16);
    // 0x803FA464: lb          $a3, 0x5F($t6)
    ctx->r7 = MEM_B(ctx->r14, 0X5F);
    // 0x803FA468: sra         $t7, $s0, 16
    ctx->r15 = S32(SIGNED(ctx->r16) >> 16);
    // 0x803FA46C: lh          $t0, 0xAA($s4)
    ctx->r8 = MEM_H(ctx->r20, 0XAA);
    // 0x803FA470: slti        $at, $s3, 0x3
    ctx->r1 = SIGNED(ctx->r19) < 0X3 ? 1 : 0;
    // 0x803FA474: bne         $at, $zero, L_803FA498
    if (ctx->r1 != 0) {
        // 0x803FA478: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_803FA498;
    }
    // 0x803FA478: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x803FA47C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803FA480: bne         $t0, $at, L_803FA49C
    if (ctx->r8 != ctx->r1) {
        // 0x803FA484: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803FA49C;
    }
    // 0x803FA484: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803FA488: addiu       $s0, $a0, 0x22
    ctx->r16 = ADD32(ctx->r4, 0X22);
    // 0x803FA48C: sll         $t9, $s0, 16
    ctx->r25 = S32(ctx->r16 << 16);
    // 0x803FA490: b           L_803FA4C4
    // 0x803FA494: sra         $s0, $t9, 16
    ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
        goto L_803FA4C4;
    // 0x803FA494: sra         $s0, $t9, 16
    ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
L_803FA498:
    // 0x803FA498: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_803FA49C:
    // 0x803FA49C: bne         $t0, $at, L_803FA4C4
    if (ctx->r8 != ctx->r1) {
        // 0x803FA4A0: slti        $at, $s3, 0x4
        ctx->r1 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
            goto L_803FA4C4;
    }
    // 0x803FA4A0: slti        $at, $s3, 0x4
    ctx->r1 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
    // 0x803FA4A4: beq         $at, $zero, L_803FA4BC
    if (ctx->r1 == 0) {
        // 0x803FA4A8: addiu       $s0, $a0, 0x8
        ctx->r16 = ADD32(ctx->r4, 0X8);
            goto L_803FA4BC;
    }
    // 0x803FA4A8: addiu       $s0, $a0, 0x8
    ctx->r16 = ADD32(ctx->r4, 0X8);
    // 0x803FA4AC: addiu       $s0, $a0, -0x8
    ctx->r16 = ADD32(ctx->r4, -0X8);
    // 0x803FA4B0: sll         $t3, $s0, 16
    ctx->r11 = S32(ctx->r16 << 16);
    // 0x803FA4B4: b           L_803FA4C4
    // 0x803FA4B8: sra         $s0, $t3, 16
    ctx->r16 = S32(SIGNED(ctx->r11) >> 16);
        goto L_803FA4C4;
    // 0x803FA4B8: sra         $s0, $t3, 16
    ctx->r16 = S32(SIGNED(ctx->r11) >> 16);
L_803FA4BC:
    // 0x803FA4BC: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x803FA4C0: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
L_803FA4C4:
    // 0x803FA4C4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x803FA4C8: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x803FA4CC: sll         $t8, $s3, 5
    ctx->r24 = S32(ctx->r19 << 5);
    // 0x803FA4D0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803FA4D4: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x803FA4D8: sra         $t1, $a2, 16
    ctx->r9 = S32(SIGNED(ctx->r6) >> 16);
    // 0x803FA4DC: ori         $at, $at, 0xFF88
    ctx->r1 = ctx->r1 | 0XFF88;
    // 0x803FA4E0: addu        $s1, $t8, $t9
    ctx->r17 = ADD32(ctx->r24, ctx->r25);
    // 0x803FA4E4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x803FA4E8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803FA4EC: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x803FA4F0: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x803FA4F4: jal         0x8002F914
    // 0x803FA4F8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8002F914(rdram, ctx);
        goto after_3;
    // 0x803FA4F8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_3:
    // 0x803FA4FC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x803FA500: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x803FA504: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x803FA508: sb          $t3, -0x63($at)
    MEM_B(-0X63, ctx->r1) = ctx->r11;
    // 0x803FA50C: lh          $v0, 0x9C($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X9C);
    // 0x803FA510: addu        $a0, $s1, $s6
    ctx->r4 = ADD32(ctx->r17, ctx->r22);
    // 0x803FA514: bne         $v0, $zero, L_803FA564
    if (ctx->r2 != 0) {
        // 0x803FA518: sll         $t1, $v0, 5
        ctx->r9 = S32(ctx->r2 << 5);
            goto L_803FA564;
    }
    // 0x803FA518: sll         $t1, $v0, 5
    ctx->r9 = S32(ctx->r2 << 5);
    // 0x803FA51C: lbu         $t5, 0x134($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X134);
    // 0x803FA520: lbu         $t7, 0x136($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X136);
    // 0x803FA524: multu       $t5, $s5
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803FA528: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x803FA52C: sra         $t4, $a2, 16
    ctx->r12 = S32(SIGNED(ctx->r6) >> 16);
    // 0x803FA530: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803FA534: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x803FA538: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x803FA53C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803FA540: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x803FA544: addu        $a0, $s1, $s6
    ctx->r4 = ADD32(ctx->r17, ctx->r22);
    // 0x803FA548: addiu       $a1, $zero, 0x8F
    ctx->r5 = ADD32(0, 0X8F);
    // 0x803FA54C: mflo        $t6
    ctx->r14 = lo;
    // 0x803FA550: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
    // 0x803FA554: jal         0x8002F6EC
    // 0x803FA558: nop

    func_8002F6EC(rdram, ctx);
        goto after_4;
    // 0x803FA558: nop

    after_4:
    // 0x803FA55C: b           L_803FA59C
    // 0x803FA560: lh          $v0, 0x9C($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X9C);
        goto L_803FA59C;
    // 0x803FA560: lh          $v0, 0x9C($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X9C);
L_803FA564:
    // 0x803FA564: addiu       $t2, $zero, 0x12F
    ctx->r10 = ADD32(0, 0X12F);
    // 0x803FA568: subu        $a1, $t2, $t1
    ctx->r5 = SUB32(ctx->r10, ctx->r9);
    // 0x803FA56C: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x803FA570: lhu         $a3, 0x138($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0X138);
    // 0x803FA574: sra         $t5, $a2, 16
    ctx->r13 = S32(SIGNED(ctx->r6) >> 16);
    // 0x803FA578: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x803FA57C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803FA580: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803FA584: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x803FA588: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803FA58C: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
    // 0x803FA590: jal         0x8002F6EC
    // 0x803FA594: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    func_8002F6EC(rdram, ctx);
        goto after_5;
    // 0x803FA594: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_5:
    // 0x803FA598: lh          $v0, 0x9C($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X9C);
L_803FA59C:
    // 0x803FA59C: addu        $a0, $s1, $s7
    ctx->r4 = ADD32(ctx->r17, ctx->r23);
    // 0x803FA5A0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x803FA5A4: beq         $at, $zero, L_803FA5F0
    if (ctx->r1 == 0) {
        // 0x803FA5A8: addiu       $a1, $zero, 0x10F
        ctx->r5 = ADD32(0, 0X10F);
            goto L_803FA5F0;
    }
    // 0x803FA5A8: addiu       $a1, $zero, 0x10F
    ctx->r5 = ADD32(0, 0X10F);
    // 0x803FA5AC: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x803FA5B0: addiu       $t9, $zero, 0xAF
    ctx->r25 = ADD32(0, 0XAF);
    // 0x803FA5B4: subu        $a1, $t9, $t8
    ctx->r5 = SUB32(ctx->r25, ctx->r24);
    // 0x803FA5B8: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x803FA5BC: lbu         $a3, 0x134($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0X134);
    // 0x803FA5C0: sra         $t3, $a2, 16
    ctx->r11 = S32(SIGNED(ctx->r6) >> 16);
    // 0x803FA5C4: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x803FA5C8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803FA5CC: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x803FA5D0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x803FA5D4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x803FA5D8: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x803FA5DC: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x803FA5E0: jal         0x8002F6EC
    // 0x803FA5E4: addu        $a0, $s1, $s7
    ctx->r4 = ADD32(ctx->r17, ctx->r23);
    func_8002F6EC(rdram, ctx);
        goto after_6;
    // 0x803FA5E4: addu        $a0, $s1, $s7
    ctx->r4 = ADD32(ctx->r17, ctx->r23);
    after_6:
    // 0x803FA5E8: b           L_803FA618
    // 0x803FA5EC: lh          $t8, 0x9C($s4)
    ctx->r24 = MEM_H(ctx->r20, 0X9C);
        goto L_803FA618;
    // 0x803FA5EC: lh          $t8, 0x9C($s4)
    ctx->r24 = MEM_H(ctx->r20, 0X9C);
L_803FA5F0:
    // 0x803FA5F0: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x803FA5F4: lhu         $a3, 0x13A($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0X13A);
    // 0x803FA5F8: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x803FA5FC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803FA600: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x803FA604: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x803FA608: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803FA60C: jal         0x8002F6EC
    // 0x803FA610: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_8002F6EC(rdram, ctx);
        goto after_7;
    // 0x803FA610: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_7:
    // 0x803FA614: lh          $t8, 0x9C($s4)
    ctx->r24 = MEM_H(ctx->r20, 0X9C);
L_803FA618:
    // 0x803FA618: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803FA61C: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x803FA620: lbu         $a1, -0x3C34($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X3C34);
    // 0x803FA624: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x803FA628: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x803FA62C: lbu         $a3, 0x135($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0X135);
    // 0x803FA630: addiu       $a1, $a1, -0x3
    ctx->r5 = ADD32(ctx->r5, -0X3);
    // 0x803FA634: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x803FA638: sra         $t3, $a2, 16
    ctx->r11 = S32(SIGNED(ctx->r6) >> 16);
    // 0x803FA63C: ori         $at, $at, 0x288
    ctx->r1 = ctx->r1 | 0X288;
    // 0x803FA640: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803FA644: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x803FA648: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x803FA64C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x803FA650: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x803FA654: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x803FA658: jal         0x8002F6EC
    // 0x803FA65C: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    func_8002F6EC(rdram, ctx);
        goto after_8;
    // 0x803FA65C: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    after_8:
    // 0x803FA660: lh          $t6, 0x9C($s4)
    ctx->r14 = MEM_H(ctx->r20, 0X9C);
    // 0x803FA664: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803FA668: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x803FA66C: lbu         $a1, -0x3C30($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X3C30);
    // 0x803FA670: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x803FA674: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x803FA678: lbu         $a3, 0x136($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0X136);
    // 0x803FA67C: addiu       $a1, $a1, -0x3
    ctx->r5 = ADD32(ctx->r5, -0X3);
    // 0x803FA680: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x803FA684: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x803FA688: ori         $at, $at, 0x388
    ctx->r1 = ctx->r1 | 0X388;
    // 0x803FA68C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803FA690: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x803FA694: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x803FA698: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803FA69C: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x803FA6A0: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x803FA6A4: jal         0x8002F6EC
    // 0x803FA6A8: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    func_8002F6EC(rdram, ctx);
        goto after_9;
    // 0x803FA6A8: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    after_9:
    // 0x803FA6AC: lh          $t3, 0x9C($s4)
    ctx->r11 = MEM_H(ctx->r20, 0X9C);
    // 0x803FA6B0: lh          $t6, 0x138($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X138);
    // 0x803FA6B4: lhu         $t7, 0x13A($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X13A);
    // 0x803FA6B8: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803FA6BC: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x803FA6C0: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x803FA6C4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x803FA6C8: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x803FA6CC: sra         $t5, $a2, 16
    ctx->r13 = S32(SIGNED(ctx->r6) >> 16);
    // 0x803FA6D0: ori         $at, $at, 0x488
    ctx->r1 = ctx->r1 | 0X488;
    // 0x803FA6D4: lh          $a1, -0x3C2C($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X3C2C);
    // 0x803FA6D8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803FA6DC: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x803FA6E0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x803FA6E4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803FA6E8: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x803FA6EC: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x803FA6F0: jal         0x8002F7CC
    // 0x803FA6F4: subu        $a3, $t6, $t7
    ctx->r7 = SUB32(ctx->r14, ctx->r15);
    func_8002F7CC(rdram, ctx);
        goto after_10;
    // 0x803FA6F4: subu        $a3, $t6, $t7
    ctx->r7 = SUB32(ctx->r14, ctx->r15);
    after_10:
    // 0x803FA6F8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x803FA6FC: lh          $t3, 0xA8($s4)
    ctx->r11 = MEM_H(ctx->r20, 0XA8);
    // 0x803FA700: sll         $t2, $s3, 16
    ctx->r10 = S32(ctx->r19 << 16);
    // 0x803FA704: sra         $s3, $t2, 16
    ctx->r19 = S32(SIGNED(ctx->r10) >> 16);
    // 0x803FA708: slt         $at, $s3, $t3
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x803FA70C: bne         $at, $zero, L_803FA3CC
    if (ctx->r1 != 0) {
        // 0x803FA710: nop
    
            goto L_803FA3CC;
    }
    // 0x803FA710: nop

L_803FA714:
    // 0x803FA714: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x803FA718: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803FA71C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x803FA720: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x803FA724: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x803FA728: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x803FA72C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x803FA730: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x803FA734: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x803FA738: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x803FA73C: jr          $ra
    // 0x803FA740: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x803FA740: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x803FA744: nop

    // 0x803FA748: nop

    // 0x803FA74C: nop

;}
