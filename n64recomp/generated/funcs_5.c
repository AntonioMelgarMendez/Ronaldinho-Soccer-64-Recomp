#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800174AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800174AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800174B0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800174B4: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x800174B8: addiu       $s1, $s1, -0x5B68
    ctx->r17 = ADD32(ctx->r17, -0X5B68);
    // 0x800174BC: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800174C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800174C4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800174C8: sb          $zero, 0x26($sp)
    MEM_B(0X26, ctx->r29) = 0;
    // 0x800174CC: lbu         $t6, 0x22($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X22);
    // 0x800174D0: nop

    // 0x800174D4: bne         $t6, $zero, L_800174E4
    if (ctx->r14 != 0) {
        // 0x800174D8: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_800174E4;
    }
    // 0x800174D8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800174DC: b           L_8001752C
    // 0x800174E0: sb          $t7, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r15;
        goto L_8001752C;
    // 0x800174E0: sb          $t7, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r15;
L_800174E4:
    // 0x800174E4: lbu         $t8, 0xE($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XE);
    // 0x800174E8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800174EC: beq         $t8, $zero, L_8001752C
    if (ctx->r24 == 0) {
        // 0x800174F0: lui         $t0, 0x801A
        ctx->r8 = S32(0X801A << 16);
            goto L_8001752C;
    }
    // 0x800174F0: lui         $t0, 0x801A
    ctx->r8 = S32(0X801A << 16);
    // 0x800174F4: sb          $zero, 0xF($v1)
    MEM_B(0XF, ctx->r3) = 0;
    // 0x800174F8: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x800174FC: lui         $t2, 0x801A
    ctx->r10 = S32(0X801A << 16);
    // 0x80017500: sb          $zero, 0xE($t9)
    MEM_B(0XE, ctx->r25) = 0;
    // 0x80017504: lbu         $t0, -0x67F4($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X67F4);
    // 0x80017508: lw          $a0, 0x1890($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1890);
    // 0x8001750C: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x80017510: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80017514: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80017518: addiu       $t2, $t2, -0x6768
    ctx->r10 = ADD32(ctx->r10, -0X6768);
    // 0x8001751C: jal         0x800832E0
    // 0x80017520: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
    func_800832E0(rdram, ctx);
        goto after_0;
    // 0x80017520: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
    after_0:
    // 0x80017524: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80017528: nop

L_8001752C:
    // 0x8001752C: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x80017530: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80017534: addiu       $a1, $a1, -0x5B64
    ctx->r5 = ADD32(ctx->r5, -0X5B64);
    // 0x80017538: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x8001753C: lbu         $a0, 0x0($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X0);
    // 0x80017540: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80017544: slti        $at, $a0, 0xD0
    ctx->r1 = SIGNED(ctx->r4) < 0XD0 ? 1 : 0;
    // 0x80017548: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x8001754C: bne         $at, $zero, L_800175A8
    if (ctx->r1 != 0) {
        // 0x80017550: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_800175A8;
    }
    // 0x80017550: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_80017554:
    // 0x80017554: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x80017558: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x8001755C: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x80017560: lw          $t9, -0x1BB0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BB0);
    // 0x80017564: nop

    // 0x80017568: jalr        $t9
    // 0x8001756C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8001756C: nop

    after_1:
    // 0x80017570: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80017574: slti        $at, $s0, 0xF2
    ctx->r1 = SIGNED(ctx->r16) < 0XF2 ? 1 : 0;
    // 0x80017578: beq         $at, $zero, L_8001790C
    if (ctx->r1 == 0) {
        // 0x8001757C: addiu       $a1, $a1, -0x5B64
        ctx->r5 = ADD32(ctx->r5, -0X5B64);
            goto L_8001790C;
    }
    // 0x8001757C: addiu       $a1, $a1, -0x5B64
    ctx->r5 = ADD32(ctx->r5, -0X5B64);
    // 0x80017580: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80017584: nop

    // 0x80017588: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8001758C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80017590: slti        $at, $a0, 0xD0
    ctx->r1 = SIGNED(ctx->r4) < 0XD0 ? 1 : 0;
    // 0x80017594: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80017598: beq         $at, $zero, L_80017554
    if (ctx->r1 == 0) {
        // 0x8001759C: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_80017554;
    }
    // 0x8001759C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800175A0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800175A4: nop

L_800175A8:
    // 0x800175A8: lw          $t7, 0x28($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X28);
    // 0x800175AC: slti        $at, $s0, 0x68
    ctx->r1 = SIGNED(ctx->r16) < 0X68 ? 1 : 0;
    // 0x800175B0: beq         $at, $zero, L_800175C4
    if (ctx->r1 == 0) {
        // 0x800175B4: sw          $t7, 0x84($v1)
        MEM_W(0X84, ctx->r3) = ctx->r15;
            goto L_800175C4;
    }
    // 0x800175B4: sw          $t7, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->r15;
    // 0x800175B8: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x800175BC: b           L_800175D0
    // 0x800175C0: sb          $a0, 0x25($t8)
    MEM_B(0X25, ctx->r24) = ctx->r4;
        goto L_800175D0;
    // 0x800175C0: sb          $a0, 0x25($t8)
    MEM_B(0X25, ctx->r24) = ctx->r4;
L_800175C4:
    // 0x800175C4: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x800175C8: addiu       $t0, $s0, -0x68
    ctx->r8 = ADD32(ctx->r16, -0X68);
    // 0x800175CC: sb          $t0, 0x25($t1)
    MEM_B(0X25, ctx->r9) = ctx->r8;
L_800175D0:
    // 0x800175D0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800175D4: nop

    // 0x800175D8: lbu         $v0, 0x25($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X25);
    // 0x800175DC: nop

    // 0x800175E0: slti        $at, $v0, 0x48
    ctx->r1 = SIGNED(ctx->r2) < 0X48 ? 1 : 0;
    // 0x800175E4: bne         $at, $zero, L_80017644
    if (ctx->r1 != 0) {
        // 0x800175E8: addiu       $at, $zero, 0x67
        ctx->r1 = ADD32(0, 0X67);
            goto L_80017644;
    }
    // 0x800175E8: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    // 0x800175EC: bne         $v0, $at, L_80017618
    if (ctx->r2 != ctx->r1) {
        // 0x800175F0: nop
    
            goto L_80017618;
    }
    // 0x800175F0: nop

    // 0x800175F4: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x800175F8: nop

    // 0x800175FC: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x80017600: nop

    // 0x80017604: sb          $t3, 0x25($v1)
    MEM_B(0X25, ctx->r3) = ctx->r11;
    // 0x80017608: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8001760C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80017610: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80017614: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
L_80017618:
    // 0x80017618: lbu         $t9, 0x6($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X6);
    // 0x8001761C: nop

    // 0x80017620: ori         $t6, $t9, 0x4
    ctx->r14 = ctx->r25 | 0X4;
    // 0x80017624: jal         0x8001857C
    // 0x80017628: sb          $t6, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r14;
    func_8001857C(rdram, ctx);
        goto after_2;
    // 0x80017628: sb          $t6, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r14;
    after_2:
    // 0x8001762C: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80017630: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80017634: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x80017638: addiu       $a1, $a1, -0x5B64
    ctx->r5 = ADD32(ctx->r5, -0X5B64);
    // 0x8001763C: b           L_80017654
    // 0x80017640: sb          $t7, 0x25($t8)
    MEM_B(0X25, ctx->r24) = ctx->r15;
        goto L_80017654;
    // 0x80017640: sb          $t7, 0x25($t8)
    MEM_B(0X25, ctx->r24) = ctx->r15;
L_80017644:
    // 0x80017644: lbu         $t0, 0x6($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X6);
    // 0x80017648: nop

    // 0x8001764C: andi        $t1, $t0, 0xFB
    ctx->r9 = ctx->r8 & 0XFB;
    // 0x80017650: sb          $t1, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r9;
L_80017654:
    // 0x80017654: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80017658: slti        $at, $s0, 0x68
    ctx->r1 = SIGNED(ctx->r16) < 0X68 ? 1 : 0;
    // 0x8001765C: lbu         $t2, 0x25($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X25);
    // 0x80017660: nop

    // 0x80017664: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x80017668: sw          $t3, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r11;
    // 0x8001766C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80017670: nop

    // 0x80017674: lw          $t4, 0x28($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X28);
    // 0x80017678: lh          $t5, 0x2C($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X2C);
    // 0x8001767C: nop

    // 0x80017680: addu        $t9, $t4, $t5
    ctx->r25 = ADD32(ctx->r12, ctx->r13);
    // 0x80017684: sw          $t9, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r25;
    // 0x80017688: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8001768C: nop

    // 0x80017690: lw          $t6, 0x28($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X28);
    // 0x80017694: lh          $t7, 0x2E($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2E);
    // 0x80017698: nop

    // 0x8001769C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800176A0: sw          $t8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r24;
    // 0x800176A4: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800176A8: nop

    // 0x800176AC: lw          $t0, 0x28($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X28);
    // 0x800176B0: lh          $t1, 0x30($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X30);
    // 0x800176B4: nop

    // 0x800176B8: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800176BC: sw          $t2, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r10;
    // 0x800176C0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800176C4: nop

    // 0x800176C8: lw          $t3, 0x28($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X28);
    // 0x800176CC: lh          $t4, 0x32($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X32);
    // 0x800176D0: nop

    // 0x800176D4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800176D8: sw          $t5, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r13;
    // 0x800176DC: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800176E0: nop

    // 0x800176E4: lw          $t9, 0x28($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X28);
    // 0x800176E8: lh          $t6, 0x34($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X34);
    // 0x800176EC: nop

    // 0x800176F0: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x800176F4: beq         $at, $zero, L_80017720
    if (ctx->r1 == 0) {
        // 0x800176F8: sw          $t7, 0x28($v1)
        MEM_W(0X28, ctx->r3) = ctx->r15;
            goto L_80017720;
    }
    // 0x800176F8: sw          $t7, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r15;
    // 0x800176FC: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x80017700: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80017704: lbu         $t0, 0x0($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X0);
    // 0x80017708: nop

    // 0x8001770C: sb          $t0, 0x20($t1)
    MEM_B(0X20, ctx->r9) = ctx->r8;
    // 0x80017710: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x80017714: nop

    // 0x80017718: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8001771C: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
L_80017720:
    // 0x80017720: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80017724: nop

    // 0x80017728: lbu         $t4, 0x20($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X20);
    // 0x8001772C: nop

    // 0x80017730: sb          $t4, 0x21($v1)
    MEM_B(0X21, ctx->r3) = ctx->r12;
    // 0x80017734: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80017738: nop

    // 0x8001773C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80017740: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x80017744: slti        $at, $a0, 0x80
    ctx->r1 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x80017748: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x8001774C: beq         $at, $zero, L_80017774
    if (ctx->r1 == 0) {
        // 0x80017750: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_80017774;
    }
    // 0x80017750: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80017754: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80017758: nop

    // 0x8001775C: sb          $a0, 0x23($t9)
    MEM_B(0X23, ctx->r25) = ctx->r4;
    // 0x80017760: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80017764: nop

    // 0x80017768: lbu         $s0, 0x0($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X0);
    // 0x8001776C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80017770: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
L_80017774:
    // 0x80017774: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80017778: andi        $t4, $s0, 0x7F
    ctx->r12 = ctx->r16 & 0X7F;
    // 0x8001777C: lbu         $t7, 0x23($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X23);
    // 0x80017780: nop

    // 0x80017784: sb          $t7, 0x22($v1)
    MEM_B(0X22, ctx->r3) = ctx->r15;
    // 0x80017788: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8001778C: nop

    // 0x80017790: lbu         $v0, 0x22($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X22);
    // 0x80017794: nop

    // 0x80017798: bne         $v0, $zero, L_800177B0
    if (ctx->r2 != 0) {
        // 0x8001779C: nop
    
            goto L_800177B0;
    }
    // 0x8001779C: nop

    // 0x800177A0: sb          $zero, 0x24($v1)
    MEM_B(0X24, ctx->r3) = 0;
    // 0x800177A4: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800177A8: b           L_800177F0
    // 0x800177AC: sb          $t4, 0x48($v1)
    MEM_B(0X48, ctx->r3) = ctx->r12;
        goto L_800177F0;
    // 0x800177AC: sb          $t4, 0x48($v1)
    MEM_B(0X48, ctx->r3) = ctx->r12;
L_800177B0:
    // 0x800177B0: lbu         $t8, 0x21($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X21);
    // 0x800177B4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800177B8: multu       $t8, $v0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800177BC: mflo        $t0
    ctx->r8 = lo;
    // 0x800177C0: sra         $t1, $t0, 7
    ctx->r9 = S32(SIGNED(ctx->r8) >> 7);
    // 0x800177C4: sb          $t1, 0x24($v1)
    MEM_B(0X24, ctx->r3) = ctx->r9;
    // 0x800177C8: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800177CC: nop

    // 0x800177D0: lbu         $t2, 0x24($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X24);
    // 0x800177D4: nop

    // 0x800177D8: bne         $t2, $zero, L_800177EC
    if (ctx->r10 != 0) {
        // 0x800177DC: nop
    
            goto L_800177EC;
    }
    // 0x800177DC: nop

    // 0x800177E0: sb          $t3, 0x24($v1)
    MEM_B(0X24, ctx->r3) = ctx->r11;
    // 0x800177E4: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800177E8: nop

L_800177EC:
    // 0x800177EC: sb          $t4, 0x48($v1)
    MEM_B(0X48, ctx->r3) = ctx->r12;
L_800177F0:
    // 0x800177F0: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x800177F4: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x800177F8: nop

    // 0x800177FC: sw          $t5, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r13;
    // 0x80017800: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80017804: nop

    // 0x80017808: lh          $t6, 0x8A($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X8A);
    // 0x8001780C: nop

    // 0x80017810: bne         $t6, $zero, L_80017820
    if (ctx->r14 != 0) {
        // 0x80017814: nop
    
            goto L_80017820;
    }
    // 0x80017814: nop

    // 0x80017818: b           L_80017828
    // 0x8001781C: sb          $zero, 0x7D($v1)
    MEM_B(0X7D, ctx->r3) = 0;
        goto L_80017828;
    // 0x8001781C: sb          $zero, 0x7D($v1)
    MEM_B(0X7D, ctx->r3) = 0;
L_80017820:
    // 0x80017820: jal         0x800195F4
    // 0x80017824: nop

    func_800195F4(rdram, ctx);
        goto after_3;
    // 0x80017824: nop

    after_3:
L_80017828:
    // 0x80017828: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x8001782C: nop

    // 0x80017830: sh          $zero, 0x36($t7)
    MEM_H(0X36, ctx->r15) = 0;
    // 0x80017834: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80017838: nop

    // 0x8001783C: lhu         $t0, 0x9A($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X9A);
    // 0x80017840: nop

    // 0x80017844: beq         $t0, $zero, L_80017854
    if (ctx->r8 == 0) {
        // 0x80017848: nop
    
            goto L_80017854;
    }
    // 0x80017848: nop

    // 0x8001784C: jal         0x80018DC4
    // 0x80017850: nop

    func_80018DC4(rdram, ctx);
        goto after_4;
    // 0x80017850: nop

    after_4:
L_80017854:
    // 0x80017854: jal         0x80017C18
    // 0x80017858: nop

    func_80017C18(rdram, ctx);
        goto after_5;
    // 0x80017858: nop

    after_5:
    // 0x8001785C: lbu         $t1, 0x26($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X26);
    // 0x80017860: nop

    // 0x80017864: bne         $t1, $zero, L_800178BC
    if (ctx->r9 != 0) {
        // 0x80017868: nop
    
            goto L_800178BC;
    }
    // 0x80017868: nop

    // 0x8001786C: jal         0x80017F40
    // 0x80017870: nop

    func_80017F40(rdram, ctx);
        goto after_6;
    // 0x80017870: nop

    after_6:
    // 0x80017874: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x80017878: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8001787C: lui         $t4, 0x801A
    ctx->r12 = S32(0X801A << 16);
    // 0x80017880: sb          $t2, 0xE($t3)
    MEM_B(0XE, ctx->r11) = ctx->r10;
    // 0x80017884: lbu         $t4, -0x67F4($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X67F4);
    // 0x80017888: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x8001788C: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x80017890: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80017894: lui         $t9, 0x801A
    ctx->r25 = S32(0X801A << 16);
    // 0x80017898: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8001789C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800178A0: addiu       $t9, $t9, -0x6768
    ctx->r25 = ADD32(ctx->r25, -0X6768);
    // 0x800178A4: lw          $a0, 0x1890($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1890);
    // 0x800178A8: lw          $a2, 0x14($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X14);
    // 0x800178AC: jal         0x80083360
    // 0x800178B0: addu        $a1, $t5, $t9
    ctx->r5 = ADD32(ctx->r13, ctx->r25);
    func_80083360(rdram, ctx);
        goto after_7;
    // 0x800178B0: addu        $a1, $t5, $t9
    ctx->r5 = ADD32(ctx->r13, ctx->r25);
    after_7:
    // 0x800178B4: b           L_80017910
    // 0x800178B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80017910;
    // 0x800178B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800178BC:
    // 0x800178BC: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x800178C0: nop

    // 0x800178C4: lhu         $t8, 0x4C($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X4C);
    // 0x800178C8: nop

    // 0x800178CC: beq         $t8, $zero, L_80017904
    if (ctx->r24 == 0) {
        // 0x800178D0: nop
    
            goto L_80017904;
    }
    // 0x800178D0: nop

    // 0x800178D4: jal         0x80018144
    // 0x800178D8: nop

    func_80018144(rdram, ctx);
        goto after_8;
    // 0x800178D8: nop

    after_8:
    // 0x800178DC: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x800178E0: nop

    // 0x800178E4: lhu         $t1, 0x4C($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X4C);
    // 0x800178E8: nop

    // 0x800178EC: beq         $t1, $zero, L_80017910
    if (ctx->r9 == 0) {
        // 0x800178F0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80017910;
    }
    // 0x800178F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800178F4: jal         0x80017D60
    // 0x800178F8: nop

    func_80017D60(rdram, ctx);
        goto after_9;
    // 0x800178F8: nop

    after_9:
    // 0x800178FC: b           L_80017910
    // 0x80017900: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80017910;
    // 0x80017900: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80017904:
    // 0x80017904: jal         0x80017D60
    // 0x80017908: nop

    func_80017D60(rdram, ctx);
        goto after_10;
    // 0x80017908: nop

    after_10:
L_8001790C:
    // 0x8001790C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80017910:
    // 0x80017910: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80017914: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80017918: jr          $ra
    // 0x8001791C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001791C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80017920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017920: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80017924: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x80017928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001792C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017930: lbu         $t6, 0x7D($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X7D);
    // 0x80017934: nop

    // 0x80017938: beq         $t6, $zero, L_80017954
    if (ctx->r14 == 0) {
        // 0x8001793C: nop
    
            goto L_80017954;
    }
    // 0x8001793C: nop

    // 0x80017940: jal         0x80019444
    // 0x80017944: nop

    func_80019444(rdram, ctx);
        goto after_0;
    // 0x80017944: nop

    after_0:
    // 0x80017948: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8001794C: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x80017950: nop

L_80017954:
    // 0x80017954: lhu         $t7, 0x9A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X9A);
    // 0x80017958: nop

    // 0x8001795C: beq         $t7, $zero, L_80017978
    if (ctx->r15 == 0) {
        // 0x80017960: nop
    
            goto L_80017978;
    }
    // 0x80017960: nop

    // 0x80017964: jal         0x80018E3C
    // 0x80017968: nop

    func_80018E3C(rdram, ctx);
        goto after_1;
    // 0x80017968: nop

    after_1:
    // 0x8001796C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80017970: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x80017974: nop

L_80017978:
    // 0x80017978: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    // 0x8001797C: nop

    // 0x80017980: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80017984: beq         $t9, $zero, L_800179A0
    if (ctx->r25 == 0) {
        // 0x80017988: nop
    
            goto L_800179A0;
    }
    // 0x80017988: nop

    // 0x8001798C: jal         0x80017C18
    // 0x80017990: nop

    func_80017C18(rdram, ctx);
        goto after_2;
    // 0x80017990: nop

    after_2:
    // 0x80017994: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80017998: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x8001799C: nop

L_800179A0:
    // 0x800179A0: lbu         $t0, 0x22($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X22);
    // 0x800179A4: nop

    // 0x800179A8: beq         $t0, $zero, L_800179D0
    if (ctx->r8 == 0) {
        // 0x800179AC: nop
    
            goto L_800179D0;
    }
    // 0x800179AC: nop

    // 0x800179B0: lbu         $t1, 0x21($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X21);
    // 0x800179B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800179B8: bne         $t1, $at, L_800179D0
    if (ctx->r9 != ctx->r1) {
        // 0x800179BC: nop
    
            goto L_800179D0;
    }
    // 0x800179BC: nop

    // 0x800179C0: jal         0x800180F4
    // 0x800179C4: nop

    func_800180F4(rdram, ctx);
        goto after_3;
    // 0x800179C4: nop

    after_3:
    // 0x800179C8: b           L_80017A64
    // 0x800179CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80017A64;
    // 0x800179CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800179D0:
    // 0x800179D0: lbu         $v1, 0x24($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X24);
    // 0x800179D4: nop

    // 0x800179D8: beq         $v1, $zero, L_80017A10
    if (ctx->r3 == 0) {
        // 0x800179DC: addiu       $t2, $v1, -0x1
        ctx->r10 = ADD32(ctx->r3, -0X1);
            goto L_80017A10;
    }
    // 0x800179DC: addiu       $t2, $v1, -0x1
    ctx->r10 = ADD32(ctx->r3, -0X1);
    // 0x800179E0: sb          $t2, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r10;
    // 0x800179E4: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x800179E8: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x800179EC: nop

    // 0x800179F0: lbu         $t3, 0x24($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X24);
    // 0x800179F4: nop

    // 0x800179F8: bne         $t3, $zero, L_80017A10
    if (ctx->r11 != 0) {
        // 0x800179FC: nop
    
            goto L_80017A10;
    }
    // 0x800179FC: nop

    // 0x80017A00: jal         0x800180A8
    // 0x80017A04: nop

    func_800180A8(rdram, ctx);
        goto after_4;
    // 0x80017A04: nop

    after_4:
    // 0x80017A08: b           L_80017A64
    // 0x80017A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80017A64;
    // 0x80017A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80017A10:
    // 0x80017A10: lhu         $t4, 0x4C($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X4C);
    // 0x80017A14: nop

    // 0x80017A18: beq         $t4, $zero, L_80017A34
    if (ctx->r12 == 0) {
        // 0x80017A1C: nop
    
            goto L_80017A34;
    }
    // 0x80017A1C: nop

    // 0x80017A20: jal         0x80018144
    // 0x80017A24: nop

    func_80018144(rdram, ctx);
        goto after_5;
    // 0x80017A24: nop

    after_5:
    // 0x80017A28: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80017A2C: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x80017A30: nop

L_80017A34:
    // 0x80017A34: lbu         $t5, 0x6($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X6);
    // 0x80017A38: nop

    // 0x80017A3C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80017A40: beq         $t6, $zero, L_80017A58
    if (ctx->r14 == 0) {
        // 0x80017A44: nop
    
            goto L_80017A58;
    }
    // 0x80017A44: nop

    // 0x80017A48: jal         0x80017D60
    // 0x80017A4C: nop

    func_80017D60(rdram, ctx);
        goto after_6;
    // 0x80017A4C: nop

    after_6:
    // 0x80017A50: b           L_80017A64
    // 0x80017A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80017A64;
    // 0x80017A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80017A58:
    // 0x80017A58: jal         0x80017A70
    // 0x80017A5C: nop

    func_80017A70(rdram, ctx);
        goto after_7;
    // 0x80017A5C: nop

    after_7:
    // 0x80017A60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80017A64:
    // 0x80017A64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80017A68: jr          $ra
    // 0x80017A6C: nop

    return;
    // 0x80017A6C: nop

;}
RECOMP_FUNC void func_80017A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017A70: lui         $t6, 0x801A
    ctx->r14 = S32(0X801A << 16);
    // 0x80017A74: lb          $t6, -0x67F2($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X67F2);
    // 0x80017A78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80017A7C: beq         $t6, $zero, L_80017A94
    if (ctx->r14 == 0) {
        // 0x80017A80: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80017A94;
    }
    // 0x80017A80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017A84: jal         0x80017D60
    // 0x80017A88: nop

    func_80017D60(rdram, ctx);
        goto after_0;
    // 0x80017A88: nop

    after_0:
    // 0x80017A8C: b           L_80017B3C
    // 0x80017A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80017B3C;
    // 0x80017A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80017A94:
    // 0x80017A94: lui         $t7, 0x801A
    ctx->r15 = S32(0X801A << 16);
    // 0x80017A98: lbu         $t7, -0x67EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X67EA);
    // 0x80017A9C: lui         $t8, 0x801A
    ctx->r24 = S32(0X801A << 16);
    // 0x80017AA0: beq         $t7, $zero, L_80017AB8
    if (ctx->r15 == 0) {
        // 0x80017AA4: nop
    
            goto L_80017AB8;
    }
    // 0x80017AA4: nop

    // 0x80017AA8: jal         0x80017D60
    // 0x80017AAC: nop

    func_80017D60(rdram, ctx);
        goto after_1;
    // 0x80017AAC: nop

    after_1:
    // 0x80017AB0: b           L_80017B3C
    // 0x80017AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80017B3C;
    // 0x80017AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80017AB8:
    // 0x80017AB8: lw          $t8, -0x5B68($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5B68);
    // 0x80017ABC: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80017AC0: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80017AC4: lui         $t0, 0x801A
    ctx->r8 = S32(0X801A << 16);
    // 0x80017AC8: andi        $t9, $a0, 0x7FFF
    ctx->r25 = ctx->r4 & 0X7FFF;
    // 0x80017ACC: sltiu       $at, $t9, 0x100
    ctx->r1 = ctx->r25 < 0X100 ? 1 : 0;
    // 0x80017AD0: beq         $at, $zero, L_80017B08
    if (ctx->r1 == 0) {
        // 0x80017AD4: addiu       $v0, $v0, -0x67E2
        ctx->r2 = ADD32(ctx->r2, -0X67E2);
            goto L_80017B08;
    }
    // 0x80017AD4: addiu       $v0, $v0, -0x67E2
    ctx->r2 = ADD32(ctx->r2, -0X67E2);
    // 0x80017AD8: lbu         $t0, -0x67ED($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X67ED);
    // 0x80017ADC: lui         $t1, 0x801A
    ctx->r9 = S32(0X801A << 16);
    // 0x80017AE0: bne         $t0, $zero, L_80017AF8
    if (ctx->r8 != 0) {
        // 0x80017AE4: nop
    
            goto L_80017AF8;
    }
    // 0x80017AE4: nop

    // 0x80017AE8: lb          $t1, -0x67E5($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X67E5);
    // 0x80017AEC: nop

    // 0x80017AF0: beq         $t1, $zero, L_80017B08
    if (ctx->r9 == 0) {
        // 0x80017AF4: nop
    
            goto L_80017B08;
    }
    // 0x80017AF4: nop

L_80017AF8:
    // 0x80017AF8: jal         0x80017D60
    // 0x80017AFC: nop

    func_80017D60(rdram, ctx);
        goto after_2;
    // 0x80017AFC: nop

    after_2:
    // 0x80017B00: b           L_80017B3C
    // 0x80017B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80017B3C;
    // 0x80017B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80017B08:
    // 0x80017B08: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80017B0C: addiu       $v1, $v1, -0x67E0
    ctx->r3 = ADD32(ctx->r3, -0X67E0);
L_80017B10:
    // 0x80017B10: lhu         $t2, 0x0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X0);
    // 0x80017B14: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80017B18: bne         $a0, $t2, L_80017B30
    if (ctx->r4 != ctx->r10) {
        // 0x80017B1C: nop
    
            goto L_80017B30;
    }
    // 0x80017B1C: nop

    // 0x80017B20: jal         0x80017D60
    // 0x80017B24: nop

    func_80017D60(rdram, ctx);
        goto after_3;
    // 0x80017B24: nop

    after_3:
    // 0x80017B28: b           L_80017B3C
    // 0x80017B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80017B3C;
    // 0x80017B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80017B30:
    // 0x80017B30: bne         $v0, $v1, L_80017B10
    if (ctx->r2 != ctx->r3) {
        // 0x80017B34: nop
    
            goto L_80017B10;
    }
    // 0x80017B34: nop

    // 0x80017B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80017B3C:
    // 0x80017B3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80017B40: jr          $ra
    // 0x80017B44: nop

    return;
    // 0x80017B44: nop

;}
RECOMP_FUNC void func_80017B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017B48: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80017B4C: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x80017B50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80017B54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017B58: lbu         $t6, 0x7D($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X7D);
    // 0x80017B5C: nop

    // 0x80017B60: beq         $t6, $zero, L_80017B7C
    if (ctx->r14 == 0) {
        // 0x80017B64: nop
    
            goto L_80017B7C;
    }
    // 0x80017B64: nop

    // 0x80017B68: jal         0x800194FC
    // 0x80017B6C: nop

    func_800194FC(rdram, ctx);
        goto after_0;
    // 0x80017B6C: nop

    after_0:
    // 0x80017B70: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80017B74: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x80017B78: nop

L_80017B7C:
    // 0x80017B7C: lhu         $t7, 0x9A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X9A);
    // 0x80017B80: nop

    // 0x80017B84: beq         $t7, $zero, L_80017BA0
    if (ctx->r15 == 0) {
        // 0x80017B88: nop
    
            goto L_80017BA0;
    }
    // 0x80017B88: nop

    // 0x80017B8C: jal         0x80018ED0
    // 0x80017B90: nop

    func_80018ED0(rdram, ctx);
        goto after_1;
    // 0x80017B90: nop

    after_1:
    // 0x80017B94: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80017B98: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x80017B9C: nop

L_80017BA0:
    // 0x80017BA0: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    // 0x80017BA4: nop

    // 0x80017BA8: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80017BAC: beq         $t9, $zero, L_80017BC8
    if (ctx->r25 == 0) {
        // 0x80017BB0: nop
    
            goto L_80017BC8;
    }
    // 0x80017BB0: nop

    // 0x80017BB4: jal         0x80017C18
    // 0x80017BB8: nop

    func_80017C18(rdram, ctx);
        goto after_2;
    // 0x80017BB8: nop

    after_2:
    // 0x80017BBC: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80017BC0: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x80017BC4: nop

L_80017BC8:
    // 0x80017BC8: lhu         $t0, 0x4C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X4C);
    // 0x80017BCC: nop

    // 0x80017BD0: beq         $t0, $zero, L_80017BEC
    if (ctx->r8 == 0) {
        // 0x80017BD4: nop
    
            goto L_80017BEC;
    }
    // 0x80017BD4: nop

    // 0x80017BD8: jal         0x80018144
    // 0x80017BDC: nop

    func_80018144(rdram, ctx);
        goto after_3;
    // 0x80017BDC: nop

    after_3:
    // 0x80017BE0: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80017BE4: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x80017BE8: nop

L_80017BEC:
    // 0x80017BEC: lbu         $t1, 0x6($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X6);
    // 0x80017BF0: nop

    // 0x80017BF4: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80017BF8: beq         $t2, $zero, L_80017C0C
    if (ctx->r10 == 0) {
        // 0x80017BFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80017C0C;
    }
    // 0x80017BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80017C00: jal         0x80017D60
    // 0x80017C04: nop

    func_80017D60(rdram, ctx);
        goto after_4;
    // 0x80017C04: nop

    after_4:
    // 0x80017C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80017C0C:
    // 0x80017C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80017C10: jr          $ra
    // 0x80017C14: nop

    return;
    // 0x80017C14: nop

;}
RECOMP_FUNC void func_80017C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017C18: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80017C1C: addiu       $a1, $a1, -0x5B68
    ctx->r5 = ADD32(ctx->r5, -0X5B68);
    // 0x80017C20: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80017C24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80017C28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017C2C: lbu         $t6, 0x6($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X6);
    // 0x80017C30: addiu       $at, $zero, 0x201
    ctx->r1 = ADD32(0, 0X201);
    // 0x80017C34: andi        $t7, $t6, 0xFD
    ctx->r15 = ctx->r14 & 0XFD;
    // 0x80017C38: sb          $t7, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r15;
    // 0x80017C3C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80017C40: addiu       $t5, $zero, 0x6000
    ctx->r13 = ADD32(0, 0X6000);
    // 0x80017C44: lw          $t8, 0x28($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X28);
    // 0x80017C48: lhu         $t9, 0x38($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X38);
    // 0x80017C4C: lh          $t1, 0x36($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X36);
    // 0x80017C50: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80017C54: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80017C58: beq         $a0, $at, L_80017C6C
    if (ctx->r4 == ctx->r1) {
        // 0x80017C5C: addu        $v0, $t0, $t1
        ctx->r2 = ADD32(ctx->r8, ctx->r9);
            goto L_80017C6C;
    }
    // 0x80017C5C: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x80017C60: addiu       $at, $zero, 0x203
    ctx->r1 = ADD32(0, 0X203);
    // 0x80017C64: bne         $a0, $at, L_80017C80
    if (ctx->r4 != ctx->r1) {
        // 0x80017C68: nop
    
            goto L_80017C80;
    }
    // 0x80017C68: nop

L_80017C6C:
    // 0x80017C6C: lhu         $t2, 0xA2($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0XA2);
    // 0x80017C70: nop

    // 0x80017C74: sll         $t3, $t2, 9
    ctx->r11 = S32(ctx->r10 << 9);
    // 0x80017C78: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x80017C7C: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
L_80017C80:
    // 0x80017C80: bgez        $v0, L_80017CB0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80017C84: lui         $t9, 0x800A
        ctx->r25 = S32(0X800A << 16);
            goto L_80017CB0;
    }
    // 0x80017C84: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80017C88: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80017C8C: slti        $at, $v0, 0x6000
    ctx->r1 = SIGNED(ctx->r2) < 0X6000 ? 1 : 0;
    // 0x80017C90: bne         $at, $zero, L_80017CA8
    if (ctx->r1 != 0) {
        // 0x80017C94: nop
    
            goto L_80017CA8;
    }
    // 0x80017C94: nop

L_80017C98:
    // 0x80017C98: addiu       $v0, $v0, -0x6000
    ctx->r2 = ADD32(ctx->r2, -0X6000);
    // 0x80017C9C: slti        $at, $v0, 0x6000
    ctx->r1 = SIGNED(ctx->r2) < 0X6000 ? 1 : 0;
    // 0x80017CA0: beq         $at, $zero, L_80017C98
    if (ctx->r1 == 0) {
        // 0x80017CA4: nop
    
            goto L_80017C98;
    }
    // 0x80017CA4: nop

L_80017CA8:
    // 0x80017CA8: b           L_80017CCC
    // 0x80017CAC: subu        $v0, $t5, $v0
    ctx->r2 = SUB32(ctx->r13, ctx->r2);
        goto L_80017CCC;
    // 0x80017CAC: subu        $v0, $t5, $v0
    ctx->r2 = SUB32(ctx->r13, ctx->r2);
L_80017CB0:
    // 0x80017CB0: slti        $at, $v0, 0x6000
    ctx->r1 = SIGNED(ctx->r2) < 0X6000 ? 1 : 0;
    // 0x80017CB4: bne         $at, $zero, L_80017CD0
    if (ctx->r1 != 0) {
        // 0x80017CB8: sra         $t7, $v0, 8
        ctx->r15 = S32(SIGNED(ctx->r2) >> 8);
            goto L_80017CD0;
    }
    // 0x80017CB8: sra         $t7, $v0, 8
    ctx->r15 = S32(SIGNED(ctx->r2) >> 8);
L_80017CBC:
    // 0x80017CBC: addiu       $v0, $v0, -0x6000
    ctx->r2 = ADD32(ctx->r2, -0X6000);
    // 0x80017CC0: slti        $at, $v0, 0x6000
    ctx->r1 = SIGNED(ctx->r2) < 0X6000 ? 1 : 0;
    // 0x80017CC4: beq         $at, $zero, L_80017CBC
    if (ctx->r1 == 0) {
        // 0x80017CC8: nop
    
            goto L_80017CBC;
    }
    // 0x80017CC8: nop

L_80017CCC:
    // 0x80017CCC: sra         $t7, $v0, 8
    ctx->r15 = S32(SIGNED(ctx->r2) >> 8);
L_80017CD0:
    // 0x80017CD0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80017CD4: addiu       $t9, $t9, -0x17B0
    ctx->r25 = ADD32(ctx->r25, -0X17B0);
    // 0x80017CD8: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80017CDC: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x80017CE0: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80017CE4: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80017CE8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80017CEC: sub.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x80017CF0: bgez        $t6, L_80017D08
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80017CF4: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80017D08;
    }
    // 0x80017CF4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80017CF8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80017CFC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80017D00: nop

    // 0x80017D04: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80017D08:
    // 0x80017D08: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80017D0C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80017D10: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80017D14: lui         $t0, 0x801A
    ctx->r8 = S32(0X801A << 16);
    // 0x80017D18: div.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80017D1C: lbu         $t0, -0x67F4($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X67F4);
    // 0x80017D20: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80017D24: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x80017D28: lui         $t2, 0x801A
    ctx->r10 = S32(0X801A << 16);
    // 0x80017D2C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80017D30: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80017D34: addiu       $t2, $t2, -0x6768
    ctx->r10 = ADD32(ctx->r10, -0X6768);
    // 0x80017D38: lw          $a0, 0x1890($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1890);
    // 0x80017D3C: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
    // 0x80017D40: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x80017D44: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80017D48: jal         0x800833F0
    // 0x80017D4C: nop

    func_800833F0(rdram, ctx);
        goto after_0;
    // 0x80017D4C: nop

    after_0:
    // 0x80017D50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80017D54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80017D58: jr          $ra
    // 0x80017D5C: nop

    return;
    // 0x80017D5C: nop

;}
RECOMP_FUNC void func_80017D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017D60: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80017D64: addiu       $v0, $v0, -0x5B68
    ctx->r2 = ADD32(ctx->r2, -0X5B68);
    // 0x80017D68: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80017D6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80017D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017D74: lbu         $t6, 0x6($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X6);
    // 0x80017D78: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x80017D7C: andi        $t7, $t6, 0xFE
    ctx->r15 = ctx->r14 & 0XFE;
    // 0x80017D80: sb          $t7, 0x6($t1)
    MEM_B(0X6, ctx->r9) = ctx->r15;
    // 0x80017D84: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80017D88: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80017D8C: lbu         $t8, 0x48($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X48);
    // 0x80017D90: lh          $t9, 0x40($t1)
    ctx->r25 = MEM_H(ctx->r9, 0X40);
    // 0x80017D94: lh          $t3, 0x42($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X42);
    // 0x80017D98: lhu         $t4, 0x3A($t1)
    ctx->r12 = MEM_HU(ctx->r9, 0X3A);
    // 0x80017D9C: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x80017DA0: addu        $t0, $t2, $t3
    ctx->r8 = ADD32(ctx->r10, ctx->r11);
    // 0x80017DA4: multu       $t0, $t4
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80017DA8: addiu       $v1, $v1, -0x67E2
    ctx->r3 = ADD32(ctx->r3, -0X67E2);
    // 0x80017DAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80017DB0: mflo        $t0
    ctx->r8 = lo;
    // 0x80017DB4: slt         $at, $t0, $at
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80017DB8: bne         $at, $zero, L_80017DC8
    if (ctx->r1 != 0) {
        // 0x80017DBC: nop
    
            goto L_80017DC8;
    }
    // 0x80017DBC: nop

    // 0x80017DC0: b           L_80017DDC
    // 0x80017DC4: addiu       $t0, $zero, 0x7FFF
    ctx->r8 = ADD32(0, 0X7FFF);
        goto L_80017DDC;
    // 0x80017DC4: addiu       $t0, $zero, 0x7FFF
    ctx->r8 = ADD32(0, 0X7FFF);
L_80017DC8:
    // 0x80017DC8: bgez        $t0, L_80017DD8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80017DCC: sra         $t5, $t0, 8
        ctx->r13 = S32(SIGNED(ctx->r8) >> 8);
            goto L_80017DD8;
    }
    // 0x80017DCC: sra         $t5, $t0, 8
    ctx->r13 = S32(SIGNED(ctx->r8) >> 8);
    // 0x80017DD0: b           L_80017DDC
    // 0x80017DD4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_80017DDC;
    // 0x80017DD4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_80017DD8:
    // 0x80017DD8: or          $t0, $t5, $zero
    ctx->r8 = ctx->r13 | 0;
L_80017DDC:
    // 0x80017DDC: lhu         $t6, 0x4A($t1)
    ctx->r14 = MEM_HU(ctx->r9, 0X4A);
    // 0x80017DE0: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80017DE4: multu       $t6, $t0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80017DE8: lbu         $v0, -0x67EA($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X67EA);
    // 0x80017DEC: mflo        $t0
    ctx->r8 = lo;
    // 0x80017DF0: sra         $t7, $t0, 8
    ctx->r15 = S32(SIGNED(ctx->r8) >> 8);
    // 0x80017DF4: beq         $v0, $zero, L_80017E0C
    if (ctx->r2 == 0) {
        // 0x80017DF8: or          $t0, $t7, $zero
        ctx->r8 = ctx->r15 | 0;
            goto L_80017E0C;
    }
    // 0x80017DF8: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x80017DFC: multu       $v0, $t7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80017E00: mflo        $t0
    ctx->r8 = lo;
    // 0x80017E04: sra         $t8, $t0, 8
    ctx->r24 = S32(SIGNED(ctx->r8) >> 8);
    // 0x80017E08: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
L_80017E0C:
    // 0x80017E0C: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x80017E10: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80017E14: andi        $t9, $a1, 0x7FFF
    ctx->r25 = ctx->r5 & 0X7FFF;
    // 0x80017E18: sltiu       $at, $t9, 0x100
    ctx->r1 = ctx->r25 < 0X100 ? 1 : 0;
    // 0x80017E1C: beq         $at, $zero, L_80017E68
    if (ctx->r1 == 0) {
        // 0x80017E20: lui         $t8, 0x801A
        ctx->r24 = S32(0X801A << 16);
            goto L_80017E68;
    }
    // 0x80017E20: lui         $t8, 0x801A
    ctx->r24 = S32(0X801A << 16);
    // 0x80017E24: lbu         $v0, -0x67ED($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X67ED);
    // 0x80017E28: nop

    // 0x80017E2C: beq         $v0, $zero, L_80017E44
    if (ctx->r2 == 0) {
        // 0x80017E30: nop
    
            goto L_80017E44;
    }
    // 0x80017E30: nop

    // 0x80017E34: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80017E38: mflo        $t0
    ctx->r8 = lo;
    // 0x80017E3C: sra         $t2, $t0, 8
    ctx->r10 = S32(SIGNED(ctx->r8) >> 8);
    // 0x80017E40: or          $t0, $t2, $zero
    ctx->r8 = ctx->r10 | 0;
L_80017E44:
    // 0x80017E44: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80017E48: lbu         $v0, -0x67E4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X67E4);
    // 0x80017E4C: nop

    // 0x80017E50: beq         $v0, $zero, L_80017E68
    if (ctx->r2 == 0) {
        // 0x80017E54: nop
    
            goto L_80017E68;
    }
    // 0x80017E54: nop

    // 0x80017E58: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80017E5C: mflo        $t0
    ctx->r8 = lo;
    // 0x80017E60: sra         $t3, $t0, 8
    ctx->r11 = S32(SIGNED(ctx->r8) >> 8);
    // 0x80017E64: or          $t0, $t3, $zero
    ctx->r8 = ctx->r11 | 0;
L_80017E68:
    // 0x80017E68: lhu         $t4, 0xA2($t1)
    ctx->r12 = MEM_HU(ctx->r9, 0XA2);
    // 0x80017E6C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80017E70: multu       $t4, $t0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80017E74: lbu         $v0, -0x67F1($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X67F1);
    // 0x80017E78: lui         $t4, 0x801A
    ctx->r12 = S32(0X801A << 16);
    // 0x80017E7C: addiu       $t4, $t4, -0x6768
    ctx->r12 = ADD32(ctx->r12, -0X6768);
    // 0x80017E80: lui         $t2, 0x801A
    ctx->r10 = S32(0X801A << 16);
    // 0x80017E84: mflo        $t0
    ctx->r8 = lo;
    // 0x80017E88: sra         $t5, $t0, 8
    ctx->r13 = S32(SIGNED(ctx->r8) >> 8);
    // 0x80017E8C: beq         $v0, $zero, L_80017EA4
    if (ctx->r2 == 0) {
        // 0x80017E90: or          $t0, $t5, $zero
        ctx->r8 = ctx->r13 | 0;
            goto L_80017EA4;
    }
    // 0x80017E90: or          $t0, $t5, $zero
    ctx->r8 = ctx->r13 | 0;
    // 0x80017E94: multu       $v0, $t5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80017E98: mflo        $t0
    ctx->r8 = lo;
    // 0x80017E9C: sra         $t6, $t0, 8
    ctx->r14 = S32(SIGNED(ctx->r8) >> 8);
    // 0x80017EA0: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
L_80017EA4:
    // 0x80017EA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80017EA8:
    // 0x80017EA8: lhu         $t7, 0x0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X0);
    // 0x80017EAC: nop

    // 0x80017EB0: bne         $a1, $t7, L_80017ED8
    if (ctx->r5 != ctx->r15) {
        // 0x80017EB4: nop
    
            goto L_80017ED8;
    }
    // 0x80017EB4: nop

    // 0x80017EB8: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x80017EBC: lbu         $t8, -0x67E3($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X67E3);
    // 0x80017EC0: nop

    // 0x80017EC4: multu       $t8, $t0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80017EC8: mflo        $t0
    ctx->r8 = lo;
    // 0x80017ECC: sra         $t9, $t0, 8
    ctx->r25 = S32(SIGNED(ctx->r8) >> 8);
    // 0x80017ED0: b           L_80017EE4
    // 0x80017ED4: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
        goto L_80017EE4;
    // 0x80017ED4: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
L_80017ED8:
    // 0x80017ED8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80017EDC: bne         $v0, $a0, L_80017EA8
    if (ctx->r2 != ctx->r4) {
        // 0x80017EE0: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80017EA8;
    }
    // 0x80017EE0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_80017EE4:
    // 0x80017EE4: lhu         $a3, 0x4C($t1)
    ctx->r7 = MEM_HU(ctx->r9, 0X4C);
    // 0x80017EE8: lbu         $t2, -0x67F4($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X67F4);
    // 0x80017EEC: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x80017EF0: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x80017EF4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80017EF8: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x80017EFC: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x80017F00: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80017F04: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80017F08: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x80017F0C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80017F10: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80017F14: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x80017F18: lw          $a0, 0x1890($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1890);
    // 0x80017F1C: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x80017F20: sll         $a3, $t7, 3
    ctx->r7 = S32(ctx->r15 << 3);
    // 0x80017F24: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80017F28: jal         0x800831B0
    // 0x80017F2C: addu        $a1, $t3, $t4
    ctx->r5 = ADD32(ctx->r11, ctx->r12);
    func_800831B0(rdram, ctx);
        goto after_0;
    // 0x80017F2C: addu        $a1, $t3, $t4
    ctx->r5 = ADD32(ctx->r11, ctx->r12);
    after_0:
    // 0x80017F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80017F34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80017F38: jr          $ra
    // 0x80017F3C: nop

    return;
    // 0x80017F3C: nop

;}
RECOMP_FUNC void func_80017F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017F40: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80017F44: addiu       $v1, $v1, -0x5B68
    ctx->r3 = ADD32(ctx->r3, -0X5B68);
    // 0x80017F48: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80017F4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80017F50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017F54: sh          $zero, 0x4C($t6)
    MEM_H(0X4C, ctx->r14) = 0;
    // 0x80017F58: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80017F5C: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x80017F60: lhu         $t7, 0x4E($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4E);
    // 0x80017F64: addiu       $t3, $zero, 0x100
    ctx->r11 = ADD32(0, 0X100);
    // 0x80017F68: beq         $t7, $zero, L_80017FB4
    if (ctx->r15 == 0) {
        // 0x80017F6C: nop
    
            goto L_80017FB4;
    }
    // 0x80017F6C: nop

    // 0x80017F70: jal         0x80017D60
    // 0x80017F74: sh          $t8, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r24;
    func_80017D60(rdram, ctx);
        goto after_0;
    // 0x80017F74: sh          $t8, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r24;
    after_0:
    // 0x80017F78: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80017F7C: addiu       $v1, $v1, -0x5B68
    ctx->r3 = ADD32(ctx->r3, -0X5B68);
    // 0x80017F80: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80017F84: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x80017F88: sb          $zero, 0x49($t9)
    MEM_B(0X49, ctx->r25) = 0;
    // 0x80017F8C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80017F90: nop

    // 0x80017F94: sh          $t0, 0x4A($t1)
    MEM_H(0X4A, ctx->r9) = ctx->r8;
    // 0x80017F98: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80017F9C: nop

    // 0x80017FA0: lhu         $t2, 0x4E($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X4E);
    // 0x80017FA4: jal         0x80017D60
    // 0x80017FA8: sh          $t2, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r10;
    func_80017D60(rdram, ctx);
        goto after_1;
    // 0x80017FA8: sh          $t2, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r10;
    after_1:
    // 0x80017FAC: b           L_80017FC8
    // 0x80017FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80017FC8;
    // 0x80017FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80017FB4:
    // 0x80017FB4: jal         0x80017D60
    // 0x80017FB8: sh          $t3, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r11;
    func_80017D60(rdram, ctx);
        goto after_2;
    // 0x80017FB8: sh          $t3, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r11;
    after_2:
    // 0x80017FBC: jal         0x80017FD4
    // 0x80017FC0: nop

    func_80017FD4(rdram, ctx);
        goto after_3;
    // 0x80017FC0: nop

    after_3:
    // 0x80017FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80017FC8:
    // 0x80017FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80017FCC: jr          $ra
    // 0x80017FD0: nop

    return;
    // 0x80017FD0: nop

;}
RECOMP_FUNC void func_80017FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017FD4: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80017FD8: addiu       $v1, $v1, -0x5B68
    ctx->r3 = ADD32(ctx->r3, -0X5B68);
    // 0x80017FDC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80017FE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80017FE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017FE8: lhu         $t6, 0x54($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X54);
    // 0x80017FEC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80017FF0: beq         $t6, $zero, L_80018034
    if (ctx->r14 == 0) {
        // 0x80017FF4: nop
    
            goto L_80018034;
    }
    // 0x80017FF4: nop

    // 0x80017FF8: sb          $t7, 0x49($v0)
    MEM_B(0X49, ctx->r2) = ctx->r15;
    // 0x80017FFC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80018000: nop

    // 0x80018004: lhu         $t8, 0x4A($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X4A);
    // 0x80018008: lhu         $t9, 0x54($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X54);
    // 0x8001800C: nop

    // 0x80018010: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x80018014: sh          $t0, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r8;
    // 0x80018018: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001801C: nop

    // 0x80018020: lhu         $t1, 0x50($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X50);
    // 0x80018024: jal         0x80017D60
    // 0x80018028: sh          $t1, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r9;
    func_80017D60(rdram, ctx);
        goto after_0;
    // 0x80018028: sh          $t1, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r9;
    after_0:
    // 0x8001802C: b           L_80018040
    // 0x80018030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80018040;
    // 0x80018030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80018034:
    // 0x80018034: jal         0x8001804C
    // 0x80018038: nop

    func_8001804C(rdram, ctx);
        goto after_1;
    // 0x80018038: nop

    after_1:
    // 0x8001803C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80018040:
    // 0x80018040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80018044: jr          $ra
    // 0x80018048: nop

    return;
    // 0x80018048: nop

;}
RECOMP_FUNC void func_8001804C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001804C: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80018050: addiu       $v1, $v1, -0x5B68
    ctx->r3 = ADD32(ctx->r3, -0X5B68);
    // 0x80018054: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80018058: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001805C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018060: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80018064: sb          $t6, 0x49($t7)
    MEM_B(0X49, ctx->r15) = ctx->r14;
    // 0x80018068: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001806C: nop

    // 0x80018070: lhu         $t8, 0x52($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X52);
    // 0x80018074: nop

    // 0x80018078: beq         $t8, $zero, L_8001809C
    if (ctx->r24 == 0) {
        // 0x8001807C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001809C;
    }
    // 0x8001807C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80018080: sh          $zero, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = 0;
    // 0x80018084: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80018088: nop

    // 0x8001808C: lhu         $t9, 0x52($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X52);
    // 0x80018090: jal         0x80017D60
    // 0x80018094: sh          $t9, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r25;
    func_80017D60(rdram, ctx);
        goto after_0;
    // 0x80018094: sh          $t9, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r25;
    after_0:
    // 0x80018098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001809C:
    // 0x8001809C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800180A0: jr          $ra
    // 0x800180A4: nop

    return;
    // 0x800180A4: nop

;}
RECOMP_FUNC void func_800180A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800180A8: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x800180AC: addiu       $v1, $v1, -0x5B68
    ctx->r3 = ADD32(ctx->r3, -0X5B68);
    // 0x800180B0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800180B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800180B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800180BC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800180C0: sb          $t6, 0x49($t7)
    MEM_B(0X49, ctx->r15) = ctx->r14;
    // 0x800180C4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800180C8: nop

    // 0x800180CC: sh          $zero, 0x4A($t8)
    MEM_H(0X4A, ctx->r24) = 0;
    // 0x800180D0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800180D4: nop

    // 0x800180D8: lhu         $t9, 0x56($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X56);
    // 0x800180DC: jal         0x80017D60
    // 0x800180E0: sh          $t9, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r25;
    func_80017D60(rdram, ctx);
        goto after_0;
    // 0x800180E0: sh          $t9, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r25;
    after_0:
    // 0x800180E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800180E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800180EC: jr          $ra
    // 0x800180F0: nop

    return;
    // 0x800180F0: nop

;}
RECOMP_FUNC void func_800180F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800180F4: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x800180F8: addiu       $v0, $v0, -0x5B68
    ctx->r2 = ADD32(ctx->r2, -0X5B68);
    // 0x800180FC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80018100: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80018104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018108: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8001810C: sb          $v1, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r3;
    // 0x80018110: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80018114: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80018118: sb          $t7, 0x49($t8)
    MEM_B(0X49, ctx->r24) = ctx->r15;
    // 0x8001811C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80018120: nop

    // 0x80018124: sh          $zero, 0x4A($t9)
    MEM_H(0X4A, ctx->r25) = 0;
    // 0x80018128: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8001812C: jal         0x80017D60
    // 0x80018130: sh          $v1, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = ctx->r3;
    func_80017D60(rdram, ctx);
        goto after_0;
    // 0x80018130: sh          $v1, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = ctx->r3;
    after_0:
    // 0x80018134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80018138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001813C: jr          $ra
    // 0x80018140: nop

    return;
    // 0x80018140: nop

;}
RECOMP_FUNC void func_80018144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018144: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80018148: addiu       $v1, $v1, -0x5B68
    ctx->r3 = ADD32(ctx->r3, -0X5B68);
    // 0x8001814C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80018150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80018154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018158: lhu         $t6, 0x4C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X4C);
    // 0x8001815C: nop

    // 0x80018160: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80018164: sh          $t7, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r15;
    // 0x80018168: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001816C: nop

    // 0x80018170: lhu         $t8, 0x4C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X4C);
    // 0x80018174: nop

    // 0x80018178: bne         $t8, $zero, L_800181BC
    if (ctx->r24 != 0) {
        // 0x8001817C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800181BC;
    }
    // 0x8001817C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80018180: lbu         $v1, 0x49($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X49);
    // 0x80018184: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80018188: beq         $v1, $zero, L_800181A0
    if (ctx->r3 == 0) {
        // 0x8001818C: nop
    
            goto L_800181A0;
    }
    // 0x8001818C: nop

    // 0x80018190: beq         $v1, $at, L_800181B0
    if (ctx->r3 == ctx->r1) {
        // 0x80018194: nop
    
            goto L_800181B0;
    }
    // 0x80018194: nop

    // 0x80018198: b           L_800181BC
    // 0x8001819C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800181BC;
    // 0x8001819C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800181A0:
    // 0x800181A0: jal         0x80017FD4
    // 0x800181A4: nop

    func_80017FD4(rdram, ctx);
        goto after_0;
    // 0x800181A4: nop

    after_0:
    // 0x800181A8: b           L_800181BC
    // 0x800181AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800181BC;
    // 0x800181AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800181B0:
    // 0x800181B0: jal         0x8001804C
    // 0x800181B4: nop

    func_8001804C(rdram, ctx);
        goto after_1;
    // 0x800181B4: nop

    after_1:
    // 0x800181B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800181BC:
    // 0x800181BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800181C0: jr          $ra
    // 0x800181C4: nop

    return;
    // 0x800181C4: nop

    // 0x800181C8: nop

    // 0x800181CC: nop

;}
RECOMP_FUNC void func_800181D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800181D0: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x800181D4: addiu       $v1, $v1, -0x5B64
    ctx->r3 = ADD32(ctx->r3, -0X5B64);
    // 0x800181D8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x800181DC: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x800181E0: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x800181E4: addiu       $v0, $v0, -0x5B68
    ctx->r2 = ADD32(ctx->r2, -0X5B68);
    // 0x800181E8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800181EC: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x800181F0: sh          $t8, 0x18($t9)
    MEM_H(0X18, ctx->r25) = ctx->r24;
    // 0x800181F4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x800181F8: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x800181FC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80018200: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80018204: jr          $ra
    // 0x80018208: sb          $zero, 0x1D($t2)
    MEM_B(0X1D, ctx->r10) = 0;
    return;
    // 0x80018208: sb          $zero, 0x1D($t2)
    MEM_B(0X1D, ctx->r10) = 0;
;}
RECOMP_FUNC void func_8001820C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001820C: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80018210: addiu       $a1, $a1, -0x5B64
    ctx->r5 = ADD32(ctx->r5, -0X5B64);
    // 0x80018214: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80018218: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8001821C: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
    // 0x80018220: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80018224: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80018228: nop

    // 0x8001822C: sb          $t7, 0x1D($t8)
    MEM_B(0X1D, ctx->r24) = ctx->r15;
    // 0x80018230: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x80018234: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80018238: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8001823C: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x80018240: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x80018244: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x80018248: sb          $t2, 0x1C($t3)
    MEM_B(0X1C, ctx->r11) = ctx->r10;
    // 0x8001824C: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x80018250: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80018254: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80018258: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x8001825C: lbu         $t6, 0x1C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1C);
    // 0x80018260: lhu         $t9, 0x18($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X18);
    // 0x80018264: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x80018268: lbu         $t0, 0x1D($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1D);
    // 0x8001826C: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80018270: subu        $v1, $t8, $t9
    ctx->r3 = SUB32(ctx->r24, ctx->r25);
    // 0x80018274: div         $zero, $v1, $t0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r8)));
    // 0x80018278: bne         $t0, $zero, L_80018284
    if (ctx->r8 != 0) {
        // 0x8001827C: nop
    
            goto L_80018284;
    }
    // 0x8001827C: nop

    // 0x80018280: break       7
    do_break(2147582592);
L_80018284:
    // 0x80018284: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80018288: bne         $t0, $at, L_8001829C
    if (ctx->r8 != ctx->r1) {
        // 0x8001828C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8001829C;
    }
    // 0x8001828C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80018290: bne         $v1, $at, L_8001829C
    if (ctx->r3 != ctx->r1) {
        // 0x80018294: nop
    
            goto L_8001829C;
    }
    // 0x80018294: nop

    // 0x80018298: break       6
    do_break(2147582616);
L_8001829C:
    // 0x8001829C: mflo        $t1
    ctx->r9 = lo;
    // 0x800182A0: sh          $t1, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = ctx->r9;
    // 0x800182A4: jr          $ra
    // 0x800182A8: nop

    return;
    // 0x800182A8: nop

;}
RECOMP_FUNC void func_800182AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800182AC: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x800182B0: addiu       $v1, $v1, -0x5B68
    ctx->r3 = ADD32(ctx->r3, -0X5B68);
    // 0x800182B4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800182B8: nop

    // 0x800182BC: lbu         $t6, 0x1D($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1D);
    // 0x800182C0: nop

    // 0x800182C4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800182C8: sb          $t7, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = ctx->r15;
    // 0x800182CC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800182D0: nop

    // 0x800182D4: lbu         $t8, 0x1D($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1D);
    // 0x800182D8: nop

    // 0x800182DC: beq         $t8, $zero, L_80018324
    if (ctx->r24 == 0) {
        // 0x800182E0: nop
    
            goto L_80018324;
    }
    // 0x800182E0: nop

    // 0x800182E4: lhu         $v1, 0x18($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X18);
    // 0x800182E8: lh          $t9, 0x1E($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X1E);
    // 0x800182EC: nop

    // 0x800182F0: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x800182F4: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x800182F8: beq         $at, $zero, L_8001830C
    if (ctx->r1 == 0) {
        // 0x800182FC: ori         $at, $zero, 0xFF01
        ctx->r1 = 0 | 0XFF01;
            goto L_8001830C;
    }
    // 0x800182FC: ori         $at, $zero, 0xFF01
    ctx->r1 = 0 | 0XFF01;
    // 0x80018300: b           L_8001831C
    // 0x80018304: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
        goto L_8001831C;
    // 0x80018304: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x80018308: ori         $at, $zero, 0xFF01
    ctx->r1 = 0 | 0XFF01;
L_8001830C:
    // 0x8001830C: slt         $at, $v1, $at
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80018310: bne         $at, $zero, L_8001831C
    if (ctx->r1 != 0) {
        // 0x80018314: nop
    
            goto L_8001831C;
    }
    // 0x80018314: nop

    // 0x80018318: ori         $v1, $zero, 0xFF00
    ctx->r3 = 0 | 0XFF00;
L_8001831C:
    // 0x8001831C: jr          $ra
    // 0x80018320: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    return;
    // 0x80018320: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
L_80018324:
    // 0x80018324: lbu         $t0, 0x1C($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1C);
    // 0x80018328: nop

    // 0x8001832C: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x80018330: sh          $t1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r9;
    // 0x80018334: jr          $ra
    // 0x80018338: nop

    return;
    // 0x80018338: nop

;}
RECOMP_FUNC void func_8001833C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001833C: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80018340: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
    // 0x80018344: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80018348: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001834C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018350: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80018354: lui         $at, 0x7F
    ctx->r1 = S32(0X7F << 16);
    // 0x80018358: and         $t6, $v1, $at
    ctx->r14 = ctx->r3 & ctx->r1;
    // 0x8001835C: beq         $t6, $zero, L_80018388
    if (ctx->r14 == 0) {
        // 0x80018360: srl         $t7, $t6, 8
        ctx->r15 = S32(U32(ctx->r14) >> 8);
            goto L_80018388;
    }
    // 0x80018360: srl         $t7, $t6, 8
    ctx->r15 = S32(U32(ctx->r14) >> 8);
    // 0x80018364: sb          $zero, 0x5B($v0)
    MEM_B(0X5B, ctx->r2) = 0;
    // 0x80018368: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8001836C: ori         $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 | 0X8000;
    // 0x80018370: jal         0x800189D0
    // 0x80018374: sh          $t8, 0x58($t9)
    MEM_H(0X58, ctx->r25) = ctx->r24;
    func_800189D0(rdram, ctx);
        goto after_0;
    // 0x80018374: sh          $t8, 0x58($t9)
    MEM_H(0X58, ctx->r25) = ctx->r24;
    after_0:
    // 0x80018378: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8001837C: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80018380: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x80018384: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
L_80018388:
    // 0x80018388: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x8001838C: addiu       $v1, $v1, -0x5B64
    ctx->r3 = ADD32(ctx->r3, -0X5B64);
    // 0x80018390: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80018394: nop

    // 0x80018398: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x8001839C: nop

    // 0x800183A0: sb          $t1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r9;
    // 0x800183A4: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x800183A8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800183AC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800183B0: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x800183B4: lbu         $a1, 0xC($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XC);
    // 0x800183B8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800183BC: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x800183C0: beq         $at, $zero, L_800183EC
    if (ctx->r1 == 0) {
        // 0x800183C4: addiu       $a0, $a0, -0x125C
        ctx->r4 = ADD32(ctx->r4, -0X125C);
            goto L_800183EC;
    }
    // 0x800183C4: addiu       $a0, $a0, -0x125C
    ctx->r4 = ADD32(ctx->r4, -0X125C);
    // 0x800183C8: lbu         $t5, 0xD($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XD);
    // 0x800183CC: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x800183D0: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800183D4: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x800183D8: lw          $a0, -0x1490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1490);
    // 0x800183DC: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x800183E0: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x800183E4: b           L_800183EC
    // 0x800183E8: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
        goto L_800183EC;
    // 0x800183E8: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
L_800183EC:
    // 0x800183EC: jal         0x80018404
    // 0x800183F0: nop

    func_80018404(rdram, ctx);
        goto after_1;
    // 0x800183F0: nop

    after_1:
    // 0x800183F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800183F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800183FC: jr          $ra
    // 0x80018400: nop

    return;
    // 0x80018400: nop

;}
RECOMP_FUNC void func_80018404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018404: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80018408: addiu       $v1, $v1, -0x5B68
    ctx->r3 = ADD32(ctx->r3, -0X5B68);
    // 0x8001840C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80018410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80018414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018418: lbu         $t6, 0xC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XC);
    // 0x8001841C: lui         $t8, 0x801A
    ctx->r24 = S32(0X801A << 16);
    // 0x80018420: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80018424: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80018428: lw          $t8, -0x6808($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6808);
    // 0x8001842C: lbu         $t9, 0xD($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XD);
    // 0x80018430: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x80018434: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80018438: addu        $t4, $a3, $t3
    ctx->r12 = ADD32(ctx->r7, ctx->r11);
    // 0x8001843C: lw          $t0, 0xC($t4)
    ctx->r8 = MEM_W(ctx->r12, 0XC);
    // 0x80018440: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x80018444: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x80018448: addiu       $t2, $t2, -0x1532
    ctx->r10 = ADD32(ctx->r10, -0X1532);
    // 0x8001844C: lw          $t5, 0x8($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X8);
    // 0x80018450: addiu       $a0, $a0, 0x5
    ctx->r4 = ADD32(ctx->r4, 0X5);
    // 0x80018454: sw          $t5, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r13;
    // 0x80018458: lb          $t6, -0x5($a0)
    ctx->r14 = MEM_B(ctx->r4, -0X5);
    // 0x8001845C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80018460: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x80018464: sh          $t7, 0x2C($t8)
    MEM_H(0X2C, ctx->r24) = ctx->r15;
    // 0x80018468: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001846C: lb          $t3, -0x4($a0)
    ctx->r11 = MEM_B(ctx->r4, -0X4);
    // 0x80018470: lh          $t9, 0x2C($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2C);
    // 0x80018474: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80018478: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x8001847C: sh          $t5, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r13;
    // 0x80018480: lb          $t6, -0x3($a0)
    ctx->r14 = MEM_B(ctx->r4, -0X3);
    // 0x80018484: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80018488: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8001848C: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x80018490: addu        $t3, $t2, $t8
    ctx->r11 = ADD32(ctx->r10, ctx->r24);
    // 0x80018494: lhu         $t9, 0x0($t3)
    ctx->r25 = MEM_HU(ctx->r11, 0X0);
    // 0x80018498: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x8001849C: sh          $t9, 0x4E($t4)
    MEM_H(0X4E, ctx->r12) = ctx->r25;
    // 0x800184A0: lbu         $a1, -0x2($a0)
    ctx->r5 = MEM_BU(ctx->r4, -0X2);
    // 0x800184A4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800184A8: andi        $t5, $a1, 0xF0
    ctx->r13 = ctx->r5 & 0XF0;
    // 0x800184AC: sra         $t6, $t5, 2
    ctx->r14 = S32(SIGNED(ctx->r13) >> 2);
    // 0x800184B0: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800184B4: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x800184B8: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x800184BC: lhu         $t3, -0x15B6($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X15B6);
    // 0x800184C0: andi        $t4, $a1, 0xF
    ctx->r12 = ctx->r5 & 0XF;
    // 0x800184C4: sh          $t3, 0x50($t9)
    MEM_H(0X50, ctx->r25) = ctx->r11;
    // 0x800184C8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x800184CC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800184D0: sh          $t5, 0x54($t6)
    MEM_H(0X54, ctx->r14) = ctx->r13;
    // 0x800184D4: lbu         $a2, -0x1($a0)
    ctx->r6 = MEM_BU(ctx->r4, -0X1);
    // 0x800184D8: nop

    // 0x800184DC: bne         $a2, $zero, L_800184F0
    if (ctx->r6 != 0) {
        // 0x800184E0: sll         $t8, $a2, 1
        ctx->r24 = S32(ctx->r6 << 1);
            goto L_800184F0;
    }
    // 0x800184E0: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x800184E4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800184E8: b           L_80018508
    // 0x800184EC: sh          $zero, 0x52($t7)
    MEM_H(0X52, ctx->r15) = 0;
        goto L_80018508;
    // 0x800184EC: sh          $zero, 0x52($t7)
    MEM_H(0X52, ctx->r15) = 0;
L_800184F0:
    // 0x800184F0: negu        $t3, $t8
    ctx->r11 = SUB32(0, ctx->r24);
    // 0x800184F4: addu        $t9, $t2, $t3
    ctx->r25 = ADD32(ctx->r10, ctx->r11);
    // 0x800184F8: lhu         $t4, 0x0($t9)
    ctx->r12 = MEM_HU(ctx->r25, 0X0);
    // 0x800184FC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80018500: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80018504: sh          $t5, 0x52($t6)
    MEM_H(0X52, ctx->r14) = ctx->r13;
L_80018508:
    // 0x80018508: lb          $t8, 0x0($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X0);
    // 0x8001850C: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x80018510: sll         $t3, $t8, 3
    ctx->r11 = S32(ctx->r24 << 3);
    // 0x80018514: negu        $t9, $t3
    ctx->r25 = SUB32(0, ctx->r11);
    // 0x80018518: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x8001851C: lhu         $t4, -0x1536($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1536);
    // 0x80018520: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80018524: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80018528: sh          $t4, 0x56($t5)
    MEM_H(0X56, ctx->r13) = ctx->r12;
    // 0x8001852C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80018530: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80018534: lhu         $t6, 0x58($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X58);
    // 0x80018538: nop

    // 0x8001853C: slt         $at, $t6, $at
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80018540: beq         $at, $zero, L_80018564
    if (ctx->r1 == 0) {
        // 0x80018544: nop
    
            goto L_80018564;
    }
    // 0x80018544: nop

    // 0x80018548: lb          $t7, 0x0($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X0);
    // 0x8001854C: nop

    // 0x80018550: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x80018554: sh          $t8, 0x58($v0)
    MEM_H(0X58, ctx->r2) = ctx->r24;
    // 0x80018558: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x8001855C: nop

    // 0x80018560: sb          $zero, 0x5B($t3)
    MEM_B(0X5B, ctx->r11) = 0;
L_80018564:
    // 0x80018564: jal         0x800189D0
    // 0x80018568: nop

    func_800189D0(rdram, ctx);
        goto after_0;
    // 0x80018568: nop

    after_0:
    // 0x8001856C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80018570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80018574: jr          $ra
    // 0x80018578: nop

    return;
    // 0x80018578: nop

;}
RECOMP_FUNC void func_8001857C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001857C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80018580: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x80018584: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80018588: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001858C: lbu         $t6, 0x25($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X25);
    // 0x80018590: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80018594: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80018598: addiu       $t8, $t7, -0x240
    ctx->r24 = ADD32(ctx->r15, -0X240);
    // 0x8001859C: addiu       $t9, $t9, -0x1254
    ctx->r25 = ADD32(ctx->r25, -0X1254);
    // 0x800185A0: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x800185A4: lb          $t0, 0x0($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X0);
    // 0x800185A8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800185AC: jal         0x80018404
    // 0x800185B0: sb          $t0, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r8;
    func_80018404(rdram, ctx);
        goto after_0;
    // 0x800185B0: sb          $t0, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r8;
    after_0:
    // 0x800185B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800185B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800185BC: jr          $ra
    // 0x800185C0: nop

    return;
    // 0x800185C0: nop

;}
RECOMP_FUNC void func_800185C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800185C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800185C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800185CC: jal         0x8001861C
    // 0x800185D0: nop

    func_8001861C(rdram, ctx);
        goto after_0;
    // 0x800185D0: nop

    after_0:
    // 0x800185D4: jal         0x8001833C
    // 0x800185D8: nop

    func_8001833C(rdram, ctx);
        goto after_1;
    // 0x800185D8: nop

    after_1:
    // 0x800185DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800185E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800185E4: jr          $ra
    // 0x800185E8: nop

    return;
    // 0x800185E8: nop

;}
RECOMP_FUNC void func_800185EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800185EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800185F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800185F4: jal         0x8001861C
    // 0x800185F8: nop

    func_8001861C(rdram, ctx);
        goto after_0;
    // 0x800185F8: nop

    after_0:
    // 0x800185FC: jal         0x8001833C
    // 0x80018600: nop

    func_8001833C(rdram, ctx);
        goto after_1;
    // 0x80018600: nop

    after_1:
    // 0x80018604: jal         0x80018958
    // 0x80018608: nop

    func_80018958(rdram, ctx);
        goto after_2;
    // 0x80018608: nop

    after_2:
    // 0x8001860C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80018610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80018614: jr          $ra
    // 0x80018618: nop

    return;
    // 0x80018618: nop

;}
RECOMP_FUNC void func_8001861C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001861C: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80018620: addiu       $v1, $v1, -0x5B64
    ctx->r3 = ADD32(ctx->r3, -0X5B64);
    // 0x80018624: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80018628: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8001862C: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80018630: addiu       $v0, $v0, -0x5B68
    ctx->r2 = ADD32(ctx->r2, -0X5B68);
    // 0x80018634: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80018638: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8001863C: sh          $t8, 0x3A($t9)
    MEM_H(0X3A, ctx->r25) = ctx->r24;
    // 0x80018640: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80018644: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x80018648: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8001864C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80018650: jr          $ra
    // 0x80018654: sb          $zero, 0x47($t2)
    MEM_B(0X47, ctx->r10) = 0;
    return;
    // 0x80018654: sb          $zero, 0x47($t2)
    MEM_B(0X47, ctx->r10) = 0;
;}
RECOMP_FUNC void func_80018658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018658: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x8001865C: addiu       $a1, $a1, -0x5B64
    ctx->r5 = ADD32(ctx->r5, -0X5B64);
    // 0x80018660: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80018664: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80018668: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
    // 0x8001866C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80018670: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80018674: nop

    // 0x80018678: sb          $t7, 0x47($t8)
    MEM_B(0X47, ctx->r24) = ctx->r15;
    // 0x8001867C: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x80018680: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80018684: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80018688: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x8001868C: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x80018690: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x80018694: sb          $t2, 0x46($t3)
    MEM_B(0X46, ctx->r11) = ctx->r10;
    // 0x80018698: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8001869C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800186A0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800186A4: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x800186A8: lbu         $t6, 0x46($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X46);
    // 0x800186AC: lhu         $t9, 0x3A($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X3A);
    // 0x800186B0: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x800186B4: lbu         $t0, 0x47($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X47);
    // 0x800186B8: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x800186BC: subu        $v1, $t8, $t9
    ctx->r3 = SUB32(ctx->r24, ctx->r25);
    // 0x800186C0: div         $zero, $v1, $t0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r8)));
    // 0x800186C4: bne         $t0, $zero, L_800186D0
    if (ctx->r8 != 0) {
        // 0x800186C8: nop
    
            goto L_800186D0;
    }
    // 0x800186C8: nop

    // 0x800186CC: break       7
    do_break(2147583692);
L_800186D0:
    // 0x800186D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800186D4: bne         $t0, $at, L_800186E8
    if (ctx->r8 != ctx->r1) {
        // 0x800186D8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800186E8;
    }
    // 0x800186D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800186DC: bne         $v1, $at, L_800186E8
    if (ctx->r3 != ctx->r1) {
        // 0x800186E0: nop
    
            goto L_800186E8;
    }
    // 0x800186E0: nop

    // 0x800186E4: break       6
    do_break(2147583716);
L_800186E8:
    // 0x800186E8: mflo        $t1
    ctx->r9 = lo;
    // 0x800186EC: sh          $t1, 0x44($v0)
    MEM_H(0X44, ctx->r2) = ctx->r9;
    // 0x800186F0: jr          $ra
    // 0x800186F4: nop

    return;
    // 0x800186F4: nop

;}
RECOMP_FUNC void func_800186F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800186F8: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x800186FC: addiu       $v1, $v1, -0x5B68
    ctx->r3 = ADD32(ctx->r3, -0X5B68);
    // 0x80018700: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80018704: nop

    // 0x80018708: lbu         $t6, 0x6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6);
    // 0x8001870C: nop

    // 0x80018710: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x80018714: sb          $t7, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r15;
    // 0x80018718: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001871C: nop

    // 0x80018720: lbu         $t8, 0x47($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X47);
    // 0x80018724: nop

    // 0x80018728: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8001872C: sb          $t9, 0x47($v0)
    MEM_B(0X47, ctx->r2) = ctx->r25;
    // 0x80018730: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80018734: nop

    // 0x80018738: lbu         $t0, 0x47($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X47);
    // 0x8001873C: nop

    // 0x80018740: beq         $t0, $zero, L_8001877C
    if (ctx->r8 == 0) {
        // 0x80018744: nop
    
            goto L_8001877C;
    }
    // 0x80018744: nop

    // 0x80018748: lhu         $v1, 0x3A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X3A);
    // 0x8001874C: lh          $t1, 0x44($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X44);
    // 0x80018750: ori         $at, $zero, 0xFF01
    ctx->r1 = 0 | 0XFF01;
    // 0x80018754: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x80018758: bgez        $v1, L_80018768
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8001875C: slt         $at, $v1, $at
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r1) ? 1 : 0;
            goto L_80018768;
    }
    // 0x8001875C: slt         $at, $v1, $at
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80018760: b           L_80018774
    // 0x80018764: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_80018774;
    // 0x80018764: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80018768:
    // 0x80018768: bne         $at, $zero, L_80018774
    if (ctx->r1 != 0) {
        // 0x8001876C: nop
    
            goto L_80018774;
    }
    // 0x8001876C: nop

    // 0x80018770: ori         $v1, $zero, 0xFF00
    ctx->r3 = 0 | 0XFF00;
L_80018774:
    // 0x80018774: jr          $ra
    // 0x80018778: sh          $v1, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = ctx->r3;
    return;
    // 0x80018778: sh          $v1, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = ctx->r3;
L_8001877C:
    // 0x8001877C: lbu         $t2, 0x46($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X46);
    // 0x80018780: nop

    // 0x80018784: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x80018788: sh          $t3, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = ctx->r11;
    // 0x8001878C: jr          $ra
    // 0x80018790: nop

    return;
    // 0x80018790: nop

;}
RECOMP_FUNC void func_80018794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018794: lui         $a2, 0x801A
    ctx->r6 = S32(0X801A << 16);
    // 0x80018798: addiu       $a2, $a2, -0x5B64
    ctx->r6 = ADD32(ctx->r6, -0X5B64);
    // 0x8001879C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x800187A0: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x800187A4: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x800187A8: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x800187AC: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x800187B0: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x800187B4: addiu       $a1, $a1, -0x5B68
    ctx->r5 = ADD32(ctx->r5, -0X5B68);
    // 0x800187B8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800187BC: lhu         $t0, -0x1532($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1532);
    // 0x800187C0: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x800187C4: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x800187C8: sh          $t0, 0x4E($t1)
    MEM_H(0X4E, ctx->r9) = ctx->r8;
    // 0x800187CC: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x800187D0: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x800187D4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800187D8: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x800187DC: lbu         $v1, 0x0($t3)
    ctx->r3 = MEM_BU(ctx->r11, 0X0);
    // 0x800187E0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800187E4: andi        $t5, $v1, 0xF0
    ctx->r13 = ctx->r3 & 0XF0;
    // 0x800187E8: sra         $t6, $t5, 2
    ctx->r14 = S32(SIGNED(ctx->r13) >> 2);
    // 0x800187EC: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800187F0: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x800187F4: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x800187F8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800187FC: lhu         $t9, -0x15B6($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X15B6);
    // 0x80018800: andi        $t1, $v1, 0xF
    ctx->r9 = ctx->r3 & 0XF;
    // 0x80018804: sh          $t9, 0x50($t0)
    MEM_H(0X50, ctx->r8) = ctx->r25;
    // 0x80018808: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x8001880C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80018810: jr          $ra
    // 0x80018814: sh          $t2, 0x54($t3)
    MEM_H(0X54, ctx->r11) = ctx->r10;
    return;
    // 0x80018814: sh          $t2, 0x54($t3)
    MEM_H(0X54, ctx->r11) = ctx->r10;
;}
RECOMP_FUNC void func_80018818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018818: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8001881C: addiu       $a0, $a0, -0x5B64
    ctx->r4 = ADD32(ctx->r4, -0X5B64);
    // 0x80018820: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80018824: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x80018828: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8001882C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x80018830: bne         $v0, $zero, L_8001887C
    if (ctx->r2 != 0) {
        // 0x80018834: sw          $t6, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r14;
            goto L_8001887C;
    }
    // 0x80018834: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80018838: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8001883C: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
    // 0x80018840: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80018844: nop

    // 0x80018848: sh          $zero, 0x52($t7)
    MEM_H(0X52, ctx->r15) = 0;
    // 0x8001884C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80018850: nop

    // 0x80018854: lbu         $t8, 0x22($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X22);
    // 0x80018858: nop

    // 0x8001885C: bne         $t8, $zero, L_800188D4
    if (ctx->r24 != 0) {
        // 0x80018860: nop
    
            goto L_800188D4;
    }
    // 0x80018860: nop

    // 0x80018864: lbu         $t9, 0x49($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X49);
    // 0x80018868: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001886C: bne         $t9, $at, L_800188D4
    if (ctx->r25 != ctx->r1) {
        // 0x80018870: addiu       $t0, $zero, 0x7FFF
        ctx->r8 = ADD32(0, 0X7FFF);
            goto L_800188D4;
    }
    // 0x80018870: addiu       $t0, $zero, 0x7FFF
    ctx->r8 = ADD32(0, 0X7FFF);
    // 0x80018874: jr          $ra
    // 0x80018878: sh          $t0, 0x4C($v1)
    MEM_H(0X4C, ctx->r3) = ctx->r8;
    return;
    // 0x80018878: sh          $t0, 0x4C($v1)
    MEM_H(0X4C, ctx->r3) = ctx->r8;
L_8001887C:
    // 0x8001887C: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x80018880: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x80018884: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80018888: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8001888C: lhu         $t3, -0x1532($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X1532);
    // 0x80018890: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
    // 0x80018894: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80018898: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8001889C: sh          $t4, 0x52($t5)
    MEM_H(0X52, ctx->r13) = ctx->r12;
    // 0x800188A0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800188A4: nop

    // 0x800188A8: lbu         $t6, 0x22($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X22);
    // 0x800188AC: nop

    // 0x800188B0: bne         $t6, $zero, L_800188D4
    if (ctx->r14 != 0) {
        // 0x800188B4: nop
    
            goto L_800188D4;
    }
    // 0x800188B4: nop

    // 0x800188B8: lbu         $t7, 0x49($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X49);
    // 0x800188BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800188C0: bne         $t7, $at, L_800188D4
    if (ctx->r15 != ctx->r1) {
        // 0x800188C4: nop
    
            goto L_800188D4;
    }
    // 0x800188C4: nop

    // 0x800188C8: lhu         $t8, 0x52($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X52);
    // 0x800188CC: nop

    // 0x800188D0: sh          $t8, 0x4C($v1)
    MEM_H(0X4C, ctx->r3) = ctx->r24;
L_800188D4:
    // 0x800188D4: jr          $ra
    // 0x800188D8: nop

    return;
    // 0x800188D8: nop

;}
RECOMP_FUNC void func_800188DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800188DC: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x800188E0: addiu       $a0, $a0, -0x5B64
    ctx->r4 = ADD32(ctx->r4, -0X5B64);
    // 0x800188E4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800188E8: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x800188EC: lbu         $t8, 0x0($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X0);
    // 0x800188F0: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x800188F4: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x800188F8: negu        $t0, $t9
    ctx->r8 = SUB32(0, ctx->r25);
    // 0x800188FC: addiu       $v1, $v1, -0x5B68
    ctx->r3 = ADD32(ctx->r3, -0X5B68);
    // 0x80018900: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80018904: lhu         $t1, -0x1536($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X1536);
    // 0x80018908: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8001890C: nop

    // 0x80018910: sh          $t1, 0x56($t2)
    MEM_H(0X56, ctx->r10) = ctx->r9;
    // 0x80018914: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80018918: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001891C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80018920: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x80018924: lbu         $t5, 0x22($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X22);
    // 0x80018928: nop

    // 0x8001892C: bne         $t5, $zero, L_80018950
    if (ctx->r13 != 0) {
        // 0x80018930: nop
    
            goto L_80018950;
    }
    // 0x80018930: nop

    // 0x80018934: lbu         $t6, 0x49($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X49);
    // 0x80018938: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8001893C: bne         $t6, $at, L_80018950
    if (ctx->r14 != ctx->r1) {
        // 0x80018940: nop
    
            goto L_80018950;
    }
    // 0x80018940: nop

    // 0x80018944: lhu         $t7, 0x56($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X56);
    // 0x80018948: nop

    // 0x8001894C: sh          $t7, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r15;
L_80018950:
    // 0x80018950: jr          $ra
    // 0x80018954: nop

    return;
    // 0x80018954: nop

;}
RECOMP_FUNC void func_80018958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018958: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x8001895C: addiu       $a1, $a1, -0x5B68
    ctx->r5 = ADD32(ctx->r5, -0X5B68);
    // 0x80018960: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80018964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80018968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001896C: lui         $a2, 0x801A
    ctx->r6 = S32(0X801A << 16);
    // 0x80018970: addiu       $a2, $a2, -0x5B64
    ctx->r6 = ADD32(ctx->r6, -0X5B64);
    // 0x80018974: sb          $zero, 0x5B($t6)
    MEM_B(0X5B, ctx->r14) = 0;
    // 0x80018978: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8001897C: nop

    // 0x80018980: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80018984: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x80018988: slti        $at, $a0, 0x80
    ctx->r1 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x8001898C: beq         $at, $zero, L_800189B0
    if (ctx->r1 == 0) {
        // 0x80018990: sw          $t7, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r15;
            goto L_800189B0;
    }
    // 0x80018990: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80018994: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x80018998: nop

    // 0x8001899C: lbu         $t9, 0x6($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X6);
    // 0x800189A0: nop

    // 0x800189A4: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x800189A8: bne         $t0, $zero, L_800189C4
    if (ctx->r8 != 0) {
        // 0x800189AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800189C4;
    }
    // 0x800189AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800189B0:
    // 0x800189B0: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x800189B4: sll         $t1, $a0, 8
    ctx->r9 = S32(ctx->r4 << 8);
    // 0x800189B8: jal         0x800189D0
    // 0x800189BC: sh          $t1, 0x58($t2)
    MEM_H(0X58, ctx->r10) = ctx->r9;
    func_800189D0(rdram, ctx);
        goto after_0;
    // 0x800189BC: sh          $t1, 0x58($t2)
    MEM_H(0X58, ctx->r10) = ctx->r9;
    after_0:
    // 0x800189C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800189C4:
    // 0x800189C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800189C8: jr          $ra
    // 0x800189CC: nop

    return;
    // 0x800189CC: nop

;}
RECOMP_FUNC void func_800189D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800189D0: lui         $t6, 0x801A
    ctx->r14 = S32(0X801A << 16);
    // 0x800189D4: lbu         $t6, -0x67F0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X67F0);
    // 0x800189D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800189DC: beq         $t6, $zero, L_800189EC
    if (ctx->r14 == 0) {
        // 0x800189E0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800189EC;
    }
    // 0x800189E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800189E4: b           L_80018A08
    // 0x800189E8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
        goto L_80018A08;
    // 0x800189E8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
L_800189EC:
    // 0x800189EC: lui         $t7, 0x801A
    ctx->r15 = S32(0X801A << 16);
    // 0x800189F0: lw          $t7, -0x5B68($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5B68);
    // 0x800189F4: nop

    // 0x800189F8: lhu         $a2, 0x58($t7)
    ctx->r6 = MEM_HU(ctx->r15, 0X58);
    // 0x800189FC: nop

    // 0x80018A00: sra         $t9, $a2, 8
    ctx->r25 = S32(SIGNED(ctx->r6) >> 8);
    // 0x80018A04: andi        $a2, $t9, 0x7F
    ctx->r6 = ctx->r25 & 0X7F;
L_80018A08:
    // 0x80018A08: lui         $t1, 0x801A
    ctx->r9 = S32(0X801A << 16);
    // 0x80018A0C: lbu         $t1, -0x67F4($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X67F4);
    // 0x80018A10: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80018A14: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x80018A18: lui         $t3, 0x801A
    ctx->r11 = S32(0X801A << 16);
    // 0x80018A1C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80018A20: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80018A24: addiu       $t3, $t3, -0x6768
    ctx->r11 = ADD32(ctx->r11, -0X6768);
    // 0x80018A28: lw          $a0, 0x1890($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1890);
    // 0x80018A2C: jal         0x80083250
    // 0x80018A30: addu        $a1, $t2, $t3
    ctx->r5 = ADD32(ctx->r10, ctx->r11);
    func_80083250(rdram, ctx);
        goto after_0;
    // 0x80018A30: addu        $a1, $t2, $t3
    ctx->r5 = ADD32(ctx->r10, ctx->r11);
    after_0:
    // 0x80018A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80018A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80018A3C: jr          $ra
    // 0x80018A40: nop

    return;
    // 0x80018A40: nop

;}
RECOMP_FUNC void func_80018A44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018A44: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80018A48: addiu       $a1, $a1, -0x5B64
    ctx->r5 = ADD32(ctx->r5, -0X5B64);
    // 0x80018A4C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80018A50: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80018A54: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
    // 0x80018A58: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80018A5C: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80018A60: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80018A64: sb          $t7, 0x5B($t8)
    MEM_B(0X5B, ctx->r24) = ctx->r15;
    // 0x80018A68: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x80018A6C: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80018A70: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80018A74: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x80018A78: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x80018A7C: nop

    // 0x80018A80: sb          $t2, 0x5A($t3)
    MEM_B(0X5A, ctx->r11) = ctx->r10;
    // 0x80018A84: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x80018A88: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80018A8C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80018A90: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x80018A94: lhu         $v1, 0x58($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X58);
    // 0x80018A98: nop

    // 0x80018A9C: slt         $at, $v1, $at
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80018AA0: beq         $at, $zero, L_80018ABC
    if (ctx->r1 == 0) {
        // 0x80018AA4: andi        $t1, $v1, 0x7FFF
        ctx->r9 = ctx->r3 & 0X7FFF;
            goto L_80018ABC;
    }
    // 0x80018AA4: andi        $t1, $v1, 0x7FFF
    ctx->r9 = ctx->r3 & 0X7FFF;
    // 0x80018AA8: lbu         $t6, 0x6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6);
    // 0x80018AAC: nop

    // 0x80018AB0: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x80018AB4: bne         $t7, $zero, L_80018B04
    if (ctx->r15 != 0) {
        // 0x80018AB8: nop
    
            goto L_80018B04;
    }
    // 0x80018AB8: nop

L_80018ABC:
    // 0x80018ABC: lbu         $t8, 0x5A($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5A);
    // 0x80018AC0: lbu         $t2, 0x5B($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X5B);
    // 0x80018AC4: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x80018AC8: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x80018ACC: subu        $a0, $t0, $t1
    ctx->r4 = SUB32(ctx->r8, ctx->r9);
    // 0x80018AD0: div         $zero, $a0, $t2
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r10)));
    // 0x80018AD4: bne         $t2, $zero, L_80018AE0
    if (ctx->r10 != 0) {
        // 0x80018AD8: nop
    
            goto L_80018AE0;
    }
    // 0x80018AD8: nop

    // 0x80018ADC: break       7
    do_break(2147584732);
L_80018AE0:
    // 0x80018AE0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80018AE4: bne         $t2, $at, L_80018AF8
    if (ctx->r10 != ctx->r1) {
        // 0x80018AE8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80018AF8;
    }
    // 0x80018AE8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80018AEC: bne         $a0, $at, L_80018AF8
    if (ctx->r4 != ctx->r1) {
        // 0x80018AF0: nop
    
            goto L_80018AF8;
    }
    // 0x80018AF0: nop

    // 0x80018AF4: break       6
    do_break(2147584756);
L_80018AF8:
    // 0x80018AF8: mflo        $t3
    ctx->r11 = lo;
    // 0x80018AFC: sh          $t3, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = ctx->r11;
    // 0x80018B00: nop

L_80018B04:
    // 0x80018B04: jr          $ra
    // 0x80018B08: nop

    return;
    // 0x80018B08: nop

;}
RECOMP_FUNC void func_80018B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018B0C: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80018B10: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
    // 0x80018B14: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80018B18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80018B1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018B20: lbu         $t6, 0x6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6);
    // 0x80018B24: nop

    // 0x80018B28: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x80018B2C: sb          $t7, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r15;
    // 0x80018B30: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80018B34: nop

    // 0x80018B38: lbu         $t0, 0x5B($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X5B);
    // 0x80018B3C: lhu         $t8, 0x58($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X58);
    // 0x80018B40: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80018B44: sb          $t1, 0x5B($v0)
    MEM_B(0X5B, ctx->r2) = ctx->r9;
    // 0x80018B48: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80018B4C: andi        $a1, $t8, 0x8000
    ctx->r5 = ctx->r24 & 0X8000;
    // 0x80018B50: lbu         $t2, 0x5B($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X5B);
    // 0x80018B54: nop

    // 0x80018B58: beq         $t2, $zero, L_80018B98
    if (ctx->r10 == 0) {
        // 0x80018B5C: nop
    
            goto L_80018B98;
    }
    // 0x80018B5C: nop

    // 0x80018B60: lhu         $v1, 0x58($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X58);
    // 0x80018B64: lh          $t4, 0x5C($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X5C);
    // 0x80018B68: andi        $t3, $v1, 0x7FFF
    ctx->r11 = ctx->r3 & 0X7FFF;
    // 0x80018B6C: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x80018B70: bgez        $v1, L_80018B80
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80018B74: ori         $at, $zero, 0x8000
        ctx->r1 = 0 | 0X8000;
            goto L_80018B80;
    }
    // 0x80018B74: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80018B78: b           L_80018B90
    // 0x80018B7C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_80018B90;
    // 0x80018B7C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80018B80:
    // 0x80018B80: slt         $at, $v1, $at
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80018B84: bne         $at, $zero, L_80018B90
    if (ctx->r1 != 0) {
        // 0x80018B88: nop
    
            goto L_80018B90;
    }
    // 0x80018B88: nop

    // 0x80018B8C: addiu       $v1, $zero, 0x7F00
    ctx->r3 = ADD32(0, 0X7F00);
L_80018B90:
    // 0x80018B90: b           L_80018BA8
    // 0x80018B94: sh          $v1, 0x58($v0)
    MEM_H(0X58, ctx->r2) = ctx->r3;
        goto L_80018BA8;
    // 0x80018B94: sh          $v1, 0x58($v0)
    MEM_H(0X58, ctx->r2) = ctx->r3;
L_80018B98:
    // 0x80018B98: lbu         $t5, 0x5A($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X5A);
    // 0x80018B9C: nop

    // 0x80018BA0: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x80018BA4: sh          $t6, 0x58($v0)
    MEM_H(0X58, ctx->r2) = ctx->r14;
L_80018BA8:
    // 0x80018BA8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80018BAC: nop

    // 0x80018BB0: lhu         $t7, 0x58($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X58);
    // 0x80018BB4: nop

    // 0x80018BB8: or          $t8, $t7, $a1
    ctx->r24 = ctx->r15 | ctx->r5;
    // 0x80018BBC: jal         0x800189D0
    // 0x80018BC0: sh          $t8, 0x58($v0)
    MEM_H(0X58, ctx->r2) = ctx->r24;
    func_800189D0(rdram, ctx);
        goto after_0;
    // 0x80018BC0: sh          $t8, 0x58($v0)
    MEM_H(0X58, ctx->r2) = ctx->r24;
    after_0:
    // 0x80018BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80018BC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80018BCC: jr          $ra
    // 0x80018BD0: nop

    return;
    // 0x80018BD0: nop

;}
RECOMP_FUNC void func_80018BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018BD4: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80018BD8: addiu       $v0, $v0, -0x5B64
    ctx->r2 = ADD32(ctx->r2, -0X5B64);
    // 0x80018BDC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80018BE0: lui         $t9, 0x801A
    ctx->r25 = S32(0X801A << 16);
    // 0x80018BE4: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80018BE8: lw          $t9, -0x5B68($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5B68);
    // 0x80018BEC: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x80018BF0: sh          $t8, 0x2E($t9)
    MEM_H(0X2E, ctx->r25) = ctx->r24;
    // 0x80018BF4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80018BF8: nop

    // 0x80018BFC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80018C00: jr          $ra
    // 0x80018C04: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    return;
    // 0x80018C04: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
;}
RECOMP_FUNC void func_80018C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018C08: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80018C0C: addiu       $v0, $v0, -0x5B64
    ctx->r2 = ADD32(ctx->r2, -0X5B64);
    // 0x80018C10: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80018C14: lui         $t9, 0x801A
    ctx->r25 = S32(0X801A << 16);
    // 0x80018C18: lb          $t7, 0x0($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X0);
    // 0x80018C1C: lw          $t9, -0x5B68($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5B68);
    // 0x80018C20: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80018C24: sh          $t8, 0x30($t9)
    MEM_H(0X30, ctx->r25) = ctx->r24;
    // 0x80018C28: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80018C2C: nop

    // 0x80018C30: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80018C34: jr          $ra
    // 0x80018C38: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    return;
    // 0x80018C38: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
;}
RECOMP_FUNC void func_80018C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018C3C: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80018C40: addiu       $a1, $a1, -0x5B64
    ctx->r5 = ADD32(ctx->r5, -0X5B64);
    // 0x80018C44: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80018C48: lui         $a2, 0x801A
    ctx->r6 = S32(0X801A << 16);
    // 0x80018C4C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80018C50: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x80018C54: slti        $at, $v0, 0x64
    ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x80018C58: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80018C5C: beq         $at, $zero, L_80018C78
    if (ctx->r1 == 0) {
        // 0x80018C60: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80018C78;
    }
    // 0x80018C60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80018C64: lui         $a2, 0x801A
    ctx->r6 = S32(0X801A << 16);
    // 0x80018C68: addiu       $a2, $a2, -0x5B68
    ctx->r6 = ADD32(ctx->r6, -0X5B68);
    // 0x80018C6C: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x80018C70: b           L_80018C94
    // 0x80018C74: sb          $v0, 0x93($t7)
    MEM_B(0X93, ctx->r15) = ctx->r2;
        goto L_80018C94;
    // 0x80018C74: sb          $v0, 0x93($t7)
    MEM_B(0X93, ctx->r15) = ctx->r2;
L_80018C78:
    // 0x80018C78: addiu       $a2, $a2, -0x5B68
    ctx->r6 = ADD32(ctx->r6, -0X5B68);
    // 0x80018C7C: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80018C80: addiu       $t9, $a0, -0x64
    ctx->r25 = ADD32(ctx->r4, -0X64);
    // 0x80018C84: sb          $zero, 0x93($t8)
    MEM_B(0X93, ctx->r24) = 0;
    // 0x80018C88: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x80018C8C: nop

    // 0x80018C90: sb          $t9, 0x9E($t0)
    MEM_B(0X9E, ctx->r8) = ctx->r25;
L_80018C94:
    // 0x80018C94: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80018C98: nop

    // 0x80018C9C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80018CA0: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x80018CA4: slti        $at, $v0, 0x40
    ctx->r1 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x80018CA8: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x80018CAC: beq         $at, $zero, L_80018CF4
    if (ctx->r1 == 0) {
        // 0x80018CB0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80018CF4;
    }
    // 0x80018CB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80018CB4: slti        $at, $a0, 0x20
    ctx->r1 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x80018CB8: beq         $at, $zero, L_80018CDC
    if (ctx->r1 == 0) {
        // 0x80018CBC: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_80018CDC;
    }
    // 0x80018CBC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80018CC0: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x80018CC4: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x80018CC8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80018CCC: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x80018CD0: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x80018CD4: b           L_80018D3C
    // 0x80018CD8: sb          $t2, 0x99($t3)
    MEM_B(0X99, ctx->r11) = ctx->r10;
        goto L_80018D3C;
    // 0x80018CD8: sb          $t2, 0x99($t3)
    MEM_B(0X99, ctx->r11) = ctx->r10;
L_80018CDC:
    // 0x80018CDC: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80018CE0: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80018CE4: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x80018CE8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80018CEC: b           L_80018D3C
    // 0x80018CF0: sb          $t5, 0x99($t6)
    MEM_B(0X99, ctx->r14) = ctx->r13;
        goto L_80018D3C;
    // 0x80018CF0: sb          $t5, 0x99($t6)
    MEM_B(0X99, ctx->r14) = ctx->r13;
L_80018CF4:
    // 0x80018CF4: slti        $at, $a0, 0x80
    ctx->r1 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x80018CF8: beq         $at, $zero, L_80018D18
    if (ctx->r1 == 0) {
        // 0x80018CFC: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_80018D18;
    }
    // 0x80018CFC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80018D00: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x80018D04: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80018D08: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x80018D0C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80018D10: b           L_80018D3C
    // 0x80018D14: sb          $t8, 0x99($t9)
    MEM_B(0X99, ctx->r25) = ctx->r24;
        goto L_80018D3C;
    // 0x80018D14: sb          $t8, 0x99($t9)
    MEM_B(0X99, ctx->r25) = ctx->r24;
L_80018D18:
    // 0x80018D18: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80018D1C: bne         $a0, $at, L_80018D30
    if (ctx->r4 != ctx->r1) {
        // 0x80018D20: addiu       $t1, $zero, 0x10
        ctx->r9 = ADD32(0, 0X10);
            goto L_80018D30;
    }
    // 0x80018D20: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80018D24: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x80018D28: b           L_80018D3C
    // 0x80018D2C: sb          $t1, 0x99($t2)
    MEM_B(0X99, ctx->r10) = ctx->r9;
        goto L_80018D3C;
    // 0x80018D2C: sb          $t1, 0x99($t2)
    MEM_B(0X99, ctx->r10) = ctx->r9;
L_80018D30:
    // 0x80018D30: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x80018D34: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x80018D38: sb          $t3, 0x99($t4)
    MEM_B(0X99, ctx->r12) = ctx->r11;
L_80018D3C:
    // 0x80018D3C: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x80018D40: nop

    // 0x80018D44: sb          $v0, 0x95($t5)
    MEM_B(0X95, ctx->r13) = ctx->r2;
    // 0x80018D48: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80018D4C: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x80018D50: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80018D54: nop

    // 0x80018D58: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x80018D5C: sh          $t8, 0x9A($t9)
    MEM_H(0X9A, ctx->r25) = ctx->r24;
    // 0x80018D60: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x80018D64: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80018D68: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80018D6C: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x80018D70: lbu         $a0, 0x9E($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X9E);
    // 0x80018D74: nop

    // 0x80018D78: beq         $a0, $zero, L_80018DBC
    if (ctx->r4 == 0) {
        // 0x80018D7C: nop
    
            goto L_80018DBC;
    }
    // 0x80018D7C: nop

    // 0x80018D80: lhu         $t2, 0x9A($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X9A);
    // 0x80018D84: nop

    // 0x80018D88: div         $zero, $t2, $a0
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r4)));
    // 0x80018D8C: bne         $a0, $zero, L_80018D98
    if (ctx->r4 != 0) {
        // 0x80018D90: nop
    
            goto L_80018D98;
    }
    // 0x80018D90: nop

    // 0x80018D94: break       7
    do_break(2147585428);
L_80018D98:
    // 0x80018D98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80018D9C: bne         $a0, $at, L_80018DB0
    if (ctx->r4 != ctx->r1) {
        // 0x80018DA0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80018DB0;
    }
    // 0x80018DA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80018DA4: bne         $t2, $at, L_80018DB0
    if (ctx->r10 != ctx->r1) {
        // 0x80018DA8: nop
    
            goto L_80018DB0;
    }
    // 0x80018DA8: nop

    // 0x80018DAC: break       6
    do_break(2147585452);
L_80018DB0:
    // 0x80018DB0: mflo        $t3
    ctx->r11 = lo;
    // 0x80018DB4: sh          $t3, 0xA0($v1)
    MEM_H(0XA0, ctx->r3) = ctx->r11;
    // 0x80018DB8: nop

L_80018DBC:
    // 0x80018DBC: jr          $ra
    // 0x80018DC0: nop

    return;
    // 0x80018DC0: nop

;}
RECOMP_FUNC void func_80018DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018DC4: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80018DC8: addiu       $v1, $v1, -0x5B68
    ctx->r3 = ADD32(ctx->r3, -0X5B68);
    // 0x80018DCC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80018DD0: nop

    // 0x80018DD4: lbu         $t6, 0x93($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X93);
    // 0x80018DD8: nop

    // 0x80018DDC: sb          $t6, 0x94($v0)
    MEM_B(0X94, ctx->r2) = ctx->r14;
    // 0x80018DE0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80018DE4: nop

    // 0x80018DE8: lbu         $t7, 0x9E($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X9E);
    // 0x80018DEC: nop

    // 0x80018DF0: sb          $t7, 0x9F($v0)
    MEM_B(0X9F, ctx->r2) = ctx->r15;
    // 0x80018DF4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80018DF8: nop

    // 0x80018DFC: lbu         $t8, 0x9E($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X9E);
    // 0x80018E00: nop

    // 0x80018E04: bne         $t8, $zero, L_80018E18
    if (ctx->r24 != 0) {
        // 0x80018E08: nop
    
            goto L_80018E18;
    }
    // 0x80018E08: nop

    // 0x80018E0C: lhu         $t9, 0x9A($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X9A);
    // 0x80018E10: b           L_80018E1C
    // 0x80018E14: sh          $t9, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = ctx->r25;
        goto L_80018E1C;
    // 0x80018E14: sh          $t9, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = ctx->r25;
L_80018E18:
    // 0x80018E18: sh          $zero, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = 0;
L_80018E1C:
    // 0x80018E1C: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80018E20: nop

    // 0x80018E24: sh          $zero, 0x96($t0)
    MEM_H(0X96, ctx->r8) = 0;
    // 0x80018E28: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80018E2C: nop

    // 0x80018E30: lhu         $t1, 0x96($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X96);
    // 0x80018E34: jr          $ra
    // 0x80018E38: sb          $t1, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r9;
    return;
    // 0x80018E38: sb          $t1, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r9;
;}
RECOMP_FUNC void func_80018E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018E3C: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80018E40: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
    // 0x80018E44: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80018E48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80018E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018E50: lbu         $v1, 0x94($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X94);
    // 0x80018E54: nop

    // 0x80018E58: beq         $v1, $zero, L_80018E68
    if (ctx->r3 == 0) {
        // 0x80018E5C: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_80018E68;
    }
    // 0x80018E5C: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x80018E60: b           L_80018EC0
    // 0x80018E64: sb          $t6, 0x94($v0)
    MEM_B(0X94, ctx->r2) = ctx->r14;
        goto L_80018EC0;
    // 0x80018E64: sb          $t6, 0x94($v0)
    MEM_B(0X94, ctx->r2) = ctx->r14;
L_80018E68:
    // 0x80018E68: lbu         $v1, 0x9F($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9F);
    // 0x80018E6C: nop

    // 0x80018E70: beq         $v1, $zero, L_80018EB8
    if (ctx->r3 == 0) {
        // 0x80018E74: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_80018EB8;
    }
    // 0x80018E74: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x80018E78: sb          $t7, 0x9F($v0)
    MEM_B(0X9F, ctx->r2) = ctx->r15;
    // 0x80018E7C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80018E80: nop

    // 0x80018E84: lbu         $t8, 0x9F($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X9F);
    // 0x80018E88: nop

    // 0x80018E8C: beq         $t8, $zero, L_80018EAC
    if (ctx->r24 == 0) {
        // 0x80018E90: nop
    
            goto L_80018EAC;
    }
    // 0x80018E90: nop

    // 0x80018E94: lhu         $t9, 0x9C($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X9C);
    // 0x80018E98: lhu         $t0, 0xA0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0XA0);
    // 0x80018E9C: nop

    // 0x80018EA0: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80018EA4: b           L_80018EB8
    // 0x80018EA8: sh          $t1, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = ctx->r9;
        goto L_80018EB8;
    // 0x80018EA8: sh          $t1, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = ctx->r9;
L_80018EAC:
    // 0x80018EAC: lhu         $t2, 0x9A($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X9A);
    // 0x80018EB0: nop

    // 0x80018EB4: sh          $t2, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = ctx->r10;
L_80018EB8:
    // 0x80018EB8: jal         0x80018ED0
    // 0x80018EBC: nop

    func_80018ED0(rdram, ctx);
        goto after_0;
    // 0x80018EBC: nop

    after_0:
L_80018EC0:
    // 0x80018EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80018EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80018EC8: jr          $ra
    // 0x80018ECC: nop

    return;
    // 0x80018ECC: nop

;}
RECOMP_FUNC void func_80018ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018ED0: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80018ED4: addiu       $a1, $a1, -0x5B68
    ctx->r5 = ADD32(ctx->r5, -0X5B68);
    // 0x80018ED8: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80018EDC: nop

    // 0x80018EE0: lbu         $t6, 0x94($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X94);
    // 0x80018EE4: nop

    // 0x80018EE8: bne         $t6, $zero, L_80019044
    if (ctx->r14 != 0) {
        // 0x80018EEC: nop
    
            goto L_80019044;
    }
    // 0x80018EEC: nop

    // 0x80018EF0: lhu         $t7, 0x96($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X96);
    // 0x80018EF4: lbu         $t8, 0x95($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X95);
    // 0x80018EF8: nop

    // 0x80018EFC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80018F00: sh          $t9, 0x96($v0)
    MEM_H(0X96, ctx->r2) = ctx->r25;
    // 0x80018F04: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80018F08: nop

    // 0x80018F0C: lhu         $v1, 0x96($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X96);
    // 0x80018F10: nop

    // 0x80018F14: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x80018F18: bne         $at, $zero, L_80019044
    if (ctx->r1 != 0) {
        // 0x80018F1C: andi        $t0, $v1, 0xFF
        ctx->r8 = ctx->r3 & 0XFF;
            goto L_80019044;
    }
    // 0x80018F1C: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
    // 0x80018F20: sh          $t0, 0x96($v0)
    MEM_H(0X96, ctx->r2) = ctx->r8;
    // 0x80018F24: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80018F28: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80018F2C: lbu         $t1, 0x6($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X6);
    // 0x80018F30: nop

    // 0x80018F34: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x80018F38: sb          $t2, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r10;
    // 0x80018F3C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80018F40: nop

    // 0x80018F44: lbu         $t3, 0x98($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X98);
    // 0x80018F48: lbu         $t4, 0x99($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X99);
    // 0x80018F4C: nop

    // 0x80018F50: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80018F54: sb          $t5, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r13;
    // 0x80018F58: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80018F5C: nop

    // 0x80018F60: lbu         $t6, 0x98($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X98);
    // 0x80018F64: nop

    // 0x80018F68: andi        $t7, $t6, 0x3F
    ctx->r15 = ctx->r14 & 0X3F;
    // 0x80018F6C: sb          $t7, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r15;
    // 0x80018F70: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80018F74: nop

    // 0x80018F78: lhu         $a0, 0x9C($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X9C);
    // 0x80018F7C: nop

    // 0x80018F80: slt         $at, $a0, $at
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80018F84: beq         $at, $zero, L_80018FC8
    if (ctx->r1 == 0) {
        // 0x80018F88: sra         $t5, $a0, 8
        ctx->r13 = S32(SIGNED(ctx->r4) >> 8);
            goto L_80018FC8;
    }
    // 0x80018F88: sra         $t5, $a0, 8
    ctx->r13 = S32(SIGNED(ctx->r4) >> 8);
    // 0x80018F8C: sra         $t8, $a0, 7
    ctx->r24 = S32(SIGNED(ctx->r4) >> 7);
    // 0x80018F90: sh          $t8, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r24;
    // 0x80018F94: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80018F98: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x80018F9C: lbu         $t9, 0x98($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X98);
    // 0x80018FA0: lh          $t2, 0x36($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X36);
    // 0x80018FA4: andi        $t0, $t9, 0x1F
    ctx->r8 = ctx->r25 & 0X1F;
    // 0x80018FA8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80018FAC: lbu         $t1, -0x1530($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1530);
    // 0x80018FB0: nop

    // 0x80018FB4: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80018FB8: mflo        $t3
    ctx->r11 = lo;
    // 0x80018FBC: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x80018FC0: b           L_80019018
    // 0x80018FC4: sh          $t4, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r12;
        goto L_80019018;
    // 0x80018FC4: sh          $t4, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r12;
L_80018FC8:
    // 0x80018FC8: andi        $t6, $t5, 0x7F
    ctx->r14 = ctx->r13 & 0X7F;
    // 0x80018FCC: sh          $t6, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r14;
    // 0x80018FD0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80018FD4: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x80018FD8: lh          $t7, 0x36($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X36);
    // 0x80018FDC: nop

    // 0x80018FE0: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x80018FE4: sh          $t8, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r24;
    // 0x80018FE8: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80018FEC: nop

    // 0x80018FF0: lbu         $t9, 0x98($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X98);
    // 0x80018FF4: lh          $t2, 0x36($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X36);
    // 0x80018FF8: andi        $t0, $t9, 0x1F
    ctx->r8 = ctx->r25 & 0X1F;
    // 0x80018FFC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80019000: lbu         $t1, -0x1530($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1530);
    // 0x80019004: nop

    // 0x80019008: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001900C: mflo        $t3
    ctx->r11 = lo;
    // 0x80019010: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x80019014: sh          $t4, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r12;
L_80019018:
    // 0x80019018: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8001901C: nop

    // 0x80019020: lbu         $t5, 0x98($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X98);
    // 0x80019024: nop

    // 0x80019028: slti        $at, $t5, 0x20
    ctx->r1 = SIGNED(ctx->r13) < 0X20 ? 1 : 0;
    // 0x8001902C: bne         $at, $zero, L_80019044
    if (ctx->r1 != 0) {
        // 0x80019030: nop
    
            goto L_80019044;
    }
    // 0x80019030: nop

    // 0x80019034: lh          $t6, 0x36($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X36);
    // 0x80019038: nop

    // 0x8001903C: negu        $t7, $t6
    ctx->r15 = SUB32(0, ctx->r14);
    // 0x80019040: sh          $t7, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r15;
L_80019044:
    // 0x80019044: jr          $ra
    // 0x80019048: nop

    return;
    // 0x80019048: nop

;}
RECOMP_FUNC void func_8001904C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001904C: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80019050: addiu       $v1, $v1, -0x5B64
    ctx->r3 = ADD32(ctx->r3, -0X5B64);
    // 0x80019054: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80019058: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8001905C: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
    // 0x80019060: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80019064: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
    // 0x80019068: nop

    // 0x8001906C: sb          $v0, 0x9E($t7)
    MEM_B(0X9E, ctx->r15) = ctx->r2;
    // 0x80019070: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80019074: nop

    // 0x80019078: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8001907C: beq         $v0, $zero, L_800190CC
    if (ctx->r2 == 0) {
        // 0x80019080: sw          $t9, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r25;
            goto L_800190CC;
    }
    // 0x80019080: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80019084: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80019088: nop

    // 0x8001908C: lhu         $t0, 0x9A($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X9A);
    // 0x80019090: lbu         $t1, 0x9E($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X9E);
    // 0x80019094: nop

    // 0x80019098: div         $zero, $t0, $t1
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r9)));
    // 0x8001909C: bne         $t1, $zero, L_800190A8
    if (ctx->r9 != 0) {
        // 0x800190A0: nop
    
            goto L_800190A8;
    }
    // 0x800190A0: nop

    // 0x800190A4: break       7
    do_break(2147586212);
L_800190A8:
    // 0x800190A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800190AC: bne         $t1, $at, L_800190C0
    if (ctx->r9 != ctx->r1) {
        // 0x800190B0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800190C0;
    }
    // 0x800190B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800190B4: bne         $t0, $at, L_800190C0
    if (ctx->r8 != ctx->r1) {
        // 0x800190B8: nop
    
            goto L_800190C0;
    }
    // 0x800190B8: nop

    // 0x800190BC: break       6
    do_break(2147586236);
L_800190C0:
    // 0x800190C0: mflo        $t2
    ctx->r10 = lo;
    // 0x800190C4: sh          $t2, 0xA0($v0)
    MEM_H(0XA0, ctx->r2) = ctx->r10;
    // 0x800190C8: nop

L_800190CC:
    // 0x800190CC: jr          $ra
    // 0x800190D0: nop

    return;
    // 0x800190D0: nop

;}
RECOMP_FUNC void func_800190D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800190D4: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x800190D8: addiu       $a0, $a0, -0x5B64
    ctx->r4 = ADD32(ctx->r4, -0X5B64);
    // 0x800190DC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800190E0: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x800190E4: addiu       $v1, $v1, -0x5B68
    ctx->r3 = ADD32(ctx->r3, -0X5B68);
    // 0x800190E8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800190EC: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x800190F0: nop

    // 0x800190F4: sb          $t7, 0x92($t8)
    MEM_B(0X92, ctx->r24) = ctx->r15;
    // 0x800190F8: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x800190FC: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80019100: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80019104: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x80019108: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x8001910C: nop

    // 0x80019110: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x80019114: sh          $t3, 0x8E($t4)
    MEM_H(0X8E, ctx->r12) = ctx->r11;
    // 0x80019118: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8001911C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80019120: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80019124: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80019128: lbu         $t9, 0x0($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X0);
    // 0x8001912C: lhu         $t7, 0x8E($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X8E);
    // 0x80019130: nop

    // 0x80019134: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80019138: sh          $t0, 0x8E($v0)
    MEM_H(0X8E, ctx->r2) = ctx->r8;
    // 0x8001913C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80019140: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x80019144: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80019148: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8001914C: sb          $zero, 0x8D($t3)
    MEM_B(0X8D, ctx->r11) = 0;
    // 0x80019150: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80019154: nop

    // 0x80019158: lbu         $t4, 0x8D($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X8D);
    // 0x8001915C: nop

    // 0x80019160: sh          $t4, 0x90($v0)
    MEM_H(0X90, ctx->r2) = ctx->r12;
    // 0x80019164: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80019168: nop

    // 0x8001916C: lbu         $t5, 0x92($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X92);
    // 0x80019170: nop

    // 0x80019174: bne         $t5, $zero, L_80019180
    if (ctx->r13 != 0) {
        // 0x80019178: nop
    
            goto L_80019180;
    }
    // 0x80019178: nop

    // 0x8001917C: sh          $zero, 0x38($v0)
    MEM_H(0X38, ctx->r2) = 0;
L_80019180:
    // 0x80019180: jr          $ra
    // 0x80019184: nop

    return;
    // 0x80019184: nop

;}
RECOMP_FUNC void func_80019188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019188: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8001918C: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
    // 0x80019190: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80019194: nop

    // 0x80019198: lhu         $t6, 0x90($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X90);
    // 0x8001919C: lbu         $t7, 0x92($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X92);
    // 0x800191A0: nop

    // 0x800191A4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800191A8: sh          $t8, 0x90($v0)
    MEM_H(0X90, ctx->r2) = ctx->r24;
    // 0x800191AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800191B0: nop

    // 0x800191B4: lhu         $v1, 0x90($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X90);
    // 0x800191B8: nop

    // 0x800191BC: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x800191C0: bne         $at, $zero, L_80019278
    if (ctx->r1 != 0) {
        // 0x800191C4: andi        $t9, $v1, 0xFF
        ctx->r25 = ctx->r3 & 0XFF;
            goto L_80019278;
    }
    // 0x800191C4: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x800191C8: sh          $t9, 0x90($v0)
    MEM_H(0X90, ctx->r2) = ctx->r25;
    // 0x800191CC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800191D0: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x800191D4: lbu         $t0, 0x6($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X6);
    // 0x800191D8: addiu       $a1, $a1, -0x1510
    ctx->r5 = ADD32(ctx->r5, -0X1510);
    // 0x800191DC: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x800191E0: sb          $t1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r9;
    // 0x800191E4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800191E8: nop

    // 0x800191EC: lbu         $t2, 0x8D($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X8D);
    // 0x800191F0: nop

    // 0x800191F4: addu        $t3, $a1, $t2
    ctx->r11 = ADD32(ctx->r5, ctx->r10);
    // 0x800191F8: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x800191FC: nop

    // 0x80019200: sh          $t4, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r12;
    // 0x80019204: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80019208: nop

    // 0x8001920C: lbu         $t5, 0x8D($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X8D);
    // 0x80019210: nop

    // 0x80019214: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80019218: sb          $t6, 0x8D($v0)
    MEM_B(0X8D, ctx->r2) = ctx->r14;
    // 0x8001921C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80019220: nop

    // 0x80019224: lbu         $t7, 0x8D($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X8D);
    // 0x80019228: nop

    // 0x8001922C: andi        $t8, $t7, 0x7F
    ctx->r24 = ctx->r15 & 0X7F;
    // 0x80019230: sb          $t8, 0x8D($v0)
    MEM_B(0X8D, ctx->r2) = ctx->r24;
    // 0x80019234: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80019238: nop

    // 0x8001923C: lbu         $t0, 0x8D($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X8D);
    // 0x80019240: lhu         $t9, 0x38($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X38);
    // 0x80019244: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x80019248: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x8001924C: nop

    // 0x80019250: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x80019254: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x80019258: sh          $t4, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r12;
    // 0x8001925C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80019260: nop

    // 0x80019264: lhu         $t5, 0x38($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X38);
    // 0x80019268: lhu         $t6, 0x8E($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X8E);
    // 0x8001926C: nop

    // 0x80019270: and         $t7, $t5, $t6
    ctx->r15 = ctx->r13 & ctx->r14;
    // 0x80019274: sh          $t7, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r15;
L_80019278:
    // 0x80019278: jr          $ra
    // 0x8001927C: nop

    return;
    // 0x8001927C: nop

;}
RECOMP_FUNC void func_80019280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019280: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80019284: addiu       $v0, $v0, -0x5B64
    ctx->r2 = ADD32(ctx->r2, -0X5B64);
    // 0x80019288: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8001928C: nop

    // 0x80019290: addiu       $t7, $t6, 0x3
    ctx->r15 = ADD32(ctx->r14, 0X3);
    // 0x80019294: jr          $ra
    // 0x80019298: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    return;
    // 0x80019298: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_8001929C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001929C: lui         $a2, 0x801A
    ctx->r6 = S32(0X801A << 16);
    // 0x800192A0: addiu       $a2, $a2, -0x5B68
    ctx->r6 = ADD32(ctx->r6, -0X5B68);
    // 0x800192A4: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x800192A8: nop

    // 0x800192AC: lbu         $t6, 0x7D($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X7D);
    // 0x800192B0: lhu         $t8, 0x18($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X18);
    // 0x800192B4: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x800192B8: divu        $zero, $t7, $t8
    lo = S32(U32(ctx->r15) / U32(ctx->r24)); hi = S32(U32(ctx->r15) % U32(ctx->r24));
    // 0x800192BC: lw          $t1, 0x80($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X80);
    // 0x800192C0: lw          $t2, 0x28($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X28);
    // 0x800192C4: bne         $t8, $zero, L_800192D0
    if (ctx->r24 != 0) {
        // 0x800192C8: nop
    
            goto L_800192D0;
    }
    // 0x800192C8: nop

    // 0x800192CC: break       7
    do_break(2147586764);
L_800192D0:
    // 0x800192D0: subu        $a0, $t1, $t2
    ctx->r4 = SUB32(ctx->r9, ctx->r10);
    // 0x800192D4: mflo        $v0
    ctx->r2 = lo;
    // 0x800192D8: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x800192DC: addiu       $v0, $t9, 0x1
    ctx->r2 = ADD32(ctx->r25, 0X1);
    // 0x800192E0: andi        $t0, $v0, 0xFFFF
    ctx->r8 = ctx->r2 & 0XFFFF;
    // 0x800192E4: div         $zero, $a0, $t0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r8)));
    // 0x800192E8: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x800192EC: bne         $v0, $zero, L_800192F8
    if (ctx->r2 != 0) {
        // 0x800192F0: nop
    
            goto L_800192F8;
    }
    // 0x800192F0: nop

    // 0x800192F4: break       7
    do_break(2147586804);
L_800192F8:
    // 0x800192F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800192FC: bne         $v0, $at, L_80019310
    if (ctx->r2 != ctx->r1) {
        // 0x80019300: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80019310;
    }
    // 0x80019300: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80019304: bne         $a0, $at, L_80019310
    if (ctx->r4 != ctx->r1) {
        // 0x80019308: nop
    
            goto L_80019310;
    }
    // 0x80019308: nop

    // 0x8001930C: break       6
    do_break(2147586828);
L_80019310:
    // 0x80019310: mflo        $t3
    ctx->r11 = lo;
    // 0x80019314: sw          $t3, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->r11;
    // 0x80019318: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8001931C: nop

    // 0x80019320: lw          $a1, 0x84($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X84);
    // 0x80019324: nop

    // 0x80019328: bne         $a1, $zero, L_80019348
    if (ctx->r5 != 0) {
        // 0x8001932C: nop
    
            goto L_80019348;
    }
    // 0x8001932C: nop

    // 0x80019330: bgez        $a0, L_80019344
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80019334: addiu       $t5, $a1, 0x1
        ctx->r13 = ADD32(ctx->r5, 0X1);
            goto L_80019344;
    }
    // 0x80019334: addiu       $t5, $a1, 0x1
    ctx->r13 = ADD32(ctx->r5, 0X1);
    // 0x80019338: addiu       $t4, $a1, -0x1
    ctx->r12 = ADD32(ctx->r5, -0X1);
    // 0x8001933C: jr          $ra
    // 0x80019340: sw          $t4, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->r12;
    return;
    // 0x80019340: sw          $t4, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->r12;
L_80019344:
    // 0x80019344: sw          $t5, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->r13;
L_80019348:
    // 0x80019348: jr          $ra
    // 0x8001934C: nop

    return;
    // 0x8001934C: nop

;}
RECOMP_FUNC void func_80019350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019350: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80019354: addiu       $a0, $a0, -0x5B64
    ctx->r4 = ADD32(ctx->r4, -0X5B64);
    // 0x80019358: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x8001935C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80019360: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019364: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80019368: addiu       $t7, $a1, 0x1
    ctx->r15 = ADD32(ctx->r5, 0X1);
    // 0x8001936C: xori        $t6, $v0, 0xE4
    ctx->r14 = ctx->r2 ^ 0XE4;
    // 0x80019370: bne         $t6, $zero, L_80019434
    if (ctx->r14 != 0) {
        // 0x80019374: sw          $t7, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r15;
            goto L_80019434;
    }
    // 0x80019374: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80019378: lui         $a2, 0x801A
    ctx->r6 = S32(0X801A << 16);
    // 0x8001937C: addiu       $a2, $a2, -0x5B68
    ctx->r6 = ADD32(ctx->r6, -0X5B68);
    // 0x80019380: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80019384: nop

    // 0x80019388: lh          $t8, 0x8A($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X8A);
    // 0x8001938C: nop

    // 0x80019390: bne         $t8, $zero, L_80019418
    if (ctx->r24 != 0) {
        // 0x80019394: nop
    
            goto L_80019418;
    }
    // 0x80019394: nop

    // 0x80019398: sb          $zero, 0x8C($v0)
    MEM_B(0X8C, ctx->r2) = 0;
    // 0x8001939C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x800193A0: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x800193A4: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x800193A8: nop

    // 0x800193AC: sb          $t0, 0x7C($t1)
    MEM_B(0X7C, ctx->r9) = ctx->r8;
    // 0x800193B0: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x800193B4: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x800193B8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800193BC: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x800193C0: lbu         $t5, 0x0($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X0);
    // 0x800193C4: nop

    // 0x800193C8: sb          $t5, 0x7D($t6)
    MEM_B(0X7D, ctx->r14) = ctx->r13;
    // 0x800193CC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800193D0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x800193D4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800193D8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800193DC: lbu         $v1, 0x0($t8)
    ctx->r3 = MEM_BU(ctx->r24, 0X0);
    // 0x800193E0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800193E4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800193E8: lbu         $t0, 0x25($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X25);
    // 0x800193EC: lw          $t2, 0x28($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X28);
    // 0x800193F0: subu        $v1, $v1, $t0
    ctx->r3 = SUB32(ctx->r3, ctx->r8);
    // 0x800193F4: sll         $t1, $v1, 8
    ctx->r9 = S32(ctx->r3 << 8);
    // 0x800193F8: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x800193FC: jal         0x8001929C
    // 0x80019400: sw          $t3, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r11;
    func_8001929C(rdram, ctx);
        goto after_0;
    // 0x80019400: sw          $t3, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r11;
    after_0:
    // 0x80019404: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80019408: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x8001940C: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80019410: b           L_80019428
    // 0x80019414: addiu       $a0, $a0, -0x5B64
    ctx->r4 = ADD32(ctx->r4, -0X5B64);
        goto L_80019428;
    // 0x80019414: addiu       $a0, $a0, -0x5B64
    ctx->r4 = ADD32(ctx->r4, -0X5B64);
L_80019418:
    // 0x80019418: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8001941C: nop

    // 0x80019420: addiu       $t5, $t4, 0x3
    ctx->r13 = ADD32(ctx->r12, 0X3);
    // 0x80019424: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
L_80019428:
    // 0x80019428: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8001942C: nop

    // 0x80019430: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80019434:
    // 0x80019434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001943C: jr          $ra
    // 0x80019440: nop

    return;
    // 0x80019440: nop

;}
RECOMP_FUNC void func_80019444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019444: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80019448: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
    // 0x8001944C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80019450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80019454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019458: lbu         $t6, 0x8C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8C);
    // 0x8001945C: nop

    // 0x80019460: bne         $t6, $zero, L_800194E4
    if (ctx->r14 != 0) {
        // 0x80019464: nop
    
            goto L_800194E4;
    }
    // 0x80019464: nop

    // 0x80019468: lbu         $v1, 0x7C($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X7C);
    // 0x8001946C: nop

    // 0x80019470: beq         $v1, $zero, L_80019480
    if (ctx->r3 == 0) {
        // 0x80019474: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_80019480;
    }
    // 0x80019474: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x80019478: b           L_800194EC
    // 0x8001947C: sb          $t7, 0x7C($v0)
    MEM_B(0X7C, ctx->r2) = ctx->r15;
        goto L_800194EC;
    // 0x8001947C: sb          $t7, 0x7C($v0)
    MEM_B(0X7C, ctx->r2) = ctx->r15;
L_80019480:
    // 0x80019480: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    // 0x80019484: nop

    // 0x80019488: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x8001948C: sb          $t9, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r25;
    // 0x80019490: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80019494: nop

    // 0x80019498: lbu         $t0, 0x7D($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X7D);
    // 0x8001949C: nop

    // 0x800194A0: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800194A4: sb          $t1, 0x7D($v0)
    MEM_B(0X7D, ctx->r2) = ctx->r9;
    // 0x800194A8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800194AC: nop

    // 0x800194B0: lbu         $t2, 0x7D($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X7D);
    // 0x800194B4: nop

    // 0x800194B8: beq         $t2, $zero, L_800194D8
    if (ctx->r10 == 0) {
        // 0x800194BC: nop
    
            goto L_800194D8;
    }
    // 0x800194BC: nop

    // 0x800194C0: lw          $t3, 0x28($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X28);
    // 0x800194C4: lw          $t4, 0x84($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X84);
    // 0x800194C8: nop

    // 0x800194CC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800194D0: b           L_800194EC
    // 0x800194D4: sw          $t5, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r13;
        goto L_800194EC;
    // 0x800194D4: sw          $t5, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r13;
L_800194D8:
    // 0x800194D8: lw          $t6, 0x80($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X80);
    // 0x800194DC: b           L_800194EC
    // 0x800194E0: sw          $t6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r14;
        goto L_800194EC;
    // 0x800194E0: sw          $t6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r14;
L_800194E4:
    // 0x800194E4: jal         0x800196F4
    // 0x800194E8: nop

    func_800196F4(rdram, ctx);
        goto after_0;
    // 0x800194E8: nop

    after_0:
L_800194EC:
    // 0x800194EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800194F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800194F4: jr          $ra
    // 0x800194F8: nop

    return;
    // 0x800194F8: nop

;}
RECOMP_FUNC void func_800194FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800194FC: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80019500: addiu       $v1, $v1, -0x5B68
    ctx->r3 = ADD32(ctx->r3, -0X5B68);
    // 0x80019504: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80019508: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001950C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019510: lbu         $t6, 0x8C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8C);
    // 0x80019514: nop

    // 0x80019518: bne         $t6, $zero, L_80019560
    if (ctx->r14 != 0) {
        // 0x8001951C: nop
    
            goto L_80019560;
    }
    // 0x8001951C: nop

    // 0x80019520: lbu         $t7, 0x7C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X7C);
    // 0x80019524: nop

    // 0x80019528: bne         $t7, $zero, L_8001956C
    if (ctx->r15 != 0) {
        // 0x8001952C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001956C;
    }
    // 0x8001952C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019530: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    // 0x80019534: nop

    // 0x80019538: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x8001953C: sb          $t9, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r25;
    // 0x80019540: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80019544: nop

    // 0x80019548: lw          $t0, 0x28($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X28);
    // 0x8001954C: lw          $t1, 0x84($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X84);
    // 0x80019550: nop

    // 0x80019554: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80019558: b           L_80019568
    // 0x8001955C: sw          $t2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r10;
        goto L_80019568;
    // 0x8001955C: sw          $t2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r10;
L_80019560:
    // 0x80019560: jal         0x800196F4
    // 0x80019564: nop

    func_800196F4(rdram, ctx);
        goto after_0;
    // 0x80019564: nop

    after_0:
L_80019568:
    // 0x80019568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001956C:
    // 0x8001956C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80019570: jr          $ra
    // 0x80019574: nop

    return;
    // 0x80019574: nop

;}
RECOMP_FUNC void func_80019578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019578: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8001957C: addiu       $v0, $v0, -0x5B68
    ctx->r2 = ADD32(ctx->r2, -0X5B68);
    // 0x80019580: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80019584: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80019588: addiu       $v1, $v1, -0x5B64
    ctx->r3 = ADD32(ctx->r3, -0X5B64);
    // 0x8001958C: sb          $zero, 0x8C($t6)
    MEM_B(0X8C, ctx->r14) = 0;
    // 0x80019590: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80019594: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80019598: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x8001959C: nop

    // 0x800195A0: sb          $t8, 0x88($t9)
    MEM_B(0X88, ctx->r25) = ctx->r24;
    // 0x800195A4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x800195A8: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x800195AC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800195B0: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x800195B4: lbu         $t3, 0x0($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X0);
    // 0x800195B8: nop

    // 0x800195BC: sb          $t3, 0x89($t4)
    MEM_B(0X89, ctx->r12) = ctx->r11;
    // 0x800195C0: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x800195C4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x800195C8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800195CC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800195D0: lb          $t8, 0x0($t6)
    ctx->r24 = MEM_B(ctx->r14, 0X0);
    // 0x800195D4: nop

    // 0x800195D8: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x800195DC: sh          $t9, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = ctx->r25;
    // 0x800195E0: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x800195E4: nop

    // 0x800195E8: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800195EC: jr          $ra
    // 0x800195F0: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    return;
    // 0x800195F0: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
;}
RECOMP_FUNC void func_800195F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800195F4: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x800195F8: addiu       $v1, $v1, -0x5B68
    ctx->r3 = ADD32(ctx->r3, -0X5B68);
    // 0x800195FC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80019600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80019604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019608: lbu         $t6, 0x8C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8C);
    // 0x8001960C: nop

    // 0x80019610: bne         $t6, $zero, L_80019674
    if (ctx->r14 != 0) {
        // 0x80019614: nop
    
            goto L_80019674;
    }
    // 0x80019614: nop

    // 0x80019618: lbu         $t7, 0x88($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X88);
    // 0x8001961C: nop

    // 0x80019620: sb          $t7, 0x7C($v0)
    MEM_B(0X7C, ctx->r2) = ctx->r15;
    // 0x80019624: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80019628: nop

    // 0x8001962C: lbu         $t8, 0x89($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X89);
    // 0x80019630: nop

    // 0x80019634: sb          $t8, 0x7D($v0)
    MEM_B(0X7D, ctx->r2) = ctx->r24;
    // 0x80019638: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001963C: nop

    // 0x80019640: lw          $t9, 0x28($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X28);
    // 0x80019644: nop

    // 0x80019648: sw          $t9, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r25;
    // 0x8001964C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80019650: nop

    // 0x80019654: lw          $t0, 0x28($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X28);
    // 0x80019658: lh          $t1, 0x8A($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X8A);
    // 0x8001965C: nop

    // 0x80019660: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x80019664: jal         0x8001929C
    // 0x80019668: sw          $t2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r10;
    func_8001929C(rdram, ctx);
        goto after_0;
    // 0x80019668: sw          $t2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r10;
    after_0:
    // 0x8001966C: b           L_800196A4
    // 0x80019670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800196A4;
    // 0x80019670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80019674:
    // 0x80019674: lw          $t3, 0x28($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X28);
    // 0x80019678: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8001967C: sw          $t3, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r11;
    // 0x80019680: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80019684: nop

    // 0x80019688: lw          $t4, 0x84($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X84);
    // 0x8001968C: nop

    // 0x80019690: sw          $t4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r12;
    // 0x80019694: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80019698: nop

    // 0x8001969C: sb          $t5, 0x7D($t6)
    MEM_B(0X7D, ctx->r14) = ctx->r13;
    // 0x800196A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800196A4:
    // 0x800196A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800196A8: jr          $ra
    // 0x800196AC: nop

    return;
    // 0x800196AC: nop

;}
RECOMP_FUNC void func_800196B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800196B0: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x800196B4: addiu       $v0, $v0, -0x5B68
    ctx->r2 = ADD32(ctx->r2, -0X5B68);
    // 0x800196B8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800196BC: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x800196C0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800196C4: addiu       $v1, $v1, -0x5B64
    ctx->r3 = ADD32(ctx->r3, -0X5B64);
    // 0x800196C8: sb          $t6, 0x8C($t7)
    MEM_B(0X8C, ctx->r15) = ctx->r14;
    // 0x800196CC: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800196D0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x800196D4: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x800196D8: nop

    // 0x800196DC: sh          $t9, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = ctx->r25;
    // 0x800196E0: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x800196E4: nop

    // 0x800196E8: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800196EC: jr          $ra
    // 0x800196F0: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    return;
    // 0x800196F0: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
;}
RECOMP_FUNC void func_800196F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800196F4: lui         $a2, 0x801A
    ctx->r6 = S32(0X801A << 16);
    // 0x800196F8: addiu       $a2, $a2, -0x5B68
    ctx->r6 = ADD32(ctx->r6, -0X5B68);
    // 0x800196FC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80019700: nop

    // 0x80019704: lbu         $t6, 0x6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6);
    // 0x80019708: nop

    // 0x8001970C: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x80019710: sb          $t7, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r15;
    // 0x80019714: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80019718: nop

    // 0x8001971C: lw          $a0, 0x28($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X28);
    // 0x80019720: lw          $t8, 0x80($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X80);
    // 0x80019724: nop

    // 0x80019728: subu        $v1, $t8, $a0
    ctx->r3 = SUB32(ctx->r24, ctx->r4);
    // 0x8001972C: bgez        $v1, L_80019738
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80019730: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_80019738;
    }
    // 0x80019730: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80019734: negu        $a1, $v1
    ctx->r5 = SUB32(0, ctx->r3);
L_80019738:
    // 0x80019738: lh          $t9, 0x8A($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X8A);
    // 0x8001973C: nop

    // 0x80019740: multu       $t9, $a1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80019744: mflo        $a1
    ctx->r5 = lo;
    // 0x80019748: sra         $t0, $a1, 8
    ctx->r8 = S32(SIGNED(ctx->r5) >> 8);
    // 0x8001974C: bne         $t0, $zero, L_80019758
    if (ctx->r8 != 0) {
        // 0x80019750: or          $a1, $t0, $zero
        ctx->r5 = ctx->r8 | 0;
            goto L_80019758;
    }
    // 0x80019750: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80019754: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80019758:
    // 0x80019758: bgez        $v1, L_800197A8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8001975C: addu        $t2, $a0, $a1
        ctx->r10 = ADD32(ctx->r4, ctx->r5);
            goto L_800197A8;
    }
    // 0x8001975C: addu        $t2, $a0, $a1
    ctx->r10 = ADD32(ctx->r4, ctx->r5);
    // 0x80019760: subu        $t1, $a0, $a1
    ctx->r9 = SUB32(ctx->r4, ctx->r5);
    // 0x80019764: sw          $t1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r9;
    // 0x80019768: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8001976C: nop

    // 0x80019770: lw          $a0, 0x28($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X28);
    // 0x80019774: lw          $v1, 0x80($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X80);
    // 0x80019778: nop

    // 0x8001977C: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80019780: beq         $at, $zero, L_800197E8
    if (ctx->r1 == 0) {
        // 0x80019784: nop
    
            goto L_800197E8;
    }
    // 0x80019784: nop

    // 0x80019788: sw          $v1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r3;
    // 0x8001978C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80019790: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x80019794: nop

    // 0x80019798: lw          $v1, 0x80($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X80);
    // 0x8001979C: lw          $a0, 0x28($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X28);
    // 0x800197A0: b           L_800197E8
    // 0x800197A4: nop

        goto L_800197E8;
    // 0x800197A4: nop

L_800197A8:
    // 0x800197A8: sw          $t2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r10;
    // 0x800197AC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x800197B0: nop

    // 0x800197B4: lw          $v1, 0x80($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X80);
    // 0x800197B8: lw          $a0, 0x28($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X28);
    // 0x800197BC: nop

    // 0x800197C0: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800197C4: beq         $at, $zero, L_800197E8
    if (ctx->r1 == 0) {
        // 0x800197C8: nop
    
            goto L_800197E8;
    }
    // 0x800197C8: nop

    // 0x800197CC: sw          $v1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r3;
    // 0x800197D0: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x800197D4: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x800197D8: nop

    // 0x800197DC: lw          $v1, 0x80($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X80);
    // 0x800197E0: lw          $a0, 0x28($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X28);
    // 0x800197E4: nop

L_800197E8:
    // 0x800197E8: bne         $v1, $a0, L_800197F4
    if (ctx->r3 != ctx->r4) {
        // 0x800197EC: nop
    
            goto L_800197F4;
    }
    // 0x800197EC: nop

    // 0x800197F0: sb          $zero, 0x7D($v0)
    MEM_B(0X7D, ctx->r2) = 0;
L_800197F4:
    // 0x800197F4: jr          $ra
    // 0x800197F8: nop

    return;
    // 0x800197F8: nop

;}
RECOMP_FUNC void func_800197FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800197FC: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80019800: addiu       $v1, $v1, -0x5B68
    ctx->r3 = ADD32(ctx->r3, -0X5B68);
    // 0x80019804: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80019808: lui         $t7, 0x801A
    ctx->r15 = S32(0X801A << 16);
    // 0x8001980C: sb          $zero, 0x5E($t6)
    MEM_B(0X5E, ctx->r14) = 0;
    // 0x80019810: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80019814: lw          $t7, -0x5B64($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5B64);
    // 0x80019818: nop

    // 0x8001981C: sw          $t7, 0x60($t8)
    MEM_W(0X60, ctx->r24) = ctx->r15;
    // 0x80019820: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80019824: nop

    // 0x80019828: sh          $zero, 0x40($t9)
    MEM_H(0X40, ctx->r25) = 0;
    // 0x8001982C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80019830: nop

    // 0x80019834: lh          $t0, 0x40($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X40);
    // 0x80019838: jr          $ra
    // 0x8001983C: sh          $t0, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r8;
    return;
    // 0x8001983C: sh          $t0, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r8;
;}
RECOMP_FUNC void func_80019840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019840: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80019844: addiu       $a1, $a1, -0x5B64
    ctx->r5 = ADD32(ctx->r5, -0X5B64);
    // 0x80019848: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8001984C: lui         $a2, 0x801A
    ctx->r6 = S32(0X801A << 16);
    // 0x80019850: addiu       $a2, $a2, -0x5B68
    ctx->r6 = ADD32(ctx->r6, -0X5B68);
    // 0x80019854: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x80019858: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8001985C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x80019860: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80019864: lbu         $t7, 0x5E($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X5E);
    // 0x80019868: nop

    // 0x8001986C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80019870: beq         $v0, $zero, L_80019890
    if (ctx->r2 == 0) {
        // 0x80019874: sb          $t8, 0x5E($a0)
        MEM_B(0X5E, ctx->r4) = ctx->r24;
            goto L_80019890;
    }
    // 0x80019874: sb          $t8, 0x5E($a0)
    MEM_B(0X5E, ctx->r4) = ctx->r24;
    // 0x80019878: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8001987C: nop

    // 0x80019880: lbu         $t9, 0x5E($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X5E);
    // 0x80019884: nop

    // 0x80019888: beq         $t9, $v0, L_800198EC
    if (ctx->r25 == ctx->r2) {
        // 0x8001988C: nop
    
            goto L_800198EC;
    }
    // 0x8001988C: nop

L_80019890:
    // 0x80019890: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x80019894: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x80019898: lh          $t0, 0x40($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X40);
    // 0x8001989C: lb          $t2, 0x0($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X0);
    // 0x800198A0: nop

    // 0x800198A4: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x800198A8: sh          $t3, 0x40($a0)
    MEM_H(0X40, ctx->r4) = ctx->r11;
    // 0x800198AC: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x800198B0: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x800198B4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800198B8: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x800198BC: lb          $t8, 0x0($t5)
    ctx->r24 = MEM_B(ctx->r13, 0X0);
    // 0x800198C0: lh          $t6, 0x32($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X32);
    // 0x800198C4: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x800198C8: addu        $t1, $t6, $t9
    ctx->r9 = ADD32(ctx->r14, ctx->r25);
    // 0x800198CC: sh          $t1, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r9;
    // 0x800198D0: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x800198D4: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x800198D8: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x800198DC: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x800198E0: lw          $t4, 0x60($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X60);
    // 0x800198E4: jr          $ra
    // 0x800198E8: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    return;
    // 0x800198E8: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
L_800198EC:
    // 0x800198EC: sh          $zero, 0x40($a0)
    MEM_H(0X40, ctx->r4) = 0;
    // 0x800198F0: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x800198F4: nop

    // 0x800198F8: lh          $t5, 0x40($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X40);
    // 0x800198FC: nop

    // 0x80019900: sh          $t5, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r13;
    // 0x80019904: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80019908: nop

    // 0x8001990C: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x80019910: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80019914: jr          $ra
    // 0x80019918: nop

    return;
    // 0x80019918: nop

;}
RECOMP_FUNC void func_8001991C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001991C: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80019920: addiu       $v1, $v1, -0x5B68
    ctx->r3 = ADD32(ctx->r3, -0X5B68);
    // 0x80019924: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80019928: lui         $t7, 0x801A
    ctx->r15 = S32(0X801A << 16);
    // 0x8001992C: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    // 0x80019930: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80019934: lw          $t7, -0x5B64($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5B64);
    // 0x80019938: nop

    // 0x8001993C: sw          $t7, 0x68($t8)
    MEM_W(0X68, ctx->r24) = ctx->r15;
    // 0x80019940: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80019944: nop

    // 0x80019948: sh          $zero, 0x42($t9)
    MEM_H(0X42, ctx->r25) = 0;
    // 0x8001994C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80019950: nop

    // 0x80019954: lh          $t0, 0x42($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X42);
    // 0x80019958: jr          $ra
    // 0x8001995C: sh          $t0, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r8;
    return;
    // 0x8001995C: sh          $t0, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r8;
;}
RECOMP_FUNC void func_80019960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019960: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80019964: addiu       $a1, $a1, -0x5B64
    ctx->r5 = ADD32(ctx->r5, -0X5B64);
    // 0x80019968: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8001996C: lui         $a2, 0x801A
    ctx->r6 = S32(0X801A << 16);
    // 0x80019970: addiu       $a2, $a2, -0x5B68
    ctx->r6 = ADD32(ctx->r6, -0X5B68);
    // 0x80019974: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x80019978: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8001997C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x80019980: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80019984: lbu         $t7, 0x64($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X64);
    // 0x80019988: nop

    // 0x8001998C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80019990: beq         $v0, $zero, L_800199B0
    if (ctx->r2 == 0) {
        // 0x80019994: sb          $t8, 0x64($a0)
        MEM_B(0X64, ctx->r4) = ctx->r24;
            goto L_800199B0;
    }
    // 0x80019994: sb          $t8, 0x64($a0)
    MEM_B(0X64, ctx->r4) = ctx->r24;
    // 0x80019998: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8001999C: nop

    // 0x800199A0: lbu         $t9, 0x64($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X64);
    // 0x800199A4: nop

    // 0x800199A8: beq         $t9, $v0, L_80019A0C
    if (ctx->r25 == ctx->r2) {
        // 0x800199AC: nop
    
            goto L_80019A0C;
    }
    // 0x800199AC: nop

L_800199B0:
    // 0x800199B0: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x800199B4: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x800199B8: lh          $t0, 0x42($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X42);
    // 0x800199BC: lb          $t2, 0x0($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X0);
    // 0x800199C0: nop

    // 0x800199C4: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x800199C8: sh          $t3, 0x42($a0)
    MEM_H(0X42, ctx->r4) = ctx->r11;
    // 0x800199CC: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x800199D0: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x800199D4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800199D8: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x800199DC: lb          $t8, 0x0($t5)
    ctx->r24 = MEM_B(ctx->r13, 0X0);
    // 0x800199E0: lh          $t6, 0x34($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X34);
    // 0x800199E4: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x800199E8: addu        $t1, $t6, $t9
    ctx->r9 = ADD32(ctx->r14, ctx->r25);
    // 0x800199EC: sh          $t1, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r9;
    // 0x800199F0: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x800199F4: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x800199F8: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x800199FC: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x80019A00: lw          $t4, 0x68($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X68);
    // 0x80019A04: jr          $ra
    // 0x80019A08: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    return;
    // 0x80019A08: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
L_80019A0C:
    // 0x80019A0C: sh          $zero, 0x42($a0)
    MEM_H(0X42, ctx->r4) = 0;
    // 0x80019A10: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x80019A14: nop

    // 0x80019A18: lh          $t5, 0x42($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X42);
    // 0x80019A1C: nop

    // 0x80019A20: sh          $t5, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r13;
    // 0x80019A24: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80019A28: nop

    // 0x80019A2C: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x80019A30: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80019A34: jr          $ra
    // 0x80019A38: nop

    return;
    // 0x80019A38: nop

;}
RECOMP_FUNC void func_80019A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019A3C: lui         $t6, 0x801A
    ctx->r14 = S32(0X801A << 16);
    // 0x80019A40: lui         $t7, 0x801A
    ctx->r15 = S32(0X801A << 16);
    // 0x80019A44: lw          $t7, -0x5B68($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5B68);
    // 0x80019A48: lw          $t6, -0x5B64($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5B64);
    // 0x80019A4C: jr          $ra
    // 0x80019A50: sw          $t6, 0x6C($t7)
    MEM_W(0X6C, ctx->r15) = ctx->r14;
    return;
    // 0x80019A50: sw          $t6, 0x6C($t7)
    MEM_W(0X6C, ctx->r15) = ctx->r14;
;}
RECOMP_FUNC void func_80019A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019A54: lui         $t6, 0x801A
    ctx->r14 = S32(0X801A << 16);
    // 0x80019A58: lw          $t6, -0x5B68($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5B68);
    // 0x80019A5C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80019A60: lw          $t7, 0x6C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X6C);
    // 0x80019A64: jr          $ra
    // 0x80019A68: sw          $t7, -0x5B64($at)
    MEM_W(-0X5B64, ctx->r1) = ctx->r15;
    return;
    // 0x80019A68: sw          $t7, -0x5B64($at)
    MEM_W(-0X5B64, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_80019A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019A6C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80019A70: addiu       $v0, $v0, -0x5B68
    ctx->r2 = ADD32(ctx->r2, -0X5B68);
    // 0x80019A74: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80019A78: lui         $t7, 0x801A
    ctx->r15 = S32(0X801A << 16);
    // 0x80019A7C: sb          $zero, 0x70($t6)
    MEM_B(0X70, ctx->r14) = 0;
    // 0x80019A80: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80019A84: lw          $t7, -0x5B64($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5B64);
    // 0x80019A88: jr          $ra
    // 0x80019A8C: sw          $t7, 0x74($t8)
    MEM_W(0X74, ctx->r24) = ctx->r15;
    return;
    // 0x80019A8C: sw          $t7, 0x74($t8)
    MEM_W(0X74, ctx->r24) = ctx->r15;
;}
RECOMP_FUNC void func_80019A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019A90: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80019A94: addiu       $a1, $a1, -0x5B68
    ctx->r5 = ADD32(ctx->r5, -0X5B68);
    // 0x80019A98: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80019A9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80019AA0: lbu         $a0, 0x70($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X70);
    // 0x80019AA4: nop

    // 0x80019AA8: beq         $a0, $zero, L_80019ACC
    if (ctx->r4 == 0) {
        // 0x80019AAC: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80019ACC;
    }
    // 0x80019AAC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80019AB0: beq         $v0, $at, L_80019AD8
    if (ctx->r2 == ctx->r1) {
        // 0x80019AB4: addiu       $t7, $a0, 0x1
        ctx->r15 = ADD32(ctx->r4, 0X1);
            goto L_80019AD8;
    }
    // 0x80019AB4: addiu       $t7, $a0, 0x1
    ctx->r15 = ADD32(ctx->r4, 0X1);
    // 0x80019AB8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80019ABC: beq         $v0, $at, L_80019B08
    if (ctx->r2 == ctx->r1) {
        // 0x80019AC0: addiu       $t2, $a0, -0x1
        ctx->r10 = ADD32(ctx->r4, -0X1);
            goto L_80019B08;
    }
    // 0x80019AC0: addiu       $t2, $a0, -0x1
    ctx->r10 = ADD32(ctx->r4, -0X1);
    // 0x80019AC4: jr          $ra
    // 0x80019AC8: nop

    return;
    // 0x80019AC8: nop

L_80019ACC:
    // 0x80019ACC: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x80019AD0: jr          $ra
    // 0x80019AD4: sb          $t6, 0x70($v1)
    MEM_B(0X70, ctx->r3) = ctx->r14;
    return;
    // 0x80019AD4: sb          $t6, 0x70($v1)
    MEM_B(0X70, ctx->r3) = ctx->r14;
L_80019AD8:
    // 0x80019AD8: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80019ADC: sb          $t7, 0x70($v1)
    MEM_B(0X70, ctx->r3) = ctx->r15;
    // 0x80019AE0: addiu       $v0, $v0, -0x5B64
    ctx->r2 = ADD32(ctx->r2, -0X5B64);
    // 0x80019AE4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80019AE8: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x80019AEC: nop

    // 0x80019AF0: sw          $t8, 0x78($t9)
    MEM_W(0X78, ctx->r25) = ctx->r24;
    // 0x80019AF4: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x80019AF8: nop

    // 0x80019AFC: lw          $t1, 0x74($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X74);
    // 0x80019B00: jr          $ra
    // 0x80019B04: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    return;
    // 0x80019B04: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_80019B08:
    // 0x80019B08: sb          $t2, 0x70($v1)
    MEM_B(0X70, ctx->r3) = ctx->r10;
    // 0x80019B0C: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x80019B10: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80019B14: lw          $t4, 0x78($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X78);
    // 0x80019B18: addiu       $v0, $v0, -0x5B64
    ctx->r2 = ADD32(ctx->r2, -0X5B64);
    // 0x80019B1C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80019B20: jr          $ra
    // 0x80019B24: nop

    return;
    // 0x80019B24: nop

;}
RECOMP_FUNC void func_80019B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019B28: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80019B2C: addiu       $a0, $a0, -0x5B64
    ctx->r4 = ADD32(ctx->r4, -0X5B64);
    // 0x80019B30: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80019B34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80019B38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019B3C: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x80019B40: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80019B44: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80019B48: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80019B4C: lw          $v1, -0x5B68($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5B68);
    // 0x80019B50: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80019B54: lbu         $t7, 0x10($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X10);
    // 0x80019B58: lui         $t8, 0x801A
    ctx->r24 = S32(0X801A << 16);
    // 0x80019B5C: beq         $t7, $a2, L_80019B88
    if (ctx->r15 == ctx->r6) {
        // 0x80019B60: lui         $t0, 0x801A
        ctx->r8 = S32(0X801A << 16);
            goto L_80019B88;
    }
    // 0x80019B60: lui         $t0, 0x801A
    ctx->r8 = S32(0X801A << 16);
    // 0x80019B64: sb          $a2, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r6;
    // 0x80019B68: lbu         $t8, -0x67F4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X67F4);
    // 0x80019B6C: lw          $a0, 0x1890($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1890);
    // 0x80019B70: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80019B74: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80019B78: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80019B7C: addiu       $t0, $t0, -0x6768
    ctx->r8 = ADD32(ctx->r8, -0X6768);
    // 0x80019B80: jal         0x80083110
    // 0x80019B84: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    func_80083110(rdram, ctx);
        goto after_0;
    // 0x80019B84: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    after_0:
L_80019B88:
    // 0x80019B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019B8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80019B90: jr          $ra
    // 0x80019B94: nop

    return;
    // 0x80019B94: nop

;}
RECOMP_FUNC void func_80019B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019B98: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80019B9C: addiu       $v0, $v0, -0x5B64
    ctx->r2 = ADD32(ctx->r2, -0X5B64);
    // 0x80019BA0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80019BA4: lui         $t8, 0x801A
    ctx->r24 = S32(0X801A << 16);
    // 0x80019BA8: lw          $t8, -0x5B68($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5B68);
    // 0x80019BAC: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80019BB0: nop

    // 0x80019BB4: sb          $t7, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r15;
    // 0x80019BB8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80019BBC: nop

    // 0x80019BC0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80019BC4: jr          $ra
    // 0x80019BC8: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    return;
    // 0x80019BC8: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
;}
RECOMP_FUNC void func_80019BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019BCC: beq         $a0, $zero, L_80019BE4
    if (ctx->r4 == 0) {
        // 0x80019BD0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80019BE4;
    }
    // 0x80019BD0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80019BD4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80019BD8: lhu         $v0, 0x38CC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X38CC);
    // 0x80019BDC: b           L_80019BF0
    // 0x80019BE0: nop

        goto L_80019BF0;
    // 0x80019BE0: nop

L_80019BE4:
    // 0x80019BE4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80019BE8: lhu         $v0, 0x38CE($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X38CE);
    // 0x80019BEC: nop

L_80019BF0:
    // 0x80019BF0: lui         $t2, 0x801A
    ctx->r10 = S32(0X801A << 16);
    // 0x80019BF4: addiu       $t2, $t2, -0x3B60
    ctx->r10 = ADD32(ctx->r10, -0X3B60);
    // 0x80019BF8: lhu         $t6, 0x0($t2)
    ctx->r14 = MEM_HU(ctx->r10, 0X0);
    // 0x80019BFC: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x80019C00: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80019C04: andi        $a2, $t7, 0xFFFF
    ctx->r6 = ctx->r15 & 0XFFFF;
    // 0x80019C08: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80019C0C: addiu       $t3, $t3, -0x1510
    ctx->r11 = ADD32(ctx->r11, -0X1510);
    // 0x80019C10: andi        $t8, $a1, 0x7F
    ctx->r24 = ctx->r5 & 0X7F;
    // 0x80019C14: sh          $t7, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r15;
    // 0x80019C18: addu        $t9, $t3, $t8
    ctx->r25 = ADD32(ctx->r11, ctx->r24);
    // 0x80019C1C: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x80019C20: lbu         $a3, 0x0($t9)
    ctx->r7 = MEM_BU(ctx->r25, 0X0);
    // 0x80019C24: andi        $t8, $t7, 0x7F
    ctx->r24 = ctx->r15 & 0X7F;
    // 0x80019C28: addu        $t9, $t3, $t8
    ctx->r25 = ADD32(ctx->r11, ctx->r24);
    // 0x80019C2C: lbu         $t4, 0x0($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0X0);
    // 0x80019C30: sll         $t5, $a3, 8
    ctx->r13 = S32(ctx->r7 << 8);
    // 0x80019C34: lui         $t8, 0x801A
    ctx->r24 = S32(0X801A << 16);
    // 0x80019C38: addu        $a3, $t5, $t4
    ctx->r7 = ADD32(ctx->r13, ctx->r12);
    // 0x80019C3C: lhu         $t8, -0x67F6($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X67F6);
    // 0x80019C40: or          $t5, $a3, $zero
    ctx->r13 = ctx->r7 | 0;
    // 0x80019C44: sra         $t6, $a2, 7
    ctx->r14 = S32(SIGNED(ctx->r6) >> 7);
    // 0x80019C48: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80019C4C: sll         $t5, $a0, 1
    ctx->r13 = S32(ctx->r4 << 1);
    // 0x80019C50: lui         $t1, 0x801A
    ctx->r9 = S32(0X801A << 16);
    // 0x80019C54: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x80019C58: addu        $a3, $t7, $t9
    ctx->r7 = ADD32(ctx->r15, ctx->r25);
    // 0x80019C5C: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x80019C60: lhu         $t1, -0x3B50($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X3B50);
    // 0x80019C64: andi        $t4, $a3, 0xFFFF
    ctx->r12 = ctx->r7 & 0XFFFF;
    // 0x80019C68: sra         $a3, $t4, 8
    ctx->r7 = S32(SIGNED(ctx->r12) >> 8);
    // 0x80019C6C: and         $a1, $t1, $t4
    ctx->r5 = ctx->r9 & ctx->r12;
    // 0x80019C70: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80019C74: andi        $t8, $a3, 0xFFFF
    ctx->r24 = ctx->r7 & 0XFFFF;
    // 0x80019C78: slti        $at, $t1, 0xC0
    ctx->r1 = SIGNED(ctx->r9) < 0XC0 ? 1 : 0;
    // 0x80019C7C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80019C80: beq         $at, $zero, L_80019CC0
    if (ctx->r1 == 0) {
        // 0x80019C84: or          $a3, $t8, $zero
        ctx->r7 = ctx->r24 | 0;
            goto L_80019CC0;
    }
    // 0x80019C84: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80019C88: slti        $at, $t6, 0x51
    ctx->r1 = SIGNED(ctx->r14) < 0X51 ? 1 : 0;
    // 0x80019C8C: bne         $at, $zero, L_80019D30
    if (ctx->r1 != 0) {
        // 0x80019C90: sll         $t7, $v0, 3
        ctx->r15 = S32(ctx->r2 << 3);
            goto L_80019D30;
    }
    // 0x80019C90: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x80019C94: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x80019C98: addu        $t4, $t7, $t9
    ctx->r12 = ADD32(ctx->r15, ctx->r25);
    // 0x80019C9C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80019CA0: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x80019CA4: lbu         $v1, -0x1BFC($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1BFC);
    // 0x80019CA8: sra         $t5, $t8, 4
    ctx->r13 = S32(SIGNED(ctx->r24) >> 4);
    // 0x80019CAC: andi        $t8, $t5, 0x7
    ctx->r24 = ctx->r13 & 0X7;
    // 0x80019CB0: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x80019CB4: addu        $v1, $t6, $t8
    ctx->r3 = ADD32(ctx->r14, ctx->r24);
    // 0x80019CB8: jr          $ra
    // 0x80019CBC: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    return;
    // 0x80019CBC: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
L_80019CC0:
    // 0x80019CC0: slti        $at, $t1, 0xF0
    ctx->r1 = SIGNED(ctx->r9) < 0XF0 ? 1 : 0;
    // 0x80019CC4: beq         $at, $zero, L_80019D04
    if (ctx->r1 == 0) {
        // 0x80019CC8: sll         $t4, $v0, 3
        ctx->r12 = S32(ctx->r2 << 3);
            goto L_80019D04;
    }
    // 0x80019CC8: sll         $t4, $v0, 3
    ctx->r12 = S32(ctx->r2 << 3);
    // 0x80019CCC: slti        $at, $a1, 0x31
    ctx->r1 = SIGNED(ctx->r5) < 0X31 ? 1 : 0;
    // 0x80019CD0: bne         $at, $zero, L_80019D30
    if (ctx->r1 != 0) {
        // 0x80019CD4: sll         $t9, $v0, 3
        ctx->r25 = S32(ctx->r2 << 3);
            goto L_80019D30;
    }
    // 0x80019CD4: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x80019CD8: andi        $t4, $a3, 0x7
    ctx->r12 = ctx->r7 & 0X7;
    // 0x80019CDC: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x80019CE0: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80019CE4: addu        $v1, $v1, $t5
    ctx->r3 = ADD32(ctx->r3, ctx->r13);
    // 0x80019CE8: lbu         $v1, -0x1AAC($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1AAC);
    // 0x80019CEC: sra         $t6, $a3, 4
    ctx->r14 = S32(SIGNED(ctx->r7) >> 4);
    // 0x80019CF0: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x80019CF4: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x80019CF8: addu        $v1, $t8, $t7
    ctx->r3 = ADD32(ctx->r24, ctx->r15);
    // 0x80019CFC: jr          $ra
    // 0x80019D00: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    return;
    // 0x80019D00: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
L_80019D04:
    // 0x80019D04: andi        $t5, $a3, 0x7
    ctx->r13 = ctx->r7 & 0X7;
    // 0x80019D08: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80019D0C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80019D10: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x80019D14: lbu         $v1, -0x1AAC($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1AAC);
    // 0x80019D18: sra         $t8, $a3, 4
    ctx->r24 = S32(SIGNED(ctx->r7) >> 4);
    // 0x80019D1C: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x80019D20: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x80019D24: addu        $v1, $t7, $t9
    ctx->r3 = ADD32(ctx->r15, ctx->r25);
    // 0x80019D28: andi        $t4, $v1, 0xFFFF
    ctx->r12 = ctx->r3 & 0XFFFF;
    // 0x80019D2C: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
L_80019D30:
    // 0x80019D30: jr          $ra
    // 0x80019D34: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80019D34: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80019D38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019D38: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80019D3C: addiu       $a0, $a0, -0x5B64
    ctx->r4 = ADD32(ctx->r4, -0X5B64);
    // 0x80019D40: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80019D44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80019D48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019D4C: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x80019D50: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80019D54: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80019D58: lui         $t7, 0x801A
    ctx->r15 = S32(0X801A << 16);
    // 0x80019D5C: lw          $t7, -0x5B68($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5B68);
    // 0x80019D60: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x80019D64: lw          $v1, 0x0($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X0);
    // 0x80019D68: nop

    // 0x80019D6C: beq         $v1, $at, L_80019D94
    if (ctx->r3 == ctx->r1) {
        // 0x80019D70: addiu       $at, $zero, 0x201
        ctx->r1 = ADD32(0, 0X201);
            goto L_80019D94;
    }
    // 0x80019D70: addiu       $at, $zero, 0x201
    ctx->r1 = ADD32(0, 0X201);
    // 0x80019D74: beq         $v1, $at, L_80019D94
    if (ctx->r3 == ctx->r1) {
        // 0x80019D78: addiu       $at, $zero, 0x202
        ctx->r1 = ADD32(0, 0X202);
            goto L_80019D94;
    }
    // 0x80019D78: addiu       $at, $zero, 0x202
    ctx->r1 = ADD32(0, 0X202);
    // 0x80019D7C: beq         $v1, $at, L_80019DA8
    if (ctx->r3 == ctx->r1) {
        // 0x80019D80: addiu       $at, $zero, 0x203
        ctx->r1 = ADD32(0, 0X203);
            goto L_80019DA8;
    }
    // 0x80019D80: addiu       $at, $zero, 0x203
    ctx->r1 = ADD32(0, 0X203);
    // 0x80019D84: beq         $v1, $at, L_80019DA8
    if (ctx->r3 == ctx->r1) {
        // 0x80019D88: nop
    
            goto L_80019DA8;
    }
    // 0x80019D88: nop

    // 0x80019D8C: b           L_80019DBC
    // 0x80019D90: nop

        goto L_80019DBC;
    // 0x80019D90: nop

L_80019D94:
    // 0x80019D94: jal         0x80019BCC
    // 0x80019D98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80019BCC(rdram, ctx);
        goto after_0;
    // 0x80019D98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80019D9C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80019DA0: b           L_80019DE8
    // 0x80019DA4: sh          $v0, -0x3B58($at)
    MEM_H(-0X3B58, ctx->r1) = ctx->r2;
        goto L_80019DE8;
    // 0x80019DA4: sh          $v0, -0x3B58($at)
    MEM_H(-0X3B58, ctx->r1) = ctx->r2;
L_80019DA8:
    // 0x80019DA8: jal         0x80019BCC
    // 0x80019DAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80019BCC(rdram, ctx);
        goto after_1;
    // 0x80019DAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80019DB0: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80019DB4: b           L_80019DE8
    // 0x80019DB8: sh          $v0, -0x3B54($at)
    MEM_H(-0X3B54, ctx->r1) = ctx->r2;
        goto L_80019DE8;
    // 0x80019DB8: sh          $v0, -0x3B54($at)
    MEM_H(-0X3B54, ctx->r1) = ctx->r2;
L_80019DBC:
    // 0x80019DBC: bne         $a1, $zero, L_80019DD8
    if (ctx->r5 != 0) {
        // 0x80019DC0: nop
    
            goto L_80019DD8;
    }
    // 0x80019DC0: nop

    // 0x80019DC4: jal         0x80019BCC
    // 0x80019DC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80019BCC(rdram, ctx);
        goto after_2;
    // 0x80019DC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80019DCC: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80019DD0: b           L_80019DE8
    // 0x80019DD4: sh          $v0, -0x3B56($at)
    MEM_H(-0X3B56, ctx->r1) = ctx->r2;
        goto L_80019DE8;
    // 0x80019DD4: sh          $v0, -0x3B56($at)
    MEM_H(-0X3B56, ctx->r1) = ctx->r2;
L_80019DD8:
    // 0x80019DD8: jal         0x80019BCC
    // 0x80019DDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80019BCC(rdram, ctx);
        goto after_3;
    // 0x80019DDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x80019DE0: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80019DE4: sh          $v0, -0x3B52($at)
    MEM_H(-0X3B52, ctx->r1) = ctx->r2;
L_80019DE8:
    // 0x80019DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019DEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80019DF0: jr          $ra
    // 0x80019DF4: nop

    return;
    // 0x80019DF4: nop

;}
RECOMP_FUNC void func_80019DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019DF8: lui         $t0, 0x801A
    ctx->r8 = S32(0X801A << 16);
    // 0x80019DFC: addiu       $t0, $t0, -0x5B68
    ctx->r8 = ADD32(ctx->r8, -0X5B68);
    // 0x80019E00: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80019E04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80019E08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019E0C: lbu         $t6, 0xE($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XE);
    // 0x80019E10: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80019E14: beq         $t6, $zero, L_80019E60
    if (ctx->r14 == 0) {
        // 0x80019E18: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_80019E60;
    }
    // 0x80019E18: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80019E1C: sb          $t7, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r15;
    // 0x80019E20: lui         $t8, 0x801A
    ctx->r24 = S32(0X801A << 16);
    // 0x80019E24: lbu         $t8, -0x67F4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X67F4);
    // 0x80019E28: lui         $t1, 0x801A
    ctx->r9 = S32(0X801A << 16);
    // 0x80019E2C: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80019E30: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80019E34: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80019E38: addiu       $t1, $t1, -0x6768
    ctx->r9 = ADD32(ctx->r9, -0X6768);
    // 0x80019E3C: lw          $a0, 0x1890($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1890);
    // 0x80019E40: addu        $a1, $t9, $t1
    ctx->r5 = ADD32(ctx->r25, ctx->r9);
    // 0x80019E44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80019E48: jal         0x800831B0
    // 0x80019E4C: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    func_800831B0(rdram, ctx);
        goto after_0;
    // 0x80019E4C: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    after_0:
    // 0x80019E50: lui         $t0, 0x801A
    ctx->r8 = S32(0X801A << 16);
    // 0x80019E54: addiu       $t0, $t0, -0x5B68
    ctx->r8 = ADD32(ctx->r8, -0X5B68);
    // 0x80019E58: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80019E5C: nop

L_80019E60:
    // 0x80019E60: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80019E64: addiu       $v0, $v0, -0x5B64
    ctx->r2 = ADD32(ctx->r2, -0X5B64);
    // 0x80019E68: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x80019E6C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80019E70: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x80019E74: nop

    // 0x80019E78: sb          $t3, 0x21($v1)
    MEM_B(0X21, ctx->r3) = ctx->r11;
    // 0x80019E7C: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80019E80: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x80019E84: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80019E88: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80019E8C: sb          $t6, 0x22($t7)
    MEM_B(0X22, ctx->r15) = ctx->r14;
    // 0x80019E90: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80019E94: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80019E98: nop

    // 0x80019E9C: sw          $t8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r24;
    // 0x80019EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019EA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80019EA8: jr          $ra
    // 0x80019EAC: nop

    return;
    // 0x80019EAC: nop

;}
RECOMP_FUNC void func_80019EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019EB0: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80019EB4: addiu       $v1, $v1, -0x5B64
    ctx->r3 = ADD32(ctx->r3, -0X5B64);
    // 0x80019EB8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80019EBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80019EC0: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80019EC4: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
    // 0x80019EC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019ECC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80019ED0: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80019ED4: nop

    // 0x80019ED8: sb          $t7, 0x21($t8)
    MEM_B(0X21, ctx->r24) = ctx->r15;
    // 0x80019EDC: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80019EE0: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80019EE4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80019EE8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x80019EEC: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x80019EF0: nop

    // 0x80019EF4: sb          $t2, 0x22($t3)
    MEM_B(0X22, ctx->r11) = ctx->r10;
    // 0x80019EF8: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80019EFC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80019F00: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80019F04: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x80019F08: lbu         $a1, 0x22($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X22);
    // 0x80019F0C: nop

    // 0x80019F10: bne         $a1, $zero, L_80019F28
    if (ctx->r5 != 0) {
        // 0x80019F14: nop
    
            goto L_80019F28;
    }
    // 0x80019F14: nop

    // 0x80019F18: sb          $zero, 0x24($v0)
    MEM_B(0X24, ctx->r2) = 0;
    // 0x80019F1C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80019F20: b           L_80019F68
    // 0x80019F24: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
        goto L_80019F68;
    // 0x80019F24: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
L_80019F28:
    // 0x80019F28: lbu         $t6, 0x21($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X21);
    // 0x80019F2C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80019F30: multu       $t6, $a1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80019F34: mflo        $t7
    ctx->r15 = lo;
    // 0x80019F38: sra         $t8, $t7, 7
    ctx->r24 = S32(SIGNED(ctx->r15) >> 7);
    // 0x80019F3C: sb          $t8, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r24;
    // 0x80019F40: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80019F44: nop

    // 0x80019F48: lbu         $t9, 0x24($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X24);
    // 0x80019F4C: nop

    // 0x80019F50: bne         $t9, $zero, L_80019F64
    if (ctx->r25 != 0) {
        // 0x80019F54: nop
    
            goto L_80019F64;
    }
    // 0x80019F54: nop

    // 0x80019F58: sb          $t0, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r8;
    // 0x80019F5C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80019F60: nop

L_80019F64:
    // 0x80019F64: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
L_80019F68:
    // 0x80019F68: nop

    // 0x80019F6C: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    // 0x80019F70: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80019F74: nop

    // 0x80019F78: lhu         $t3, 0x4C($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X4C);
    // 0x80019F7C: nop

    // 0x80019F80: beq         $t3, $zero, L_80019FC0
    if (ctx->r11 == 0) {
        // 0x80019F84: nop
    
            goto L_80019FC0;
    }
    // 0x80019F84: nop

    // 0x80019F88: jal         0x80018144
    // 0x80019F8C: nop

    func_80018144(rdram, ctx);
        goto after_0;
    // 0x80019F8C: nop

    after_0:
    // 0x80019F90: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80019F94: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
    // 0x80019F98: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80019F9C: nop

    // 0x80019FA0: lhu         $t5, 0x4C($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X4C);
    // 0x80019FA4: nop

    // 0x80019FA8: beq         $t5, $zero, L_80019FCC
    if (ctx->r13 == 0) {
        // 0x80019FAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80019FCC;
    }
    // 0x80019FAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019FB0: jal         0x80017D60
    // 0x80019FB4: nop

    func_80017D60(rdram, ctx);
        goto after_1;
    // 0x80019FB4: nop

    after_1:
    // 0x80019FB8: b           L_80019FCC
    // 0x80019FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80019FCC;
    // 0x80019FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80019FC0:
    // 0x80019FC0: jal         0x80017A70
    // 0x80019FC4: nop

    func_80017A70(rdram, ctx);
        goto after_2;
    // 0x80019FC4: nop

    after_2:
    // 0x80019FC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80019FCC:
    // 0x80019FCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80019FD0: jr          $ra
    // 0x80019FD4: nop

    return;
    // 0x80019FD4: nop

;}
RECOMP_FUNC void func_80019FD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019FD8: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80019FDC: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x80019FE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80019FE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019FE8: lbu         $t6, 0xE($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XE);
    // 0x80019FEC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80019FF0: beq         $t6, $zero, L_8001A038
    if (ctx->r14 == 0) {
        // 0x80019FF4: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_8001A038;
    }
    // 0x80019FF4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80019FF8: sb          $t7, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r15;
    // 0x80019FFC: lui         $t8, 0x801A
    ctx->r24 = S32(0X801A << 16);
    // 0x8001A000: lbu         $t8, -0x67F4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X67F4);
    // 0x8001A004: lui         $t0, 0x801A
    ctx->r8 = S32(0X801A << 16);
    // 0x8001A008: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8001A00C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8001A010: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8001A014: addiu       $t0, $t0, -0x6768
    ctx->r8 = ADD32(ctx->r8, -0X6768);
    // 0x8001A018: lw          $a0, 0x1890($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1890);
    // 0x8001A01C: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x8001A020: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8001A024: jal         0x800831B0
    // 0x8001A028: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    func_800831B0(rdram, ctx);
        goto after_0;
    // 0x8001A028: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    after_0:
    // 0x8001A02C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8001A030: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x8001A034: nop

L_8001A038:
    // 0x8001A038: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8001A03C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8001A040: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x8001A044: nop

    // 0x8001A048: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8001A04C: nop

    // 0x8001A050: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
    // 0x8001A054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001A05C: jr          $ra
    // 0x8001A060: nop

    return;
    // 0x8001A060: nop

    // 0x8001A064: nop

    // 0x8001A068: nop

    // 0x8001A06C: nop

;}
RECOMP_FUNC void func_8001A070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A070: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001A074: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001A078: jal         0x80083480
    // 0x8001A07C: nop

    osInitialize_recomp(rdram, ctx);
        goto after_0;
    // 0x8001A07C: nop

    after_0:
    // 0x8001A080: lui         $t6, 0x801A
    ctx->r14 = S32(0X801A << 16);
    // 0x8001A084: addiu       $t6, $t6, 0x688
    ctx->r14 = ADD32(ctx->r14, 0X688);
    // 0x8001A088: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8001A08C: lui         $a2, 0x8002
    ctx->r6 = S32(0X8002 << 16);
    // 0x8001A090: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x8001A094: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8001A098: addiu       $a2, $a2, -0x5F34
    ctx->r6 = ADD32(ctx->r6, -0X5F34);
    // 0x8001A09C: addiu       $a0, $a0, -0x1B28
    ctx->r4 = ADD32(ctx->r4, -0X1B28);
    // 0x8001A0A0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8001A0A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8001A0A8: jal         0x80081CB0
    // 0x8001A0AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    osCreateThread_recomp(rdram, ctx);
        goto after_1;
    // 0x8001A0AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8001A0B0: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8001A0B4: jal         0x80081E00
    // 0x8001A0B8: addiu       $a0, $a0, -0x1B28
    ctx->r4 = ADD32(ctx->r4, -0X1B28);
    osStartThread_recomp(rdram, ctx);
        goto after_2;
    // 0x8001A0B8: addiu       $a0, $a0, -0x1B28
    ctx->r4 = ADD32(ctx->r4, -0X1B28);
    after_2:
    // 0x8001A0BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A0C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001A0C4: jr          $ra
    // 0x8001A0C8: nop

    return;
    // 0x8001A0C8: nop

;}
