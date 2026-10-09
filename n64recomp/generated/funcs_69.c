#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_8026F480_func_802714F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802714F0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802714F4: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x802714F8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802714FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80271500: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80271504: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80271508: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027150C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80271510: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80271514: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80271518: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027151C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80271520: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80271524: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80271528: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027152C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80271530: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80271534: lb          $t9, 0xC($v1)
    ctx->r25 = MEM_B(ctx->r3, 0XC);
    // 0x80271538: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x8027153C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80271540: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80271544: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80271548: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8027154C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80271550: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80271554: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80271558: addu        $t1, $v1, $t0
    ctx->r9 = ADD32(ctx->r3, ctx->r8);
    // 0x8027155C: lb          $a1, 0x4AC($t1)
    ctx->r5 = MEM_B(ctx->r9, 0X4AC);
    // 0x80271560: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80271564: sll         $t2, $a1, 1
    ctx->r10 = S32(ctx->r5 << 1);
    // 0x80271568: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8027156C: lhu         $t3, -0x6B68($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X6B68);
    // 0x80271570: jr          $ra
    // 0x80271574: sh          $t3, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r11;
    return;
    // 0x80271574: sh          $t3, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r11;
;}
RECOMP_FUNC void ovl_8026F480_func_80271578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271578: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027157C: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80271580: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80271584: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80271588: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027158C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80271590: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80271594: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80271598: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027159C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802715A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802715A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802715A8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802715AC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802715B0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802715B4: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x802715B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802715BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802715C0: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x802715C4: lb          $t9, 0xC($v0)
    ctx->r25 = MEM_B(ctx->r2, 0XC);
    // 0x802715C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802715CC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x802715D0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x802715D4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x802715D8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x802715DC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x802715E0: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x802715E4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x802715E8: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x802715EC: lb          $a1, 0x4AC($t1)
    ctx->r5 = MEM_B(ctx->r9, 0X4AC);
    // 0x802715F0: jal         0x80039E94
    // 0x802715F4: nop

    func_80039E94(rdram, ctx);
        goto after_0;
    // 0x802715F4: nop

    after_0:
    // 0x802715F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802715FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80271600: jr          $ra
    // 0x80271604: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80271604: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_80271608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271608: jr          $ra
    // 0x8027160C: nop

    return;
    // 0x8027160C: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80271610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271610: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80271614: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80271618: lb          $t6, 0xF($v0)
    ctx->r14 = MEM_B(ctx->r2, 0XF);
    // 0x8027161C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80271620: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80271624: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80271628: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027162C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80271630: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80271634: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80271638: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027163C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80271640: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80271644: lw          $t9, 0x38($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X38);
    // 0x80271648: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027164C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80271650: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x80271654: lh          $t2, -0x6B8($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X6B8);
    // 0x80271658: lhu         $t1, 0x1E($t9)
    ctx->r9 = MEM_HU(ctx->r25, 0X1E);
    // 0x8027165C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80271660: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80271664: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80271668: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027166C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80271670: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80271674: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x80271678: bne         $t2, $at, L_80271758
    if (ctx->r10 != ctx->r1) {
        // 0x8027167C: sb          $t1, 0x26($sp)
        MEM_B(0X26, ctx->r29) = ctx->r9;
            goto L_80271758;
    }
    // 0x8027167C: sb          $t1, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r9;
    // 0x80271680: lbu         $a0, 0x44($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X44);
    // 0x80271684: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80271688: jal         0x8003CC44
    // 0x8027168C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_8003CC44(rdram, ctx);
        goto after_0;
    // 0x8027168C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_0:
    // 0x80271690: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80271694: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80271698: bltz        $v0, L_80271758
    if (SIGNED(ctx->r2) < 0) {
        // 0x8027169C: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_80271758;
    }
    // 0x8027169C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802716A0: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x802716A4: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x802716A8: jal         0x8003CC44
    // 0x802716AC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_8003CC44(rdram, ctx);
        goto after_1;
    // 0x802716AC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_1:
    // 0x802716B0: lbu         $a3, 0x26($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X26);
    // 0x802716B4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x802716B8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x802716BC: bne         $a3, $zero, L_802716E8
    if (ctx->r7 != 0) {
        // 0x802716C0: sll         $t5, $v0, 3
        ctx->r13 = S32(ctx->r2 << 3);
            goto L_802716E8;
    }
    // 0x802716C0: sll         $t5, $v0, 3
    ctx->r13 = S32(ctx->r2 << 3);
    // 0x802716C4: sll         $t3, $v0, 3
    ctx->r11 = S32(ctx->r2 << 3);
    // 0x802716C8: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x802716CC: sll         $t3, $t3, 5
    ctx->r11 = S32(ctx->r11 << 5);
    // 0x802716D0: subu        $t3, $t3, $v0
    ctx->r11 = SUB32(ctx->r11, ctx->r2);
    // 0x802716D4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x802716D8: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x802716DC: lbu         $v1, 0x4A($t4)
    ctx->r3 = MEM_BU(ctx->r12, 0X4A);
    // 0x802716E0: b           L_80271708
    // 0x802716E4: slti        $at, $v1, 0x24
    ctx->r1 = SIGNED(ctx->r3) < 0X24 ? 1 : 0;
        goto L_80271708;
    // 0x802716E4: slti        $at, $v1, 0x24
    ctx->r1 = SIGNED(ctx->r3) < 0X24 ? 1 : 0;
L_802716E8:
    // 0x802716E8: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x802716EC: sll         $t5, $t5, 5
    ctx->r13 = S32(ctx->r13 << 5);
    // 0x802716F0: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x802716F4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x802716F8: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x802716FC: lbu         $v1, 0x50($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0X50);
    // 0x80271700: nop

    // 0x80271704: slti        $at, $v1, 0x24
    ctx->r1 = SIGNED(ctx->r3) < 0X24 ? 1 : 0;
L_80271708:
    // 0x80271708: bne         $at, $zero, L_80271718
    if (ctx->r1 != 0) {
        // 0x8027170C: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_80271718;
    }
    // 0x8027170C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80271710: b           L_8027175C
    // 0x80271714: sb          $zero, 0x4($a2)
    MEM_B(0X4, ctx->r6) = 0;
        goto L_8027175C;
    // 0x80271714: sb          $zero, 0x4($a2)
    MEM_B(0X4, ctx->r6) = 0;
L_80271718:
    // 0x80271718: addiu       $a1, $a3, 0x8
    ctx->r5 = ADD32(ctx->r7, 0X8);
    // 0x8027171C: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x80271720: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80271724: sb          $v1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r3;
    // 0x80271728: jal         0x8007AAF8
    // 0x8027172C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_8007AAF8(rdram, ctx);
        goto after_2;
    // 0x8027172C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_2:
    // 0x80271730: lbu         $v1, 0x27($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X27);
    // 0x80271734: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80271738: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x8027173C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80271740: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80271744: lhu         $t9, -0x6B68($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X6B68);
    // 0x80271748: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8027174C: sb          $t1, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r9;
    // 0x80271750: b           L_8027175C
    // 0x80271754: sh          $t9, 0x12($a2)
    MEM_H(0X12, ctx->r6) = ctx->r25;
        goto L_8027175C;
    // 0x80271754: sh          $t9, 0x12($a2)
    MEM_H(0X12, ctx->r6) = ctx->r25;
L_80271758:
    // 0x80271758: sb          $zero, 0x4($a2)
    MEM_B(0X4, ctx->r6) = 0;
L_8027175C:
    // 0x8027175C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80271760: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80271764: jr          $ra
    // 0x80271768: nop

    return;
    // 0x80271768: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8027176C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027176C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80271770: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80271774: lb          $t6, 0xF($v0)
    ctx->r14 = MEM_B(ctx->r2, 0XF);
    // 0x80271778: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027177C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80271780: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80271784: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80271788: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027178C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80271790: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80271794: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80271798: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027179C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802717A0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802717A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802717A8: lw          $t0, 0x38($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X38);
    // 0x802717AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802717B0: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x802717B4: lh          $t1, -0x6B8($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X6B8);
    // 0x802717B8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802717BC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802717C0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802717C4: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x802717C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802717CC: lh          $v1, 0x1E($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X1E);
    // 0x802717D0: bne         $t1, $at, L_8027197C
    if (ctx->r9 != ctx->r1) {
        // 0x802717D4: addu        $a3, $t7, $t8
        ctx->r7 = ADD32(ctx->r15, ctx->r24);
            goto L_8027197C;
    }
    // 0x802717D4: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x802717D8: lbu         $a0, 0x44($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X44);
    // 0x802717DC: sh          $v1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r3;
    // 0x802717E0: jal         0x8003CC44
    // 0x802717E4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8003CC44(rdram, ctx);
        goto after_0;
    // 0x802717E4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x802717E8: lh          $v1, 0x2C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2C);
    // 0x802717EC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x802717F0: bltz        $v0, L_8027197C
    if (SIGNED(ctx->r2) < 0) {
        // 0x802717F4: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_8027197C;
    }
    // 0x802717F4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802717F8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x802717FC: sh          $v1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r3;
    // 0x80271800: jal         0x8003CC44
    // 0x80271804: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8003CC44(rdram, ctx);
        goto after_1;
    // 0x80271804: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x80271808: lh          $v1, 0x2C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2C);
    // 0x8027180C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80271810: beq         $v1, $zero, L_80271844
    if (ctx->r3 == 0) {
        // 0x80271814: sll         $t2, $v0, 3
        ctx->r10 = S32(ctx->r2 << 3);
            goto L_80271844;
    }
    // 0x80271814: sll         $t2, $v0, 3
    ctx->r10 = S32(ctx->r2 << 3);
    // 0x80271818: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027181C: beq         $v1, $at, L_80271864
    if (ctx->r3 == ctx->r1) {
        // 0x80271820: sll         $t5, $v0, 3
        ctx->r13 = S32(ctx->r2 << 3);
            goto L_80271864;
    }
    // 0x80271820: sll         $t5, $v0, 3
    ctx->r13 = S32(ctx->r2 << 3);
    // 0x80271824: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80271828: beq         $v1, $at, L_80271884
    if (ctx->r3 == ctx->r1) {
        // 0x8027182C: sll         $t8, $v0, 3
        ctx->r24 = S32(ctx->r2 << 3);
            goto L_80271884;
    }
    // 0x8027182C: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x80271830: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80271834: beq         $v1, $at, L_802718A4
    if (ctx->r3 == ctx->r1) {
        // 0x80271838: sll         $t1, $v0, 3
        ctx->r9 = S32(ctx->r2 << 3);
            goto L_802718A4;
    }
    // 0x80271838: sll         $t1, $v0, 3
    ctx->r9 = S32(ctx->r2 << 3);
    // 0x8027183C: b           L_802718C8
    // 0x80271840: lbu         $v0, 0x2F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2F);
        goto L_802718C8;
    // 0x80271840: lbu         $v0, 0x2F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2F);
L_80271844:
    // 0x80271844: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x80271848: sll         $t2, $t2, 5
    ctx->r10 = S32(ctx->r10 << 5);
    // 0x8027184C: subu        $t2, $t2, $v0
    ctx->r10 = SUB32(ctx->r10, ctx->r2);
    // 0x80271850: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80271854: addu        $t3, $a3, $t2
    ctx->r11 = ADD32(ctx->r7, ctx->r10);
    // 0x80271858: lbu         $t4, 0x47($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X47);
    // 0x8027185C: b           L_802718C4
    // 0x80271860: sb          $t4, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r12;
        goto L_802718C4;
    // 0x80271860: sb          $t4, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r12;
L_80271864:
    // 0x80271864: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x80271868: sll         $t5, $t5, 5
    ctx->r13 = S32(ctx->r13 << 5);
    // 0x8027186C: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x80271870: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80271874: addu        $t6, $a3, $t5
    ctx->r14 = ADD32(ctx->r7, ctx->r13);
    // 0x80271878: lbu         $t7, 0x4C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4C);
    // 0x8027187C: b           L_802718C4
    // 0x80271880: sb          $t7, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r15;
        goto L_802718C4;
    // 0x80271880: sb          $t7, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r15;
L_80271884:
    // 0x80271884: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x80271888: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x8027188C: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x80271890: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80271894: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x80271898: lbu         $t0, 0x56($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X56);
    // 0x8027189C: b           L_802718C4
    // 0x802718A0: sb          $t0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r8;
        goto L_802718C4;
    // 0x802718A0: sb          $t0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r8;
L_802718A4:
    // 0x802718A4: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x802718A8: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x802718AC: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x802718B0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x802718B4: addu        $t2, $a3, $t1
    ctx->r10 = ADD32(ctx->r7, ctx->r9);
    // 0x802718B8: lbu         $t3, 0x5B($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X5B);
    // 0x802718BC: nop

    // 0x802718C0: sb          $t3, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r11;
L_802718C4:
    // 0x802718C4: lbu         $v0, 0x2F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2F);
L_802718C8:
    // 0x802718C8: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x802718CC: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x802718D0: beq         $at, $zero, L_8027197C
    if (ctx->r1 == 0) {
        // 0x802718D4: sll         $a1, $v0, 24
        ctx->r5 = S32(ctx->r2 << 24);
            goto L_8027197C;
    }
    // 0x802718D4: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x802718D8: lb          $t4, -0x326C($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X326C);
    // 0x802718DC: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x802718E0: addu        $t5, $a3, $t4
    ctx->r13 = ADD32(ctx->r7, ctx->r12);
    // 0x802718E4: lb          $a0, 0x7($t5)
    ctx->r4 = MEM_B(ctx->r13, 0X7);
    // 0x802718E8: sh          $v1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r3;
    // 0x802718EC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x802718F0: jal         0x80042238
    // 0x802718F4: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    func_80042238(rdram, ctx);
        goto after_2;
    // 0x802718F4: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    after_2:
    // 0x802718F8: jal         0x8004D710
    // 0x802718FC: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_8004D710(rdram, ctx);
        goto after_3;
    // 0x802718FC: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_3:
    // 0x80271900: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80271904: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80271908: jal         0x80039C50
    // 0x8027190C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80039C50(rdram, ctx);
        goto after_4;
    // 0x8027190C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_4:
    // 0x80271910: lh          $v1, 0x2C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2C);
    // 0x80271914: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x80271918: addiu       $t2, $t2, 0x4CAC
    ctx->r10 = ADD32(ctx->r10, 0X4CAC);
    // 0x8027191C: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x80271920: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x80271924: lbu         $a3, 0x0($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X0);
    // 0x80271928: lbu         $t5, 0x1($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X1);
    // 0x8027192C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80271930: ori         $at, $at, 0xFF08
    ctx->r1 = ctx->r1 | 0XFF08;
    // 0x80271934: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80271938: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8027193C: sll         $t8, $v1, 5
    ctx->r24 = S32(ctx->r3 << 5);
    // 0x80271940: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80271944: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x80271948: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8027194C: lw          $a1, -0x3254($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3254);
    // 0x80271950: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x80271954: lbu         $a2, 0x2F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2F);
    // 0x80271958: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8027195C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80271960: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x80271964: jal         0x8006ED60
    // 0x80271968: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    func_8006ED60(rdram, ctx);
        goto after_5;
    // 0x80271968: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    after_5:
    // 0x8027196C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80271970: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80271974: b           L_80271994
    // 0x80271978: sb          $t7, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r15;
        goto L_80271994;
    // 0x80271978: sb          $t7, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r15;
L_8027197C:
    // 0x8027197C: sll         $t9, $v1, 5
    ctx->r25 = S32(ctx->r3 << 5);
    // 0x80271980: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80271984: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80271988: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8027198C: sb          $zero, -0x3864($at)
    MEM_B(-0X3864, ctx->r1) = 0;
    // 0x80271990: sb          $zero, 0x4($t0)
    MEM_B(0X4, ctx->r8) = 0;
L_80271994:
    // 0x80271994: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80271998: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8027199C: jr          $ra
    // 0x802719A0: nop

    return;
    // 0x802719A0: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802717B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802717B0: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x802717B4: lh          $t1, -0x6B8($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X6B8);
    // 0x802717B8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802717BC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802717C0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802717C4: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x802717C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802717CC: lh          $v1, 0x1E($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X1E);
    // 0x802717D0: bne         $t1, $at, L_8027197C
    if (ctx->r9 != ctx->r1) {
        // 0x802717D4: addu        $a3, $t7, $t8
        ctx->r7 = ADD32(ctx->r15, ctx->r24);
            goto L_8027197C;
    }
    // 0x802717D4: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x802717D8: lbu         $a0, 0x44($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X44);
    // 0x802717DC: sh          $v1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r3;
    // 0x802717E0: jal         0x8003CC44
    // 0x802717E4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8003CC44(rdram, ctx);
        goto after_0;
    // 0x802717E4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x802717E8: lh          $v1, 0x2C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2C);
    // 0x802717EC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x802717F0: bltz        $v0, L_8027197C
    if (SIGNED(ctx->r2) < 0) {
        // 0x802717F4: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_8027197C;
    }
    // 0x802717F4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802717F8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x802717FC: sh          $v1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r3;
    // 0x80271800: jal         0x8003CC44
    // 0x80271804: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8003CC44(rdram, ctx);
        goto after_1;
    // 0x80271804: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x80271808: lh          $v1, 0x2C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2C);
    // 0x8027180C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80271810: beq         $v1, $zero, L_80271844
    if (ctx->r3 == 0) {
        // 0x80271814: sll         $t2, $v0, 3
        ctx->r10 = S32(ctx->r2 << 3);
            goto L_80271844;
    }
    // 0x80271814: sll         $t2, $v0, 3
    ctx->r10 = S32(ctx->r2 << 3);
    // 0x80271818: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027181C: beq         $v1, $at, L_80271864
    if (ctx->r3 == ctx->r1) {
        // 0x80271820: sll         $t5, $v0, 3
        ctx->r13 = S32(ctx->r2 << 3);
            goto L_80271864;
    }
    // 0x80271820: sll         $t5, $v0, 3
    ctx->r13 = S32(ctx->r2 << 3);
    // 0x80271824: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80271828: beq         $v1, $at, L_80271884
    if (ctx->r3 == ctx->r1) {
        // 0x8027182C: sll         $t8, $v0, 3
        ctx->r24 = S32(ctx->r2 << 3);
            goto L_80271884;
    }
    // 0x8027182C: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x80271830: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80271834: beq         $v1, $at, L_802718A4
    if (ctx->r3 == ctx->r1) {
        // 0x80271838: sll         $t1, $v0, 3
        ctx->r9 = S32(ctx->r2 << 3);
            goto L_802718A4;
    }
    // 0x80271838: sll         $t1, $v0, 3
    ctx->r9 = S32(ctx->r2 << 3);
    // 0x8027183C: b           L_802718C8
    // 0x80271840: lbu         $v0, 0x2F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2F);
        goto L_802718C8;
    // 0x80271840: lbu         $v0, 0x2F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2F);
L_80271844:
    // 0x80271844: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x80271848: sll         $t2, $t2, 5
    ctx->r10 = S32(ctx->r10 << 5);
    // 0x8027184C: subu        $t2, $t2, $v0
    ctx->r10 = SUB32(ctx->r10, ctx->r2);
    // 0x80271850: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80271854: addu        $t3, $a3, $t2
    ctx->r11 = ADD32(ctx->r7, ctx->r10);
    // 0x80271858: lbu         $t4, 0x47($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X47);
    // 0x8027185C: b           L_802718C4
    // 0x80271860: sb          $t4, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r12;
        goto L_802718C4;
    // 0x80271860: sb          $t4, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r12;
L_80271864:
    // 0x80271864: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x80271868: sll         $t5, $t5, 5
    ctx->r13 = S32(ctx->r13 << 5);
    // 0x8027186C: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x80271870: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80271874: addu        $t6, $a3, $t5
    ctx->r14 = ADD32(ctx->r7, ctx->r13);
    // 0x80271878: lbu         $t7, 0x4C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4C);
    // 0x8027187C: b           L_802718C4
    // 0x80271880: sb          $t7, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r15;
        goto L_802718C4;
    // 0x80271880: sb          $t7, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r15;
L_80271884:
    // 0x80271884: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x80271888: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x8027188C: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x80271890: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80271894: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x80271898: lbu         $t0, 0x56($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X56);
    // 0x8027189C: b           L_802718C4
    // 0x802718A0: sb          $t0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r8;
        goto L_802718C4;
    // 0x802718A0: sb          $t0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r8;
L_802718A4:
    // 0x802718A4: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x802718A8: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x802718AC: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x802718B0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x802718B4: addu        $t2, $a3, $t1
    ctx->r10 = ADD32(ctx->r7, ctx->r9);
    // 0x802718B8: lbu         $t3, 0x5B($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X5B);
    // 0x802718BC: nop

    // 0x802718C0: sb          $t3, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r11;
L_802718C4:
    // 0x802718C4: lbu         $v0, 0x2F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2F);
L_802718C8:
    // 0x802718C8: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x802718CC: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x802718D0: beq         $at, $zero, L_8027197C
    if (ctx->r1 == 0) {
        // 0x802718D4: sll         $a1, $v0, 24
        ctx->r5 = S32(ctx->r2 << 24);
            goto L_8027197C;
    }
    // 0x802718D4: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x802718D8: lb          $t4, -0x326C($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X326C);
    // 0x802718DC: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x802718E0: addu        $t5, $a3, $t4
    ctx->r13 = ADD32(ctx->r7, ctx->r12);
    // 0x802718E4: lb          $a0, 0x7($t5)
    ctx->r4 = MEM_B(ctx->r13, 0X7);
    // 0x802718E8: sh          $v1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r3;
    // 0x802718EC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x802718F0: jal         0x80042238
    // 0x802718F4: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    func_80042238(rdram, ctx);
        goto after_2;
    // 0x802718F4: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    after_2:
    // 0x802718F8: jal         0x8004D710
    // 0x802718FC: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_8004D710(rdram, ctx);
        goto after_3;
    // 0x802718FC: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_3:
    // 0x80271900: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80271904: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80271908: jal         0x80039C50
    // 0x8027190C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80039C50(rdram, ctx);
        goto after_4;
    // 0x8027190C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_4:
    // 0x80271910: lh          $v1, 0x2C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2C);
    // 0x80271914: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x80271918: addiu       $t2, $t2, 0x4CAC
    ctx->r10 = ADD32(ctx->r10, 0X4CAC);
    // 0x8027191C: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x80271920: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x80271924: lbu         $a3, 0x0($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X0);
    // 0x80271928: lbu         $t5, 0x1($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X1);
    // 0x8027192C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80271930: ori         $at, $at, 0xFF08
    ctx->r1 = ctx->r1 | 0XFF08;
    // 0x80271934: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80271938: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8027193C: sll         $t8, $v1, 5
    ctx->r24 = S32(ctx->r3 << 5);
    // 0x80271940: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80271944: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x80271948: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8027194C: lw          $a1, -0x3254($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3254);
    // 0x80271950: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x80271954: lbu         $a2, 0x2F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2F);
    // 0x80271958: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8027195C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80271960: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x80271964: jal         0x8006ED60
    // 0x80271968: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    func_8006ED60(rdram, ctx);
        goto after_5;
    // 0x80271968: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    after_5:
    // 0x8027196C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80271970: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80271974: b           L_80271994
    // 0x80271978: sb          $t7, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r15;
        goto L_80271994;
    // 0x80271978: sb          $t7, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r15;
L_8027197C:
    // 0x8027197C: sll         $t9, $v1, 5
    ctx->r25 = S32(ctx->r3 << 5);
    // 0x80271980: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80271984: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80271988: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8027198C: sb          $zero, -0x3864($at)
    MEM_B(-0X3864, ctx->r1) = 0;
    // 0x80271990: sb          $zero, 0x4($t0)
    MEM_B(0X4, ctx->r8) = 0;
L_80271994:
    // 0x80271994: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80271998: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8027199C: jr          $ra
    // 0x802719A0: nop

    return;
    // 0x802719A0: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80271890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271890: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80271894: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x80271898: lbu         $t0, 0x56($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X56);
    // 0x8027189C: b           L_802718C4
    // 0x802718A0: sb          $t0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r8;
        goto L_802718C4;
    // 0x802718A0: sb          $t0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r8;
    // 0x802718A4: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x802718A8: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x802718AC: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x802718B0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x802718B4: addu        $t2, $a3, $t1
    ctx->r10 = ADD32(ctx->r7, ctx->r9);
    // 0x802718B8: lbu         $t3, 0x5B($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X5B);
    // 0x802718BC: nop

    // 0x802718C0: sb          $t3, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r11;
L_802718C4:
    // 0x802718C4: lbu         $v0, 0x2F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2F);
    // 0x802718C8: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x802718CC: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x802718D0: beq         $at, $zero, L_8027197C
    if (ctx->r1 == 0) {
        // 0x802718D4: sll         $a1, $v0, 24
        ctx->r5 = S32(ctx->r2 << 24);
            goto L_8027197C;
    }
    // 0x802718D4: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x802718D8: lb          $t4, -0x326C($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X326C);
    // 0x802718DC: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x802718E0: addu        $t5, $a3, $t4
    ctx->r13 = ADD32(ctx->r7, ctx->r12);
    // 0x802718E4: lb          $a0, 0x7($t5)
    ctx->r4 = MEM_B(ctx->r13, 0X7);
    // 0x802718E8: sh          $v1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r3;
    // 0x802718EC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x802718F0: jal         0x80042238
    // 0x802718F4: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    func_80042238(rdram, ctx);
        goto after_0;
    // 0x802718F4: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    after_0:
    // 0x802718F8: jal         0x8004D710
    // 0x802718FC: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_8004D710(rdram, ctx);
        goto after_1;
    // 0x802718FC: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_1:
    // 0x80271900: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80271904: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80271908: jal         0x80039C50
    // 0x8027190C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80039C50(rdram, ctx);
        goto after_2;
    // 0x8027190C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_2:
    // 0x80271910: lh          $v1, 0x2C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2C);
    // 0x80271914: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x80271918: addiu       $t2, $t2, 0x4CAC
    ctx->r10 = ADD32(ctx->r10, 0X4CAC);
    // 0x8027191C: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x80271920: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x80271924: lbu         $a3, 0x0($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X0);
    // 0x80271928: lbu         $t5, 0x1($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X1);
    // 0x8027192C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80271930: ori         $at, $at, 0xFF08
    ctx->r1 = ctx->r1 | 0XFF08;
    // 0x80271934: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80271938: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8027193C: sll         $t8, $v1, 5
    ctx->r24 = S32(ctx->r3 << 5);
    // 0x80271940: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80271944: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x80271948: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8027194C: lw          $a1, -0x3254($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3254);
    // 0x80271950: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x80271954: lbu         $a2, 0x2F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2F);
    // 0x80271958: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8027195C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80271960: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x80271964: jal         0x8006ED60
    // 0x80271968: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    func_8006ED60(rdram, ctx);
        goto after_3;
    // 0x80271968: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    after_3:
    // 0x8027196C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80271970: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80271974: b           L_80271994
    // 0x80271978: sb          $t7, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r15;
        goto L_80271994;
    // 0x80271978: sb          $t7, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r15;
L_8027197C:
    // 0x8027197C: sll         $t9, $v1, 5
    ctx->r25 = S32(ctx->r3 << 5);
    // 0x80271980: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80271984: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80271988: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8027198C: sb          $zero, -0x3864($at)
    MEM_B(-0X3864, ctx->r1) = 0;
    // 0x80271990: sb          $zero, 0x4($t0)
    MEM_B(0X4, ctx->r8) = 0;
L_80271994:
    // 0x80271994: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80271998: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8027199C: jr          $ra
    // 0x802719A0: nop

    return;
    // 0x802719A0: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802718DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802718DC: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x802718E0: addu        $t5, $a3, $t4
    ctx->r13 = ADD32(ctx->r7, ctx->r12);
    // 0x802718E4: lb          $a0, 0x7($t5)
    ctx->r4 = MEM_B(ctx->r13, 0X7);
    // 0x802718E8: sh          $v1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r3;
    // 0x802718EC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x802718F0: jal         0x80042238
    // 0x802718F4: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    func_80042238(rdram, ctx);
        goto after_0;
    // 0x802718F4: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    after_0:
    // 0x802718F8: jal         0x8004D710
    // 0x802718FC: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_8004D710(rdram, ctx);
        goto after_1;
    // 0x802718FC: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_1:
    // 0x80271900: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80271904: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80271908: jal         0x80039C50
    // 0x8027190C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80039C50(rdram, ctx);
        goto after_2;
    // 0x8027190C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_2:
    // 0x80271910: lh          $v1, 0x2C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2C);
    // 0x80271914: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x80271918: addiu       $t2, $t2, 0x4CAC
    ctx->r10 = ADD32(ctx->r10, 0X4CAC);
    // 0x8027191C: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x80271920: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x80271924: lbu         $a3, 0x0($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X0);
    // 0x80271928: lbu         $t5, 0x1($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X1);
    // 0x8027192C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80271930: ori         $at, $at, 0xFF08
    ctx->r1 = ctx->r1 | 0XFF08;
    // 0x80271934: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80271938: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8027193C: sll         $t8, $v1, 5
    ctx->r24 = S32(ctx->r3 << 5);
    // 0x80271940: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80271944: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x80271948: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8027194C: lw          $a1, -0x3254($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3254);
    // 0x80271950: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x80271954: lbu         $a2, 0x2F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2F);
    // 0x80271958: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8027195C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80271960: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x80271964: jal         0x8006ED60
    // 0x80271968: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    func_8006ED60(rdram, ctx);
        goto after_3;
    // 0x80271968: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    after_3:
    // 0x8027196C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80271970: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80271974: b           L_80271994
    // 0x80271978: sb          $t7, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r15;
        goto L_80271994;
    // 0x80271978: sb          $t7, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r15;
    // 0x8027197C: sll         $t9, $v1, 5
    ctx->r25 = S32(ctx->r3 << 5);
    // 0x80271980: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80271984: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80271988: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8027198C: sb          $zero, -0x3864($at)
    MEM_B(-0X3864, ctx->r1) = 0;
    // 0x80271990: sb          $zero, 0x4($t0)
    MEM_B(0X4, ctx->r8) = 0;
L_80271994:
    // 0x80271994: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80271998: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8027199C: jr          $ra
    // 0x802719A0: nop

    return;
    // 0x802719A0: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80271980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271980: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80271984: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80271988: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8027198C: sb          $zero, -0x3864($at)
    MEM_B(-0X3864, ctx->r1) = 0;
    // 0x80271990: sb          $zero, 0x4($t0)
    MEM_B(0X4, ctx->r8) = 0;
    // 0x80271994: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80271998: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8027199C: jr          $ra
    // 0x802719A0: nop

    return;
    // 0x802719A0: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802719A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802719A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802719A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802719AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802719B0: jal         0x80036258
    // 0x802719B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036258(rdram, ctx);
        goto after_0;
    // 0x802719B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802719B8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802719BC: jal         0x80035FF0
    // 0x802719C0: addiu       $a0, $a0, 0x4840
    ctx->r4 = ADD32(ctx->r4, 0X4840);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x802719C0: addiu       $a0, $a0, 0x4840
    ctx->r4 = ADD32(ctx->r4, 0X4840);
    after_1:
    // 0x802719C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802719C8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x802719CC: jal         0x80049E40
    // 0x802719D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x802719D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x802719D4: jal         0x8006FB58
    // 0x802719D8: nop

    func_8006FB58(rdram, ctx);
        goto after_3;
    // 0x802719D8: nop

    after_3:
    // 0x802719DC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802719E0: jal         0x8002AAC0
    // 0x802719E4: addiu       $a0, $a0, 0x4A14
    ctx->r4 = ADD32(ctx->r4, 0X4A14);
    func_8002AAC0(rdram, ctx);
        goto after_4;
    // 0x802719E4: addiu       $a0, $a0, 0x4A14
    ctx->r4 = ADD32(ctx->r4, 0X4A14);
    after_4:
    // 0x802719E8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802719EC: jal         0x80029354
    // 0x802719F0: addiu       $a0, $a0, 0x29AC
    ctx->r4 = ADD32(ctx->r4, 0X29AC);
    func_80029354(rdram, ctx);
        goto after_5;
    // 0x802719F0: addiu       $a0, $a0, 0x29AC
    ctx->r4 = ADD32(ctx->r4, 0X29AC);
    after_5:
    // 0x802719F4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802719F8: addiu       $a0, $a0, 0x1A14
    ctx->r4 = ADD32(ctx->r4, 0X1A14);
    // 0x802719FC: jal         0x8004A9B4
    // 0x80271A00: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_6;
    // 0x80271A00: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_6:
    // 0x80271A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80271A08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80271A0C: jr          $ra
    // 0x80271A10: nop

    return;
    // 0x80271A10: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802719DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802719DC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802719E0: jal         0x8002AAC0
    // 0x802719E4: addiu       $a0, $a0, 0x4A14
    ctx->r4 = ADD32(ctx->r4, 0X4A14);
    func_8002AAC0(rdram, ctx);
        goto after_0;
    // 0x802719E4: addiu       $a0, $a0, 0x4A14
    ctx->r4 = ADD32(ctx->r4, 0X4A14);
    after_0:
    // 0x802719E8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802719EC: jal         0x80029354
    // 0x802719F0: addiu       $a0, $a0, 0x29AC
    ctx->r4 = ADD32(ctx->r4, 0X29AC);
    func_80029354(rdram, ctx);
        goto after_1;
    // 0x802719F0: addiu       $a0, $a0, 0x29AC
    ctx->r4 = ADD32(ctx->r4, 0X29AC);
    after_1:
    // 0x802719F4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802719F8: addiu       $a0, $a0, 0x1A14
    ctx->r4 = ADD32(ctx->r4, 0X1A14);
    // 0x802719FC: jal         0x8004A9B4
    // 0x80271A00: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_2;
    // 0x80271A00: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_2:
    // 0x80271A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80271A08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80271A0C: jr          $ra
    // 0x80271A10: nop

    return;
    // 0x80271A10: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80271A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271A14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80271A18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80271A1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80271A20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80271A24: jal         0x800357CC
    // 0x80271A28: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800357CC(rdram, ctx);
        goto after_0;
    // 0x80271A28: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80271A2C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80271A30: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x80271A34: nop

    // 0x80271A38: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x80271A3C: jal         0x80035C90
    // 0x80271A40: nop

    func_80035C90(rdram, ctx);
        goto after_1;
    // 0x80271A40: nop

    after_1:
    // 0x80271A44: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80271A48: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80271A4C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80271A50: lw          $t9, 0x4A68($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4A68);
    // 0x80271A54: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80271A58: jalr        $t9
    // 0x80271A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80271A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80271A60: lh          $a0, 0x24($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X24);
    // 0x80271A64: jal         0x8001D6EC
    // 0x80271A68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8001D6EC(rdram, ctx);
        goto after_3;
    // 0x80271A68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x80271A6C: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    // 0x80271A70: lh          $t0, 0x24($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X24);
    // 0x80271A74: lb          $t8, 0x5A($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X5A);
    // 0x80271A78: nop

    // 0x80271A7C: beq         $t8, $t0, L_80271A90
    if (ctx->r24 == ctx->r8) {
        // 0x80271A80: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80271A90;
    }
    // 0x80271A80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80271A84: jal         0x80035734
    // 0x80271A88: nop

    func_80035734(rdram, ctx);
        goto after_4;
    // 0x80271A88: nop

    after_4:
    // 0x80271A8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80271A90:
    // 0x80271A90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80271A94: jr          $ra
    // 0x80271A98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80271A98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8026F480_func_80271A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271A18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80271A1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80271A20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80271A24: jal         0x800357CC
    // 0x80271A28: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800357CC(rdram, ctx);
        goto after_0;
    // 0x80271A28: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80271A2C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80271A30: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x80271A34: nop

    // 0x80271A38: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x80271A3C: jal         0x80035C90
    // 0x80271A40: nop

    func_80035C90(rdram, ctx);
        goto after_1;
    // 0x80271A40: nop

    after_1:
    // 0x80271A44: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80271A48: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80271A4C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80271A50: lw          $t9, 0x4A68($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4A68);
    // 0x80271A54: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80271A58: jalr        $t9
    // 0x80271A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80271A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80271A60: lh          $a0, 0x24($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X24);
    // 0x80271A64: jal         0x8001D6EC
    // 0x80271A68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8001D6EC(rdram, ctx);
        goto after_3;
    // 0x80271A68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x80271A6C: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    // 0x80271A70: lh          $t0, 0x24($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X24);
    // 0x80271A74: lb          $t8, 0x5A($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X5A);
    // 0x80271A78: nop

    // 0x80271A7C: beq         $t8, $t0, L_80271A90
    if (ctx->r24 == ctx->r8) {
        // 0x80271A80: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80271A90;
    }
    // 0x80271A80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80271A84: jal         0x80035734
    // 0x80271A88: nop

    func_80035734(rdram, ctx);
        goto after_4;
    // 0x80271A88: nop

    after_4:
    // 0x80271A8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80271A90:
    // 0x80271A90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80271A94: jr          $ra
    // 0x80271A98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80271A98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8026F480_func_80271A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80271A60: lh          $a0, 0x24($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X24);
    // 0x80271A64: jal         0x8001D6EC
    // 0x80271A68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8001D6EC(rdram, ctx);
        goto after_0;
    // 0x80271A68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x80271A6C: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    // 0x80271A70: lh          $t0, 0x24($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X24);
    // 0x80271A74: lb          $t8, 0x5A($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X5A);
    // 0x80271A78: nop

    // 0x80271A7C: beq         $t8, $t0, L_80271A90
    if (ctx->r24 == ctx->r8) {
        // 0x80271A80: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80271A90;
    }
    // 0x80271A80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80271A84: jal         0x80035734
    // 0x80271A88: nop

    func_80035734(rdram, ctx);
        goto after_1;
    // 0x80271A88: nop

    after_1:
    // 0x80271A8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80271A90:
    // 0x80271A90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80271A94: jr          $ra
    // 0x80271A98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80271A98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8026F480_func_80271A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271A9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80271AA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80271AA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80271AA8: jal         0x80035770
    // 0x80271AAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x80271AAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80271AB0: jal         0x80037908
    // 0x80271AB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_1;
    // 0x80271AB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80271AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80271ABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80271AC0: jr          $ra
    // 0x80271AC4: nop

    return;
    // 0x80271AC4: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80271AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271AC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80271ACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80271AD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80271AD4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80271AD8: jal         0x80037908
    // 0x80271ADC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x80271ADC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80271AE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80271AE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80271AE8: jr          $ra
    // 0x80271AEC: nop

    return;
    // 0x80271AEC: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80271AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271AF0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80271AF4: lh          $t6, 0x24($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X24);
    // 0x80271AF8: nop

    // 0x80271AFC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80271B00: jr          $ra
    // 0x80271B04: sh          $t7, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r15;
    return;
    // 0x80271B04: sh          $t7, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_8026F480_func_80271B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271B08: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80271B0C: lh          $t6, 0x24($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X24);
    // 0x80271B10: nop

    // 0x80271B14: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80271B18: jr          $ra
    // 0x80271B1C: sh          $t7, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r15;
    return;
    // 0x80271B1C: sh          $t7, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_8026F480_func_80271B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271B20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80271B24: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80271B28: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80271B2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80271B30: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80271B34: addiu       $a0, $a0, 0x2724
    ctx->r4 = ADD32(ctx->r4, 0X2724);
    // 0x80271B38: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80271B3C: jal         0x800293DC
    // 0x80271B40: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80271B40: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x80271B44: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80271B48: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x80271B4C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x80271B50: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x80271B54: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x80271B58: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80271B5C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80271B60: addiu       $a3, $a3, 0x4CB4
    ctx->r7 = ADD32(ctx->r7, 0X4CB4);
    // 0x80271B64: addiu       $a2, $a2, 0x23D8
    ctx->r6 = ADD32(ctx->r6, 0X23D8);
    // 0x80271B68: jal         0x802729F4
    // 0x80271B6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_8026F480_func_802729F4(rdram, ctx);
        goto after_1;
    // 0x80271B6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80271B70: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80271B74: jal         0x800293DC
    // 0x80271B78: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800293DC(rdram, ctx);
        goto after_2;
    // 0x80271B78: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x80271B7C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80271B80: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x80271B84: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x80271B88: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80271B8C: jal         0x8004C7D4
    // 0x80271B90: addiu       $a2, $a2, 0x4D34
    ctx->r6 = ADD32(ctx->r6, 0X4D34);
    func_8004C7D4(rdram, ctx);
        goto after_3;
    // 0x80271B90: addiu       $a2, $a2, 0x4D34
    ctx->r6 = ADD32(ctx->r6, 0X4D34);
    after_3:
    // 0x80271B94: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80271B98: lb          $t7, -0x32A1($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X32A1);
    // 0x80271B9C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80271BA0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80271BA4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80271BA8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80271BAC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80271BB0: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80271BB4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80271BB8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80271BBC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80271BC0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80271BC4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80271BC8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80271BCC: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x80271BD0: lb          $a0, -0x2F7F($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X2F7F);
    // 0x80271BD4: jal         0x8003EB78
    // 0x80271BD8: nop

    func_8003EB78(rdram, ctx);
        goto after_4;
    // 0x80271BD8: nop

    after_4:
    // 0x80271BDC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80271BE0: jal         0x800297B4
    // 0x80271BE4: addiu       $a0, $a0, 0x1BF8
    ctx->r4 = ADD32(ctx->r4, 0X1BF8);
    func_800297B4(rdram, ctx);
        goto after_5;
    // 0x80271BE4: addiu       $a0, $a0, 0x1BF8
    ctx->r4 = ADD32(ctx->r4, 0X1BF8);
    after_5:
    // 0x80271BE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80271BEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80271BF0: jr          $ra
    // 0x80271BF4: nop

    return;
    // 0x80271BF4: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80271BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271BE0: jal         0x800297B4
    // 0x80271BE4: addiu       $a0, $a0, 0x1BF8
    ctx->r4 = ADD32(ctx->r4, 0X1BF8);
    func_800297B4(rdram, ctx);
        goto after_0;
    // 0x80271BE4: addiu       $a0, $a0, 0x1BF8
    ctx->r4 = ADD32(ctx->r4, 0X1BF8);
    after_0:
    // 0x80271BE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80271BEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80271BF0: jr          $ra
    // 0x80271BF4: nop

    return;
    // 0x80271BF4: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80271BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271BF8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80271BFC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80271C00: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80271C04: addiu       $s0, $s0, -0x32B0
    ctx->r16 = ADD32(ctx->r16, -0X32B0);
    // 0x80271C08: lb          $t6, 0xF($s0)
    ctx->r14 = MEM_B(ctx->r16, 0XF);
    // 0x80271C0C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80271C10: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80271C14: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80271C18: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80271C1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80271C20: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80271C24: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80271C28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80271C2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80271C30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80271C34: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80271C38: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80271C3C: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x80271C40: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80271C44: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80271C48: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80271C4C: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x80271C50: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x80271C54: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80271C58: lb          $a0, 0x1($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X1);
    // 0x80271C5C: jal         0x8003EB78
    // 0x80271C60: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_8003EB78(rdram, ctx);
        goto after_0;
    // 0x80271C60: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_0:
    // 0x80271C64: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x80271C68: addiu       $s1, $s1, -0x750
    ctx->r17 = ADD32(ctx->r17, -0X750);
    // 0x80271C6C: lh          $t9, 0x98($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X98);
    // 0x80271C70: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80271C74: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x80271C78: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x80271C7C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80271C80: addiu       $t3, $t3, 0x62E4
    ctx->r11 = ADD32(ctx->r11, 0X62E4);
    // 0x80271C84: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80271C88: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x80271C8C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80271C90: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80271C94: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80271C98: subu        $t2, $t2, $t9
    ctx->r10 = SUB32(ctx->r10, ctx->r25);
    // 0x80271C9C: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x80271CA0: addu        $a3, $t2, $t3
    ctx->r7 = ADD32(ctx->r10, ctx->r11);
    // 0x80271CA4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80271CA8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80271CAC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80271CB0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80271CB4: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x80271CB8: addiu       $a1, $zero, 0x9F
    ctx->r5 = ADD32(0, 0X9F);
    // 0x80271CBC: jal         0x8002F528
    // 0x80271CC0: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_8002F528(rdram, ctx);
        goto after_1;
    // 0x80271CC0: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_1:
    // 0x80271CC4: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80271CC8: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x80271CCC: addiu       $v1, $v1, 0x4F90
    ctx->r3 = ADD32(ctx->r3, 0X4F90);
    // 0x80271CD0: addiu       $v0, $v0, 0x4930
    ctx->r2 = ADD32(ctx->r2, 0X4930);
L_80271CD4:
    // 0x80271CD4: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80271CD8: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80271CDC: bne         $at, $zero, L_80271CD4
    if (ctx->r1 != 0) {
        // 0x80271CE0: sb          $zero, 0x7ECC($v0)
        MEM_B(0X7ECC, ctx->r2) = 0;
            goto L_80271CD4;
    }
    // 0x80271CE0: sb          $zero, 0x7ECC($v0)
    MEM_B(0X7ECC, ctx->r2) = 0;
    // 0x80271CE4: lh          $v0, 0x98($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X98);
    // 0x80271CE8: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80271CEC: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80271CF0: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x80271CF4: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x80271CF8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80271CFC: lb          $a2, 0x4A90($a2)
    ctx->r6 = MEM_B(ctx->r6, 0X4A90);
    // 0x80271D00: lw          $a1, 0x4970($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4970);
    // 0x80271D04: jal         0x8002F444
    // 0x80271D08: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8002F444(rdram, ctx);
        goto after_2;
    // 0x80271D08: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x80271D0C: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x80271D10: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x80271D14: sh          $zero, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = 0;
    // 0x80271D18: lb          $t9, 0xC($v1)
    ctx->r25 = MEM_B(ctx->r3, 0XC);
    // 0x80271D1C: lhu         $t3, 0x98($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X98);
    // 0x80271D20: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x80271D24: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x80271D28: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80271D2C: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x80271D30: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80271D34: subu        $t2, $t2, $t9
    ctx->r10 = SUB32(ctx->r10, ctx->r25);
    // 0x80271D38: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80271D3C: addu        $s2, $v1, $t2
    ctx->r18 = ADD32(ctx->r3, ctx->r10);
    // 0x80271D40: sltiu       $at, $t3, 0x5
    ctx->r1 = ctx->r11 < 0X5 ? 1 : 0;
    // 0x80271D44: beq         $at, $zero, L_802726F8
    if (ctx->r1 == 0) {
        // 0x80271D48: addiu       $s2, $s2, 0x4AC
        ctx->r18 = ADD32(ctx->r18, 0X4AC);
            goto L_802726F8;
    }
    // 0x80271D48: addiu       $s2, $s2, 0x4AC
    ctx->r18 = ADD32(ctx->r18, 0X4AC);
    // 0x80271D4C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80271D50: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80271D54: addu        $at, $at, $t3
    gpr jr_addend_80271D60 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80271D58: lw          $t3, 0x4E3C($at)
    ctx->r11 = ADD32(ctx->r1, 0X4E3C);
    // 0x80271D5C: nop

    // 0x80271D60: jr          $t3
    // 0x80271D64: nop

    switch (jr_addend_80271D60 >> 2) {
        case 0: goto L_80271D68; break;
        case 1: goto L_80271DF4; break;
        case 2: goto L_80272040; break;
        case 3: goto L_802723B0; break;
        case 4: goto L_80272600; break;
        default: switch_error(__func__, 0x80271D60, 0x80274E3C);
    }
    // 0x80271D64: nop

L_80271D68:
    // 0x80271D68: lbu         $a0, 0x134($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X134);
    // 0x80271D6C: jal         0x80272818
    // 0x80271D70: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_3;
    // 0x80271D70: nop

    after_3:
    // 0x80271D74: lbu         $a0, 0x135($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X135);
    // 0x80271D78: jal         0x80272818
    // 0x80271D7C: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_4;
    // 0x80271D7C: nop

    after_4:
    // 0x80271D80: lbu         $a0, 0x136($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X136);
    // 0x80271D84: jal         0x80272818
    // 0x80271D88: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_5;
    // 0x80271D88: nop

    after_5:
    // 0x80271D8C: lbu         $t4, 0x134($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X134);
    // 0x80271D90: lbu         $t6, 0x136($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X136);
    // 0x80271D94: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80271D98: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80271D9C: jal         0x80272818
    // 0x80271DA0: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_6;
    // 0x80271DA0: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    after_6:
    // 0x80271DA4: lhu         $a0, 0x138($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X138);
    // 0x80271DA8: jal         0x80272818
    // 0x80271DAC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_7;
    // 0x80271DAC: nop

    after_7:
    // 0x80271DB0: lhu         $a0, 0x13A($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X13A);
    // 0x80271DB4: jal         0x80272818
    // 0x80271DB8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_8;
    // 0x80271DB8: nop

    after_8:
    // 0x80271DBC: lh          $t7, 0x138($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X138);
    // 0x80271DC0: lhu         $t8, 0x13A($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X13A);
    // 0x80271DC4: jal         0x80272818
    // 0x80271DC8: subu        $a0, $t7, $t8
    ctx->r4 = SUB32(ctx->r15, ctx->r24);
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_9;
    // 0x80271DC8: subu        $a0, $t7, $t8
    ctx->r4 = SUB32(ctx->r15, ctx->r24);
    after_9:
    // 0x80271DCC: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x80271DD0: nop

    // 0x80271DD4: lbu         $a0, 0x2C($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2C);
    // 0x80271DD8: jal         0x80272818
    // 0x80271DDC: addiu       $s0, $s0, 0x2C
    ctx->r16 = ADD32(ctx->r16, 0X2C);
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_10;
    // 0x80271DDC: addiu       $s0, $s0, 0x2C
    ctx->r16 = ADD32(ctx->r16, 0X2C);
    after_10:
    // 0x80271DE0: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x80271DE4: jal         0x80272818
    // 0x80271DE8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_11;
    // 0x80271DE8: nop

    after_11:
    // 0x80271DEC: b           L_802726FC
    // 0x80271DF0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x80271DF0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80271DF4:
    // 0x80271DF4: addiu       $s0, $v1, 0x2C
    ctx->r16 = ADD32(ctx->r3, 0X2C);
    // 0x80271DF8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80271DFC: jal         0x80272818
    // 0x80271E00: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_12;
    // 0x80271E00: nop

    after_12:
    // 0x80271E04: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80271E08: jal         0x80272818
    // 0x80271E0C: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_13;
    // 0x80271E0C: nop

    after_13:
    // 0x80271E10: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x80271E14: jal         0x80272818
    // 0x80271E18: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_14;
    // 0x80271E18: nop

    after_14:
    // 0x80271E1C: lhu         $a0, 0xA($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XA);
    // 0x80271E20: jal         0x80272818
    // 0x80271E24: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_15;
    // 0x80271E24: nop

    after_15:
    // 0x80271E28: lbu         $a0, 0x6($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X6);
    // 0x80271E2C: jal         0x80272818
    // 0x80271E30: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_16;
    // 0x80271E30: nop

    after_16:
    // 0x80271E34: lbu         $a0, 0x12($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X12);
    // 0x80271E38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80271E3C: jal         0x8001D4C0
    // 0x80271E40: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    func_8001D4C0(rdram, ctx);
        goto after_17;
    // 0x80271E40: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    after_17:
    // 0x80271E44: jal         0x80272818
    // 0x80271E48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_18;
    // 0x80271E48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_18:
    // 0x80271E4C: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80271E50: jal         0x80272818
    // 0x80271E54: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_19;
    // 0x80271E54: nop

    after_19:
    // 0x80271E58: lhu         $t9, 0x138($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X138);
    // 0x80271E5C: lbu         $t2, 0x13($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X13);
    // 0x80271E60: nop

    // 0x80271E64: subu        $v0, $t9, $t2
    ctx->r2 = SUB32(ctx->r25, ctx->r10);
    // 0x80271E68: bgtz        $v0, L_80271E80
    if (SIGNED(ctx->r2) > 0) {
        // 0x80271E6C: nop
    
            goto L_80271E80;
    }
    // 0x80271E6C: nop

    // 0x80271E70: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x80271E74: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80271E78: b           L_80271F08
    // 0x80271E7C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80271F08;
    // 0x80271E7C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80271E80:
    // 0x80271E80: lhu         $t3, 0x14($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X14);
    // 0x80271E84: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80271E88: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80271E8C: bgez        $t3, L_80271EA8
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80271E90: cvt.d.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
            goto L_80271EA8;
    }
    // 0x80271E90: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x80271E94: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80271E98: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80271E9C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80271EA0: nop

    // 0x80271EA4: add.d       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = ctx->f0.d + ctx->f6.d;
L_80271EA8:
    // 0x80271EA8: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x80271EAC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80271EB0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80271EB4: div.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = DIV_D(ctx->f0.d, ctx->f12.d);
    // 0x80271EB8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80271EBC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80271EC0: mul.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f18.d);
    // 0x80271EC4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80271EC8: div.d       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f12.d);
    // 0x80271ECC: nop

    // 0x80271ED0: div.d       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f2.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x80271ED4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80271ED8: nop

    // 0x80271EDC: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80271EE0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80271EE4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80271EE8: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x80271EEC: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80271EF0: mfc1        $s2, $f8
    ctx->r18 = (int32_t)ctx->f8.u32l;
    // 0x80271EF4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80271EF8: div         $zero, $s2, $at
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r1)));
    // 0x80271EFC: mfhi        $s2
    ctx->r18 = hi;
    // 0x80271F00: nop

    // 0x80271F04: nop

L_80271F08:
    // 0x80271F08: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80271F0C: nop

    // 0x80271F10: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80271F14: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80271F18: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80271F1C: nop

    // 0x80271F20: cvt.w.d     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_D(ctx->f2.d);
    // 0x80271F24: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80271F28: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80271F2C: jal         0x80272818
    // 0x80271F30: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_20;
    // 0x80271F30: nop

    after_20:
    // 0x80271F34: jal         0x80272818
    // 0x80271F38: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_21;
    // 0x80271F38: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_21:
    // 0x80271F3C: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x80271F40: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x80271F44: bne         $t7, $zero, L_80271F5C
    if (ctx->r15 != 0) {
        // 0x80271F48: nop
    
            goto L_80271F5C;
    }
    // 0x80271F48: nop

    // 0x80271F4C: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x80271F50: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80271F54: b           L_80272004
    // 0x80271F58: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272004;
    // 0x80271F58: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80271F5C:
    // 0x80271F5C: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x80271F60: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80271F64: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80271F68: bgez        $t8, L_80271F84
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80271F6C: cvt.d.w     $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
            goto L_80271F84;
    }
    // 0x80271F6C: cvt.d.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
    // 0x80271F70: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80271F74: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80271F78: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80271F7C: nop

    // 0x80271F80: add.d       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = ctx->f12.d + ctx->f18.d;
L_80271F84:
    // 0x80271F84: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80271F88: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80271F8C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80271F90: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80271F94: mul.d       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f12.d, ctx->f6.d);
    // 0x80271F98: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x80271F9C: nop

    // 0x80271FA0: div.d       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f12.d, ctx->f0.d);
    // 0x80271FA4: nop

    // 0x80271FA8: div.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x80271FAC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80271FB0: nop

    // 0x80271FB4: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80271FB8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80271FBC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80271FC0: nop

    // 0x80271FC4: cvt.w.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_D(ctx->f10.d);
    // 0x80271FC8: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x80271FCC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80271FD0: div         $zero, $t3, $s1
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r17)));
    // 0x80271FD4: bne         $s1, $zero, L_80271FE0
    if (ctx->r17 != 0) {
        // 0x80271FD8: nop
    
            goto L_80271FE0;
    }
    // 0x80271FD8: nop

    // 0x80271FDC: break       7
    do_break(2150047708);
L_80271FE0:
    // 0x80271FE0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80271FE4: bne         $s1, $at, L_80271FF8
    if (ctx->r17 != ctx->r1) {
        // 0x80271FE8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80271FF8;
    }
    // 0x80271FE8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80271FEC: bne         $t3, $at, L_80271FF8
    if (ctx->r11 != ctx->r1) {
        // 0x80271FF0: nop
    
            goto L_80271FF8;
    }
    // 0x80271FF0: nop

    // 0x80271FF4: break       6
    do_break(2150047732);
L_80271FF8:
    // 0x80271FF8: mfhi        $s2
    ctx->r18 = hi;
    // 0x80271FFC: nop

    // 0x80272000: nop

L_80272004:
    // 0x80272004: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80272008: nop

    // 0x8027200C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80272010: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272014: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272018: nop

    // 0x8027201C: cvt.w.d     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_D(ctx->f2.d);
    // 0x80272020: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80272024: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80272028: jal         0x80272818
    // 0x8027202C: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_22;
    // 0x8027202C: nop

    after_22:
    // 0x80272030: jal         0x80272818
    // 0x80272034: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_23;
    // 0x80272034: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_23:
    // 0x80272038: b           L_802726FC
    // 0x8027203C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x8027203C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80272040:
    // 0x80272040: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x80272044: nop

    // 0x80272048: beq         $t5, $zero, L_802726FC
    if (ctx->r13 == 0) {
        // 0x8027204C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802726FC;
    }
    // 0x8027204C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80272050: lhu         $t6, 0x138($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X138);
    // 0x80272054: nop

    // 0x80272058: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8027205C: bgez        $t6, L_80272078
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80272060: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_80272078;
    }
    // 0x80272060: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x80272064: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272068: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8027206C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272070: nop

    // 0x80272074: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_80272078:
    // 0x80272078: jal         0x8027287C
    // 0x8027207C: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_24;
    // 0x8027207C: nop

    after_24:
    // 0x80272080: lhu         $t7, 0x13A($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X13A);
    // 0x80272084: nop

    // 0x80272088: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8027208C: bgez        $t7, L_802720A8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80272090: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_802720A8;
    }
    // 0x80272090: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x80272094: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272098: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8027209C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802720A0: nop

    // 0x802720A4: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_802720A8:
    // 0x802720A8: jal         0x8027287C
    // 0x802720AC: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_25;
    // 0x802720AC: nop

    after_25:
    // 0x802720B0: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x802720B4: nop

    // 0x802720B8: lhu         $t8, 0x3C($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X3C);
    // 0x802720BC: addiu       $s0, $s0, 0x2C
    ctx->r16 = ADD32(ctx->r16, 0X2C);
    // 0x802720C0: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x802720C4: bgez        $t8, L_802720E0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802720C8: cvt.d.w     $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
            goto L_802720E0;
    }
    // 0x802720C8: cvt.d.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
    // 0x802720CC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802720D0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802720D4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802720D8: nop

    // 0x802720DC: add.d       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = ctx->f12.d + ctx->f18.d;
L_802720E0:
    // 0x802720E0: jal         0x8027287C
    // 0x802720E4: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_26;
    // 0x802720E4: nop

    after_26:
    // 0x802720E8: lbu         $t9, 0x2($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2);
    // 0x802720EC: nop

    // 0x802720F0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x802720F4: bgez        $t9, L_80272110
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802720F8: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_80272110;
    }
    // 0x802720F8: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x802720FC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272100: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80272104: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272108: nop

    // 0x8027210C: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_80272110:
    // 0x80272110: jal         0x8027287C
    // 0x80272114: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_27;
    // 0x80272114: nop

    after_27:
    // 0x80272118: lbu         $t2, 0x3($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3);
    // 0x8027211C: nop

    // 0x80272120: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80272124: bgez        $t2, L_80272140
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80272128: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_80272140;
    }
    // 0x80272128: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x8027212C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272130: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80272134: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80272138: nop

    // 0x8027213C: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_80272140:
    // 0x80272140: jal         0x8027287C
    // 0x80272144: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_28;
    // 0x80272144: nop

    after_28:
    // 0x80272148: lhu         $t3, 0x8($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X8);
    // 0x8027214C: nop

    // 0x80272150: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80272154: bgez        $t3, L_80272170
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80272158: cvt.d.w     $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
            goto L_80272170;
    }
    // 0x80272158: cvt.d.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
    // 0x8027215C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272160: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80272164: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80272168: nop

    // 0x8027216C: add.d       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = ctx->f12.d + ctx->f18.d;
L_80272170:
    // 0x80272170: jal         0x8027287C
    // 0x80272174: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_29;
    // 0x80272174: nop

    after_29:
    // 0x80272178: lhu         $t4, 0xA($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XA);
    // 0x8027217C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272180: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80272184: bgez        $t4, L_8027219C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80272188: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_8027219C;
    }
    // 0x80272188: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x8027218C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80272190: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272194: nop

    // 0x80272198: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_8027219C:
    // 0x8027219C: jal         0x8027287C
    // 0x802721A0: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_30;
    // 0x802721A0: nop

    after_30:
    // 0x802721A4: lbu         $t5, 0x6($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X6);
    // 0x802721A8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802721AC: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x802721B0: bgez        $t5, L_802721C8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x802721B4: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_802721C8;
    }
    // 0x802721B4: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x802721B8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802721BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802721C0: nop

    // 0x802721C4: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_802721C8:
    // 0x802721C8: jal         0x8027287C
    // 0x802721CC: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_31;
    // 0x802721CC: nop

    after_31:
    // 0x802721D0: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
    // 0x802721D4: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x802721D8: bne         $t6, $zero, L_802721F0
    if (ctx->r14 != 0) {
        // 0x802721DC: lui         $at, 0x4059
        ctx->r1 = S32(0X4059 << 16);
            goto L_802721F0;
    }
    // 0x802721DC: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802721E0: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x802721E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802721E8: b           L_80272288
    // 0x802721EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272288;
    // 0x802721EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802721F0:
    // 0x802721F0: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x802721F4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802721F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802721FC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80272200: cvt.d.s     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.d = CVT_D_S(ctx->f16.fl);
    // 0x80272204: mul.d       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f12.d, ctx->f4.d);
    // 0x80272208: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8027220C: lwc1        $f9, 0x4E50($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4E50);
    // 0x80272210: lwc1        $f8, 0x4E54($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4E54);
    // 0x80272214: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80272218: mul.d       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f12.d, ctx->f8.d);
    // 0x8027221C: cvt.d.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.d = CVT_D_W(ctx->f18.u32l);
    // 0x80272220: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272224: div.d       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x80272228: nop

    // 0x8027222C: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x80272230: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80272234: nop

    // 0x80272238: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8027223C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272240: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272244: nop

    // 0x80272248: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x8027224C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80272250: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80272254: div         $zero, $t9, $s1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r17)));
    // 0x80272258: bne         $s1, $zero, L_80272264
    if (ctx->r17 != 0) {
        // 0x8027225C: nop
    
            goto L_80272264;
    }
    // 0x8027225C: nop

    // 0x80272260: break       7
    do_break(2150048352);
L_80272264:
    // 0x80272264: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272268: bne         $s1, $at, L_8027227C
    if (ctx->r17 != ctx->r1) {
        // 0x8027226C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027227C;
    }
    // 0x8027226C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272270: bne         $t9, $at, L_8027227C
    if (ctx->r25 != ctx->r1) {
        // 0x80272274: nop
    
            goto L_8027227C;
    }
    // 0x80272274: nop

    // 0x80272278: break       6
    do_break(2150048376);
L_8027227C:
    // 0x8027227C: mfhi        $s2
    ctx->r18 = hi;
    // 0x80272280: nop

    // 0x80272284: nop

L_80272288:
    // 0x80272288: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8027228C: nop

    // 0x80272290: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80272294: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272298: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027229C: nop

    // 0x802722A0: cvt.w.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = CVT_W_D(ctx->f2.d);
    // 0x802722A4: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x802722A8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802722AC: jal         0x80272818
    // 0x802722B0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_32;
    // 0x802722B0: nop

    after_32:
    // 0x802722B4: jal         0x80272818
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_33;
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_33:
    // 0x802722BC: lhu         $t3, 0xC($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XC);
    // 0x802722C0: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802722C4: bne         $t3, $zero, L_802722DC
    if (ctx->r11 != 0) {
        // 0x802722C8: nop
    
            goto L_802722DC;
    }
    // 0x802722C8: nop

    // 0x802722CC: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x802722D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802722D4: b           L_80272374
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272374;
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802722DC:
    // 0x802722DC: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802722E0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802722E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802722E8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802722EC: cvt.d.s     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f12.d = CVT_D_S(ctx->f6.fl);
    // 0x802722F0: mul.d       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f12.d, ctx->f10.d);
    // 0x802722F4: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x802722F8: lwc1        $f19, 0x4E58($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4E58);
    // 0x802722FC: lwc1        $f18, 0x4E5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4E5C);
    // 0x80272300: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80272304: mul.d       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f12.d, ctx->f18.d);
    // 0x80272308: cvt.d.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.d = CVT_D_W(ctx->f8.u32l);
    // 0x8027230C: nop

    // 0x80272310: div.d       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80272314: nop

    // 0x80272318: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x8027231C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80272320: nop

    // 0x80272324: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80272328: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8027232C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272330: nop

    // 0x80272334: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80272338: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8027233C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80272340: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272344: bne         $s1, $zero, L_80272350
    if (ctx->r17 != 0) {
        // 0x80272348: nop
    
            goto L_80272350;
    }
    // 0x80272348: nop

    // 0x8027234C: break       7
    do_break(2150048588);
L_80272350:
    // 0x80272350: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272354: bne         $s1, $at, L_80272368
    if (ctx->r17 != ctx->r1) {
        // 0x80272358: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272368;
    }
    // 0x80272358: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8027235C: bne         $t6, $at, L_80272368
    if (ctx->r14 != ctx->r1) {
        // 0x80272360: nop
    
            goto L_80272368;
    }
    // 0x80272360: nop

    // 0x80272364: break       6
    do_break(2150048612);
L_80272368:
    // 0x80272368: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027236C: nop

    // 0x80272370: nop

L_80272374:
    // 0x80272374: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80272378: nop

    // 0x8027237C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80272380: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272384: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272388: nop

    // 0x8027238C: cvt.w.d     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_D(ctx->f2.d);
    // 0x80272390: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80272394: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80272398: jal         0x80272818
    // 0x8027239C: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_34;
    // 0x8027239C: nop

    after_34:
    // 0x802723A0: jal         0x80272818
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_35;
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_35:
    // 0x802723A8: b           L_802726FC
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802723B0:
    // 0x802723B0: addiu       $s0, $v1, 0x2C
    ctx->r16 = ADD32(ctx->r3, 0X2C);
    // 0x802723B4: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x802723B8: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x802723BC: slti        $at, $v0, 0x58D
    ctx->r1 = SIGNED(ctx->r2) < 0X58D ? 1 : 0;
    // 0x802723C0: bne         $at, $zero, L_80272438
    if (ctx->r1 != 0) {
        // 0x802723C4: nop
    
            goto L_80272438;
    }
    // 0x802723C4: nop

    // 0x802723C8: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802723CC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802723D0: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802723D4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x802723D8: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x802723DC: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x802723E0: addiu       $t2, $t2, -0x3770
    ctx->r10 = ADD32(ctx->r10, -0X3770);
    // 0x802723E4: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802723E8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x802723EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802723F0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802723F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802723F8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x802723FC: sh          $t7, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r15;
    // 0x80272400: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80272404: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80272408: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8027240C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80272410: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272414: addu        $a0, $t9, $t2
    ctx->r4 = ADD32(ctx->r25, ctx->r10);
    // 0x80272418: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x8027241C: jal         0x8002F528
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    func_8002F528(rdram, ctx);
        goto after_36;
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    after_36:
    // 0x80272424: lh          $t8, 0x9E($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X9E);
    // 0x80272428: nop

    // 0x8027242C: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x80272430: b           L_802724A4
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
        goto L_802724A4;
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
L_80272438:
    // 0x80272438: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8027243C: bne         $v1, $zero, L_80272448
    if (ctx->r3 != 0) {
        // 0x80272440: nop
    
            goto L_80272448;
    }
    // 0x80272440: nop

    // 0x80272444: break       7
    do_break(2150048836);
L_80272448:
    // 0x80272448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027244C: bne         $v1, $at, L_80272460
    if (ctx->r3 != ctx->r1) {
        // 0x80272450: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272460;
    }
    // 0x80272450: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272454: bne         $v0, $at, L_80272460
    if (ctx->r2 != ctx->r1) {
        // 0x80272458: nop
    
            goto L_80272460;
    }
    // 0x80272458: nop

    // 0x8027245C: break       6
    do_break(2150048860);
L_80272460:
    // 0x80272460: mflo        $t2
    ctx->r10 = lo;
    // 0x80272464: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80272468: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027246C: cvt.d.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.d = CVT_D_W(ctx->f16.u32l);
    // 0x80272470: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80272474: nop

    // 0x80272478: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8027247C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272480: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272484: nop

    // 0x80272488: cvt.w.d     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_D(ctx->f2.d);
    // 0x8027248C: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80272490: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80272494: jal         0x80272818
    // 0x80272498: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_37;
    // 0x80272498: nop

    after_37:
    // 0x8027249C: jal         0x80272818
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_38;
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_38:
L_802724A4:
    // 0x802724A4: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
    // 0x802724A8: nop

    // 0x802724AC: bne         $v0, $zero, L_80272524
    if (ctx->r2 != 0) {
        // 0x802724B0: nop
    
            goto L_80272524;
    }
    // 0x802724B0: nop

    // 0x802724B4: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802724B8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802724BC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802724C0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x802724C4: sll         $t4, $v0, 5
    ctx->r12 = S32(ctx->r2 << 5);
    // 0x802724C8: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x802724CC: addiu       $t6, $t6, -0x3770
    ctx->r14 = ADD32(ctx->r14, -0X3770);
    // 0x802724D0: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802724D4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802724D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802724DC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802724E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802724E4: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x802724E8: sh          $t3, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r11;
    // 0x802724EC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802724F0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802724F4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802724F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802724FC: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272500: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x80272504: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x80272508: jal         0x8002F528
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    func_8002F528(rdram, ctx);
        goto after_39;
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    after_39:
    // 0x80272510: lh          $t4, 0x9E($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X9E);
    // 0x80272514: nop

    // 0x80272518: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x8027251C: b           L_80272598
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
        goto L_80272598;
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
L_80272524:
    // 0x80272524: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272528: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x8027252C: bne         $s1, $zero, L_80272538
    if (ctx->r17 != 0) {
        // 0x80272530: nop
    
            goto L_80272538;
    }
    // 0x80272530: nop

    // 0x80272534: break       7
    do_break(2150049076);
L_80272538:
    // 0x80272538: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027253C: bne         $s1, $at, L_80272550
    if (ctx->r17 != ctx->r1) {
        // 0x80272540: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272550;
    }
    // 0x80272540: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272544: bne         $v0, $at, L_80272550
    if (ctx->r2 != ctx->r1) {
        // 0x80272548: nop
    
            goto L_80272550;
    }
    // 0x80272548: nop

    // 0x8027254C: break       6
    do_break(2150049100);
L_80272550:
    // 0x80272550: mflo        $a0
    ctx->r4 = lo;
    // 0x80272554: jal         0x80272818
    // 0x80272558: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_40;
    // 0x80272558: nop

    after_40:
    // 0x8027255C: lhu         $t6, 0x22($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X22);
    // 0x80272560: nop

    // 0x80272564: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272568: bne         $s1, $zero, L_80272574
    if (ctx->r17 != 0) {
        // 0x8027256C: nop
    
            goto L_80272574;
    }
    // 0x8027256C: nop

    // 0x80272570: break       7
    do_break(2150049136);
L_80272574:
    // 0x80272574: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272578: bne         $s1, $at, L_8027258C
    if (ctx->r17 != ctx->r1) {
        // 0x8027257C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027258C;
    }
    // 0x8027257C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272580: bne         $t6, $at, L_8027258C
    if (ctx->r14 != ctx->r1) {
        // 0x80272584: nop
    
            goto L_8027258C;
    }
    // 0x80272584: nop

    // 0x80272588: break       6
    do_break(2150049160);
L_8027258C:
    // 0x8027258C: mfhi        $a0
    ctx->r4 = hi;
    // 0x80272590: jal         0x80272818
    // 0x80272594: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_41;
    // 0x80272594: nop

    after_41:
L_80272598:
    // 0x80272598: lbu         $a0, 0x25($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X25);
    // 0x8027259C: jal         0x80272818
    // 0x802725A0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_42;
    // 0x802725A0: nop

    after_42:
    // 0x802725A4: lbu         $a0, 0x27($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X27);
    // 0x802725A8: jal         0x80272818
    // 0x802725AC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_43;
    // 0x802725AC: nop

    after_43:
    // 0x802725B0: lbu         $a0, 0x2B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2B);
    // 0x802725B4: jal         0x80272818
    // 0x802725B8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_44;
    // 0x802725B8: nop

    after_44:
    // 0x802725BC: lbu         $a0, 0x2C($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2C);
    // 0x802725C0: jal         0x80272818
    // 0x802725C4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_45;
    // 0x802725C4: nop

    after_45:
    // 0x802725C8: lbu         $a0, 0x2D($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2D);
    // 0x802725CC: jal         0x80272818
    // 0x802725D0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_46;
    // 0x802725D0: nop

    after_46:
    // 0x802725D4: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x802725D8: jal         0x80272818
    // 0x802725DC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_47;
    // 0x802725DC: nop

    after_47:
    // 0x802725E0: lbu         $a0, 0x4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4);
    // 0x802725E4: jal         0x80272818
    // 0x802725E8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_48;
    // 0x802725E8: nop

    after_48:
    // 0x802725EC: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x802725F0: jal         0x80272818
    // 0x802725F4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_49;
    // 0x802725F4: nop

    after_49:
    // 0x802725F8: b           L_802726FC
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80272600:
    // 0x80272600: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x80272604: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272608: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8027260C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80272610: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80272614: addiu       $a2, $a2, 0x4CB4
    ctx->r6 = ADD32(ctx->r6, 0X4CB4);
    // 0x80272618: jal         0x8004CFD8
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004CFD8(rdram, ctx);
        goto after_50;
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_50:
    // 0x80272620: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x80272624: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272628: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x8027262C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80272630: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80272634: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80272638: addiu       $a2, $a2, 0x4CF4
    ctx->r6 = ADD32(ctx->r6, 0X4CF4);
    // 0x8027263C: jal         0x8004D384
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D384(rdram, ctx);
        goto after_51;
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_51:
    // 0x80272644: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80272648: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x8027264C: addiu       $t0, $t0, 0x4CB4
    ctx->r8 = ADD32(ctx->r8, 0X4CB4);
    // 0x80272650: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80272654: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_80272658:
    // 0x80272658: lh          $t9, 0x9C($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X9C);
    // 0x8027265C: lb          $t8, 0x44($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X44);
    // 0x80272660: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80272664: sll         $t2, $t9, 5
    ctx->r10 = S32(ctx->r25 << 5);
    // 0x80272668: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8027266C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x80272670: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80272674: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80272678: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8027267C: addu        $t2, $s0, $t9
    ctx->r10 = ADD32(ctx->r16, ctx->r25);
    // 0x80272680: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80272684: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x80272688: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x8027268C: lbu         $t4, 0x1E($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1E);
    // 0x80272690: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    // 0x80272694: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80272698: addiu       $a1, $a1, 0x36
    ctx->r5 = ADD32(ctx->r5, 0X36);
    // 0x8027269C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802726A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802726A4: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x802726A8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802726AC: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x802726B0: lhu         $a3, 0x2($t6)
    ctx->r7 = MEM_HU(ctx->r14, 0X2);
    // 0x802726B4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802726B8: lh          $a2, 0x2($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X2);
    // 0x802726BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802726C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802726C4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802726C8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x802726CC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x802726D0: jal         0x8002F6EC
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_8002F6EC(rdram, ctx);
        goto after_52;
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_52:
    // 0x802726D8: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x802726DC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x802726E0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x802726E4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802726E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802726EC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x802726F0: bne         $v1, $at, L_80272658
    if (ctx->r3 != ctx->r1) {
        // 0x802726F4: addiu       $t1, $t1, 0x20
        ctx->r9 = ADD32(ctx->r9, 0X20);
            goto L_80272658;
    }
    // 0x802726F4: addiu       $t1, $t1, 0x20
    ctx->r9 = ADD32(ctx->r9, 0X20);
L_802726F8:
    // 0x802726F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802726FC:
    // 0x802726FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80272700: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80272704: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80272708: jr          $ra
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_8026F480_func_80271F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271F6C: cvt.d.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
    // 0x80271F70: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80271F74: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80271F78: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80271F7C: nop

    // 0x80271F80: add.d       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = ctx->f12.d + ctx->f18.d;
    // 0x80271F84: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80271F88: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80271F8C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80271F90: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80271F94: mul.d       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f12.d, ctx->f6.d);
    // 0x80271F98: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x80271F9C: nop

    // 0x80271FA0: div.d       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f12.d, ctx->f0.d);
    // 0x80271FA4: nop

    // 0x80271FA8: div.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x80271FAC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80271FB0: nop

    // 0x80271FB4: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80271FB8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80271FBC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80271FC0: nop

    // 0x80271FC4: cvt.w.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_D(ctx->f10.d);
    // 0x80271FC8: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x80271FCC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80271FD0: div         $zero, $t3, $s1
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r17)));
    // 0x80271FD4: bne         $s1, $zero, L_80271FE0
    if (ctx->r17 != 0) {
        // 0x80271FD8: nop
    
            goto L_80271FE0;
    }
    // 0x80271FD8: nop

    // 0x80271FDC: break       7
    do_break(2150047708);
L_80271FE0:
    // 0x80271FE0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80271FE4: bne         $s1, $at, L_80271FF8
    if (ctx->r17 != ctx->r1) {
        // 0x80271FE8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80271FF8;
    }
    // 0x80271FE8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80271FEC: bne         $t3, $at, L_80271FF8
    if (ctx->r11 != ctx->r1) {
        // 0x80271FF0: nop
    
            goto L_80271FF8;
    }
    // 0x80271FF0: nop

    // 0x80271FF4: break       6
    do_break(2150047732);
L_80271FF8:
    // 0x80271FF8: mfhi        $s2
    ctx->r18 = hi;
    // 0x80271FFC: nop

    // 0x80272000: nop

    // 0x80272004: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80272008: nop

    // 0x8027200C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80272010: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272014: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272018: nop

    // 0x8027201C: cvt.w.d     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_D(ctx->f2.d);
    // 0x80272020: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80272024: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80272028: jal         0x80272818
    // 0x8027202C: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_0;
    // 0x8027202C: nop

    after_0:
    // 0x80272030: jal         0x80272818
    // 0x80272034: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_1;
    // 0x80272034: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x80272038: b           L_802726FC
    // 0x8027203C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x8027203C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80272040: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x80272044: nop

    // 0x80272048: beq         $t5, $zero, L_802726FC
    if (ctx->r13 == 0) {
        // 0x8027204C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802726FC;
    }
    // 0x8027204C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80272050: lhu         $t6, 0x138($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X138);
    // 0x80272054: nop

    // 0x80272058: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8027205C: bgez        $t6, L_80272078
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80272060: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_80272078;
    }
    // 0x80272060: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x80272064: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272068: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8027206C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272070: nop

    // 0x80272074: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_80272078:
    // 0x80272078: jal         0x8027287C
    // 0x8027207C: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_2;
    // 0x8027207C: nop

    after_2:
    // 0x80272080: lhu         $t7, 0x13A($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X13A);
    // 0x80272084: nop

    // 0x80272088: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8027208C: bgez        $t7, L_802720A8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80272090: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_802720A8;
    }
    // 0x80272090: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x80272094: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272098: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8027209C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802720A0: nop

    // 0x802720A4: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_802720A8:
    // 0x802720A8: jal         0x8027287C
    // 0x802720AC: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_3;
    // 0x802720AC: nop

    after_3:
    // 0x802720B0: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x802720B4: nop

    // 0x802720B8: lhu         $t8, 0x3C($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X3C);
    // 0x802720BC: addiu       $s0, $s0, 0x2C
    ctx->r16 = ADD32(ctx->r16, 0X2C);
    // 0x802720C0: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x802720C4: bgez        $t8, L_802720E0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802720C8: cvt.d.w     $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
            goto L_802720E0;
    }
    // 0x802720C8: cvt.d.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
    // 0x802720CC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802720D0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802720D4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802720D8: nop

    // 0x802720DC: add.d       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = ctx->f12.d + ctx->f18.d;
L_802720E0:
    // 0x802720E0: jal         0x8027287C
    // 0x802720E4: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_4;
    // 0x802720E4: nop

    after_4:
    // 0x802720E8: lbu         $t9, 0x2($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2);
    // 0x802720EC: nop

    // 0x802720F0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x802720F4: bgez        $t9, L_80272110
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802720F8: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_80272110;
    }
    // 0x802720F8: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x802720FC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272100: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80272104: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272108: nop

    // 0x8027210C: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_80272110:
    // 0x80272110: jal         0x8027287C
    // 0x80272114: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_5;
    // 0x80272114: nop

    after_5:
    // 0x80272118: lbu         $t2, 0x3($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3);
    // 0x8027211C: nop

    // 0x80272120: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80272124: bgez        $t2, L_80272140
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80272128: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_80272140;
    }
    // 0x80272128: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x8027212C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272130: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80272134: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80272138: nop

    // 0x8027213C: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_80272140:
    // 0x80272140: jal         0x8027287C
    // 0x80272144: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_6;
    // 0x80272144: nop

    after_6:
    // 0x80272148: lhu         $t3, 0x8($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X8);
    // 0x8027214C: nop

    // 0x80272150: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80272154: bgez        $t3, L_80272170
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80272158: cvt.d.w     $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
            goto L_80272170;
    }
    // 0x80272158: cvt.d.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
    // 0x8027215C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272160: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80272164: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80272168: nop

    // 0x8027216C: add.d       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = ctx->f12.d + ctx->f18.d;
L_80272170:
    // 0x80272170: jal         0x8027287C
    // 0x80272174: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_7;
    // 0x80272174: nop

    after_7:
    // 0x80272178: lhu         $t4, 0xA($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XA);
    // 0x8027217C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272180: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80272184: bgez        $t4, L_8027219C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80272188: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_8027219C;
    }
    // 0x80272188: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x8027218C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80272190: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272194: nop

    // 0x80272198: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_8027219C:
    // 0x8027219C: jal         0x8027287C
    // 0x802721A0: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_8;
    // 0x802721A0: nop

    after_8:
    // 0x802721A4: lbu         $t5, 0x6($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X6);
    // 0x802721A8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802721AC: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x802721B0: bgez        $t5, L_802721C8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x802721B4: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_802721C8;
    }
    // 0x802721B4: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x802721B8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802721BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802721C0: nop

    // 0x802721C4: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_802721C8:
    // 0x802721C8: jal         0x8027287C
    // 0x802721CC: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_9;
    // 0x802721CC: nop

    after_9:
    // 0x802721D0: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
    // 0x802721D4: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x802721D8: bne         $t6, $zero, L_802721F0
    if (ctx->r14 != 0) {
        // 0x802721DC: lui         $at, 0x4059
        ctx->r1 = S32(0X4059 << 16);
            goto L_802721F0;
    }
    // 0x802721DC: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802721E0: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x802721E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802721E8: b           L_80272288
    // 0x802721EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272288;
    // 0x802721EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802721F0:
    // 0x802721F0: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x802721F4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802721F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802721FC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80272200: cvt.d.s     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.d = CVT_D_S(ctx->f16.fl);
    // 0x80272204: mul.d       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f12.d, ctx->f4.d);
    // 0x80272208: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8027220C: lwc1        $f9, 0x4E50($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4E50);
    // 0x80272210: lwc1        $f8, 0x4E54($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4E54);
    // 0x80272214: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80272218: mul.d       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f12.d, ctx->f8.d);
    // 0x8027221C: cvt.d.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.d = CVT_D_W(ctx->f18.u32l);
    // 0x80272220: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272224: div.d       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x80272228: nop

    // 0x8027222C: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x80272230: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80272234: nop

    // 0x80272238: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8027223C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272240: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272244: nop

    // 0x80272248: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x8027224C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80272250: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80272254: div         $zero, $t9, $s1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r17)));
    // 0x80272258: bne         $s1, $zero, L_80272264
    if (ctx->r17 != 0) {
        // 0x8027225C: nop
    
            goto L_80272264;
    }
    // 0x8027225C: nop

    // 0x80272260: break       7
    do_break(2150048352);
L_80272264:
    // 0x80272264: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272268: bne         $s1, $at, L_8027227C
    if (ctx->r17 != ctx->r1) {
        // 0x8027226C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027227C;
    }
    // 0x8027226C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272270: bne         $t9, $at, L_8027227C
    if (ctx->r25 != ctx->r1) {
        // 0x80272274: nop
    
            goto L_8027227C;
    }
    // 0x80272274: nop

    // 0x80272278: break       6
    do_break(2150048376);
L_8027227C:
    // 0x8027227C: mfhi        $s2
    ctx->r18 = hi;
    // 0x80272280: nop

    // 0x80272284: nop

L_80272288:
    // 0x80272288: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8027228C: nop

    // 0x80272290: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80272294: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272298: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027229C: nop

    // 0x802722A0: cvt.w.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = CVT_W_D(ctx->f2.d);
    // 0x802722A4: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x802722A8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802722AC: jal         0x80272818
    // 0x802722B0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_10;
    // 0x802722B0: nop

    after_10:
    // 0x802722B4: jal         0x80272818
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_11;
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_11:
    // 0x802722BC: lhu         $t3, 0xC($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XC);
    // 0x802722C0: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802722C4: bne         $t3, $zero, L_802722DC
    if (ctx->r11 != 0) {
        // 0x802722C8: nop
    
            goto L_802722DC;
    }
    // 0x802722C8: nop

    // 0x802722CC: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x802722D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802722D4: b           L_80272374
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272374;
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802722DC:
    // 0x802722DC: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802722E0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802722E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802722E8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802722EC: cvt.d.s     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f12.d = CVT_D_S(ctx->f6.fl);
    // 0x802722F0: mul.d       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f12.d, ctx->f10.d);
    // 0x802722F4: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x802722F8: lwc1        $f19, 0x4E58($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4E58);
    // 0x802722FC: lwc1        $f18, 0x4E5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4E5C);
    // 0x80272300: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80272304: mul.d       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f12.d, ctx->f18.d);
    // 0x80272308: cvt.d.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.d = CVT_D_W(ctx->f8.u32l);
    // 0x8027230C: nop

    // 0x80272310: div.d       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80272314: nop

    // 0x80272318: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x8027231C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80272320: nop

    // 0x80272324: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80272328: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8027232C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272330: nop

    // 0x80272334: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80272338: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8027233C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80272340: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272344: bne         $s1, $zero, L_80272350
    if (ctx->r17 != 0) {
        // 0x80272348: nop
    
            goto L_80272350;
    }
    // 0x80272348: nop

    // 0x8027234C: break       7
    do_break(2150048588);
L_80272350:
    // 0x80272350: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272354: bne         $s1, $at, L_80272368
    if (ctx->r17 != ctx->r1) {
        // 0x80272358: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272368;
    }
    // 0x80272358: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8027235C: bne         $t6, $at, L_80272368
    if (ctx->r14 != ctx->r1) {
        // 0x80272360: nop
    
            goto L_80272368;
    }
    // 0x80272360: nop

    // 0x80272364: break       6
    do_break(2150048612);
L_80272368:
    // 0x80272368: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027236C: nop

    // 0x80272370: nop

L_80272374:
    // 0x80272374: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80272378: nop

    // 0x8027237C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80272380: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272384: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272388: nop

    // 0x8027238C: cvt.w.d     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_D(ctx->f2.d);
    // 0x80272390: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80272394: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80272398: jal         0x80272818
    // 0x8027239C: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_12;
    // 0x8027239C: nop

    after_12:
    // 0x802723A0: jal         0x80272818
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_13;
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_13:
    // 0x802723A8: b           L_802726FC
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802723B0: addiu       $s0, $v1, 0x2C
    ctx->r16 = ADD32(ctx->r3, 0X2C);
    // 0x802723B4: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x802723B8: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x802723BC: slti        $at, $v0, 0x58D
    ctx->r1 = SIGNED(ctx->r2) < 0X58D ? 1 : 0;
    // 0x802723C0: bne         $at, $zero, L_80272438
    if (ctx->r1 != 0) {
        // 0x802723C4: nop
    
            goto L_80272438;
    }
    // 0x802723C4: nop

    // 0x802723C8: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802723CC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802723D0: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802723D4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x802723D8: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x802723DC: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x802723E0: addiu       $t2, $t2, -0x3770
    ctx->r10 = ADD32(ctx->r10, -0X3770);
    // 0x802723E4: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802723E8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x802723EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802723F0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802723F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802723F8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x802723FC: sh          $t7, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r15;
    // 0x80272400: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80272404: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80272408: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8027240C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80272410: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272414: addu        $a0, $t9, $t2
    ctx->r4 = ADD32(ctx->r25, ctx->r10);
    // 0x80272418: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x8027241C: jal         0x8002F528
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    func_8002F528(rdram, ctx);
        goto after_14;
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    after_14:
    // 0x80272424: lh          $t8, 0x9E($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X9E);
    // 0x80272428: nop

    // 0x8027242C: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x80272430: b           L_802724A4
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
        goto L_802724A4;
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
L_80272438:
    // 0x80272438: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8027243C: bne         $v1, $zero, L_80272448
    if (ctx->r3 != 0) {
        // 0x80272440: nop
    
            goto L_80272448;
    }
    // 0x80272440: nop

    // 0x80272444: break       7
    do_break(2150048836);
L_80272448:
    // 0x80272448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027244C: bne         $v1, $at, L_80272460
    if (ctx->r3 != ctx->r1) {
        // 0x80272450: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272460;
    }
    // 0x80272450: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272454: bne         $v0, $at, L_80272460
    if (ctx->r2 != ctx->r1) {
        // 0x80272458: nop
    
            goto L_80272460;
    }
    // 0x80272458: nop

    // 0x8027245C: break       6
    do_break(2150048860);
L_80272460:
    // 0x80272460: mflo        $t2
    ctx->r10 = lo;
    // 0x80272464: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80272468: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027246C: cvt.d.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.d = CVT_D_W(ctx->f16.u32l);
    // 0x80272470: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80272474: nop

    // 0x80272478: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8027247C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272480: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272484: nop

    // 0x80272488: cvt.w.d     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_D(ctx->f2.d);
    // 0x8027248C: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80272490: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80272494: jal         0x80272818
    // 0x80272498: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_15;
    // 0x80272498: nop

    after_15:
    // 0x8027249C: jal         0x80272818
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_16;
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_16:
L_802724A4:
    // 0x802724A4: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
    // 0x802724A8: nop

    // 0x802724AC: bne         $v0, $zero, L_80272524
    if (ctx->r2 != 0) {
        // 0x802724B0: nop
    
            goto L_80272524;
    }
    // 0x802724B0: nop

    // 0x802724B4: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802724B8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802724BC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802724C0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x802724C4: sll         $t4, $v0, 5
    ctx->r12 = S32(ctx->r2 << 5);
    // 0x802724C8: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x802724CC: addiu       $t6, $t6, -0x3770
    ctx->r14 = ADD32(ctx->r14, -0X3770);
    // 0x802724D0: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802724D4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802724D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802724DC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802724E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802724E4: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x802724E8: sh          $t3, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r11;
    // 0x802724EC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802724F0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802724F4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802724F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802724FC: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272500: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x80272504: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x80272508: jal         0x8002F528
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    func_8002F528(rdram, ctx);
        goto after_17;
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    after_17:
    // 0x80272510: lh          $t4, 0x9E($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X9E);
    // 0x80272514: nop

    // 0x80272518: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x8027251C: b           L_80272598
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
        goto L_80272598;
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
L_80272524:
    // 0x80272524: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272528: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x8027252C: bne         $s1, $zero, L_80272538
    if (ctx->r17 != 0) {
        // 0x80272530: nop
    
            goto L_80272538;
    }
    // 0x80272530: nop

    // 0x80272534: break       7
    do_break(2150049076);
L_80272538:
    // 0x80272538: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027253C: bne         $s1, $at, L_80272550
    if (ctx->r17 != ctx->r1) {
        // 0x80272540: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272550;
    }
    // 0x80272540: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272544: bne         $v0, $at, L_80272550
    if (ctx->r2 != ctx->r1) {
        // 0x80272548: nop
    
            goto L_80272550;
    }
    // 0x80272548: nop

    // 0x8027254C: break       6
    do_break(2150049100);
L_80272550:
    // 0x80272550: mflo        $a0
    ctx->r4 = lo;
    // 0x80272554: jal         0x80272818
    // 0x80272558: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_18;
    // 0x80272558: nop

    after_18:
    // 0x8027255C: lhu         $t6, 0x22($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X22);
    // 0x80272560: nop

    // 0x80272564: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272568: bne         $s1, $zero, L_80272574
    if (ctx->r17 != 0) {
        // 0x8027256C: nop
    
            goto L_80272574;
    }
    // 0x8027256C: nop

    // 0x80272570: break       7
    do_break(2150049136);
L_80272574:
    // 0x80272574: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272578: bne         $s1, $at, L_8027258C
    if (ctx->r17 != ctx->r1) {
        // 0x8027257C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027258C;
    }
    // 0x8027257C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272580: bne         $t6, $at, L_8027258C
    if (ctx->r14 != ctx->r1) {
        // 0x80272584: nop
    
            goto L_8027258C;
    }
    // 0x80272584: nop

    // 0x80272588: break       6
    do_break(2150049160);
L_8027258C:
    // 0x8027258C: mfhi        $a0
    ctx->r4 = hi;
    // 0x80272590: jal         0x80272818
    // 0x80272594: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_19;
    // 0x80272594: nop

    after_19:
L_80272598:
    // 0x80272598: lbu         $a0, 0x25($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X25);
    // 0x8027259C: jal         0x80272818
    // 0x802725A0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_20;
    // 0x802725A0: nop

    after_20:
    // 0x802725A4: lbu         $a0, 0x27($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X27);
    // 0x802725A8: jal         0x80272818
    // 0x802725AC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_21;
    // 0x802725AC: nop

    after_21:
    // 0x802725B0: lbu         $a0, 0x2B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2B);
    // 0x802725B4: jal         0x80272818
    // 0x802725B8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_22;
    // 0x802725B8: nop

    after_22:
    // 0x802725BC: lbu         $a0, 0x2C($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2C);
    // 0x802725C0: jal         0x80272818
    // 0x802725C4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_23;
    // 0x802725C4: nop

    after_23:
    // 0x802725C8: lbu         $a0, 0x2D($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2D);
    // 0x802725CC: jal         0x80272818
    // 0x802725D0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_24;
    // 0x802725D0: nop

    after_24:
    // 0x802725D4: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x802725D8: jal         0x80272818
    // 0x802725DC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_25;
    // 0x802725DC: nop

    after_25:
    // 0x802725E0: lbu         $a0, 0x4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4);
    // 0x802725E4: jal         0x80272818
    // 0x802725E8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_26;
    // 0x802725E8: nop

    after_26:
    // 0x802725EC: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x802725F0: jal         0x80272818
    // 0x802725F4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_27;
    // 0x802725F4: nop

    after_27:
    // 0x802725F8: b           L_802726FC
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80272600: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x80272604: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272608: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8027260C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80272610: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80272614: addiu       $a2, $a2, 0x4CB4
    ctx->r6 = ADD32(ctx->r6, 0X4CB4);
    // 0x80272618: jal         0x8004CFD8
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004CFD8(rdram, ctx);
        goto after_28;
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_28:
    // 0x80272620: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x80272624: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272628: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x8027262C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80272630: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80272634: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80272638: addiu       $a2, $a2, 0x4CF4
    ctx->r6 = ADD32(ctx->r6, 0X4CF4);
    // 0x8027263C: jal         0x8004D384
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D384(rdram, ctx);
        goto after_29;
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_29:
    // 0x80272644: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80272648: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x8027264C: addiu       $t0, $t0, 0x4CB4
    ctx->r8 = ADD32(ctx->r8, 0X4CB4);
    // 0x80272650: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80272654: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_80272658:
    // 0x80272658: lh          $t9, 0x9C($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X9C);
    // 0x8027265C: lb          $t8, 0x44($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X44);
    // 0x80272660: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80272664: sll         $t2, $t9, 5
    ctx->r10 = S32(ctx->r25 << 5);
    // 0x80272668: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8027266C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x80272670: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80272674: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80272678: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8027267C: addu        $t2, $s0, $t9
    ctx->r10 = ADD32(ctx->r16, ctx->r25);
    // 0x80272680: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80272684: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x80272688: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x8027268C: lbu         $t4, 0x1E($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1E);
    // 0x80272690: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    // 0x80272694: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80272698: addiu       $a1, $a1, 0x36
    ctx->r5 = ADD32(ctx->r5, 0X36);
    // 0x8027269C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802726A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802726A4: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x802726A8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802726AC: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x802726B0: lhu         $a3, 0x2($t6)
    ctx->r7 = MEM_HU(ctx->r14, 0X2);
    // 0x802726B4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802726B8: lh          $a2, 0x2($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X2);
    // 0x802726BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802726C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802726C4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802726C8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x802726CC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x802726D0: jal         0x8002F6EC
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_8002F6EC(rdram, ctx);
        goto after_30;
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_30:
    // 0x802726D8: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x802726DC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x802726E0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x802726E4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802726E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802726EC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x802726F0: bne         $v1, $at, L_80272658
    if (ctx->r3 != ctx->r1) {
        // 0x802726F4: addiu       $t1, $t1, 0x20
        ctx->r9 = ADD32(ctx->r9, 0X20);
            goto L_80272658;
    }
    // 0x802726F4: addiu       $t1, $t1, 0x20
    ctx->r9 = ADD32(ctx->r9, 0X20);
    // 0x802726F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802726FC:
    // 0x802726FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80272700: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80272704: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80272708: jr          $ra
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_8026F480_func_80271FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271FD4: bne         $s1, $zero, L_80271FE0
    if (ctx->r17 != 0) {
        // 0x80271FD8: nop
    
            goto L_80271FE0;
    }
    // 0x80271FD8: nop

    // 0x80271FDC: break       7
    do_break(2150047708);
L_80271FE0:
    // 0x80271FE0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80271FE4: bne         $s1, $at, L_80271FF8
    if (ctx->r17 != ctx->r1) {
        // 0x80271FE8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80271FF8;
    }
    // 0x80271FE8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80271FEC: bne         $t3, $at, L_80271FF8
    if (ctx->r11 != ctx->r1) {
        // 0x80271FF0: nop
    
            goto L_80271FF8;
    }
    // 0x80271FF0: nop

    // 0x80271FF4: break       6
    do_break(2150047732);
L_80271FF8:
    // 0x80271FF8: mfhi        $s2
    ctx->r18 = hi;
    // 0x80271FFC: nop

    // 0x80272000: nop

    // 0x80272004: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80272008: nop

    // 0x8027200C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80272010: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272014: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272018: nop

    // 0x8027201C: cvt.w.d     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_D(ctx->f2.d);
    // 0x80272020: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80272024: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80272028: jal         0x80272818
    // 0x8027202C: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_0;
    // 0x8027202C: nop

    after_0:
    // 0x80272030: jal         0x80272818
    // 0x80272034: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_1;
    // 0x80272034: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x80272038: b           L_802726FC
    // 0x8027203C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x8027203C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80272040: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x80272044: nop

    // 0x80272048: beq         $t5, $zero, L_802726FC
    if (ctx->r13 == 0) {
        // 0x8027204C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802726FC;
    }
    // 0x8027204C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80272050: lhu         $t6, 0x138($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X138);
    // 0x80272054: nop

    // 0x80272058: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8027205C: bgez        $t6, L_80272078
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80272060: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_80272078;
    }
    // 0x80272060: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x80272064: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272068: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8027206C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272070: nop

    // 0x80272074: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_80272078:
    // 0x80272078: jal         0x8027287C
    // 0x8027207C: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_2;
    // 0x8027207C: nop

    after_2:
    // 0x80272080: lhu         $t7, 0x13A($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X13A);
    // 0x80272084: nop

    // 0x80272088: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8027208C: bgez        $t7, L_802720A8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80272090: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_802720A8;
    }
    // 0x80272090: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x80272094: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272098: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8027209C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802720A0: nop

    // 0x802720A4: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_802720A8:
    // 0x802720A8: jal         0x8027287C
    // 0x802720AC: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_3;
    // 0x802720AC: nop

    after_3:
    // 0x802720B0: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x802720B4: nop

    // 0x802720B8: lhu         $t8, 0x3C($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X3C);
    // 0x802720BC: addiu       $s0, $s0, 0x2C
    ctx->r16 = ADD32(ctx->r16, 0X2C);
    // 0x802720C0: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x802720C4: bgez        $t8, L_802720E0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802720C8: cvt.d.w     $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
            goto L_802720E0;
    }
    // 0x802720C8: cvt.d.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
    // 0x802720CC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802720D0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802720D4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802720D8: nop

    // 0x802720DC: add.d       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = ctx->f12.d + ctx->f18.d;
L_802720E0:
    // 0x802720E0: jal         0x8027287C
    // 0x802720E4: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_4;
    // 0x802720E4: nop

    after_4:
    // 0x802720E8: lbu         $t9, 0x2($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2);
    // 0x802720EC: nop

    // 0x802720F0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x802720F4: bgez        $t9, L_80272110
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802720F8: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_80272110;
    }
    // 0x802720F8: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x802720FC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272100: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80272104: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272108: nop

    // 0x8027210C: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_80272110:
    // 0x80272110: jal         0x8027287C
    // 0x80272114: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_5;
    // 0x80272114: nop

    after_5:
    // 0x80272118: lbu         $t2, 0x3($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3);
    // 0x8027211C: nop

    // 0x80272120: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80272124: bgez        $t2, L_80272140
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80272128: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_80272140;
    }
    // 0x80272128: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x8027212C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272130: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80272134: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80272138: nop

    // 0x8027213C: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_80272140:
    // 0x80272140: jal         0x8027287C
    // 0x80272144: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_6;
    // 0x80272144: nop

    after_6:
    // 0x80272148: lhu         $t3, 0x8($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X8);
    // 0x8027214C: nop

    // 0x80272150: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80272154: bgez        $t3, L_80272170
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80272158: cvt.d.w     $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
            goto L_80272170;
    }
    // 0x80272158: cvt.d.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
    // 0x8027215C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272160: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80272164: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80272168: nop

    // 0x8027216C: add.d       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = ctx->f12.d + ctx->f18.d;
L_80272170:
    // 0x80272170: jal         0x8027287C
    // 0x80272174: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_7;
    // 0x80272174: nop

    after_7:
    // 0x80272178: lhu         $t4, 0xA($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XA);
    // 0x8027217C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272180: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80272184: bgez        $t4, L_8027219C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80272188: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_8027219C;
    }
    // 0x80272188: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x8027218C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80272190: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272194: nop

    // 0x80272198: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_8027219C:
    // 0x8027219C: jal         0x8027287C
    // 0x802721A0: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_8;
    // 0x802721A0: nop

    after_8:
    // 0x802721A4: lbu         $t5, 0x6($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X6);
    // 0x802721A8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802721AC: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x802721B0: bgez        $t5, L_802721C8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x802721B4: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_802721C8;
    }
    // 0x802721B4: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x802721B8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802721BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802721C0: nop

    // 0x802721C4: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_802721C8:
    // 0x802721C8: jal         0x8027287C
    // 0x802721CC: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_9;
    // 0x802721CC: nop

    after_9:
    // 0x802721D0: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
    // 0x802721D4: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x802721D8: bne         $t6, $zero, L_802721F0
    if (ctx->r14 != 0) {
        // 0x802721DC: lui         $at, 0x4059
        ctx->r1 = S32(0X4059 << 16);
            goto L_802721F0;
    }
    // 0x802721DC: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802721E0: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x802721E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802721E8: b           L_80272288
    // 0x802721EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272288;
    // 0x802721EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802721F0:
    // 0x802721F0: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x802721F4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802721F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802721FC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80272200: cvt.d.s     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.d = CVT_D_S(ctx->f16.fl);
    // 0x80272204: mul.d       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f12.d, ctx->f4.d);
    // 0x80272208: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8027220C: lwc1        $f9, 0x4E50($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4E50);
    // 0x80272210: lwc1        $f8, 0x4E54($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4E54);
    // 0x80272214: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80272218: mul.d       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f12.d, ctx->f8.d);
    // 0x8027221C: cvt.d.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.d = CVT_D_W(ctx->f18.u32l);
    // 0x80272220: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272224: div.d       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x80272228: nop

    // 0x8027222C: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x80272230: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80272234: nop

    // 0x80272238: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8027223C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272240: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272244: nop

    // 0x80272248: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x8027224C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80272250: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80272254: div         $zero, $t9, $s1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r17)));
    // 0x80272258: bne         $s1, $zero, L_80272264
    if (ctx->r17 != 0) {
        // 0x8027225C: nop
    
            goto L_80272264;
    }
    // 0x8027225C: nop

    // 0x80272260: break       7
    do_break(2150048352);
L_80272264:
    // 0x80272264: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272268: bne         $s1, $at, L_8027227C
    if (ctx->r17 != ctx->r1) {
        // 0x8027226C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027227C;
    }
    // 0x8027226C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272270: bne         $t9, $at, L_8027227C
    if (ctx->r25 != ctx->r1) {
        // 0x80272274: nop
    
            goto L_8027227C;
    }
    // 0x80272274: nop

    // 0x80272278: break       6
    do_break(2150048376);
L_8027227C:
    // 0x8027227C: mfhi        $s2
    ctx->r18 = hi;
    // 0x80272280: nop

    // 0x80272284: nop

L_80272288:
    // 0x80272288: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8027228C: nop

    // 0x80272290: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80272294: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272298: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027229C: nop

    // 0x802722A0: cvt.w.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = CVT_W_D(ctx->f2.d);
    // 0x802722A4: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x802722A8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802722AC: jal         0x80272818
    // 0x802722B0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_10;
    // 0x802722B0: nop

    after_10:
    // 0x802722B4: jal         0x80272818
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_11;
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_11:
    // 0x802722BC: lhu         $t3, 0xC($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XC);
    // 0x802722C0: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802722C4: bne         $t3, $zero, L_802722DC
    if (ctx->r11 != 0) {
        // 0x802722C8: nop
    
            goto L_802722DC;
    }
    // 0x802722C8: nop

    // 0x802722CC: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x802722D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802722D4: b           L_80272374
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272374;
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802722DC:
    // 0x802722DC: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802722E0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802722E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802722E8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802722EC: cvt.d.s     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f12.d = CVT_D_S(ctx->f6.fl);
    // 0x802722F0: mul.d       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f12.d, ctx->f10.d);
    // 0x802722F4: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x802722F8: lwc1        $f19, 0x4E58($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4E58);
    // 0x802722FC: lwc1        $f18, 0x4E5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4E5C);
    // 0x80272300: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80272304: mul.d       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f12.d, ctx->f18.d);
    // 0x80272308: cvt.d.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.d = CVT_D_W(ctx->f8.u32l);
    // 0x8027230C: nop

    // 0x80272310: div.d       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80272314: nop

    // 0x80272318: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x8027231C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80272320: nop

    // 0x80272324: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80272328: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8027232C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272330: nop

    // 0x80272334: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80272338: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8027233C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80272340: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272344: bne         $s1, $zero, L_80272350
    if (ctx->r17 != 0) {
        // 0x80272348: nop
    
            goto L_80272350;
    }
    // 0x80272348: nop

    // 0x8027234C: break       7
    do_break(2150048588);
L_80272350:
    // 0x80272350: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272354: bne         $s1, $at, L_80272368
    if (ctx->r17 != ctx->r1) {
        // 0x80272358: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272368;
    }
    // 0x80272358: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8027235C: bne         $t6, $at, L_80272368
    if (ctx->r14 != ctx->r1) {
        // 0x80272360: nop
    
            goto L_80272368;
    }
    // 0x80272360: nop

    // 0x80272364: break       6
    do_break(2150048612);
L_80272368:
    // 0x80272368: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027236C: nop

    // 0x80272370: nop

L_80272374:
    // 0x80272374: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80272378: nop

    // 0x8027237C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80272380: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272384: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272388: nop

    // 0x8027238C: cvt.w.d     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_D(ctx->f2.d);
    // 0x80272390: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80272394: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80272398: jal         0x80272818
    // 0x8027239C: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_12;
    // 0x8027239C: nop

    after_12:
    // 0x802723A0: jal         0x80272818
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_13;
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_13:
    // 0x802723A8: b           L_802726FC
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802723B0: addiu       $s0, $v1, 0x2C
    ctx->r16 = ADD32(ctx->r3, 0X2C);
    // 0x802723B4: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x802723B8: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x802723BC: slti        $at, $v0, 0x58D
    ctx->r1 = SIGNED(ctx->r2) < 0X58D ? 1 : 0;
    // 0x802723C0: bne         $at, $zero, L_80272438
    if (ctx->r1 != 0) {
        // 0x802723C4: nop
    
            goto L_80272438;
    }
    // 0x802723C4: nop

    // 0x802723C8: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802723CC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802723D0: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802723D4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x802723D8: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x802723DC: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x802723E0: addiu       $t2, $t2, -0x3770
    ctx->r10 = ADD32(ctx->r10, -0X3770);
    // 0x802723E4: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802723E8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x802723EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802723F0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802723F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802723F8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x802723FC: sh          $t7, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r15;
    // 0x80272400: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80272404: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80272408: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8027240C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80272410: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272414: addu        $a0, $t9, $t2
    ctx->r4 = ADD32(ctx->r25, ctx->r10);
    // 0x80272418: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x8027241C: jal         0x8002F528
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    func_8002F528(rdram, ctx);
        goto after_14;
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    after_14:
    // 0x80272424: lh          $t8, 0x9E($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X9E);
    // 0x80272428: nop

    // 0x8027242C: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x80272430: b           L_802724A4
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
        goto L_802724A4;
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
L_80272438:
    // 0x80272438: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8027243C: bne         $v1, $zero, L_80272448
    if (ctx->r3 != 0) {
        // 0x80272440: nop
    
            goto L_80272448;
    }
    // 0x80272440: nop

    // 0x80272444: break       7
    do_break(2150048836);
L_80272448:
    // 0x80272448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027244C: bne         $v1, $at, L_80272460
    if (ctx->r3 != ctx->r1) {
        // 0x80272450: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272460;
    }
    // 0x80272450: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272454: bne         $v0, $at, L_80272460
    if (ctx->r2 != ctx->r1) {
        // 0x80272458: nop
    
            goto L_80272460;
    }
    // 0x80272458: nop

    // 0x8027245C: break       6
    do_break(2150048860);
L_80272460:
    // 0x80272460: mflo        $t2
    ctx->r10 = lo;
    // 0x80272464: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80272468: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027246C: cvt.d.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.d = CVT_D_W(ctx->f16.u32l);
    // 0x80272470: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80272474: nop

    // 0x80272478: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8027247C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272480: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272484: nop

    // 0x80272488: cvt.w.d     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_D(ctx->f2.d);
    // 0x8027248C: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80272490: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80272494: jal         0x80272818
    // 0x80272498: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_15;
    // 0x80272498: nop

    after_15:
    // 0x8027249C: jal         0x80272818
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_16;
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_16:
L_802724A4:
    // 0x802724A4: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
    // 0x802724A8: nop

    // 0x802724AC: bne         $v0, $zero, L_80272524
    if (ctx->r2 != 0) {
        // 0x802724B0: nop
    
            goto L_80272524;
    }
    // 0x802724B0: nop

    // 0x802724B4: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802724B8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802724BC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802724C0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x802724C4: sll         $t4, $v0, 5
    ctx->r12 = S32(ctx->r2 << 5);
    // 0x802724C8: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x802724CC: addiu       $t6, $t6, -0x3770
    ctx->r14 = ADD32(ctx->r14, -0X3770);
    // 0x802724D0: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802724D4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802724D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802724DC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802724E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802724E4: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x802724E8: sh          $t3, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r11;
    // 0x802724EC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802724F0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802724F4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802724F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802724FC: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272500: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x80272504: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x80272508: jal         0x8002F528
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    func_8002F528(rdram, ctx);
        goto after_17;
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    after_17:
    // 0x80272510: lh          $t4, 0x9E($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X9E);
    // 0x80272514: nop

    // 0x80272518: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x8027251C: b           L_80272598
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
        goto L_80272598;
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
L_80272524:
    // 0x80272524: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272528: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x8027252C: bne         $s1, $zero, L_80272538
    if (ctx->r17 != 0) {
        // 0x80272530: nop
    
            goto L_80272538;
    }
    // 0x80272530: nop

    // 0x80272534: break       7
    do_break(2150049076);
L_80272538:
    // 0x80272538: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027253C: bne         $s1, $at, L_80272550
    if (ctx->r17 != ctx->r1) {
        // 0x80272540: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272550;
    }
    // 0x80272540: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272544: bne         $v0, $at, L_80272550
    if (ctx->r2 != ctx->r1) {
        // 0x80272548: nop
    
            goto L_80272550;
    }
    // 0x80272548: nop

    // 0x8027254C: break       6
    do_break(2150049100);
L_80272550:
    // 0x80272550: mflo        $a0
    ctx->r4 = lo;
    // 0x80272554: jal         0x80272818
    // 0x80272558: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_18;
    // 0x80272558: nop

    after_18:
    // 0x8027255C: lhu         $t6, 0x22($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X22);
    // 0x80272560: nop

    // 0x80272564: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272568: bne         $s1, $zero, L_80272574
    if (ctx->r17 != 0) {
        // 0x8027256C: nop
    
            goto L_80272574;
    }
    // 0x8027256C: nop

    // 0x80272570: break       7
    do_break(2150049136);
L_80272574:
    // 0x80272574: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272578: bne         $s1, $at, L_8027258C
    if (ctx->r17 != ctx->r1) {
        // 0x8027257C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027258C;
    }
    // 0x8027257C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272580: bne         $t6, $at, L_8027258C
    if (ctx->r14 != ctx->r1) {
        // 0x80272584: nop
    
            goto L_8027258C;
    }
    // 0x80272584: nop

    // 0x80272588: break       6
    do_break(2150049160);
L_8027258C:
    // 0x8027258C: mfhi        $a0
    ctx->r4 = hi;
    // 0x80272590: jal         0x80272818
    // 0x80272594: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_19;
    // 0x80272594: nop

    after_19:
L_80272598:
    // 0x80272598: lbu         $a0, 0x25($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X25);
    // 0x8027259C: jal         0x80272818
    // 0x802725A0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_20;
    // 0x802725A0: nop

    after_20:
    // 0x802725A4: lbu         $a0, 0x27($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X27);
    // 0x802725A8: jal         0x80272818
    // 0x802725AC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_21;
    // 0x802725AC: nop

    after_21:
    // 0x802725B0: lbu         $a0, 0x2B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2B);
    // 0x802725B4: jal         0x80272818
    // 0x802725B8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_22;
    // 0x802725B8: nop

    after_22:
    // 0x802725BC: lbu         $a0, 0x2C($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2C);
    // 0x802725C0: jal         0x80272818
    // 0x802725C4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_23;
    // 0x802725C4: nop

    after_23:
    // 0x802725C8: lbu         $a0, 0x2D($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2D);
    // 0x802725CC: jal         0x80272818
    // 0x802725D0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_24;
    // 0x802725D0: nop

    after_24:
    // 0x802725D4: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x802725D8: jal         0x80272818
    // 0x802725DC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_25;
    // 0x802725DC: nop

    after_25:
    // 0x802725E0: lbu         $a0, 0x4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4);
    // 0x802725E4: jal         0x80272818
    // 0x802725E8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_26;
    // 0x802725E8: nop

    after_26:
    // 0x802725EC: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x802725F0: jal         0x80272818
    // 0x802725F4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_27;
    // 0x802725F4: nop

    after_27:
    // 0x802725F8: b           L_802726FC
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80272600: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x80272604: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272608: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8027260C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80272610: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80272614: addiu       $a2, $a2, 0x4CB4
    ctx->r6 = ADD32(ctx->r6, 0X4CB4);
    // 0x80272618: jal         0x8004CFD8
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004CFD8(rdram, ctx);
        goto after_28;
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_28:
    // 0x80272620: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x80272624: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272628: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x8027262C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80272630: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80272634: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80272638: addiu       $a2, $a2, 0x4CF4
    ctx->r6 = ADD32(ctx->r6, 0X4CF4);
    // 0x8027263C: jal         0x8004D384
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D384(rdram, ctx);
        goto after_29;
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_29:
    // 0x80272644: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80272648: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x8027264C: addiu       $t0, $t0, 0x4CB4
    ctx->r8 = ADD32(ctx->r8, 0X4CB4);
    // 0x80272650: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80272654: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_80272658:
    // 0x80272658: lh          $t9, 0x9C($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X9C);
    // 0x8027265C: lb          $t8, 0x44($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X44);
    // 0x80272660: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80272664: sll         $t2, $t9, 5
    ctx->r10 = S32(ctx->r25 << 5);
    // 0x80272668: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8027266C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x80272670: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80272674: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80272678: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8027267C: addu        $t2, $s0, $t9
    ctx->r10 = ADD32(ctx->r16, ctx->r25);
    // 0x80272680: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80272684: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x80272688: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x8027268C: lbu         $t4, 0x1E($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1E);
    // 0x80272690: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    // 0x80272694: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80272698: addiu       $a1, $a1, 0x36
    ctx->r5 = ADD32(ctx->r5, 0X36);
    // 0x8027269C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802726A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802726A4: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x802726A8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802726AC: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x802726B0: lhu         $a3, 0x2($t6)
    ctx->r7 = MEM_HU(ctx->r14, 0X2);
    // 0x802726B4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802726B8: lh          $a2, 0x2($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X2);
    // 0x802726BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802726C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802726C4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802726C8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x802726CC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x802726D0: jal         0x8002F6EC
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_8002F6EC(rdram, ctx);
        goto after_30;
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_30:
    // 0x802726D8: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x802726DC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x802726E0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x802726E4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802726E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802726EC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x802726F0: bne         $v1, $at, L_80272658
    if (ctx->r3 != ctx->r1) {
        // 0x802726F4: addiu       $t1, $t1, 0x20
        ctx->r9 = ADD32(ctx->r9, 0X20);
            goto L_80272658;
    }
    // 0x802726F4: addiu       $t1, $t1, 0x20
    ctx->r9 = ADD32(ctx->r9, 0X20);
    // 0x802726F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802726FC:
    // 0x802726FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80272700: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80272704: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80272708: jr          $ra
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_8026F480_func_8027200C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027200C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80272010: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272014: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272018: nop

    // 0x8027201C: cvt.w.d     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_D(ctx->f2.d);
    // 0x80272020: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80272024: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80272028: jal         0x80272818
    // 0x8027202C: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_0;
    // 0x8027202C: nop

    after_0:
    // 0x80272030: jal         0x80272818
    // 0x80272034: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_1;
    // 0x80272034: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x80272038: b           L_802726FC
    // 0x8027203C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x8027203C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80272040: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x80272044: nop

    // 0x80272048: beq         $t5, $zero, L_802726FC
    if (ctx->r13 == 0) {
        // 0x8027204C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802726FC;
    }
    // 0x8027204C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80272050: lhu         $t6, 0x138($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X138);
    // 0x80272054: nop

    // 0x80272058: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8027205C: bgez        $t6, L_80272078
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80272060: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_80272078;
    }
    // 0x80272060: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x80272064: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272068: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8027206C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272070: nop

    // 0x80272074: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_80272078:
    // 0x80272078: jal         0x8027287C
    // 0x8027207C: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_2;
    // 0x8027207C: nop

    after_2:
    // 0x80272080: lhu         $t7, 0x13A($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X13A);
    // 0x80272084: nop

    // 0x80272088: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8027208C: bgez        $t7, L_802720A8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80272090: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_802720A8;
    }
    // 0x80272090: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x80272094: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272098: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8027209C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802720A0: nop

    // 0x802720A4: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_802720A8:
    // 0x802720A8: jal         0x8027287C
    // 0x802720AC: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_3;
    // 0x802720AC: nop

    after_3:
    // 0x802720B0: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x802720B4: nop

    // 0x802720B8: lhu         $t8, 0x3C($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X3C);
    // 0x802720BC: addiu       $s0, $s0, 0x2C
    ctx->r16 = ADD32(ctx->r16, 0X2C);
    // 0x802720C0: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x802720C4: bgez        $t8, L_802720E0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802720C8: cvt.d.w     $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
            goto L_802720E0;
    }
    // 0x802720C8: cvt.d.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
    // 0x802720CC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802720D0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802720D4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802720D8: nop

    // 0x802720DC: add.d       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = ctx->f12.d + ctx->f18.d;
L_802720E0:
    // 0x802720E0: jal         0x8027287C
    // 0x802720E4: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_4;
    // 0x802720E4: nop

    after_4:
    // 0x802720E8: lbu         $t9, 0x2($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2);
    // 0x802720EC: nop

    // 0x802720F0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x802720F4: bgez        $t9, L_80272110
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802720F8: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_80272110;
    }
    // 0x802720F8: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x802720FC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272100: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80272104: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272108: nop

    // 0x8027210C: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_80272110:
    // 0x80272110: jal         0x8027287C
    // 0x80272114: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_5;
    // 0x80272114: nop

    after_5:
    // 0x80272118: lbu         $t2, 0x3($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3);
    // 0x8027211C: nop

    // 0x80272120: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80272124: bgez        $t2, L_80272140
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80272128: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_80272140;
    }
    // 0x80272128: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x8027212C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272130: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80272134: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80272138: nop

    // 0x8027213C: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_80272140:
    // 0x80272140: jal         0x8027287C
    // 0x80272144: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_6;
    // 0x80272144: nop

    after_6:
    // 0x80272148: lhu         $t3, 0x8($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X8);
    // 0x8027214C: nop

    // 0x80272150: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80272154: bgez        $t3, L_80272170
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80272158: cvt.d.w     $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
            goto L_80272170;
    }
    // 0x80272158: cvt.d.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
    // 0x8027215C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272160: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80272164: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80272168: nop

    // 0x8027216C: add.d       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = ctx->f12.d + ctx->f18.d;
L_80272170:
    // 0x80272170: jal         0x8027287C
    // 0x80272174: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_7;
    // 0x80272174: nop

    after_7:
    // 0x80272178: lhu         $t4, 0xA($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XA);
    // 0x8027217C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272180: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80272184: bgez        $t4, L_8027219C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80272188: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_8027219C;
    }
    // 0x80272188: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x8027218C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80272190: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272194: nop

    // 0x80272198: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_8027219C:
    // 0x8027219C: jal         0x8027287C
    // 0x802721A0: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_8;
    // 0x802721A0: nop

    after_8:
    // 0x802721A4: lbu         $t5, 0x6($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X6);
    // 0x802721A8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802721AC: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x802721B0: bgez        $t5, L_802721C8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x802721B4: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_802721C8;
    }
    // 0x802721B4: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x802721B8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802721BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802721C0: nop

    // 0x802721C4: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_802721C8:
    // 0x802721C8: jal         0x8027287C
    // 0x802721CC: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_9;
    // 0x802721CC: nop

    after_9:
    // 0x802721D0: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
    // 0x802721D4: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x802721D8: bne         $t6, $zero, L_802721F0
    if (ctx->r14 != 0) {
        // 0x802721DC: lui         $at, 0x4059
        ctx->r1 = S32(0X4059 << 16);
            goto L_802721F0;
    }
    // 0x802721DC: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802721E0: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x802721E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802721E8: b           L_80272288
    // 0x802721EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272288;
    // 0x802721EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802721F0:
    // 0x802721F0: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x802721F4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802721F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802721FC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80272200: cvt.d.s     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.d = CVT_D_S(ctx->f16.fl);
    // 0x80272204: mul.d       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f12.d, ctx->f4.d);
    // 0x80272208: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8027220C: lwc1        $f9, 0x4E50($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4E50);
    // 0x80272210: lwc1        $f8, 0x4E54($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4E54);
    // 0x80272214: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80272218: mul.d       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f12.d, ctx->f8.d);
    // 0x8027221C: cvt.d.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.d = CVT_D_W(ctx->f18.u32l);
    // 0x80272220: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272224: div.d       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x80272228: nop

    // 0x8027222C: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x80272230: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80272234: nop

    // 0x80272238: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8027223C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272240: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272244: nop

    // 0x80272248: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x8027224C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80272250: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80272254: div         $zero, $t9, $s1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r17)));
    // 0x80272258: bne         $s1, $zero, L_80272264
    if (ctx->r17 != 0) {
        // 0x8027225C: nop
    
            goto L_80272264;
    }
    // 0x8027225C: nop

    // 0x80272260: break       7
    do_break(2150048352);
L_80272264:
    // 0x80272264: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272268: bne         $s1, $at, L_8027227C
    if (ctx->r17 != ctx->r1) {
        // 0x8027226C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027227C;
    }
    // 0x8027226C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272270: bne         $t9, $at, L_8027227C
    if (ctx->r25 != ctx->r1) {
        // 0x80272274: nop
    
            goto L_8027227C;
    }
    // 0x80272274: nop

    // 0x80272278: break       6
    do_break(2150048376);
L_8027227C:
    // 0x8027227C: mfhi        $s2
    ctx->r18 = hi;
    // 0x80272280: nop

    // 0x80272284: nop

L_80272288:
    // 0x80272288: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8027228C: nop

    // 0x80272290: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80272294: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272298: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027229C: nop

    // 0x802722A0: cvt.w.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = CVT_W_D(ctx->f2.d);
    // 0x802722A4: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x802722A8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802722AC: jal         0x80272818
    // 0x802722B0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_10;
    // 0x802722B0: nop

    after_10:
    // 0x802722B4: jal         0x80272818
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_11;
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_11:
    // 0x802722BC: lhu         $t3, 0xC($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XC);
    // 0x802722C0: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802722C4: bne         $t3, $zero, L_802722DC
    if (ctx->r11 != 0) {
        // 0x802722C8: nop
    
            goto L_802722DC;
    }
    // 0x802722C8: nop

    // 0x802722CC: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x802722D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802722D4: b           L_80272374
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272374;
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802722DC:
    // 0x802722DC: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802722E0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802722E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802722E8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802722EC: cvt.d.s     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f12.d = CVT_D_S(ctx->f6.fl);
    // 0x802722F0: mul.d       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f12.d, ctx->f10.d);
    // 0x802722F4: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x802722F8: lwc1        $f19, 0x4E58($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4E58);
    // 0x802722FC: lwc1        $f18, 0x4E5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4E5C);
    // 0x80272300: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80272304: mul.d       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f12.d, ctx->f18.d);
    // 0x80272308: cvt.d.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.d = CVT_D_W(ctx->f8.u32l);
    // 0x8027230C: nop

    // 0x80272310: div.d       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80272314: nop

    // 0x80272318: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x8027231C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80272320: nop

    // 0x80272324: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80272328: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8027232C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272330: nop

    // 0x80272334: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80272338: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8027233C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80272340: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272344: bne         $s1, $zero, L_80272350
    if (ctx->r17 != 0) {
        // 0x80272348: nop
    
            goto L_80272350;
    }
    // 0x80272348: nop

    // 0x8027234C: break       7
    do_break(2150048588);
L_80272350:
    // 0x80272350: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272354: bne         $s1, $at, L_80272368
    if (ctx->r17 != ctx->r1) {
        // 0x80272358: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272368;
    }
    // 0x80272358: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8027235C: bne         $t6, $at, L_80272368
    if (ctx->r14 != ctx->r1) {
        // 0x80272360: nop
    
            goto L_80272368;
    }
    // 0x80272360: nop

    // 0x80272364: break       6
    do_break(2150048612);
L_80272368:
    // 0x80272368: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027236C: nop

    // 0x80272370: nop

L_80272374:
    // 0x80272374: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80272378: nop

    // 0x8027237C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80272380: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272384: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272388: nop

    // 0x8027238C: cvt.w.d     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_D(ctx->f2.d);
    // 0x80272390: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80272394: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80272398: jal         0x80272818
    // 0x8027239C: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_12;
    // 0x8027239C: nop

    after_12:
    // 0x802723A0: jal         0x80272818
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_13;
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_13:
    // 0x802723A8: b           L_802726FC
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802723B0: addiu       $s0, $v1, 0x2C
    ctx->r16 = ADD32(ctx->r3, 0X2C);
    // 0x802723B4: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x802723B8: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x802723BC: slti        $at, $v0, 0x58D
    ctx->r1 = SIGNED(ctx->r2) < 0X58D ? 1 : 0;
    // 0x802723C0: bne         $at, $zero, L_80272438
    if (ctx->r1 != 0) {
        // 0x802723C4: nop
    
            goto L_80272438;
    }
    // 0x802723C4: nop

    // 0x802723C8: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802723CC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802723D0: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802723D4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x802723D8: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x802723DC: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x802723E0: addiu       $t2, $t2, -0x3770
    ctx->r10 = ADD32(ctx->r10, -0X3770);
    // 0x802723E4: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802723E8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x802723EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802723F0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802723F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802723F8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x802723FC: sh          $t7, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r15;
    // 0x80272400: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80272404: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80272408: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8027240C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80272410: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272414: addu        $a0, $t9, $t2
    ctx->r4 = ADD32(ctx->r25, ctx->r10);
    // 0x80272418: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x8027241C: jal         0x8002F528
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    func_8002F528(rdram, ctx);
        goto after_14;
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    after_14:
    // 0x80272424: lh          $t8, 0x9E($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X9E);
    // 0x80272428: nop

    // 0x8027242C: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x80272430: b           L_802724A4
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
        goto L_802724A4;
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
L_80272438:
    // 0x80272438: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8027243C: bne         $v1, $zero, L_80272448
    if (ctx->r3 != 0) {
        // 0x80272440: nop
    
            goto L_80272448;
    }
    // 0x80272440: nop

    // 0x80272444: break       7
    do_break(2150048836);
L_80272448:
    // 0x80272448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027244C: bne         $v1, $at, L_80272460
    if (ctx->r3 != ctx->r1) {
        // 0x80272450: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272460;
    }
    // 0x80272450: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272454: bne         $v0, $at, L_80272460
    if (ctx->r2 != ctx->r1) {
        // 0x80272458: nop
    
            goto L_80272460;
    }
    // 0x80272458: nop

    // 0x8027245C: break       6
    do_break(2150048860);
L_80272460:
    // 0x80272460: mflo        $t2
    ctx->r10 = lo;
    // 0x80272464: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80272468: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027246C: cvt.d.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.d = CVT_D_W(ctx->f16.u32l);
    // 0x80272470: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80272474: nop

    // 0x80272478: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8027247C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272480: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272484: nop

    // 0x80272488: cvt.w.d     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_D(ctx->f2.d);
    // 0x8027248C: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80272490: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80272494: jal         0x80272818
    // 0x80272498: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_15;
    // 0x80272498: nop

    after_15:
    // 0x8027249C: jal         0x80272818
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_16;
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_16:
L_802724A4:
    // 0x802724A4: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
    // 0x802724A8: nop

    // 0x802724AC: bne         $v0, $zero, L_80272524
    if (ctx->r2 != 0) {
        // 0x802724B0: nop
    
            goto L_80272524;
    }
    // 0x802724B0: nop

    // 0x802724B4: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802724B8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802724BC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802724C0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x802724C4: sll         $t4, $v0, 5
    ctx->r12 = S32(ctx->r2 << 5);
    // 0x802724C8: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x802724CC: addiu       $t6, $t6, -0x3770
    ctx->r14 = ADD32(ctx->r14, -0X3770);
    // 0x802724D0: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802724D4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802724D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802724DC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802724E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802724E4: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x802724E8: sh          $t3, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r11;
    // 0x802724EC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802724F0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802724F4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802724F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802724FC: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272500: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x80272504: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x80272508: jal         0x8002F528
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    func_8002F528(rdram, ctx);
        goto after_17;
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    after_17:
    // 0x80272510: lh          $t4, 0x9E($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X9E);
    // 0x80272514: nop

    // 0x80272518: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x8027251C: b           L_80272598
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
        goto L_80272598;
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
L_80272524:
    // 0x80272524: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272528: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x8027252C: bne         $s1, $zero, L_80272538
    if (ctx->r17 != 0) {
        // 0x80272530: nop
    
            goto L_80272538;
    }
    // 0x80272530: nop

    // 0x80272534: break       7
    do_break(2150049076);
L_80272538:
    // 0x80272538: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027253C: bne         $s1, $at, L_80272550
    if (ctx->r17 != ctx->r1) {
        // 0x80272540: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272550;
    }
    // 0x80272540: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272544: bne         $v0, $at, L_80272550
    if (ctx->r2 != ctx->r1) {
        // 0x80272548: nop
    
            goto L_80272550;
    }
    // 0x80272548: nop

    // 0x8027254C: break       6
    do_break(2150049100);
L_80272550:
    // 0x80272550: mflo        $a0
    ctx->r4 = lo;
    // 0x80272554: jal         0x80272818
    // 0x80272558: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_18;
    // 0x80272558: nop

    after_18:
    // 0x8027255C: lhu         $t6, 0x22($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X22);
    // 0x80272560: nop

    // 0x80272564: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272568: bne         $s1, $zero, L_80272574
    if (ctx->r17 != 0) {
        // 0x8027256C: nop
    
            goto L_80272574;
    }
    // 0x8027256C: nop

    // 0x80272570: break       7
    do_break(2150049136);
L_80272574:
    // 0x80272574: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272578: bne         $s1, $at, L_8027258C
    if (ctx->r17 != ctx->r1) {
        // 0x8027257C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027258C;
    }
    // 0x8027257C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272580: bne         $t6, $at, L_8027258C
    if (ctx->r14 != ctx->r1) {
        // 0x80272584: nop
    
            goto L_8027258C;
    }
    // 0x80272584: nop

    // 0x80272588: break       6
    do_break(2150049160);
L_8027258C:
    // 0x8027258C: mfhi        $a0
    ctx->r4 = hi;
    // 0x80272590: jal         0x80272818
    // 0x80272594: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_19;
    // 0x80272594: nop

    after_19:
L_80272598:
    // 0x80272598: lbu         $a0, 0x25($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X25);
    // 0x8027259C: jal         0x80272818
    // 0x802725A0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_20;
    // 0x802725A0: nop

    after_20:
    // 0x802725A4: lbu         $a0, 0x27($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X27);
    // 0x802725A8: jal         0x80272818
    // 0x802725AC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_21;
    // 0x802725AC: nop

    after_21:
    // 0x802725B0: lbu         $a0, 0x2B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2B);
    // 0x802725B4: jal         0x80272818
    // 0x802725B8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_22;
    // 0x802725B8: nop

    after_22:
    // 0x802725BC: lbu         $a0, 0x2C($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2C);
    // 0x802725C0: jal         0x80272818
    // 0x802725C4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_23;
    // 0x802725C4: nop

    after_23:
    // 0x802725C8: lbu         $a0, 0x2D($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2D);
    // 0x802725CC: jal         0x80272818
    // 0x802725D0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_24;
    // 0x802725D0: nop

    after_24:
    // 0x802725D4: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x802725D8: jal         0x80272818
    // 0x802725DC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_25;
    // 0x802725DC: nop

    after_25:
    // 0x802725E0: lbu         $a0, 0x4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4);
    // 0x802725E4: jal         0x80272818
    // 0x802725E8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_26;
    // 0x802725E8: nop

    after_26:
    // 0x802725EC: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x802725F0: jal         0x80272818
    // 0x802725F4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_27;
    // 0x802725F4: nop

    after_27:
    // 0x802725F8: b           L_802726FC
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80272600: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x80272604: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272608: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8027260C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80272610: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80272614: addiu       $a2, $a2, 0x4CB4
    ctx->r6 = ADD32(ctx->r6, 0X4CB4);
    // 0x80272618: jal         0x8004CFD8
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004CFD8(rdram, ctx);
        goto after_28;
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_28:
    // 0x80272620: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x80272624: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272628: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x8027262C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80272630: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80272634: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80272638: addiu       $a2, $a2, 0x4CF4
    ctx->r6 = ADD32(ctx->r6, 0X4CF4);
    // 0x8027263C: jal         0x8004D384
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D384(rdram, ctx);
        goto after_29;
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_29:
    // 0x80272644: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80272648: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x8027264C: addiu       $t0, $t0, 0x4CB4
    ctx->r8 = ADD32(ctx->r8, 0X4CB4);
    // 0x80272650: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80272654: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_80272658:
    // 0x80272658: lh          $t9, 0x9C($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X9C);
    // 0x8027265C: lb          $t8, 0x44($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X44);
    // 0x80272660: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80272664: sll         $t2, $t9, 5
    ctx->r10 = S32(ctx->r25 << 5);
    // 0x80272668: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8027266C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x80272670: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80272674: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80272678: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8027267C: addu        $t2, $s0, $t9
    ctx->r10 = ADD32(ctx->r16, ctx->r25);
    // 0x80272680: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80272684: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x80272688: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x8027268C: lbu         $t4, 0x1E($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1E);
    // 0x80272690: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    // 0x80272694: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80272698: addiu       $a1, $a1, 0x36
    ctx->r5 = ADD32(ctx->r5, 0X36);
    // 0x8027269C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802726A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802726A4: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x802726A8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802726AC: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x802726B0: lhu         $a3, 0x2($t6)
    ctx->r7 = MEM_HU(ctx->r14, 0X2);
    // 0x802726B4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802726B8: lh          $a2, 0x2($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X2);
    // 0x802726BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802726C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802726C4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802726C8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x802726CC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x802726D0: jal         0x8002F6EC
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_8002F6EC(rdram, ctx);
        goto after_30;
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_30:
    // 0x802726D8: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x802726DC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x802726E0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x802726E4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802726E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802726EC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x802726F0: bne         $v1, $at, L_80272658
    if (ctx->r3 != ctx->r1) {
        // 0x802726F4: addiu       $t1, $t1, 0x20
        ctx->r9 = ADD32(ctx->r9, 0X20);
            goto L_80272658;
    }
    // 0x802726F4: addiu       $t1, $t1, 0x20
    ctx->r9 = ADD32(ctx->r9, 0X20);
    // 0x802726F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802726FC:
    // 0x802726FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80272700: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80272704: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80272708: jr          $ra
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_8026F480_func_80272058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272058: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8027205C: bgez        $t6, L_80272078
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80272060: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_80272078;
    }
    // 0x80272060: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x80272064: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272068: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8027206C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272070: nop

    // 0x80272074: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_80272078:
    // 0x80272078: jal         0x8027287C
    // 0x8027207C: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_0;
    // 0x8027207C: nop

    after_0:
    // 0x80272080: lhu         $t7, 0x13A($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X13A);
    // 0x80272084: nop

    // 0x80272088: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8027208C: bgez        $t7, L_802720A8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80272090: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_802720A8;
    }
    // 0x80272090: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x80272094: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272098: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8027209C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802720A0: nop

    // 0x802720A4: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_802720A8:
    // 0x802720A8: jal         0x8027287C
    // 0x802720AC: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_1;
    // 0x802720AC: nop

    after_1:
    // 0x802720B0: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x802720B4: nop

    // 0x802720B8: lhu         $t8, 0x3C($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X3C);
    // 0x802720BC: addiu       $s0, $s0, 0x2C
    ctx->r16 = ADD32(ctx->r16, 0X2C);
    // 0x802720C0: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x802720C4: bgez        $t8, L_802720E0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802720C8: cvt.d.w     $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
            goto L_802720E0;
    }
    // 0x802720C8: cvt.d.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
    // 0x802720CC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802720D0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802720D4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802720D8: nop

    // 0x802720DC: add.d       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = ctx->f12.d + ctx->f18.d;
L_802720E0:
    // 0x802720E0: jal         0x8027287C
    // 0x802720E4: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_2;
    // 0x802720E4: nop

    after_2:
    // 0x802720E8: lbu         $t9, 0x2($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2);
    // 0x802720EC: nop

    // 0x802720F0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x802720F4: bgez        $t9, L_80272110
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802720F8: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_80272110;
    }
    // 0x802720F8: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x802720FC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272100: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80272104: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272108: nop

    // 0x8027210C: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_80272110:
    // 0x80272110: jal         0x8027287C
    // 0x80272114: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_3;
    // 0x80272114: nop

    after_3:
    // 0x80272118: lbu         $t2, 0x3($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3);
    // 0x8027211C: nop

    // 0x80272120: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80272124: bgez        $t2, L_80272140
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80272128: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_80272140;
    }
    // 0x80272128: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x8027212C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272130: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80272134: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80272138: nop

    // 0x8027213C: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_80272140:
    // 0x80272140: jal         0x8027287C
    // 0x80272144: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_4;
    // 0x80272144: nop

    after_4:
    // 0x80272148: lhu         $t3, 0x8($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X8);
    // 0x8027214C: nop

    // 0x80272150: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80272154: bgez        $t3, L_80272170
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80272158: cvt.d.w     $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
            goto L_80272170;
    }
    // 0x80272158: cvt.d.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
    // 0x8027215C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272160: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80272164: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80272168: nop

    // 0x8027216C: add.d       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = ctx->f12.d + ctx->f18.d;
L_80272170:
    // 0x80272170: jal         0x8027287C
    // 0x80272174: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_5;
    // 0x80272174: nop

    after_5:
    // 0x80272178: lhu         $t4, 0xA($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XA);
    // 0x8027217C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272180: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80272184: bgez        $t4, L_8027219C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80272188: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_8027219C;
    }
    // 0x80272188: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x8027218C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80272190: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272194: nop

    // 0x80272198: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_8027219C:
    // 0x8027219C: jal         0x8027287C
    // 0x802721A0: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_6;
    // 0x802721A0: nop

    after_6:
    // 0x802721A4: lbu         $t5, 0x6($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X6);
    // 0x802721A8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802721AC: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x802721B0: bgez        $t5, L_802721C8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x802721B4: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_802721C8;
    }
    // 0x802721B4: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x802721B8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802721BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802721C0: nop

    // 0x802721C4: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_802721C8:
    // 0x802721C8: jal         0x8027287C
    // 0x802721CC: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_7;
    // 0x802721CC: nop

    after_7:
    // 0x802721D0: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
    // 0x802721D4: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x802721D8: bne         $t6, $zero, L_802721F0
    if (ctx->r14 != 0) {
        // 0x802721DC: lui         $at, 0x4059
        ctx->r1 = S32(0X4059 << 16);
            goto L_802721F0;
    }
    // 0x802721DC: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802721E0: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x802721E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802721E8: b           L_80272288
    // 0x802721EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272288;
    // 0x802721EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802721F0:
    // 0x802721F0: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x802721F4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802721F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802721FC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80272200: cvt.d.s     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.d = CVT_D_S(ctx->f16.fl);
    // 0x80272204: mul.d       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f12.d, ctx->f4.d);
    // 0x80272208: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8027220C: lwc1        $f9, 0x4E50($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4E50);
    // 0x80272210: lwc1        $f8, 0x4E54($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4E54);
    // 0x80272214: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80272218: mul.d       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f12.d, ctx->f8.d);
    // 0x8027221C: cvt.d.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.d = CVT_D_W(ctx->f18.u32l);
    // 0x80272220: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272224: div.d       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x80272228: nop

    // 0x8027222C: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x80272230: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80272234: nop

    // 0x80272238: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8027223C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272240: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272244: nop

    // 0x80272248: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x8027224C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80272250: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80272254: div         $zero, $t9, $s1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r17)));
    // 0x80272258: bne         $s1, $zero, L_80272264
    if (ctx->r17 != 0) {
        // 0x8027225C: nop
    
            goto L_80272264;
    }
    // 0x8027225C: nop

    // 0x80272260: break       7
    do_break(2150048352);
L_80272264:
    // 0x80272264: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272268: bne         $s1, $at, L_8027227C
    if (ctx->r17 != ctx->r1) {
        // 0x8027226C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027227C;
    }
    // 0x8027226C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272270: bne         $t9, $at, L_8027227C
    if (ctx->r25 != ctx->r1) {
        // 0x80272274: nop
    
            goto L_8027227C;
    }
    // 0x80272274: nop

    // 0x80272278: break       6
    do_break(2150048376);
L_8027227C:
    // 0x8027227C: mfhi        $s2
    ctx->r18 = hi;
    // 0x80272280: nop

    // 0x80272284: nop

L_80272288:
    // 0x80272288: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8027228C: nop

    // 0x80272290: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80272294: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272298: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027229C: nop

    // 0x802722A0: cvt.w.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = CVT_W_D(ctx->f2.d);
    // 0x802722A4: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x802722A8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802722AC: jal         0x80272818
    // 0x802722B0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_8;
    // 0x802722B0: nop

    after_8:
    // 0x802722B4: jal         0x80272818
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_9;
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_9:
    // 0x802722BC: lhu         $t3, 0xC($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XC);
    // 0x802722C0: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802722C4: bne         $t3, $zero, L_802722DC
    if (ctx->r11 != 0) {
        // 0x802722C8: nop
    
            goto L_802722DC;
    }
    // 0x802722C8: nop

    // 0x802722CC: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x802722D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802722D4: b           L_80272374
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272374;
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802722DC:
    // 0x802722DC: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802722E0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802722E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802722E8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802722EC: cvt.d.s     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f12.d = CVT_D_S(ctx->f6.fl);
    // 0x802722F0: mul.d       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f12.d, ctx->f10.d);
    // 0x802722F4: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x802722F8: lwc1        $f19, 0x4E58($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4E58);
    // 0x802722FC: lwc1        $f18, 0x4E5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4E5C);
    // 0x80272300: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80272304: mul.d       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f12.d, ctx->f18.d);
    // 0x80272308: cvt.d.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.d = CVT_D_W(ctx->f8.u32l);
    // 0x8027230C: nop

    // 0x80272310: div.d       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80272314: nop

    // 0x80272318: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x8027231C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80272320: nop

    // 0x80272324: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80272328: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8027232C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272330: nop

    // 0x80272334: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80272338: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8027233C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80272340: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272344: bne         $s1, $zero, L_80272350
    if (ctx->r17 != 0) {
        // 0x80272348: nop
    
            goto L_80272350;
    }
    // 0x80272348: nop

    // 0x8027234C: break       7
    do_break(2150048588);
L_80272350:
    // 0x80272350: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272354: bne         $s1, $at, L_80272368
    if (ctx->r17 != ctx->r1) {
        // 0x80272358: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272368;
    }
    // 0x80272358: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8027235C: bne         $t6, $at, L_80272368
    if (ctx->r14 != ctx->r1) {
        // 0x80272360: nop
    
            goto L_80272368;
    }
    // 0x80272360: nop

    // 0x80272364: break       6
    do_break(2150048612);
L_80272368:
    // 0x80272368: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027236C: nop

    // 0x80272370: nop

L_80272374:
    // 0x80272374: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80272378: nop

    // 0x8027237C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80272380: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272384: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272388: nop

    // 0x8027238C: cvt.w.d     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_D(ctx->f2.d);
    // 0x80272390: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80272394: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80272398: jal         0x80272818
    // 0x8027239C: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_10;
    // 0x8027239C: nop

    after_10:
    // 0x802723A0: jal         0x80272818
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_11;
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_11:
    // 0x802723A8: b           L_802726FC
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802723B0: addiu       $s0, $v1, 0x2C
    ctx->r16 = ADD32(ctx->r3, 0X2C);
    // 0x802723B4: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x802723B8: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x802723BC: slti        $at, $v0, 0x58D
    ctx->r1 = SIGNED(ctx->r2) < 0X58D ? 1 : 0;
    // 0x802723C0: bne         $at, $zero, L_80272438
    if (ctx->r1 != 0) {
        // 0x802723C4: nop
    
            goto L_80272438;
    }
    // 0x802723C4: nop

    // 0x802723C8: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802723CC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802723D0: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802723D4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x802723D8: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x802723DC: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x802723E0: addiu       $t2, $t2, -0x3770
    ctx->r10 = ADD32(ctx->r10, -0X3770);
    // 0x802723E4: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802723E8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x802723EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802723F0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802723F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802723F8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x802723FC: sh          $t7, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r15;
    // 0x80272400: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80272404: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80272408: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8027240C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80272410: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272414: addu        $a0, $t9, $t2
    ctx->r4 = ADD32(ctx->r25, ctx->r10);
    // 0x80272418: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x8027241C: jal         0x8002F528
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    func_8002F528(rdram, ctx);
        goto after_12;
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    after_12:
    // 0x80272424: lh          $t8, 0x9E($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X9E);
    // 0x80272428: nop

    // 0x8027242C: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x80272430: b           L_802724A4
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
        goto L_802724A4;
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
L_80272438:
    // 0x80272438: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8027243C: bne         $v1, $zero, L_80272448
    if (ctx->r3 != 0) {
        // 0x80272440: nop
    
            goto L_80272448;
    }
    // 0x80272440: nop

    // 0x80272444: break       7
    do_break(2150048836);
L_80272448:
    // 0x80272448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027244C: bne         $v1, $at, L_80272460
    if (ctx->r3 != ctx->r1) {
        // 0x80272450: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272460;
    }
    // 0x80272450: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272454: bne         $v0, $at, L_80272460
    if (ctx->r2 != ctx->r1) {
        // 0x80272458: nop
    
            goto L_80272460;
    }
    // 0x80272458: nop

    // 0x8027245C: break       6
    do_break(2150048860);
L_80272460:
    // 0x80272460: mflo        $t2
    ctx->r10 = lo;
    // 0x80272464: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80272468: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027246C: cvt.d.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.d = CVT_D_W(ctx->f16.u32l);
    // 0x80272470: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80272474: nop

    // 0x80272478: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8027247C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272480: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272484: nop

    // 0x80272488: cvt.w.d     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_D(ctx->f2.d);
    // 0x8027248C: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80272490: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80272494: jal         0x80272818
    // 0x80272498: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_13;
    // 0x80272498: nop

    after_13:
    // 0x8027249C: jal         0x80272818
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_14;
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_14:
L_802724A4:
    // 0x802724A4: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
    // 0x802724A8: nop

    // 0x802724AC: bne         $v0, $zero, L_80272524
    if (ctx->r2 != 0) {
        // 0x802724B0: nop
    
            goto L_80272524;
    }
    // 0x802724B0: nop

    // 0x802724B4: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802724B8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802724BC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802724C0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x802724C4: sll         $t4, $v0, 5
    ctx->r12 = S32(ctx->r2 << 5);
    // 0x802724C8: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x802724CC: addiu       $t6, $t6, -0x3770
    ctx->r14 = ADD32(ctx->r14, -0X3770);
    // 0x802724D0: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802724D4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802724D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802724DC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802724E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802724E4: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x802724E8: sh          $t3, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r11;
    // 0x802724EC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802724F0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802724F4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802724F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802724FC: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272500: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x80272504: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x80272508: jal         0x8002F528
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    func_8002F528(rdram, ctx);
        goto after_15;
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    after_15:
    // 0x80272510: lh          $t4, 0x9E($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X9E);
    // 0x80272514: nop

    // 0x80272518: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x8027251C: b           L_80272598
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
        goto L_80272598;
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
L_80272524:
    // 0x80272524: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272528: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x8027252C: bne         $s1, $zero, L_80272538
    if (ctx->r17 != 0) {
        // 0x80272530: nop
    
            goto L_80272538;
    }
    // 0x80272530: nop

    // 0x80272534: break       7
    do_break(2150049076);
L_80272538:
    // 0x80272538: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027253C: bne         $s1, $at, L_80272550
    if (ctx->r17 != ctx->r1) {
        // 0x80272540: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272550;
    }
    // 0x80272540: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272544: bne         $v0, $at, L_80272550
    if (ctx->r2 != ctx->r1) {
        // 0x80272548: nop
    
            goto L_80272550;
    }
    // 0x80272548: nop

    // 0x8027254C: break       6
    do_break(2150049100);
L_80272550:
    // 0x80272550: mflo        $a0
    ctx->r4 = lo;
    // 0x80272554: jal         0x80272818
    // 0x80272558: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_16;
    // 0x80272558: nop

    after_16:
    // 0x8027255C: lhu         $t6, 0x22($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X22);
    // 0x80272560: nop

    // 0x80272564: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272568: bne         $s1, $zero, L_80272574
    if (ctx->r17 != 0) {
        // 0x8027256C: nop
    
            goto L_80272574;
    }
    // 0x8027256C: nop

    // 0x80272570: break       7
    do_break(2150049136);
L_80272574:
    // 0x80272574: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272578: bne         $s1, $at, L_8027258C
    if (ctx->r17 != ctx->r1) {
        // 0x8027257C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027258C;
    }
    // 0x8027257C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272580: bne         $t6, $at, L_8027258C
    if (ctx->r14 != ctx->r1) {
        // 0x80272584: nop
    
            goto L_8027258C;
    }
    // 0x80272584: nop

    // 0x80272588: break       6
    do_break(2150049160);
L_8027258C:
    // 0x8027258C: mfhi        $a0
    ctx->r4 = hi;
    // 0x80272590: jal         0x80272818
    // 0x80272594: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_17;
    // 0x80272594: nop

    after_17:
L_80272598:
    // 0x80272598: lbu         $a0, 0x25($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X25);
    // 0x8027259C: jal         0x80272818
    // 0x802725A0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_18;
    // 0x802725A0: nop

    after_18:
    // 0x802725A4: lbu         $a0, 0x27($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X27);
    // 0x802725A8: jal         0x80272818
    // 0x802725AC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_19;
    // 0x802725AC: nop

    after_19:
    // 0x802725B0: lbu         $a0, 0x2B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2B);
    // 0x802725B4: jal         0x80272818
    // 0x802725B8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_20;
    // 0x802725B8: nop

    after_20:
    // 0x802725BC: lbu         $a0, 0x2C($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2C);
    // 0x802725C0: jal         0x80272818
    // 0x802725C4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_21;
    // 0x802725C4: nop

    after_21:
    // 0x802725C8: lbu         $a0, 0x2D($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2D);
    // 0x802725CC: jal         0x80272818
    // 0x802725D0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_22;
    // 0x802725D0: nop

    after_22:
    // 0x802725D4: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x802725D8: jal         0x80272818
    // 0x802725DC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_23;
    // 0x802725DC: nop

    after_23:
    // 0x802725E0: lbu         $a0, 0x4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4);
    // 0x802725E4: jal         0x80272818
    // 0x802725E8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_24;
    // 0x802725E8: nop

    after_24:
    // 0x802725EC: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x802725F0: jal         0x80272818
    // 0x802725F4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_25;
    // 0x802725F4: nop

    after_25:
    // 0x802725F8: b           L_802726FC
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80272600: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x80272604: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272608: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8027260C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80272610: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80272614: addiu       $a2, $a2, 0x4CB4
    ctx->r6 = ADD32(ctx->r6, 0X4CB4);
    // 0x80272618: jal         0x8004CFD8
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004CFD8(rdram, ctx);
        goto after_26;
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_26:
    // 0x80272620: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x80272624: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272628: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x8027262C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80272630: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80272634: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80272638: addiu       $a2, $a2, 0x4CF4
    ctx->r6 = ADD32(ctx->r6, 0X4CF4);
    // 0x8027263C: jal         0x8004D384
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D384(rdram, ctx);
        goto after_27;
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_27:
    // 0x80272644: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80272648: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x8027264C: addiu       $t0, $t0, 0x4CB4
    ctx->r8 = ADD32(ctx->r8, 0X4CB4);
    // 0x80272650: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80272654: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_80272658:
    // 0x80272658: lh          $t9, 0x9C($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X9C);
    // 0x8027265C: lb          $t8, 0x44($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X44);
    // 0x80272660: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80272664: sll         $t2, $t9, 5
    ctx->r10 = S32(ctx->r25 << 5);
    // 0x80272668: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8027266C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x80272670: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80272674: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80272678: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8027267C: addu        $t2, $s0, $t9
    ctx->r10 = ADD32(ctx->r16, ctx->r25);
    // 0x80272680: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80272684: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x80272688: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x8027268C: lbu         $t4, 0x1E($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1E);
    // 0x80272690: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    // 0x80272694: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80272698: addiu       $a1, $a1, 0x36
    ctx->r5 = ADD32(ctx->r5, 0X36);
    // 0x8027269C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802726A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802726A4: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x802726A8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802726AC: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x802726B0: lhu         $a3, 0x2($t6)
    ctx->r7 = MEM_HU(ctx->r14, 0X2);
    // 0x802726B4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802726B8: lh          $a2, 0x2($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X2);
    // 0x802726BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802726C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802726C4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802726C8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x802726CC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x802726D0: jal         0x8002F6EC
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_8002F6EC(rdram, ctx);
        goto after_28;
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_28:
    // 0x802726D8: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x802726DC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x802726E0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x802726E4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802726E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802726EC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x802726F0: bne         $v1, $at, L_80272658
    if (ctx->r3 != ctx->r1) {
        // 0x802726F4: addiu       $t1, $t1, 0x20
        ctx->r9 = ADD32(ctx->r9, 0X20);
            goto L_80272658;
    }
    // 0x802726F4: addiu       $t1, $t1, 0x20
    ctx->r9 = ADD32(ctx->r9, 0X20);
    // 0x802726F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802726FC:
    // 0x802726FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80272700: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80272704: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80272708: jr          $ra
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_8026F480_func_802720A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802720A4: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
    // 0x802720A8: jal         0x8027287C
    // 0x802720AC: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_0;
    // 0x802720AC: nop

    after_0:
    // 0x802720B0: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x802720B4: nop

    // 0x802720B8: lhu         $t8, 0x3C($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X3C);
    // 0x802720BC: addiu       $s0, $s0, 0x2C
    ctx->r16 = ADD32(ctx->r16, 0X2C);
    // 0x802720C0: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x802720C4: bgez        $t8, L_802720E0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802720C8: cvt.d.w     $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
            goto L_802720E0;
    }
    // 0x802720C8: cvt.d.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
    // 0x802720CC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802720D0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802720D4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802720D8: nop

    // 0x802720DC: add.d       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = ctx->f12.d + ctx->f18.d;
L_802720E0:
    // 0x802720E0: jal         0x8027287C
    // 0x802720E4: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_1;
    // 0x802720E4: nop

    after_1:
    // 0x802720E8: lbu         $t9, 0x2($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2);
    // 0x802720EC: nop

    // 0x802720F0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x802720F4: bgez        $t9, L_80272110
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802720F8: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_80272110;
    }
    // 0x802720F8: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x802720FC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272100: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80272104: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272108: nop

    // 0x8027210C: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_80272110:
    // 0x80272110: jal         0x8027287C
    // 0x80272114: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_2;
    // 0x80272114: nop

    after_2:
    // 0x80272118: lbu         $t2, 0x3($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3);
    // 0x8027211C: nop

    // 0x80272120: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80272124: bgez        $t2, L_80272140
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80272128: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_80272140;
    }
    // 0x80272128: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x8027212C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272130: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80272134: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80272138: nop

    // 0x8027213C: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_80272140:
    // 0x80272140: jal         0x8027287C
    // 0x80272144: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_3;
    // 0x80272144: nop

    after_3:
    // 0x80272148: lhu         $t3, 0x8($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X8);
    // 0x8027214C: nop

    // 0x80272150: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80272154: bgez        $t3, L_80272170
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80272158: cvt.d.w     $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
            goto L_80272170;
    }
    // 0x80272158: cvt.d.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
    // 0x8027215C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272160: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80272164: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80272168: nop

    // 0x8027216C: add.d       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = ctx->f12.d + ctx->f18.d;
L_80272170:
    // 0x80272170: jal         0x8027287C
    // 0x80272174: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_4;
    // 0x80272174: nop

    after_4:
    // 0x80272178: lhu         $t4, 0xA($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XA);
    // 0x8027217C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272180: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80272184: bgez        $t4, L_8027219C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80272188: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_8027219C;
    }
    // 0x80272188: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x8027218C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80272190: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272194: nop

    // 0x80272198: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_8027219C:
    // 0x8027219C: jal         0x8027287C
    // 0x802721A0: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_5;
    // 0x802721A0: nop

    after_5:
    // 0x802721A4: lbu         $t5, 0x6($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X6);
    // 0x802721A8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802721AC: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x802721B0: bgez        $t5, L_802721C8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x802721B4: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_802721C8;
    }
    // 0x802721B4: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x802721B8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802721BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802721C0: nop

    // 0x802721C4: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_802721C8:
    // 0x802721C8: jal         0x8027287C
    // 0x802721CC: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_6;
    // 0x802721CC: nop

    after_6:
    // 0x802721D0: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
    // 0x802721D4: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x802721D8: bne         $t6, $zero, L_802721F0
    if (ctx->r14 != 0) {
        // 0x802721DC: lui         $at, 0x4059
        ctx->r1 = S32(0X4059 << 16);
            goto L_802721F0;
    }
    // 0x802721DC: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802721E0: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x802721E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802721E8: b           L_80272288
    // 0x802721EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272288;
    // 0x802721EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802721F0:
    // 0x802721F0: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x802721F4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802721F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802721FC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80272200: cvt.d.s     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.d = CVT_D_S(ctx->f16.fl);
    // 0x80272204: mul.d       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f12.d, ctx->f4.d);
    // 0x80272208: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8027220C: lwc1        $f9, 0x4E50($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4E50);
    // 0x80272210: lwc1        $f8, 0x4E54($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4E54);
    // 0x80272214: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80272218: mul.d       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f12.d, ctx->f8.d);
    // 0x8027221C: cvt.d.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.d = CVT_D_W(ctx->f18.u32l);
    // 0x80272220: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272224: div.d       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x80272228: nop

    // 0x8027222C: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x80272230: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80272234: nop

    // 0x80272238: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8027223C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272240: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272244: nop

    // 0x80272248: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x8027224C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80272250: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80272254: div         $zero, $t9, $s1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r17)));
    // 0x80272258: bne         $s1, $zero, L_80272264
    if (ctx->r17 != 0) {
        // 0x8027225C: nop
    
            goto L_80272264;
    }
    // 0x8027225C: nop

    // 0x80272260: break       7
    do_break(2150048352);
L_80272264:
    // 0x80272264: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272268: bne         $s1, $at, L_8027227C
    if (ctx->r17 != ctx->r1) {
        // 0x8027226C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027227C;
    }
    // 0x8027226C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272270: bne         $t9, $at, L_8027227C
    if (ctx->r25 != ctx->r1) {
        // 0x80272274: nop
    
            goto L_8027227C;
    }
    // 0x80272274: nop

    // 0x80272278: break       6
    do_break(2150048376);
L_8027227C:
    // 0x8027227C: mfhi        $s2
    ctx->r18 = hi;
    // 0x80272280: nop

    // 0x80272284: nop

L_80272288:
    // 0x80272288: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8027228C: nop

    // 0x80272290: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80272294: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272298: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027229C: nop

    // 0x802722A0: cvt.w.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = CVT_W_D(ctx->f2.d);
    // 0x802722A4: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x802722A8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802722AC: jal         0x80272818
    // 0x802722B0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_7;
    // 0x802722B0: nop

    after_7:
    // 0x802722B4: jal         0x80272818
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_8;
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_8:
    // 0x802722BC: lhu         $t3, 0xC($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XC);
    // 0x802722C0: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802722C4: bne         $t3, $zero, L_802722DC
    if (ctx->r11 != 0) {
        // 0x802722C8: nop
    
            goto L_802722DC;
    }
    // 0x802722C8: nop

    // 0x802722CC: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x802722D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802722D4: b           L_80272374
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272374;
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802722DC:
    // 0x802722DC: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802722E0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802722E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802722E8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802722EC: cvt.d.s     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f12.d = CVT_D_S(ctx->f6.fl);
    // 0x802722F0: mul.d       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f12.d, ctx->f10.d);
    // 0x802722F4: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x802722F8: lwc1        $f19, 0x4E58($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4E58);
    // 0x802722FC: lwc1        $f18, 0x4E5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4E5C);
    // 0x80272300: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80272304: mul.d       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f12.d, ctx->f18.d);
    // 0x80272308: cvt.d.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.d = CVT_D_W(ctx->f8.u32l);
    // 0x8027230C: nop

    // 0x80272310: div.d       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80272314: nop

    // 0x80272318: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x8027231C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80272320: nop

    // 0x80272324: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80272328: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8027232C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272330: nop

    // 0x80272334: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80272338: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8027233C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80272340: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272344: bne         $s1, $zero, L_80272350
    if (ctx->r17 != 0) {
        // 0x80272348: nop
    
            goto L_80272350;
    }
    // 0x80272348: nop

    // 0x8027234C: break       7
    do_break(2150048588);
L_80272350:
    // 0x80272350: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272354: bne         $s1, $at, L_80272368
    if (ctx->r17 != ctx->r1) {
        // 0x80272358: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272368;
    }
    // 0x80272358: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8027235C: bne         $t6, $at, L_80272368
    if (ctx->r14 != ctx->r1) {
        // 0x80272360: nop
    
            goto L_80272368;
    }
    // 0x80272360: nop

    // 0x80272364: break       6
    do_break(2150048612);
L_80272368:
    // 0x80272368: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027236C: nop

    // 0x80272370: nop

L_80272374:
    // 0x80272374: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80272378: nop

    // 0x8027237C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80272380: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272384: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272388: nop

    // 0x8027238C: cvt.w.d     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_D(ctx->f2.d);
    // 0x80272390: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80272394: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80272398: jal         0x80272818
    // 0x8027239C: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_9;
    // 0x8027239C: nop

    after_9:
    // 0x802723A0: jal         0x80272818
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_10;
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_10:
    // 0x802723A8: b           L_802726FC
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802723B0: addiu       $s0, $v1, 0x2C
    ctx->r16 = ADD32(ctx->r3, 0X2C);
    // 0x802723B4: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x802723B8: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x802723BC: slti        $at, $v0, 0x58D
    ctx->r1 = SIGNED(ctx->r2) < 0X58D ? 1 : 0;
    // 0x802723C0: bne         $at, $zero, L_80272438
    if (ctx->r1 != 0) {
        // 0x802723C4: nop
    
            goto L_80272438;
    }
    // 0x802723C4: nop

    // 0x802723C8: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802723CC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802723D0: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802723D4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x802723D8: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x802723DC: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x802723E0: addiu       $t2, $t2, -0x3770
    ctx->r10 = ADD32(ctx->r10, -0X3770);
    // 0x802723E4: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802723E8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x802723EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802723F0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802723F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802723F8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x802723FC: sh          $t7, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r15;
    // 0x80272400: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80272404: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80272408: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8027240C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80272410: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272414: addu        $a0, $t9, $t2
    ctx->r4 = ADD32(ctx->r25, ctx->r10);
    // 0x80272418: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x8027241C: jal         0x8002F528
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    func_8002F528(rdram, ctx);
        goto after_11;
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    after_11:
    // 0x80272424: lh          $t8, 0x9E($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X9E);
    // 0x80272428: nop

    // 0x8027242C: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x80272430: b           L_802724A4
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
        goto L_802724A4;
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
L_80272438:
    // 0x80272438: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8027243C: bne         $v1, $zero, L_80272448
    if (ctx->r3 != 0) {
        // 0x80272440: nop
    
            goto L_80272448;
    }
    // 0x80272440: nop

    // 0x80272444: break       7
    do_break(2150048836);
L_80272448:
    // 0x80272448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027244C: bne         $v1, $at, L_80272460
    if (ctx->r3 != ctx->r1) {
        // 0x80272450: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272460;
    }
    // 0x80272450: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272454: bne         $v0, $at, L_80272460
    if (ctx->r2 != ctx->r1) {
        // 0x80272458: nop
    
            goto L_80272460;
    }
    // 0x80272458: nop

    // 0x8027245C: break       6
    do_break(2150048860);
L_80272460:
    // 0x80272460: mflo        $t2
    ctx->r10 = lo;
    // 0x80272464: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80272468: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027246C: cvt.d.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.d = CVT_D_W(ctx->f16.u32l);
    // 0x80272470: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80272474: nop

    // 0x80272478: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8027247C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272480: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272484: nop

    // 0x80272488: cvt.w.d     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_D(ctx->f2.d);
    // 0x8027248C: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80272490: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80272494: jal         0x80272818
    // 0x80272498: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_12;
    // 0x80272498: nop

    after_12:
    // 0x8027249C: jal         0x80272818
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_13;
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_13:
L_802724A4:
    // 0x802724A4: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
    // 0x802724A8: nop

    // 0x802724AC: bne         $v0, $zero, L_80272524
    if (ctx->r2 != 0) {
        // 0x802724B0: nop
    
            goto L_80272524;
    }
    // 0x802724B0: nop

    // 0x802724B4: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802724B8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802724BC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802724C0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x802724C4: sll         $t4, $v0, 5
    ctx->r12 = S32(ctx->r2 << 5);
    // 0x802724C8: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x802724CC: addiu       $t6, $t6, -0x3770
    ctx->r14 = ADD32(ctx->r14, -0X3770);
    // 0x802724D0: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802724D4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802724D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802724DC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802724E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802724E4: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x802724E8: sh          $t3, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r11;
    // 0x802724EC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802724F0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802724F4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802724F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802724FC: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272500: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x80272504: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x80272508: jal         0x8002F528
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    func_8002F528(rdram, ctx);
        goto after_14;
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    after_14:
    // 0x80272510: lh          $t4, 0x9E($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X9E);
    // 0x80272514: nop

    // 0x80272518: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x8027251C: b           L_80272598
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
        goto L_80272598;
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
L_80272524:
    // 0x80272524: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272528: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x8027252C: bne         $s1, $zero, L_80272538
    if (ctx->r17 != 0) {
        // 0x80272530: nop
    
            goto L_80272538;
    }
    // 0x80272530: nop

    // 0x80272534: break       7
    do_break(2150049076);
L_80272538:
    // 0x80272538: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027253C: bne         $s1, $at, L_80272550
    if (ctx->r17 != ctx->r1) {
        // 0x80272540: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272550;
    }
    // 0x80272540: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272544: bne         $v0, $at, L_80272550
    if (ctx->r2 != ctx->r1) {
        // 0x80272548: nop
    
            goto L_80272550;
    }
    // 0x80272548: nop

    // 0x8027254C: break       6
    do_break(2150049100);
L_80272550:
    // 0x80272550: mflo        $a0
    ctx->r4 = lo;
    // 0x80272554: jal         0x80272818
    // 0x80272558: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_15;
    // 0x80272558: nop

    after_15:
    // 0x8027255C: lhu         $t6, 0x22($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X22);
    // 0x80272560: nop

    // 0x80272564: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272568: bne         $s1, $zero, L_80272574
    if (ctx->r17 != 0) {
        // 0x8027256C: nop
    
            goto L_80272574;
    }
    // 0x8027256C: nop

    // 0x80272570: break       7
    do_break(2150049136);
L_80272574:
    // 0x80272574: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272578: bne         $s1, $at, L_8027258C
    if (ctx->r17 != ctx->r1) {
        // 0x8027257C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027258C;
    }
    // 0x8027257C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272580: bne         $t6, $at, L_8027258C
    if (ctx->r14 != ctx->r1) {
        // 0x80272584: nop
    
            goto L_8027258C;
    }
    // 0x80272584: nop

    // 0x80272588: break       6
    do_break(2150049160);
L_8027258C:
    // 0x8027258C: mfhi        $a0
    ctx->r4 = hi;
    // 0x80272590: jal         0x80272818
    // 0x80272594: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_16;
    // 0x80272594: nop

    after_16:
L_80272598:
    // 0x80272598: lbu         $a0, 0x25($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X25);
    // 0x8027259C: jal         0x80272818
    // 0x802725A0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_17;
    // 0x802725A0: nop

    after_17:
    // 0x802725A4: lbu         $a0, 0x27($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X27);
    // 0x802725A8: jal         0x80272818
    // 0x802725AC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_18;
    // 0x802725AC: nop

    after_18:
    // 0x802725B0: lbu         $a0, 0x2B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2B);
    // 0x802725B4: jal         0x80272818
    // 0x802725B8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_19;
    // 0x802725B8: nop

    after_19:
    // 0x802725BC: lbu         $a0, 0x2C($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2C);
    // 0x802725C0: jal         0x80272818
    // 0x802725C4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_20;
    // 0x802725C4: nop

    after_20:
    // 0x802725C8: lbu         $a0, 0x2D($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2D);
    // 0x802725CC: jal         0x80272818
    // 0x802725D0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_21;
    // 0x802725D0: nop

    after_21:
    // 0x802725D4: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x802725D8: jal         0x80272818
    // 0x802725DC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_22;
    // 0x802725DC: nop

    after_22:
    // 0x802725E0: lbu         $a0, 0x4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4);
    // 0x802725E4: jal         0x80272818
    // 0x802725E8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_23;
    // 0x802725E8: nop

    after_23:
    // 0x802725EC: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x802725F0: jal         0x80272818
    // 0x802725F4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_24;
    // 0x802725F4: nop

    after_24:
    // 0x802725F8: b           L_802726FC
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80272600: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x80272604: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272608: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8027260C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80272610: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80272614: addiu       $a2, $a2, 0x4CB4
    ctx->r6 = ADD32(ctx->r6, 0X4CB4);
    // 0x80272618: jal         0x8004CFD8
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004CFD8(rdram, ctx);
        goto after_25;
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_25:
    // 0x80272620: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x80272624: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272628: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x8027262C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80272630: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80272634: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80272638: addiu       $a2, $a2, 0x4CF4
    ctx->r6 = ADD32(ctx->r6, 0X4CF4);
    // 0x8027263C: jal         0x8004D384
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D384(rdram, ctx);
        goto after_26;
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_26:
    // 0x80272644: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80272648: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x8027264C: addiu       $t0, $t0, 0x4CB4
    ctx->r8 = ADD32(ctx->r8, 0X4CB4);
    // 0x80272650: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80272654: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_80272658:
    // 0x80272658: lh          $t9, 0x9C($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X9C);
    // 0x8027265C: lb          $t8, 0x44($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X44);
    // 0x80272660: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80272664: sll         $t2, $t9, 5
    ctx->r10 = S32(ctx->r25 << 5);
    // 0x80272668: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8027266C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x80272670: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80272674: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80272678: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8027267C: addu        $t2, $s0, $t9
    ctx->r10 = ADD32(ctx->r16, ctx->r25);
    // 0x80272680: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80272684: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x80272688: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x8027268C: lbu         $t4, 0x1E($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1E);
    // 0x80272690: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    // 0x80272694: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80272698: addiu       $a1, $a1, 0x36
    ctx->r5 = ADD32(ctx->r5, 0X36);
    // 0x8027269C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802726A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802726A4: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x802726A8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802726AC: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x802726B0: lhu         $a3, 0x2($t6)
    ctx->r7 = MEM_HU(ctx->r14, 0X2);
    // 0x802726B4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802726B8: lh          $a2, 0x2($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X2);
    // 0x802726BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802726C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802726C4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802726C8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x802726CC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x802726D0: jal         0x8002F6EC
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_8002F6EC(rdram, ctx);
        goto after_27;
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_27:
    // 0x802726D8: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x802726DC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x802726E0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x802726E4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802726E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802726EC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x802726F0: bne         $v1, $at, L_80272658
    if (ctx->r3 != ctx->r1) {
        // 0x802726F4: addiu       $t1, $t1, 0x20
        ctx->r9 = ADD32(ctx->r9, 0X20);
            goto L_80272658;
    }
    // 0x802726F4: addiu       $t1, $t1, 0x20
    ctx->r9 = ADD32(ctx->r9, 0X20);
    // 0x802726F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802726FC:
    // 0x802726FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80272700: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80272704: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80272708: jr          $ra
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_8026F480_func_802720BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802720BC: addiu       $s0, $s0, 0x2C
    ctx->r16 = ADD32(ctx->r16, 0X2C);
    // 0x802720C0: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x802720C4: bgez        $t8, L_802720E0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802720C8: cvt.d.w     $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
            goto L_802720E0;
    }
    // 0x802720C8: cvt.d.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
    // 0x802720CC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802720D0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802720D4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802720D8: nop

    // 0x802720DC: add.d       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = ctx->f12.d + ctx->f18.d;
L_802720E0:
    // 0x802720E0: jal         0x8027287C
    // 0x802720E4: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_0;
    // 0x802720E4: nop

    after_0:
    // 0x802720E8: lbu         $t9, 0x2($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2);
    // 0x802720EC: nop

    // 0x802720F0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x802720F4: bgez        $t9, L_80272110
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802720F8: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_80272110;
    }
    // 0x802720F8: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x802720FC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272100: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80272104: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272108: nop

    // 0x8027210C: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_80272110:
    // 0x80272110: jal         0x8027287C
    // 0x80272114: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_1;
    // 0x80272114: nop

    after_1:
    // 0x80272118: lbu         $t2, 0x3($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3);
    // 0x8027211C: nop

    // 0x80272120: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80272124: bgez        $t2, L_80272140
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80272128: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_80272140;
    }
    // 0x80272128: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x8027212C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272130: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80272134: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80272138: nop

    // 0x8027213C: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_80272140:
    // 0x80272140: jal         0x8027287C
    // 0x80272144: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_2;
    // 0x80272144: nop

    after_2:
    // 0x80272148: lhu         $t3, 0x8($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X8);
    // 0x8027214C: nop

    // 0x80272150: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80272154: bgez        $t3, L_80272170
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80272158: cvt.d.w     $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
            goto L_80272170;
    }
    // 0x80272158: cvt.d.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.d = CVT_D_W(ctx->f16.u32l);
    // 0x8027215C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272160: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80272164: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80272168: nop

    // 0x8027216C: add.d       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f12.d = ctx->f12.d + ctx->f18.d;
L_80272170:
    // 0x80272170: jal         0x8027287C
    // 0x80272174: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_3;
    // 0x80272174: nop

    after_3:
    // 0x80272178: lhu         $t4, 0xA($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XA);
    // 0x8027217C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80272180: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80272184: bgez        $t4, L_8027219C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80272188: cvt.d.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
            goto L_8027219C;
    }
    // 0x80272188: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x8027218C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80272190: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80272194: nop

    // 0x80272198: add.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = ctx->f12.d + ctx->f6.d;
L_8027219C:
    // 0x8027219C: jal         0x8027287C
    // 0x802721A0: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_4;
    // 0x802721A0: nop

    after_4:
    // 0x802721A4: lbu         $t5, 0x6($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X6);
    // 0x802721A8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802721AC: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x802721B0: bgez        $t5, L_802721C8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x802721B4: cvt.d.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
            goto L_802721C8;
    }
    // 0x802721B4: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x802721B8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802721BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802721C0: nop

    // 0x802721C4: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
L_802721C8:
    // 0x802721C8: jal         0x8027287C
    // 0x802721CC: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_5;
    // 0x802721CC: nop

    after_5:
    // 0x802721D0: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
    // 0x802721D4: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x802721D8: bne         $t6, $zero, L_802721F0
    if (ctx->r14 != 0) {
        // 0x802721DC: lui         $at, 0x4059
        ctx->r1 = S32(0X4059 << 16);
            goto L_802721F0;
    }
    // 0x802721DC: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802721E0: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x802721E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802721E8: b           L_80272288
    // 0x802721EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272288;
    // 0x802721EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802721F0:
    // 0x802721F0: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x802721F4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802721F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802721FC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80272200: cvt.d.s     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.d = CVT_D_S(ctx->f16.fl);
    // 0x80272204: mul.d       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f12.d, ctx->f4.d);
    // 0x80272208: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8027220C: lwc1        $f9, 0x4E50($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4E50);
    // 0x80272210: lwc1        $f8, 0x4E54($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4E54);
    // 0x80272214: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80272218: mul.d       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f12.d, ctx->f8.d);
    // 0x8027221C: cvt.d.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.d = CVT_D_W(ctx->f18.u32l);
    // 0x80272220: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272224: div.d       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x80272228: nop

    // 0x8027222C: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x80272230: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80272234: nop

    // 0x80272238: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8027223C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272240: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272244: nop

    // 0x80272248: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x8027224C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80272250: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80272254: div         $zero, $t9, $s1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r17)));
    // 0x80272258: bne         $s1, $zero, L_80272264
    if (ctx->r17 != 0) {
        // 0x8027225C: nop
    
            goto L_80272264;
    }
    // 0x8027225C: nop

    // 0x80272260: break       7
    do_break(2150048352);
L_80272264:
    // 0x80272264: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272268: bne         $s1, $at, L_8027227C
    if (ctx->r17 != ctx->r1) {
        // 0x8027226C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027227C;
    }
    // 0x8027226C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272270: bne         $t9, $at, L_8027227C
    if (ctx->r25 != ctx->r1) {
        // 0x80272274: nop
    
            goto L_8027227C;
    }
    // 0x80272274: nop

    // 0x80272278: break       6
    do_break(2150048376);
L_8027227C:
    // 0x8027227C: mfhi        $s2
    ctx->r18 = hi;
    // 0x80272280: nop

    // 0x80272284: nop

L_80272288:
    // 0x80272288: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8027228C: nop

    // 0x80272290: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80272294: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272298: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027229C: nop

    // 0x802722A0: cvt.w.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = CVT_W_D(ctx->f2.d);
    // 0x802722A4: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x802722A8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802722AC: jal         0x80272818
    // 0x802722B0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_6;
    // 0x802722B0: nop

    after_6:
    // 0x802722B4: jal         0x80272818
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_7;
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_7:
    // 0x802722BC: lhu         $t3, 0xC($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XC);
    // 0x802722C0: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802722C4: bne         $t3, $zero, L_802722DC
    if (ctx->r11 != 0) {
        // 0x802722C8: nop
    
            goto L_802722DC;
    }
    // 0x802722C8: nop

    // 0x802722CC: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x802722D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802722D4: b           L_80272374
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272374;
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802722DC:
    // 0x802722DC: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802722E0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802722E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802722E8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802722EC: cvt.d.s     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f12.d = CVT_D_S(ctx->f6.fl);
    // 0x802722F0: mul.d       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f12.d, ctx->f10.d);
    // 0x802722F4: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x802722F8: lwc1        $f19, 0x4E58($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4E58);
    // 0x802722FC: lwc1        $f18, 0x4E5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4E5C);
    // 0x80272300: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80272304: mul.d       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f12.d, ctx->f18.d);
    // 0x80272308: cvt.d.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.d = CVT_D_W(ctx->f8.u32l);
    // 0x8027230C: nop

    // 0x80272310: div.d       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80272314: nop

    // 0x80272318: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x8027231C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80272320: nop

    // 0x80272324: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80272328: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8027232C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272330: nop

    // 0x80272334: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80272338: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8027233C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80272340: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272344: bne         $s1, $zero, L_80272350
    if (ctx->r17 != 0) {
        // 0x80272348: nop
    
            goto L_80272350;
    }
    // 0x80272348: nop

    // 0x8027234C: break       7
    do_break(2150048588);
L_80272350:
    // 0x80272350: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272354: bne         $s1, $at, L_80272368
    if (ctx->r17 != ctx->r1) {
        // 0x80272358: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272368;
    }
    // 0x80272358: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8027235C: bne         $t6, $at, L_80272368
    if (ctx->r14 != ctx->r1) {
        // 0x80272360: nop
    
            goto L_80272368;
    }
    // 0x80272360: nop

    // 0x80272364: break       6
    do_break(2150048612);
L_80272368:
    // 0x80272368: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027236C: nop

    // 0x80272370: nop

L_80272374:
    // 0x80272374: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80272378: nop

    // 0x8027237C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80272380: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272384: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272388: nop

    // 0x8027238C: cvt.w.d     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_D(ctx->f2.d);
    // 0x80272390: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80272394: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80272398: jal         0x80272818
    // 0x8027239C: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_8;
    // 0x8027239C: nop

    after_8:
    // 0x802723A0: jal         0x80272818
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_9;
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_9:
    // 0x802723A8: b           L_802726FC
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802723B0: addiu       $s0, $v1, 0x2C
    ctx->r16 = ADD32(ctx->r3, 0X2C);
    // 0x802723B4: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x802723B8: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x802723BC: slti        $at, $v0, 0x58D
    ctx->r1 = SIGNED(ctx->r2) < 0X58D ? 1 : 0;
    // 0x802723C0: bne         $at, $zero, L_80272438
    if (ctx->r1 != 0) {
        // 0x802723C4: nop
    
            goto L_80272438;
    }
    // 0x802723C4: nop

    // 0x802723C8: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802723CC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802723D0: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802723D4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x802723D8: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x802723DC: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x802723E0: addiu       $t2, $t2, -0x3770
    ctx->r10 = ADD32(ctx->r10, -0X3770);
    // 0x802723E4: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802723E8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x802723EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802723F0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802723F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802723F8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x802723FC: sh          $t7, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r15;
    // 0x80272400: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80272404: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80272408: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8027240C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80272410: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272414: addu        $a0, $t9, $t2
    ctx->r4 = ADD32(ctx->r25, ctx->r10);
    // 0x80272418: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x8027241C: jal         0x8002F528
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    func_8002F528(rdram, ctx);
        goto after_10;
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    after_10:
    // 0x80272424: lh          $t8, 0x9E($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X9E);
    // 0x80272428: nop

    // 0x8027242C: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x80272430: b           L_802724A4
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
        goto L_802724A4;
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
L_80272438:
    // 0x80272438: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8027243C: bne         $v1, $zero, L_80272448
    if (ctx->r3 != 0) {
        // 0x80272440: nop
    
            goto L_80272448;
    }
    // 0x80272440: nop

    // 0x80272444: break       7
    do_break(2150048836);
L_80272448:
    // 0x80272448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027244C: bne         $v1, $at, L_80272460
    if (ctx->r3 != ctx->r1) {
        // 0x80272450: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272460;
    }
    // 0x80272450: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272454: bne         $v0, $at, L_80272460
    if (ctx->r2 != ctx->r1) {
        // 0x80272458: nop
    
            goto L_80272460;
    }
    // 0x80272458: nop

    // 0x8027245C: break       6
    do_break(2150048860);
L_80272460:
    // 0x80272460: mflo        $t2
    ctx->r10 = lo;
    // 0x80272464: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80272468: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027246C: cvt.d.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.d = CVT_D_W(ctx->f16.u32l);
    // 0x80272470: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80272474: nop

    // 0x80272478: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8027247C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272480: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272484: nop

    // 0x80272488: cvt.w.d     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_D(ctx->f2.d);
    // 0x8027248C: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80272490: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80272494: jal         0x80272818
    // 0x80272498: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_11;
    // 0x80272498: nop

    after_11:
    // 0x8027249C: jal         0x80272818
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_12;
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_12:
L_802724A4:
    // 0x802724A4: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
    // 0x802724A8: nop

    // 0x802724AC: bne         $v0, $zero, L_80272524
    if (ctx->r2 != 0) {
        // 0x802724B0: nop
    
            goto L_80272524;
    }
    // 0x802724B0: nop

    // 0x802724B4: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802724B8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802724BC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802724C0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x802724C4: sll         $t4, $v0, 5
    ctx->r12 = S32(ctx->r2 << 5);
    // 0x802724C8: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x802724CC: addiu       $t6, $t6, -0x3770
    ctx->r14 = ADD32(ctx->r14, -0X3770);
    // 0x802724D0: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802724D4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802724D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802724DC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802724E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802724E4: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x802724E8: sh          $t3, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r11;
    // 0x802724EC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802724F0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802724F4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802724F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802724FC: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272500: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x80272504: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x80272508: jal         0x8002F528
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    func_8002F528(rdram, ctx);
        goto after_13;
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    after_13:
    // 0x80272510: lh          $t4, 0x9E($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X9E);
    // 0x80272514: nop

    // 0x80272518: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x8027251C: b           L_80272598
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
        goto L_80272598;
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
L_80272524:
    // 0x80272524: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272528: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x8027252C: bne         $s1, $zero, L_80272538
    if (ctx->r17 != 0) {
        // 0x80272530: nop
    
            goto L_80272538;
    }
    // 0x80272530: nop

    // 0x80272534: break       7
    do_break(2150049076);
L_80272538:
    // 0x80272538: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027253C: bne         $s1, $at, L_80272550
    if (ctx->r17 != ctx->r1) {
        // 0x80272540: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272550;
    }
    // 0x80272540: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272544: bne         $v0, $at, L_80272550
    if (ctx->r2 != ctx->r1) {
        // 0x80272548: nop
    
            goto L_80272550;
    }
    // 0x80272548: nop

    // 0x8027254C: break       6
    do_break(2150049100);
L_80272550:
    // 0x80272550: mflo        $a0
    ctx->r4 = lo;
    // 0x80272554: jal         0x80272818
    // 0x80272558: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_14;
    // 0x80272558: nop

    after_14:
    // 0x8027255C: lhu         $t6, 0x22($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X22);
    // 0x80272560: nop

    // 0x80272564: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272568: bne         $s1, $zero, L_80272574
    if (ctx->r17 != 0) {
        // 0x8027256C: nop
    
            goto L_80272574;
    }
    // 0x8027256C: nop

    // 0x80272570: break       7
    do_break(2150049136);
L_80272574:
    // 0x80272574: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272578: bne         $s1, $at, L_8027258C
    if (ctx->r17 != ctx->r1) {
        // 0x8027257C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027258C;
    }
    // 0x8027257C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272580: bne         $t6, $at, L_8027258C
    if (ctx->r14 != ctx->r1) {
        // 0x80272584: nop
    
            goto L_8027258C;
    }
    // 0x80272584: nop

    // 0x80272588: break       6
    do_break(2150049160);
L_8027258C:
    // 0x8027258C: mfhi        $a0
    ctx->r4 = hi;
    // 0x80272590: jal         0x80272818
    // 0x80272594: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_15;
    // 0x80272594: nop

    after_15:
L_80272598:
    // 0x80272598: lbu         $a0, 0x25($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X25);
    // 0x8027259C: jal         0x80272818
    // 0x802725A0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_16;
    // 0x802725A0: nop

    after_16:
    // 0x802725A4: lbu         $a0, 0x27($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X27);
    // 0x802725A8: jal         0x80272818
    // 0x802725AC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_17;
    // 0x802725AC: nop

    after_17:
    // 0x802725B0: lbu         $a0, 0x2B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2B);
    // 0x802725B4: jal         0x80272818
    // 0x802725B8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_18;
    // 0x802725B8: nop

    after_18:
    // 0x802725BC: lbu         $a0, 0x2C($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2C);
    // 0x802725C0: jal         0x80272818
    // 0x802725C4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_19;
    // 0x802725C4: nop

    after_19:
    // 0x802725C8: lbu         $a0, 0x2D($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2D);
    // 0x802725CC: jal         0x80272818
    // 0x802725D0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_20;
    // 0x802725D0: nop

    after_20:
    // 0x802725D4: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x802725D8: jal         0x80272818
    // 0x802725DC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_21;
    // 0x802725DC: nop

    after_21:
    // 0x802725E0: lbu         $a0, 0x4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4);
    // 0x802725E4: jal         0x80272818
    // 0x802725E8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_22;
    // 0x802725E8: nop

    after_22:
    // 0x802725EC: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x802725F0: jal         0x80272818
    // 0x802725F4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_23;
    // 0x802725F4: nop

    after_23:
    // 0x802725F8: b           L_802726FC
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80272600: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x80272604: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272608: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8027260C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80272610: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80272614: addiu       $a2, $a2, 0x4CB4
    ctx->r6 = ADD32(ctx->r6, 0X4CB4);
    // 0x80272618: jal         0x8004CFD8
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004CFD8(rdram, ctx);
        goto after_24;
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_24:
    // 0x80272620: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x80272624: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272628: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x8027262C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80272630: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80272634: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80272638: addiu       $a2, $a2, 0x4CF4
    ctx->r6 = ADD32(ctx->r6, 0X4CF4);
    // 0x8027263C: jal         0x8004D384
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D384(rdram, ctx);
        goto after_25;
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_25:
    // 0x80272644: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80272648: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x8027264C: addiu       $t0, $t0, 0x4CB4
    ctx->r8 = ADD32(ctx->r8, 0X4CB4);
    // 0x80272650: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80272654: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_80272658:
    // 0x80272658: lh          $t9, 0x9C($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X9C);
    // 0x8027265C: lb          $t8, 0x44($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X44);
    // 0x80272660: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80272664: sll         $t2, $t9, 5
    ctx->r10 = S32(ctx->r25 << 5);
    // 0x80272668: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8027266C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x80272670: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80272674: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80272678: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8027267C: addu        $t2, $s0, $t9
    ctx->r10 = ADD32(ctx->r16, ctx->r25);
    // 0x80272680: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80272684: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x80272688: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x8027268C: lbu         $t4, 0x1E($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1E);
    // 0x80272690: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    // 0x80272694: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80272698: addiu       $a1, $a1, 0x36
    ctx->r5 = ADD32(ctx->r5, 0X36);
    // 0x8027269C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802726A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802726A4: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x802726A8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802726AC: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x802726B0: lhu         $a3, 0x2($t6)
    ctx->r7 = MEM_HU(ctx->r14, 0X2);
    // 0x802726B4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802726B8: lh          $a2, 0x2($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X2);
    // 0x802726BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802726C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802726C4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802726C8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x802726CC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x802726D0: jal         0x8002F6EC
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_8002F6EC(rdram, ctx);
        goto after_26;
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_26:
    // 0x802726D8: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x802726DC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x802726E0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x802726E4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802726E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802726EC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x802726F0: bne         $v1, $at, L_80272658
    if (ctx->r3 != ctx->r1) {
        // 0x802726F4: addiu       $t1, $t1, 0x20
        ctx->r9 = ADD32(ctx->r9, 0X20);
            goto L_80272658;
    }
    // 0x802726F4: addiu       $t1, $t1, 0x20
    ctx->r9 = ADD32(ctx->r9, 0X20);
    // 0x802726F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802726FC:
    // 0x802726FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80272700: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80272704: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80272708: jr          $ra
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_8026F480_func_802721C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802721C0: nop

    // 0x802721C4: add.d       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f12.d = ctx->f12.d + ctx->f10.d;
    // 0x802721C8: jal         0x8027287C
    // 0x802721CC: nop

    ovl_8026F480_func_8027287C(rdram, ctx);
        goto after_0;
    // 0x802721CC: nop

    after_0:
    // 0x802721D0: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
    // 0x802721D4: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x802721D8: bne         $t6, $zero, L_802721F0
    if (ctx->r14 != 0) {
        // 0x802721DC: lui         $at, 0x4059
        ctx->r1 = S32(0X4059 << 16);
            goto L_802721F0;
    }
    // 0x802721DC: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802721E0: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x802721E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802721E8: b           L_80272288
    // 0x802721EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272288;
    // 0x802721EC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802721F0:
    // 0x802721F0: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x802721F4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802721F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802721FC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80272200: cvt.d.s     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.d = CVT_D_S(ctx->f16.fl);
    // 0x80272204: mul.d       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f12.d, ctx->f4.d);
    // 0x80272208: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8027220C: lwc1        $f9, 0x4E50($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4E50);
    // 0x80272210: lwc1        $f8, 0x4E54($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4E54);
    // 0x80272214: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80272218: mul.d       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f12.d, ctx->f8.d);
    // 0x8027221C: cvt.d.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.d = CVT_D_W(ctx->f18.u32l);
    // 0x80272220: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272224: div.d       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x80272228: nop

    // 0x8027222C: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x80272230: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80272234: nop

    // 0x80272238: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8027223C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272240: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272244: nop

    // 0x80272248: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x8027224C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80272250: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80272254: div         $zero, $t9, $s1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r17)));
    // 0x80272258: bne         $s1, $zero, L_80272264
    if (ctx->r17 != 0) {
        // 0x8027225C: nop
    
            goto L_80272264;
    }
    // 0x8027225C: nop

    // 0x80272260: break       7
    do_break(2150048352);
L_80272264:
    // 0x80272264: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272268: bne         $s1, $at, L_8027227C
    if (ctx->r17 != ctx->r1) {
        // 0x8027226C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027227C;
    }
    // 0x8027226C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272270: bne         $t9, $at, L_8027227C
    if (ctx->r25 != ctx->r1) {
        // 0x80272274: nop
    
            goto L_8027227C;
    }
    // 0x80272274: nop

    // 0x80272278: break       6
    do_break(2150048376);
L_8027227C:
    // 0x8027227C: mfhi        $s2
    ctx->r18 = hi;
    // 0x80272280: nop

    // 0x80272284: nop

L_80272288:
    // 0x80272288: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8027228C: nop

    // 0x80272290: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80272294: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272298: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027229C: nop

    // 0x802722A0: cvt.w.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = CVT_W_D(ctx->f2.d);
    // 0x802722A4: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x802722A8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802722AC: jal         0x80272818
    // 0x802722B0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_1;
    // 0x802722B0: nop

    after_1:
    // 0x802722B4: jal         0x80272818
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_2;
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x802722BC: lhu         $t3, 0xC($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XC);
    // 0x802722C0: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802722C4: bne         $t3, $zero, L_802722DC
    if (ctx->r11 != 0) {
        // 0x802722C8: nop
    
            goto L_802722DC;
    }
    // 0x802722C8: nop

    // 0x802722CC: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x802722D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802722D4: b           L_80272374
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272374;
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802722DC:
    // 0x802722DC: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802722E0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802722E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802722E8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802722EC: cvt.d.s     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f12.d = CVT_D_S(ctx->f6.fl);
    // 0x802722F0: mul.d       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f12.d, ctx->f10.d);
    // 0x802722F4: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x802722F8: lwc1        $f19, 0x4E58($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4E58);
    // 0x802722FC: lwc1        $f18, 0x4E5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4E5C);
    // 0x80272300: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80272304: mul.d       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f12.d, ctx->f18.d);
    // 0x80272308: cvt.d.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.d = CVT_D_W(ctx->f8.u32l);
    // 0x8027230C: nop

    // 0x80272310: div.d       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80272314: nop

    // 0x80272318: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x8027231C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80272320: nop

    // 0x80272324: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80272328: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8027232C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272330: nop

    // 0x80272334: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80272338: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8027233C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80272340: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272344: bne         $s1, $zero, L_80272350
    if (ctx->r17 != 0) {
        // 0x80272348: nop
    
            goto L_80272350;
    }
    // 0x80272348: nop

    // 0x8027234C: break       7
    do_break(2150048588);
L_80272350:
    // 0x80272350: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272354: bne         $s1, $at, L_80272368
    if (ctx->r17 != ctx->r1) {
        // 0x80272358: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272368;
    }
    // 0x80272358: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8027235C: bne         $t6, $at, L_80272368
    if (ctx->r14 != ctx->r1) {
        // 0x80272360: nop
    
            goto L_80272368;
    }
    // 0x80272360: nop

    // 0x80272364: break       6
    do_break(2150048612);
L_80272368:
    // 0x80272368: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027236C: nop

    // 0x80272370: nop

L_80272374:
    // 0x80272374: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80272378: nop

    // 0x8027237C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80272380: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272384: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272388: nop

    // 0x8027238C: cvt.w.d     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_D(ctx->f2.d);
    // 0x80272390: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80272394: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80272398: jal         0x80272818
    // 0x8027239C: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_3;
    // 0x8027239C: nop

    after_3:
    // 0x802723A0: jal         0x80272818
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_4;
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x802723A8: b           L_802726FC
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802723B0: addiu       $s0, $v1, 0x2C
    ctx->r16 = ADD32(ctx->r3, 0X2C);
    // 0x802723B4: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x802723B8: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x802723BC: slti        $at, $v0, 0x58D
    ctx->r1 = SIGNED(ctx->r2) < 0X58D ? 1 : 0;
    // 0x802723C0: bne         $at, $zero, L_80272438
    if (ctx->r1 != 0) {
        // 0x802723C4: nop
    
            goto L_80272438;
    }
    // 0x802723C4: nop

    // 0x802723C8: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802723CC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802723D0: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802723D4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x802723D8: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x802723DC: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x802723E0: addiu       $t2, $t2, -0x3770
    ctx->r10 = ADD32(ctx->r10, -0X3770);
    // 0x802723E4: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802723E8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x802723EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802723F0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802723F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802723F8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x802723FC: sh          $t7, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r15;
    // 0x80272400: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80272404: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80272408: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8027240C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80272410: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272414: addu        $a0, $t9, $t2
    ctx->r4 = ADD32(ctx->r25, ctx->r10);
    // 0x80272418: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x8027241C: jal         0x8002F528
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    func_8002F528(rdram, ctx);
        goto after_5;
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    after_5:
    // 0x80272424: lh          $t8, 0x9E($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X9E);
    // 0x80272428: nop

    // 0x8027242C: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x80272430: b           L_802724A4
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
        goto L_802724A4;
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
L_80272438:
    // 0x80272438: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8027243C: bne         $v1, $zero, L_80272448
    if (ctx->r3 != 0) {
        // 0x80272440: nop
    
            goto L_80272448;
    }
    // 0x80272440: nop

    // 0x80272444: break       7
    do_break(2150048836);
L_80272448:
    // 0x80272448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027244C: bne         $v1, $at, L_80272460
    if (ctx->r3 != ctx->r1) {
        // 0x80272450: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272460;
    }
    // 0x80272450: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272454: bne         $v0, $at, L_80272460
    if (ctx->r2 != ctx->r1) {
        // 0x80272458: nop
    
            goto L_80272460;
    }
    // 0x80272458: nop

    // 0x8027245C: break       6
    do_break(2150048860);
L_80272460:
    // 0x80272460: mflo        $t2
    ctx->r10 = lo;
    // 0x80272464: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80272468: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027246C: cvt.d.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.d = CVT_D_W(ctx->f16.u32l);
    // 0x80272470: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80272474: nop

    // 0x80272478: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8027247C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272480: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272484: nop

    // 0x80272488: cvt.w.d     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_D(ctx->f2.d);
    // 0x8027248C: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80272490: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80272494: jal         0x80272818
    // 0x80272498: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_6;
    // 0x80272498: nop

    after_6:
    // 0x8027249C: jal         0x80272818
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_7;
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_7:
L_802724A4:
    // 0x802724A4: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
    // 0x802724A8: nop

    // 0x802724AC: bne         $v0, $zero, L_80272524
    if (ctx->r2 != 0) {
        // 0x802724B0: nop
    
            goto L_80272524;
    }
    // 0x802724B0: nop

    // 0x802724B4: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802724B8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802724BC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802724C0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x802724C4: sll         $t4, $v0, 5
    ctx->r12 = S32(ctx->r2 << 5);
    // 0x802724C8: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x802724CC: addiu       $t6, $t6, -0x3770
    ctx->r14 = ADD32(ctx->r14, -0X3770);
    // 0x802724D0: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802724D4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802724D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802724DC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802724E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802724E4: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x802724E8: sh          $t3, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r11;
    // 0x802724EC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802724F0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802724F4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802724F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802724FC: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272500: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x80272504: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x80272508: jal         0x8002F528
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    func_8002F528(rdram, ctx);
        goto after_8;
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    after_8:
    // 0x80272510: lh          $t4, 0x9E($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X9E);
    // 0x80272514: nop

    // 0x80272518: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x8027251C: b           L_80272598
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
        goto L_80272598;
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
L_80272524:
    // 0x80272524: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272528: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x8027252C: bne         $s1, $zero, L_80272538
    if (ctx->r17 != 0) {
        // 0x80272530: nop
    
            goto L_80272538;
    }
    // 0x80272530: nop

    // 0x80272534: break       7
    do_break(2150049076);
L_80272538:
    // 0x80272538: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027253C: bne         $s1, $at, L_80272550
    if (ctx->r17 != ctx->r1) {
        // 0x80272540: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272550;
    }
    // 0x80272540: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272544: bne         $v0, $at, L_80272550
    if (ctx->r2 != ctx->r1) {
        // 0x80272548: nop
    
            goto L_80272550;
    }
    // 0x80272548: nop

    // 0x8027254C: break       6
    do_break(2150049100);
L_80272550:
    // 0x80272550: mflo        $a0
    ctx->r4 = lo;
    // 0x80272554: jal         0x80272818
    // 0x80272558: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_9;
    // 0x80272558: nop

    after_9:
    // 0x8027255C: lhu         $t6, 0x22($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X22);
    // 0x80272560: nop

    // 0x80272564: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272568: bne         $s1, $zero, L_80272574
    if (ctx->r17 != 0) {
        // 0x8027256C: nop
    
            goto L_80272574;
    }
    // 0x8027256C: nop

    // 0x80272570: break       7
    do_break(2150049136);
L_80272574:
    // 0x80272574: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272578: bne         $s1, $at, L_8027258C
    if (ctx->r17 != ctx->r1) {
        // 0x8027257C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027258C;
    }
    // 0x8027257C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272580: bne         $t6, $at, L_8027258C
    if (ctx->r14 != ctx->r1) {
        // 0x80272584: nop
    
            goto L_8027258C;
    }
    // 0x80272584: nop

    // 0x80272588: break       6
    do_break(2150049160);
L_8027258C:
    // 0x8027258C: mfhi        $a0
    ctx->r4 = hi;
    // 0x80272590: jal         0x80272818
    // 0x80272594: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_10;
    // 0x80272594: nop

    after_10:
L_80272598:
    // 0x80272598: lbu         $a0, 0x25($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X25);
    // 0x8027259C: jal         0x80272818
    // 0x802725A0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_11;
    // 0x802725A0: nop

    after_11:
    // 0x802725A4: lbu         $a0, 0x27($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X27);
    // 0x802725A8: jal         0x80272818
    // 0x802725AC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_12;
    // 0x802725AC: nop

    after_12:
    // 0x802725B0: lbu         $a0, 0x2B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2B);
    // 0x802725B4: jal         0x80272818
    // 0x802725B8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_13;
    // 0x802725B8: nop

    after_13:
    // 0x802725BC: lbu         $a0, 0x2C($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2C);
    // 0x802725C0: jal         0x80272818
    // 0x802725C4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_14;
    // 0x802725C4: nop

    after_14:
    // 0x802725C8: lbu         $a0, 0x2D($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2D);
    // 0x802725CC: jal         0x80272818
    // 0x802725D0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_15;
    // 0x802725D0: nop

    after_15:
    // 0x802725D4: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x802725D8: jal         0x80272818
    // 0x802725DC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_16;
    // 0x802725DC: nop

    after_16:
    // 0x802725E0: lbu         $a0, 0x4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4);
    // 0x802725E4: jal         0x80272818
    // 0x802725E8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_17;
    // 0x802725E8: nop

    after_17:
    // 0x802725EC: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x802725F0: jal         0x80272818
    // 0x802725F4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_18;
    // 0x802725F4: nop

    after_18:
    // 0x802725F8: b           L_802726FC
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80272600: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x80272604: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272608: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8027260C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80272610: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80272614: addiu       $a2, $a2, 0x4CB4
    ctx->r6 = ADD32(ctx->r6, 0X4CB4);
    // 0x80272618: jal         0x8004CFD8
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004CFD8(rdram, ctx);
        goto after_19;
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_19:
    // 0x80272620: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x80272624: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272628: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x8027262C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80272630: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80272634: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80272638: addiu       $a2, $a2, 0x4CF4
    ctx->r6 = ADD32(ctx->r6, 0X4CF4);
    // 0x8027263C: jal         0x8004D384
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D384(rdram, ctx);
        goto after_20;
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_20:
    // 0x80272644: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80272648: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x8027264C: addiu       $t0, $t0, 0x4CB4
    ctx->r8 = ADD32(ctx->r8, 0X4CB4);
    // 0x80272650: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80272654: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_80272658:
    // 0x80272658: lh          $t9, 0x9C($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X9C);
    // 0x8027265C: lb          $t8, 0x44($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X44);
    // 0x80272660: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80272664: sll         $t2, $t9, 5
    ctx->r10 = S32(ctx->r25 << 5);
    // 0x80272668: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8027266C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x80272670: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80272674: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80272678: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8027267C: addu        $t2, $s0, $t9
    ctx->r10 = ADD32(ctx->r16, ctx->r25);
    // 0x80272680: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80272684: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x80272688: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x8027268C: lbu         $t4, 0x1E($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1E);
    // 0x80272690: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    // 0x80272694: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80272698: addiu       $a1, $a1, 0x36
    ctx->r5 = ADD32(ctx->r5, 0X36);
    // 0x8027269C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802726A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802726A4: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x802726A8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802726AC: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x802726B0: lhu         $a3, 0x2($t6)
    ctx->r7 = MEM_HU(ctx->r14, 0X2);
    // 0x802726B4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802726B8: lh          $a2, 0x2($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X2);
    // 0x802726BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802726C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802726C4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802726C8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x802726CC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x802726D0: jal         0x8002F6EC
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_8002F6EC(rdram, ctx);
        goto after_21;
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_21:
    // 0x802726D8: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x802726DC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x802726E0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x802726E4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802726E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802726EC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x802726F0: bne         $v1, $at, L_80272658
    if (ctx->r3 != ctx->r1) {
        // 0x802726F4: addiu       $t1, $t1, 0x20
        ctx->r9 = ADD32(ctx->r9, 0X20);
            goto L_80272658;
    }
    // 0x802726F4: addiu       $t1, $t1, 0x20
    ctx->r9 = ADD32(ctx->r9, 0X20);
    // 0x802726F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802726FC:
    // 0x802726FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80272700: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80272704: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80272708: jr          $ra
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_8026F480_func_802722B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802722B4: jal         0x80272818
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_0;
    // 0x802722B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x802722BC: lhu         $t3, 0xC($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XC);
    // 0x802722C0: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802722C4: bne         $t3, $zero, L_802722DC
    if (ctx->r11 != 0) {
        // 0x802722C8: nop
    
            goto L_802722DC;
    }
    // 0x802722C8: nop

    // 0x802722CC: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x802722D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802722D4: b           L_80272374
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80272374;
    // 0x802722D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802722DC:
    // 0x802722DC: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802722E0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802722E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802722E8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802722EC: cvt.d.s     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f12.d = CVT_D_S(ctx->f6.fl);
    // 0x802722F0: mul.d       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f12.d, ctx->f10.d);
    // 0x802722F4: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x802722F8: lwc1        $f19, 0x4E58($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4E58);
    // 0x802722FC: lwc1        $f18, 0x4E5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4E5C);
    // 0x80272300: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80272304: mul.d       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f12.d, ctx->f18.d);
    // 0x80272308: cvt.d.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.d = CVT_D_W(ctx->f8.u32l);
    // 0x8027230C: nop

    // 0x80272310: div.d       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80272314: nop

    // 0x80272318: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x8027231C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80272320: nop

    // 0x80272324: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80272328: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8027232C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272330: nop

    // 0x80272334: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80272338: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8027233C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80272340: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272344: bne         $s1, $zero, L_80272350
    if (ctx->r17 != 0) {
        // 0x80272348: nop
    
            goto L_80272350;
    }
    // 0x80272348: nop

    // 0x8027234C: break       7
    do_break(2150048588);
L_80272350:
    // 0x80272350: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272354: bne         $s1, $at, L_80272368
    if (ctx->r17 != ctx->r1) {
        // 0x80272358: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272368;
    }
    // 0x80272358: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8027235C: bne         $t6, $at, L_80272368
    if (ctx->r14 != ctx->r1) {
        // 0x80272360: nop
    
            goto L_80272368;
    }
    // 0x80272360: nop

    // 0x80272364: break       6
    do_break(2150048612);
L_80272368:
    // 0x80272368: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027236C: nop

    // 0x80272370: nop

L_80272374:
    // 0x80272374: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80272378: nop

    // 0x8027237C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80272380: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272384: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272388: nop

    // 0x8027238C: cvt.w.d     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_D(ctx->f2.d);
    // 0x80272390: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80272394: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80272398: jal         0x80272818
    // 0x8027239C: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_1;
    // 0x8027239C: nop

    after_1:
    // 0x802723A0: jal         0x80272818
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_2;
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x802723A8: b           L_802726FC
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802723B0: addiu       $s0, $v1, 0x2C
    ctx->r16 = ADD32(ctx->r3, 0X2C);
    // 0x802723B4: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x802723B8: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x802723BC: slti        $at, $v0, 0x58D
    ctx->r1 = SIGNED(ctx->r2) < 0X58D ? 1 : 0;
    // 0x802723C0: bne         $at, $zero, L_80272438
    if (ctx->r1 != 0) {
        // 0x802723C4: nop
    
            goto L_80272438;
    }
    // 0x802723C4: nop

    // 0x802723C8: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802723CC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802723D0: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802723D4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x802723D8: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x802723DC: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x802723E0: addiu       $t2, $t2, -0x3770
    ctx->r10 = ADD32(ctx->r10, -0X3770);
    // 0x802723E4: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802723E8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x802723EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802723F0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802723F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802723F8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x802723FC: sh          $t7, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r15;
    // 0x80272400: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80272404: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80272408: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8027240C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80272410: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272414: addu        $a0, $t9, $t2
    ctx->r4 = ADD32(ctx->r25, ctx->r10);
    // 0x80272418: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x8027241C: jal         0x8002F528
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    func_8002F528(rdram, ctx);
        goto after_3;
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    after_3:
    // 0x80272424: lh          $t8, 0x9E($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X9E);
    // 0x80272428: nop

    // 0x8027242C: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x80272430: b           L_802724A4
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
        goto L_802724A4;
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
L_80272438:
    // 0x80272438: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8027243C: bne         $v1, $zero, L_80272448
    if (ctx->r3 != 0) {
        // 0x80272440: nop
    
            goto L_80272448;
    }
    // 0x80272440: nop

    // 0x80272444: break       7
    do_break(2150048836);
L_80272448:
    // 0x80272448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027244C: bne         $v1, $at, L_80272460
    if (ctx->r3 != ctx->r1) {
        // 0x80272450: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272460;
    }
    // 0x80272450: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272454: bne         $v0, $at, L_80272460
    if (ctx->r2 != ctx->r1) {
        // 0x80272458: nop
    
            goto L_80272460;
    }
    // 0x80272458: nop

    // 0x8027245C: break       6
    do_break(2150048860);
L_80272460:
    // 0x80272460: mflo        $t2
    ctx->r10 = lo;
    // 0x80272464: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80272468: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027246C: cvt.d.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.d = CVT_D_W(ctx->f16.u32l);
    // 0x80272470: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80272474: nop

    // 0x80272478: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8027247C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272480: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272484: nop

    // 0x80272488: cvt.w.d     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_D(ctx->f2.d);
    // 0x8027248C: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80272490: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80272494: jal         0x80272818
    // 0x80272498: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_4;
    // 0x80272498: nop

    after_4:
    // 0x8027249C: jal         0x80272818
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_5;
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_5:
L_802724A4:
    // 0x802724A4: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
    // 0x802724A8: nop

    // 0x802724AC: bne         $v0, $zero, L_80272524
    if (ctx->r2 != 0) {
        // 0x802724B0: nop
    
            goto L_80272524;
    }
    // 0x802724B0: nop

    // 0x802724B4: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802724B8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802724BC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802724C0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x802724C4: sll         $t4, $v0, 5
    ctx->r12 = S32(ctx->r2 << 5);
    // 0x802724C8: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x802724CC: addiu       $t6, $t6, -0x3770
    ctx->r14 = ADD32(ctx->r14, -0X3770);
    // 0x802724D0: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802724D4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802724D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802724DC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802724E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802724E4: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x802724E8: sh          $t3, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r11;
    // 0x802724EC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802724F0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802724F4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802724F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802724FC: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272500: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x80272504: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x80272508: jal         0x8002F528
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    func_8002F528(rdram, ctx);
        goto after_6;
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    after_6:
    // 0x80272510: lh          $t4, 0x9E($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X9E);
    // 0x80272514: nop

    // 0x80272518: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x8027251C: b           L_80272598
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
        goto L_80272598;
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
L_80272524:
    // 0x80272524: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272528: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x8027252C: bne         $s1, $zero, L_80272538
    if (ctx->r17 != 0) {
        // 0x80272530: nop
    
            goto L_80272538;
    }
    // 0x80272530: nop

    // 0x80272534: break       7
    do_break(2150049076);
L_80272538:
    // 0x80272538: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027253C: bne         $s1, $at, L_80272550
    if (ctx->r17 != ctx->r1) {
        // 0x80272540: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272550;
    }
    // 0x80272540: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272544: bne         $v0, $at, L_80272550
    if (ctx->r2 != ctx->r1) {
        // 0x80272548: nop
    
            goto L_80272550;
    }
    // 0x80272548: nop

    // 0x8027254C: break       6
    do_break(2150049100);
L_80272550:
    // 0x80272550: mflo        $a0
    ctx->r4 = lo;
    // 0x80272554: jal         0x80272818
    // 0x80272558: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_7;
    // 0x80272558: nop

    after_7:
    // 0x8027255C: lhu         $t6, 0x22($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X22);
    // 0x80272560: nop

    // 0x80272564: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272568: bne         $s1, $zero, L_80272574
    if (ctx->r17 != 0) {
        // 0x8027256C: nop
    
            goto L_80272574;
    }
    // 0x8027256C: nop

    // 0x80272570: break       7
    do_break(2150049136);
L_80272574:
    // 0x80272574: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272578: bne         $s1, $at, L_8027258C
    if (ctx->r17 != ctx->r1) {
        // 0x8027257C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027258C;
    }
    // 0x8027257C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272580: bne         $t6, $at, L_8027258C
    if (ctx->r14 != ctx->r1) {
        // 0x80272584: nop
    
            goto L_8027258C;
    }
    // 0x80272584: nop

    // 0x80272588: break       6
    do_break(2150049160);
L_8027258C:
    // 0x8027258C: mfhi        $a0
    ctx->r4 = hi;
    // 0x80272590: jal         0x80272818
    // 0x80272594: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_8;
    // 0x80272594: nop

    after_8:
L_80272598:
    // 0x80272598: lbu         $a0, 0x25($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X25);
    // 0x8027259C: jal         0x80272818
    // 0x802725A0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_9;
    // 0x802725A0: nop

    after_9:
    // 0x802725A4: lbu         $a0, 0x27($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X27);
    // 0x802725A8: jal         0x80272818
    // 0x802725AC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_10;
    // 0x802725AC: nop

    after_10:
    // 0x802725B0: lbu         $a0, 0x2B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2B);
    // 0x802725B4: jal         0x80272818
    // 0x802725B8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_11;
    // 0x802725B8: nop

    after_11:
    // 0x802725BC: lbu         $a0, 0x2C($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2C);
    // 0x802725C0: jal         0x80272818
    // 0x802725C4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_12;
    // 0x802725C4: nop

    after_12:
    // 0x802725C8: lbu         $a0, 0x2D($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2D);
    // 0x802725CC: jal         0x80272818
    // 0x802725D0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_13;
    // 0x802725D0: nop

    after_13:
    // 0x802725D4: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x802725D8: jal         0x80272818
    // 0x802725DC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_14;
    // 0x802725DC: nop

    after_14:
    // 0x802725E0: lbu         $a0, 0x4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4);
    // 0x802725E4: jal         0x80272818
    // 0x802725E8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_15;
    // 0x802725E8: nop

    after_15:
    // 0x802725EC: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x802725F0: jal         0x80272818
    // 0x802725F4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_16;
    // 0x802725F4: nop

    after_16:
    // 0x802725F8: b           L_802726FC
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80272600: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x80272604: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272608: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8027260C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80272610: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80272614: addiu       $a2, $a2, 0x4CB4
    ctx->r6 = ADD32(ctx->r6, 0X4CB4);
    // 0x80272618: jal         0x8004CFD8
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004CFD8(rdram, ctx);
        goto after_17;
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_17:
    // 0x80272620: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x80272624: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272628: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x8027262C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80272630: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80272634: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80272638: addiu       $a2, $a2, 0x4CF4
    ctx->r6 = ADD32(ctx->r6, 0X4CF4);
    // 0x8027263C: jal         0x8004D384
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D384(rdram, ctx);
        goto after_18;
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_18:
    // 0x80272644: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80272648: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x8027264C: addiu       $t0, $t0, 0x4CB4
    ctx->r8 = ADD32(ctx->r8, 0X4CB4);
    // 0x80272650: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80272654: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_80272658:
    // 0x80272658: lh          $t9, 0x9C($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X9C);
    // 0x8027265C: lb          $t8, 0x44($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X44);
    // 0x80272660: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80272664: sll         $t2, $t9, 5
    ctx->r10 = S32(ctx->r25 << 5);
    // 0x80272668: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8027266C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x80272670: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80272674: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80272678: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8027267C: addu        $t2, $s0, $t9
    ctx->r10 = ADD32(ctx->r16, ctx->r25);
    // 0x80272680: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80272684: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x80272688: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x8027268C: lbu         $t4, 0x1E($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1E);
    // 0x80272690: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    // 0x80272694: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80272698: addiu       $a1, $a1, 0x36
    ctx->r5 = ADD32(ctx->r5, 0X36);
    // 0x8027269C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802726A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802726A4: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x802726A8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802726AC: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x802726B0: lhu         $a3, 0x2($t6)
    ctx->r7 = MEM_HU(ctx->r14, 0X2);
    // 0x802726B4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802726B8: lh          $a2, 0x2($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X2);
    // 0x802726BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802726C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802726C4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802726C8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x802726CC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x802726D0: jal         0x8002F6EC
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_8002F6EC(rdram, ctx);
        goto after_19;
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_19:
    // 0x802726D8: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x802726DC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x802726E0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x802726E4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802726E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802726EC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x802726F0: bne         $v1, $at, L_80272658
    if (ctx->r3 != ctx->r1) {
        // 0x802726F4: addiu       $t1, $t1, 0x20
        ctx->r9 = ADD32(ctx->r9, 0X20);
            goto L_80272658;
    }
    // 0x802726F4: addiu       $t1, $t1, 0x20
    ctx->r9 = ADD32(ctx->r9, 0X20);
    // 0x802726F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802726FC:
    // 0x802726FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80272700: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80272704: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80272708: jr          $ra
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_8026F480_func_80272374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272374: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80272378: nop

    // 0x8027237C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80272380: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272384: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272388: nop

    // 0x8027238C: cvt.w.d     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_D(ctx->f2.d);
    // 0x80272390: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80272394: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80272398: jal         0x80272818
    // 0x8027239C: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_0;
    // 0x8027239C: nop

    after_0:
    // 0x802723A0: jal         0x80272818
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_1;
    // 0x802723A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x802723A8: b           L_802726FC
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802723AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802723B0: addiu       $s0, $v1, 0x2C
    ctx->r16 = ADD32(ctx->r3, 0X2C);
    // 0x802723B4: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x802723B8: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x802723BC: slti        $at, $v0, 0x58D
    ctx->r1 = SIGNED(ctx->r2) < 0X58D ? 1 : 0;
    // 0x802723C0: bne         $at, $zero, L_80272438
    if (ctx->r1 != 0) {
        // 0x802723C4: nop
    
            goto L_80272438;
    }
    // 0x802723C4: nop

    // 0x802723C8: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802723CC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802723D0: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802723D4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x802723D8: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x802723DC: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x802723E0: addiu       $t2, $t2, -0x3770
    ctx->r10 = ADD32(ctx->r10, -0X3770);
    // 0x802723E4: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802723E8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x802723EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802723F0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802723F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802723F8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x802723FC: sh          $t7, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r15;
    // 0x80272400: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80272404: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80272408: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8027240C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80272410: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272414: addu        $a0, $t9, $t2
    ctx->r4 = ADD32(ctx->r25, ctx->r10);
    // 0x80272418: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x8027241C: jal         0x8002F528
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    func_8002F528(rdram, ctx);
        goto after_2;
    // 0x80272420: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    after_2:
    // 0x80272424: lh          $t8, 0x9E($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X9E);
    // 0x80272428: nop

    // 0x8027242C: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x80272430: b           L_802724A4
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
        goto L_802724A4;
    // 0x80272434: sh          $t9, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r25;
L_80272438:
    // 0x80272438: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8027243C: bne         $v1, $zero, L_80272448
    if (ctx->r3 != 0) {
        // 0x80272440: nop
    
            goto L_80272448;
    }
    // 0x80272440: nop

    // 0x80272444: break       7
    do_break(2150048836);
L_80272448:
    // 0x80272448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027244C: bne         $v1, $at, L_80272460
    if (ctx->r3 != ctx->r1) {
        // 0x80272450: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272460;
    }
    // 0x80272450: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272454: bne         $v0, $at, L_80272460
    if (ctx->r2 != ctx->r1) {
        // 0x80272458: nop
    
            goto L_80272460;
    }
    // 0x80272458: nop

    // 0x8027245C: break       6
    do_break(2150048860);
L_80272460:
    // 0x80272460: mflo        $t2
    ctx->r10 = lo;
    // 0x80272464: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80272468: mfhi        $s2
    ctx->r18 = hi;
    // 0x8027246C: cvt.d.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.d = CVT_D_W(ctx->f16.u32l);
    // 0x80272470: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80272474: nop

    // 0x80272478: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8027247C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272480: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272484: nop

    // 0x80272488: cvt.w.d     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_D(ctx->f2.d);
    // 0x8027248C: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80272490: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80272494: jal         0x80272818
    // 0x80272498: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_3;
    // 0x80272498: nop

    after_3:
    // 0x8027249C: jal         0x80272818
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_4;
    // 0x802724A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
L_802724A4:
    // 0x802724A4: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
    // 0x802724A8: nop

    // 0x802724AC: bne         $v0, $zero, L_80272524
    if (ctx->r2 != 0) {
        // 0x802724B0: nop
    
            goto L_80272524;
    }
    // 0x802724B0: nop

    // 0x802724B4: lh          $v0, 0x9C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X9C);
    // 0x802724B8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802724BC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802724C0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x802724C4: sll         $t4, $v0, 5
    ctx->r12 = S32(ctx->r2 << 5);
    // 0x802724C8: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x802724CC: addiu       $t6, $t6, -0x3770
    ctx->r14 = ADD32(ctx->r14, -0X3770);
    // 0x802724D0: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802724D4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802724D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802724DC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802724E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802724E4: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x802724E8: sh          $t3, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r11;
    // 0x802724EC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802724F0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802724F4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802724F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802724FC: addiu       $a3, $a3, 0x6658
    ctx->r7 = ADD32(ctx->r7, 0X6658);
    // 0x80272500: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x80272504: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x80272508: jal         0x8002F528
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    func_8002F528(rdram, ctx);
        goto after_5;
    // 0x8027250C: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    after_5:
    // 0x80272510: lh          $t4, 0x9E($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X9E);
    // 0x80272514: nop

    // 0x80272518: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x8027251C: b           L_80272598
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
        goto L_80272598;
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
L_80272524:
    // 0x80272524: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272528: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x8027252C: bne         $s1, $zero, L_80272538
    if (ctx->r17 != 0) {
        // 0x80272530: nop
    
            goto L_80272538;
    }
    // 0x80272530: nop

    // 0x80272534: break       7
    do_break(2150049076);
L_80272538:
    // 0x80272538: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027253C: bne         $s1, $at, L_80272550
    if (ctx->r17 != ctx->r1) {
        // 0x80272540: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272550;
    }
    // 0x80272540: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272544: bne         $v0, $at, L_80272550
    if (ctx->r2 != ctx->r1) {
        // 0x80272548: nop
    
            goto L_80272550;
    }
    // 0x80272548: nop

    // 0x8027254C: break       6
    do_break(2150049100);
L_80272550:
    // 0x80272550: mflo        $a0
    ctx->r4 = lo;
    // 0x80272554: jal         0x80272818
    // 0x80272558: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_6;
    // 0x80272558: nop

    after_6:
    // 0x8027255C: lhu         $t6, 0x22($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X22);
    // 0x80272560: nop

    // 0x80272564: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272568: bne         $s1, $zero, L_80272574
    if (ctx->r17 != 0) {
        // 0x8027256C: nop
    
            goto L_80272574;
    }
    // 0x8027256C: nop

    // 0x80272570: break       7
    do_break(2150049136);
L_80272574:
    // 0x80272574: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272578: bne         $s1, $at, L_8027258C
    if (ctx->r17 != ctx->r1) {
        // 0x8027257C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027258C;
    }
    // 0x8027257C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272580: bne         $t6, $at, L_8027258C
    if (ctx->r14 != ctx->r1) {
        // 0x80272584: nop
    
            goto L_8027258C;
    }
    // 0x80272584: nop

    // 0x80272588: break       6
    do_break(2150049160);
L_8027258C:
    // 0x8027258C: mfhi        $a0
    ctx->r4 = hi;
    // 0x80272590: jal         0x80272818
    // 0x80272594: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_7;
    // 0x80272594: nop

    after_7:
L_80272598:
    // 0x80272598: lbu         $a0, 0x25($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X25);
    // 0x8027259C: jal         0x80272818
    // 0x802725A0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_8;
    // 0x802725A0: nop

    after_8:
    // 0x802725A4: lbu         $a0, 0x27($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X27);
    // 0x802725A8: jal         0x80272818
    // 0x802725AC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_9;
    // 0x802725AC: nop

    after_9:
    // 0x802725B0: lbu         $a0, 0x2B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2B);
    // 0x802725B4: jal         0x80272818
    // 0x802725B8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_10;
    // 0x802725B8: nop

    after_10:
    // 0x802725BC: lbu         $a0, 0x2C($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2C);
    // 0x802725C0: jal         0x80272818
    // 0x802725C4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_11;
    // 0x802725C4: nop

    after_11:
    // 0x802725C8: lbu         $a0, 0x2D($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2D);
    // 0x802725CC: jal         0x80272818
    // 0x802725D0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_12;
    // 0x802725D0: nop

    after_12:
    // 0x802725D4: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x802725D8: jal         0x80272818
    // 0x802725DC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_13;
    // 0x802725DC: nop

    after_13:
    // 0x802725E0: lbu         $a0, 0x4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4);
    // 0x802725E4: jal         0x80272818
    // 0x802725E8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_14;
    // 0x802725E8: nop

    after_14:
    // 0x802725EC: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x802725F0: jal         0x80272818
    // 0x802725F4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_15;
    // 0x802725F4: nop

    after_15:
    // 0x802725F8: b           L_802726FC
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80272600: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x80272604: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272608: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8027260C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80272610: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80272614: addiu       $a2, $a2, 0x4CB4
    ctx->r6 = ADD32(ctx->r6, 0X4CB4);
    // 0x80272618: jal         0x8004CFD8
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004CFD8(rdram, ctx);
        goto after_16;
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_16:
    // 0x80272620: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x80272624: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272628: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x8027262C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80272630: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80272634: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80272638: addiu       $a2, $a2, 0x4CF4
    ctx->r6 = ADD32(ctx->r6, 0X4CF4);
    // 0x8027263C: jal         0x8004D384
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D384(rdram, ctx);
        goto after_17;
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_17:
    // 0x80272644: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80272648: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x8027264C: addiu       $t0, $t0, 0x4CB4
    ctx->r8 = ADD32(ctx->r8, 0X4CB4);
    // 0x80272650: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80272654: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_80272658:
    // 0x80272658: lh          $t9, 0x9C($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X9C);
    // 0x8027265C: lb          $t8, 0x44($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X44);
    // 0x80272660: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80272664: sll         $t2, $t9, 5
    ctx->r10 = S32(ctx->r25 << 5);
    // 0x80272668: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8027266C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x80272670: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80272674: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80272678: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8027267C: addu        $t2, $s0, $t9
    ctx->r10 = ADD32(ctx->r16, ctx->r25);
    // 0x80272680: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80272684: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x80272688: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x8027268C: lbu         $t4, 0x1E($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1E);
    // 0x80272690: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    // 0x80272694: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80272698: addiu       $a1, $a1, 0x36
    ctx->r5 = ADD32(ctx->r5, 0X36);
    // 0x8027269C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802726A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802726A4: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x802726A8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802726AC: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x802726B0: lhu         $a3, 0x2($t6)
    ctx->r7 = MEM_HU(ctx->r14, 0X2);
    // 0x802726B4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802726B8: lh          $a2, 0x2($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X2);
    // 0x802726BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802726C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802726C4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802726C8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x802726CC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x802726D0: jal         0x8002F6EC
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_8002F6EC(rdram, ctx);
        goto after_18;
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_18:
    // 0x802726D8: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x802726DC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x802726E0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x802726E4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802726E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802726EC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x802726F0: bne         $v1, $at, L_80272658
    if (ctx->r3 != ctx->r1) {
        // 0x802726F4: addiu       $t1, $t1, 0x20
        ctx->r9 = ADD32(ctx->r9, 0X20);
            goto L_80272658;
    }
    // 0x802726F4: addiu       $t1, $t1, 0x20
    ctx->r9 = ADD32(ctx->r9, 0X20);
    // 0x802726F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802726FC:
    // 0x802726FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80272700: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80272704: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80272708: jr          $ra
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_8026F480_func_80272520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272520: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
    // 0x80272524: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80272528: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x8027252C: bne         $s1, $zero, L_80272538
    if (ctx->r17 != 0) {
        // 0x80272530: nop
    
            goto L_80272538;
    }
    // 0x80272530: nop

    // 0x80272534: break       7
    do_break(2150049076);
L_80272538:
    // 0x80272538: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8027253C: bne         $s1, $at, L_80272550
    if (ctx->r17 != ctx->r1) {
        // 0x80272540: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80272550;
    }
    // 0x80272540: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272544: bne         $v0, $at, L_80272550
    if (ctx->r2 != ctx->r1) {
        // 0x80272548: nop
    
            goto L_80272550;
    }
    // 0x80272548: nop

    // 0x8027254C: break       6
    do_break(2150049100);
L_80272550:
    // 0x80272550: mflo        $a0
    ctx->r4 = lo;
    // 0x80272554: jal         0x80272818
    // 0x80272558: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_0;
    // 0x80272558: nop

    after_0:
    // 0x8027255C: lhu         $t6, 0x22($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X22);
    // 0x80272560: nop

    // 0x80272564: div         $zero, $t6, $s1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r17)));
    // 0x80272568: bne         $s1, $zero, L_80272574
    if (ctx->r17 != 0) {
        // 0x8027256C: nop
    
            goto L_80272574;
    }
    // 0x8027256C: nop

    // 0x80272570: break       7
    do_break(2150049136);
L_80272574:
    // 0x80272574: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80272578: bne         $s1, $at, L_8027258C
    if (ctx->r17 != ctx->r1) {
        // 0x8027257C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8027258C;
    }
    // 0x8027257C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80272580: bne         $t6, $at, L_8027258C
    if (ctx->r14 != ctx->r1) {
        // 0x80272584: nop
    
            goto L_8027258C;
    }
    // 0x80272584: nop

    // 0x80272588: break       6
    do_break(2150049160);
L_8027258C:
    // 0x8027258C: mfhi        $a0
    ctx->r4 = hi;
    // 0x80272590: jal         0x80272818
    // 0x80272594: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_1;
    // 0x80272594: nop

    after_1:
    // 0x80272598: lbu         $a0, 0x25($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X25);
    // 0x8027259C: jal         0x80272818
    // 0x802725A0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_2;
    // 0x802725A0: nop

    after_2:
    // 0x802725A4: lbu         $a0, 0x27($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X27);
    // 0x802725A8: jal         0x80272818
    // 0x802725AC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_3;
    // 0x802725AC: nop

    after_3:
    // 0x802725B0: lbu         $a0, 0x2B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2B);
    // 0x802725B4: jal         0x80272818
    // 0x802725B8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_4;
    // 0x802725B8: nop

    after_4:
    // 0x802725BC: lbu         $a0, 0x2C($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2C);
    // 0x802725C0: jal         0x80272818
    // 0x802725C4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_5;
    // 0x802725C4: nop

    after_5:
    // 0x802725C8: lbu         $a0, 0x2D($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2D);
    // 0x802725CC: jal         0x80272818
    // 0x802725D0: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_6;
    // 0x802725D0: nop

    after_6:
    // 0x802725D4: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x802725D8: jal         0x80272818
    // 0x802725DC: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_7;
    // 0x802725DC: nop

    after_7:
    // 0x802725E0: lbu         $a0, 0x4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4);
    // 0x802725E4: jal         0x80272818
    // 0x802725E8: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_8;
    // 0x802725E8: nop

    after_8:
    // 0x802725EC: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x802725F0: jal         0x80272818
    // 0x802725F4: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_9;
    // 0x802725F4: nop

    after_9:
    // 0x802725F8: b           L_802726FC
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802726FC;
    // 0x802725FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80272600: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x80272604: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272608: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8027260C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80272610: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80272614: addiu       $a2, $a2, 0x4CB4
    ctx->r6 = ADD32(ctx->r6, 0X4CB4);
    // 0x80272618: jal         0x8004CFD8
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004CFD8(rdram, ctx);
        goto after_10;
    // 0x8027261C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x80272620: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x80272624: lbu         $a1, 0x9D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X9D);
    // 0x80272628: lbu         $a0, 0x44($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X44);
    // 0x8027262C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80272630: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80272634: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80272638: addiu       $a2, $a2, 0x4CF4
    ctx->r6 = ADD32(ctx->r6, 0X4CF4);
    // 0x8027263C: jal         0x8004D384
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D384(rdram, ctx);
        goto after_11;
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x80272644: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80272648: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x8027264C: addiu       $t0, $t0, 0x4CB4
    ctx->r8 = ADD32(ctx->r8, 0X4CB4);
    // 0x80272650: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80272654: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_80272658:
    // 0x80272658: lh          $t9, 0x9C($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X9C);
    // 0x8027265C: lb          $t8, 0x44($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X44);
    // 0x80272660: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80272664: sll         $t2, $t9, 5
    ctx->r10 = S32(ctx->r25 << 5);
    // 0x80272668: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8027266C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x80272670: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80272674: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80272678: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8027267C: addu        $t2, $s0, $t9
    ctx->r10 = ADD32(ctx->r16, ctx->r25);
    // 0x80272680: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80272684: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x80272688: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x8027268C: lbu         $t4, 0x1E($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1E);
    // 0x80272690: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    // 0x80272694: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80272698: addiu       $a1, $a1, 0x36
    ctx->r5 = ADD32(ctx->r5, 0X36);
    // 0x8027269C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802726A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802726A4: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x802726A8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802726AC: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x802726B0: lhu         $a3, 0x2($t6)
    ctx->r7 = MEM_HU(ctx->r14, 0X2);
    // 0x802726B4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802726B8: lh          $a2, 0x2($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X2);
    // 0x802726BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802726C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802726C4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802726C8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x802726CC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x802726D0: jal         0x8002F6EC
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_8002F6EC(rdram, ctx);
        goto after_12;
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_12:
    // 0x802726D8: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x802726DC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x802726E0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x802726E4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802726E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802726EC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x802726F0: bne         $v1, $at, L_80272658
    if (ctx->r3 != ctx->r1) {
        // 0x802726F4: addiu       $t1, $t1, 0x20
        ctx->r9 = ADD32(ctx->r9, 0X20);
            goto L_80272658;
    }
    // 0x802726F4: addiu       $t1, $t1, 0x20
    ctx->r9 = ADD32(ctx->r9, 0X20);
    // 0x802726F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802726FC:
    // 0x802726FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80272700: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80272704: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80272708: jr          $ra
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_8026F480_func_80272640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80272644: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80272648: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x8027264C: addiu       $t0, $t0, 0x4CB4
    ctx->r8 = ADD32(ctx->r8, 0X4CB4);
    // 0x80272650: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80272654: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_80272658:
    // 0x80272658: lh          $t9, 0x9C($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X9C);
    // 0x8027265C: lb          $t8, 0x44($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X44);
    // 0x80272660: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80272664: sll         $t2, $t9, 5
    ctx->r10 = S32(ctx->r25 << 5);
    // 0x80272668: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8027266C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x80272670: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80272674: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80272678: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8027267C: addu        $t2, $s0, $t9
    ctx->r10 = ADD32(ctx->r16, ctx->r25);
    // 0x80272680: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80272684: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x80272688: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x8027268C: lbu         $t4, 0x1E($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1E);
    // 0x80272690: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    // 0x80272694: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80272698: addiu       $a1, $a1, 0x36
    ctx->r5 = ADD32(ctx->r5, 0X36);
    // 0x8027269C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802726A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802726A4: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x802726A8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802726AC: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x802726B0: lhu         $a3, 0x2($t6)
    ctx->r7 = MEM_HU(ctx->r14, 0X2);
    // 0x802726B4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802726B8: lh          $a2, 0x2($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X2);
    // 0x802726BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802726C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802726C4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802726C8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x802726CC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x802726D0: jal         0x8002F6EC
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_8002F6EC(rdram, ctx);
        goto after_0;
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_0:
    // 0x802726D8: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x802726DC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x802726E0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x802726E4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802726E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802726EC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x802726F0: bne         $v1, $at, L_80272658
    if (ctx->r3 != ctx->r1) {
        // 0x802726F4: addiu       $t1, $t1, 0x20
        ctx->r9 = ADD32(ctx->r9, 0X20);
            goto L_80272658;
    }
    // 0x802726F4: addiu       $t1, $t1, 0x20
    ctx->r9 = ADD32(ctx->r9, 0X20);
    // 0x802726F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802726FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80272700: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80272704: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80272708: jr          $ra
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_8026F480_func_80272658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80272658:
    // 0x80272658: lh          $t9, 0x9C($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X9C);
    // 0x8027265C: lb          $t8, 0x44($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X44);
    // 0x80272660: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80272664: sll         $t2, $t9, 5
    ctx->r10 = S32(ctx->r25 << 5);
    // 0x80272668: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8027266C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x80272670: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80272674: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80272678: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8027267C: addu        $t2, $s0, $t9
    ctx->r10 = ADD32(ctx->r16, ctx->r25);
    // 0x80272680: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80272684: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x80272688: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x8027268C: lbu         $t4, 0x1E($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1E);
    // 0x80272690: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    // 0x80272694: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80272698: addiu       $a1, $a1, 0x36
    ctx->r5 = ADD32(ctx->r5, 0X36);
    // 0x8027269C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802726A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802726A4: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x802726A8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802726AC: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x802726B0: lhu         $a3, 0x2($t6)
    ctx->r7 = MEM_HU(ctx->r14, 0X2);
    // 0x802726B4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802726B8: lh          $a2, 0x2($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X2);
    // 0x802726BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802726C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802726C4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802726C8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x802726CC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x802726D0: jal         0x8002F6EC
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_8002F6EC(rdram, ctx);
        goto after_0;
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_0:
    // 0x802726D8: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x802726DC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x802726E0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x802726E4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802726E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802726EC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x802726F0: bne         $v1, $at, L_80272658
    if (ctx->r3 != ctx->r1) {
        // 0x802726F4: addiu       $t1, $t1, 0x20
        ctx->r9 = ADD32(ctx->r9, 0X20);
            goto L_80272658;
    }
    // 0x802726F4: addiu       $t1, $t1, 0x20
    ctx->r9 = ADD32(ctx->r9, 0X20);
    // 0x802726F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802726FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80272700: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80272704: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80272708: jr          $ra
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_8026F480_func_802726C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80272658:
    // 0x802726C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802726C4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802726C8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x802726CC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x802726D0: jal         0x8002F6EC
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_8002F6EC(rdram, ctx);
        goto after_0;
    // 0x802726D4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_0:
    // 0x802726D8: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x802726DC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x802726E0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x802726E4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802726E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802726EC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x802726F0: bne         $v1, $at, L_80272658
    if (ctx->r3 != ctx->r1) {
            // 0x802726F4: addiu       $t1, $t1, 0x20
    ctx->r9 = ADD32(ctx->r9, 0X20);
    ovl_8026F480_func_80272658(rdram, ctx);
    return;
    }
    // 0x802726F4: addiu       $t1, $t1, 0x20
    ctx->r9 = ADD32(ctx->r9, 0X20);
    // 0x802726F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802726FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80272700: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80272704: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80272708: jr          $ra
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8027270C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_8026F480_func_80272710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272710: jr          $ra
    // 0x80272714: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    return;
    // 0x80272714: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_8026F480_func_80272718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272718: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8027271C: jr          $ra
    // 0x80272720: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    return;
    // 0x80272720: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void ovl_8026F480_func_80272724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272724: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80272728: lh          $t6, -0x6B8($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6B8);
    // 0x8027272C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80272730: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80272734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272738: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027273C: bne         $t6, $at, L_80272758
    if (ctx->r14 != ctx->r1) {
        // 0x80272740: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80272758;
    }
    // 0x80272740: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80272744: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80272748: jal         0x8002A468
    // 0x8027274C: addiu       $a0, $a0, 0x2718
    ctx->r4 = ADD32(ctx->r4, 0X2718);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x8027274C: addiu       $a0, $a0, 0x2718
    ctx->r4 = ADD32(ctx->r4, 0X2718);
    after_0:
    // 0x80272750: b           L_80272768
    // 0x80272754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80272768;
    // 0x80272754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272758:
    // 0x80272758: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027275C: jal         0x8002A468
    // 0x80272760: addiu       $a0, $a0, 0x2710
    ctx->r4 = ADD32(ctx->r4, 0X2710);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x80272760: addiu       $a0, $a0, 0x2710
    ctx->r4 = ADD32(ctx->r4, 0X2710);
    after_1:
    // 0x80272764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272768:
    // 0x80272768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027276C: jr          $ra
    // 0x80272770: nop

    return;
    // 0x80272770: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272774: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80272778: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8027277C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80272780: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80272784: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80272788: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8027278C: lh          $t0, 0x4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X4);
    // 0x80272790: lhu         $a3, 0x8($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X8);
    // 0x80272794: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80272798: lh          $t1, 0x6($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X6);
    // 0x8027279C: lh          $t6, 0x4A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X4A);
    // 0x802727A0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802727A4: lhu         $t2, 0x2($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X2);
    // 0x802727A8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802727AC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802727B0: lbu         $t3, 0x0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X0);
    // 0x802727B4: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x802727B8: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802727BC: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x802727C0: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x802727C4: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x802727C8: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x802727CC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802727D0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x802727D4: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x802727D8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x802727DC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x802727E0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802727E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802727E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802727EC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802727F0: jal         0x8002F344
    // 0x802727F4: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    func_8002F344(rdram, ctx);
        goto after_0;
    // 0x802727F4: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    after_0:
    // 0x802727F8: lh          $v0, 0x4A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X4A);
    // 0x802727FC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80272800: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80272804: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x80272808: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8027280C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80272810: jr          $ra
    // 0x80272814: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    return;
    // 0x80272814: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
;}
RECOMP_FUNC void ovl_8026F480_func_802727A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802727A4: lhu         $t2, 0x2($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X2);
    // 0x802727A8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802727AC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802727B0: lbu         $t3, 0x0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X0);
    // 0x802727B4: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x802727B8: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802727BC: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x802727C0: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x802727C4: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x802727C8: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x802727CC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802727D0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x802727D4: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x802727D8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x802727DC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x802727E0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802727E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802727E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802727EC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802727F0: jal         0x8002F344
    // 0x802727F4: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    func_8002F344(rdram, ctx);
        goto after_0;
    // 0x802727F4: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    after_0:
    // 0x802727F8: lh          $v0, 0x4A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X4A);
    // 0x802727FC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80272800: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80272804: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x80272808: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8027280C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80272810: jr          $ra
    // 0x80272814: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    return;
    // 0x80272814: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
;}
RECOMP_FUNC void ovl_8026F480_func_80272818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272818: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8027281C: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x80272820: lh          $t7, 0x98($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X98);
    // 0x80272824: lh          $v0, 0x9E($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X9E);
    // 0x80272828: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x8027282C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80272830: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80272834: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80272838: lw          $t9, 0x4984($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4984);
    // 0x8027283C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80272840: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80272844: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80272848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027284C: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x80272850: lh          $a0, 0x9C($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X9C);
    // 0x80272854: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x80272858: sh          $t0, 0x9E($v1)
    MEM_H(0X9E, ctx->r3) = ctx->r8;
    // 0x8027285C: jal         0x80272774
    // 0x80272860: addu        $a1, $t6, $t9
    ctx->r5 = ADD32(ctx->r14, ctx->r25);
    ovl_8026F480_func_80272774(rdram, ctx);
        goto after_0;
    // 0x80272860: addu        $a1, $t6, $t9
    ctx->r5 = ADD32(ctx->r14, ctx->r25);
    after_0:
    // 0x80272864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272868: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8027286C: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x80272870: sh          $v0, 0x9C($v1)
    MEM_H(0X9C, ctx->r3) = ctx->r2;
    // 0x80272874: jr          $ra
    // 0x80272878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80272878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_8026F480_func_8027285C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027285C: jal         0x80272774
    // 0x80272860: addu        $a1, $t6, $t9
    ctx->r5 = ADD32(ctx->r14, ctx->r25);
    ovl_8026F480_func_80272774(rdram, ctx);
        goto after_0;
    // 0x80272860: addu        $a1, $t6, $t9
    ctx->r5 = ADD32(ctx->r14, ctx->r25);
    after_0:
    // 0x80272864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272868: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8027286C: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x80272870: sh          $v0, 0x9C($v1)
    MEM_H(0X9C, ctx->r3) = ctx->r2;
    // 0x80272874: jr          $ra
    // 0x80272878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80272878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_8026F480_func_8027287C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027287C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80272880: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80272884: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80272888: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027288C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80272890: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80272894: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80272898: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027289C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802728A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802728A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802728A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802728AC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802728B0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802728B4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802728B8: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x802728BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802728C0: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802728C4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x802728C8: swc1        $f13, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(13 - 1) * 2];
    // 0x802728CC: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    // 0x802728D0: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x802728D4: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x802728D8: jal         0x8003EB78
    // 0x802728DC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8003EB78(rdram, ctx);
        goto after_0;
    // 0x802728DC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x802728E0: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x802728E4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x802728E8: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x802728EC: lwc1        $f5, 0x38($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x802728F0: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802728F4: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x802728F8: jal         0x8003EB78
    // 0x802728FC: div.d       $f20, $f4, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f20.d = DIV_D(ctx->f4.d, ctx->f8.d);
    func_8003EB78(rdram, ctx);
        goto after_1;
    // 0x802728FC: div.d       $f20, $f4, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f20.d = DIV_D(ctx->f4.d, ctx->f8.d);
    after_1:
    // 0x80272900: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80272904: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80272908: lwc1        $f11, 0x38($sp)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8027290C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80272910: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80272914: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80272918: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8027291C: cvt.d.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.d = CVT_D_W(ctx->f6.u32l);
    // 0x80272920: nop

    // 0x80272924: div.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x80272928: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8027292C: nop

    // 0x80272930: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80272934: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272938: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8027293C: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x80272940: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x80272944: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x80272948: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8027294C: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x80272950: nop

    // 0x80272954: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80272958: nop

    // 0x8027295C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80272960: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80272964: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80272968: nop

    // 0x8027296C: cvt.w.d     $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    ctx->f16.u32l = CVT_W_D(ctx->f20.d);
    // 0x80272970: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x80272974: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80272978: mfhi        $t1
    ctx->r9 = hi;
    // 0x8027297C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x80272980: jal         0x80272818
    // 0x80272984: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_2;
    // 0x80272984: nop

    after_2:
    // 0x80272988: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8027298C: jal         0x80272818
    // 0x80272990: nop

    ovl_8026F480_func_80272818(rdram, ctx);
        goto after_3;
    // 0x80272990: nop

    after_3:
    // 0x80272994: mov.d       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.d = ctx->f20.d;
    // 0x80272998: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027299C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802729A0: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x802729A4: jr          $ra
    // 0x802729A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802729A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8026F480_func_802729AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802729AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802729B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802729B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802729B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802729BC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802729C0: addiu       $t6, $zero, 0xAC
    ctx->r14 = ADD32(0, 0XAC);
    // 0x802729C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802729C8: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x802729CC: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x802729D0: jal         0x8004A55C
    // 0x802729D4: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    func_8004A55C(rdram, ctx);
        goto after_0;
    // 0x802729D4: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    after_0:
    // 0x802729D8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x802729DC: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802729E0: sb          $t7, 0x5($t8)
    MEM_B(0X5, ctx->r24) = ctx->r15;
    // 0x802729E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802729E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802729EC: jr          $ra
    // 0x802729F0: nop

    return;
    // 0x802729F0: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802729F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802729F4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802729F8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802729FC: lbu         $s3, 0x57($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X57);
    // 0x80272A00: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80272A04: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80272A08: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80272A0C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80272A10: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80272A14: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80272A18: andi        $s6, $a0, 0xFF
    ctx->r22 = ctx->r4 & 0XFF;
    // 0x80272A1C: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x80272A20: or          $fp, $a3, $zero
    ctx->r30 = ctx->r7 | 0;
    // 0x80272A24: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80272A28: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80272A2C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80272A30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80272A34: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80272A38: blez        $s3, L_80272A9C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80272A3C: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80272A9C;
    }
    // 0x80272A3C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80272A40: lbu         $s4, 0x53($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0X53);
    // 0x80272A44: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80272A48: sll         $s5, $s4, 2
    ctx->r21 = S32(ctx->r20 << 2);
L_80272A4C:
    // 0x80272A4C: addu        $a2, $s0, $s4
    ctx->r6 = ADD32(ctx->r16, ctx->r20);
    // 0x80272A50: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x80272A54: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80272A58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80272A5C: andi        $a1, $s6, 0xFF
    ctx->r5 = ctx->r22 & 0XFF;
    // 0x80272A60: jal         0x8004C46C
    // 0x80272A64: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    func_8004C46C(rdram, ctx);
        goto after_0;
    // 0x80272A64: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_0:
    // 0x80272A68: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80272A6C: addu        $t8, $fp, $t7
    ctx->r24 = ADD32(ctx->r30, ctx->r15);
    // 0x80272A70: addu        $v0, $t8, $s5
    ctx->r2 = ADD32(ctx->r24, ctx->r21);
    // 0x80272A74: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x80272A78: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x80272A7C: jal         0x8004CD44
    // 0x80272A80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x80272A80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80272A84: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80272A88: andi        $s0, $s2, 0xFF
    ctx->r16 = ctx->r18 & 0XFF;
    // 0x80272A8C: slt         $at, $s0, $s3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80272A90: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80272A94: bne         $at, $zero, L_80272A4C
    if (ctx->r1 != 0) {
        // 0x80272A98: or          $s2, $s0, $zero
        ctx->r18 = ctx->r16 | 0;
            goto L_80272A4C;
    }
    // 0x80272A98: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
L_80272A9C:
    // 0x80272A9C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80272AA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80272AA4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80272AA8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80272AAC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80272AB0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80272AB4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80272AB8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80272ABC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80272AC0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80272AC4: jr          $ra
    // 0x80272AC8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80272AC8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80272ACC: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272AD0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80272AD4: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x80272AD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80272ADC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80272AE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80272AE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80272AE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80272AEC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80272AF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80272AF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80272AF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80272AFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80272B00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80272B04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80272B08: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80272B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272B10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80272B14: lbu         $a0, -0x2CF0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2CF0);
    // 0x80272B18: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
    // 0x80272B1C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80272B20: jal         0x80039F88
    // 0x80272B24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F88(rdram, ctx);
        goto after_0;
    // 0x80272B24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80272B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272B30: jr          $ra
    // 0x80272B34: nop

    return;
    // 0x80272B34: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272AD4: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x80272AD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80272ADC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80272AE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80272AE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80272AE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80272AEC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80272AF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80272AF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80272AF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80272AFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80272B00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80272B04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80272B08: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80272B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272B10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80272B14: lbu         $a0, -0x2CF0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2CF0);
    // 0x80272B18: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
    // 0x80272B1C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80272B20: jal         0x80039F88
    // 0x80272B24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F88(rdram, ctx);
        goto after_0;
    // 0x80272B24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80272B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272B30: jr          $ra
    // 0x80272B34: nop

    return;
    // 0x80272B34: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272AEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272AEC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80272AF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80272AF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80272AF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80272AFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80272B00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80272B04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80272B08: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80272B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272B10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80272B14: lbu         $a0, -0x2CF0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2CF0);
    // 0x80272B18: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
    // 0x80272B1C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80272B20: jal         0x80039F88
    // 0x80272B24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F88(rdram, ctx);
        goto after_0;
    // 0x80272B24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80272B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272B30: jr          $ra
    // 0x80272B34: nop

    return;
    // 0x80272B34: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272B1C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80272B20: jal         0x80039F88
    // 0x80272B24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F88(rdram, ctx);
        goto after_0;
    // 0x80272B24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80272B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272B30: jr          $ra
    // 0x80272B34: nop

    return;
    // 0x80272B34: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272B38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80272B3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272B40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80272B44: jal         0x80036258
    // 0x80272B48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036258(rdram, ctx);
        goto after_0;
    // 0x80272B48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80272B4C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80272B50: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80272B54: addiu       $a0, $a0, 0x2BAC
    ctx->r4 = ADD32(ctx->r4, 0X2BAC);
    // 0x80272B58: jal         0x800297B4
    // 0x80272B5C: sh          $zero, 0x38($t6)
    MEM_H(0X38, ctx->r14) = 0;
    func_800297B4(rdram, ctx);
        goto after_1;
    // 0x80272B5C: sh          $zero, 0x38($t6)
    MEM_H(0X38, ctx->r14) = 0;
    after_1:
    // 0x80272B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272B64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272B68: jr          $ra
    // 0x80272B6C: nop

    return;
    // 0x80272B6C: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272B70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80272B74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272B78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80272B7C: jal         0x80036258
    // 0x80272B80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036258(rdram, ctx);
        goto after_0;
    // 0x80272B80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80272B84: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80272B88: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80272B8C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80272B90: addiu       $a0, $a0, 0x2BAC
    ctx->r4 = ADD32(ctx->r4, 0X2BAC);
    // 0x80272B94: jal         0x800297B4
    // 0x80272B98: sh          $t6, 0x38($t7)
    MEM_H(0X38, ctx->r15) = ctx->r14;
    func_800297B4(rdram, ctx);
        goto after_1;
    // 0x80272B98: sh          $t6, 0x38($t7)
    MEM_H(0X38, ctx->r15) = ctx->r14;
    after_1:
    // 0x80272B9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272BA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272BA4: jr          $ra
    // 0x80272BA8: nop

    return;
    // 0x80272BA8: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272B98: sh          $t6, 0x38($t7)
    MEM_H(0X38, ctx->r15) = ctx->r14;
    // 0x80272B9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272BA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272BA4: jr          $ra
    // 0x80272BA8: nop

    return;
    // 0x80272BA8: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272BAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80272BB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80272BB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272BB8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80272BBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80272BC0: jal         0x80035FF0
    // 0x80272BC4: addiu       $a0, $a0, 0x4E60
    ctx->r4 = ADD32(ctx->r4, 0X4E60);
    func_80035FF0(rdram, ctx);
        goto after_0;
    // 0x80272BC4: addiu       $a0, $a0, 0x4E60
    ctx->r4 = ADD32(ctx->r4, 0X4E60);
    after_0:
    // 0x80272BC8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80272BCC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80272BD0: lbu         $t6, -0x329F($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X329F);
    // 0x80272BD4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80272BD8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80272BDC: addiu       $a0, $a0, 0x4EC4
    ctx->r4 = ADD32(ctx->r4, 0X4EC4);
    // 0x80272BE0: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x80272BE4: jal         0x8002AAC0
    // 0x80272BE8: sh          $t6, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r14;
    func_8002AAC0(rdram, ctx);
        goto after_1;
    // 0x80272BE8: sh          $t6, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r14;
    after_1:
    // 0x80272BEC: jal         0x8006FB58
    // 0x80272BF0: nop

    func_8006FB58(rdram, ctx);
        goto after_2;
    // 0x80272BF0: nop

    after_2:
    // 0x80272BF4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80272BF8: jal         0x80029354
    // 0x80272BFC: addiu       $a0, $a0, 0x2D8C
    ctx->r4 = ADD32(ctx->r4, 0X2D8C);
    func_80029354(rdram, ctx);
        goto after_3;
    // 0x80272BFC: addiu       $a0, $a0, 0x2D8C
    ctx->r4 = ADD32(ctx->r4, 0X2D8C);
    after_3:
    // 0x80272C00: jal         0x80272F38
    // 0x80272C04: nop

    ovl_8026F480_func_80272F38(rdram, ctx);
        goto after_4;
    // 0x80272C04: nop

    after_4:
    // 0x80272C08: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80272C0C: addiu       $a0, $a0, 0x2C28
    ctx->r4 = ADD32(ctx->r4, 0X2C28);
    // 0x80272C10: jal         0x8004A9B4
    // 0x80272C14: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_5;
    // 0x80272C14: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_5:
    // 0x80272C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272C1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272C20: jr          $ra
    // 0x80272C24: nop

    return;
    // 0x80272C24: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272C28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80272C2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80272C30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80272C34: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80272C38: lh          $t6, 0x2C($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2C);
    // 0x80272C3C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80272C40: sb          $t6, 0x56($a0)
    MEM_B(0X56, ctx->r4) = ctx->r14;
    // 0x80272C44: lw          $t7, -0x3250($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3250);
    // 0x80272C48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80272C4C: lhu         $a0, 0x0($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X0);
    // 0x80272C50: jal         0x80035BB8
    // 0x80272C54: nop

    func_80035BB8(rdram, ctx);
        goto after_0;
    // 0x80272C54: nop

    after_0:
    // 0x80272C58: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x80272C5C: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80272C60: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80272C64: lw          $t9, 0x4EF0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4EF0);
    // 0x80272C68: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80272C6C: jalr        $t9
    // 0x80272C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80272C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80272C74: lh          $a0, 0x2C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2C);
    // 0x80272C78: lh          $a1, 0x28($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X28);
    // 0x80272C7C: jal         0x8001D6EC
    // 0x80272C80: nop

    func_8001D6EC(rdram, ctx);
        goto after_2;
    // 0x80272C80: nop

    after_2:
    // 0x80272C84: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x80272C88: lh          $t1, 0x2C($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X2C);
    // 0x80272C8C: lb          $t0, 0x56($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X56);
    // 0x80272C90: nop

    // 0x80272C94: beq         $t0, $t1, L_80272CA8
    if (ctx->r8 == ctx->r9) {
        // 0x80272C98: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80272CA8;
    }
    // 0x80272C98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80272C9C: jal         0x80035734
    // 0x80272CA0: nop

    func_80035734(rdram, ctx);
        goto after_3;
    // 0x80272CA0: nop

    after_3:
    // 0x80272CA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80272CA8:
    // 0x80272CA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80272CAC: jr          $ra
    // 0x80272CB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80272CB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8026F480_func_80272C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272C74: lh          $a0, 0x2C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2C);
    // 0x80272C78: lh          $a1, 0x28($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X28);
    // 0x80272C7C: jal         0x8001D6EC
    // 0x80272C80: nop

    func_8001D6EC(rdram, ctx);
        goto after_0;
    // 0x80272C80: nop

    after_0:
    // 0x80272C84: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x80272C88: lh          $t1, 0x2C($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X2C);
    // 0x80272C8C: lb          $t0, 0x56($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X56);
    // 0x80272C90: nop

    // 0x80272C94: beq         $t0, $t1, L_80272CA8
    if (ctx->r8 == ctx->r9) {
        // 0x80272C98: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80272CA8;
    }
    // 0x80272C98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80272C9C: jal         0x80035734
    // 0x80272CA0: nop

    func_80035734(rdram, ctx);
        goto after_1;
    // 0x80272CA0: nop

    after_1:
    // 0x80272CA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80272CA8:
    // 0x80272CA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80272CAC: jr          $ra
    // 0x80272CB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80272CB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8026F480_func_80272C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272C90: nop

    // 0x80272C94: beq         $t0, $t1, L_80272CA8
    if (ctx->r8 == ctx->r9) {
        // 0x80272C98: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80272CA8;
    }
    // 0x80272C98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80272C9C: jal         0x80035734
    // 0x80272CA0: nop

    func_80035734(rdram, ctx);
        goto after_0;
    // 0x80272CA0: nop

    after_0:
    // 0x80272CA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80272CA8:
    // 0x80272CA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80272CAC: jr          $ra
    // 0x80272CB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80272CB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8026F480_func_80272CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272CA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80272CA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80272CAC: jr          $ra
    // 0x80272CB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80272CB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8026F480_func_80272CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272CB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80272CB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272CBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80272CC0: jal         0x8004974C
    // 0x80272CC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x80272CC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80272CC8: jal         0x80035770
    // 0x80272CCC: nop

    func_80035770(rdram, ctx);
        goto after_1;
    // 0x80272CCC: nop

    after_1:
    // 0x80272CD0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80272CD4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80272CD8: lh          $t7, 0x2C($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2C);
    // 0x80272CDC: jal         0x80039E58
    // 0x80272CE0: sb          $t7, -0x329F($at)
    MEM_B(-0X329F, ctx->r1) = ctx->r15;
    func_80039E58(rdram, ctx);
        goto after_2;
    // 0x80272CE0: sb          $t7, -0x329F($at)
    MEM_B(-0X329F, ctx->r1) = ctx->r15;
    after_2:
    // 0x80272CE4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80272CE8: beq         $v0, $zero, L_80272D48
    if (ctx->r2 == 0) {
        // 0x80272CEC: nop
    
            goto L_80272D48;
    }
    // 0x80272CEC: nop

    // 0x80272CF0: lh          $v0, 0x2C($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2C);
    // 0x80272CF4: nop

    // 0x80272CF8: bne         $v0, $zero, L_80272D38
    if (ctx->r2 != 0) {
        // 0x80272CFC: nop
    
            goto L_80272D38;
    }
    // 0x80272CFC: nop

    // 0x80272D00: lh          $t8, 0x38($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X38);
    // 0x80272D04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80272D08: bne         $t8, $at, L_80272D38
    if (ctx->r24 != ctx->r1) {
        // 0x80272D0C: nop
    
            goto L_80272D38;
    }
    // 0x80272D0C: nop

    // 0x80272D10: jal         0x80015BC0
    // 0x80272D14: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x80272D14: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x80272D18: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80272D1C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80272D20: sb          $zero, -0x326D($at)
    MEM_B(-0X326D, ctx->r1) = 0;
    // 0x80272D24: addiu       $a0, $a0, 0x2D64
    ctx->r4 = ADD32(ctx->r4, 0X2D64);
    // 0x80272D28: jal         0x8002989C
    // 0x80272D2C: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    func_8002989C(rdram, ctx);
        goto after_4;
    // 0x80272D2C: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    after_4:
    // 0x80272D30: b           L_80272D58
    // 0x80272D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80272D58;
    // 0x80272D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272D38:
    // 0x80272D38: jal         0x80037908
    // 0x80272D3C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_80037908(rdram, ctx);
        goto after_5;
    // 0x80272D3C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_5:
    // 0x80272D40: b           L_80272D58
    // 0x80272D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80272D58;
    // 0x80272D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272D48:
    // 0x80272D48: lbu         $a0, 0x2D($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X2D);
    // 0x80272D4C: jal         0x80037344
    // 0x80272D50: nop

    func_80037344(rdram, ctx);
        goto after_6;
    // 0x80272D50: nop

    after_6:
    // 0x80272D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272D58:
    // 0x80272D58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272D5C: jr          $ra
    // 0x80272D60: nop

    return;
    // 0x80272D60: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272CC0: jal         0x8004974C
    // 0x80272CC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x80272CC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80272CC8: jal         0x80035770
    // 0x80272CCC: nop

    func_80035770(rdram, ctx);
        goto after_1;
    // 0x80272CCC: nop

    after_1:
    // 0x80272CD0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80272CD4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80272CD8: lh          $t7, 0x2C($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2C);
    // 0x80272CDC: jal         0x80039E58
    // 0x80272CE0: sb          $t7, -0x329F($at)
    MEM_B(-0X329F, ctx->r1) = ctx->r15;
    func_80039E58(rdram, ctx);
        goto after_2;
    // 0x80272CE0: sb          $t7, -0x329F($at)
    MEM_B(-0X329F, ctx->r1) = ctx->r15;
    after_2:
    // 0x80272CE4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80272CE8: beq         $v0, $zero, L_80272D48
    if (ctx->r2 == 0) {
        // 0x80272CEC: nop
    
            goto L_80272D48;
    }
    // 0x80272CEC: nop

    // 0x80272CF0: lh          $v0, 0x2C($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2C);
    // 0x80272CF4: nop

    // 0x80272CF8: bne         $v0, $zero, L_80272D38
    if (ctx->r2 != 0) {
        // 0x80272CFC: nop
    
            goto L_80272D38;
    }
    // 0x80272CFC: nop

    // 0x80272D00: lh          $t8, 0x38($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X38);
    // 0x80272D04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80272D08: bne         $t8, $at, L_80272D38
    if (ctx->r24 != ctx->r1) {
        // 0x80272D0C: nop
    
            goto L_80272D38;
    }
    // 0x80272D0C: nop

    // 0x80272D10: jal         0x80015BC0
    // 0x80272D14: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x80272D14: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x80272D18: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80272D1C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80272D20: sb          $zero, -0x326D($at)
    MEM_B(-0X326D, ctx->r1) = 0;
    // 0x80272D24: addiu       $a0, $a0, 0x2D64
    ctx->r4 = ADD32(ctx->r4, 0X2D64);
    // 0x80272D28: jal         0x8002989C
    // 0x80272D2C: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    func_8002989C(rdram, ctx);
        goto after_4;
    // 0x80272D2C: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    after_4:
    // 0x80272D30: b           L_80272D58
    // 0x80272D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80272D58;
    // 0x80272D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272D38:
    // 0x80272D38: jal         0x80037908
    // 0x80272D3C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_80037908(rdram, ctx);
        goto after_5;
    // 0x80272D3C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_5:
    // 0x80272D40: b           L_80272D58
    // 0x80272D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80272D58;
    // 0x80272D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272D48:
    // 0x80272D48: lbu         $a0, 0x2D($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X2D);
    // 0x80272D4C: jal         0x80037344
    // 0x80272D50: nop

    func_80037344(rdram, ctx);
        goto after_6;
    // 0x80272D50: nop

    after_6:
    // 0x80272D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272D58:
    // 0x80272D58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272D5C: jr          $ra
    // 0x80272D60: nop

    return;
    // 0x80272D60: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272CDC: jal         0x80039E58
    // 0x80272CE0: sb          $t7, -0x329F($at)
    MEM_B(-0X329F, ctx->r1) = ctx->r15;
    func_80039E58(rdram, ctx);
        goto after_0;
    // 0x80272CE0: sb          $t7, -0x329F($at)
    MEM_B(-0X329F, ctx->r1) = ctx->r15;
    after_0:
    // 0x80272CE4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80272CE8: beq         $v0, $zero, L_80272D48
    if (ctx->r2 == 0) {
        // 0x80272CEC: nop
    
            goto L_80272D48;
    }
    // 0x80272CEC: nop

    // 0x80272CF0: lh          $v0, 0x2C($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2C);
    // 0x80272CF4: nop

    // 0x80272CF8: bne         $v0, $zero, L_80272D38
    if (ctx->r2 != 0) {
        // 0x80272CFC: nop
    
            goto L_80272D38;
    }
    // 0x80272CFC: nop

    // 0x80272D00: lh          $t8, 0x38($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X38);
    // 0x80272D04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80272D08: bne         $t8, $at, L_80272D38
    if (ctx->r24 != ctx->r1) {
        // 0x80272D0C: nop
    
            goto L_80272D38;
    }
    // 0x80272D0C: nop

    // 0x80272D10: jal         0x80015BC0
    // 0x80272D14: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x80272D14: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x80272D18: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80272D1C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80272D20: sb          $zero, -0x326D($at)
    MEM_B(-0X326D, ctx->r1) = 0;
    // 0x80272D24: addiu       $a0, $a0, 0x2D64
    ctx->r4 = ADD32(ctx->r4, 0X2D64);
    // 0x80272D28: jal         0x8002989C
    // 0x80272D2C: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    func_8002989C(rdram, ctx);
        goto after_2;
    // 0x80272D2C: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    after_2:
    // 0x80272D30: b           L_80272D58
    // 0x80272D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80272D58;
    // 0x80272D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272D38:
    // 0x80272D38: jal         0x80037908
    // 0x80272D3C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_80037908(rdram, ctx);
        goto after_3;
    // 0x80272D3C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_3:
    // 0x80272D40: b           L_80272D58
    // 0x80272D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80272D58;
    // 0x80272D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272D48:
    // 0x80272D48: lbu         $a0, 0x2D($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X2D);
    // 0x80272D4C: jal         0x80037344
    // 0x80272D50: nop

    func_80037344(rdram, ctx);
        goto after_4;
    // 0x80272D50: nop

    after_4:
    // 0x80272D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272D58:
    // 0x80272D58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272D5C: jr          $ra
    // 0x80272D60: nop

    return;
    // 0x80272D60: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272CF8: bne         $v0, $zero, L_80272D38
    if (ctx->r2 != 0) {
        // 0x80272CFC: nop
    
            goto L_80272D38;
    }
    // 0x80272CFC: nop

    // 0x80272D00: lh          $t8, 0x38($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X38);
    // 0x80272D04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80272D08: bne         $t8, $at, L_80272D38
    if (ctx->r24 != ctx->r1) {
        // 0x80272D0C: nop
    
            goto L_80272D38;
    }
    // 0x80272D0C: nop

    // 0x80272D10: jal         0x80015BC0
    // 0x80272D14: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x80272D14: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80272D18: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80272D1C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80272D20: sb          $zero, -0x326D($at)
    MEM_B(-0X326D, ctx->r1) = 0;
    // 0x80272D24: addiu       $a0, $a0, 0x2D64
    ctx->r4 = ADD32(ctx->r4, 0X2D64);
    // 0x80272D28: jal         0x8002989C
    // 0x80272D2C: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x80272D2C: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    after_1:
    // 0x80272D30: b           L_80272D58
    // 0x80272D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80272D58;
    // 0x80272D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272D38:
    // 0x80272D38: jal         0x80037908
    // 0x80272D3C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_80037908(rdram, ctx);
        goto after_2;
    // 0x80272D3C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_2:
    // 0x80272D40: b           L_80272D58
    // 0x80272D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80272D58;
    // 0x80272D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272D48: lbu         $a0, 0x2D($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X2D);
    // 0x80272D4C: jal         0x80037344
    // 0x80272D50: nop

    func_80037344(rdram, ctx);
        goto after_3;
    // 0x80272D50: nop

    after_3:
    // 0x80272D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272D58:
    // 0x80272D58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272D5C: jr          $ra
    // 0x80272D60: nop

    return;
    // 0x80272D60: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272D3C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x80272D40: b           L_80272D58
    // 0x80272D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80272D58;
    // 0x80272D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272D48: lbu         $a0, 0x2D($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X2D);
    // 0x80272D4C: jal         0x80037344
    // 0x80272D50: nop

    func_80037344(rdram, ctx);
        goto after_0;
    // 0x80272D50: nop

    after_0:
    // 0x80272D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80272D58:
    // 0x80272D58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272D5C: jr          $ra
    // 0x80272D60: nop

    return;
    // 0x80272D60: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272D64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80272D68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80272D6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80272D70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80272D74: jal         0x80037AB8
    // 0x80272D78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037AB8(rdram, ctx);
        goto after_0;
    // 0x80272D78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80272D7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80272D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80272D84: jr          $ra
    // 0x80272D88: nop

    return;
    // 0x80272D88: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272D88: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80272D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80272D8C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80272D90: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80272D94: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80272D98: jal         0x8004974C
    // 0x80272D9C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x80272D9C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80272DA0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80272DA4: lb          $t7, -0x32A1($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X32A1);
    // 0x80272DA8: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80272DAC: sra         $t6, $v1, 16
    ctx->r14 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80272DB0: bne         $t7, $zero, L_80272DD0
    if (ctx->r15 != 0) {
        // 0x80272DB4: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_80272DD0;
    }
    // 0x80272DB4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x80272DB8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80272DBC: addiu       $a0, $a0, -0x2F80
    ctx->r4 = ADD32(ctx->r4, -0X2F80);
    // 0x80272DC0: lb          $t8, 0x1($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X1);
    // 0x80272DC4: nop

    // 0x80272DC8: slti        $at, $t8, 0x46
    ctx->r1 = SIGNED(ctx->r24) < 0X46 ? 1 : 0;
    // 0x80272DCC: bne         $at, $zero, L_80272E2C
    if (ctx->r1 != 0) {
        // 0x80272DD0: lui         $a0, 0x8011
        ctx->r4 = S32(0X8011 << 16);
            goto L_80272E2C;
    }
L_80272DD0:
    // 0x80272DD0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80272DD4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80272DD8: bne         $v0, $at, L_80272DF0
    if (ctx->r2 != ctx->r1) {
        // 0x80272DDC: addiu       $a0, $a0, -0x2F80
        ctx->r4 = ADD32(ctx->r4, -0X2F80);
            goto L_80272DF0;
    }
    // 0x80272DDC: addiu       $a0, $a0, -0x2F80
    ctx->r4 = ADD32(ctx->r4, -0X2F80);
    // 0x80272DE0: lb          $t9, 0x3399($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X3399);
    // 0x80272DE4: nop

    // 0x80272DE8: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x80272DEC: bne         $at, $zero, L_80272E2C
    if (ctx->r1 != 0) {
        // 0x80272DF0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80272E2C;
    }
L_80272DF0:
    // 0x80272DF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80272DF4: bne         $v0, $at, L_80272E10
    if (ctx->r2 != ctx->r1) {
        // 0x80272DF8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80272E10;
    }
    // 0x80272DF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80272DFC: lb          $t0, 0x3399($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X3399);
    // 0x80272E00: nop

    // 0x80272E04: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x80272E08: bne         $at, $zero, L_80272E2C
    if (ctx->r1 != 0) {
        // 0x80272E0C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80272E2C;
    }
    // 0x80272E0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_80272E10:
    // 0x80272E10: bne         $v0, $at, L_80272E38
    if (ctx->r2 != ctx->r1) {
        // 0x80272E14: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80272E38;
    }
    // 0x80272E14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80272E18: lb          $t1, 0x3399($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X3399);
    // 0x80272E1C: nop

    // 0x80272E20: slti        $at, $t1, 0x6
    ctx->r1 = SIGNED(ctx->r9) < 0X6 ? 1 : 0;
    // 0x80272E24: beq         $at, $zero, L_80272E38
    if (ctx->r1 == 0) {
        // 0x80272E28: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80272E38;
    }
    // 0x80272E28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80272E2C:
    // 0x80272E2C: b           L_80272E38
    // 0x80272E30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80272E38;
    // 0x80272E30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80272E34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80272E38:
    // 0x80272E38: sll         $t2, $v0, 3
    ctx->r10 = S32(ctx->r2 << 3);
    // 0x80272E3C: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80272E40: addiu       $t3, $t3, 0x70D8
    ctx->r11 = ADD32(ctx->r11, 0X70D8);
    // 0x80272E44: subu        $t2, $t2, $v0
    ctx->r10 = SUB32(ctx->r10, ctx->r2);
    // 0x80272E48: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80272E4C: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x80272E50: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80272E54: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80272E58: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x80272E5C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80272E60: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80272E64: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80272E68: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80272E6C: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x80272E70: addu        $a3, $t2, $t3
    ctx->r7 = ADD32(ctx->r10, ctx->r11);
    // 0x80272E74: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80272E78: addiu       $a2, $zero, 0x62
    ctx->r6 = ADD32(0, 0X62);
    // 0x80272E7C: jal         0x8002F528
    // 0x80272E80: sh          $v1, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r3;
    func_8002F528(rdram, ctx);
        goto after_1;
    // 0x80272E80: sh          $v1, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r3;
    after_1:
    // 0x80272E84: lh          $v1, 0x34($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X34);
    // 0x80272E88: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80272E8C: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80272E90: beq         $at, $zero, L_80272EA0
    if (ctx->r1 == 0) {
        // 0x80272E94: addiu       $a0, $a0, -0x3868
        ctx->r4 = ADD32(ctx->r4, -0X3868);
            goto L_80272EA0;
    }
    // 0x80272E94: addiu       $a0, $a0, -0x3868
    ctx->r4 = ADD32(ctx->r4, -0X3868);
    // 0x80272E98: b           L_80272EA4
    // 0x80272E9C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_80272EA4;
    // 0x80272E9C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80272EA0:
    // 0x80272EA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80272EA4:
    // 0x80272EA4: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x80272EA8: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80272EAC: addu        $a3, $a3, $t8
    ctx->r7 = ADD32(ctx->r7, ctx->r24);
    // 0x80272EB0: lw          $a3, 0x3A74($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3A74);
    // 0x80272EB4: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x80272EB8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80272EBC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80272EC0: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x80272EC4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80272EC8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80272ECC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80272ED0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80272ED4: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    // 0x80272ED8: jal         0x8002F528
    // 0x80272EDC: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    func_8002F528(rdram, ctx);
        goto after_2;
    // 0x80272EDC: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_2:
    // 0x80272EE0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80272EE4: addiu       $t3, $zero, 0x70
    ctx->r11 = ADD32(0, 0X70);
    // 0x80272EE8: addiu       $t4, $zero, 0x58
    ctx->r12 = ADD32(0, 0X58);
    // 0x80272EEC: addiu       $t5, $zero, 0x2C
    ctx->r13 = ADD32(0, 0X2C);
    // 0x80272EF0: addiu       $t6, $zero, 0xB3
    ctx->r14 = ADD32(0, 0XB3);
    // 0x80272EF4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80272EF8: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80272EFC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80272F00: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80272F04: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80272F08: addiu       $a2, $zero, 0x68
    ctx->r6 = ADD32(0, 0X68);
    // 0x80272F0C: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x80272F10: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80272F14: jal         0x8004A5E4
    // 0x80272F18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8004A5E4(rdram, ctx);
        goto after_3;
    // 0x80272F18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_3:
    // 0x80272F1C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80272F20: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80272F24: sb          $t7, 0x5($t8)
    MEM_B(0X5, ctx->r24) = ctx->r15;
    // 0x80272F28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80272F2C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80272F30: jr          $ra
    // 0x80272F34: nop

    return;
    // 0x80272F34: nop

;}
