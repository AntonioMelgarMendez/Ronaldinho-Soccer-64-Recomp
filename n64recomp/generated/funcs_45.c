#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_803A8470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8470: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A8474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A8478: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A847C: jal         0x80035770
    // 0x803A8480: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803A8480: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A8484: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x803A8488: nop

    // 0x803A848C: lb          $t6, 0x38($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X38);
    // 0x803A8490: nop

    // 0x803A8494: bne         $t6, $zero, L_803A84AC
    if (ctx->r14 != 0) {
        // 0x803A8498: nop
    
            goto L_803A84AC;
    }
    // 0x803A8498: nop

    // 0x803A849C: jal         0x803A8604
    // 0x803A84A0: nop

    func_803A8604(rdram, ctx);
        goto after_1;
    // 0x803A84A0: nop

    after_1:
    // 0x803A84A4: b           L_803A84E4
    // 0x803A84A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A84E4;
    // 0x803A84A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A84AC:
    // 0x803A84AC: jal         0x800375F8
    // 0x803A84B0: nop

    func_800375F8(rdram, ctx);
        goto after_2;
    // 0x803A84B0: nop

    after_2:
    // 0x803A84B4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x803A84B8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803A84BC: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x803A84C0: nop

    // 0x803A84C4: sb          $t7, -0x324A($at)
    MEM_B(-0X324A, ctx->r1) = ctx->r15;
    // 0x803A84C8: lb          $a0, 0x38($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X38);
    // 0x803A84CC: nop

    // 0x803A84D0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803A84D4: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x803A84D8: jal         0x80037AB8
    // 0x803A84DC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80037AB8(rdram, ctx);
        goto after_3;
    // 0x803A84DC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_3:
    // 0x803A84E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A84E4:
    // 0x803A84E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A84E8: jr          $ra
    // 0x803A84EC: nop

    return;
    // 0x803A84EC: nop

;}
RECOMP_FUNC void func_803A84F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A84F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A84F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A84F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A84FC: lb          $t6, 0x38($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X38);
    // 0x803A8500: nop

    // 0x803A8504: bne         $t6, $zero, L_803A8524
    if (ctx->r14 != 0) {
        // 0x803A8508: nop
    
            goto L_803A8524;
    }
    // 0x803A8508: nop

    // 0x803A850C: jal         0x800372F4
    // 0x803A8510: nop

    func_800372F4(rdram, ctx);
        goto after_0;
    // 0x803A8510: nop

    after_0:
    // 0x803A8514: jal         0x80037908
    // 0x803A8518: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_1;
    // 0x803A8518: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x803A851C: b           L_803A852C
    // 0x803A8520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A852C;
    // 0x803A8520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A8524:
    // 0x803A8524: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    // 0x803A8528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A852C:
    // 0x803A852C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A8530: jr          $ra
    // 0x803A8534: nop

    return;
    // 0x803A8534: nop

;}
RECOMP_FUNC void func_803A8538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8538: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A853C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A8540: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A8544: jal         0x80035734
    // 0x803A8548: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803A8548: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803A854C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A8550: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x803A8554: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803A8558: nop

    // 0x803A855C: bne         $v0, $zero, L_803A856C
    if (ctx->r2 != 0) {
        // 0x803A8560: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_803A856C;
    }
    // 0x803A8560: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x803A8564: b           L_803A8570
    // 0x803A8568: sb          $t6, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r14;
        goto L_803A8570;
    // 0x803A8568: sb          $t6, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r14;
L_803A856C:
    // 0x803A856C: sb          $t7, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r15;
L_803A8570:
    // 0x803A8570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A8574: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A8578: jr          $ra
    // 0x803A857C: nop

    return;
    // 0x803A857C: nop

;}
RECOMP_FUNC void func_803A8580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8580: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A8584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A8588: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A858C: jal         0x80035734
    // 0x803A8590: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803A8590: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803A8594: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A8598: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803A859C: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803A85A0: nop

    // 0x803A85A4: bne         $v0, $at, L_803A85B4
    if (ctx->r2 != ctx->r1) {
        // 0x803A85A8: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_803A85B4;
    }
    // 0x803A85A8: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x803A85AC: b           L_803A85B8
    // 0x803A85B0: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
        goto L_803A85B8;
    // 0x803A85B0: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
L_803A85B4:
    // 0x803A85B4: sb          $t6, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r14;
L_803A85B8:
    // 0x803A85B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A85BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A85C0: jr          $ra
    // 0x803A85C4: nop

    return;
    // 0x803A85C4: nop

;}
RECOMP_FUNC void func_803A85C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A85C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803A85CC: jr          $ra
    // 0x803A85D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803A85D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803A85D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A85D4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803A85D8: jr          $ra
    // 0x803A85DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803A85DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803A85E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A85E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803A85E4: jr          $ra
    // 0x803A85E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803A85E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803A85EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A85EC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803A85F0: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x803A85F4: lw          $t7, 0x1CF0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1CF0);
    // 0x803A85F8: lb          $t6, -0x324A($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X324A);
    // 0x803A85FC: jr          $ra
    // 0x803A8600: sb          $t6, 0x38($t7)
    MEM_B(0X38, ctx->r15) = ctx->r14;
    return;
    // 0x803A8600: sb          $t6, 0x38($t7)
    MEM_B(0X38, ctx->r15) = ctx->r14;
;}
RECOMP_FUNC void func_803A8604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8604: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A8608: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A860C: jal         0x803AF5A4
    // 0x803A8610: nop

    LOOKUP_FUNC(0x803AF5A4)(rdram, ctx);
        goto after_0;
    // 0x803A8610: nop

    after_0:
    // 0x803A8614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A8618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A861C: jr          $ra
    // 0x803A8620: nop

    return;
    // 0x803A8620: nop

;}
RECOMP_FUNC void func_803A8624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8624: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A8628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A862C: lui         $a1, 0x803E
    ctx->r5 = S32(0X803E << 16);
    // 0x803A8630: addiu       $a1, $a1, -0x5780
    ctx->r5 = ADD32(ctx->r5, -0X5780);
    // 0x803A8634: jal         0x8004C2C8
    // 0x803A8638: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004C2C8(rdram, ctx);
        goto after_0;
    // 0x803A8638: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803A863C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803A8640: lbu         $a0, -0x326B($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326B);
    // 0x803A8644: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    // 0x803A8648: jal         0x8004BA70
    // 0x803A864C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8004BA70(rdram, ctx);
        goto after_1;
    // 0x803A864C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_1:
    // 0x803A8650: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803A8654: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    // 0x803A8658: jal         0x8004BB64
    // 0x803A865C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8004BB64(rdram, ctx);
        goto after_2;
    // 0x803A865C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_2:
    // 0x803A8660: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803A8664: lb          $a0, -0x326B($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326B);
    // 0x803A8668: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x803A866C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x803A8670: jal         0x80039F88
    // 0x803A8674: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F88(rdram, ctx);
        goto after_3;
    // 0x803A8674: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x803A8678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A867C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A8680: jr          $ra
    // 0x803A8684: nop

    return;
    // 0x803A8684: nop

;}
RECOMP_FUNC void func_803A8688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8688: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803A868C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803A8690: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A8694: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803A8698: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803A869C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803A86A0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803A86A4: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x803A86A8: jal         0x800293DC
    // 0x803A86AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803A86AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x803A86B0: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x803A86B4: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x803A86B8: beq         $s0, $s2, L_803A8708
    if (ctx->r16 == ctx->r18) {
        // 0x803A86BC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803A8708;
    }
    // 0x803A86BC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803A86C0: lui         $s3, 0x803B
    ctx->r19 = S32(0X803B << 16);
    // 0x803A86C4: addiu       $s3, $s3, -0x3830
    ctx->r19 = ADD32(ctx->r19, -0X3830);
L_803A86C8:
    // 0x803A86C8: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x803A86CC: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x803A86D0: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803A86D4: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803A86D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A86DC: jal         0x8004CD24
    // 0x803A86E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803A86E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x803A86E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A86E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A86EC: jal         0x8002135C
    // 0x803A86F0: addiu       $a2, $zero, 0xC2
    ctx->r6 = ADD32(0, 0XC2);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803A86F0: addiu       $a2, $zero, 0xC2
    ctx->r6 = ADD32(0, 0XC2);
    after_2:
    // 0x803A86F4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803A86F8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803A86FC: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x803A8700: bne         $s0, $s2, L_803A86C8
    if (ctx->r16 != ctx->r18) {
        // 0x803A8704: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_803A86C8;
    }
    // 0x803A8704: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_803A8708:
    // 0x803A8708: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803A870C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803A8710: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803A8714: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803A8718: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803A871C: jr          $ra
    // 0x803A8720: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803A8720: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803A8724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8724: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A8728: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A872C: jal         0x8004BE44
    // 0x803A8730: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004BE44(rdram, ctx);
        goto after_0;
    // 0x803A8730: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803A8734: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803A8738: addiu       $t6, $t6, -0x78A4
    ctx->r14 = ADD32(ctx->r14, -0X78A4);
    // 0x803A873C: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803A8740: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x803A8744: jal         0x8004CD90
    // 0x803A8748: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    func_8004CD90(rdram, ctx);
        goto after_1;
    // 0x803A8748: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_1:
    // 0x803A874C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A8750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A8754: jr          $ra
    // 0x803A8758: nop

    return;
    // 0x803A8758: nop

;}
RECOMP_FUNC void func_803A875C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A875C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803A8760: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803A8764: lb          $t6, 0x38($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X38);
    // 0x803A8768: nop

    // 0x803A876C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803A8770: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803A8774: lw          $t8, -0x3808($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3808);
    // 0x803A8778: jr          $ra
    // 0x803A877C: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    return;
    // 0x803A877C: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
;}
RECOMP_FUNC void func_803A8780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8780: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803A8784: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x803A8788: lb          $v0, 0x69($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X69);
    // 0x803A878C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A8790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A8794: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A8798: bltz        $v0, L_803A87B8
    if (SIGNED(ctx->r2) < 0) {
        // 0x803A879C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_803A87B8;
    }
    // 0x803A879C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A87A0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803A87A4: sb          $t6, 0x44($v1)
    MEM_B(0X44, ctx->r3) = ctx->r14;
    // 0x803A87A8: jal         0x80037CEC
    // 0x803A87AC: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_80037CEC(rdram, ctx);
        goto after_0;
    // 0x803A87AC: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_0:
    // 0x803A87B0: b           L_803A8AD8
    // 0x803A87B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A8AD8;
    // 0x803A87B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A87B8:
    // 0x803A87B8: jal         0x80036234
    // 0x803A87BC: nop

    func_80036234(rdram, ctx);
        goto after_1;
    // 0x803A87BC: nop

    after_1:
    // 0x803A87C0: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803A87C4: jal         0x80035FF0
    // 0x803A87C8: addiu       $a0, $a0, 0x1AF4
    ctx->r4 = ADD32(ctx->r4, 0X1AF4);
    func_80035FF0(rdram, ctx);
        goto after_2;
    // 0x803A87C8: addiu       $a0, $a0, 0x1AF4
    ctx->r4 = ADD32(ctx->r4, 0X1AF4);
    after_2:
    // 0x803A87CC: jal         0x8001DCF0
    // 0x803A87D0: nop

    func_8001DCF0(rdram, ctx);
        goto after_3;
    // 0x803A87D0: nop

    after_3:
    // 0x803A87D4: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803A87D8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803A87DC: jal         0x80049E40
    // 0x803A87E0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_4;
    // 0x803A87E0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_4:
    // 0x803A87E4: jal         0x803A8FA0
    // 0x803A87E8: nop

    func_803A8FA0(rdram, ctx);
        goto after_5;
    // 0x803A87E8: nop

    after_5:
    // 0x803A87EC: jal         0x80036EB0
    // 0x803A87F0: nop

    func_80036EB0(rdram, ctx);
        goto after_6;
    // 0x803A87F0: nop

    after_6:
    // 0x803A87F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803A87F8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803A87FC: jal         0x80021214
    // 0x803A8800: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_7;
    // 0x803A8800: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x803A8804: jal         0x803A92A0
    // 0x803A8808: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803A92A0(rdram, ctx);
        goto after_8;
    // 0x803A8808: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x803A880C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803A8810: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x803A8814: jal         0x80021214
    // 0x803A8818: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80021214(rdram, ctx);
        goto after_9;
    // 0x803A8818: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x803A881C: jal         0x803A92A0
    // 0x803A8820: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803A92A0(rdram, ctx);
        goto after_10;
    // 0x803A8820: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x803A8824: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x803A8828: addiu       $t7, $t7, -0x6CE4
    ctx->r15 = ADD32(ctx->r15, -0X6CE4);
    // 0x803A882C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x803A8830: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A8834: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803A8838: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    // 0x803A883C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803A8840: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803A8844: lw          $a3, 0x8($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X8);
    // 0x803A8848: jal         0x8004B078
    // 0x803A884C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_11;
    // 0x803A884C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_11:
    // 0x803A8850: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x803A8854: addiu       $t0, $t0, -0x6CCC
    ctx->r8 = ADD32(ctx->r8, -0X6CCC);
    // 0x803A8858: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x803A885C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A8860: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803A8864: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x803A8868: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803A886C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803A8870: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x803A8874: jal         0x8004B078
    // 0x803A8878: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_12;
    // 0x803A8878: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_12:
    // 0x803A887C: jal         0x8006F820
    // 0x803A8880: nop

    func_8006F820(rdram, ctx);
        goto after_13;
    // 0x803A8880: nop

    after_13:
    // 0x803A8884: jal         0x803A9438
    // 0x803A8888: nop

    func_803A9438(rdram, ctx);
        goto after_14;
    // 0x803A8888: nop

    after_14:
    // 0x803A888C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803A8890: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x803A8894: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x803A8898: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A889C: beq         $v0, $at, L_803A88BC
    if (ctx->r2 == ctx->r1) {
        // 0x803A88A0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803A88BC;
    }
    // 0x803A88A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803A88A4: beq         $v0, $at, L_803A89B8
    if (ctx->r2 == ctx->r1) {
        // 0x803A88A8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_803A89B8;
    }
    // 0x803A88A8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803A88AC: beq         $v0, $at, L_803A88EC
    if (ctx->r2 == ctx->r1) {
        // 0x803A88B0: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_803A88EC;
    }
    // 0x803A88B0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x803A88B4: beq         $v0, $at, L_803A8A60
    if (ctx->r2 == ctx->r1) {
        // 0x803A88B8: nop
    
            goto L_803A8A60;
    }
    // 0x803A88B8: nop

L_803A88BC:
    // 0x803A88BC: lbu         $t3, 0x3E($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X3E);
    // 0x803A88C0: nop

    // 0x803A88C4: bne         $t3, $zero, L_803A88DC
    if (ctx->r11 != 0) {
        // 0x803A88C8: nop
    
            goto L_803A88DC;
    }
    // 0x803A88C8: nop

    // 0x803A88CC: jal         0x803A9150
    // 0x803A88D0: nop

    func_803A9150(rdram, ctx);
        goto after_15;
    // 0x803A88D0: nop

    after_15:
    // 0x803A88D4: b           L_803A8A8C
    // 0x803A88D8: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
        goto L_803A8A8C;
    // 0x803A88D8: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
L_803A88DC:
    // 0x803A88DC: jal         0x803A91A4
    // 0x803A88E0: nop

    func_803A91A4(rdram, ctx);
        goto after_16;
    // 0x803A88E0: nop

    after_16:
    // 0x803A88E4: b           L_803A8A8C
    // 0x803A88E8: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
        goto L_803A8A8C;
    // 0x803A88E8: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
L_803A88EC:
    // 0x803A88EC: lb          $t4, 0xF($v1)
    ctx->r12 = MEM_B(ctx->r3, 0XF);
    // 0x803A88F0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803A88F4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803A88F8: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x803A88FC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803A8900: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803A8904: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x803A8908: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x803A890C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803A8910: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803A8914: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803A8918: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x803A891C: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x803A8920: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x803A8924: lb          $a0, -0x2F7F($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X2F7F);
    // 0x803A8928: jal         0x80049A4C
    // 0x803A892C: nop

    func_80049A4C(rdram, ctx);
        goto after_17;
    // 0x803A892C: nop

    after_17:
    // 0x803A8930: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803A8934: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x803A8938: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803A893C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x803A8940: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x803A8944: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803A8948: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x803A894C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x803A8950: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x803A8954: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803A8958: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x803A895C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803A8960: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x803A8964: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x803A8968: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x803A896C: lb          $a0, -0x2F7F($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X2F7F);
    // 0x803A8970: jal         0x80049A4C
    // 0x803A8974: nop

    func_80049A4C(rdram, ctx);
        goto after_18;
    // 0x803A8974: nop

    after_18:
    // 0x803A8978: bne         $v0, $zero, L_803A89B4
    if (ctx->r2 != 0) {
        // 0x803A897C: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_803A89B4;
    }
    // 0x803A897C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803A8980: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803A8984: lbu         $t7, -0x3272($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3272);
    // 0x803A8988: nop

    // 0x803A898C: bne         $t7, $zero, L_803A89A4
    if (ctx->r15 != 0) {
        // 0x803A8990: nop
    
            goto L_803A89A4;
    }
    // 0x803A8990: nop

    // 0x803A8994: jal         0x803A9150
    // 0x803A8998: nop

    func_803A9150(rdram, ctx);
        goto after_19;
    // 0x803A8998: nop

    after_19:
    // 0x803A899C: b           L_803A8A8C
    // 0x803A89A0: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
        goto L_803A8A8C;
    // 0x803A89A0: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
L_803A89A4:
    // 0x803A89A4: jal         0x803A91A4
    // 0x803A89A8: nop

    func_803A91A4(rdram, ctx);
        goto after_20;
    // 0x803A89A8: nop

    after_20:
    // 0x803A89AC: b           L_803A8A8C
    // 0x803A89B0: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
        goto L_803A8A8C;
    // 0x803A89B0: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
L_803A89B4:
    // 0x803A89B4: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
L_803A89B8:
    // 0x803A89B8: lb          $t9, 0xF($v1)
    ctx->r25 = MEM_B(ctx->r3, 0XF);
    // 0x803A89BC: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x803A89C0: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x803A89C4: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x803A89C8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803A89CC: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x803A89D0: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x803A89D4: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x803A89D8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803A89DC: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x803A89E0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803A89E4: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x803A89E8: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x803A89EC: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x803A89F0: lb          $t0, -0x2F7F($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X2F7F);
    // 0x803A89F4: nop

    // 0x803A89F8: bne         $t0, $zero, L_803A8A30
    if (ctx->r8 != 0) {
        // 0x803A89FC: nop
    
            goto L_803A8A30;
    }
    // 0x803A89FC: nop

    // 0x803A8A00: lbu         $t2, 0x3E($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X3E);
    // 0x803A8A04: nop

    // 0x803A8A08: bne         $t2, $zero, L_803A8A20
    if (ctx->r10 != 0) {
        // 0x803A8A0C: nop
    
            goto L_803A8A20;
    }
    // 0x803A8A0C: nop

    // 0x803A8A10: jal         0x803A9150
    // 0x803A8A14: nop

    func_803A9150(rdram, ctx);
        goto after_21;
    // 0x803A8A14: nop

    after_21:
    // 0x803A8A18: b           L_803A8A8C
    // 0x803A8A1C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
        goto L_803A8A8C;
    // 0x803A8A1C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
L_803A8A20:
    // 0x803A8A20: jal         0x803A91A4
    // 0x803A8A24: nop

    func_803A91A4(rdram, ctx);
        goto after_22;
    // 0x803A8A24: nop

    after_22:
    // 0x803A8A28: b           L_803A8A8C
    // 0x803A8A2C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
        goto L_803A8A8C;
    // 0x803A8A2C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
L_803A8A30:
    // 0x803A8A30: lbu         $t3, 0x3E($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X3E);
    // 0x803A8A34: nop

    // 0x803A8A38: bne         $t3, $zero, L_803A8A50
    if (ctx->r11 != 0) {
        // 0x803A8A3C: nop
    
            goto L_803A8A50;
    }
    // 0x803A8A3C: nop

    // 0x803A8A40: jal         0x803A91F8
    // 0x803A8A44: nop

    func_803A91F8(rdram, ctx);
        goto after_23;
    // 0x803A8A44: nop

    after_23:
    // 0x803A8A48: b           L_803A8A8C
    // 0x803A8A4C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
        goto L_803A8A8C;
    // 0x803A8A4C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
L_803A8A50:
    // 0x803A8A50: jal         0x803A91A4
    // 0x803A8A54: nop

    func_803A91A4(rdram, ctx);
        goto after_24;
    // 0x803A8A54: nop

    after_24:
    // 0x803A8A58: b           L_803A8A8C
    // 0x803A8A5C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
        goto L_803A8A8C;
    // 0x803A8A5C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
L_803A8A60:
    // 0x803A8A60: lbu         $t4, 0x3E($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X3E);
    // 0x803A8A64: nop

    // 0x803A8A68: bne         $t4, $zero, L_803A8A80
    if (ctx->r12 != 0) {
        // 0x803A8A6C: nop
    
            goto L_803A8A80;
    }
    // 0x803A8A6C: nop

    // 0x803A8A70: jal         0x803A924C
    // 0x803A8A74: nop

    func_803A924C(rdram, ctx);
        goto after_25;
    // 0x803A8A74: nop

    after_25:
    // 0x803A8A78: b           L_803A8A8C
    // 0x803A8A7C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
        goto L_803A8A8C;
    // 0x803A8A7C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
L_803A8A80:
    // 0x803A8A80: jal         0x803A91A4
    // 0x803A8A84: nop

    func_803A91A4(rdram, ctx);
        goto after_26;
    // 0x803A8A84: nop

    after_26:
    // 0x803A8A88: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
L_803A8A8C:
    // 0x803A8A8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A8A90: lb          $t6, 0x48($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X48);
    // 0x803A8A94: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803A8A98: bne         $t6, $at, L_803A8AB4
    if (ctx->r14 != ctx->r1) {
        // 0x803A8A9C: nop
    
            goto L_803A8AB4;
    }
    // 0x803A8A9C: nop

    // 0x803A8AA0: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803A8AA4: jal         0x803A9A38
    // 0x803A8AA8: addiu       $a0, $a0, 0x2810
    ctx->r4 = ADD32(ctx->r4, 0X2810);
    func_803A9A38(rdram, ctx);
        goto after_27;
    // 0x803A8AA8: addiu       $a0, $a0, 0x2810
    ctx->r4 = ADD32(ctx->r4, 0X2810);
    after_27:
    // 0x803A8AAC: b           L_803A8ABC
    // 0x803A8AB0: nop

        goto L_803A8ABC;
    // 0x803A8AB0: nop

L_803A8AB4:
    // 0x803A8AB4: jal         0x803A9A38
    // 0x803A8AB8: addiu       $a0, $a0, 0x2828
    ctx->r4 = ADD32(ctx->r4, 0X2828);
    func_803A9A38(rdram, ctx);
        goto after_28;
    // 0x803A8AB8: addiu       $a0, $a0, 0x2828
    ctx->r4 = ADD32(ctx->r4, 0X2828);
    after_28:
L_803A8ABC:
    // 0x803A8ABC: jal         0x80039DB4
    // 0x803A8AC0: nop

    func_80039DB4(rdram, ctx);
        goto after_29;
    // 0x803A8AC0: nop

    after_29:
    // 0x803A8AC4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A8AC8: addiu       $a0, $a0, -0x751C
    ctx->r4 = ADD32(ctx->r4, -0X751C);
    // 0x803A8ACC: jal         0x8002989C
    // 0x803A8AD0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002989C(rdram, ctx);
        goto after_30;
    // 0x803A8AD0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_30:
    // 0x803A8AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A8AD8:
    // 0x803A8AD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A8ADC: jr          $ra
    // 0x803A8AE0: nop

    return;
    // 0x803A8AE0: nop

;}
RECOMP_FUNC void func_803A8AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8AE4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803A8AE8: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803A8AEC: lbu         $t6, 0xC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XC);
    // 0x803A8AF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A8AF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A8AF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A8AFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A8B00: bne         $t6, $at, L_803A8B20
    if (ctx->r14 != ctx->r1) {
        // 0x803A8B04: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_803A8B20;
    }
    // 0x803A8B04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A8B08: lbu         $t7, 0x3E($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3E);
    // 0x803A8B0C: nop

    // 0x803A8B10: bne         $t7, $zero, L_803A8B20
    if (ctx->r15 != 0) {
        // 0x803A8B14: nop
    
            goto L_803A8B20;
    }
    // 0x803A8B14: nop

    // 0x803A8B18: jal         0x80035A04
    // 0x803A8B1C: nop

    func_80035A04(rdram, ctx);
        goto after_0;
    // 0x803A8B1C: nop

    after_0:
L_803A8B20:
    // 0x803A8B20: jal         0x803A96F4
    // 0x803A8B24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803A96F4(rdram, ctx);
        goto after_1;
    // 0x803A8B24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x803A8B28: jal         0x803A96F4
    // 0x803A8B2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803A96F4(rdram, ctx);
        goto after_2;
    // 0x803A8B2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x803A8B30: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A8B34: addiu       $a0, $a0, -0x74B0
    ctx->r4 = ADD32(ctx->r4, -0X74B0);
    // 0x803A8B38: jal         0x8004AE38
    // 0x803A8B3C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_3;
    // 0x803A8B3C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
    // 0x803A8B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A8B44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A8B48: jr          $ra
    // 0x803A8B4C: nop

    return;
    // 0x803A8B4C: nop

;}
RECOMP_FUNC void func_803A8B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8B50: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803A8B54: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803A8B58: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x803A8B5C: addiu       $s1, $s1, -0x32B0
    ctx->r17 = ADD32(ctx->r17, -0X32B0);
    // 0x803A8B60: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x803A8B64: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x803A8B68: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803A8B6C: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x803A8B70: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x803A8B74: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x803A8B78: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803A8B7C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803A8B80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803A8B84: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x803A8B88: lui         $fp, 0x803B
    ctx->r30 = S32(0X803B << 16);
    // 0x803A8B8C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x803A8B90: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x803A8B94: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x803A8B98: sb          $s4, 0x6A($s1)
    MEM_B(0X6A, ctx->r17) = ctx->r20;
    // 0x803A8B9C: sb          $zero, 0x44($s1)
    MEM_B(0X44, ctx->r17) = 0;
    // 0x803A8BA0: addiu       $fp, $fp, -0x33E0
    ctx->r30 = ADD32(ctx->r30, -0X33E0);
    // 0x803A8BA4: addiu       $s5, $s5, -0x3770
    ctx->r21 = ADD32(ctx->r21, -0X3770);
    // 0x803A8BA8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803A8BAC: addiu       $s6, $zero, 0x18
    ctx->r22 = ADD32(0, 0X18);
    // 0x803A8BB0: lui         $s7, 0x3
    ctx->r23 = S32(0X3 << 16);
L_803A8BB4:
    // 0x803A8BB4: lb          $t6, 0x44($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X44);
    // 0x803A8BB8: nop

    // 0x803A8BBC: multu       $t6, $s6
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803A8BC0: mflo        $t7
    ctx->r15 = lo;
    // 0x803A8BC4: addu        $t8, $s5, $t7
    ctx->r24 = ADD32(ctx->r21, ctx->r15);
    // 0x803A8BC8: addu        $t9, $t8, $s7
    ctx->r25 = ADD32(ctx->r24, ctx->r23);
    // 0x803A8BCC: lhu         $a0, 0x6F8($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X6F8);
    // 0x803A8BD0: jal         0x80035B2C
    // 0x803A8BD4: nop

    func_80035B2C(rdram, ctx);
        goto after_0;
    // 0x803A8BD4: nop

    after_0:
    // 0x803A8BD8: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x803A8BDC: addu        $t1, $fp, $t0
    ctx->r9 = ADD32(ctx->r30, ctx->r8);
    // 0x803A8BE0: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x803A8BE4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x803A8BE8: jalr        $t9
    // 0x803A8BEC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x803A8BEC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x803A8BF0: lb          $t2, 0x2C($s2)
    ctx->r10 = MEM_B(ctx->r18, 0X2C);
    // 0x803A8BF4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803A8BF8: bne         $t2, $at, L_803A8C24
    if (ctx->r10 != ctx->r1) {
        // 0x803A8BFC: nop
    
            goto L_803A8C24;
    }
    // 0x803A8BFC: nop

    // 0x803A8C00: bne         $s0, $zero, L_803A8C24
    if (ctx->r16 != 0) {
        // 0x803A8C04: lui         $t3, 0x8010
        ctx->r11 = S32(0X8010 << 16);
            goto L_803A8C24;
    }
    // 0x803A8C04: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x803A8C08: lhu         $t3, 0x523C($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X523C);
    // 0x803A8C0C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x803A8C10: andi        $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 & 0X4000;
    // 0x803A8C14: beq         $t4, $zero, L_803A8C24
    if (ctx->r12 == 0) {
        // 0x803A8C18: nop
    
            goto L_803A8C24;
    }
    // 0x803A8C18: nop

    // 0x803A8C1C: jal         0x803A8D30
    // 0x803A8C20: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_803A8D30(rdram, ctx);
        goto after_2;
    // 0x803A8C20: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
L_803A8C24:
    // 0x803A8C24: lb          $t5, 0x44($s1)
    ctx->r13 = MEM_B(ctx->r17, 0X44);
    // 0x803A8C28: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803A8C2C: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x803A8C30: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x803A8C34: subu        $t6, $s4, $t5
    ctx->r14 = SUB32(ctx->r20, ctx->r13);
    // 0x803A8C38: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x803A8C3C: bne         $at, $zero, L_803A8BB4
    if (ctx->r1 != 0) {
        // 0x803A8C40: sb          $t6, 0x44($s1)
        MEM_B(0X44, ctx->r17) = ctx->r14;
            goto L_803A8BB4;
    }
    // 0x803A8C40: sb          $t6, 0x44($s1)
    MEM_B(0X44, ctx->r17) = ctx->r14;
    // 0x803A8C44: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x803A8C48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803A8C4C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803A8C50: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803A8C54: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803A8C58: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803A8C5C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x803A8C60: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x803A8C64: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x803A8C68: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x803A8C6C: jr          $ra
    // 0x803A8C70: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803A8C70: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803A8C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8C74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A8C78: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803A8C7C: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x803A8C80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A8C84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A8C88: lbu         $a1, 0x44($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X44);
    // 0x803A8C8C: jal         0x803A9A88
    // 0x803A8C90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_803A9A88(rdram, ctx);
        goto after_0;
    // 0x803A8C90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803A8C94: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803A8C98: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803A8C9C: bne         $v0, $zero, L_803A8D20
    if (ctx->r2 != 0) {
        // 0x803A8CA0: addiu       $v1, $v1, -0x32B0
        ctx->r3 = ADD32(ctx->r3, -0X32B0);
            goto L_803A8D20;
    }
    // 0x803A8CA0: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x803A8CA4: lh          $t6, 0x3C($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X3C);
    // 0x803A8CA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803A8CAC: sb          $t6, 0x66($v1)
    MEM_B(0X66, ctx->r3) = ctx->r14;
    // 0x803A8CB0: lh          $t7, 0x3E($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X3E);
    // 0x803A8CB4: nop

    // 0x803A8CB8: sb          $t7, 0x67($v1)
    MEM_B(0X67, ctx->r3) = ctx->r15;
    // 0x803A8CBC: lh          $t8, 0x3C($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X3C);
    // 0x803A8CC0: nop

    // 0x803A8CC4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x803A8CC8: sb          $t9, 0x68($v1)
    MEM_B(0X68, ctx->r3) = ctx->r25;
    // 0x803A8CCC: lh          $t0, 0x3E($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X3E);
    // 0x803A8CD0: lb          $t2, 0x68($v1)
    ctx->r10 = MEM_B(ctx->r3, 0X68);
    // 0x803A8CD4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x803A8CD8: bne         $v0, $t2, L_803A8CE8
    if (ctx->r2 != ctx->r10) {
        // 0x803A8CDC: sb          $t1, 0x69($v1)
        MEM_B(0X69, ctx->r3) = ctx->r9;
            goto L_803A8CE8;
    }
    // 0x803A8CDC: sb          $t1, 0x69($v1)
    MEM_B(0X69, ctx->r3) = ctx->r9;
    // 0x803A8CE0: b           L_803A8CEC
    // 0x803A8CE4: sb          $v0, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r2;
        goto L_803A8CEC;
    // 0x803A8CE4: sb          $v0, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r2;
L_803A8CE8:
    // 0x803A8CE8: sb          $zero, 0x64($v1)
    MEM_B(0X64, ctx->r3) = 0;
L_803A8CEC:
    // 0x803A8CEC: lb          $t3, 0x69($v1)
    ctx->r11 = MEM_B(ctx->r3, 0X69);
    // 0x803A8CF0: nop

    // 0x803A8CF4: bne         $v0, $t3, L_803A8D04
    if (ctx->r2 != ctx->r11) {
        // 0x803A8CF8: nop
    
            goto L_803A8D04;
    }
    // 0x803A8CF8: nop

    // 0x803A8CFC: b           L_803A8D08
    // 0x803A8D00: sb          $v0, 0x65($v1)
    MEM_B(0X65, ctx->r3) = ctx->r2;
        goto L_803A8D08;
    // 0x803A8D00: sb          $v0, 0x65($v1)
    MEM_B(0X65, ctx->r3) = ctx->r2;
L_803A8D04:
    // 0x803A8D04: sb          $zero, 0x65($v1)
    MEM_B(0X65, ctx->r3) = 0;
L_803A8D08:
    // 0x803A8D08: lh          $a0, 0x3C($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X3C);
    // 0x803A8D0C: nop

    // 0x803A8D10: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803A8D14: andi        $t4, $a0, 0xFF
    ctx->r12 = ctx->r4 & 0XFF;
    // 0x803A8D18: jal         0x80037AB8
    // 0x803A8D1C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_80037AB8(rdram, ctx);
        goto after_1;
    // 0x803A8D1C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_1:
L_803A8D20:
    // 0x803A8D20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A8D24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A8D28: jr          $ra
    // 0x803A8D2C: nop

    return;
    // 0x803A8D2C: nop

;}
RECOMP_FUNC void func_803A8D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8D30: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803A8D34: lb          $v0, -0x326C($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X326C);
    // 0x803A8D38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A8D3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A8D40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A8D44: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x803A8D48: lbu         $t6, 0x40($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X40);
    // 0x803A8D4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A8D50: bne         $a1, $t6, L_803A8D60
    if (ctx->r5 != ctx->r14) {
        // 0x803A8D54: sll         $t7, $v0, 1
        ctx->r15 = S32(ctx->r2 << 1);
            goto L_803A8D60;
    }
    // 0x803A8D54: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x803A8D58: b           L_803A8DAC
    // 0x803A8D5C: sb          $zero, 0x40($v1)
    MEM_B(0X40, ctx->r3) = 0;
        goto L_803A8DAC;
    // 0x803A8D5C: sb          $zero, 0x40($v1)
    MEM_B(0X40, ctx->r3) = 0;
L_803A8D60:
    // 0x803A8D60: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x803A8D64: lh          $t8, 0x3C($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X3C);
    // 0x803A8D68: nop

    // 0x803A8D6C: bne         $t8, $zero, L_803A8DA8
    if (ctx->r24 != 0) {
        // 0x803A8D70: nop
    
            goto L_803A8DA8;
    }
    // 0x803A8D70: nop

    // 0x803A8D74: lb          $t9, 0x48($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X48);
    // 0x803A8D78: nop

    // 0x803A8D7C: bne         $a1, $t9, L_803A8DB0
    if (ctx->r5 != ctx->r25) {
        // 0x803A8D80: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803A8DB0;
    }
    // 0x803A8D80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A8D84: jal         0x800372F4
    // 0x803A8D88: nop

    func_800372F4(rdram, ctx);
        goto after_0;
    // 0x803A8D88: nop

    after_0:
    // 0x803A8D8C: jal         0x80039280
    // 0x803A8D90: nop

    func_80039280(rdram, ctx);
        goto after_1;
    // 0x803A8D90: nop

    after_1:
    // 0x803A8D94: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A8D98: jal         0x800296E0
    // 0x803A8D9C: addiu       $a0, $a0, -0x7244
    ctx->r4 = ADD32(ctx->r4, -0X7244);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x803A8D9C: addiu       $a0, $a0, -0x7244
    ctx->r4 = ADD32(ctx->r4, -0X7244);
    after_2:
    // 0x803A8DA0: b           L_803A8DB0
    // 0x803A8DA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A8DB0;
    // 0x803A8DA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A8DA8:
    // 0x803A8DA8: sh          $zero, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = 0;
L_803A8DAC:
    // 0x803A8DAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A8DB0:
    // 0x803A8DB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A8DB4: jr          $ra
    // 0x803A8DB8: nop

    return;
    // 0x803A8DB8: nop

;}
RECOMP_FUNC void func_803A8DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8DBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A8DC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A8DC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A8DC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A8DCC: jal         0x80037AB8
    // 0x803A8DD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037AB8(rdram, ctx);
        goto after_0;
    // 0x803A8DD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803A8DD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A8DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A8DDC: jr          $ra
    // 0x803A8DE0: nop

    return;
    // 0x803A8DE0: nop

;}
RECOMP_FUNC void func_803A8DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8DE4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803A8DE8: lb          $v0, -0x326C($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X326C);
    // 0x803A8DEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A8DF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A8DF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A8DF8: addu        $t6, $a0, $v0
    ctx->r14 = ADD32(ctx->r4, ctx->r2);
    // 0x803A8DFC: lbu         $t7, 0x40($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X40);
    // 0x803A8E00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A8E04: beq         $t7, $at, L_803A8E40
    if (ctx->r15 == ctx->r1) {
        // 0x803A8E08: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_803A8E40;
    }
    // 0x803A8E08: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803A8E0C: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x803A8E10: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x803A8E14: lb          $a0, 0x3D($t9)
    ctx->r4 = MEM_B(ctx->r25, 0X3D);
    // 0x803A8E18: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A8E1C: addiu       $a1, $a1, -0x2790
    ctx->r5 = ADD32(ctx->r5, -0X2790);
    // 0x803A8E20: jal         0x8004BF30
    // 0x803A8E24: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004BF30(rdram, ctx);
        goto after_0;
    // 0x803A8E24: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803A8E28: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803A8E2C: lb          $t0, -0x326C($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X326C);
    // 0x803A8E30: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803A8E34: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x803A8E38: addu        $t2, $a2, $t1
    ctx->r10 = ADD32(ctx->r6, ctx->r9);
    // 0x803A8E3C: sh          $v0, 0x3C($t2)
    MEM_H(0X3C, ctx->r10) = ctx->r2;
L_803A8E40:
    // 0x803A8E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A8E44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A8E48: jr          $ra
    // 0x803A8E4C: nop

    return;
    // 0x803A8E4C: nop

;}
RECOMP_FUNC void func_803A8E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8E50: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803A8E54: lb          $v0, -0x326C($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X326C);
    // 0x803A8E58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A8E5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A8E60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A8E64: addu        $t6, $a0, $v0
    ctx->r14 = ADD32(ctx->r4, ctx->r2);
    // 0x803A8E68: lbu         $t7, 0x40($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X40);
    // 0x803A8E6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A8E70: beq         $t7, $at, L_803A8EAC
    if (ctx->r15 == ctx->r1) {
        // 0x803A8E74: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_803A8EAC;
    }
    // 0x803A8E74: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803A8E78: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x803A8E7C: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x803A8E80: lb          $a0, 0x3D($t9)
    ctx->r4 = MEM_B(ctx->r25, 0X3D);
    // 0x803A8E84: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A8E88: addiu       $a1, $a1, -0x2790
    ctx->r5 = ADD32(ctx->r5, -0X2790);
    // 0x803A8E8C: jal         0x8004BFBC
    // 0x803A8E90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004BFBC(rdram, ctx);
        goto after_0;
    // 0x803A8E90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803A8E94: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803A8E98: lb          $t0, -0x326C($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X326C);
    // 0x803A8E9C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803A8EA0: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x803A8EA4: addu        $t2, $a2, $t1
    ctx->r10 = ADD32(ctx->r6, ctx->r9);
    // 0x803A8EA8: sh          $v0, 0x3C($t2)
    MEM_H(0X3C, ctx->r10) = ctx->r2;
L_803A8EAC:
    // 0x803A8EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A8EB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A8EB4: jr          $ra
    // 0x803A8EB8: nop

    return;
    // 0x803A8EB8: nop

;}
RECOMP_FUNC void func_803A8EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8EBC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803A8EC0: lb          $v0, -0x326C($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X326C);
    // 0x803A8EC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A8EC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A8ECC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A8ED0: addu        $t6, $a0, $v0
    ctx->r14 = ADD32(ctx->r4, ctx->r2);
    // 0x803A8ED4: lbu         $t7, 0x40($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X40);
    // 0x803A8ED8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A8EDC: beq         $t7, $at, L_803A8F18
    if (ctx->r15 == ctx->r1) {
        // 0x803A8EE0: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_803A8F18;
    }
    // 0x803A8EE0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803A8EE4: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x803A8EE8: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x803A8EEC: lb          $a0, 0x3D($t9)
    ctx->r4 = MEM_B(ctx->r25, 0X3D);
    // 0x803A8EF0: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A8EF4: addiu       $a1, $a1, -0x2790
    ctx->r5 = ADD32(ctx->r5, -0X2790);
    // 0x803A8EF8: jal         0x8004C0D4
    // 0x803A8EFC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004C0D4(rdram, ctx);
        goto after_0;
    // 0x803A8EFC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803A8F00: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803A8F04: lb          $t0, -0x326C($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X326C);
    // 0x803A8F08: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803A8F0C: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x803A8F10: addu        $t2, $a2, $t1
    ctx->r10 = ADD32(ctx->r6, ctx->r9);
    // 0x803A8F14: sh          $v0, 0x3C($t2)
    MEM_H(0X3C, ctx->r10) = ctx->r2;
L_803A8F18:
    // 0x803A8F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A8F1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A8F20: jr          $ra
    // 0x803A8F24: nop

    return;
    // 0x803A8F24: nop

;}
RECOMP_FUNC void func_803A8F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8F28: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803A8F2C: lb          $v0, -0x326C($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X326C);
    // 0x803A8F30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A8F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A8F38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A8F3C: addu        $t6, $a0, $v0
    ctx->r14 = ADD32(ctx->r4, ctx->r2);
    // 0x803A8F40: lbu         $t7, 0x40($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X40);
    // 0x803A8F44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A8F48: beq         $t7, $at, L_803A8F84
    if (ctx->r15 == ctx->r1) {
        // 0x803A8F4C: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_803A8F84;
    }
    // 0x803A8F4C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803A8F50: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x803A8F54: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x803A8F58: lb          $a0, 0x3D($t9)
    ctx->r4 = MEM_B(ctx->r25, 0X3D);
    // 0x803A8F5C: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A8F60: addiu       $a1, $a1, -0x2790
    ctx->r5 = ADD32(ctx->r5, -0X2790);
    // 0x803A8F64: jal         0x8004C048
    // 0x803A8F68: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004C048(rdram, ctx);
        goto after_0;
    // 0x803A8F68: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803A8F6C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803A8F70: lb          $t0, -0x326C($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X326C);
    // 0x803A8F74: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803A8F78: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x803A8F7C: addu        $t2, $a2, $t1
    ctx->r10 = ADD32(ctx->r6, ctx->r9);
    // 0x803A8F80: sh          $v0, 0x3C($t2)
    MEM_H(0X3C, ctx->r10) = ctx->r2;
L_803A8F84:
    // 0x803A8F84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A8F88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A8F8C: jr          $ra
    // 0x803A8F90: nop

    return;
    // 0x803A8F90: nop

;}
RECOMP_FUNC void func_803A8F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8F94: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803A8F98: jr          $ra
    // 0x803A8F9C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803A8F9C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803A8FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8FA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A8FA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A8FA8: jal         0x8004DF70
    // 0x803A8FAC: nop

    func_8004DF70(rdram, ctx);
        goto after_0;
    // 0x803A8FAC: nop

    after_0:
    // 0x803A8FB0: beq         $v0, $zero, L_803A8FD4
    if (ctx->r2 == 0) {
        // 0x803A8FB4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803A8FD4;
    }
    // 0x803A8FB4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803A8FB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803A8FBC: beq         $v0, $a2, L_803A8FD8
    if (ctx->r2 == ctx->r6) {
        // 0x803A8FC0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_803A8FD8;
    }
    // 0x803A8FC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x803A8FC4: beq         $v1, $v0, L_803A8FEC
    if (ctx->r3 == ctx->r2) {
        // 0x803A8FC8: lui         $v1, 0x801B
        ctx->r3 = S32(0X801B << 16);
            goto L_803A8FEC;
    }
    // 0x803A8FC8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803A8FCC: b           L_803A9000
    // 0x803A8FD0: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
        goto L_803A9000;
    // 0x803A8FD0: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
L_803A8FD4:
    // 0x803A8FD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_803A8FD8:
    // 0x803A8FD8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803A8FDC: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x803A8FE0: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x803A8FE4: b           L_803A9000
    // 0x803A8FE8: sb          $a2, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = ctx->r6;
        goto L_803A9000;
    // 0x803A8FE8: sb          $a2, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = ctx->r6;
L_803A8FEC:
    // 0x803A8FEC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803A8FF0: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x803A8FF4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x803A8FF8: nop

    // 0x803A8FFC: sb          $v0, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = ctx->r2;
L_803A9000:
    // 0x803A9000: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x803A9004: jal         0x8006F5B8
    // 0x803A9008: nop

    func_8006F5B8(rdram, ctx);
        goto after_1;
    // 0x803A9008: nop

    after_1:
    // 0x803A900C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803A9010: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x803A9014: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x803A9018: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803A901C: lb          $t8, 0x2E($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X2E);
    // 0x803A9020: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x803A9024: sb          $t8, 0x44($v0)
    MEM_B(0X44, ctx->r2) = ctx->r24;
    // 0x803A9028: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x803A902C: addiu       $a1, $a1, -0x32B0
    ctx->r5 = ADD32(ctx->r5, -0X32B0);
    // 0x803A9030: lb          $t9, 0x2E($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X2E);
    // 0x803A9034: nop

    // 0x803A9038: subu        $t0, $a2, $t9
    ctx->r8 = SUB32(ctx->r6, ctx->r25);
    // 0x803A903C: sb          $t0, 0x45($v0)
    MEM_B(0X45, ctx->r2) = ctx->r8;
    // 0x803A9040: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x803A9044: lb          $t1, 0x66($a1)
    ctx->r9 = MEM_B(ctx->r5, 0X66);
    // 0x803A9048: nop

    // 0x803A904C: sh          $t1, 0x3C($t2)
    MEM_H(0X3C, ctx->r10) = ctx->r9;
    // 0x803A9050: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x803A9054: lb          $t3, 0x67($a1)
    ctx->r11 = MEM_B(ctx->r5, 0X67);
    // 0x803A9058: nop

    // 0x803A905C: sh          $t3, 0x3E($t4)
    MEM_H(0X3E, ctx->r12) = ctx->r11;
    // 0x803A9060: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x803A9064: lb          $t5, 0x64($a1)
    ctx->r13 = MEM_B(ctx->r5, 0X64);
    // 0x803A9068: nop

    // 0x803A906C: sb          $t5, 0x40($t6)
    MEM_B(0X40, ctx->r14) = ctx->r13;
    // 0x803A9070: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x803A9074: lb          $t7, 0x65($a1)
    ctx->r15 = MEM_B(ctx->r5, 0X65);
    // 0x803A9078: nop

    // 0x803A907C: sb          $t7, 0x41($t8)
    MEM_B(0X41, ctx->r24) = ctx->r15;
    // 0x803A9080: lbu         $t9, 0x3E($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X3E);
    // 0x803A9084: nop

    // 0x803A9088: beq         $a2, $t9, L_803A90E4
    if (ctx->r6 == ctx->r25) {
        // 0x803A908C: nop
    
            goto L_803A90E4;
    }
    // 0x803A908C: nop

    // 0x803A9090: lb          $t0, 0xF($a1)
    ctx->r8 = MEM_B(ctx->r5, 0XF);
    // 0x803A9094: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803A9098: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803A909C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x803A90A0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803A90A4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803A90A8: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x803A90AC: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x803A90B0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803A90B4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803A90B8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803A90BC: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x803A90C0: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x803A90C4: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x803A90C8: lb          $a0, -0x2F7F($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X2F7F);
    // 0x803A90CC: jal         0x80049A4C
    // 0x803A90D0: nop

    func_80049A4C(rdram, ctx);
        goto after_2;
    // 0x803A90D0: nop

    after_2:
    // 0x803A90D4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803A90D8: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x803A90DC: bne         $v0, $zero, L_803A90F0
    if (ctx->r2 != 0) {
        // 0x803A90E0: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_803A90F0;
    }
    // 0x803A90E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_803A90E4:
    // 0x803A90E4: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x803A90E8: b           L_803A90FC
    // 0x803A90EC: sb          $zero, 0x48($t2)
    MEM_B(0X48, ctx->r10) = 0;
        goto L_803A90FC;
    // 0x803A90EC: sb          $zero, 0x48($t2)
    MEM_B(0X48, ctx->r10) = 0;
L_803A90F0:
    // 0x803A90F0: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x803A90F4: nop

    // 0x803A90F8: sb          $a2, 0x48($t3)
    MEM_B(0X48, ctx->r11) = ctx->r6;
L_803A90FC:
    // 0x803A90FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A9100: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A9104: jr          $ra
    // 0x803A9108: nop

    return;
    // 0x803A9108: nop

;}
RECOMP_FUNC void func_803A910C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A910C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A9110: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A9114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A9118: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A911C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A9120: addiu       $a0, $a0, -0x2790
    ctx->r4 = ADD32(ctx->r4, -0X2790);
    // 0x803A9124: jal         0x8004C19C
    // 0x803A9128: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004C19C(rdram, ctx);
        goto after_0;
    // 0x803A9128: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x803A912C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A9130: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A9134: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    // 0x803A9138: jal         0x8004C200
    // 0x803A913C: addiu       $a1, $a1, -0x2790
    ctx->r5 = ADD32(ctx->r5, -0X2790);
    func_8004C200(rdram, ctx);
        goto after_1;
    // 0x803A913C: addiu       $a1, $a1, -0x2790
    ctx->r5 = ADD32(ctx->r5, -0X2790);
    after_1:
    // 0x803A9140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A9144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A9148: jr          $ra
    // 0x803A914C: nop

    return;
    // 0x803A914C: nop

;}
RECOMP_FUNC void func_803A9150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A9150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A9154: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803A9158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A915C: addiu       $t6, $t6, -0x34BC
    ctx->r14 = ADD32(ctx->r14, -0X34BC);
    // 0x803A9160: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A9164: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A9168: sw          $t6, -0x2758($at)
    MEM_W(-0X2758, ctx->r1) = ctx->r14;
    // 0x803A916C: addiu       $a0, $a0, -0x3538
    ctx->r4 = ADD32(ctx->r4, -0X3538);
    // 0x803A9170: jal         0x803A910C
    // 0x803A9174: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_803A910C(rdram, ctx);
        goto after_0;
    // 0x803A9174: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x803A9178: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803A917C: jal         0x803A95F8
    // 0x803A9180: addiu       $a0, $a0, 0x2150
    ctx->r4 = ADD32(ctx->r4, 0X2150);
    func_803A95F8(rdram, ctx);
        goto after_1;
    // 0x803A9180: addiu       $a0, $a0, 0x2150
    ctx->r4 = ADD32(ctx->r4, 0X2150);
    after_1:
    // 0x803A9184: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A9188: addiu       $a1, $a1, -0x3638
    ctx->r5 = ADD32(ctx->r5, -0X3638);
    // 0x803A918C: jal         0x803A964C
    // 0x803A9190: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_803A964C(rdram, ctx);
        goto after_2;
    // 0x803A9190: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x803A9194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A9198: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A919C: jr          $ra
    // 0x803A91A0: nop

    return;
    // 0x803A91A0: nop

;}
RECOMP_FUNC void func_803A91A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A91A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A91A8: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803A91AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A91B0: addiu       $t6, $t6, -0x34BC
    ctx->r14 = ADD32(ctx->r14, -0X34BC);
    // 0x803A91B4: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A91B8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A91BC: sw          $t6, -0x2758($at)
    MEM_W(-0X2758, ctx->r1) = ctx->r14;
    // 0x803A91C0: addiu       $a0, $a0, -0x3538
    ctx->r4 = ADD32(ctx->r4, -0X3538);
    // 0x803A91C4: jal         0x803A910C
    // 0x803A91C8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_803A910C(rdram, ctx);
        goto after_0;
    // 0x803A91C8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x803A91CC: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803A91D0: jal         0x803A95F8
    // 0x803A91D4: addiu       $a0, $a0, 0x2150
    ctx->r4 = ADD32(ctx->r4, 0X2150);
    func_803A95F8(rdram, ctx);
        goto after_1;
    // 0x803A91D4: addiu       $a0, $a0, 0x2150
    ctx->r4 = ADD32(ctx->r4, 0X2150);
    after_1:
    // 0x803A91D8: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A91DC: addiu       $a1, $a1, -0x35F8
    ctx->r5 = ADD32(ctx->r5, -0X35F8);
    // 0x803A91E0: jal         0x803A964C
    // 0x803A91E4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_803A964C(rdram, ctx);
        goto after_2;
    // 0x803A91E4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x803A91E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A91EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A91F0: jr          $ra
    // 0x803A91F4: nop

    return;
    // 0x803A91F4: nop

;}
RECOMP_FUNC void func_803A91F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A91F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A91FC: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803A9200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A9204: addiu       $t6, $t6, -0x349C
    ctx->r14 = ADD32(ctx->r14, -0X349C);
    // 0x803A9208: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A920C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A9210: sw          $t6, -0x2758($at)
    MEM_W(-0X2758, ctx->r1) = ctx->r14;
    // 0x803A9214: addiu       $a0, $a0, -0x3510
    ctx->r4 = ADD32(ctx->r4, -0X3510);
    // 0x803A9218: jal         0x803A910C
    // 0x803A921C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_803A910C(rdram, ctx);
        goto after_0;
    // 0x803A921C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x803A9220: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803A9224: jal         0x803A95F8
    // 0x803A9228: addiu       $a0, $a0, 0x21B0
    ctx->r4 = ADD32(ctx->r4, 0X21B0);
    func_803A95F8(rdram, ctx);
        goto after_1;
    // 0x803A9228: addiu       $a0, $a0, 0x21B0
    ctx->r4 = ADD32(ctx->r4, 0X21B0);
    after_1:
    // 0x803A922C: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A9230: addiu       $a1, $a1, -0x35B8
    ctx->r5 = ADD32(ctx->r5, -0X35B8);
    // 0x803A9234: jal         0x803A964C
    // 0x803A9238: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_803A964C(rdram, ctx);
        goto after_2;
    // 0x803A9238: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_2:
    // 0x803A923C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A9240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A9244: jr          $ra
    // 0x803A9248: nop

    return;
    // 0x803A9248: nop

;}
RECOMP_FUNC void func_803A924C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A924C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A9250: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803A9254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A9258: addiu       $t6, $t6, -0x3478
    ctx->r14 = ADD32(ctx->r14, -0X3478);
    // 0x803A925C: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A9260: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A9264: sw          $t6, -0x2758($at)
    MEM_W(-0X2758, ctx->r1) = ctx->r14;
    // 0x803A9268: addiu       $a0, $a0, -0x34E0
    ctx->r4 = ADD32(ctx->r4, -0X34E0);
    // 0x803A926C: jal         0x803A910C
    // 0x803A9270: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_803A910C(rdram, ctx);
        goto after_0;
    // 0x803A9270: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x803A9274: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803A9278: jal         0x803A95F8
    // 0x803A927C: addiu       $a0, $a0, 0x221C
    ctx->r4 = ADD32(ctx->r4, 0X221C);
    func_803A95F8(rdram, ctx);
        goto after_1;
    // 0x803A927C: addiu       $a0, $a0, 0x221C
    ctx->r4 = ADD32(ctx->r4, 0X221C);
    after_1:
    // 0x803A9280: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A9284: addiu       $a1, $a1, -0x3570
    ctx->r5 = ADD32(ctx->r5, -0X3570);
    // 0x803A9288: jal         0x803A964C
    // 0x803A928C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_803A964C(rdram, ctx);
        goto after_2;
    // 0x803A928C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x803A9290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A9294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A9298: jr          $ra
    // 0x803A929C: nop

    return;
    // 0x803A929C: nop

;}
RECOMP_FUNC void func_803A92A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A92A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A92A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A92A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A92AC: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x803A92B0: jal         0x8004BE44
    // 0x803A92B4: nop

    func_8004BE44(rdram, ctx);
        goto after_0;
    // 0x803A92B4: nop

    after_0:
    // 0x803A92B8: lbu         $t0, 0x1B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1B);
    // 0x803A92BC: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803A92C0: addiu       $t6, $t6, -0x6CDC
    ctx->r14 = ADD32(ctx->r14, -0X6CDC);
    // 0x803A92C4: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803A92C8: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x803A92CC: bne         $t0, $zero, L_803A92F8
    if (ctx->r8 != 0) {
        // 0x803A92D0: sh          $t0, 0x38($v0)
        MEM_H(0X38, ctx->r2) = ctx->r8;
            goto L_803A92F8;
    }
    // 0x803A92D0: sh          $t0, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r8;
    // 0x803A92D4: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x803A92D8: lui         $a3, 0x803B
    ctx->r7 = S32(0X803B << 16);
    // 0x803A92DC: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x803A92E0: lw          $a3, -0x3648($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3648);
    // 0x803A92E4: addiu       $a1, $zero, 0x321
    ctx->r5 = ADD32(0, 0X321);
    // 0x803A92E8: jal         0x8004CD24
    // 0x803A92EC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803A92EC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_1:
    // 0x803A92F0: b           L_803A9318
    // 0x803A92F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A9318;
    // 0x803A92F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A92F8:
    // 0x803A92F8: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x803A92FC: lui         $a3, 0x803B
    ctx->r7 = S32(0X803B << 16);
    // 0x803A9300: addu        $a3, $a3, $t8
    ctx->r7 = ADD32(ctx->r7, ctx->r24);
    // 0x803A9304: lw          $a3, -0x3648($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3648);
    // 0x803A9308: addiu       $a1, $zero, 0x323
    ctx->r5 = ADD32(0, 0X323);
    // 0x803A930C: jal         0x8004CD24
    // 0x803A9310: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x803A9310: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x803A9314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A9318:
    // 0x803A9318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A931C: jr          $ra
    // 0x803A9320: nop

    return;
    // 0x803A9320: nop

;}
RECOMP_FUNC void func_803A9324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A9324: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803A9328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A932C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x803A9330: lbu         $v1, 0x39($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X39);
    // 0x803A9334: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803A9338: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x803A933C: addu        $t7, $v0, $t1
    ctx->r15 = ADD32(ctx->r2, ctx->r9);
    // 0x803A9340: lbu         $t0, 0x3D($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X3D);
    // 0x803A9344: lui         $t9, 0x803B
    ctx->r25 = S32(0X803B << 16);
    // 0x803A9348: lw          $t9, -0x2758($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2758);
    // 0x803A934C: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x803A9350: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x803A9354: lwl         $at, 0x0($t3)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r11, 0X0);
    // 0x803A9358: lwr         $at, 0x3($t3)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r11, 0X3);
    // 0x803A935C: addiu       $t8, $sp, 0x24
    ctx->r24 = ADD32(ctx->r29, 0X24);
    // 0x803A9360: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x803A9364: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x803A9368: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803A936C: lh          $a1, 0x24($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X24);
    // 0x803A9370: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x803A9374: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x803A9378: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x803A937C: sb          $v1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r3;
    // 0x803A9380: jal         0x8004CD44
    // 0x803A9384: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x803A9384: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_0:
    // 0x803A9388: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x803A938C: lbu         $v1, 0x2F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X2F);
    // 0x803A9390: lh          $t7, 0x3C($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X3C);
    // 0x803A9394: lh          $t9, 0x3E($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X3E);
    // 0x803A9398: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x803A939C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803A93A0: bne         $t7, $t9, L_803A93C0
    if (ctx->r15 != ctx->r25) {
        // 0x803A93A4: addu        $t3, $v0, $v1
        ctx->r11 = ADD32(ctx->r2, ctx->r3);
            goto L_803A93C0;
    }
    // 0x803A93A4: addu        $t3, $v0, $v1
    ctx->r11 = ADD32(ctx->r2, ctx->r3);
    // 0x803A93A8: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x803A93AC: lui         $t5, 0x803B
    ctx->r13 = S32(0X803B << 16);
    // 0x803A93B0: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x803A93B4: lw          $t5, -0x3640($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3640);
    // 0x803A93B8: b           L_803A93D8
    // 0x803A93BC: sw          $t5, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r13;
        goto L_803A93D8;
    // 0x803A93BC: sw          $t5, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r13;
L_803A93C0:
    // 0x803A93C0: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x803A93C4: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803A93C8: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x803A93CC: lw          $t8, -0x3648($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3648);
    // 0x803A93D0: nop

    // 0x803A93D4: sw          $t8, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r24;
L_803A93D8:
    // 0x803A93D8: lbu         $a0, 0x40($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X40);
    // 0x803A93DC: lui         $t7, 0x803B
    ctx->r15 = S32(0X803B << 16);
    // 0x803A93E0: beq         $a0, $zero, L_803A9414
    if (ctx->r4 == 0) {
        // 0x803A93E4: addu        $t7, $t7, $t1
        ctx->r15 = ADD32(ctx->r15, ctx->r9);
            goto L_803A9414;
    }
    // 0x803A93E4: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x803A93E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A93EC: bne         $a0, $at, L_803A9428
    if (ctx->r4 != ctx->r1) {
        // 0x803A93F0: lui         $t6, 0x803B
        ctx->r14 = S32(0X803B << 16);
            goto L_803A9428;
    }
    // 0x803A93F0: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803A93F4: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x803A93F8: lhu         $t6, -0x364C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X364C);
    // 0x803A93FC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A9400: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x803A9404: jal         0x8004CD90
    // 0x803A9408: sh          $t6, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r14;
    func_8004CD90(rdram, ctx);
        goto after_1;
    // 0x803A9408: sh          $t6, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r14;
    after_1:
    // 0x803A940C: b           L_803A942C
    // 0x803A9410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A942C;
    // 0x803A9410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A9414:
    // 0x803A9414: lhu         $t7, -0x3650($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X3650);
    // 0x803A9418: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803A941C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x803A9420: jal         0x8004CD90
    // 0x803A9424: sh          $t7, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r15;
    func_8004CD90(rdram, ctx);
        goto after_2;
    // 0x803A9424: sh          $t7, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r15;
    after_2:
L_803A9428:
    // 0x803A9428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A942C:
    // 0x803A942C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803A9430: jr          $ra
    // 0x803A9434: nop

    return;
    // 0x803A9434: nop

;}
RECOMP_FUNC void func_803A9438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A9438: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803A943C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803A9440: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x803A9444: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803A9448: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803A944C: lbu         $t6, 0x44($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X44);
    // 0x803A9450: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803A9454: sb          $t6, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r14;
    // 0x803A9458: lbu         $t7, 0x45($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X45);
    // 0x803A945C: jal         0x803A9B24
    // 0x803A9460: sb          $t7, 0x3E($sp)
    MEM_B(0X3E, ctx->r29) = ctx->r15;
    func_803A9B24(rdram, ctx);
        goto after_0;
    // 0x803A9460: sb          $t7, 0x3E($sp)
    MEM_B(0X3E, ctx->r29) = ctx->r15;
    after_0:
    // 0x803A9464: jal         0x803A9B24
    // 0x803A9468: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803A9B24(rdram, ctx);
        goto after_1;
    // 0x803A9468: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x803A946C: lbu         $s0, 0x3F($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X3F);
    // 0x803A9470: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A9474: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x803A9478: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x803A947C: lw          $a1, -0x33FC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X33FC);
    // 0x803A9480: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x803A9484: jal         0x8004C2C8
    // 0x803A9488: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004C2C8(rdram, ctx);
        goto after_2;
    // 0x803A9488: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x803A948C: lbu         $v1, 0x3E($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X3E);
    // 0x803A9490: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A9494: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x803A9498: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x803A949C: lw          $a1, -0x33FC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X33FC);
    // 0x803A94A0: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x803A94A4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803A94A8: jal         0x8004C2C8
    // 0x803A94AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004C2C8(rdram, ctx);
        goto after_3;
    // 0x803A94AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x803A94B0: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A94B4: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x803A94B8: lw          $a1, -0x3718($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3718);
    // 0x803A94BC: jal         0x803A97EC
    // 0x803A94C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803A97EC(rdram, ctx);
        goto after_4;
    // 0x803A94C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x803A94C4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803A94C8: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A94CC: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x803A94D0: lw          $a1, -0x3718($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3718);
    // 0x803A94D4: jal         0x803A97EC
    // 0x803A94D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803A97EC(rdram, ctx);
        goto after_5;
    // 0x803A94D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x803A94DC: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A94E0: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x803A94E4: lw          $a1, -0x3658($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3658);
    // 0x803A94E8: jal         0x803A9840
    // 0x803A94EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803A9840(rdram, ctx);
        goto after_6;
    // 0x803A94EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x803A94F0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803A94F4: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A94F8: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x803A94FC: lw          $a1, -0x3658($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3658);
    // 0x803A9500: jal         0x803A9840
    // 0x803A9504: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803A9840(rdram, ctx);
        goto after_7;
    // 0x803A9504: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x803A9508: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803A950C: jal         0x803A9884
    // 0x803A9510: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_803A9884(rdram, ctx);
        goto after_8;
    // 0x803A9510: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x803A9514: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803A9518: jal         0x803A9884
    // 0x803A951C: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    func_803A9884(rdram, ctx);
        goto after_9;
    // 0x803A951C: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_9:
    // 0x803A9520: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A9524: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x803A9528: jal         0x800293DC
    // 0x803A952C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_10;
    // 0x803A952C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x803A9530: lbu         $t2, 0x3F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3F);
    // 0x803A9534: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x803A9538: bne         $t2, $zero, L_803A958C
    if (ctx->r10 != 0) {
        // 0x803A953C: lui         $a1, 0x803B
        ctx->r5 = S32(0X803B << 16);
            goto L_803A958C;
    }
    // 0x803A953C: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A9540: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A9544: addiu       $a1, $a1, -0x33F4
    ctx->r5 = ADD32(ctx->r5, -0X33F4);
    // 0x803A9548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A954C: jal         0x8004A298
    // 0x803A9550: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_11;
    // 0x803A9550: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x803A9554: addiu       $t3, $zero, 0xB3
    ctx->r11 = ADD32(0, 0XB3);
    // 0x803A9558: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803A955C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A9560: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803A9564: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803A9568: jal         0x8004A5C0
    // 0x803A956C: addiu       $a3, $zero, 0x2C
    ctx->r7 = ADD32(0, 0X2C);
    func_8004A5C0(rdram, ctx);
        goto after_12;
    // 0x803A956C: addiu       $a3, $zero, 0x2C
    ctx->r7 = ADD32(0, 0X2C);
    after_12:
    // 0x803A9570: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x803A9574: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A9578: addiu       $a1, $a1, -0x33EA
    ctx->r5 = ADD32(ctx->r5, -0X33EA);
    // 0x803A957C: jal         0x8004A34C
    // 0x803A9580: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A34C(rdram, ctx);
        goto after_13;
    // 0x803A9580: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x803A9584: b           L_803A95D0
    // 0x803A9588: nop

        goto L_803A95D0;
    // 0x803A9588: nop

L_803A958C:
    // 0x803A958C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A9590: addiu       $a1, $a1, -0x33F4
    ctx->r5 = ADD32(ctx->r5, -0X33F4);
    // 0x803A9594: jal         0x8004A34C
    // 0x803A9598: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A34C(rdram, ctx);
        goto after_14;
    // 0x803A9598: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x803A959C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803A95A0: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A95A4: addiu       $a1, $a1, -0x33EA
    ctx->r5 = ADD32(ctx->r5, -0X33EA);
    // 0x803A95A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803A95AC: jal         0x8004A298
    // 0x803A95B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004A298(rdram, ctx);
        goto after_15;
    // 0x803A95B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x803A95B4: addiu       $t4, $zero, 0xB3
    ctx->r12 = ADD32(0, 0XB3);
    // 0x803A95B8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x803A95BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A95C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803A95C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803A95C8: jal         0x8004A5C0
    // 0x803A95CC: addiu       $a3, $zero, 0x2C
    ctx->r7 = ADD32(0, 0X2C);
    func_8004A5C0(rdram, ctx);
        goto after_16;
    // 0x803A95CC: addiu       $a3, $zero, 0x2C
    ctx->r7 = ADD32(0, 0X2C);
    after_16:
L_803A95D0:
    // 0x803A95D0: jal         0x803A992C
    // 0x803A95D4: nop

    func_803A992C(rdram, ctx);
        goto after_17;
    // 0x803A95D4: nop

    after_17:
    // 0x803A95D8: jal         0x803A997C
    // 0x803A95DC: nop

    func_803A997C(rdram, ctx);
        goto after_18;
    // 0x803A95DC: nop

    after_18:
    // 0x803A95E0: jal         0x803A99DC
    // 0x803A95E4: nop

    func_803A99DC(rdram, ctx);
        goto after_19;
    // 0x803A95E4: nop

    after_19:
    // 0x803A95E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803A95EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803A95F0: jr          $ra
    // 0x803A95F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803A95F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803A95F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A95F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A95FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803A9600: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A9604: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A9608: jal         0x80029354
    // 0x803A960C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803A960C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x803A9610: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x803A9614: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803A9618: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x803A961C: addiu       $a1, $zero, 0x262
    ctx->r5 = ADD32(0, 0X262);
    // 0x803A9620: jal         0x8004CD24
    // 0x803A9624: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803A9624: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x803A9628: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x803A962C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A9630: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    // 0x803A9634: jal         0x8002135C
    // 0x803A9638: addiu       $a2, $zero, 0xC3
    ctx->r6 = ADD32(0, 0XC3);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803A9638: addiu       $a2, $zero, 0xC3
    ctx->r6 = ADD32(0, 0XC3);
    after_2:
    // 0x803A963C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A9640: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803A9644: jr          $ra
    // 0x803A9648: nop

    return;
    // 0x803A9648: nop

;}
RECOMP_FUNC void func_803A964C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A964C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803A9650: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803A9654: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x803A9658: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803A965C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803A9660: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    // 0x803A9664: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803A9668: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x803A966C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A9670: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803A9674: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803A9678: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803A967C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x803A9680: jal         0x800293DC
    // 0x803A9684: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803A9684: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x803A9688: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x803A968C: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x803A9690: beq         $s0, $s2, L_803A96D8
    if (ctx->r16 == ctx->r18) {
        // 0x803A9694: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803A96D8;
    }
    // 0x803A9694: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_803A9698:
    // 0x803A9698: sll         $t7, $s1, 3
    ctx->r15 = S32(ctx->r17 << 3);
    // 0x803A969C: addu        $v0, $s3, $t7
    ctx->r2 = ADD32(ctx->r19, ctx->r15);
    // 0x803A96A0: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x803A96A4: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x803A96A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A96AC: jal         0x8004CD24
    // 0x803A96B0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803A96B0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_1:
    // 0x803A96B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803A96B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A96BC: jal         0x8002135C
    // 0x803A96C0: addiu       $a2, $zero, 0xC2
    ctx->r6 = ADD32(0, 0XC2);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803A96C0: addiu       $a2, $zero, 0xC2
    ctx->r6 = ADD32(0, 0XC2);
    after_2:
    // 0x803A96C4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803A96C8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803A96CC: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x803A96D0: bne         $s0, $s2, L_803A9698
    if (ctx->r16 != ctx->r18) {
        // 0x803A96D4: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_803A9698;
    }
    // 0x803A96D4: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_803A96D8:
    // 0x803A96D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803A96DC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803A96E0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803A96E4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803A96E8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803A96EC: jr          $ra
    // 0x803A96F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803A96F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803A96F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A96F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803A96F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803A96FC: andi        $s0, $a0, 0xFF
    ctx->r16 = ctx->r4 & 0XFF;
    // 0x803A9700: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x803A9704: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x803A9708: lw          $t7, 0x1CF0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1CF0);
    // 0x803A970C: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x803A9710: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803A9714: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803A9718: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x803A971C: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x803A9720: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x803A9724: lbu         $t9, 0x44($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X44);
    // 0x803A9728: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x803A972C: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x803A9730: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803A9734: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803A9738: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803A973C: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x803A9740: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x803A9744: lw          $v0, -0x3404($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3404);
    // 0x803A9748: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803A974C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803A9750: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x803A9754: lbu         $v1, -0x2CF0($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2CF0);
    // 0x803A9758: lh          $a1, 0x4($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X4);
    // 0x803A975C: sll         $a3, $s0, 16
    ctx->r7 = S32(ctx->r16 << 16);
    // 0x803A9760: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x803A9764: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x803A9768: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x803A976C: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803A9770: sra         $t4, $a3, 16
    ctx->r12 = S32(SIGNED(ctx->r7) >> 16);
    // 0x803A9774: lh          $a2, 0x6($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X6);
    // 0x803A9778: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    // 0x803A977C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x803A9780: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x803A9784: jal         0x80039F88
    // 0x803A9788: sb          $v1, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r3;
    func_80039F88(rdram, ctx);
        goto after_0;
    // 0x803A9788: sb          $v1, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r3;
    after_0:
    // 0x803A978C: lui         $t5, 0x801B
    ctx->r13 = S32(0X801B << 16);
    // 0x803A9790: lw          $t5, 0x1CF0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1CF0);
    // 0x803A9794: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803A9798: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x803A979C: lbu         $t7, 0x44($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X44);
    // 0x803A97A0: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x803A97A4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803A97A8: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x803A97AC: lw          $v0, -0x340C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X340C);
    // 0x803A97B0: nop

    // 0x803A97B4: lh          $a1, 0x4($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X4);
    // 0x803A97B8: lh          $a2, 0x6($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X6);
    // 0x803A97BC: jal         0x8004BA70
    // 0x803A97C0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_8004BA70(rdram, ctx);
        goto after_1;
    // 0x803A97C0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x803A97C4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x803A97C8: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x803A97CC: lh          $a1, 0x4($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X4);
    // 0x803A97D0: lh          $a2, 0x6($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X6);
    // 0x803A97D4: jal         0x8004BB64
    // 0x803A97D8: nop

    func_8004BB64(rdram, ctx);
        goto after_2;
    // 0x803A97D8: nop

    after_2:
    // 0x803A97DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803A97E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803A97E4: jr          $ra
    // 0x803A97E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803A97E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803A97EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A97EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A97F0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803A97F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803A97F8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803A97FC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A9800: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x803A9804: jal         0x800293DC
    // 0x803A9808: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803A9808: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x803A980C: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x803A9810: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x803A9814: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x803A9818: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x803A981C: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x803A9820: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x803A9824: addiu       $a2, $a2, 0x23D8
    ctx->r6 = ADD32(ctx->r6, 0X23D8);
    // 0x803A9828: jal         0x8004C5DC
    // 0x803A982C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004C5DC(rdram, ctx);
        goto after_1;
    // 0x803A982C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x803A9830: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803A9834: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803A9838: jr          $ra
    // 0x803A983C: nop

    return;
    // 0x803A983C: nop

;}
RECOMP_FUNC void func_803A9840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A9840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A9844: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A9848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A984C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A9850: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A9854: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x803A9858: jal         0x800293DC
    // 0x803A985C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803A985C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x803A9860: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x803A9864: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x803A9868: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x803A986C: jal         0x8004C7D4
    // 0x803A9870: nop

    func_8004C7D4(rdram, ctx);
        goto after_1;
    // 0x803A9870: nop

    after_1:
    // 0x803A9874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A9878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A987C: jr          $ra
    // 0x803A9880: nop

    return;
    // 0x803A9880: nop

;}
RECOMP_FUNC void func_803A9884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A9884: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803A9888: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x803A988C: lw          $t7, 0x1CF0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1CF0);
    // 0x803A9890: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x803A9894: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803A9898: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x803A989C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x803A98A0: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x803A98A4: lbu         $v0, 0x44($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X44);
    // 0x803A98A8: lui         $a2, 0x803B
    ctx->r6 = S32(0X803B << 16);
    // 0x803A98AC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x803A98B0: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x803A98B4: lw          $a2, -0x3718($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3718);
    // 0x803A98B8: lbu         $a1, 0x37($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X37);
    // 0x803A98BC: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x803A98C0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803A98C4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803A98C8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x803A98CC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x803A98D0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x803A98D4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803A98D8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x803A98DC: sb          $t6, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r14;
    // 0x803A98E0: jal         0x8004D1B8
    // 0x803A98E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D1B8(rdram, ctx);
        goto after_0;
    // 0x803A98E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x803A98E8: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x803A98EC: lbu         $a1, 0x37($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X37);
    // 0x803A98F0: lui         $a2, 0x803B
    ctx->r6 = S32(0X803B << 16);
    // 0x803A98F4: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x803A98F8: addiu       $a1, $a1, 0xB
    ctx->r5 = ADD32(ctx->r5, 0XB);
    // 0x803A98FC: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    // 0x803A9900: andi        $t2, $a1, 0xFF
    ctx->r10 = ctx->r5 & 0XFF;
    // 0x803A9904: lw          $a2, -0x36B8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X36B8);
    // 0x803A9908: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x803A990C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803A9910: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x803A9914: jal         0x8004D384
    // 0x803A9918: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D384(rdram, ctx);
        goto after_1;
    // 0x803A9918: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x803A991C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803A9920: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803A9924: jr          $ra
    // 0x803A9928: nop

    return;
    // 0x803A9928: nop

;}
RECOMP_FUNC void func_803A992C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A992C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A9930: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A9934: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A9938: jal         0x80029354
    // 0x803A993C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803A993C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x803A9940: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803A9944: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x803A9948: addiu       $a3, $a3, 0x25AC
    ctx->r7 = ADD32(ctx->r7, 0X25AC);
    // 0x803A994C: addiu       $a1, $zero, 0xCF
    ctx->r5 = ADD32(0, 0XCF);
    // 0x803A9950: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x803A9954: jal         0x8004CD24
    // 0x803A9958: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803A9958: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x803A995C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803A9960: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A9964: jal         0x8002135C
    // 0x803A9968: addiu       $a2, $zero, 0xBA
    ctx->r6 = ADD32(0, 0XBA);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803A9968: addiu       $a2, $zero, 0xBA
    ctx->r6 = ADD32(0, 0XBA);
    after_2:
    // 0x803A996C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A9970: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803A9974: jr          $ra
    // 0x803A9978: nop

    return;
    // 0x803A9978: nop

;}
RECOMP_FUNC void func_803A997C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A997C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A9980: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A9984: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A9988: jal         0x80029354
    // 0x803A998C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803A998C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x803A9990: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803A9994: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x803A9998: addiu       $a3, $a3, 0x4FA0
    ctx->r7 = ADD32(ctx->r7, 0X4FA0);
    // 0x803A999C: addiu       $a1, $zero, 0xDE
    ctx->r5 = ADD32(0, 0XDE);
    // 0x803A99A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x803A99A4: jal         0x8004CD24
    // 0x803A99A8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803A99A8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x803A99AC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803A99B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A99B4: jal         0x8002135C
    // 0x803A99B8: addiu       $a2, $zero, 0xCC
    ctx->r6 = ADD32(0, 0XCC);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803A99B8: addiu       $a2, $zero, 0xCC
    ctx->r6 = ADD32(0, 0XCC);
    after_2:
    // 0x803A99BC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803A99C0: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x803A99C4: jal         0x8004CD44
    // 0x803A99C8: addiu       $a2, $zero, 0x9A
    ctx->r6 = ADD32(0, 0X9A);
    func_8004CD44(rdram, ctx);
        goto after_3;
    // 0x803A99C8: addiu       $a2, $zero, 0x9A
    ctx->r6 = ADD32(0, 0X9A);
    after_3:
    // 0x803A99CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A99D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803A99D4: jr          $ra
    // 0x803A99D8: nop

    return;
    // 0x803A99D8: nop

;}
RECOMP_FUNC void func_803A99DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A99DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A99E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A99E4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A99E8: jal         0x80029354
    // 0x803A99EC: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803A99EC: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x803A99F0: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803A99F4: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x803A99F8: addiu       $a3, $a3, 0x23E4
    ctx->r7 = ADD32(ctx->r7, 0X23E4);
    // 0x803A99FC: addiu       $a1, $zero, 0x264
    ctx->r5 = ADD32(0, 0X264);
    // 0x803A9A00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x803A9A04: jal         0x8004CD24
    // 0x803A9A08: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803A9A08: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x803A9A0C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803A9A10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A9A14: jal         0x8002135C
    // 0x803A9A18: addiu       $a2, $zero, 0xCA
    ctx->r6 = ADD32(0, 0XCA);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803A9A18: addiu       $a2, $zero, 0xCA
    ctx->r6 = ADD32(0, 0XCA);
    after_2:
    // 0x803A9A1C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803A9A20: jal         0x8004CD90
    // 0x803A9A24: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    func_8004CD90(rdram, ctx);
        goto after_3;
    // 0x803A9A24: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_3:
    // 0x803A9A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A9A2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803A9A30: jr          $ra
    // 0x803A9A34: nop

    return;
    // 0x803A9A34: nop

;}
RECOMP_FUNC void func_803A9A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A9A38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A9A3C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803A9A40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A9A44: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803A9A48: jal         0x80029354
    // 0x803A9A4C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803A9A4C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x803A9A50: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803A9A54: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x803A9A58: addiu       $a1, $zero, 0x141
    ctx->r5 = ADD32(0, 0X141);
    // 0x803A9A5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x803A9A60: jal         0x8004CD24
    // 0x803A9A64: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803A9A64: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x803A9A68: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803A9A6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A9A70: jal         0x8002135C
    // 0x803A9A74: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803A9A74: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_2:
    // 0x803A9A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A9A7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803A9A80: jr          $ra
    // 0x803A9A84: nop

    return;
    // 0x803A9A84: nop

;}
RECOMP_FUNC void func_803A9A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A9A88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A9A8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A9A90: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803A9A94: lb          $v0, 0x2C($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2C);
    // 0x803A9A98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A9A9C: beq         $v0, $at, L_803A9AB8
    if (ctx->r2 == ctx->r1) {
        // 0x803A9AA0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803A9AB8;
    }
    // 0x803A9AA0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803A9AA4: beq         $v0, $at, L_803A9AB8
    if (ctx->r2 == ctx->r1) {
        // 0x803A9AA8: nop
    
            goto L_803A9AB8;
    }
    // 0x803A9AA8: nop

    // 0x803A9AAC: lbu         $v1, 0x1F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1F);
    // 0x803A9AB0: b           L_803A9B18
    // 0x803A9AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A9B18;
    // 0x803A9AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A9AB8:
    // 0x803A9AB8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803A9ABC: lb          $v0, -0x326C($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X326C);
    // 0x803A9AC0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803A9AC4: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x803A9AC8: lbu         $t6, 0x40($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X40);
    // 0x803A9ACC: nop

    // 0x803A9AD0: bne         $t6, $zero, L_803A9AF8
    if (ctx->r14 != 0) {
        // 0x803A9AD4: negu        $t8, $v0
        ctx->r24 = SUB32(0, ctx->r2);
            goto L_803A9AF8;
    }
    // 0x803A9AD4: negu        $t8, $v0
    ctx->r24 = SUB32(0, ctx->r2);
    // 0x803A9AD8: sb          $t7, 0x40($v1)
    MEM_B(0X40, ctx->r3) = ctx->r15;
    // 0x803A9ADC: jal         0x80035770
    // 0x803A9AE0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803A9AE0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x803A9AE4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803A9AE8: lb          $v0, -0x326C($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X326C);
    // 0x803A9AEC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803A9AF0: nop

    // 0x803A9AF4: negu        $t8, $v0
    ctx->r24 = SUB32(0, ctx->r2);
L_803A9AF8:
    // 0x803A9AF8: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x803A9AFC: lbu         $t0, 0x41($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X41);
    // 0x803A9B00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A9B04: bne         $t0, $at, L_803A9B14
    if (ctx->r8 != ctx->r1) {
        // 0x803A9B08: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803A9B14;
    }
    // 0x803A9B08: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803A9B0C: b           L_803A9B14
    // 0x803A9B10: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_803A9B14;
    // 0x803A9B10: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803A9B14:
    // 0x803A9B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A9B18:
    // 0x803A9B18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803A9B1C: jr          $ra
    // 0x803A9B20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x803A9B20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_803A9B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A9B24: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x803A9B28: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x803A9B2C: andi        $s5, $a0, 0xFF
    ctx->r21 = ctx->r4 & 0XFF;
    // 0x803A9B30: sll         $t8, $s5, 2
    ctx->r24 = S32(ctx->r21 << 2);
    // 0x803A9B34: addu        $t8, $t8, $s5
    ctx->r24 = ADD32(ctx->r24, ctx->r21);
    // 0x803A9B38: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803A9B3C: addu        $t8, $t8, $s5
    ctx->r24 = ADD32(ctx->r24, ctx->r21);
    // 0x803A9B40: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x803A9B44: addu        $t8, $t8, $s5
    ctx->r24 = ADD32(ctx->r24, ctx->r21);
    // 0x803A9B48: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803A9B4C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803A9B50: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x803A9B54: addu        $t8, $t8, $s5
    ctx->r24 = ADD32(ctx->r24, ctx->r21);
    // 0x803A9B58: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803A9B5C: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x803A9B60: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803A9B64: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x803A9B68: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x803A9B6C: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x803A9B70: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x803A9B74: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x803A9B78: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x803A9B7C: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x803A9B80: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x803A9B84: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x803A9B88: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x803A9B8C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x803A9B90: addu        $t7, $t6, $s5
    ctx->r15 = ADD32(ctx->r14, ctx->r21);
    // 0x803A9B94: lbu         $s6, 0x1($t0)
    ctx->r22 = MEM_BU(ctx->r8, 0X1);
    // 0x803A9B98: sll         $t6, $s5, 2
    ctx->r14 = S32(ctx->r21 << 2);
    // 0x803A9B9C: lbu         $v0, 0x44($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X44);
    // 0x803A9BA0: addu        $t6, $t6, $s5
    ctx->r14 = ADD32(ctx->r14, ctx->r21);
    // 0x803A9BA4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803A9BA8: sll         $t7, $s6, 2
    ctx->r15 = S32(ctx->r22 << 2);
    // 0x803A9BAC: addu        $t6, $t6, $s5
    ctx->r14 = ADD32(ctx->r14, ctx->r21);
    // 0x803A9BB0: subu        $t7, $t7, $s6
    ctx->r15 = SUB32(ctx->r15, ctx->r22);
    // 0x803A9BB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803A9BB8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x803A9BBC: addu        $t6, $t6, $s5
    ctx->r14 = ADD32(ctx->r14, ctx->r21);
    // 0x803A9BC0: subu        $t7, $t7, $s6
    ctx->r15 = SUB32(ctx->r15, ctx->r22);
    // 0x803A9BC4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803A9BC8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803A9BCC: lui         $t2, 0x803B
    ctx->r10 = S32(0X803B << 16);
    // 0x803A9BD0: addiu       $t2, $t2, -0x3414
    ctx->r10 = ADD32(ctx->r10, -0X3414);
    // 0x803A9BD4: addu        $t6, $t6, $s5
    ctx->r14 = ADD32(ctx->r14, ctx->r21);
    // 0x803A9BD8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x803A9BDC: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x803A9BE0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x803A9BE4: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x803A9BE8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803A9BEC: sll         $t4, $v0, 24
    ctx->r12 = S32(ctx->r2 << 24);
    // 0x803A9BF0: sra         $t5, $t4, 24
    ctx->r13 = S32(SIGNED(ctx->r12) >> 24);
    // 0x803A9BF4: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x803A9BF8: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803A9BFC: lui         $t4, 0x803B
    ctx->r12 = S32(0X803B << 16);
    // 0x803A9C00: lui         $t2, 0x803B
    ctx->r10 = S32(0X803B << 16);
    // 0x803A9C04: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x803A9C08: addiu       $t2, $t2, -0x345C
    ctx->r10 = ADD32(ctx->r10, -0X345C);
    // 0x803A9C0C: addiu       $t4, $t4, -0x343C
    ctx->r12 = ADD32(ctx->r12, -0X343C);
    // 0x803A9C10: addiu       $t6, $t6, -0x33C0
    ctx->r14 = ADD32(ctx->r14, -0X33C0);
    // 0x803A9C14: sw          $t5, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r13;
    // 0x803A9C18: sw          $t3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r11;
    // 0x803A9C1C: sll         $t7, $s5, 2
    ctx->r15 = S32(ctx->r21 << 2);
    // 0x803A9C20: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x803A9C24: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x803A9C28: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x803A9C2C: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x803A9C30: lui         $s7, 0x803B
    ctx->r23 = S32(0X803B << 16);
    // 0x803A9C34: addiu       $s7, $s7, -0x6228
    ctx->r23 = ADD32(ctx->r23, -0X6228);
    // 0x803A9C38: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
    // 0x803A9C3C: sw          $t5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r13;
    // 0x803A9C40: sw          $t3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r11;
    // 0x803A9C44: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
    // 0x803A9C48: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x803A9C4C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x803A9C50: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x803A9C54: or          $fp, $s5, $zero
    ctx->r30 = ctx->r21 | 0;
L_803A9C58:
    // 0x803A9C58: jal         0x80029354
    // 0x803A9C5C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803A9C5C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_0:
    // 0x803A9C60: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803A9C64: sb          $fp, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r30;
    // 0x803A9C68: sb          $zero, 0x39($v0)
    MEM_B(0X39, ctx->r2) = 0;
    // 0x803A9C6C: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    // 0x803A9C70: jal         0x8006D8EC
    // 0x803A9C74: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    func_8006D8EC(rdram, ctx);
        goto after_1;
    // 0x803A9C74: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    after_1:
    // 0x803A9C78: beq         $s4, $v0, L_803A9C88
    if (ctx->r20 == ctx->r2) {
        // 0x803A9C7C: addiu       $a1, $zero, 0x13A
        ctx->r5 = ADD32(0, 0X13A);
            goto L_803A9C88;
    }
    // 0x803A9C7C: addiu       $a1, $zero, 0x13A
    ctx->r5 = ADD32(0, 0X13A);
    // 0x803A9C80: b           L_803A9C8C
    // 0x803A9C84: sb          $zero, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = 0;
        goto L_803A9C8C;
    // 0x803A9C84: sb          $zero, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = 0;
L_803A9C88:
    // 0x803A9C88: sb          $s4, 0x3A($s0)
    MEM_B(0X3A, ctx->r16) = ctx->r20;
L_803A9C8C:
    // 0x803A9C8C: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x803A9C90: lw          $s1, 0x14($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X14);
    // 0x803A9C94: lw          $a3, 0x0($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X0);
    // 0x803A9C98: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x803A9C9C: jal         0x8004CD24
    // 0x803A9CA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x803A9CA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x803A9CA4: sll         $t1, $s3, 2
    ctx->r9 = S32(ctx->r19 << 2);
    // 0x803A9CA8: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x803A9CAC: subu        $t1, $t1, $s3
    ctx->r9 = SUB32(ctx->r9, ctx->r19);
    // 0x803A9CB0: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x803A9CB4: addu        $v0, $t9, $t1
    ctx->r2 = ADD32(ctx->r25, ctx->r9);
    // 0x803A9CB8: lh          $t2, 0x418($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X418);
    // 0x803A9CBC: lh          $t3, 0x41A($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X41A);
    // 0x803A9CC0: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x803A9CC4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803A9CC8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x803A9CCC: lwl         $at, 0x0($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, 0X0);
    // 0x803A9CD0: lwr         $at, 0x3($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, 0X3);
    // 0x803A9CD4: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x803A9CD8: swl         $at, 0x18($sp)
    do_swl(rdram, 0X18, ctx->r29, ctx->r1);
    // 0x803A9CDC: swr         $at, 0x1B($sp)
    do_swr(rdram, 0X1B, ctx->r29, ctx->r1);
    // 0x803A9CE0: lwl         $t7, 0x4($t4)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r12, 0X4);
    // 0x803A9CE4: lwr         $t7, 0x7($t4)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r12, 0X7);
    // 0x803A9CE8: lb          $a3, 0x83($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X83);
    // 0x803A9CEC: swl         $t7, 0x1C($sp)
    do_swl(rdram, 0X1C, ctx->r29, ctx->r15);
    // 0x803A9CF0: swr         $t7, 0x1F($sp)
    do_swr(rdram, 0X1F, ctx->r29, ctx->r15);
    // 0x803A9CF4: lwl         $at, 0x8($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, 0X8);
    // 0x803A9CF8: lwr         $at, 0xB($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, 0XB);
    // 0x803A9CFC: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x803A9D00: swl         $at, 0x20($sp)
    do_swl(rdram, 0X20, ctx->r29, ctx->r1);
    // 0x803A9D04: swr         $at, 0x23($sp)
    do_swr(rdram, 0X23, ctx->r29, ctx->r1);
    // 0x803A9D08: lwl         $t7, 0xC($t4)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r12, 0XC);
    // 0x803A9D0C: lwr         $t7, 0xF($t4)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r12, 0XF);
    // 0x803A9D10: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x803A9D14: swl         $t7, 0x24($sp)
    do_swl(rdram, 0X24, ctx->r29, ctx->r15);
    // 0x803A9D18: swr         $t7, 0x27($sp)
    do_swr(rdram, 0X27, ctx->r29, ctx->r15);
    // 0x803A9D1C: lwl         $at, 0x0($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X0);
    // 0x803A9D20: lwr         $at, 0x3($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0X3);
    // 0x803A9D24: andi        $a2, $s6, 0xFF
    ctx->r6 = ctx->r22 & 0XFF;
    // 0x803A9D28: swl         $at, 0x28($sp)
    do_swl(rdram, 0X28, ctx->r29, ctx->r1);
    // 0x803A9D2C: swr         $at, 0x2B($sp)
    do_swr(rdram, 0X2B, ctx->r29, ctx->r1);
    // 0x803A9D30: lwl         $t0, 0x4($t6)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r14, 0X4);
    // 0x803A9D34: lwr         $t0, 0x7($t6)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r14, 0X7);
    // 0x803A9D38: nop

    // 0x803A9D3C: swl         $t0, 0x2C($sp)
    do_swl(rdram, 0X2C, ctx->r29, ctx->r8);
    // 0x803A9D40: swr         $t0, 0x2F($sp)
    do_swr(rdram, 0X2F, ctx->r29, ctx->r8);
    // 0x803A9D44: lwl         $at, 0x8($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X8);
    // 0x803A9D48: lwr         $at, 0xB($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0XB);
    // 0x803A9D4C: nop

    // 0x803A9D50: swl         $at, 0x30($sp)
    do_swl(rdram, 0X30, ctx->r29, ctx->r1);
    // 0x803A9D54: swr         $at, 0x33($sp)
    do_swr(rdram, 0X33, ctx->r29, ctx->r1);
    // 0x803A9D58: lwl         $t0, 0xC($t6)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r14, 0XC);
    // 0x803A9D5C: lwr         $t0, 0xF($t6)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r14, 0XF);
    // 0x803A9D60: nop

    // 0x803A9D64: swl         $t0, 0x34($sp)
    do_swl(rdram, 0X34, ctx->r29, ctx->r8);
    // 0x803A9D68: jal         0x8006D974
    // 0x803A9D6C: swr         $t0, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r8);
    func_8006D974(rdram, ctx);
        goto after_3;
    // 0x803A9D6C: swr         $t0, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r8);
    after_3:
    // 0x803A9D70: lh          $a1, 0x90($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X90);
    // 0x803A9D74: lh          $a2, 0x92($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X92);
    // 0x803A9D78: jal         0x8004CD44
    // 0x803A9D7C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8004CD44(rdram, ctx);
        goto after_4;
    // 0x803A9D7C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x803A9D80: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x803A9D84: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x803A9D88: lbu         $a2, 0x2($t9)
    ctx->r6 = MEM_BU(ctx->r25, 0X2);
    // 0x803A9D8C: jal         0x8002135C
    // 0x803A9D90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x803A9D90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x803A9D94: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x803A9D98: andi        $s3, $s2, 0xFF
    ctx->r19 = ctx->r18 & 0XFF;
    // 0x803A9D9C: slti        $at, $s3, 0xB
    ctx->r1 = SIGNED(ctx->r19) < 0XB ? 1 : 0;
    // 0x803A9DA0: bne         $at, $zero, L_803A9C58
    if (ctx->r1 != 0) {
        // 0x803A9DA4: or          $s2, $s3, $zero
        ctx->r18 = ctx->r19 | 0;
            goto L_803A9C58;
    }
    // 0x803A9DA4: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
    // 0x803A9DA8: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x803A9DAC: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x803A9DB0: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x803A9DB4: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x803A9DB8: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x803A9DBC: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x803A9DC0: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x803A9DC4: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x803A9DC8: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x803A9DCC: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x803A9DD0: jr          $ra
    // 0x803A9DD4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x803A9DD4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_803A9DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A9DD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A9DDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A9DE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A9DE4: lb          $t6, 0x3A($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X3A);
    // 0x803A9DE8: lbu         $v1, 0x38($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X38);
    // 0x803A9DEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A9DF0: bne         $t6, $at, L_803A9E58
    if (ctx->r14 != ctx->r1) {
        // 0x803A9DF4: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_803A9E58;
    }
    // 0x803A9DF4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x803A9DF8: lh          $t7, 0x3C($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X3C);
    // 0x803A9DFC: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x803A9E00: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x803A9E04: sh          $t8, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r24;
    // 0x803A9E08: lh          $t9, 0x3C($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X3C);
    // 0x803A9E0C: lui         $a2, 0x803B
    ctx->r6 = S32(0X803B << 16);
    // 0x803A9E10: slti        $at, $t9, 0x11
    ctx->r1 = SIGNED(ctx->r25) < 0X11 ? 1 : 0;
    // 0x803A9E14: bne         $at, $zero, L_803A9E5C
    if (ctx->r1 != 0) {
        // 0x803A9E18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803A9E5C;
    }
    // 0x803A9E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A9E1C: lb          $v0, 0x39($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X39);
    // 0x803A9E20: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803A9E24: bne         $v0, $at, L_803A9E34
    if (ctx->r2 != ctx->r1) {
        // 0x803A9E28: sh          $zero, 0x3C($a0)
        MEM_H(0X3C, ctx->r4) = 0;
            goto L_803A9E34;
    }
    // 0x803A9E28: sh          $zero, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = 0;
    // 0x803A9E2C: b           L_803A9E3C
    // 0x803A9E30: sb          $zero, 0x39($a0)
    MEM_B(0X39, ctx->r4) = 0;
        goto L_803A9E3C;
    // 0x803A9E30: sb          $zero, 0x39($a0)
    MEM_B(0X39, ctx->r4) = 0;
L_803A9E34:
    // 0x803A9E34: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x803A9E38: sb          $t0, 0x39($a3)
    MEM_B(0X39, ctx->r7) = ctx->r8;
L_803A9E3C:
    // 0x803A9E3C: lb          $t2, 0x39($a3)
    ctx->r10 = MEM_B(ctx->r7, 0X39);
    // 0x803A9E40: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803A9E44: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x803A9E48: addu        $a2, $a2, $t3
    ctx->r6 = ADD32(ctx->r6, ctx->r11);
    // 0x803A9E4C: lbu         $a2, -0x33C0($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X33C0);
    // 0x803A9E50: jal         0x8002135C
    // 0x803A9E54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x803A9E54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
L_803A9E58:
    // 0x803A9E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A9E5C:
    // 0x803A9E5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A9E60: jr          $ra
    // 0x803A9E64: nop

    return;
    // 0x803A9E64: nop

    // 0x803A9E68: nop

    // 0x803A9E6C: nop

;}
RECOMP_FUNC void func_803A9E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A9E70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A9E74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A9E78: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A9E7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A9E80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A9E84: jal         0x80036234
    // 0x803A9E88: sb          $zero, -0x2750($at)
    MEM_B(-0X2750, ctx->r1) = 0;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803A9E88: sb          $zero, -0x2750($at)
    MEM_B(-0X2750, ctx->r1) = 0;
    after_0:
    // 0x803A9E8C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A9E90: jal         0x800296E0
    // 0x803A9E94: addiu       $a0, $a0, -0x60A8
    ctx->r4 = ADD32(ctx->r4, -0X60A8);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x803A9E94: addiu       $a0, $a0, -0x60A8
    ctx->r4 = ADD32(ctx->r4, -0X60A8);
    after_1:
    // 0x803A9E98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A9E9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A9EA0: jr          $ra
    // 0x803A9EA4: nop

    return;
    // 0x803A9EA4: nop

;}
RECOMP_FUNC void func_803A9EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A9EA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A9EAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A9EB0: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A9EB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A9EB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A9EBC: jal         0x8003620C
    // 0x803A9EC0: sb          $zero, -0x2750($at)
    MEM_B(-0X2750, ctx->r1) = 0;
    func_8003620C(rdram, ctx);
        goto after_0;
    // 0x803A9EC0: sb          $zero, -0x2750($at)
    MEM_B(-0X2750, ctx->r1) = 0;
    after_0:
    // 0x803A9EC4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A9EC8: jal         0x800296E0
    // 0x803A9ECC: addiu       $a0, $a0, -0x60A8
    ctx->r4 = ADD32(ctx->r4, -0X60A8);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x803A9ECC: addiu       $a0, $a0, -0x60A8
    ctx->r4 = ADD32(ctx->r4, -0X60A8);
    after_1:
    // 0x803A9ED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A9ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A9ED8: jr          $ra
    // 0x803A9EDC: nop

    return;
    // 0x803A9EDC: nop

;}
RECOMP_FUNC void func_803A9EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A9EE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A9EE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A9EE8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803A9EEC: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A9EF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A9EF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A9EF8: jal         0x80036234
    // 0x803A9EFC: sb          $t6, -0x2750($at)
    MEM_B(-0X2750, ctx->r1) = ctx->r14;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803A9EFC: sb          $t6, -0x2750($at)
    MEM_B(-0X2750, ctx->r1) = ctx->r14;
    after_0:
    // 0x803A9F00: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A9F04: jal         0x800296E0
    // 0x803A9F08: addiu       $a0, $a0, -0x60A8
    ctx->r4 = ADD32(ctx->r4, -0X60A8);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x803A9F08: addiu       $a0, $a0, -0x60A8
    ctx->r4 = ADD32(ctx->r4, -0X60A8);
    after_1:
    // 0x803A9F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A9F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A9F14: jr          $ra
    // 0x803A9F18: nop

    return;
    // 0x803A9F18: nop

;}
RECOMP_FUNC void func_803A9F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A9F1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A9F20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A9F24: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803A9F28: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A9F2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A9F30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A9F34: jal         0x8003620C
    // 0x803A9F38: sb          $t6, -0x2750($at)
    MEM_B(-0X2750, ctx->r1) = ctx->r14;
    func_8003620C(rdram, ctx);
        goto after_0;
    // 0x803A9F38: sb          $t6, -0x2750($at)
    MEM_B(-0X2750, ctx->r1) = ctx->r14;
    after_0:
    // 0x803A9F3C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A9F40: jal         0x800296E0
    // 0x803A9F44: addiu       $a0, $a0, -0x60A8
    ctx->r4 = ADD32(ctx->r4, -0X60A8);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x803A9F44: addiu       $a0, $a0, -0x60A8
    ctx->r4 = ADD32(ctx->r4, -0X60A8);
    after_1:
    // 0x803A9F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A9F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A9F50: jr          $ra
    // 0x803A9F54: nop

    return;
    // 0x803A9F54: nop

;}
RECOMP_FUNC void func_803A9F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A9F58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A9F5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A9F60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A9F64: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803A9F68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A9F6C: jal         0x80035FF0
    // 0x803A9F70: addiu       $a0, $a0, 0x1FF4
    ctx->r4 = ADD32(ctx->r4, 0X1FF4);
    func_80035FF0(rdram, ctx);
        goto after_0;
    // 0x803A9F70: addiu       $a0, $a0, 0x1FF4
    ctx->r4 = ADD32(ctx->r4, 0X1FF4);
    after_0:
    // 0x803A9F74: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803A9F78: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803A9F7C: jal         0x80049E40
    // 0x803A9F80: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_1;
    // 0x803A9F80: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_1:
    // 0x803A9F84: jal         0x803AA49C
    // 0x803A9F88: nop

    func_803AA49C(rdram, ctx);
        goto after_2;
    // 0x803A9F88: nop

    after_2:
    // 0x803A9F8C: jal         0x803AAD34
    // 0x803A9F90: nop

    func_803AAD34(rdram, ctx);
        goto after_3;
    // 0x803A9F90: nop

    after_3:
    // 0x803A9F94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A9F98: jal         0x8004AFC0
    // 0x803A9F9C: nop

    func_8004AFC0(rdram, ctx);
        goto after_4;
    // 0x803A9F9C: nop

    after_4:
    // 0x803A9FA0: jal         0x803AA884
    // 0x803A9FA4: nop

    func_803AA884(rdram, ctx);
        goto after_5;
    // 0x803A9FA4: nop

    after_5:
    // 0x803A9FA8: jal         0x803AA930
    // 0x803A9FAC: nop

    func_803AA930(rdram, ctx);
        goto after_6;
    // 0x803A9FAC: nop

    after_6:
    // 0x803A9FB0: jal         0x803F50A8
    // 0x803A9FB4: nop

    LOOKUP_FUNC(0x803F50A8)(rdram, ctx);
        goto after_7;
    // 0x803A9FB4: nop

    after_7:
    // 0x803A9FB8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A9FBC: jal         0x8002AAC0
    // 0x803A9FC0: addiu       $a0, $a0, -0x30B4
    ctx->r4 = ADD32(ctx->r4, -0X30B4);
    func_8002AAC0(rdram, ctx);
        goto after_8;
    // 0x803A9FC0: addiu       $a0, $a0, -0x30B4
    ctx->r4 = ADD32(ctx->r4, -0X30B4);
    after_8:
    // 0x803A9FC4: jal         0x803AA9C4
    // 0x803A9FC8: nop

    func_803AA9C4(rdram, ctx);
        goto after_9;
    // 0x803A9FC8: nop

    after_9:
    // 0x803A9FCC: jal         0x803AAA60
    // 0x803A9FD0: nop

    func_803AAA60(rdram, ctx);
        goto after_10;
    // 0x803A9FD0: nop

    after_10:
    // 0x803A9FD4: jal         0x803AAAAC
    // 0x803A9FD8: nop

    func_803AAAAC(rdram, ctx);
        goto after_11;
    // 0x803A9FD8: nop

    after_11:
    // 0x803A9FDC: jal         0x803AAB00
    // 0x803A9FE0: nop

    func_803AAB00(rdram, ctx);
        goto after_12;
    // 0x803A9FE0: nop

    after_12:
    // 0x803A9FE4: jal         0x803AAB60
    // 0x803A9FE8: nop

    func_803AAB60(rdram, ctx);
        goto after_13;
    // 0x803A9FE8: nop

    after_13:
    // 0x803A9FEC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x803A9FF0: nop

    // 0x803A9FF4: lb          $t7, 0x42($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X42);
    // 0x803A9FF8: nop

    // 0x803A9FFC: bne         $t7, $zero, L_803AA018
    if (ctx->r15 != 0) {
        // 0x803AA000: nop
    
            goto L_803AA018;
    }
    // 0x803AA000: nop

    // 0x803AA004: jal         0x803AABA8
    // 0x803AA008: nop

    func_803AABA8(rdram, ctx);
        goto after_14;
    // 0x803AA008: nop

    after_14:
    // 0x803AA00C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AA010: jal         0x80029220
    // 0x803AA014: addiu       $a0, $a0, -0x533C
    ctx->r4 = ADD32(ctx->r4, -0X533C);
    func_80029220(rdram, ctx);
        goto after_15;
    // 0x803AA014: addiu       $a0, $a0, -0x533C
    ctx->r4 = ADD32(ctx->r4, -0X533C);
    after_15:
L_803AA018:
    // 0x803AA018: jal         0x803AB074
    // 0x803AA01C: nop

    func_803AB074(rdram, ctx);
        goto after_16;
    // 0x803AA01C: nop

    after_16:
    // 0x803AA020: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AA024: jal         0x80029220
    // 0x803AA028: addiu       $a0, $a0, -0x5084
    ctx->r4 = ADD32(ctx->r4, -0X5084);
    func_80029220(rdram, ctx);
        goto after_17;
    // 0x803AA028: addiu       $a0, $a0, -0x5084
    ctx->r4 = ADD32(ctx->r4, -0X5084);
    after_17:
    // 0x803AA02C: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803AA030: lbu         $t8, -0x2750($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X2750);
    // 0x803AA034: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AA038: bne         $t8, $at, L_803AA050
    if (ctx->r24 != ctx->r1) {
        // 0x803AA03C: lui         $t9, 0x8012
        ctx->r25 = S32(0X8012 << 16);
            goto L_803AA050;
    }
    // 0x803AA03C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803AA040: lb          $t9, -0x326C($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X326C);
    // 0x803AA044: nop

    // 0x803AA048: beq         $t9, $zero, L_803AA058
    if (ctx->r25 == 0) {
        // 0x803AA04C: nop
    
            goto L_803AA058;
    }
    // 0x803AA04C: nop

L_803AA050:
    // 0x803AA050: jal         0x803AA974
    // 0x803AA054: nop

    func_803AA974(rdram, ctx);
        goto after_18;
    // 0x803AA054: nop

    after_18:
L_803AA058:
    // 0x803AA058: jal         0x8006FB58
    // 0x803AA05C: nop

    func_8006FB58(rdram, ctx);
        goto after_19;
    // 0x803AA05C: nop

    after_19:
    // 0x803AA060: lui         $t0, 0x803B
    ctx->r8 = S32(0X803B << 16);
    // 0x803AA064: lbu         $t0, -0x2750($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X2750);
    // 0x803AA068: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x803AA06C: bne         $t0, $zero, L_803AA0A4
    if (ctx->r8 != 0) {
        // 0x803AA070: lui         $a0, 0x803B
        ctx->r4 = S32(0X803B << 16);
            goto L_803AA0A4;
    }
    // 0x803AA070: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AA074: lb          $t1, -0x326C($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X326C);
    // 0x803AA078: nop

    // 0x803AA07C: bne         $t1, $zero, L_803AA0A4
    if (ctx->r9 != 0) {
        // 0x803AA080: nop
    
            goto L_803AA0A4;
    }
    // 0x803AA080: nop

    // 0x803AA084: jal         0x80039DB4
    // 0x803AA088: nop

    func_80039DB4(rdram, ctx);
        goto after_20;
    // 0x803AA088: nop

    after_20:
    // 0x803AA08C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AA090: addiu       $a0, $a0, -0x5F40
    ctx->r4 = ADD32(ctx->r4, -0X5F40);
    // 0x803AA094: jal         0x8004A9B4
    // 0x803AA098: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_21;
    // 0x803AA098: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_21:
    // 0x803AA09C: b           L_803AA0B4
    // 0x803AA0A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AA0B4;
    // 0x803AA0A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA0A4:
    // 0x803AA0A4: addiu       $a0, $a0, -0x5F40
    ctx->r4 = ADD32(ctx->r4, -0X5F40);
    // 0x803AA0A8: jal         0x8004A9B4
    // 0x803AA0AC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_22;
    // 0x803AA0AC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_22:
    // 0x803AA0B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA0B4:
    // 0x803AA0B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AA0B8: jr          $ra
    // 0x803AA0BC: nop

    return;
    // 0x803AA0BC: nop

;}
RECOMP_FUNC void func_803AA0C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA0C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AA0C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AA0C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AA0CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AA0D0: sb          $zero, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = 0;
    // 0x803AA0D4: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x803AA0D8: lw          $t7, 0x1CF0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1CF0);
    // 0x803AA0DC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803AA0E0: lb          $t8, 0x39($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X39);
    // 0x803AA0E4: nop

    // 0x803AA0E8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803AA0EC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803AA0F0: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803AA0F4: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x803AA0F8: lhu         $a0, -0x3078($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X3078);
    // 0x803AA0FC: jal         0x80035DE8
    // 0x803AA100: nop

    func_80035DE8(rdram, ctx);
        goto after_0;
    // 0x803AA100: nop

    after_0:
    // 0x803AA104: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x803AA108: lui         $t9, 0x803B
    ctx->r25 = S32(0X803B << 16);
    // 0x803AA10C: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x803AA110: lw          $t9, -0x3018($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3018);
    // 0x803AA114: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803AA118: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803AA11C: jalr        $t9
    // 0x803AA120: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x803AA120: nop

    after_1:
    // 0x803AA124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AA128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AA12C: jr          $ra
    // 0x803AA130: nop

    return;
    // 0x803AA130: nop

;}
RECOMP_FUNC void func_803AA134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA134: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AA138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AA13C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AA140: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803AA144: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AA148: beq         $v0, $zero, L_803AA168
    if (ctx->r2 == 0) {
        // 0x803AA14C: nop
    
            goto L_803AA168;
    }
    // 0x803AA14C: nop

    // 0x803AA150: beq         $v0, $at, L_803AA1B4
    if (ctx->r2 == ctx->r1) {
        // 0x803AA154: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803AA1B4;
    }
    // 0x803AA154: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803AA158: beq         $v0, $at, L_803AA1E4
    if (ctx->r2 == ctx->r1) {
        // 0x803AA15C: nop
    
            goto L_803AA1E4;
    }
    // 0x803AA15C: nop

    // 0x803AA160: b           L_803AA1F0
    // 0x803AA164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AA1F0;
    // 0x803AA164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA168:
    // 0x803AA168: jal         0x80035770
    // 0x803AA16C: nop

    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803AA16C: nop

    after_0:
    // 0x803AA170: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AA174: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x803AA178: jal         0x803AA5CC
    // 0x803AA17C: nop

    func_803AA5CC(rdram, ctx);
        goto after_1;
    // 0x803AA17C: nop

    after_1:
    // 0x803AA180: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803AA184: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x803AA188: nop

    // 0x803AA18C: bne         $t6, $zero, L_803AA1A4
    if (ctx->r14 != 0) {
        // 0x803AA190: nop
    
            goto L_803AA1A4;
    }
    // 0x803AA190: nop

    // 0x803AA194: jal         0x80037908
    // 0x803AA198: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_2;
    // 0x803AA198: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x803AA19C: b           L_803AA1F0
    // 0x803AA1A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AA1F0;
    // 0x803AA1A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA1A4:
    // 0x803AA1A4: jal         0x803AA63C
    // 0x803AA1A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803AA63C(rdram, ctx);
        goto after_3;
    // 0x803AA1A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x803AA1AC: b           L_803AA1F0
    // 0x803AA1B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AA1F0;
    // 0x803AA1B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA1B4:
    // 0x803AA1B4: jal         0x80035770
    // 0x803AA1B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035770(rdram, ctx);
        goto after_4;
    // 0x803AA1B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_4:
    // 0x803AA1BC: jal         0x803AAD64
    // 0x803AA1C0: nop

    func_803AAD64(rdram, ctx);
        goto after_5;
    // 0x803AA1C0: nop

    after_5:
    // 0x803AA1C4: jal         0x803AADA0
    // 0x803AA1C8: nop

    func_803AADA0(rdram, ctx);
        goto after_6;
    // 0x803AA1C8: nop

    after_6:
    // 0x803AA1CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803AA1D0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803AA1D4: sb          $zero, 0x41($a0)
    MEM_B(0X41, ctx->r4) = 0;
    // 0x803AA1D8: sb          $zero, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = 0;
    // 0x803AA1DC: b           L_803AA1EC
    // 0x803AA1E0: sb          $t7, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r15;
        goto L_803AA1EC;
    // 0x803AA1E0: sb          $t7, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r15;
L_803AA1E4:
    // 0x803AA1E4: jal         0x803AA720
    // 0x803AA1E8: nop

    func_803AA720(rdram, ctx);
        goto after_7;
    // 0x803AA1E8: nop

    after_7:
L_803AA1EC:
    // 0x803AA1EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA1F0:
    // 0x803AA1F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AA1F4: jr          $ra
    // 0x803AA1F8: nop

    return;
    // 0x803AA1F8: nop

;}
RECOMP_FUNC void func_803AA1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA1FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AA200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AA204: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AA208: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803AA20C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AA210: beq         $v0, $zero, L_803AA230
    if (ctx->r2 == 0) {
        // 0x803AA214: lui         $t6, 0x803B
        ctx->r14 = S32(0X803B << 16);
            goto L_803AA230;
    }
    // 0x803AA214: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803AA218: beq         $v0, $at, L_803AA260
    if (ctx->r2 == ctx->r1) {
        // 0x803AA21C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803AA260;
    }
    // 0x803AA21C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803AA220: beq         $v0, $at, L_803AA268
    if (ctx->r2 == ctx->r1) {
        // 0x803AA224: nop
    
            goto L_803AA268;
    }
    // 0x803AA224: nop

    // 0x803AA228: b           L_803AA274
    // 0x803AA22C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AA274;
    // 0x803AA22C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA230:
    // 0x803AA230: lbu         $t6, -0x2750($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X2750);
    // 0x803AA234: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AA238: bne         $t6, $at, L_803AA250
    if (ctx->r14 != ctx->r1) {
        // 0x803AA23C: lui         $t7, 0x8012
        ctx->r15 = S32(0X8012 << 16);
            goto L_803AA250;
    }
    // 0x803AA23C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803AA240: lb          $t7, -0x326C($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X326C);
    // 0x803AA244: nop

    // 0x803AA248: beq         $t7, $zero, L_803AA274
    if (ctx->r15 == 0) {
        // 0x803AA24C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803AA274;
    }
    // 0x803AA24C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA250:
    // 0x803AA250: jal         0x80037908
    // 0x803AA254: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x803AA254: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803AA258: b           L_803AA274
    // 0x803AA25C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AA274;
    // 0x803AA25C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA260:
    // 0x803AA260: b           L_803AA270
    // 0x803AA264: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
        goto L_803AA270;
    // 0x803AA264: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
L_803AA268:
    // 0x803AA268: jal         0x803AA804
    // 0x803AA26C: nop

    func_803AA804(rdram, ctx);
        goto after_1;
    // 0x803AA26C: nop

    after_1:
L_803AA270:
    // 0x803AA270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA274:
    // 0x803AA274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AA278: jr          $ra
    // 0x803AA27C: nop

    return;
    // 0x803AA27C: nop

;}
RECOMP_FUNC void func_803AA280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AA284: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AA288: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AA28C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AA290: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803AA294: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AA298: beq         $v0, $zero, L_803AA2DC
    if (ctx->r2 == 0) {
        // 0x803AA29C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803AA2DC;
    }
    // 0x803AA29C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AA2A0: beq         $v0, $at, L_803AA2D8
    if (ctx->r2 == ctx->r1) {
        // 0x803AA2A4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803AA2D8;
    }
    // 0x803AA2A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803AA2A8: bne         $v0, $at, L_803AA2DC
    if (ctx->r2 != ctx->r1) {
        // 0x803AA2AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803AA2DC;
    }
    // 0x803AA2AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AA2B0: jal         0x80035734
    // 0x803AA2B4: nop

    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803AA2B4: nop

    after_0:
    // 0x803AA2B8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x803AA2BC: nop

    // 0x803AA2C0: lb          $a0, 0x3F($t7)
    ctx->r4 = MEM_B(ctx->r15, 0X3F);
    // 0x803AA2C4: jal         0x803AA67C
    // 0x803AA2C8: nop

    func_803AA67C(rdram, ctx);
        goto after_1;
    // 0x803AA2C8: nop

    after_1:
    // 0x803AA2CC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x803AA2D0: nop

    // 0x803AA2D4: sb          $v0, 0x3F($t8)
    MEM_B(0X3F, ctx->r24) = ctx->r2;
L_803AA2D8:
    // 0x803AA2D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA2DC:
    // 0x803AA2DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AA2E0: jr          $ra
    // 0x803AA2E4: nop

    return;
    // 0x803AA2E4: nop

;}
RECOMP_FUNC void func_803AA2E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA2E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AA2EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AA2F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AA2F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AA2F8: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803AA2FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AA300: beq         $v0, $zero, L_803AA344
    if (ctx->r2 == 0) {
        // 0x803AA304: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803AA344;
    }
    // 0x803AA304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AA308: beq         $v0, $at, L_803AA340
    if (ctx->r2 == ctx->r1) {
        // 0x803AA30C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803AA340;
    }
    // 0x803AA30C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803AA310: bne         $v0, $at, L_803AA344
    if (ctx->r2 != ctx->r1) {
        // 0x803AA314: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803AA344;
    }
    // 0x803AA314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AA318: jal         0x80035734
    // 0x803AA31C: nop

    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803AA31C: nop

    after_0:
    // 0x803AA320: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x803AA324: nop

    // 0x803AA328: lb          $a0, 0x3F($t7)
    ctx->r4 = MEM_B(ctx->r15, 0X3F);
    // 0x803AA32C: jal         0x803AA6CC
    // 0x803AA330: nop

    func_803AA6CC(rdram, ctx);
        goto after_1;
    // 0x803AA330: nop

    after_1:
    // 0x803AA334: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x803AA338: nop

    // 0x803AA33C: sb          $v0, 0x3F($t8)
    MEM_B(0X3F, ctx->r24) = ctx->r2;
L_803AA340:
    // 0x803AA340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA344:
    // 0x803AA344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AA348: jr          $ra
    // 0x803AA34C: nop

    return;
    // 0x803AA34C: nop

;}
RECOMP_FUNC void func_803AA350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA350: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AA354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AA358: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AA35C: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x803AA360: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AA364: beq         $v0, $zero, L_803AA39C
    if (ctx->r2 == 0) {
        // 0x803AA368: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803AA39C;
    }
    // 0x803AA368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AA36C: beq         $v0, $at, L_803AA384
    if (ctx->r2 == ctx->r1) {
        // 0x803AA370: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803AA384;
    }
    // 0x803AA370: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803AA374: beq         $v0, $at, L_803AA39C
    if (ctx->r2 == ctx->r1) {
        // 0x803AA378: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803AA39C;
    }
    // 0x803AA378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AA37C: b           L_803AA39C
    // 0x803AA380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AA39C;
    // 0x803AA380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA384:
    // 0x803AA384: jal         0x80035734
    // 0x803AA388: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803AA388: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803AA38C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803AA390: nop

    // 0x803AA394: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    // 0x803AA398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA39C:
    // 0x803AA39C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AA3A0: jr          $ra
    // 0x803AA3A4: nop

    return;
    // 0x803AA3A4: nop

;}
RECOMP_FUNC void func_803AA3A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA3A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AA3AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AA3B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AA3B4: lb          $t6, 0x38($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X38);
    // 0x803AA3B8: nop

    // 0x803AA3BC: bne         $t6, $zero, L_803AA3EC
    if (ctx->r14 != 0) {
        // 0x803AA3C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803AA3EC;
    }
    // 0x803AA3C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AA3C4: lb          $t7, 0x42($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X42);
    // 0x803AA3C8: nop

    // 0x803AA3CC: bne         $t7, $zero, L_803AA3EC
    if (ctx->r15 != 0) {
        // 0x803AA3D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803AA3EC;
    }
    // 0x803AA3D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AA3D4: jal         0x80035734
    // 0x803AA3D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803AA3D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803AA3DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803AA3E0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803AA3E4: sb          $t8, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r24;
    // 0x803AA3E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AA3EC:
    // 0x803AA3EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AA3F0: jr          $ra
    // 0x803AA3F4: nop

    return;
    // 0x803AA3F4: nop

;}
RECOMP_FUNC void func_803AA3F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA3F8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803AA3FC: jr          $ra
    // 0x803AA400: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803AA400: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803AA404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA404: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803AA408: jr          $ra
    // 0x803AA40C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803AA40C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803AA410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AA414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AA418: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AA41C: jal         0x80035770
    // 0x803AA420: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803AA420: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x803AA424: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803AA428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803AA42C: lb          $t6, 0x3D($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X3D);
    // 0x803AA430: sb          $v0, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r2;
    // 0x803AA434: subu        $t7, $v0, $t6
    ctx->r15 = SUB32(ctx->r2, ctx->r14);
    // 0x803AA438: sb          $t7, 0x3D($a0)
    MEM_B(0X3D, ctx->r4) = ctx->r15;
    // 0x803AA43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AA440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AA444: jr          $ra
    // 0x803AA448: nop

    return;
    // 0x803AA448: nop

;}
RECOMP_FUNC void func_803AA44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA44C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AA450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AA454: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AA458: jal         0x80035770
    // 0x803AA45C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803AA45C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803AA460: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x803AA464: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803AA468: lb          $t6, 0x3C($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X3C);
    // 0x803AA46C: nop

    // 0x803AA470: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x803AA474: sb          $t8, 0x3C($v0)
    MEM_B(0X3C, ctx->r2) = ctx->r24;
    // 0x803AA478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AA47C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AA480: jr          $ra
    // 0x803AA484: nop

    return;
    // 0x803AA484: nop

;}
RECOMP_FUNC void func_803AA488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA488: jr          $ra
    // 0x803AA48C: nop

    return;
    // 0x803AA48C: nop

;}
RECOMP_FUNC void func_803AA490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AA490: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803AA494: jr          $ra
    // 0x803AA498: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803AA498: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
