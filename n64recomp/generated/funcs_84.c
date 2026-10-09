#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_802B3BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3BBC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802B3BC0: lbu         $v0, -0x2F9B($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2F9B);
    // 0x802B3BC4: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B3BC8: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802B3BCC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x802B3BD0: addiu       $a0, $a0, 0x5804
    ctx->r4 = ADD32(ctx->r4, 0X5804);
    // 0x802B3BD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802B3BD8: lw          $t7, -0x13CC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X13CC);
    // 0x802B3BDC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x802B3BE0: lui         $t9, 0x802D
    ctx->r25 = S32(0X802D << 16);
    // 0x802B3BE4: sltu        $at, $t7, $v1
    ctx->r1 = ctx->r15 < ctx->r3 ? 1 : 0;
    // 0x802B3BE8: beq         $at, $zero, L_802B3BF8
    if (ctx->r1 == 0) {
        // 0x802B3BEC: addiu       $t9, $t9, -0x6000
        ctx->r25 = ADD32(ctx->r25, -0X6000);
            goto L_802B3BF8;
    }
    // 0x802B3BEC: addiu       $t9, $t9, -0x6000
    ctx->r25 = ADD32(ctx->r25, -0X6000);
    // 0x802B3BF0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x802B3BF4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802B3BF8:
    // 0x802B3BF8: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x802B3BFC: lhu         $t0, 0x523A($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X523A);
    // 0x802B3C00: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802B3C04: andi        $t5, $t0, 0x1000
    ctx->r13 = ctx->r8 & 0X1000;
    // 0x802B3C08: sh          $t5, 0x523A($at)
    MEM_H(0X523A, ctx->r1) = ctx->r13;
    // 0x802B3C0C: lui         $t2, 0x8010
    ctx->r10 = S32(0X8010 << 16);
    // 0x802B3C10: lhu         $t2, 0x523C($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X523C);
    // 0x802B3C14: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x802B3C18: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x802B3C1C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802B3C20: andi        $t8, $t2, 0x1000
    ctx->r24 = ctx->r10 & 0X1000;
    // 0x802B3C24: sh          $t8, 0x523C($at)
    MEM_H(0X523C, ctx->r1) = ctx->r24;
    // 0x802B3C28: lhu         $t4, 0x0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X0);
    // 0x802B3C2C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802B3C30: or          $t6, $t5, $t4
    ctx->r14 = ctx->r13 | ctx->r12;
    // 0x802B3C34: sh          $t6, 0x523A($at)
    MEM_H(0X523A, ctx->r1) = ctx->r14;
    // 0x802B3C38: lhu         $t7, 0x2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2);
    // 0x802B3C3C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802B3C40: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x802B3C44: sh          $t9, 0x523C($at)
    MEM_H(0X523C, ctx->r1) = ctx->r25;
    // 0x802B3C48: lh          $t0, 0x4($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X4);
    // 0x802B3C4C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802B3C50: sh          $t0, 0x523E($at)
    MEM_H(0X523E, ctx->r1) = ctx->r8;
    // 0x802B3C54: lh          $t2, 0x6($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X6);
    // 0x802B3C58: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802B3C5C: sh          $t2, 0x5240($at)
    MEM_H(0X5240, ctx->r1) = ctx->r10;
    // 0x802B3C60: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x802B3C64: nop

    // 0x802B3C68: addiu       $t5, $t1, 0x1
    ctx->r13 = ADD32(ctx->r9, 0X1);
    // 0x802B3C6C: jr          $ra
    // 0x802B3C70: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    return;
    // 0x802B3C70: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
;}
RECOMP_FUNC void func_802B3C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3C74: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x802B3C78: lbu         $t6, -0x2F9B($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X2F9B);
    // 0x802B3C7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3C80: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x802B3C84: beq         $at, $zero, L_802B3D0C
    if (ctx->r1 == 0) {
        // 0x802B3C88: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802B3D0C;
    }
    // 0x802B3C88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3C8C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802B3C90: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B3C94: addu        $at, $at, $t6
    gpr jr_addend_802B3CA0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802B3C98: lw          $t6, 0x1958($at)
    ctx->r14 = ADD32(ctx->r1, 0X1958);
    // 0x802B3C9C: nop

    // 0x802B3CA0: jr          $t6
    // 0x802B3CA4: nop

    switch (jr_addend_802B3CA0 >> 2) {
        case 0: goto L_802B3CA8; break;
        case 1: goto L_802B3CBC; break;
        case 2: goto L_802B3CD0; break;
        case 3: goto L_802B3CE4; break;
        case 4: goto L_802B3CF8; break;
        default: switch_error(__func__, 0x802B3CA0, 0x802C1958);
    }
    // 0x802B3CA4: nop

L_802B3CA8:
    // 0x802B3CA8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x802B3CAC: jal         0x80025A10
    // 0x802B3CB0: addiu       $a0, $a0, 0x3CC0
    ctx->r4 = ADD32(ctx->r4, 0X3CC0);
    func_80025A10(rdram, ctx);
        goto after_0;
    // 0x802B3CB0: addiu       $a0, $a0, 0x3CC0
    ctx->r4 = ADD32(ctx->r4, 0X3CC0);
    after_0:
    // 0x802B3CB4: b           L_802B3D1C
    // 0x802B3CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B3D1C;
    // 0x802B3CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B3CBC:
    // 0x802B3CBC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x802B3CC0: jal         0x80025A10
    // 0x802B3CC4: addiu       $a0, $a0, 0x3CC8
    ctx->r4 = ADD32(ctx->r4, 0X3CC8);
    func_80025A10(rdram, ctx);
        goto after_1;
    // 0x802B3CC4: addiu       $a0, $a0, 0x3CC8
    ctx->r4 = ADD32(ctx->r4, 0X3CC8);
    after_1:
    // 0x802B3CC8: b           L_802B3D1C
    // 0x802B3CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B3D1C;
    // 0x802B3CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B3CD0:
    // 0x802B3CD0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x802B3CD4: jal         0x80025A10
    // 0x802B3CD8: addiu       $a0, $a0, 0x3CD0
    ctx->r4 = ADD32(ctx->r4, 0X3CD0);
    func_80025A10(rdram, ctx);
        goto after_2;
    // 0x802B3CD8: addiu       $a0, $a0, 0x3CD0
    ctx->r4 = ADD32(ctx->r4, 0X3CD0);
    after_2:
    // 0x802B3CDC: b           L_802B3D1C
    // 0x802B3CE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B3D1C;
    // 0x802B3CE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B3CE4:
    // 0x802B3CE4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x802B3CE8: jal         0x80025A10
    // 0x802B3CEC: addiu       $a0, $a0, 0x3CD8
    ctx->r4 = ADD32(ctx->r4, 0X3CD8);
    func_80025A10(rdram, ctx);
        goto after_3;
    // 0x802B3CEC: addiu       $a0, $a0, 0x3CD8
    ctx->r4 = ADD32(ctx->r4, 0X3CD8);
    after_3:
    // 0x802B3CF0: b           L_802B3D1C
    // 0x802B3CF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B3D1C;
    // 0x802B3CF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B3CF8:
    // 0x802B3CF8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x802B3CFC: jal         0x80025A10
    // 0x802B3D00: addiu       $a0, $a0, 0x3CE0
    ctx->r4 = ADD32(ctx->r4, 0X3CE0);
    func_80025A10(rdram, ctx);
        goto after_4;
    // 0x802B3D00: addiu       $a0, $a0, 0x3CE0
    ctx->r4 = ADD32(ctx->r4, 0X3CE0);
    after_4:
    // 0x802B3D04: b           L_802B3D1C
    // 0x802B3D08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B3D1C;
    // 0x802B3D08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B3D0C:
    // 0x802B3D0C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x802B3D10: jal         0x80025A10
    // 0x802B3D14: addiu       $a0, $a0, 0x3CC0
    ctx->r4 = ADD32(ctx->r4, 0X3CC0);
    func_80025A10(rdram, ctx);
        goto after_5;
    // 0x802B3D14: addiu       $a0, $a0, 0x3CC0
    ctx->r4 = ADD32(ctx->r4, 0X3CC0);
    after_5:
    // 0x802B3D18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B3D1C:
    // 0x802B3D1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B3D20: jr          $ra
    // 0x802B3D24: nop

    return;
    // 0x802B3D24: nop

    // 0x802B3D28: nop

    // 0x802B3D2C: nop

;}
RECOMP_FUNC void func_802B3D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3D30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3D34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3D38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B3D3C: jal         0x8026E090
    // 0x802B3D40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x8026E090)(rdram, ctx);
        goto after_0;
    // 0x802B3D40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802B3D44: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B3D48: addiu       $a0, $a0, 0x3D64
    ctx->r4 = ADD32(ctx->r4, 0X3D64);
    // 0x802B3D4C: jal         0x8002989C
    // 0x802B3D50: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x802B3D50: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x802B3D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B3D58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B3D5C: jr          $ra
    // 0x802B3D60: nop

    return;
    // 0x802B3D60: nop

;}
RECOMP_FUNC void func_802B3D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3D64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3D68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3D6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B3D70: jal         0x802B5170
    // 0x802B3D74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_802B5170(rdram, ctx);
        goto after_0;
    // 0x802B3D74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802B3D78: jal         0x80015BC0
    // 0x802B3D7C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x802B3D7C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_1:
    // 0x802B3D80: jal         0x8000AB98
    // 0x802B3D84: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8000AB98(rdram, ctx);
        goto after_2;
    // 0x802B3D84: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
    // 0x802B3D88: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B3D8C: addiu       $a0, $a0, 0x3DA8
    ctx->r4 = ADD32(ctx->r4, 0X3DA8);
    // 0x802B3D90: jal         0x8004AE38
    // 0x802B3D94: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_3;
    // 0x802B3D94: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
    // 0x802B3D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B3D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B3DA0: jr          $ra
    // 0x802B3DA4: nop

    return;
    // 0x802B3DA4: nop

;}
RECOMP_FUNC void func_802B3DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3DA8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802B3DAC: lh          $t6, -0x32A8($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X32A8);
    // 0x802B3DB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3DB4: addiu       $at, $zero, 0x104
    ctx->r1 = ADD32(0, 0X104);
    // 0x802B3DB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3DBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B3DC0: bne         $t6, $at, L_802B3DD8
    if (ctx->r14 != ctx->r1) {
        // 0x802B3DC4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802B3DD8;
    }
    // 0x802B3DC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802B3DC8: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B3DCC: addiu       $a0, $a0, 0x3DE8
    ctx->r4 = ADD32(ctx->r4, 0X3DE8);
    // 0x802B3DD0: jal         0x8002989C
    // 0x802B3DD4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x802B3DD4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
L_802B3DD8:
    // 0x802B3DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B3DDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B3DE0: jr          $ra
    // 0x802B3DE4: nop

    return;
    // 0x802B3DE4: nop

;}
RECOMP_FUNC void func_802B3DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3DE8: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x802B3DEC: lhu         $t6, 0x523C($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X523C);
    // 0x802B3DF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3DF4: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x802B3DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3DFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B3E00: beq         $t7, $zero, L_802B3E30
    if (ctx->r15 == 0) {
        // 0x802B3E04: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802B3E30;
    }
    // 0x802B3E04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802B3E08: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802B3E0C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x802B3E10: lbu         $t8, 0xC($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XC);
    // 0x802B3E14: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B3E18: bne         $t8, $at, L_802B3E28
    if (ctx->r24 != ctx->r1) {
        // 0x802B3E1C: sb          $zero, 0x3F($v0)
        MEM_B(0X3F, ctx->r2) = 0;
            goto L_802B3E28;
    }
    // 0x802B3E1C: sb          $zero, 0x3F($v0)
    MEM_B(0X3F, ctx->r2) = 0;
    // 0x802B3E20: jal         0x80015BC0
    // 0x802B3E24: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x802B3E24: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
L_802B3E28:
    // 0x802B3E28: jal         0x80037BA8
    // 0x802B3E2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037BA8(rdram, ctx);
        goto after_1;
    // 0x802B3E2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
L_802B3E30:
    // 0x802B3E30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B3E34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B3E38: jr          $ra
    // 0x802B3E3C: nop

    return;
    // 0x802B3E3C: nop

;}
RECOMP_FUNC void func_802B3E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3E40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3E44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3E48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B3E4C: jal         0x80036234
    // 0x802B3E50: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x802B3E50: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802B3E54: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x802B3E58: jal         0x80035FF0
    // 0x802B3E5C: addiu       $a0, $a0, -0xA30
    ctx->r4 = ADD32(ctx->r4, -0XA30);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x802B3E5C: addiu       $a0, $a0, -0xA30
    ctx->r4 = ADD32(ctx->r4, -0XA30);
    after_1:
    // 0x802B3E60: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x802B3E64: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802B3E68: jal         0x80049E40
    // 0x802B3E6C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x802B3E6C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x802B3E70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802B3E74: jal         0x80020318
    // 0x802B3E78: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80020318(rdram, ctx);
        goto after_3;
    // 0x802B3E78: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_3:
    // 0x802B3E7C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802B3E80: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x802B3E84: lbu         $t6, 0x754($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X754);
    // 0x802B3E88: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B3E8C: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x802B3E90: sb          $t7, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r15;
    // 0x802B3E94: addiu       $a0, $a0, 0x3EB0
    ctx->r4 = ADD32(ctx->r4, 0X3EB0);
    // 0x802B3E98: jal         0x8002989C
    // 0x802B3E9C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_4;
    // 0x802B3E9C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_4:
    // 0x802B3EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B3EA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B3EA8: jr          $ra
    // 0x802B3EAC: nop

    return;
    // 0x802B3EAC: nop

;}
RECOMP_FUNC void func_802B3EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3EB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3EB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B3EB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3EBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802B3EC0: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B3EC4: addiu       $a0, $a0, 0x3F70
    ctx->r4 = ADD32(ctx->r4, 0X3F70);
    // 0x802B3EC8: jal         0x8004A9B4
    // 0x802B3ECC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_0;
    // 0x802B3ECC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x802B3ED0: jal         0x8002198C
    // 0x802B3ED4: nop

    func_8002198C(rdram, ctx);
        goto after_1;
    // 0x802B3ED4: nop

    after_1:
    // 0x802B3ED8: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x802B3EDC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x802B3EE0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x802B3EE4: lbu         $t7, -0x32A4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X32A4);
    // 0x802B3EE8: sh          $t6, -0x2FAA($at)
    MEM_H(-0X2FAA, ctx->r1) = ctx->r14;
    // 0x802B3EEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B3EF0: bne         $t7, $at, L_802B3F2C
    if (ctx->r15 != ctx->r1) {
        // 0x802B3EF4: nop
    
            goto L_802B3F2C;
    }
    // 0x802B3EF4: nop

    // 0x802B3EF8: jal         0x80280E2C
    // 0x802B3EFC: nop

    LOOKUP_FUNC(0x80280E2C)(rdram, ctx);
        goto after_2;
    // 0x802B3EFC: nop

    after_2:
    // 0x802B3F00: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802B3F04: bne         $v0, $at, L_802B3F1C
    if (ctx->r2 != ctx->r1) {
        // 0x802B3F08: nop
    
            goto L_802B3F1C;
    }
    // 0x802B3F08: nop

    // 0x802B3F0C: jal         0x8000AB98
    // 0x802B3F10: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_8000AB98(rdram, ctx);
        goto after_3;
    // 0x802B3F10: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x802B3F14: b           L_802B3F58
    // 0x802B3F18: nop

        goto L_802B3F58;
    // 0x802B3F18: nop

L_802B3F1C:
    // 0x802B3F1C: jal         0x8000AB98
    // 0x802B3F20: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_8000AB98(rdram, ctx);
        goto after_4;
    // 0x802B3F20: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_4:
    // 0x802B3F24: b           L_802B3F58
    // 0x802B3F28: nop

        goto L_802B3F58;
    // 0x802B3F28: nop

L_802B3F2C:
    // 0x802B3F2C: jal         0x80280E2C
    // 0x802B3F30: nop

    LOOKUP_FUNC(0x80280E2C)(rdram, ctx);
        goto after_5;
    // 0x802B3F30: nop

    after_5:
    // 0x802B3F34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B3F38: bne         $v0, $at, L_802B3F50
    if (ctx->r2 != ctx->r1) {
        // 0x802B3F3C: nop
    
            goto L_802B3F50;
    }
    // 0x802B3F3C: nop

    // 0x802B3F40: jal         0x8000AB98
    // 0x802B3F44: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_8000AB98(rdram, ctx);
        goto after_6;
    // 0x802B3F44: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_6:
    // 0x802B3F48: b           L_802B3F58
    // 0x802B3F4C: nop

        goto L_802B3F58;
    // 0x802B3F4C: nop

L_802B3F50:
    // 0x802B3F50: jal         0x8000AB98
    // 0x802B3F54: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_8000AB98(rdram, ctx);
        goto after_7;
    // 0x802B3F54: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_7:
L_802B3F58:
    // 0x802B3F58: jal         0x800047A4
    // 0x802B3F5C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_800047A4(rdram, ctx);
        goto after_8;
    // 0x802B3F5C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_8:
    // 0x802B3F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B3F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B3F68: jr          $ra
    // 0x802B3F6C: nop

    return;
    // 0x802B3F6C: nop

;}
RECOMP_FUNC void func_802B3F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3F70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B3F74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3F78: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802B3F7C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802B3F80: jal         0x80049A90
    // 0x802B3F84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80049A90(rdram, ctx);
        goto after_0;
    // 0x802B3F84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802B3F88: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x802B3F8C: slti        $at, $t6, 0x24
    ctx->r1 = SIGNED(ctx->r14) < 0X24 ? 1 : 0;
    // 0x802B3F90: bne         $at, $zero, L_802B3F9C
    if (ctx->r1 != 0) {
        // 0x802B3F94: andi        $a1, $v0, 0xFF
        ctx->r5 = ctx->r2 & 0XFF;
            goto L_802B3F9C;
    }
    // 0x802B3F94: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x802B3F98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_802B3F9C:
    // 0x802B3F9C: addiu       $a0, $zero, 0x125
    ctx->r4 = ADD32(0, 0X125);
    // 0x802B3FA0: jal         0x80015BC0
    // 0x802B3FA4: sb          $a1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r5;
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x802B3FA4: sb          $a1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r5;
    after_1:
    // 0x802B3FA8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x802B3FAC: lbu         $t7, -0x32A4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X32A4);
    // 0x802B3FB0: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x802B3FB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B3FB8: bne         $t7, $at, L_802B3FC8
    if (ctx->r15 != ctx->r1) {
        // 0x802B3FBC: nop
    
            goto L_802B3FC8;
    }
    // 0x802B3FBC: nop

    // 0x802B3FC0: jal         0x80079E08
    // 0x802B3FC4: andi        $a0, $a1, 0xFF
    ctx->r4 = ctx->r5 & 0XFF;
    func_80079E08(rdram, ctx);
        goto after_2;
    // 0x802B3FC4: andi        $a0, $a1, 0xFF
    ctx->r4 = ctx->r5 & 0XFF;
    after_2:
L_802B3FC8:
    // 0x802B3FC8: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B3FCC: jal         0x800296E0
    // 0x802B3FD0: addiu       $a0, $a0, 0x3FE4
    ctx->r4 = ADD32(ctx->r4, 0X3FE4);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x802B3FD0: addiu       $a0, $a0, 0x3FE4
    ctx->r4 = ADD32(ctx->r4, 0X3FE4);
    after_3:
    // 0x802B3FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B3FD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802B3FDC: jr          $ra
    // 0x802B3FE0: nop

    return;
    // 0x802B3FE0: nop

;}
RECOMP_FUNC void func_802B3FE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3FE4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802B3FE8: lw          $t6, 0x6980($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6980);
    // 0x802B3FEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3FF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B3FF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3FF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B3FFC: bne         $t6, $at, L_802B4014
    if (ctx->r14 != ctx->r1) {
        // 0x802B4000: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802B4014;
    }
    // 0x802B4000: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802B4004: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B4008: addiu       $a0, $a0, 0x4024
    ctx->r4 = ADD32(ctx->r4, 0X4024);
    // 0x802B400C: jal         0x8002989C
    // 0x802B4010: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x802B4010: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_0:
L_802B4014:
    // 0x802B4014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B4018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B401C: jr          $ra
    // 0x802B4020: nop

    return;
    // 0x802B4020: nop

;}
RECOMP_FUNC void func_802B4024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4024: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B4028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B402C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B4030: jal         0x8005ACAC
    // 0x802B4034: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8005ACAC(rdram, ctx);
        goto after_0;
    // 0x802B4034: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802B4038: jal         0x800603F0
    // 0x802B403C: nop

    func_800603F0(rdram, ctx);
        goto after_1;
    // 0x802B403C: nop

    after_1:
    // 0x802B4040: jal         0x80020270
    // 0x802B4044: nop

    func_80020270(rdram, ctx);
        goto after_2;
    // 0x802B4044: nop

    after_2:
    // 0x802B4048: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B404C: addiu       $a0, $a0, 0x4068
    ctx->r4 = ADD32(ctx->r4, 0X4068);
    // 0x802B4050: jal         0x8002989C
    // 0x802B4054: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002989C(rdram, ctx);
        goto after_3;
    // 0x802B4054: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x802B4058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B405C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B4060: jr          $ra
    // 0x802B4064: nop

    return;
    // 0x802B4064: nop

;}
RECOMP_FUNC void func_802B4068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B406C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B4070: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B4074: jal         0x800375E8
    // 0x802B4078: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800375E8(rdram, ctx);
        goto after_0;
    // 0x802B4078: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802B407C: jal         0x80037608
    // 0x802B4080: nop

    func_80037608(rdram, ctx);
        goto after_1;
    // 0x802B4080: nop

    after_1:
    // 0x802B4084: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x802B4088: lui         $t6, 0x802B
    ctx->r14 = S32(0X802B << 16);
    // 0x802B408C: addiu       $t6, $t6, 0x40B0
    ctx->r14 = ADD32(ctx->r14, 0X40B0);
    // 0x802B4090: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x802B4094: addiu       $a0, $a0, 0x7404
    ctx->r4 = ADD32(ctx->r4, 0X7404);
    // 0x802B4098: jal         0x800296E0
    // 0x802B409C: sw          $t6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r14;
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x802B409C: sw          $t6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r14;
    after_2:
    // 0x802B40A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B40A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B40A8: jr          $ra
    // 0x802B40AC: nop

    return;
    // 0x802B40AC: nop

;}
RECOMP_FUNC void func_802B40B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B40B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B40B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B40B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B40BC: jal         0x8026E090
    // 0x802B40C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x8026E090)(rdram, ctx);
        goto after_0;
    // 0x802B40C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802B40C4: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B40C8: addiu       $a0, $a0, 0x40E4
    ctx->r4 = ADD32(ctx->r4, 0X40E4);
    // 0x802B40CC: jal         0x8002989C
    // 0x802B40D0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x802B40D0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x802B40D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B40D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B40DC: jr          $ra
    // 0x802B40E0: nop

    return;
    // 0x802B40E0: nop

;}
RECOMP_FUNC void func_802B40E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B40E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B40E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B40EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B40F0: jal         0x8026D3E0
    // 0x802B40F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x8026D3E0)(rdram, ctx);
        goto after_0;
    // 0x802B40F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802B40F8: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B40FC: jal         0x800296E0
    // 0x802B4100: addiu       $a0, $a0, 0x4114
    ctx->r4 = ADD32(ctx->r4, 0X4114);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x802B4100: addiu       $a0, $a0, 0x4114
    ctx->r4 = ADD32(ctx->r4, 0X4114);
    after_1:
    // 0x802B4104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B4108: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B410C: jr          $ra
    // 0x802B4110: nop

    return;
    // 0x802B4110: nop

;}
RECOMP_FUNC void func_802B4114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B4118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B411C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B4120: jal         0x8026D544
    // 0x802B4124: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x8026D544)(rdram, ctx);
        goto after_0;
    // 0x802B4124: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802B4128: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x802B412C: sb          $zero, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = 0;
    // 0x802B4130: jal         0x80021A40
    // 0x802B4134: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80021A40(rdram, ctx);
        goto after_1;
    // 0x802B4134: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x802B4138: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B413C: jal         0x800296E0
    // 0x802B4140: addiu       $a0, $a0, 0x4154
    ctx->r4 = ADD32(ctx->r4, 0X4154);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x802B4140: addiu       $a0, $a0, 0x4154
    ctx->r4 = ADD32(ctx->r4, 0X4154);
    after_2:
    // 0x802B4144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B4148: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B414C: jr          $ra
    // 0x802B4150: nop

    return;
    // 0x802B4150: nop

;}
RECOMP_FUNC void func_802B4154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4154: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x802B4158: lh          $t6, -0x2FAC($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X2FAC);
    // 0x802B415C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B4160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B4164: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B4168: bgtz        $t6, L_802B418C
    if (SIGNED(ctx->r14) > 0) {
        // 0x802B416C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802B418C;
    }
    // 0x802B416C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802B4170: jal         0x80015BC0
    // 0x802B4174: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x802B4174: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_0:
    // 0x802B4178: jal         0x80021940
    // 0x802B417C: nop

    func_80021940(rdram, ctx);
        goto after_1;
    // 0x802B417C: nop

    after_1:
    // 0x802B4180: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B4184: jal         0x800296E0
    // 0x802B4188: addiu       $a0, $a0, 0x419C
    ctx->r4 = ADD32(ctx->r4, 0X419C);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x802B4188: addiu       $a0, $a0, 0x419C
    ctx->r4 = ADD32(ctx->r4, 0X419C);
    after_2:
L_802B418C:
    // 0x802B418C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B4190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B4194: jr          $ra
    // 0x802B4198: nop

    return;
    // 0x802B4198: nop

;}
RECOMP_FUNC void func_802B419C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B419C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B41A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B41A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B41A8: jal         0x8026D8C8
    // 0x802B41AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x8026D8C8)(rdram, ctx);
        goto after_0;
    // 0x802B41AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802B41B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B41B4: bne         $v0, $at, L_802B41C4
    if (ctx->r2 != ctx->r1) {
        // 0x802B41B8: lui         $a0, 0x802B
        ctx->r4 = S32(0X802B << 16);
            goto L_802B41C4;
    }
    // 0x802B41B8: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B41BC: jal         0x800296E0
    // 0x802B41C0: addiu       $a0, $a0, 0x41D4
    ctx->r4 = ADD32(ctx->r4, 0X41D4);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x802B41C0: addiu       $a0, $a0, 0x41D4
    ctx->r4 = ADD32(ctx->r4, 0X41D4);
    after_1:
L_802B41C4:
    // 0x802B41C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B41C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B41CC: jr          $ra
    // 0x802B41D0: nop

    return;
    // 0x802B41D0: nop

;}
RECOMP_FUNC void func_802B41D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B41D4: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x802B41D8: lhu         $t6, 0x523C($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X523C);
    // 0x802B41DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B41E0: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x802B41E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B41E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B41EC: beq         $t7, $zero, L_802B4210
    if (ctx->r15 == 0) {
        // 0x802B41F0: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802B4210;
    }
    // 0x802B41F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802B41F4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802B41F8: jal         0x80039D98
    // 0x802B41FC: sb          $zero, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = 0;
    func_80039D98(rdram, ctx);
        goto after_0;
    // 0x802B41FC: sb          $zero, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = 0;
    after_0:
    // 0x802B4200: jal         0x80015BC0
    // 0x802B4204: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x802B4204: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x802B4208: jal         0x80037BA8
    // 0x802B420C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037BA8(rdram, ctx);
        goto after_2;
    // 0x802B420C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
L_802B4210:
    // 0x802B4210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B4214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B4218: jr          $ra
    // 0x802B421C: nop

    return;
    // 0x802B421C: nop

;}
RECOMP_FUNC void func_802B4220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4220: jr          $ra
    // 0x802B4224: nop

    return;
    // 0x802B4224: nop

;}
RECOMP_FUNC void func_802B4228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4228: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802B422C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B4230: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
L_802B4234:
    // 0x802B4234: sll         $a3, $a2, 2
    ctx->r7 = S32(ctx->r6 << 2);
    // 0x802B4238: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x802B423C: sll         $a3, $a3, 6
    ctx->r7 = S32(ctx->r7 << 6);
    // 0x802B4240: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_802B4244:
    // 0x802B4244: addu        $t6, $a3, $t0
    ctx->r14 = ADD32(ctx->r7, ctx->r8);
    // 0x802B4248: bgez        $t6, L_802B4258
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802B424C: sra         $t7, $t6, 2
        ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
            goto L_802B4258;
    }
    // 0x802B424C: sra         $t7, $t6, 2
    ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
    // 0x802B4250: addiu       $at, $t6, 0x3
    ctx->r1 = ADD32(ctx->r14, 0X3);
    // 0x802B4254: sra         $t7, $at, 2
    ctx->r15 = S32(SIGNED(ctx->r1) >> 2);
L_802B4258:
    // 0x802B4258: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x802B425C: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x802B4260: addiu       $v0, $t0, 0x4
    ctx->r2 = ADD32(ctx->r8, 0X4);
    // 0x802B4264: lw          $t2, 0x0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X0);
    // 0x802B4268: lw          $t3, 0x4($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X4);
    // 0x802B426C: andi        $t0, $v0, 0xFFFF
    ctx->r8 = ctx->r2 & 0XFFFF;
    // 0x802B4270: slti        $at, $t0, 0x40
    ctx->r1 = SIGNED(ctx->r8) < 0X40 ? 1 : 0;
    // 0x802B4274: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x802B4278: sw          $t2, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r10;
    // 0x802B427C: bne         $at, $zero, L_802B4244
    if (ctx->r1 != 0) {
        // 0x802B4280: sw          $t3, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r11;
            goto L_802B4244;
    }
    // 0x802B4280: sw          $t3, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r11;
    // 0x802B4284: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802B4288: andi        $a2, $v1, 0xFFFF
    ctx->r6 = ctx->r3 & 0XFFFF;
    // 0x802B428C: slti        $at, $a2, 0x1E
    ctx->r1 = SIGNED(ctx->r6) < 0X1E ? 1 : 0;
    // 0x802B4290: bne         $at, $zero, L_802B4234
    if (ctx->r1 != 0) {
        // 0x802B4294: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_802B4234;
    }
    // 0x802B4294: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x802B4298: jr          $ra
    // 0x802B429C: nop

    return;
    // 0x802B429C: nop

;}
RECOMP_FUNC void func_802B42A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B42A0: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x802B42A4: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x802B42A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B42AC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x802B42B0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802B42B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B42B8: addiu       $t6, $t6, -0x440
    ctx->r14 = ADD32(ctx->r14, -0X440);
    // 0x802B42BC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x802B42C0: jal         0x80020270
    // 0x802B42C4: sw          $t6, -0x1178($at)
    MEM_W(-0X1178, ctx->r1) = ctx->r14;
    func_80020270(rdram, ctx);
        goto after_0;
    // 0x802B42C4: sw          $t6, -0x1178($at)
    MEM_W(-0X1178, ctx->r1) = ctx->r14;
    after_0:
    // 0x802B42C8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x802B42CC: jal         0x80021004
    // 0x802B42D0: sb          $zero, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = 0;
    func_80021004(rdram, ctx);
        goto after_1;
    // 0x802B42D0: sb          $zero, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = 0;
    after_1:
    // 0x802B42D4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B42D8: lui         $t8, 0x4000
    ctx->r24 = S32(0X4000 << 16);
    // 0x802B42DC: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x802B42E0: addiu       $a0, $a1, 0x5828
    ctx->r4 = ADD32(ctx->r5, 0X5828);
    // 0x802B42E4: ori         $t8, $t8, 0x24
    ctx->r24 = ctx->r24 | 0X24;
    // 0x802B42E8: addiu       $t9, $t9, -0xD80
    ctx->r25 = ADD32(ctx->r25, -0XD80);
    // 0x802B42EC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x802B42F0: jal         0x80025A10
    // 0x802B42F4: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    func_80025A10(rdram, ctx);
        goto after_2;
    // 0x802B42F4: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    after_2:
    // 0x802B42F8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B42FC: lui         $t0, 0x4000
    ctx->r8 = S32(0X4000 << 16);
    // 0x802B4300: lui         $t1, 0x8034
    ctx->r9 = S32(0X8034 << 16);
    // 0x802B4304: addiu       $a1, $a1, 0x5828
    ctx->r5 = ADD32(ctx->r5, 0X5828);
    // 0x802B4308: ori         $t0, $t0, 0x58
    ctx->r8 = ctx->r8 | 0X58;
    // 0x802B430C: addiu       $t1, $t1, -0xD80
    ctx->r9 = ADD32(ctx->r9, -0XD80);
    // 0x802B4310: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B4314: sw          $t0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r8;
    // 0x802B4318: sw          $t1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r9;
    // 0x802B431C: jal         0x80025A10
    // 0x802B4320: addiu       $a0, $a0, 0x5830
    ctx->r4 = ADD32(ctx->r4, 0X5830);
    func_80025A10(rdram, ctx);
        goto after_3;
    // 0x802B4320: addiu       $a0, $a0, 0x5830
    ctx->r4 = ADD32(ctx->r4, 0X5830);
    after_3:
    // 0x802B4324: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B4328: lui         $t2, 0x4000
    ctx->r10 = S32(0X4000 << 16);
    // 0x802B432C: lui         $t3, 0x8035
    ctx->r11 = S32(0X8035 << 16);
    // 0x802B4330: addiu       $a1, $a1, 0x5828
    ctx->r5 = ADD32(ctx->r5, 0X5828);
    // 0x802B4334: ori         $t2, $t2, 0x25
    ctx->r10 = ctx->r10 | 0X25;
    // 0x802B4338: addiu       $t3, $t3, -0xD80
    ctx->r11 = ADD32(ctx->r11, -0XD80);
    // 0x802B433C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B4340: sw          $t2, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r10;
    // 0x802B4344: sw          $t3, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r11;
    // 0x802B4348: jal         0x80025A10
    // 0x802B434C: addiu       $a0, $a0, 0x5838
    ctx->r4 = ADD32(ctx->r4, 0X5838);
    func_80025A10(rdram, ctx);
        goto after_4;
    // 0x802B434C: addiu       $a0, $a0, 0x5838
    ctx->r4 = ADD32(ctx->r4, 0X5838);
    after_4:
    // 0x802B4350: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x802B4354: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4358: sw          $t4, 0x5810($at)
    MEM_W(0X5810, ctx->r1) = ctx->r12;
    // 0x802B435C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4360: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802B4364: sw          $t5, 0x5818($at)
    MEM_W(0X5818, ctx->r1) = ctx->r13;
    // 0x802B4368: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B436C: sw          $zero, -0x1254($at)
    MEM_W(-0X1254, ctx->r1) = 0;
    // 0x802B4370: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4374: sw          $zero, 0x581C($at)
    MEM_W(0X581C, ctx->r1) = 0;
    // 0x802B4378: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x802B437C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4380: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x802B4384: addiu       $v1, $v1, -0x2F98
    ctx->r3 = ADD32(ctx->r3, -0X2F98);
    // 0x802B4388: sw          $t6, 0x5820($at)
    MEM_W(0X5820, ctx->r1) = ctx->r14;
    // 0x802B438C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x802B4390: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x802B4394: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x802B4398: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x802B439C: sw          $zero, 0x2134($t8)
    MEM_W(0X2134, ctx->r24) = 0;
    // 0x802B43A0: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x802B43A4: addiu       $t1, $zero, 0x140
    ctx->r9 = ADD32(0, 0X140);
    // 0x802B43A8: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x802B43AC: sw          $zero, 0x2138($t0)
    MEM_W(0X2138, ctx->r8) = 0;
    // 0x802B43B0: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x802B43B4: addiu       $t4, $zero, 0xF0
    ctx->r12 = ADD32(0, 0XF0);
    // 0x802B43B8: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x802B43BC: sw          $t1, 0x213C($t3)
    MEM_W(0X213C, ctx->r11) = ctx->r9;
    // 0x802B43C0: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x802B43C4: nop

    // 0x802B43C8: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x802B43CC: jal         0x80021940
    // 0x802B43D0: sw          $t4, 0x2140($t6)
    MEM_W(0X2140, ctx->r14) = ctx->r12;
    func_80021940(rdram, ctx);
        goto after_5;
    // 0x802B43D0: sw          $t4, 0x2140($t6)
    MEM_W(0X2140, ctx->r14) = ctx->r12;
    after_5:
    // 0x802B43D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B43D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B43DC: jr          $ra
    // 0x802B43E0: nop

    return;
    // 0x802B43E0: nop

;}
RECOMP_FUNC void func_802B43E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B43E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802B43E8: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802B43EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802B43F0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802B43F4: addiu       $t7, $t7, -0x1350
    ctx->r15 = ADD32(ctx->r15, -0X1350);
    // 0x802B43F8: addiu       $t6, $zero, 0x565
    ctx->r14 = ADD32(0, 0X565);
    // 0x802B43FC: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x802B4400: addiu       $t9, $zero, 0x60
    ctx->r25 = ADD32(0, 0X60);
    // 0x802B4404: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x802B4408: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802B440C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802B4410: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802B4414: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802B4418: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B441C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B4420: jal         0x802A9DA8
    // 0x802B4424: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_802A9DA8(rdram, ctx);
        goto after_0;
    // 0x802B4424: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_0:
    // 0x802B4428: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x802B442C: addiu       $v1, $v1, -0x2F98
    ctx->r3 = ADD32(ctx->r3, -0X2F98);
    // 0x802B4430: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x802B4434: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x802B4438: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
    // 0x802B443C: addu        $v0, $t0, $a0
    ctx->r2 = ADD32(ctx->r8, ctx->r4);
    // 0x802B4440: lbu         $t1, 0x214C($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X214C);
    // 0x802B4444: nop

    // 0x802B4448: andi        $t2, $t1, 0xFF01
    ctx->r10 = ctx->r9 & 0XFF01;
    // 0x802B444C: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x802B4450: sb          $t3, 0x214C($v0)
    MEM_B(0X214C, ctx->r2) = ctx->r11;
    // 0x802B4454: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x802B4458: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x802B445C: addu        $t6, $t5, $a0
    ctx->r14 = ADD32(ctx->r13, ctx->r4);
    // 0x802B4460: sb          $t4, 0x2155($t6)
    MEM_B(0X2155, ctx->r14) = ctx->r12;
    // 0x802B4464: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802B4468: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802B446C: jr          $ra
    // 0x802B4470: nop

    return;
    // 0x802B4470: nop

;}
RECOMP_FUNC void func_802B4474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4474: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802B4478: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802B447C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x802B4480: sll         $a3, $a2, 16
    ctx->r7 = S32(ctx->r6 << 16);
    // 0x802B4484: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x802B4488: lh          $a2, 0x3E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X3E);
    // 0x802B448C: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x802B4490: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802B4494: lui         $a1, 0x8035
    ctx->r5 = S32(0X8035 << 16);
    // 0x802B4498: addiu       $t7, $zero, 0x3E8
    ctx->r15 = ADD32(0, 0X3E8);
    // 0x802B449C: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x802B44A0: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x802B44A4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x802B44A8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802B44AC: addiu       $a1, $a1, -0xD80
    ctx->r5 = ADD32(ctx->r5, -0XD80);
    // 0x802B44B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802B44B4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802B44B8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x802B44BC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x802B44C0: jal         0x80061E9C
    // 0x802B44C4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_80061E9C(rdram, ctx);
        goto after_0;
    // 0x802B44C4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x802B44C8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x802B44CC: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x802B44D0: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x802B44D4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x802B44D8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802B44DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802B44E0: jr          $ra
    // 0x802B44E4: nop

    return;
    // 0x802B44E4: nop

;}
RECOMP_FUNC void func_802B44E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B44E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B44EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B44F0: jal         0x80063B94
    // 0x802B44F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80063B94(rdram, ctx);
        goto after_0;
    // 0x802B44F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x802B44F8: jal         0x80027B60
    // 0x802B44FC: nop

    func_80027B60(rdram, ctx);
        goto after_1;
    // 0x802B44FC: nop

    after_1:
    // 0x802B4500: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x802B4504: addiu       $a0, $a0, 0x2288
    ctx->r4 = ADD32(ctx->r4, 0X2288);
    // 0x802B4508: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x802B450C: jal         0x802B4474
    // 0x802B4510: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_802B4474(rdram, ctx);
        goto after_2;
    // 0x802B4510: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_2:
    // 0x802B4514: lui         $s0, 0x600
    ctx->r16 = S32(0X600 << 16);
    // 0x802B4518: addiu       $s0, $s0, 0x1A58
    ctx->r16 = ADD32(ctx->r16, 0X1A58);
    // 0x802B451C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B4520: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x802B4524: jal         0x802B4474
    // 0x802B4528: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_802B4474(rdram, ctx);
        goto after_3;
    // 0x802B4528: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_3:
    // 0x802B452C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B4530: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802B4534: jal         0x802B4474
    // 0x802B4538: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_802B4474(rdram, ctx);
        goto after_4;
    // 0x802B4538: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_4:
    // 0x802B453C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B4540: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x802B4544: jal         0x802B4474
    // 0x802B4548: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_802B4474(rdram, ctx);
        goto after_5;
    // 0x802B4548: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_5:
    // 0x802B454C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B4550: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x802B4554: jal         0x802B4474
    // 0x802B4558: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_802B4474(rdram, ctx);
        goto after_6;
    // 0x802B4558: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_6:
    // 0x802B455C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B4560: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x802B4564: jal         0x802B4474
    // 0x802B4568: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_802B4474(rdram, ctx);
        goto after_7;
    // 0x802B4568: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_7:
    // 0x802B456C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B4570: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x802B4574: jal         0x802B4474
    // 0x802B4578: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_802B4474(rdram, ctx);
        goto after_8;
    // 0x802B4578: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_8:
    // 0x802B457C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B4580: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x802B4584: jal         0x802B4474
    // 0x802B4588: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_802B4474(rdram, ctx);
        goto after_9;
    // 0x802B4588: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_9:
    // 0x802B458C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B4590: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x802B4594: jal         0x802B4474
    // 0x802B4598: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_802B4474(rdram, ctx);
        goto after_10;
    // 0x802B4598: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_10:
    // 0x802B459C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B45A0: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x802B45A4: jal         0x802B4474
    // 0x802B45A8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_802B4474(rdram, ctx);
        goto after_11;
    // 0x802B45A8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_11:
    // 0x802B45AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B45B0: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x802B45B4: jal         0x802B4474
    // 0x802B45B8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_802B4474(rdram, ctx);
        goto after_12;
    // 0x802B45B8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_12:
    // 0x802B45BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B45C0: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x802B45C4: jal         0x802B4474
    // 0x802B45C8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_802B4474(rdram, ctx);
        goto after_13;
    // 0x802B45C8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_13:
    // 0x802B45CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B45D0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x802B45D4: jal         0x802B4474
    // 0x802B45D8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_802B4474(rdram, ctx);
        goto after_14;
    // 0x802B45D8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_14:
    // 0x802B45DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B45E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B45E4: jr          $ra
    // 0x802B45E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802B45E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802B45EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B45EC: lw          $v0, 0x9C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9C);
    // 0x802B45F0: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x802B45F4: beq         $v1, $v0, L_802B460C
    if (ctx->r3 == ctx->r2) {
        // 0x802B45F8: addiu       $t6, $v0, 0x4
        ctx->r14 = ADD32(ctx->r2, 0X4);
            goto L_802B460C;
    }
    // 0x802B45F8: addiu       $t6, $v0, 0x4
    ctx->r14 = ADD32(ctx->r2, 0X4);
    // 0x802B45FC: slti        $at, $t6, 0x100
    ctx->r1 = SIGNED(ctx->r14) < 0X100 ? 1 : 0;
    // 0x802B4600: bne         $at, $zero, L_802B460C
    if (ctx->r1 != 0) {
        // 0x802B4604: sw          $t6, 0x9C($a0)
        MEM_W(0X9C, ctx->r4) = ctx->r14;
            goto L_802B460C;
    }
    // 0x802B4604: sw          $t6, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r14;
    // 0x802B4608: sw          $v1, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r3;
L_802B460C:
    // 0x802B460C: jr          $ra
    // 0x802B4610: nop

    return;
    // 0x802B4610: nop

;}
RECOMP_FUNC void func_802B4614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4614: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802B4618: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802B461C: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802B4620: lui         $t7, 0x802B
    ctx->r15 = S32(0X802B << 16);
    // 0x802B4624: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802B4628: addiu       $t7, $t7, 0x45EC
    ctx->r15 = ADD32(ctx->r15, 0X45EC);
    // 0x802B462C: addiu       $t6, $t6, -0x1210
    ctx->r14 = ADD32(ctx->r14, -0X1210);
    // 0x802B4630: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802B4634: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802B4638: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802B463C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802B4640: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802B4644: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x802B4648: addiu       $a3, $zero, 0x408
    ctx->r7 = ADD32(0, 0X408);
    // 0x802B464C: jal         0x80028C74
    // 0x802B4650: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_80028C74(rdram, ctx);
        goto after_0;
    // 0x802B4650: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_0:
    // 0x802B4654: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802B4658: sw          $zero, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = 0;
    // 0x802B465C: sw          $v1, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r3;
    // 0x802B4660: sw          $v1, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r3;
    // 0x802B4664: sw          $v1, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r3;
    // 0x802B4668: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802B466C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802B4670: jr          $ra
    // 0x802B4674: nop

    return;
    // 0x802B4674: nop

;}
RECOMP_FUNC void func_802B4678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4678: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B467C: addiu       $v0, $v0, 0x5820
    ctx->r2 = ADD32(ctx->r2, 0X5820);
    // 0x802B4680: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802B4684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B4688: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x802B468C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B4690: bgez        $t7, L_802B4750
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802B4694: sw          $t7, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r15;
            goto L_802B4750;
    }
    // 0x802B4694: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802B4698: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x802B469C: addiu       $a2, $a2, -0x2F98
    ctx->r6 = ADD32(ctx->r6, -0X2F98);
    // 0x802B46A0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x802B46A4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802B46A8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x802B46AC: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x802B46B0: lhu         $t9, 0x9CA($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X9CA);
    // 0x802B46B4: lhu         $t0, 0x9AC($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X9AC);
    // 0x802B46B8: lhu         $t2, 0x9B6($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X9B6);
    // 0x802B46BC: lhu         $t4, 0x9C0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X9C0);
    // 0x802B46C0: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x802B46C4: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x802B46C8: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x802B46CC: andi        $t6, $t5, 0x1000
    ctx->r14 = ctx->r13 & 0X1000;
    // 0x802B46D0: beq         $t6, $zero, L_802B4750
    if (ctx->r14 == 0) {
        // 0x802B46D4: lui         $t7, 0x802C
        ctx->r15 = S32(0X802C << 16);
            goto L_802B4750;
    }
    // 0x802B46D4: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802B46D8: lw          $t7, 0x5818($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5818);
    // 0x802B46DC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B46E0: beq         $t7, $zero, L_802B4750
    if (ctx->r15 == 0) {
        // 0x802B46E4: nop
    
            goto L_802B4750;
    }
    // 0x802B46E4: nop

    // 0x802B46E8: lw          $v0, -0x1254($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1254);
    // 0x802B46EC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802B46F0: beq         $v0, $at, L_802B4750
    if (ctx->r2 == ctx->r1) {
        // 0x802B46F4: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_802B4750;
    }
    // 0x802B46F4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802B46F8: beq         $v0, $at, L_802B4750
    if (ctx->r2 == ctx->r1) {
        // 0x802B46FC: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_802B4750;
    }
    // 0x802B46FC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802B4700: beq         $v0, $at, L_802B4750
    if (ctx->r2 == ctx->r1) {
        // 0x802B4704: nop
    
            goto L_802B4750;
    }
    // 0x802B4704: nop

    // 0x802B4708: jal         0x80015BC0
    // 0x802B470C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x802B470C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x802B4710: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4714: sw          $zero, 0x5818($at)
    MEM_W(0X5818, ctx->r1) = 0;
    // 0x802B4718: jal         0x802B43E4
    // 0x802B471C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    func_802B43E4(rdram, ctx);
        goto after_1;
    // 0x802B471C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    after_1:
    // 0x802B4720: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B4724: addiu       $a1, $a1, 0x5810
    ctx->r5 = ADD32(ctx->r5, 0X5810);
    // 0x802B4728: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802B472C: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x802B4730: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x802B4734: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4738: jal         0x80027B60
    // 0x802B473C: sw          $t9, -0x1254($at)
    MEM_W(-0X1254, ctx->r1) = ctx->r25;
    func_80027B60(rdram, ctx);
        goto after_2;
    // 0x802B473C: sw          $t9, -0x1254($at)
    MEM_W(-0X1254, ctx->r1) = ctx->r25;
    after_2:
    // 0x802B4740: jal         0x80063B94
    // 0x802B4744: nop

    func_80063B94(rdram, ctx);
        goto after_3;
    // 0x802B4744: nop

    after_3:
    // 0x802B4748: b           L_802B4988
    // 0x802B474C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B4988;
    // 0x802B474C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B4750:
    // 0x802B4750: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802B4754: lw          $t0, -0x1254($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1254);
    // 0x802B4758: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x802B475C: sltiu       $at, $t0, 0x8
    ctx->r1 = ctx->r8 < 0X8 ? 1 : 0;
    // 0x802B4760: beq         $at, $zero, L_802B4984
    if (ctx->r1 == 0) {
        // 0x802B4764: addiu       $a2, $a2, -0x2F98
        ctx->r6 = ADD32(ctx->r6, -0X2F98);
            goto L_802B4984;
    }
    // 0x802B4764: addiu       $a2, $a2, -0x2F98
    ctx->r6 = ADD32(ctx->r6, -0X2F98);
    // 0x802B4768: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x802B476C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4770: addu        $at, $at, $t0
    gpr jr_addend_802B477C = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x802B4774: lw          $t0, 0x19A0($at)
    ctx->r8 = ADD32(ctx->r1, 0X19A0);
    // 0x802B4778: nop

    // 0x802B477C: jr          $t0
    // 0x802B4780: nop

    switch (jr_addend_802B477C >> 2) {
        case 0: goto L_802B4784; break;
        case 1: goto L_802B4984; break;
        case 2: goto L_802B4804; break;
        case 3: goto L_802B48BC; break;
        case 4: goto L_802B4840; break;
        case 5: goto L_802B48F0; break;
        case 6: goto L_802B4984; break;
        case 7: goto L_802B4940; break;
        default: switch_error(__func__, 0x802B477C, 0x802C19A0);
    }
    // 0x802B4780: nop

L_802B4784:
    // 0x802B4784: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B4788: addiu       $a1, $a1, 0x5810
    ctx->r5 = ADD32(ctx->r5, 0X5810);
    // 0x802B478C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802B4790: nop

    // 0x802B4794: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x802B4798: bne         $v0, $zero, L_802B4984
    if (ctx->r2 != 0) {
        // 0x802B479C: sw          $t1, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r9;
            goto L_802B4984;
    }
    // 0x802B479C: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x802B47A0: jal         0x80015BC0
    // 0x802B47A4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_80015BC0(rdram, ctx);
        goto after_4;
    // 0x802B47A4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_4:
    // 0x802B47A8: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x802B47AC: addiu       $a2, $a2, -0x2F98
    ctx->r6 = ADD32(ctx->r6, -0X2F98);
    // 0x802B47B0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x802B47B4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802B47B8: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
    // 0x802B47BC: lbu         $t2, 0x754($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X754);
    // 0x802B47C0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B47C4: sw          $t2, 0x5814($at)
    MEM_W(0X5814, ctx->r1) = ctx->r10;
    // 0x802B47C8: lbu         $t3, 0x754($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X754);
    // 0x802B47CC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802B47D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802B47D4: ori         $t4, $t3, 0x8
    ctx->r12 = ctx->r11 | 0X8;
    // 0x802B47D8: sb          $t4, 0x754($at)
    MEM_B(0X754, ctx->r1) = ctx->r12;
    // 0x802B47DC: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B47E0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B47E4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802B47E8: addiu       $a1, $a1, 0x5810
    ctx->r5 = ADD32(ctx->r5, 0X5810);
    // 0x802B47EC: sw          $t5, -0x1254($at)
    MEM_W(-0X1254, ctx->r1) = ctx->r13;
    // 0x802B47F0: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x802B47F4: jal         0x802B44E8
    // 0x802B47F8: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    func_802B44E8(rdram, ctx);
        goto after_5;
    // 0x802B47F8: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    after_5:
    // 0x802B47FC: b           L_802B4988
    // 0x802B4800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B4988;
    // 0x802B4800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B4804:
    // 0x802B4804: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B4808: addiu       $a1, $a1, 0x5810
    ctx->r5 = ADD32(ctx->r5, 0X5810);
    // 0x802B480C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802B4810: nop

    // 0x802B4814: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x802B4818: bne         $v0, $zero, L_802B4984
    if (ctx->r2 != 0) {
        // 0x802B481C: sw          $t7, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r15;
            goto L_802B4984;
    }
    // 0x802B481C: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x802B4820: jal         0x802B4614
    // 0x802B4824: nop

    func_802B4614(rdram, ctx);
        goto after_6;
    // 0x802B4824: nop

    after_6:
    // 0x802B4828: jal         0x802B43E4
    // 0x802B482C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802B43E4(rdram, ctx);
        goto after_7;
    // 0x802B482C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x802B4830: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x802B4834: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4838: b           L_802B4984
    // 0x802B483C: sw          $t8, -0x1254($at)
    MEM_W(-0X1254, ctx->r1) = ctx->r24;
        goto L_802B4984;
    // 0x802B483C: sw          $t8, -0x1254($at)
    MEM_W(-0X1254, ctx->r1) = ctx->r24;
L_802B4840:
    // 0x802B4840: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B4844: addiu       $v0, $v0, 0x581C
    ctx->r2 = ADD32(ctx->r2, 0X581C);
    // 0x802B4848: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x802B484C: nop

    // 0x802B4850: addiu       $a0, $t9, 0x4
    ctx->r4 = ADD32(ctx->r25, 0X4);
    // 0x802B4854: slti        $at, $a0, 0x100
    ctx->r1 = SIGNED(ctx->r4) < 0X100 ? 1 : 0;
    // 0x802B4858: bne         $at, $zero, L_802B4868
    if (ctx->r1 != 0) {
        // 0x802B485C: sw          $a0, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r4;
            goto L_802B4868;
    }
    // 0x802B485C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x802B4860: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802B4864: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
L_802B4868:
    // 0x802B4868: jal         0x802B43E4
    // 0x802B486C: nop

    func_802B43E4(rdram, ctx);
        goto after_8;
    // 0x802B486C: nop

    after_8:
    // 0x802B4870: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B4874: addiu       $v0, $v0, 0x581C
    ctx->r2 = ADD32(ctx->r2, 0X581C);
    // 0x802B4878: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x802B487C: nop

    // 0x802B4880: slti        $at, $t2, 0xFF
    ctx->r1 = SIGNED(ctx->r10) < 0XFF ? 1 : 0;
    // 0x802B4884: bne         $at, $zero, L_802B4988
    if (ctx->r1 != 0) {
        // 0x802B4888: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B4988;
    }
    // 0x802B4888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B488C: jal         0x80027B60
    // 0x802B4890: nop

    func_80027B60(rdram, ctx);
        goto after_9;
    // 0x802B4890: nop

    after_9:
    // 0x802B4894: jal         0x80063B94
    // 0x802B4898: nop

    func_80063B94(rdram, ctx);
        goto after_10;
    // 0x802B4898: nop

    after_10:
    // 0x802B489C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B48A0: addiu       $a1, $a1, 0x5810
    ctx->r5 = ADD32(ctx->r5, 0X5810);
    // 0x802B48A4: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x802B48A8: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x802B48AC: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x802B48B0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B48B4: b           L_802B4984
    // 0x802B48B8: sw          $t4, -0x1254($at)
    MEM_W(-0X1254, ctx->r1) = ctx->r12;
        goto L_802B4984;
    // 0x802B48B8: sw          $t4, -0x1254($at)
    MEM_W(-0X1254, ctx->r1) = ctx->r12;
L_802B48BC:
    // 0x802B48BC: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B48C0: addiu       $a1, $a1, 0x5810
    ctx->r5 = ADD32(ctx->r5, 0X5810);
    // 0x802B48C4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802B48C8: nop

    // 0x802B48CC: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x802B48D0: bne         $v0, $zero, L_802B4984
    if (ctx->r2 != 0) {
        // 0x802B48D4: sw          $t5, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r13;
            goto L_802B4984;
    }
    // 0x802B48D4: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x802B48D8: jal         0x80021960
    // 0x802B48DC: nop

    func_80021960(rdram, ctx);
        goto after_11;
    // 0x802B48DC: nop

    after_11:
    // 0x802B48E0: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x802B48E4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B48E8: b           L_802B4984
    // 0x802B48EC: sw          $t6, -0x1254($at)
    MEM_W(-0X1254, ctx->r1) = ctx->r14;
        goto L_802B4984;
    // 0x802B48EC: sw          $t6, -0x1254($at)
    MEM_W(-0X1254, ctx->r1) = ctx->r14;
L_802B48F0:
    // 0x802B48F0: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x802B48F4: lh          $t7, -0x2FAC($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X2FAC);
    // 0x802B48F8: nop

    // 0x802B48FC: slti        $at, $t7, 0xDC
    ctx->r1 = SIGNED(ctx->r15) < 0XDC ? 1 : 0;
    // 0x802B4900: bne         $at, $zero, L_802B4988
    if (ctx->r1 != 0) {
        // 0x802B4904: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B4988;
    }
    // 0x802B4904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B4908: jal         0x80063B94
    // 0x802B490C: nop

    func_80063B94(rdram, ctx);
        goto after_12;
    // 0x802B490C: nop

    after_12:
    // 0x802B4910: jal         0x80027B60
    // 0x802B4914: nop

    func_80027B60(rdram, ctx);
        goto after_13;
    // 0x802B4914: nop

    after_13:
    // 0x802B4918: jal         0x80020270
    // 0x802B491C: nop

    func_80020270(rdram, ctx);
        goto after_14;
    // 0x802B491C: nop

    after_14:
    // 0x802B4920: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B4924: addiu       $a1, $a1, 0x5810
    ctx->r5 = ADD32(ctx->r5, 0X5810);
    // 0x802B4928: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x802B492C: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x802B4930: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x802B4934: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4938: b           L_802B4984
    // 0x802B493C: sw          $t9, -0x1254($at)
    MEM_W(-0X1254, ctx->r1) = ctx->r25;
        goto L_802B4984;
    // 0x802B493C: sw          $t9, -0x1254($at)
    MEM_W(-0X1254, ctx->r1) = ctx->r25;
L_802B4940:
    // 0x802B4940: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B4944: addiu       $a1, $a1, 0x5810
    ctx->r5 = ADD32(ctx->r5, 0X5810);
    // 0x802B4948: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802B494C: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802B4950: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x802B4954: bne         $v0, $zero, L_802B4984
    if (ctx->r2 != 0) {
        // 0x802B4958: sw          $t0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r8;
            goto L_802B4984;
    }
    // 0x802B4958: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x802B495C: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x802B4960: lw          $t1, 0x5814($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5814);
    // 0x802B4964: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802B4968: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x802B496C: sb          $t1, 0x754($at)
    MEM_B(0X754, ctx->r1) = ctx->r9;
    // 0x802B4970: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x802B4974: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802B4978: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802B497C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x802B4980: sb          $t3, -0x765D($at)
    MEM_B(-0X765D, ctx->r1) = ctx->r11;
L_802B4984:
    // 0x802B4984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B4988:
    // 0x802B4988: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B498C: jr          $ra
    // 0x802B4990: nop

    return;
    // 0x802B4990: nop

    // 0x802B4994: nop

    // 0x802B4998: nop

    // 0x802B499C: nop

;}
RECOMP_FUNC void func_802B49A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B49A0: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x802B49A4: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x802B49A8: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x802B49AC: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x802B49B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802B49B4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802B49B8: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x802B49BC: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x802B49C0: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x802B49C4: lbu         $t8, 0x8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X8);
    // 0x802B49C8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802B49CC: andi        $t9, $t8, 0xFF01
    ctx->r25 = ctx->r24 & 0XFF01;
    // 0x802B49D0: sb          $t9, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r25;
    // 0x802B49D4: sb          $a3, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r7;
    // 0x802B49D8: sb          $t0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r8;
    // 0x802B49DC: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x802B49E0: nop

    // 0x802B49E4: sh          $t1, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r9;
    // 0x802B49E8: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x802B49EC: sh          $a1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r5;
    // 0x802B49F0: sh          $a2, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r6;
    // 0x802B49F4: jr          $ra
    // 0x802B49F8: sw          $t2, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r10;
    return;
    // 0x802B49F8: sw          $t2, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r10;
;}
RECOMP_FUNC void func_802B49FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B49FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B4A00: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802B4A04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B4A08: addiu       $t7, $t7, -0x11E0
    ctx->r15 = ADD32(ctx->r15, -0X11E0);
    // 0x802B4A0C: addiu       $t6, $zero, 0x566
    ctx->r14 = ADD32(0, 0X566);
    // 0x802B4A10: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802B4A14: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802B4A18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802B4A1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B4A20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B4A24: jal         0x802B49A0
    // 0x802B4A28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_802B49A0(rdram, ctx);
        goto after_0;
    // 0x802B4A28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x802B4A2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B4A30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802B4A34: jr          $ra
    // 0x802B4A38: nop

    return;
    // 0x802B4A38: nop

;}
RECOMP_FUNC void func_802B4A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4A3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802B4A40: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802B4A44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802B4A48: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802B4A4C: addiu       $t7, $t7, -0x1000
    ctx->r15 = ADD32(ctx->r15, -0X1000);
    // 0x802B4A50: addiu       $t6, $zero, 0x58F
    ctx->r14 = ADD32(0, 0X58F);
    // 0x802B4A54: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x802B4A58: addiu       $t9, $zero, 0x70
    ctx->r25 = ADD32(0, 0X70);
    // 0x802B4A5C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x802B4A60: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802B4A64: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802B4A68: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802B4A6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802B4A70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B4A74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B4A78: jal         0x802A9DA8
    // 0x802B4A7C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_802A9DA8(rdram, ctx);
        goto after_0;
    // 0x802B4A7C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x802B4A80: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802B4A84: addiu       $t1, $t1, -0xFA0
    ctx->r9 = ADD32(ctx->r9, -0XFA0);
    // 0x802B4A88: addiu       $t0, $zero, 0x590
    ctx->r8 = ADD32(0, 0X590);
    // 0x802B4A8C: addiu       $t2, $zero, 0x12
    ctx->r10 = ADD32(0, 0X12);
    // 0x802B4A90: addiu       $t3, $zero, 0x71
    ctx->r11 = ADD32(0, 0X71);
    // 0x802B4A94: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802B4A98: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802B4A9C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802B4AA0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802B4AA4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802B4AA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B4AAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B4AB0: jal         0x802A9DA8
    // 0x802B4AB4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_802A9DA8(rdram, ctx);
        goto after_1;
    // 0x802B4AB4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x802B4AB8: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x802B4ABC: addiu       $v1, $v1, -0x2F98
    ctx->r3 = ADD32(ctx->r3, -0X2F98);
    // 0x802B4AC0: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x802B4AC4: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x802B4AC8: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
    // 0x802B4ACC: addu        $v0, $t4, $a0
    ctx->r2 = ADD32(ctx->r12, ctx->r4);
    // 0x802B4AD0: lbu         $t5, 0x2188($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2188);
    // 0x802B4AD4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802B4AD8: andi        $t6, $t5, 0xFF01
    ctx->r14 = ctx->r13 & 0XFF01;
    // 0x802B4ADC: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x802B4AE0: sb          $t7, 0x2188($v0)
    MEM_B(0X2188, ctx->r2) = ctx->r15;
    // 0x802B4AE4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x802B4AE8: nop

    // 0x802B4AEC: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x802B4AF0: sb          $a1, 0x2191($t9)
    MEM_B(0X2191, ctx->r25) = ctx->r5;
    // 0x802B4AF4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x802B4AF8: nop

    // 0x802B4AFC: addu        $v0, $t0, $a0
    ctx->r2 = ADD32(ctx->r8, ctx->r4);
    // 0x802B4B00: lbu         $t1, 0x21C4($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X21C4);
    // 0x802B4B04: nop

    // 0x802B4B08: andi        $t2, $t1, 0xFF01
    ctx->r10 = ctx->r9 & 0XFF01;
    // 0x802B4B0C: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x802B4B10: sb          $t3, 0x21C4($v0)
    MEM_B(0X21C4, ctx->r2) = ctx->r11;
    // 0x802B4B14: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x802B4B18: nop

    // 0x802B4B1C: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x802B4B20: sb          $a1, 0x21CD($t5)
    MEM_B(0X21CD, ctx->r13) = ctx->r5;
    // 0x802B4B24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802B4B28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802B4B2C: jr          $ra
    // 0x802B4B30: nop

    return;
    // 0x802B4B30: nop

;}
RECOMP_FUNC void func_802B4B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4B34: jr          $ra
    // 0x802B4B38: nop

    return;
    // 0x802B4B38: nop

;}
RECOMP_FUNC void func_802B4B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4B3C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x802B4B40: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x802B4B44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802B4B48: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x802B4B4C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802B4B50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B4B54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B4B58: addiu       $t6, $t6, -0x440
    ctx->r14 = ADD32(ctx->r14, -0X440);
    // 0x802B4B5C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x802B4B60: jal         0x80020270
    // 0x802B4B64: sw          $t6, -0x1178($at)
    MEM_W(-0X1178, ctx->r1) = ctx->r14;
    func_80020270(rdram, ctx);
        goto after_0;
    // 0x802B4B64: sw          $t6, -0x1178($at)
    MEM_W(-0X1178, ctx->r1) = ctx->r14;
    after_0:
    // 0x802B4B68: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x802B4B6C: jal         0x80021004
    // 0x802B4B70: sb          $zero, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = 0;
    func_80021004(rdram, ctx);
        goto after_1;
    // 0x802B4B70: sb          $zero, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = 0;
    after_1:
    // 0x802B4B74: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x802B4B78: addiu       $s0, $s0, 0x5850
    ctx->r16 = ADD32(ctx->r16, 0X5850);
    // 0x802B4B7C: lui         $t8, 0x4000
    ctx->r24 = S32(0X4000 << 16);
    // 0x802B4B80: lui         $v0, 0x8033
    ctx->r2 = S32(0X8033 << 16);
    // 0x802B4B84: ori         $t8, $t8, 0x56
    ctx->r24 = ctx->r24 | 0X56;
    // 0x802B4B88: addiu       $v0, $v0, -0xD80
    ctx->r2 = ADD32(ctx->r2, -0XD80);
    // 0x802B4B8C: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x802B4B90: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x802B4B94: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x802B4B98: jal         0x80025A10
    // 0x802B4B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80025A10(rdram, ctx);
        goto after_2;
    // 0x802B4B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802B4BA0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x802B4BA4: lui         $t9, 0x4000
    ctx->r25 = S32(0X4000 << 16);
    // 0x802B4BA8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802B4BAC: ori         $t9, $t9, 0x57
    ctx->r25 = ctx->r25 | 0X57;
    // 0x802B4BB0: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B4BB4: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x802B4BB8: sw          $t9, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r25;
    // 0x802B4BBC: sw          $t1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r9;
    // 0x802B4BC0: jal         0x80025A10
    // 0x802B4BC4: addiu       $a0, $a0, 0x5858
    ctx->r4 = ADD32(ctx->r4, 0X5858);
    func_80025A10(rdram, ctx);
        goto after_3;
    // 0x802B4BC4: addiu       $a0, $a0, 0x5858
    ctx->r4 = ADD32(ctx->r4, 0X5858);
    after_3:
    // 0x802B4BC8: lui         $t2, 0x4000
    ctx->r10 = S32(0X4000 << 16);
    // 0x802B4BCC: lui         $t3, 0x8036
    ctx->r11 = S32(0X8036 << 16);
    // 0x802B4BD0: ori         $t2, $t2, 0x59
    ctx->r10 = ctx->r10 | 0X59;
    // 0x802B4BD4: addiu       $t3, $t3, 0x4280
    ctx->r11 = ADD32(ctx->r11, 0X4280);
    // 0x802B4BD8: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B4BDC: sw          $t2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r10;
    // 0x802B4BE0: sw          $t3, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r11;
    // 0x802B4BE4: jal         0x80025A10
    // 0x802B4BE8: addiu       $a0, $a0, 0x5860
    ctx->r4 = ADD32(ctx->r4, 0X5860);
    func_80025A10(rdram, ctx);
        goto after_4;
    // 0x802B4BE8: addiu       $a0, $a0, 0x5860
    ctx->r4 = ADD32(ctx->r4, 0X5860);
    after_4:
    // 0x802B4BEC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x802B4BF0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802B4BF4: lui         $t4, 0x4000
    ctx->r12 = S32(0X4000 << 16);
    // 0x802B4BF8: ori         $at, $at, 0x5000
    ctx->r1 = ctx->r1 | 0X5000;
    // 0x802B4BFC: ori         $t4, $t4, 0x26
    ctx->r12 = ctx->r12 | 0X26;
    // 0x802B4C00: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B4C04: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x802B4C08: sw          $t4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r12;
    // 0x802B4C0C: sw          $t6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r14;
    // 0x802B4C10: jal         0x80025A10
    // 0x802B4C14: addiu       $a0, $a0, 0x5868
    ctx->r4 = ADD32(ctx->r4, 0X5868);
    func_80025A10(rdram, ctx);
        goto after_5;
    // 0x802B4C14: addiu       $a0, $a0, 0x5868
    ctx->r4 = ADD32(ctx->r4, 0X5868);
    after_5:
    // 0x802B4C18: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x802B4C1C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4C20: sw          $t7, 0x5840($at)
    MEM_W(0X5840, ctx->r1) = ctx->r15;
    // 0x802B4C24: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4C28: jal         0x802A1350
    // 0x802B4C2C: sw          $zero, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = 0;
    func_802A1350(rdram, ctx);
        goto after_6;
    // 0x802B4C2C: sw          $zero, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = 0;
    after_6:
    // 0x802B4C30: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802B4C34: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x802B4C38: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802B4C3C: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
    // 0x802B4C40: lbu         $t8, 0x754($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X754);
    // 0x802B4C44: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4C48: sw          $t8, 0x5844($at)
    MEM_W(0X5844, ctx->r1) = ctx->r24;
    // 0x802B4C4C: lbu         $t9, 0x754($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X754);
    // 0x802B4C50: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802B4C54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802B4C58: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x802B4C5C: sb          $t0, 0x754($at)
    MEM_B(0X754, ctx->r1) = ctx->r8;
    // 0x802B4C60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B4C64: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4C68: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x802B4C6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B4C70: sw          $t1, 0x584C($at)
    MEM_W(0X584C, ctx->r1) = ctx->r9;
    // 0x802B4C74: jr          $ra
    // 0x802B4C78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802B4C78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802B4C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4C7C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802B4C80: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802B4C84: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x802B4C88: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x802B4C8C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x802B4C90: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802B4C94: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802B4C98: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802B4C9C: ori         $at, $at, 0x5000
    ctx->r1 = ctx->r1 | 0X5000;
    // 0x802B4CA0: addiu       $a1, $a1, -0xD80
    ctx->r5 = ADD32(ctx->r5, -0XD80);
    // 0x802B4CA4: addiu       $t7, $zero, 0x3E8
    ctx->r15 = ADD32(0, 0X3E8);
    // 0x802B4CA8: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x802B4CAC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x802B4CB0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x802B4CB4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802B4CB8: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802B4CBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802B4CC0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802B4CC4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802B4CC8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x802B4CCC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x802B4CD0: jal         0x80061E9C
    // 0x802B4CD4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_80061E9C(rdram, ctx);
        goto after_0;
    // 0x802B4CD4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x802B4CD8: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B4CDC: addiu       $a0, $a0, 0x5848
    ctx->r4 = ADD32(ctx->r4, 0X5848);
    // 0x802B4CE0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x802B4CE4: sw          $zero, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = 0;
    // 0x802B4CE8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4CEC: lwc1        $f4, 0x1A24($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1A24);
    // 0x802B4CF0: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x802B4CF4: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x802B4CF8: swc1        $f4, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->f4.u32l;
    // 0x802B4CFC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x802B4D00: nop

    // 0x802B4D04: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x802B4D08: nop

    // 0x802B4D0C: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x802B4D10: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x802B4D14: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802B4D18: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802B4D1C: jr          $ra
    // 0x802B4D20: nop

    return;
    // 0x802B4D20: nop

;}
RECOMP_FUNC void func_802B4D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4D24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B4D28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B4D2C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802B4D30: jal         0x80063B94
    // 0x802B4D34: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80063B94(rdram, ctx);
        goto after_0;
    // 0x802B4D34: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x802B4D38: jal         0x80027B60
    // 0x802B4D3C: nop

    func_80027B60(rdram, ctx);
        goto after_1;
    // 0x802B4D3C: nop

    after_1:
    // 0x802B4D40: lui         $at, 0x4290
    ctx->r1 = S32(0X4290 << 16);
    // 0x802B4D44: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802B4D48: jal         0x800290CC
    // 0x802B4D4C: nop

    func_800290CC(rdram, ctx);
        goto after_2;
    // 0x802B4D4C: nop

    after_2:
    // 0x802B4D50: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x802B4D54: lui         $s1, 0x802C
    ctx->r17 = S32(0X802C << 16);
    // 0x802B4D58: addiu       $s1, $s1, -0xEDC
    ctx->r17 = ADD32(ctx->r17, -0XEDC);
    // 0x802B4D5C: addiu       $s0, $s0, -0xF24
    ctx->r16 = ADD32(ctx->r16, -0XF24);
L_802B4D60:
    // 0x802B4D60: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802B4D64: lh          $a1, 0x4($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X4);
    // 0x802B4D68: jal         0x802B4C7C
    // 0x802B4D6C: nop

    func_802B4C7C(rdram, ctx);
        goto after_3;
    // 0x802B4D6C: nop

    after_3:
    // 0x802B4D70: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x802B4D74: bne         $s0, $s1, L_802B4D60
    if (ctx->r16 != ctx->r17) {
        // 0x802B4D78: nop
    
            goto L_802B4D60;
    }
    // 0x802B4D78: nop

    // 0x802B4D7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B4D80: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802B4D84: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802B4D88: jr          $ra
    // 0x802B4D8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802B4D8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802B4D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4D90: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B4D94: addiu       $v0, $v0, 0x584C
    ctx->r2 = ADD32(ctx->r2, 0X584C);
    // 0x802B4D98: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802B4D9C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B4DA0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x802B4DA4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802B4DA8: lw          $v1, -0xF28($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XF28);
    // 0x802B4DAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B4DB0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x802B4DB4: bne         $a3, $v1, L_802B4DD8
    if (ctx->r7 != ctx->r3) {
        // 0x802B4DB8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802B4DD8;
    }
    // 0x802B4DB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B4DBC: jal         0x800135F8
    // 0x802B4DC0: nop

    func_800135F8(rdram, ctx);
        goto after_0;
    // 0x802B4DC0: nop

    after_0:
    // 0x802B4DC4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B4DC8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B4DCC: lw          $v1, -0xF28($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XF28);
    // 0x802B4DD0: addiu       $v0, $v0, 0x584C
    ctx->r2 = ADD32(ctx->r2, 0X584C);
    // 0x802B4DD4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
L_802B4DD8:
    // 0x802B4DD8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x802B4DDC: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x802B4DE0: bgez        $a0, L_802B4E50
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802B4DE4: addiu       $a2, $a2, -0x2F98
        ctx->r6 = ADD32(ctx->r6, -0X2F98);
            goto L_802B4E50;
    }
    // 0x802B4DE4: addiu       $a2, $a2, -0x2F98
    ctx->r6 = ADD32(ctx->r6, -0X2F98);
    // 0x802B4DE8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x802B4DEC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802B4DF0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x802B4DF4: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x802B4DF8: lhu         $t8, 0x9CA($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X9CA);
    // 0x802B4DFC: lhu         $t9, 0x9AC($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X9AC);
    // 0x802B4E00: lhu         $t1, 0x9B6($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X9B6);
    // 0x802B4E04: lhu         $t3, 0x9C0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X9C0);
    // 0x802B4E08: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x802B4E0C: or          $t2, $t0, $t1
    ctx->r10 = ctx->r8 | ctx->r9;
    // 0x802B4E10: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x802B4E14: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x802B4E18: beq         $t5, $zero, L_802B4E50
    if (ctx->r13 == 0) {
        // 0x802B4E1C: nop
    
            goto L_802B4E50;
    }
    // 0x802B4E1C: nop

    // 0x802B4E20: bne         $a3, $v1, L_802B4E50
    if (ctx->r7 != ctx->r3) {
        // 0x802B4E24: nop
    
            goto L_802B4E50;
    }
    // 0x802B4E24: nop

    // 0x802B4E28: jal         0x80015BC0
    // 0x802B4E2C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x802B4E2C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x802B4E30: jal         0x80015BC0
    // 0x802B4E34: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    func_80015BC0(rdram, ctx);
        goto after_2;
    // 0x802B4E34: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    after_2:
    // 0x802B4E38: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x802B4E3C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4E40: jal         0x80021960
    // 0x802B4E44: sw          $t6, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = ctx->r14;
    func_80021960(rdram, ctx);
        goto after_3;
    // 0x802B4E44: sw          $t6, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = ctx->r14;
    after_3:
    // 0x802B4E48: b           L_802B5158
    // 0x802B4E4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B5158;
    // 0x802B4E4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B4E50:
    // 0x802B4E50: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x802B4E54: bgez        $a0, L_802B4EC4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802B4E58: addiu       $a2, $a2, -0x2F98
        ctx->r6 = ADD32(ctx->r6, -0X2F98);
            goto L_802B4EC4;
    }
    // 0x802B4E58: addiu       $a2, $a2, -0x2F98
    ctx->r6 = ADD32(ctx->r6, -0X2F98);
    // 0x802B4E5C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x802B4E60: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802B4E64: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x802B4E68: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x802B4E6C: lhu         $t7, 0x9CA($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X9CA);
    // 0x802B4E70: lhu         $t8, 0x9AC($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X9AC);
    // 0x802B4E74: lhu         $t0, 0x9B6($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X9B6);
    // 0x802B4E78: lhu         $t2, 0x9C0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X9C0);
    // 0x802B4E7C: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x802B4E80: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x802B4E84: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x802B4E88: andi        $t4, $t3, 0x1000
    ctx->r12 = ctx->r11 & 0X1000;
    // 0x802B4E8C: beq         $t4, $zero, L_802B4EC4
    if (ctx->r12 == 0) {
        // 0x802B4E90: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802B4EC4;
    }
    // 0x802B4E90: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B4E94: bne         $v1, $at, L_802B4EC8
    if (ctx->r3 != ctx->r1) {
        // 0x802B4E98: sltiu       $at, $v1, 0x9
        ctx->r1 = ctx->r3 < 0X9 ? 1 : 0;
            goto L_802B4EC8;
    }
    // 0x802B4E98: sltiu       $at, $v1, 0x9
    ctx->r1 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x802B4E9C: jal         0x80015BC0
    // 0x802B4EA0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80015BC0(rdram, ctx);
        goto after_4;
    // 0x802B4EA0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_4:
    // 0x802B4EA4: jal         0x80015BC0
    // 0x802B4EA8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_80015BC0(rdram, ctx);
        goto after_5;
    // 0x802B4EA8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_5:
    // 0x802B4EAC: jal         0x80021A14
    // 0x802B4EB0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80021A14(rdram, ctx);
        goto after_6;
    // 0x802B4EB0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_6:
    // 0x802B4EB4: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x802B4EB8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4EBC: b           L_802B5154
    // 0x802B4EC0: sw          $t5, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = ctx->r13;
        goto L_802B5154;
    // 0x802B4EC0: sw          $t5, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = ctx->r13;
L_802B4EC4:
    // 0x802B4EC4: sltiu       $at, $v1, 0x9
    ctx->r1 = ctx->r3 < 0X9 ? 1 : 0;
L_802B4EC8:
    // 0x802B4EC8: beq         $at, $zero, L_802B5154
    if (ctx->r1 == 0) {
        // 0x802B4ECC: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_802B5154;
    }
    // 0x802B4ECC: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x802B4ED0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4ED4: addu        $at, $at, $t6
    gpr jr_addend_802B4EE0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802B4ED8: lw          $t6, 0x1A28($at)
    ctx->r14 = ADD32(ctx->r1, 0X1A28);
    // 0x802B4EDC: nop

    // 0x802B4EE0: jr          $t6
    // 0x802B4EE4: nop

    switch (jr_addend_802B4EE0 >> 2) {
        case 0: goto L_802B4EE8; break;
        case 1: goto L_802B4FD0; break;
        case 2: goto L_802B4F4C; break;
        case 3: goto L_802B502C; break;
        case 4: goto L_802B4F88; break;
        case 5: goto L_802B5000; break;
        case 6: goto L_802B50B8; break;
        case 7: goto L_802B5124; break;
        case 8: goto L_802B50F4; break;
        default: switch_error(__func__, 0x802B4EE0, 0x802C1A28);
    }
    // 0x802B4EE4: nop

L_802B4EE8:
    // 0x802B4EE8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B4EEC: addiu       $a1, $a1, 0x5840
    ctx->r5 = ADD32(ctx->r5, 0X5840);
    // 0x802B4EF0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802B4EF4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802B4EF8: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x802B4EFC: bne         $v0, $zero, L_802B5154
    if (ctx->r2 != 0) {
        // 0x802B4F00: sw          $t7, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r15;
            goto L_802B5154;
    }
    // 0x802B4F00: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x802B4F04: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x802B4F08: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802B4F0C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x802B4F10: jal         0x802A1350
    // 0x802B4F14: sh          $t8, -0x766A($at)
    MEM_H(-0X766A, ctx->r1) = ctx->r24;
    func_802A1350(rdram, ctx);
        goto after_7;
    // 0x802B4F14: sh          $t8, -0x766A($at)
    MEM_H(-0X766A, ctx->r1) = ctx->r24;
    after_7:
    // 0x802B4F18: jal         0x80015BC0
    // 0x802B4F1C: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_80015BC0(rdram, ctx);
        goto after_8;
    // 0x802B4F1C: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_8:
    // 0x802B4F20: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802B4F24: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4F28: sw          $t0, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = ctx->r8;
    // 0x802B4F2C: lui         $at, 0x4290
    ctx->r1 = S32(0X4290 << 16);
    // 0x802B4F30: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802B4F34: jal         0x800290CC
    // 0x802B4F38: nop

    func_800290CC(rdram, ctx);
        goto after_9;
    // 0x802B4F38: nop

    after_9:
    // 0x802B4F3C: jal         0x802B4D24
    // 0x802B4F40: nop

    func_802B4D24(rdram, ctx);
        goto after_10;
    // 0x802B4F40: nop

    after_10:
    // 0x802B4F44: b           L_802B5158
    // 0x802B4F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B5158;
    // 0x802B4F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B4F4C:
    // 0x802B4F4C: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802B4F50: lw          $t1, 0x5848($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5848);
    // 0x802B4F54: nop

    // 0x802B4F58: lw          $t2, 0x68($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X68);
    // 0x802B4F5C: nop

    // 0x802B4F60: beq         $t2, $zero, L_802B5158
    if (ctx->r10 == 0) {
        // 0x802B4F64: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B5158;
    }
    // 0x802B4F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B4F68: jal         0x80015BC0
    // 0x802B4F6C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_80015BC0(rdram, ctx);
        goto after_11;
    // 0x802B4F6C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_11:
    // 0x802B4F70: jal         0x80021A14
    // 0x802B4F74: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80021A14(rdram, ctx);
        goto after_12;
    // 0x802B4F74: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_12:
    // 0x802B4F78: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x802B4F7C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4F80: b           L_802B5154
    // 0x802B4F84: sw          $t3, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = ctx->r11;
        goto L_802B5154;
    // 0x802B4F84: sw          $t3, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = ctx->r11;
L_802B4F88:
    // 0x802B4F88: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802B4F8C: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x802B4F90: lh          $t4, 0x7C4($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X7C4);
    // 0x802B4F94: nop

    // 0x802B4F98: slti        $at, $t4, 0xFF
    ctx->r1 = SIGNED(ctx->r12) < 0XFF ? 1 : 0;
    // 0x802B4F9C: bne         $at, $zero, L_802B5158
    if (ctx->r1 != 0) {
        // 0x802B4FA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B5158;
    }
    // 0x802B4FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B4FA4: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x802B4FA8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802B4FAC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x802B4FB0: jal         0x80027B60
    // 0x802B4FB4: sh          $zero, -0x766A($at)
    MEM_H(-0X766A, ctx->r1) = 0;
    func_80027B60(rdram, ctx);
        goto after_13;
    // 0x802B4FB4: sh          $zero, -0x766A($at)
    MEM_H(-0X766A, ctx->r1) = 0;
    after_13:
    // 0x802B4FB8: jal         0x80063B94
    // 0x802B4FBC: nop

    func_80063B94(rdram, ctx);
        goto after_14;
    // 0x802B4FBC: nop

    after_14:
    // 0x802B4FC0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802B4FC4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4FC8: b           L_802B5154
    // 0x802B4FCC: sw          $t6, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = ctx->r14;
        goto L_802B5154;
    // 0x802B4FCC: sw          $t6, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = ctx->r14;
L_802B4FD0:
    // 0x802B4FD0: jal         0x802B49FC
    // 0x802B4FD4: nop

    func_802B49FC(rdram, ctx);
        goto after_15;
    // 0x802B4FD4: nop

    after_15:
    // 0x802B4FD8: jal         0x802B4A3C
    // 0x802B4FDC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    func_802B4A3C(rdram, ctx);
        goto after_16;
    // 0x802B4FDC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    after_16:
    // 0x802B4FE0: jal         0x802A1914
    // 0x802B4FE4: nop

    func_802A1914(rdram, ctx);
        goto after_17;
    // 0x802B4FE4: nop

    after_17:
    // 0x802B4FE8: jal         0x80021A40
    // 0x802B4FEC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80021A40(rdram, ctx);
        goto after_18;
    // 0x802B4FEC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_18:
    // 0x802B4FF0: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x802B4FF4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B4FF8: b           L_802B5154
    // 0x802B4FFC: sw          $t7, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = ctx->r15;
        goto L_802B5154;
    // 0x802B4FFC: sw          $t7, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = ctx->r15;
L_802B5000:
    // 0x802B5000: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802B5004: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x802B5008: lh          $t8, 0x7C4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X7C4);
    // 0x802B500C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B5010: bgtz        $t8, L_802B5154
    if (SIGNED(ctx->r24) > 0) {
        // 0x802B5014: addiu       $a1, $a1, 0x5840
        ctx->r5 = ADD32(ctx->r5, 0X5840);
            goto L_802B5154;
    }
    // 0x802B5014: addiu       $a1, $a1, 0x5840
    ctx->r5 = ADD32(ctx->r5, 0X5840);
    // 0x802B5018: addiu       $t9, $zero, 0x3A2
    ctx->r25 = ADD32(0, 0X3A2);
    // 0x802B501C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x802B5020: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B5024: b           L_802B5154
    // 0x802B5028: sw          $a3, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = ctx->r7;
        goto L_802B5154;
    // 0x802B5028: sw          $a3, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = ctx->r7;
L_802B502C:
    // 0x802B502C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B5030: addiu       $a1, $a1, 0x5840
    ctx->r5 = ADD32(ctx->r5, 0X5840);
    // 0x802B5034: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x802B5038: nop

    // 0x802B503C: sll         $t0, $a0, 3
    ctx->r8 = S32(ctx->r4 << 3);
    // 0x802B5040: jal         0x802B4A3C
    // 0x802B5044: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    func_802B4A3C(rdram, ctx);
        goto after_19;
    // 0x802B5044: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    after_19:
    // 0x802B5048: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B504C: addiu       $a1, $a1, 0x5840
    ctx->r5 = ADD32(ctx->r5, 0X5840);
    // 0x802B5050: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802B5054: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x802B5058: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x802B505C: addiu       $a2, $a2, -0x2F98
    ctx->r6 = ADD32(ctx->r6, -0X2F98);
    // 0x802B5060: beq         $v0, $zero, L_802B50A0
    if (ctx->r2 == 0) {
        // 0x802B5064: sw          $t2, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r10;
            goto L_802B50A0;
    }
    // 0x802B5064: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x802B5068: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x802B506C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802B5070: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x802B5074: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x802B5078: lhu         $t3, 0x9CA($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X9CA);
    // 0x802B507C: lhu         $t4, 0x9AC($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X9AC);
    // 0x802B5080: lhu         $t6, 0x9B6($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X9B6);
    // 0x802B5084: lhu         $t8, 0x9C0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X9C0);
    // 0x802B5088: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x802B508C: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x802B5090: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x802B5094: andi        $t0, $t9, 0x1000
    ctx->r8 = ctx->r25 & 0X1000;
    // 0x802B5098: beq         $t0, $zero, L_802B5158
    if (ctx->r8 == 0) {
        // 0x802B509C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B5158;
    }
    // 0x802B509C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B50A0:
    // 0x802B50A0: jal         0x80021960
    // 0x802B50A4: nop

    func_80021960(rdram, ctx);
        goto after_20;
    // 0x802B50A4: nop

    after_20:
    // 0x802B50A8: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x802B50AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B50B0: b           L_802B5154
    // 0x802B50B4: sw          $t1, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = ctx->r9;
        goto L_802B5154;
    // 0x802B50B4: sw          $t1, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = ctx->r9;
L_802B50B8:
    // 0x802B50B8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802B50BC: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x802B50C0: lh          $t2, 0x7C4($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X7C4);
    // 0x802B50C4: nop

    // 0x802B50C8: slti        $at, $t2, 0xFF
    ctx->r1 = SIGNED(ctx->r10) < 0XFF ? 1 : 0;
    // 0x802B50CC: bne         $at, $zero, L_802B5158
    if (ctx->r1 != 0) {
        // 0x802B50D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B5158;
    }
    // 0x802B50D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B50D4: jal         0x80020270
    // 0x802B50D8: nop

    func_80020270(rdram, ctx);
        goto after_21;
    // 0x802B50D8: nop

    after_21:
    // 0x802B50DC: jal         0x8002198C
    // 0x802B50E0: nop

    func_8002198C(rdram, ctx);
        goto after_22;
    // 0x802B50E0: nop

    after_22:
    // 0x802B50E4: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x802B50E8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B50EC: b           L_802B5154
    // 0x802B50F0: sw          $t3, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = ctx->r11;
        goto L_802B5154;
    // 0x802B50F0: sw          $t3, -0xF28($at)
    MEM_W(-0XF28, ctx->r1) = ctx->r11;
L_802B50F4:
    // 0x802B50F4: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x802B50F8: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x802B50FC: lw          $t4, 0x5844($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5844);
    // 0x802B5100: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802B5104: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x802B5108: sb          $t4, 0x754($at)
    MEM_B(0X754, ctx->r1) = ctx->r12;
    // 0x802B510C: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x802B5110: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802B5114: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802B5118: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x802B511C: b           L_802B5154
    // 0x802B5120: sb          $t6, -0x7663($at)
    MEM_B(-0X7663, ctx->r1) = ctx->r14;
        goto L_802B5154;
    // 0x802B5120: sb          $t6, -0x7663($at)
    MEM_B(-0X7663, ctx->r1) = ctx->r14;
L_802B5124:
    // 0x802B5124: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802B5128: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x802B512C: lh          $t8, 0x7C4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X7C4);
    // 0x802B5130: nop

    // 0x802B5134: slti        $at, $t8, 0xFF
    ctx->r1 = SIGNED(ctx->r24) < 0XFF ? 1 : 0;
    // 0x802B5138: bne         $at, $zero, L_802B5158
    if (ctx->r1 != 0) {
        // 0x802B513C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B5158;
    }
    // 0x802B513C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B5140: sb          $zero, 0x7CC($v0)
    MEM_B(0X7CC, ctx->r2) = 0;
    // 0x802B5144: jal         0x8001BA88
    // 0x802B5148: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8001BA88(rdram, ctx);
        goto after_23;
    // 0x802B5148: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_23:
    // 0x802B514C: jal         0x8002198C
    // 0x802B5150: nop

    func_8002198C(rdram, ctx);
        goto after_24;
    // 0x802B5150: nop

    after_24:
L_802B5154:
    // 0x802B5154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B5158:
    // 0x802B5158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B515C: jr          $ra
    // 0x802B5160: nop

    return;
    // 0x802B5160: nop

    // 0x802B5164: nop

    // 0x802B5168: nop

    // 0x802B516C: nop

;}
RECOMP_FUNC void func_802B5170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B5170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B5174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B5178: jal         0x80036234
    // 0x802B517C: nop

    func_80036234(rdram, ctx);
        goto after_0;
    // 0x802B517C: nop

    after_0:
    // 0x802B5180: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x802B5184: jal         0x80035FF0
    // 0x802B5188: addiu       $a0, $a0, -0x32FC
    ctx->r4 = ADD32(ctx->r4, -0X32FC);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x802B5188: addiu       $a0, $a0, -0x32FC
    ctx->r4 = ADD32(ctx->r4, -0X32FC);
    after_1:
    // 0x802B518C: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x802B5190: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802B5194: jal         0x80049E40
    // 0x802B5198: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x802B5198: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x802B519C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802B51A0: jal         0x80020318
    // 0x802B51A4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80020318(rdram, ctx);
        goto after_3;
    // 0x802B51A4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_3:
    // 0x802B51A8: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B51AC: jal         0x8002AAC0
    // 0x802B51B0: addiu       $a0, $a0, -0x580
    ctx->r4 = ADD32(ctx->r4, -0X580);
    func_8002AAC0(rdram, ctx);
        goto after_4;
    // 0x802B51B0: addiu       $a0, $a0, -0x580
    ctx->r4 = ADD32(ctx->r4, -0X580);
    after_4:
    // 0x802B51B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B51B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B51BC: jr          $ra
    // 0x802B51C0: nop

    return;
    // 0x802B51C0: nop

    // 0x802B51C4: nop

    // 0x802B51C8: nop

    // 0x802B51CC: nop

;}
RECOMP_FUNC void func_802B51D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B51D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B51D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B51D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B51DC: jal         0x80036234
    // 0x802B51E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x802B51E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802B51E4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x802B51E8: jal         0x80035FF0
    // 0x802B51EC: addiu       $a0, $a0, -0xA30
    ctx->r4 = ADD32(ctx->r4, -0XA30);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x802B51EC: addiu       $a0, $a0, -0xA30
    ctx->r4 = ADD32(ctx->r4, -0XA30);
    after_1:
    // 0x802B51F0: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x802B51F4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802B51F8: jal         0x80049E40
    // 0x802B51FC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x802B51FC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x802B5200: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802B5204: jal         0x80020318
    // 0x802B5208: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80020318(rdram, ctx);
        goto after_3;
    // 0x802B5208: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_3:
    // 0x802B520C: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B5210: addiu       $a0, $a0, 0x5274
    ctx->r4 = ADD32(ctx->r4, 0X5274);
    // 0x802B5214: jal         0x8004A9B4
    // 0x802B5218: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_4;
    // 0x802B5218: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_4:
    // 0x802B521C: jal         0x8002198C
    // 0x802B5220: nop

    func_8002198C(rdram, ctx);
        goto after_5;
    // 0x802B5220: nop

    after_5:
    // 0x802B5224: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x802B5228: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x802B522C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x802B5230: lbu         $t7, -0x32A4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X32A4);
    // 0x802B5234: sh          $t6, -0x2FAA($at)
    MEM_H(-0X2FAA, ctx->r1) = ctx->r14;
    // 0x802B5238: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B523C: bne         $t7, $at, L_802B5254
    if (ctx->r15 != ctx->r1) {
        // 0x802B5240: nop
    
            goto L_802B5254;
    }
    // 0x802B5240: nop

    // 0x802B5244: jal         0x8000AB98
    // 0x802B5248: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8000AB98(rdram, ctx);
        goto after_6;
    // 0x802B5248: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_6:
    // 0x802B524C: b           L_802B525C
    // 0x802B5250: nop

        goto L_802B525C;
    // 0x802B5250: nop

L_802B5254:
    // 0x802B5254: jal         0x8000AB98
    // 0x802B5258: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8000AB98(rdram, ctx);
        goto after_7;
    // 0x802B5258: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_7:
L_802B525C:
    // 0x802B525C: jal         0x800047A4
    // 0x802B5260: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_800047A4(rdram, ctx);
        goto after_8;
    // 0x802B5260: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_8:
    // 0x802B5264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B5268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B526C: jr          $ra
    // 0x802B5270: nop

    return;
    // 0x802B5270: nop

;}
RECOMP_FUNC void func_802B5274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B5274: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B5278: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B527C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B5280: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802B5284: jal         0x80015BC0
    // 0x802B5288: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x802B5288: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_0:
    // 0x802B528C: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B5290: jal         0x800296E0
    // 0x802B5294: addiu       $a0, $a0, 0x52A8
    ctx->r4 = ADD32(ctx->r4, 0X52A8);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x802B5294: addiu       $a0, $a0, 0x52A8
    ctx->r4 = ADD32(ctx->r4, 0X52A8);
    after_1:
    // 0x802B5298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B529C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B52A0: jr          $ra
    // 0x802B52A4: nop

    return;
    // 0x802B52A4: nop

;}
RECOMP_FUNC void func_802B52A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B52A8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802B52AC: lw          $t6, 0x6980($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6980);
    // 0x802B52B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B52B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B52B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B52BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B52C0: bne         $t6, $at, L_802B52D8
    if (ctx->r14 != ctx->r1) {
        // 0x802B52C4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802B52D8;
    }
    // 0x802B52C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802B52C8: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B52CC: addiu       $a0, $a0, 0x52E8
    ctx->r4 = ADD32(ctx->r4, 0X52E8);
    // 0x802B52D0: jal         0x8002989C
    // 0x802B52D4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x802B52D4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
L_802B52D8:
    // 0x802B52D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B52DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B52E0: jr          $ra
    // 0x802B52E4: nop

    return;
    // 0x802B52E4: nop

;}
RECOMP_FUNC void func_802B52E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B52E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B52EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B52F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B52F4: jal         0x8005ACAC
    // 0x802B52F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8005ACAC(rdram, ctx);
        goto after_0;
    // 0x802B52F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802B52FC: jal         0x800603F0
    // 0x802B5300: nop

    func_800603F0(rdram, ctx);
        goto after_1;
    // 0x802B5300: nop

    after_1:
    // 0x802B5304: jal         0x80020270
    // 0x802B5308: nop

    func_80020270(rdram, ctx);
        goto after_2;
    // 0x802B5308: nop

    after_2:
    // 0x802B530C: jal         0x80073F40
    // 0x802B5310: nop

    func_80073F40(rdram, ctx);
        goto after_3;
    // 0x802B5310: nop

    after_3:
    // 0x802B5314: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B5318: addiu       $a0, $a0, 0x5334
    ctx->r4 = ADD32(ctx->r4, 0X5334);
    // 0x802B531C: jal         0x8002989C
    // 0x802B5320: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002989C(rdram, ctx);
        goto after_4;
    // 0x802B5320: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x802B5324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B5328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B532C: jr          $ra
    // 0x802B5330: nop

    return;
    // 0x802B5330: nop

;}
RECOMP_FUNC void func_802B5334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B5334: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B5338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B533C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B5340: jal         0x800375E8
    // 0x802B5344: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800375E8(rdram, ctx);
        goto after_0;
    // 0x802B5344: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802B5348: jal         0x80037608
    // 0x802B534C: nop

    func_80037608(rdram, ctx);
        goto after_1;
    // 0x802B534C: nop

    after_1:
    // 0x802B5350: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x802B5354: lui         $t6, 0x802B
    ctx->r14 = S32(0X802B << 16);
    // 0x802B5358: addiu       $t6, $t6, 0x537C
    ctx->r14 = ADD32(ctx->r14, 0X537C);
    // 0x802B535C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x802B5360: addiu       $a0, $a0, 0x7404
    ctx->r4 = ADD32(ctx->r4, 0X7404);
    // 0x802B5364: jal         0x800296E0
    // 0x802B5368: sw          $t6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r14;
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x802B5368: sw          $t6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r14;
    after_2:
    // 0x802B536C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B5370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B5374: jr          $ra
    // 0x802B5378: nop

    return;
    // 0x802B5378: nop

;}
RECOMP_FUNC void func_802B537C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B537C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B5380: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B5384: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B5388: jal         0x8026E090
    // 0x802B538C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x8026E090)(rdram, ctx);
        goto after_0;
    // 0x802B538C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802B5390: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x802B5394: addiu       $a0, $a0, 0x53B0
    ctx->r4 = ADD32(ctx->r4, 0X53B0);
    // 0x802B5398: jal         0x8002989C
    // 0x802B539C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x802B539C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x802B53A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B53A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B53A8: jr          $ra
    // 0x802B53AC: nop

    return;
    // 0x802B53AC: nop

;}
RECOMP_FUNC void func_802B53B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B53B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B53B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B53B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B53BC: jal         0x8001C820
    // 0x802B53C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001C820(rdram, ctx);
        goto after_0;
    // 0x802B53C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802B53C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802B53C8: jal         0x8002A320
    // 0x802B53CC: nop

    func_8002A320(rdram, ctx);
        goto after_1;
    // 0x802B53CC: nop

    after_1:
    // 0x802B53D0: jal         0x80029520
    // 0x802B53D4: nop

    func_80029520(rdram, ctx);
        goto after_2;
    // 0x802B53D4: nop

    after_2:
    // 0x802B53D8: jal         0x8002F2AC
    // 0x802B53DC: nop

    func_8002F2AC(rdram, ctx);
        goto after_3;
    // 0x802B53DC: nop

    after_3:
    // 0x802B53E0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x802B53E4: jal         0x80020318
    // 0x802B53E8: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    func_80020318(rdram, ctx);
        goto after_4;
    // 0x802B53E8: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    after_4:
    // 0x802B53EC: jal         0x80073F40
    // 0x802B53F0: nop

    func_80073F40(rdram, ctx);
        goto after_5;
    // 0x802B53F0: nop

    after_5:
    // 0x802B53F4: jal         0x800354D0
    // 0x802B53F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800354D0(rdram, ctx);
        goto after_6;
    // 0x802B53F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x802B53FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B5400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B5404: jr          $ra
    // 0x802B5408: nop

    return;
    // 0x802B5408: nop

;}
RECOMP_FUNC void func_802B540C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B540C: jr          $ra
    // 0x802B5410: nop

    return;
    // 0x802B5410: nop

    // 0x802B5414: nop

    // 0x802B5418: nop

    // 0x802B541C: nop

;}
RECOMP_FUNC void func_802B5420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B5420: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802B5424: jr          $ra
    // 0x802B5428: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
    return;
    // 0x802B5428: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
;}
RECOMP_FUNC void func_802B542C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B542C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x802B5430: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802B5434: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802B5438: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802B543C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802B5440: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802B5444: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802B5448: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802B544C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802B5450: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x802B5454: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x802B5458: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802B545C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802B5460: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x802B5464: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802B5468: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B546C: addiu       $a3, $zero, 0x2C
    ctx->r7 = ADD32(0, 0X2C);
L_802B5470:
    // 0x802B5470: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802B5474: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802B5478: sll         $t2, $a2, 4
    ctx->r10 = S32(ctx->r6 << 4);
    // 0x802B547C: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x802B5480: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x802B5484: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x802B5488: mflo        $t9
    ctx->r25 = lo;
    // 0x802B548C: addu        $a0, $a1, $t9
    ctx->r4 = ADD32(ctx->r5, ctx->r25);
    // 0x802B5490: lbu         $v1, 0x40($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X40);
    // 0x802B5494: nop

    // 0x802B5498: andi        $t1, $v1, 0xF
    ctx->r9 = ctx->r3 & 0XF;
    // 0x802B549C: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x802B54A0: bne         $at, $zero, L_802B5470
    if (ctx->r1 != 0) {
        // 0x802B54A4: sb          $t3, 0x40($a0)
        MEM_B(0X40, ctx->r4) = ctx->r11;
            goto L_802B5470;
    }
    // 0x802B54A4: sb          $t3, 0x40($a0)
    MEM_B(0X40, ctx->r4) = ctx->r11;
    // 0x802B54A8: jr          $ra
    // 0x802B54AC: nop

    return;
    // 0x802B54AC: nop

;}
RECOMP_FUNC void func_8033EE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033EE00: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8033EE04: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8033EE08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033EE0C: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8033EE10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033EE14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033EE18: lbu         $t7, -0x7662($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7662);
    // 0x8033EE1C: lui         $t9, 0x8035
    ctx->r25 = S32(0X8035 << 16);
    // 0x8033EE20: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033EE24: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033EE28: lw          $t9, -0x59F0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X59F0);
    // 0x8033EE2C: nop

    // 0x8033EE30: jalr        $t9
    // 0x8033EE34: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8033EE34: nop

    after_0:
    // 0x8033EE38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033EE3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033EE40: jr          $ra
    // 0x8033EE44: nop

    return;
    // 0x8033EE44: nop

;}
RECOMP_FUNC void func_8033EE48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033EE48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033EE4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033EE50: jal         0x800839E0
    // 0x8033EE54: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_0;
    // 0x8033EE54: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x8033EE58: jal         0x80015BC0
    // 0x8033EE5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x8033EE5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8033EE60: jal         0x8033EF78
    // 0x8033EE64: nop

    func_8033EF78(rdram, ctx);
        goto after_2;
    // 0x8033EE64: nop

    after_2:
    // 0x8033EE68: lui         $a0, 0x8035
    ctx->r4 = S32(0X8035 << 16);
    // 0x8033EE6C: jal         0x8033F92C
    // 0x8033EE70: addiu       $a0, $a0, -0x72B4
    ctx->r4 = ADD32(ctx->r4, -0X72B4);
    func_8033F92C(rdram, ctx);
        goto after_3;
    // 0x8033EE70: addiu       $a0, $a0, -0x72B4
    ctx->r4 = ADD32(ctx->r4, -0X72B4);
    after_3:
    // 0x8033EE74: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8033EE78: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x8033EE7C: lui         $t6, 0x3
    ctx->r14 = S32(0X3 << 16);
    // 0x8033EE80: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x8033EE84: lbu         $t6, -0x7662($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X7662);
    // 0x8033EE88: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8033EE8C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8033EE90: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8033EE94: sb          $t7, -0x7662($at)
    MEM_B(-0X7662, ctx->r1) = ctx->r15;
    // 0x8033EE98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033EE9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033EEA0: jr          $ra
    // 0x8033EEA4: nop

    return;
    // 0x8033EEA4: nop

;}
RECOMP_FUNC void func_8033EEA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033EEA8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8033EEAC: addiu       $a0, $a0, -0x2F98
    ctx->r4 = ADD32(ctx->r4, -0X2F98);
    // 0x8033EEB0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8033EEB4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8033EEB8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8033EEBC: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
    // 0x8033EEC0: lhu         $t6, 0x9AC($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X9AC);
    // 0x8033EEC4: lui         $a1, 0x8035
    ctx->r5 = S32(0X8035 << 16);
    // 0x8033EEC8: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x8033EECC: bne         $t7, $zero, L_8033EF10
    if (ctx->r15 != 0) {
        // 0x8033EED0: addiu       $a1, $a1, -0x5620
        ctx->r5 = ADD32(ctx->r5, -0X5620);
            goto L_8033EF10;
    }
    // 0x8033EED0: addiu       $a1, $a1, -0x5620
    ctx->r5 = ADD32(ctx->r5, -0X5620);
    // 0x8033EED4: lhu         $t8, 0x9B6($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X9B6);
    // 0x8033EED8: nop

    // 0x8033EEDC: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x8033EEE0: bne         $t9, $zero, L_8033EF10
    if (ctx->r25 != 0) {
        // 0x8033EEE4: nop
    
            goto L_8033EF10;
    }
    // 0x8033EEE4: nop

    // 0x8033EEE8: lhu         $t0, 0x9C0($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X9C0);
    // 0x8033EEEC: nop

    // 0x8033EEF0: andi        $t1, $t0, 0x1000
    ctx->r9 = ctx->r8 & 0X1000;
    // 0x8033EEF4: bne         $t1, $zero, L_8033EF10
    if (ctx->r9 != 0) {
        // 0x8033EEF8: nop
    
            goto L_8033EF10;
    }
    // 0x8033EEF8: nop

    // 0x8033EEFC: lhu         $t2, 0x9CA($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X9CA);
    // 0x8033EF00: nop

    // 0x8033EF04: andi        $t3, $t2, 0x1000
    ctx->r11 = ctx->r10 & 0X1000;
    // 0x8033EF08: beq         $t3, $zero, L_8033EF3C
    if (ctx->r11 == 0) {
        // 0x8033EF0C: nop
    
            goto L_8033EF3C;
    }
    // 0x8033EF0C: nop

L_8033EF10:
    // 0x8033EF10: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8033EF14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033EF18: bne         $v1, $at, L_8033EF28
    if (ctx->r3 != ctx->r1) {
        // 0x8033EF1C: addiu       $t4, $zero, 0x2
        ctx->r12 = ADD32(0, 0X2);
            goto L_8033EF28;
    }
    // 0x8033EF1C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8033EF20: b           L_8033EF3C
    // 0x8033EF24: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
        goto L_8033EF3C;
    // 0x8033EF24: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
L_8033EF28:
    // 0x8033EF28: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8033EF2C: bne         $at, $zero, L_8033EF3C
    if (ctx->r1 != 0) {
        // 0x8033EF30: addiu       $t5, $zero, 0x1E
        ctx->r13 = ADD32(0, 0X1E);
            goto L_8033EF3C;
    }
    // 0x8033EF30: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x8033EF34: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033EF38: sw          $t5, -0x55F8($at)
    MEM_W(-0X55F8, ctx->r1) = ctx->r13;
L_8033EF3C:
    // 0x8033EF3C: lui         $a1, 0x8035
    ctx->r5 = S32(0X8035 << 16);
    // 0x8033EF40: addiu       $a1, $a1, -0x5620
    ctx->r5 = ADD32(ctx->r5, -0X5620);
    // 0x8033EF44: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8033EF48: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8033EF4C: bne         $t6, $at, L_8033EF70
    if (ctx->r14 != ctx->r1) {
        // 0x8033EF50: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8033EF70;
    }
    // 0x8033EF50: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8033EF54: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8033EF58: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8033EF5C: sb          $t7, -0x7663($at)
    MEM_B(-0X7663, ctx->r1) = ctx->r15;
    // 0x8033EF60: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8033EF64: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8033EF68: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033EF6C: sw          $zero, 0x7D0($at)
    MEM_W(0X7D0, ctx->r1) = 0;
L_8033EF70:
    // 0x8033EF70: jr          $ra
    // 0x8033EF74: nop

    return;
    // 0x8033EF74: nop

;}
RECOMP_FUNC void func_8033EF78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033EF78: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033EF7C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033EF80: sw          $zero, -0x5618($at)
    MEM_W(-0X5618, ctx->r1) = 0;
    // 0x8033EF84: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033EF88: swc1        $f4, -0x5614($at)
    MEM_W(-0X5614, ctx->r1) = ctx->f4.u32l;
    // 0x8033EF8C: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033EF90: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8033EF94: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x8033EF98: sw          $zero, -0x5610($at)
    MEM_W(-0X5610, ctx->r1) = 0;
    // 0x8033EF9C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8033EFA0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8033EFA4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033EFA8: sw          $t6, 0x7D0($at)
    MEM_W(0X7D0, ctx->r1) = ctx->r14;
    // 0x8033EFAC: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033EFB0: sw          $zero, -0x5600($at)
    MEM_W(-0X5600, ctx->r1) = 0;
    // 0x8033EFB4: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033EFB8: sw          $zero, -0x5608($at)
    MEM_W(-0X5608, ctx->r1) = 0;
    // 0x8033EFBC: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033EFC0: sw          $zero, -0x5604($at)
    MEM_W(-0X5604, ctx->r1) = 0;
    // 0x8033EFC4: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033EFC8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8033EFCC: sw          $t8, -0x55FC($at)
    MEM_W(-0X55FC, ctx->r1) = ctx->r24;
    // 0x8033EFD0: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033EFD4: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x8033EFD8: sw          $t9, -0x55F8($at)
    MEM_W(-0X55F8, ctx->r1) = ctx->r25;
    // 0x8033EFDC: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033EFE0: jr          $ra
    // 0x8033EFE4: sw          $zero, -0x5620($at)
    MEM_W(-0X5620, ctx->r1) = 0;
    return;
    // 0x8033EFE4: sw          $zero, -0x5620($at)
    MEM_W(-0X5620, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8033EFE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033EFE8: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033EFEC: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8033EFF0: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8033EFF4: sw          $a0, -0x561C($at)
    MEM_W(-0X561C, ctx->r1) = ctx->r4;
    // 0x8033EFF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033EFFC: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033F000: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8033F004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033F008: sw          $a1, -0x560C($at)
    MEM_W(-0X560C, ctx->r1) = ctx->r5;
    // 0x8033F00C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033F010: lw          $t7, 0x7D0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7D0);
    // 0x8033F014: lui         $a2, 0x8035
    ctx->r6 = S32(0X8035 << 16);
    // 0x8033F018: bne         $t7, $zero, L_8033F030
    if (ctx->r15 != 0) {
        // 0x8033F01C: addiu       $a2, $a2, -0x5620
        ctx->r6 = ADD32(ctx->r6, -0X5620);
            goto L_8033F030;
    }
    // 0x8033F01C: addiu       $a2, $a2, -0x5620
    ctx->r6 = ADD32(ctx->r6, -0X5620);
    // 0x8033F020: lui         $v0, 0x8035
    ctx->r2 = S32(0X8035 << 16);
    // 0x8033F024: lw          $v0, -0x560C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X560C);
    // 0x8033F028: b           L_8033F304
    // 0x8033F02C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8033F304;
    // 0x8033F02C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8033F030:
    // 0x8033F030: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x8033F034: nop

    // 0x8033F038: sltiu       $at, $a1, 0x6
    ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
    // 0x8033F03C: beq         $at, $zero, L_8033F300
    if (ctx->r1 == 0) {
        // 0x8033F040: sll         $t8, $a1, 2
        ctx->r24 = S32(ctx->r5 << 2);
            goto L_8033F300;
    }
    // 0x8033F040: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x8033F044: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033F048: addu        $at, $at, $t8
    gpr jr_addend_8033F054 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033F04C: lw          $t8, -0x5940($at)
    ctx->r24 = ADD32(ctx->r1, -0X5940);
    // 0x8033F050: nop

    // 0x8033F054: jr          $t8
    // 0x8033F058: nop

    switch (jr_addend_8033F054 >> 2) {
        case 0: goto L_8033F05C; break;
        case 1: goto L_8033F0BC; break;
        case 2: goto L_8033F174; break;
        case 3: goto L_8033F21C; break;
        case 4: goto L_8033F288; break;
        case 5: goto L_8033F2EC; break;
        default: switch_error(__func__, 0x8033F054, 0x8034A6C0);
    }
    // 0x8033F058: nop

L_8033F05C:
    // 0x8033F05C: lui         $v0, 0x8035
    ctx->r2 = S32(0X8035 << 16);
    // 0x8033F060: addiu       $v0, $v0, -0x55FC
    ctx->r2 = ADD32(ctx->r2, -0X55FC);
    // 0x8033F064: lbu         $a0, 0x3($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X3);
    // 0x8033F068: addiu       $t9, $a1, 0x1
    ctx->r25 = ADD32(ctx->r5, 0X1);
    // 0x8033F06C: bne         $a0, $zero, L_8033F078
    if (ctx->r4 != 0) {
        // 0x8033F070: nop
    
            goto L_8033F078;
    }
    // 0x8033F070: nop

    // 0x8033F074: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
L_8033F078:
    // 0x8033F078: jal         0x8033F968
    // 0x8033F07C: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    func_8033F968(rdram, ctx);
        goto after_0;
    // 0x8033F07C: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    after_0:
    // 0x8033F080: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x8033F084: jal         0x8033F310
    // 0x8033F088: nop

    func_8033F310(rdram, ctx);
        goto after_1;
    // 0x8033F088: nop

    after_1:
    // 0x8033F08C: lui         $v0, 0x8035
    ctx->r2 = S32(0X8035 << 16);
    // 0x8033F090: addiu       $v0, $v0, -0x55FC
    ctx->r2 = ADD32(ctx->r2, -0X55FC);
    // 0x8033F094: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8033F098: nop

    // 0x8033F09C: addiu       $t1, $t0, -0x10
    ctx->r9 = ADD32(ctx->r8, -0X10);
    // 0x8033F0A0: bgez        $t1, L_8033F0AC
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8033F0A4: sw          $t1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r9;
            goto L_8033F0AC;
    }
    // 0x8033F0A4: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8033F0A8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_8033F0AC:
    // 0x8033F0AC: lui         $v0, 0x8035
    ctx->r2 = S32(0X8035 << 16);
    // 0x8033F0B0: lw          $v0, -0x560C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X560C);
    // 0x8033F0B4: b           L_8033F304
    // 0x8033F0B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8033F304;
    // 0x8033F0B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8033F0BC:
    // 0x8033F0BC: lui         $v1, 0x8035
    ctx->r3 = S32(0X8035 << 16);
    // 0x8033F0C0: addiu       $v1, $v1, -0x5614
    ctx->r3 = ADD32(ctx->r3, -0X5614);
    // 0x8033F0C4: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8033F0C8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8033F0CC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8033F0D0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033F0D4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8033F0D8: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x8033F0DC: lui         $a0, 0x8035
    ctx->r4 = S32(0X8035 << 16);
    // 0x8033F0E0: bc1f        L_8033F0FC
    if (!c1cs) {
        // 0x8033F0E4: addiu       $a0, $a0, -0x5618
        ctx->r4 = ADD32(ctx->r4, -0X5618);
            goto L_8033F0FC;
    }
    // 0x8033F0E4: addiu       $a0, $a0, -0x5618
    ctx->r4 = ADD32(ctx->r4, -0X5618);
    // 0x8033F0E8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8033F0EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033F0F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033F0F4: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8033F0F8: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
L_8033F0FC:
    // 0x8033F0FC: lui         $a0, 0x8035
    ctx->r4 = S32(0X8035 << 16);
    // 0x8033F100: addiu       $a0, $a0, -0x5618
    ctx->r4 = ADD32(ctx->r4, -0X5618);
    // 0x8033F104: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8033F108: addiu       $t6, $zero, 0x17
    ctx->r14 = ADD32(0, 0X17);
    // 0x8033F10C: slti        $at, $t5, 0x17
    ctx->r1 = SIGNED(ctx->r13) < 0X17 ? 1 : 0;
    // 0x8033F110: bne         $at, $zero, L_8033F12C
    if (ctx->r1 != 0) {
        // 0x8033F114: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8033F12C;
    }
    // 0x8033F114: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8033F118: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8033F11C: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033F120: sw          $t7, -0x5610($at)
    MEM_W(-0X5610, ctx->r1) = ctx->r15;
    // 0x8033F124: addiu       $t8, $a1, 0x1
    ctx->r24 = ADD32(ctx->r5, 0X1);
    // 0x8033F128: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
L_8033F12C:
    // 0x8033F12C: jal         0x8033F968
    // 0x8033F130: nop

    func_8033F968(rdram, ctx);
        goto after_2;
    // 0x8033F130: nop

    after_2:
    // 0x8033F134: jal         0x8033F380
    // 0x8033F138: nop

    func_8033F380(rdram, ctx);
        goto after_3;
    // 0x8033F138: nop

    after_3:
    // 0x8033F13C: lui         $v1, 0x8035
    ctx->r3 = S32(0X8035 << 16);
    // 0x8033F140: addiu       $v1, $v1, -0x5614
    ctx->r3 = ADD32(ctx->r3, -0X5614);
    // 0x8033F144: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8033F148: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x8033F14C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8033F150: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033F154: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8033F158: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x8033F15C: lui         $v0, 0x8035
    ctx->r2 = S32(0X8035 << 16);
    // 0x8033F160: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8033F164: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    // 0x8033F168: lw          $v0, -0x560C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X560C);
    // 0x8033F16C: b           L_8033F304
    // 0x8033F170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8033F304;
    // 0x8033F170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8033F174:
    // 0x8033F174: lui         $a0, 0x8035
    ctx->r4 = S32(0X8035 << 16);
    // 0x8033F178: addiu       $a0, $a0, -0x5618
    ctx->r4 = ADD32(ctx->r4, -0X5618);
    // 0x8033F17C: addiu       $t9, $zero, 0x17
    ctx->r25 = ADD32(0, 0X17);
    // 0x8033F180: lui         $v1, 0x8035
    ctx->r3 = S32(0X8035 << 16);
    // 0x8033F184: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8033F188: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8033F18C: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033F190: addiu       $v1, $v1, -0x5600
    ctx->r3 = ADD32(ctx->r3, -0X5600);
    // 0x8033F194: sw          $t0, -0x5610($at)
    MEM_W(-0X5610, ctx->r1) = ctx->r8;
    // 0x8033F198: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033F19C: nop

    // 0x8033F1A0: bne         $v0, $zero, L_8033F1C4
    if (ctx->r2 != 0) {
        // 0x8033F1A4: addiu       $t1, $v0, 0x1
        ctx->r9 = ADD32(ctx->r2, 0X1);
            goto L_8033F1C4;
    }
    // 0x8033F1A4: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x8033F1A8: jal         0x80015BC0
    // 0x8033F1AC: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_80015BC0(rdram, ctx);
        goto after_4;
    // 0x8033F1AC: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_4:
    // 0x8033F1B0: lui         $v1, 0x8035
    ctx->r3 = S32(0X8035 << 16);
    // 0x8033F1B4: addiu       $v1, $v1, -0x5600
    ctx->r3 = ADD32(ctx->r3, -0X5600);
    // 0x8033F1B8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033F1BC: nop

    // 0x8033F1C0: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
L_8033F1C4:
    // 0x8033F1C4: slti        $at, $t1, 0x7
    ctx->r1 = SIGNED(ctx->r9) < 0X7 ? 1 : 0;
    // 0x8033F1C8: bne         $at, $zero, L_8033F1FC
    if (ctx->r1 != 0) {
        // 0x8033F1CC: sw          $t1, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r9;
            goto L_8033F1FC;
    }
    // 0x8033F1CC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x8033F1D0: lui         $a0, 0x8035
    ctx->r4 = S32(0X8035 << 16);
    // 0x8033F1D4: jal         0x8033F92C
    // 0x8033F1D8: addiu       $a0, $a0, -0x72D8
    ctx->r4 = ADD32(ctx->r4, -0X72D8);
    func_8033F92C(rdram, ctx);
        goto after_5;
    // 0x8033F1D8: addiu       $a0, $a0, -0x72D8
    ctx->r4 = ADD32(ctx->r4, -0X72D8);
    after_5:
    // 0x8033F1DC: lui         $a2, 0x8035
    ctx->r6 = S32(0X8035 << 16);
    // 0x8033F1E0: addiu       $a2, $a2, -0x5620
    ctx->r6 = ADD32(ctx->r6, -0X5620);
    // 0x8033F1E4: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x8033F1E8: lui         $v1, 0x8035
    ctx->r3 = S32(0X8035 << 16);
    // 0x8033F1EC: addiu       $v1, $v1, -0x5600
    ctx->r3 = ADD32(ctx->r3, -0X5600);
    // 0x8033F1F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033F1F4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8033F1F8: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
L_8033F1FC:
    // 0x8033F1FC: jal         0x8033F968
    // 0x8033F200: nop

    func_8033F968(rdram, ctx);
        goto after_6;
    // 0x8033F200: nop

    after_6:
    // 0x8033F204: jal         0x8033F380
    // 0x8033F208: nop

    func_8033F380(rdram, ctx);
        goto after_7;
    // 0x8033F208: nop

    after_7:
    // 0x8033F20C: lui         $v0, 0x8035
    ctx->r2 = S32(0X8035 << 16);
    // 0x8033F210: lw          $v0, -0x560C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X560C);
    // 0x8033F214: b           L_8033F304
    // 0x8033F218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8033F304;
    // 0x8033F218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8033F21C:
    // 0x8033F21C: lui         $v1, 0x8035
    ctx->r3 = S32(0X8035 << 16);
    // 0x8033F220: addiu       $v1, $v1, -0x5600
    ctx->r3 = ADD32(ctx->r3, -0X5600);
    // 0x8033F224: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x8033F228: lui         $t7, 0x8035
    ctx->r15 = S32(0X8035 << 16);
    // 0x8033F22C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8033F230: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8033F234: lw          $t7, -0x55F8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X55F8);
    // 0x8033F238: lui         $v1, 0x8035
    ctx->r3 = S32(0X8035 << 16);
    // 0x8033F23C: slt         $at, $t7, $t6
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8033F240: beq         $at, $zero, L_8033F25C
    if (ctx->r1 == 0) {
        // 0x8033F244: addiu       $v1, $v1, -0x5608
        ctx->r3 = ADD32(ctx->r3, -0X5608);
            goto L_8033F25C;
    }
    // 0x8033F244: addiu       $v1, $v1, -0x5608
    ctx->r3 = ADD32(ctx->r3, -0X5608);
    // 0x8033F248: lui         $v0, 0x8035
    ctx->r2 = S32(0X8035 << 16);
    // 0x8033F24C: addiu       $v0, $v0, -0x55FC
    ctx->r2 = ADD32(ctx->r2, -0X55FC);
    // 0x8033F250: addiu       $t9, $a1, 0x1
    ctx->r25 = ADD32(ctx->r5, 0X1);
    // 0x8033F254: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8033F258: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
L_8033F25C:
    // 0x8033F25C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033F260: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x8033F264: beq         $v0, $at, L_8033F270
    if (ctx->r2 == ctx->r1) {
        // 0x8033F268: addiu       $t0, $v0, 0x1
        ctx->r8 = ADD32(ctx->r2, 0X1);
            goto L_8033F270;
    }
    // 0x8033F268: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x8033F26C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_8033F270:
    // 0x8033F270: jal         0x8033F968
    // 0x8033F274: nop

    func_8033F968(rdram, ctx);
        goto after_8;
    // 0x8033F274: nop

    after_8:
    // 0x8033F278: lui         $v0, 0x8035
    ctx->r2 = S32(0X8035 << 16);
    // 0x8033F27C: lw          $v0, -0x560C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X560C);
    // 0x8033F280: b           L_8033F304
    // 0x8033F284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8033F304;
    // 0x8033F284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8033F288:
    // 0x8033F288: lui         $v0, 0x8035
    ctx->r2 = S32(0X8035 << 16);
    // 0x8033F28C: addiu       $v0, $v0, -0x55FC
    ctx->r2 = ADD32(ctx->r2, -0X55FC);
    // 0x8033F290: lbu         $a0, 0x3($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X3);
    // 0x8033F294: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8033F298: bne         $a0, $at, L_8033F2A4
    if (ctx->r4 != ctx->r1) {
        // 0x8033F29C: addiu       $t1, $a1, 0x1
        ctx->r9 = ADD32(ctx->r5, 0X1);
            goto L_8033F2A4;
    }
    // 0x8033F29C: addiu       $t1, $a1, 0x1
    ctx->r9 = ADD32(ctx->r5, 0X1);
    // 0x8033F2A0: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
L_8033F2A4:
    // 0x8033F2A4: jal         0x8033F968
    // 0x8033F2A8: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    func_8033F968(rdram, ctx);
        goto after_9;
    // 0x8033F2A8: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    after_9:
    // 0x8033F2AC: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x8033F2B0: jal         0x8033F310
    // 0x8033F2B4: nop

    func_8033F310(rdram, ctx);
        goto after_10;
    // 0x8033F2B4: nop

    after_10:
    // 0x8033F2B8: lui         $v0, 0x8035
    ctx->r2 = S32(0X8035 << 16);
    // 0x8033F2BC: addiu       $v0, $v0, -0x55FC
    ctx->r2 = ADD32(ctx->r2, -0X55FC);
    // 0x8033F2C0: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8033F2C4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8033F2C8: addiu       $t3, $t2, 0x10
    ctx->r11 = ADD32(ctx->r10, 0X10);
    // 0x8033F2CC: slti        $at, $t3, 0x100
    ctx->r1 = SIGNED(ctx->r11) < 0X100 ? 1 : 0;
    // 0x8033F2D0: bne         $at, $zero, L_8033F2DC
    if (ctx->r1 != 0) {
        // 0x8033F2D4: sw          $t3, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r11;
            goto L_8033F2DC;
    }
    // 0x8033F2D4: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8033F2D8: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_8033F2DC:
    // 0x8033F2DC: lui         $v0, 0x8035
    ctx->r2 = S32(0X8035 << 16);
    // 0x8033F2E0: lw          $v0, -0x560C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X560C);
    // 0x8033F2E4: b           L_8033F304
    // 0x8033F2E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8033F304;
    // 0x8033F2E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8033F2EC:
    // 0x8033F2EC: jal         0x80015BC0
    // 0x8033F2F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80015BC0(rdram, ctx);
        goto after_11;
    // 0x8033F2F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x8033F2F4: lui         $v0, 0x8035
    ctx->r2 = S32(0X8035 << 16);
    // 0x8033F2F8: lw          $v0, -0x560C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X560C);
    // 0x8033F2FC: nop

L_8033F300:
    // 0x8033F300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8033F304:
    // 0x8033F304: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033F308: jr          $ra
    // 0x8033F30C: nop

    return;
    // 0x8033F30C: nop

;}
RECOMP_FUNC void func_8033F310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033F310: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8033F314: beq         $t6, $zero, L_8033F378
    if (ctx->r14 == 0) {
        // 0x8033F318: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_8033F378;
    }
    // 0x8033F318: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8033F31C: lui         $a3, 0x8035
    ctx->r7 = S32(0X8035 << 16);
    // 0x8033F320: addiu       $a3, $a3, -0x560C
    ctx->r7 = ADD32(ctx->r7, -0X560C);
    // 0x8033F324: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8033F328: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8033F32C: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8033F330: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x8033F334: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8033F338: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8033F33C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8033F340: lui         $t0, 0xFA00
    ctx->r8 = S32(0XFA00 << 16);
    // 0x8033F344: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8033F348: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8033F34C: andi        $t1, $t6, 0xFF
    ctx->r9 = ctx->r14 & 0XFF;
    // 0x8033F350: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x8033F354: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x8033F358: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8033F35C: lui         $t4, 0x8035
    ctx->r12 = S32(0X8035 << 16);
    // 0x8033F360: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x8033F364: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x8033F368: addiu       $t4, $t4, -0x71F0
    ctx->r12 = ADD32(ctx->r12, -0X71F0);
    // 0x8033F36C: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8033F370: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8033F374: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
L_8033F378:
    // 0x8033F378: jr          $ra
    // 0x8033F37C: nop

    return;
    // 0x8033F37C: nop

;}
RECOMP_FUNC void func_8033F380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033F380: lui         $t6, 0x8035
    ctx->r14 = S32(0X8035 << 16);
    // 0x8033F384: lw          $t6, -0x561C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X561C);
    // 0x8033F388: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033F38C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033F390: lui         $t8, 0x8035
    ctx->r24 = S32(0X8035 << 16);
    // 0x8033F394: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8033F398: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8033F39C: sll         $t7, $t7, 7
    ctx->r15 = S32(ctx->r15 << 7);
    // 0x8033F3A0: addiu       $t8, $t8, -0x5920
    ctx->r24 = ADD32(ctx->r24, -0X5920);
    // 0x8033F3A4: lui         $a2, 0x8035
    ctx->r6 = S32(0X8035 << 16);
    // 0x8033F3A8: lui         $a3, 0x8035
    ctx->r7 = S32(0X8035 << 16);
    // 0x8033F3AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033F3B0: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x8033F3B4: lw          $a3, -0x5614($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X5614);
    // 0x8033F3B8: lw          $a2, -0x5618($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X5618);
    // 0x8033F3BC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033F3C0: addiu       $a1, $a1, 0x9A0
    ctx->r5 = ADD32(ctx->r5, 0X9A0);
    // 0x8033F3C4: jal         0x8033F650
    // 0x8033F3C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8033F650(rdram, ctx);
        goto after_0;
    // 0x8033F3C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8033F3CC: lui         $t0, 0x8035
    ctx->r8 = S32(0X8035 << 16);
    // 0x8033F3D0: addiu       $t0, $t0, -0x560C
    ctx->r8 = ADD32(ctx->r8, -0X560C);
    // 0x8033F3D4: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x8033F3D8: lui         $t2, 0x8035
    ctx->r10 = S32(0X8035 << 16);
    // 0x8033F3DC: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8033F3E0: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8033F3E4: addiu       $t2, $t2, -0x7290
    ctx->r10 = ADD32(ctx->r10, -0X7290);
    // 0x8033F3E8: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8033F3EC: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033F3F0: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x8033F3F4: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x8033F3F8: lwc1        $f4, -0x5614($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5614);
    // 0x8033F3FC: lui         $a3, 0x8035
    ctx->r7 = S32(0X8035 << 16);
    // 0x8033F400: lw          $a3, -0x5618($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X5618);
    // 0x8033F404: lui         $a0, 0x8035
    ctx->r4 = S32(0X8035 << 16);
    // 0x8033F408: lui         $a2, 0x8034
    ctx->r6 = S32(0X8034 << 16);
    // 0x8033F40C: addiu       $a2, $a2, 0x460
    ctx->r6 = ADD32(ctx->r6, 0X460);
    // 0x8033F410: addiu       $a0, $a0, -0x7168
    ctx->r4 = ADD32(ctx->r4, -0X7168);
    // 0x8033F414: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x8033F418: jal         0x8033F4A8
    // 0x8033F41C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8033F4A8(rdram, ctx);
        goto after_1;
    // 0x8033F41C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8033F420: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033F424: lwc1        $f6, -0x5614($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5614);
    // 0x8033F428: lui         $a3, 0x8035
    ctx->r7 = S32(0X8035 << 16);
    // 0x8033F42C: lw          $a3, -0x5618($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X5618);
    // 0x8033F430: lui         $a0, 0x8035
    ctx->r4 = S32(0X8035 << 16);
    // 0x8033F434: lui         $a2, 0x8034
    ctx->r6 = S32(0X8034 << 16);
    // 0x8033F438: addiu       $a2, $a2, 0x1C0
    ctx->r6 = ADD32(ctx->r6, 0X1C0);
    // 0x8033F43C: addiu       $a0, $a0, -0x67D8
    ctx->r4 = ADD32(ctx->r4, -0X67D8);
    // 0x8033F440: addiu       $a1, $s0, 0x100
    ctx->r5 = ADD32(ctx->r16, 0X100);
    // 0x8033F444: jal         0x8033F4A8
    // 0x8033F448: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8033F4A8(rdram, ctx);
        goto after_2;
    // 0x8033F448: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x8033F44C: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033F450: lwc1        $f8, -0x5614($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5614);
    // 0x8033F454: lui         $a3, 0x8035
    ctx->r7 = S32(0X8035 << 16);
    // 0x8033F458: lw          $a3, -0x5618($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X5618);
    // 0x8033F45C: lui         $a0, 0x8035
    ctx->r4 = S32(0X8035 << 16);
    // 0x8033F460: lui         $a2, 0x8034
    ctx->r6 = S32(0X8034 << 16);
    // 0x8033F464: addiu       $a2, $a2, 0x700
    ctx->r6 = ADD32(ctx->r6, 0X700);
    // 0x8033F468: addiu       $a0, $a0, -0x5E48
    ctx->r4 = ADD32(ctx->r4, -0X5E48);
    // 0x8033F46C: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    // 0x8033F470: jal         0x8033F4A8
    // 0x8033F474: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8033F4A8(rdram, ctx);
        goto after_3;
    // 0x8033F474: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8033F478: lui         $a0, 0x8035
    ctx->r4 = S32(0X8035 << 16);
    // 0x8033F47C: addiu       $a0, $a0, -0x560C
    ctx->r4 = ADD32(ctx->r4, -0X560C);
    // 0x8033F480: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8033F484: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x8033F488: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x8033F48C: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8033F490: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8033F494: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8033F498: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033F49C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8033F4A0: jr          $ra
    // 0x8033F4A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033F4A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033F4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033F4A8: sll         $t6, $a3, 3
    ctx->r14 = S32(ctx->r7 << 3);
    // 0x8033F4AC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8033F4B0: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x8033F4B4: lui         $t7, 0x8035
    ctx->r15 = S32(0X8035 << 16);
    // 0x8033F4B8: lw          $t7, -0x5610($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5610);
    // 0x8033F4BC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8033F4C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033F4C4: addu        $s0, $a2, $t6
    ctx->r16 = ADD32(ctx->r6, ctx->r14);
    // 0x8033F4C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033F4CC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8033F4D0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8033F4D4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8033F4D8: bne         $t7, $at, L_8033F4E4
    if (ctx->r15 != ctx->r1) {
        // 0x8033F4DC: addiu       $v0, $s0, 0x1C
        ctx->r2 = ADD32(ctx->r16, 0X1C);
            goto L_8033F4E4;
    }
    // 0x8033F4DC: addiu       $v0, $s0, 0x1C
    ctx->r2 = ADD32(ctx->r16, 0X1C);
    // 0x8033F4E0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8033F4E4:
    // 0x8033F4E4: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8033F4E8: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8033F4EC: lwc1        $f2, 0x58($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8033F4F0: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8033F4F4: lui         $at, 0x8035
    ctx->r1 = S32(0X8035 << 16);
    // 0x8033F4F8: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8033F4FC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x8033F500: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x8033F504: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x8033F508: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8033F50C: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8033F510: nop

    // 0x8033F514: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x8033F518: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8033F51C: add.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x8033F520: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x8033F524: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8033F528: lwc1        $f14, 0x14($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8033F52C: nop

    // 0x8033F530: sub.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x8033F534: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8033F538: add.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x8033F53C: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x8033F540: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8033F544: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8033F548: nop

    // 0x8033F54C: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x8033F550: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8033F554: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8033F558: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x8033F55C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8033F560: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8033F564: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8033F568: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x8033F56C: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8033F570: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x8033F574: lwc1        $f11, -0x5928($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X5928);
    // 0x8033F578: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x8033F57C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8033F580: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8033F584: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8033F588: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x8033F58C: lwc1        $f14, 0x18($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X18);
    // 0x8033F590: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8033F594: sub.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x8033F598: lwc1        $f10, -0x5924($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5924);
    // 0x8033F59C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8033F5A0: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8033F5A4: add.s       $f16, $f12, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x8033F5A8: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8033F5AC: add.s       $f0, $f14, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x8033F5B0: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8033F5B4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8033F5B8: mul.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8033F5BC: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8033F5C0: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8033F5C4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8033F5C8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x8033F5CC: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x8033F5D0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8033F5D4: jal         0x8007F870
    // 0x8033F5D8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_8007F870(rdram, ctx);
        goto after_0;
    // 0x8033F5D8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x8033F5DC: lui         $v1, 0x8035
    ctx->r3 = S32(0X8035 << 16);
    // 0x8033F5E0: addiu       $v1, $v1, -0x560C
    ctx->r3 = ADD32(ctx->r3, -0X560C);
    // 0x8033F5E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033F5E8: lui         $t9, 0x104
    ctx->r25 = S32(0X104 << 16);
    // 0x8033F5EC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8033F5F0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8033F5F4: ori         $t9, $t9, 0x40
    ctx->r25 = ctx->r25 | 0X40;
    // 0x8033F5F8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8033F5FC: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8033F600: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x8033F604: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x8033F608: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033F60C: lui         $t5, 0xBD00
    ctx->r13 = S32(0XBD00 << 16);
    // 0x8033F610: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x8033F614: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x8033F618: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x8033F61C: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x8033F620: nop

    // 0x8033F624: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8033F628: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033F62C: nop

    // 0x8033F630: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x8033F634: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8033F638: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8033F63C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8033F640: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F644: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8033F648: jr          $ra
    // 0x8033F64C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8033F64C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8033F650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033F650: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8033F654: sll         $t6, $a2, 3
    ctx->r14 = S32(ctx->r6 << 3);
    // 0x8033F658: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x8033F65C: lui         $t7, 0x8035
    ctx->r15 = S32(0X8035 << 16);
    // 0x8033F660: lw          $t7, -0x5610($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5610);
    // 0x8033F664: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8033F668: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033F66C: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x8033F670: addu        $s2, $a1, $t6
    ctx->r18 = ADD32(ctx->r5, ctx->r14);
    // 0x8033F674: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033F678: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8033F67C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8033F680: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8033F684: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x8033F688: bne         $t7, $at, L_8033F694
    if (ctx->r15 != ctx->r1) {
        // 0x8033F68C: addiu       $v0, $s2, 0x1C
        ctx->r2 = ADD32(ctx->r18, 0X1C);
            goto L_8033F694;
    }
    // 0x8033F68C: addiu       $v0, $s2, 0x1C
    ctx->r2 = ADD32(ctx->r18, 0X1C);
    // 0x8033F690: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_8033F694:
    // 0x8033F694: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x8033F698: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8033F69C: lui         $s1, 0x8035
    ctx->r17 = S32(0X8035 << 16);
    // 0x8033F6A0: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8033F6A4: addiu       $s1, $s1, -0x560C
    ctx->r17 = ADD32(ctx->r17, -0X560C);
    // 0x8033F6A8: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8033F6AC: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8033F6B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8033F6B4: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x8033F6B8: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x8033F6BC: lui         $t9, 0x380
    ctx->r25 = S32(0X380 << 16);
    // 0x8033F6C0: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x8033F6C4: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8033F6C8: lwc1        $f2, 0x4($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X4);
    // 0x8033F6CC: lui         $t3, 0x8035
    ctx->r11 = S32(0X8035 << 16);
    // 0x8033F6D0: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x8033F6D4: addiu       $t3, $t3, -0x59E8
    ctx->r11 = ADD32(ctx->r11, -0X59E8);
    // 0x8033F6D8: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8033F6DC: ori         $t9, $t9, 0x10
    ctx->r25 = ctx->r25 | 0X10;
    // 0x8033F6E0: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x8033F6E4: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x8033F6E8: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x8033F6EC: addiu       $a1, $sp, 0x92
    ctx->r5 = ADD32(ctx->r29, 0X92);
    // 0x8033F6F0: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x8033F6F4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8033F6F8: lwc1        $f14, 0x8($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X8);
    // 0x8033F6FC: nop

    // 0x8033F700: sub.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x8033F704: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8033F708: add.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x8033F70C: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    // 0x8033F710: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8033F714: lwc1        $f16, 0xC($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0XC);
    // 0x8033F718: nop

    // 0x8033F71C: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x8033F720: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8033F724: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8033F728: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033F72C: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x8033F730: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8033F734: lwc1        $f18, 0x10($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X10);
    // 0x8033F738: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8033F73C: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x8033F740: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8033F744: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x8033F748: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x8033F74C: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8033F750: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x8033F754: nop

    // 0x8033F758: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8033F75C: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8033F760: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x8033F764: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x8033F768: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8033F76C: lwc1        $f2, 0x18($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X18);
    // 0x8033F770: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x8033F774: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x8033F778: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x8033F77C: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8033F780: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x8033F784: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033F788: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x8033F78C: add.s       $f14, $f2, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x8033F790: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x8033F794: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8033F798: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8033F79C: jal         0x8007FEF0
    // 0x8033F7A0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_8007FEF0(rdram, ctx);
        goto after_0;
    // 0x8033F7A0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x8033F7A4: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8033F7A8: lui         $t5, 0xBC00
    ctx->r13 = S32(0XBC00 << 16);
    // 0x8033F7AC: addiu       $t4, $s0, 0x8
    ctx->r12 = ADD32(ctx->r16, 0X8);
    // 0x8033F7B0: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x8033F7B4: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x8033F7B8: ori         $t5, $t5, 0xE
    ctx->r13 = ctx->r13 | 0XE;
    // 0x8033F7BC: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x8033F7C0: lhu         $t6, 0x92($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X92);
    // 0x8033F7C4: lui         $t8, 0x103
    ctx->r24 = S32(0X103 << 16);
    // 0x8033F7C8: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x8033F7CC: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8033F7D0: ori         $t8, $t8, 0x40
    ctx->r24 = ctx->r24 | 0X40;
    // 0x8033F7D4: addiu       $t7, $s0, 0x8
    ctx->r15 = ADD32(ctx->r16, 0X8);
    // 0x8033F7D8: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x8033F7DC: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x8033F7E0: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x8033F7E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8033F7E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8033F7EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033F7F0: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8033F7F4: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8033F7F8: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8033F7FC: lw          $a3, 0x84($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X84);
    // 0x8033F800: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x8033F804: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x8033F808: addiu       $s2, $t0, 0x40
    ctx->r18 = ADD32(ctx->r8, 0X40);
    // 0x8033F80C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8033F810: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8033F814: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8033F818: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8033F81C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8033F820: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8033F824: jal         0x80080208
    // 0x8033F828: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80080208(rdram, ctx);
        goto after_1;
    // 0x8033F828: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8033F82C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8033F830: lui         $t3, 0x101
    ctx->r11 = S32(0X101 << 16);
    // 0x8033F834: addiu       $t9, $s0, 0x8
    ctx->r25 = ADD32(ctx->r16, 0X8);
    // 0x8033F838: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x8033F83C: ori         $t3, $t3, 0x40
    ctx->r11 = ctx->r11 | 0X40;
    // 0x8033F840: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x8033F844: sw          $s2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r18;
    // 0x8033F848: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8033F84C: lui         $t5, 0xBC00
    ctx->r13 = S32(0XBC00 << 16);
    // 0x8033F850: addiu       $t4, $s0, 0x8
    ctx->r12 = ADD32(ctx->r16, 0X8);
    // 0x8033F854: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x8033F858: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8033F85C: ori         $t5, $t5, 0x404
    ctx->r13 = ctx->r13 | 0X404;
    // 0x8033F860: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x8033F864: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x8033F868: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8033F86C: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x8033F870: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x8033F874: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x8033F878: ori         $t7, $t7, 0xC04
    ctx->r15 = ctx->r15 | 0XC04;
    // 0x8033F87C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x8033F880: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x8033F884: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8033F888: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x8033F88C: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x8033F890: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x8033F894: ori         $t2, $zero, 0xFFFD
    ctx->r10 = 0 | 0XFFFD;
    // 0x8033F898: ori         $t9, $t9, 0x1404
    ctx->r25 = ctx->r25 | 0X1404;
    // 0x8033F89C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x8033F8A0: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x8033F8A4: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8033F8A8: lui         $t4, 0xBC00
    ctx->r12 = S32(0XBC00 << 16);
    // 0x8033F8AC: addiu       $t3, $s0, 0x8
    ctx->r11 = ADD32(ctx->r16, 0X8);
    // 0x8033F8B0: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
    // 0x8033F8B4: ori         $t4, $t4, 0x1C04
    ctx->r12 = ctx->r12 | 0X1C04;
    // 0x8033F8B8: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x8033F8BC: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x8033F8C0: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8033F8C4: lui         $t7, 0x4F
    ctx->r15 = S32(0X4F << 16);
    // 0x8033F8C8: addiu       $t5, $s0, 0x8
    ctx->r13 = ADD32(ctx->r16, 0X8);
    // 0x8033F8CC: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x8033F8D0: ori         $t7, $t7, 0xC3BC
    ctx->r15 = ctx->r15 | 0XC3BC;
    // 0x8033F8D4: lui         $t6, 0xED00
    ctx->r14 = S32(0XED00 << 16);
    // 0x8033F8D8: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x8033F8DC: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x8033F8E0: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x8033F8E4: nop

    // 0x8033F8E8: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x8033F8EC: jal         0x8007FBD8
    // 0x8033F8F0: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    func_8007FBD8(rdram, ctx);
        goto after_2;
    // 0x8033F8F0: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    after_2:
    // 0x8033F8F4: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8033F8F8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8033F8FC: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x8033F900: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x8033F904: lui         $t9, 0x102
    ctx->r25 = S32(0X102 << 16);
    // 0x8033F908: ori         $t9, $t9, 0x40
    ctx->r25 = ctx->r25 | 0X40;
    // 0x8033F90C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x8033F910: sw          $a0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r4;
    // 0x8033F914: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8033F918: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8033F91C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8033F920: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8033F924: jr          $ra
    // 0x8033F928: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x8033F928: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_8033F92C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033F92C: lui         $t6, 0x8035
    ctx->r14 = S32(0X8035 << 16);
    // 0x8033F930: addiu       $t6, $t6, -0x55F0
    ctx->r14 = ADD32(ctx->r14, -0X55F0);
    // 0x8033F934: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8033F938: addiu       $t9, $a0, 0x24
    ctx->r25 = ADD32(ctx->r4, 0X24);
L_8033F93C:
    // 0x8033F93C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8033F940: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8033F944: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8033F948: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x8033F94C: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8033F950: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8033F954: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x8033F958: bne         $t0, $t9, L_8033F93C
    if (ctx->r8 != ctx->r25) {
        // 0x8033F95C: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8033F93C;
    }
    // 0x8033F95C: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8033F960: jr          $ra
    // 0x8033F964: nop

    return;
    // 0x8033F964: nop

;}
RECOMP_FUNC void func_8033F968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033F968: lui         $a0, 0x8035
    ctx->r4 = S32(0X8035 << 16);
    // 0x8033F96C: addiu       $a0, $a0, -0x55F0
    ctx->r4 = ADD32(ctx->r4, -0X55F0);
    // 0x8033F970: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x8033F974: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033F978: beq         $t6, $zero, L_8033FA84
    if (ctx->r14 == 0) {
        // 0x8033F97C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8033FA84;
    }
    // 0x8033F97C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033F980: lui         $v1, 0x8035
    ctx->r3 = S32(0X8035 << 16);
    // 0x8033F984: addiu       $v1, $v1, -0x560C
    ctx->r3 = ADD32(ctx->r3, -0X560C);
    // 0x8033F988: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033F98C: lui         $t9, 0x8035
    ctx->r25 = S32(0X8035 << 16);
    // 0x8033F990: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8033F994: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8033F998: addiu       $t9, $t9, -0x59D8
    ctx->r25 = ADD32(ctx->r25, -0X59D8);
    // 0x8033F99C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8033F9A0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8033F9A4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8033F9A8: lui         $t6, 0x8035
    ctx->r14 = S32(0X8035 << 16);
    // 0x8033F9AC: lw          $t7, -0x5608($t6)
    ctx->r15 = MEM_W(ctx->r14, -0X5608);
    // 0x8033F9B0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033F9B4: lui         $t5, 0x8035
    ctx->r13 = S32(0X8035 << 16);
    // 0x8033F9B8: lw          $t5, -0x55DC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X55DC);
    // 0x8033F9BC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8033F9C0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8033F9C4: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8033F9C8: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x8033F9CC: addu        $t4, $t5, $t8
    ctx->r12 = ADD32(ctx->r13, ctx->r24);
    // 0x8033F9D0: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8033F9D4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8033F9D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033F9DC: lui         $t5, 0xE800
    ctx->r13 = S32(0XE800 << 16);
    // 0x8033F9E0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8033F9E4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8033F9E8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8033F9EC: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8033F9F0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033F9F4: lui         $t9, 0xF500
    ctx->r25 = S32(0XF500 << 16);
    // 0x8033F9F8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8033F9FC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8033FA00: ori         $t9, $t9, 0x100
    ctx->r25 = ctx->r25 | 0X100;
    // 0x8033FA04: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x8033FA08: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8033FA0C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8033FA10: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033FA14: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x8033FA18: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8033FA1C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8033FA20: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8033FA24: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8033FA28: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033FA2C: lui         $t6, 0x703
    ctx->r14 = S32(0X703 << 16);
    // 0x8033FA30: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8033FA34: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8033FA38: ori         $t6, $t6, 0xC000
    ctx->r14 = ctx->r14 | 0XC000;
    // 0x8033FA3C: lui         $t9, 0xF000
    ctx->r25 = S32(0XF000 << 16);
    // 0x8033FA40: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8033FA44: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8033FA48: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033FA4C: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x8033FA50: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8033FA54: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8033FA58: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8033FA5C: jal         0x8033FA94
    // 0x8033FA60: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    func_8033FA94(rdram, ctx);
        goto after_0;
    // 0x8033FA60: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    after_0:
    // 0x8033FA64: lui         $v1, 0x8035
    ctx->r3 = S32(0X8035 << 16);
    // 0x8033FA68: addiu       $v1, $v1, -0x560C
    ctx->r3 = ADD32(ctx->r3, -0X560C);
    // 0x8033FA6C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033FA70: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8033FA74: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8033FA78: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8033FA7C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8033FA80: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_8033FA84:
    // 0x8033FA84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033FA88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033FA8C: jr          $ra
    // 0x8033FA90: nop

    return;
    // 0x8033FA90: nop

;}
RECOMP_FUNC void func_8033FA94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033FA94: addiu       $sp, $sp, -0x140
    ctx->r29 = ADD32(ctx->r29, -0X140);
    // 0x8033FA98: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8033FA9C: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x8033FAA0: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x8033FAA4: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x8033FAA8: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x8033FAAC: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x8033FAB0: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x8033FAB4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x8033FAB8: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x8033FABC: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x8033FAC0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8033FAC4: ori         $t8, $zero, 0xFFFF
    ctx->r24 = 0 | 0XFFFF;
    // 0x8033FAC8: sw          $t6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r14;
    // 0x8033FACC: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x8033FAD0: lui         $fp, 0x705
    ctx->r30 = S32(0X705 << 16);
    // 0x8033FAD4: lui         $v1, 0x8035
    ctx->r3 = S32(0X8035 << 16);
    // 0x8033FAD8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8033FADC: sw          $t8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r24;
    // 0x8033FAE0: addiu       $v1, $v1, -0x560C
    ctx->r3 = ADD32(ctx->r3, -0X560C);
    // 0x8033FAE4: ori         $fp, $fp, 0x4150
    ctx->r30 = ctx->r30 | 0X4150;
    // 0x8033FAE8: sw          $zero, 0x138($sp)
    MEM_W(0X138, ctx->r29) = 0;
    // 0x8033FAEC: lui         $ra, 0xE600
    ctx->r31 = S32(0XE600 << 16);
    // 0x8033FAF0: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
    // 0x8033FAF4: sw          $t7, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r15;
L_8033FAF8:
    // 0x8033FAF8: lw          $t9, 0x138($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X138);
    // 0x8033FAFC: lw          $t6, 0x138($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X138);
    // 0x8033FB00: bltz        $t9, L_8034017C
    if (SIGNED(ctx->r25) < 0) {
        // 0x8033FB04: slt         $at, $a1, $t6
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
            goto L_8034017C;
    }
    // 0x8033FB04: slt         $at, $a1, $t6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8033FB08: bne         $at, $zero, L_80340180
    if (ctx->r1 != 0) {
        // 0x8033FB0C: lw          $t7, 0x138($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X138);
            goto L_80340180;
    }
    // 0x8033FB0C: lw          $t7, 0x138($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X138);
    // 0x8033FB10: lw          $t7, 0x138($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X138);
    // 0x8033FB14: sw          $zero, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = 0;
    // 0x8033FB18: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8033FB1C: addiu       $a0, $t8, 0x1F
    ctx->r4 = ADD32(ctx->r24, 0X1F);
    // 0x8033FB20: slti        $at, $t8, 0xF0
    ctx->r1 = SIGNED(ctx->r24) < 0XF0 ? 1 : 0;
    // 0x8033FB24: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x8033FB28: sw          $t8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r24;
    // 0x8033FB2C: beq         $at, $zero, L_8034017C
    if (ctx->r1 == 0) {
        // 0x8033FB30: sw          $a0, 0xF0($sp)
        MEM_W(0XF0, ctx->r29) = ctx->r4;
            goto L_8034017C;
    }
    // 0x8033FB30: sw          $a0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r4;
    // 0x8033FB34: bltz        $a0, L_8034017C
    if (SIGNED(ctx->r4) < 0) {
        // 0x8033FB38: slti        $at, $a0, 0xF0
        ctx->r1 = SIGNED(ctx->r4) < 0XF0 ? 1 : 0;
            goto L_8034017C;
    }
    // 0x8033FB38: slti        $at, $a0, 0xF0
    ctx->r1 = SIGNED(ctx->r4) < 0XF0 ? 1 : 0;
    // 0x8033FB3C: bgez        $t8, L_8033FB50
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8033FB40: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_8033FB50;
    }
    // 0x8033FB40: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8033FB44: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x8033FB48: sw          $t9, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r25;
    // 0x8033FB4C: sw          $zero, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = 0;
L_8033FB50:
    // 0x8033FB50: bne         $at, $zero, L_8033FB5C
    if (ctx->r1 != 0) {
        // 0x8033FB54: addiu       $t6, $zero, 0xEF
        ctx->r14 = ADD32(0, 0XEF);
            goto L_8033FB5C;
    }
    // 0x8033FB54: addiu       $t6, $zero, 0xEF
    ctx->r14 = ADD32(0, 0XEF);
    // 0x8033FB58: sw          $t6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r14;
L_8033FB5C:
    // 0x8033FB5C: lw          $t7, 0xF8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF8);
    // 0x8033FB60: lw          $t9, 0xF0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF0);
    // 0x8033FB64: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033FB68: lw          $t7, 0xE8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE8);
    // 0x8033FB6C: sw          $t8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r24;
    // 0x8033FB70: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8033FB74: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8033FB78: sw          $t6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r14;
    // 0x8033FB7C: sw          $t8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r24;
L_8033FB80:
    // 0x8033FB80: bltz        $s4, L_8034016C
    if (SIGNED(ctx->r20) < 0) {
        // 0x8033FB84: slt         $at, $a1, $s4
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r20) ? 1 : 0;
            goto L_8034016C;
    }
    // 0x8033FB84: slt         $at, $a1, $s4
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8033FB88: bne         $at, $zero, L_8034016C
    if (ctx->r1 != 0) {
        // 0x8033FB8C: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8034016C;
    }
    // 0x8033FB8C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8033FB90: sll         $a1, $s4, 5
    ctx->r5 = S32(ctx->r20 << 5);
    // 0x8033FB94: addiu       $a0, $a1, 0x1F
    ctx->r4 = ADD32(ctx->r5, 0X1F);
    // 0x8033FB98: slti        $at, $a1, 0x140
    ctx->r1 = SIGNED(ctx->r5) < 0X140 ? 1 : 0;
    // 0x8033FB9C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8033FBA0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8033FBA4: bne         $at, $zero, L_8033FBB4
    if (ctx->r1 != 0) {
        // 0x8033FBA8: or          $s2, $a0, $zero
        ctx->r18 = ctx->r4 | 0;
            goto L_8033FBB4;
    }
    // 0x8033FBA8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8033FBAC: b           L_8034016C
    // 0x8033FBB0: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
        goto L_8034016C;
    // 0x8033FBB0: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
L_8033FBB4:
    // 0x8033FBB4: bgez        $a0, L_8033FBC4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8033FBB8: or          $t0, $a1, $zero
        ctx->r8 = ctx->r5 | 0;
            goto L_8033FBC4;
    }
    // 0x8033FBB8: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x8033FBBC: b           L_8034016C
    // 0x8033FBC0: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
        goto L_8034016C;
    // 0x8033FBC0: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
L_8033FBC4:
    // 0x8033FBC4: lw          $s5, 0xF0($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XF0);
    // 0x8033FBC8: lw          $s6, 0xF8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XF8);
    // 0x8033FBCC: lw          $s7, 0xE8($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XE8);
    // 0x8033FBD0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033FBD4: andi        $t9, $s5, 0xFFF
    ctx->r25 = ctx->r21 & 0XFFF;
    // 0x8033FBD8: andi        $t6, $s6, 0xFFF
    ctx->r14 = ctx->r22 & 0XFFF;
    // 0x8033FBDC: andi        $t7, $s7, 0xFFFF
    ctx->r15 = ctx->r23 & 0XFFFF;
    // 0x8033FBE0: or          $s7, $t7, $zero
    ctx->r23 = ctx->r15 | 0;
    // 0x8033FBE4: or          $s6, $t6, $zero
    ctx->r22 = ctx->r14 | 0;
    // 0x8033FBE8: bgez        $v0, L_8033FBF8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8033FBEC: or          $s5, $t9, $zero
        ctx->r21 = ctx->r25 | 0;
            goto L_8033FBF8;
    }
    // 0x8033FBEC: or          $s5, $t9, $zero
    ctx->r21 = ctx->r25 | 0;
    // 0x8033FBF0: negu        $s3, $v0
    ctx->r19 = SUB32(0, ctx->r2);
    // 0x8033FBF4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8033FBF8:
    // 0x8033FBF8: slti        $at, $a0, 0x140
    ctx->r1 = SIGNED(ctx->r4) < 0X140 ? 1 : 0;
    // 0x8033FBFC: bne         $at, $zero, L_8033FC08
    if (ctx->r1 != 0) {
        // 0x8033FC00: nop
    
            goto L_8033FC08;
    }
    // 0x8033FC00: nop

    // 0x8033FC04: addiu       $s2, $zero, 0x13F
    ctx->r18 = ADD32(0, 0X13F);
L_8033FC08:
    // 0x8033FC08: lh          $a2, 0x20($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X20);
    // 0x8033FC0C: lh          $a1, 0x1C($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X1C);
    // 0x8033FC10: div         $zero, $t0, $a2
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r6)));
    // 0x8033FC14: lh          $a3, 0x22($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X22);
    // 0x8033FC18: lh          $t7, 0x1E($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X1E);
    // 0x8033FC1C: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x8033FC20: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x8033FC24: sll         $t6, $s3, 5
    ctx->r14 = S32(ctx->r19 << 5);
    // 0x8033FC28: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x8033FC2C: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8033FC30: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
    // 0x8033FC34: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
    // 0x8033FC38: bne         $a2, $zero, L_8033FC44
    if (ctx->r6 != 0) {
        // 0x8033FC3C: nop
    
            goto L_8033FC44;
    }
    // 0x8033FC3C: nop

    // 0x8033FC40: break       7
    do_break(2150890560);
L_8033FC44:
    // 0x8033FC44: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033FC48: bne         $a2, $at, L_8033FC5C
    if (ctx->r6 != ctx->r1) {
        // 0x8033FC4C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8033FC5C;
    }
    // 0x8033FC4C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8033FC50: bne         $t0, $at, L_8033FC5C
    if (ctx->r8 != ctx->r1) {
        // 0x8033FC54: nop
    
            goto L_8033FC5C;
    }
    // 0x8033FC54: nop

    // 0x8033FC58: break       6
    do_break(2150890584);
L_8033FC5C:
    // 0x8033FC5C: mflo        $v0
    ctx->r2 = lo;
    // 0x8033FC60: nop

    // 0x8033FC64: nop

    // 0x8033FC68: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x8033FC6C: bne         $a1, $zero, L_8033FC78
    if (ctx->r5 != 0) {
        // 0x8033FC70: nop
    
            goto L_8033FC78;
    }
    // 0x8033FC70: nop

    // 0x8033FC74: break       7
    do_break(2150890612);
L_8033FC78:
    // 0x8033FC78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033FC7C: bne         $a1, $at, L_8033FC90
    if (ctx->r5 != ctx->r1) {
        // 0x8033FC80: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8033FC90;
    }
    // 0x8033FC80: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8033FC84: bne         $v0, $at, L_8033FC90
    if (ctx->r2 != ctx->r1) {
        // 0x8033FC88: nop
    
            goto L_8033FC90;
    }
    // 0x8033FC88: nop

    // 0x8033FC8C: break       6
    do_break(2150890636);
L_8033FC90:
    // 0x8033FC90: mfhi        $v0
    ctx->r2 = hi;
    // 0x8033FC94: nop

    // 0x8033FC98: nop

    // 0x8033FC9C: div         $zero, $t1, $a3
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r7)));
    // 0x8033FCA0: bne         $a3, $zero, L_8033FCAC
    if (ctx->r7 != 0) {
        // 0x8033FCA4: nop
    
            goto L_8033FCAC;
    }
    // 0x8033FCA4: nop

    // 0x8033FCA8: break       7
    do_break(2150890664);
L_8033FCAC:
    // 0x8033FCAC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033FCB0: bne         $a3, $at, L_8033FCC4
    if (ctx->r7 != ctx->r1) {
        // 0x8033FCB4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8033FCC4;
    }
    // 0x8033FCB4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8033FCB8: bne         $t1, $at, L_8033FCC4
    if (ctx->r9 != ctx->r1) {
        // 0x8033FCBC: nop
    
            goto L_8033FCC4;
    }
    // 0x8033FCBC: nop

    // 0x8033FCC0: break       6
    do_break(2150890688);
L_8033FCC4:
    // 0x8033FCC4: mflo        $a0
    ctx->r4 = lo;
    // 0x8033FCC8: nop

    // 0x8033FCCC: nop

    // 0x8033FCD0: div         $zero, $a0, $t7
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r15)));
    // 0x8033FCD4: bne         $t7, $zero, L_8033FCE0
    if (ctx->r15 != 0) {
        // 0x8033FCD8: nop
    
            goto L_8033FCE0;
    }
    // 0x8033FCD8: nop

    // 0x8033FCDC: break       7
    do_break(2150890716);
L_8033FCE0:
    // 0x8033FCE0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033FCE4: bne         $t7, $at, L_8033FCF8
    if (ctx->r15 != ctx->r1) {
        // 0x8033FCE8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8033FCF8;
    }
    // 0x8033FCE8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8033FCEC: bne         $a0, $at, L_8033FCF8
    if (ctx->r4 != ctx->r1) {
        // 0x8033FCF0: nop
    
            goto L_8033FCF8;
    }
    // 0x8033FCF0: nop

    // 0x8033FCF4: break       6
    do_break(2150890740);
L_8033FCF8:
    // 0x8033FCF8: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8033FCFC: mfhi        $a0
    ctx->r4 = hi;
    // 0x8033FD00: nop

    // 0x8033FD04: nop

    // 0x8033FD08: div         $zero, $t0, $a2
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r6)));
    // 0x8033FD0C: bne         $a2, $zero, L_8033FD18
    if (ctx->r6 != 0) {
        // 0x8033FD10: nop
    
            goto L_8033FD18;
    }
    // 0x8033FD10: nop

    // 0x8033FD14: break       7
    do_break(2150890772);
L_8033FD18:
    // 0x8033FD18: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033FD1C: bne         $a2, $at, L_8033FD30
    if (ctx->r6 != ctx->r1) {
        // 0x8033FD20: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8033FD30;
    }
    // 0x8033FD20: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8033FD24: bne         $t0, $at, L_8033FD30
    if (ctx->r8 != ctx->r1) {
        // 0x8033FD28: nop
    
            goto L_8033FD30;
    }
    // 0x8033FD28: nop

    // 0x8033FD2C: break       6
    do_break(2150890796);
L_8033FD30:
    // 0x8033FD30: mfhi        $t2
    ctx->r10 = hi;
    // 0x8033FD34: bgez        $t2, L_8033FD44
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8033FD38: sra         $t8, $t2, 5
        ctx->r24 = S32(SIGNED(ctx->r10) >> 5);
            goto L_8033FD44;
    }
    // 0x8033FD38: sra         $t8, $t2, 5
    ctx->r24 = S32(SIGNED(ctx->r10) >> 5);
    // 0x8033FD3C: addiu       $at, $t2, 0x1F
    ctx->r1 = ADD32(ctx->r10, 0X1F);
    // 0x8033FD40: sra         $t8, $at, 5
    ctx->r24 = S32(SIGNED(ctx->r1) >> 5);
L_8033FD44:
    // 0x8033FD44: div         $zero, $t1, $a3
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r7)));
    // 0x8033FD48: or          $t2, $t8, $zero
    ctx->r10 = ctx->r24 | 0;
    // 0x8033FD4C: bne         $a3, $zero, L_8033FD58
    if (ctx->r7 != 0) {
        // 0x8033FD50: nop
    
            goto L_8033FD58;
    }
    // 0x8033FD50: nop

    // 0x8033FD54: break       7
    do_break(2150890836);
L_8033FD58:
    // 0x8033FD58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033FD5C: bne         $a3, $at, L_8033FD70
    if (ctx->r7 != ctx->r1) {
        // 0x8033FD60: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8033FD70;
    }
    // 0x8033FD60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8033FD64: bne         $t1, $at, L_8033FD70
    if (ctx->r9 != ctx->r1) {
        // 0x8033FD68: nop
    
            goto L_8033FD70;
    }
    // 0x8033FD68: nop

    // 0x8033FD6C: break       6
    do_break(2150890860);
L_8033FD70:
    // 0x8033FD70: mfhi        $t3
    ctx->r11 = hi;
    // 0x8033FD74: bgez        $t3, L_8033FD84
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8033FD78: sra         $t9, $t3, 5
        ctx->r25 = S32(SIGNED(ctx->r11) >> 5);
            goto L_8033FD84;
    }
    // 0x8033FD78: sra         $t9, $t3, 5
    ctx->r25 = S32(SIGNED(ctx->r11) >> 5);
    // 0x8033FD7C: addiu       $at, $t3, 0x1F
    ctx->r1 = ADD32(ctx->r11, 0X1F);
    // 0x8033FD80: sra         $t9, $at, 5
    ctx->r25 = S32(SIGNED(ctx->r1) >> 5);
L_8033FD84:
    // 0x8033FD84: multu       $a1, $a0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8033FD88: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x8033FD8C: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
    // 0x8033FD90: mflo        $t8
    ctx->r24 = lo;
    // 0x8033FD94: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033FD98: lbu         $t5, 0x0($t9)
    ctx->r13 = MEM_BU(ctx->r25, 0X0);
    // 0x8033FD9C: bgez        $a2, L_8033FDAC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8033FDA0: sra         $v0, $a2, 5
        ctx->r2 = S32(SIGNED(ctx->r6) >> 5);
            goto L_8033FDAC;
    }
    // 0x8033FDA0: sra         $v0, $a2, 5
    ctx->r2 = S32(SIGNED(ctx->r6) >> 5);
    // 0x8033FDA4: addiu       $at, $a2, 0x1F
    ctx->r1 = ADD32(ctx->r6, 0X1F);
    // 0x8033FDA8: sra         $v0, $at, 5
    ctx->r2 = S32(SIGNED(ctx->r1) >> 5);
L_8033FDAC:
    // 0x8033FDAC: multu       $v0, $t5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8033FDB0: mflo        $t6
    ctx->r14 = lo;
    // 0x8033FDB4: bgez        $a3, L_8033FDC4
    if (SIGNED(ctx->r7) >= 0) {
        // 0x8033FDB8: sra         $t7, $a3, 5
        ctx->r15 = S32(SIGNED(ctx->r7) >> 5);
            goto L_8033FDC4;
    }
    // 0x8033FDB8: sra         $t7, $a3, 5
    ctx->r15 = S32(SIGNED(ctx->r7) >> 5);
    // 0x8033FDBC: addiu       $at, $a3, 0x1F
    ctx->r1 = ADD32(ctx->r7, 0X1F);
    // 0x8033FDC0: sra         $t7, $at, 5
    ctx->r15 = S32(SIGNED(ctx->r1) >> 5);
L_8033FDC4:
    // 0x8033FDC4: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8033FDC8: lw          $t6, 0xE0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE0);
    // 0x8033FDCC: mflo        $t8
    ctx->r24 = lo;
    // 0x8033FDD0: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8033FDD4: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x8033FDD8: multu       $v0, $t3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8033FDDC: sll         $t8, $t2, 1
    ctx->r24 = S32(ctx->r10 << 1);
    // 0x8033FDE0: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x8033FDE4: mflo        $t9
    ctx->r25 = lo;
    // 0x8033FDE8: sll         $t7, $t9, 1
    ctx->r15 = S32(ctx->r25 << 1);
    // 0x8033FDEC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8033FDF0: lhu         $t4, 0x0($t8)
    ctx->r12 = MEM_HU(ctx->r24, 0X0);
    // 0x8033FDF4: lw          $t9, 0x100($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X100);
    // 0x8033FDF8: nop

    // 0x8033FDFC: beq         $t4, $t9, L_803400F8
    if (ctx->r12 == ctx->r25) {
        // 0x8033FE00: nop
    
            goto L_803400F8;
    }
    // 0x8033FE00: nop

    // 0x8033FE04: sw          $t4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r12;
    // 0x8033FE08: lbu         $v0, 0x1A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1A);
    // 0x8033FE0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033FE10: beq         $v0, $zero, L_8033FE30
    if (ctx->r2 == 0) {
        // 0x8033FE14: lui         $t7, 0xFD10
        ctx->r15 = S32(0XFD10 << 16);
            goto L_8033FE30;
    }
    // 0x8033FE14: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x8033FE18: beq         $v0, $at, L_8033FF14
    if (ctx->r2 == ctx->r1) {
        // 0x8033FE1C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8033FF14;
    }
    // 0x8033FE1C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033FE20: beq         $v0, $at, L_80340008
    if (ctx->r2 == ctx->r1) {
        // 0x8033FE24: nop
    
            goto L_80340008;
    }
    // 0x8033FE24: nop

    // 0x8033FE28: b           L_803400FC
    // 0x8033FE2C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
        goto L_803400FC;
    // 0x8033FE2C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_8033FE30:
    // 0x8033FE30: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033FE34: sll         $t9, $t4, 10
    ctx->r25 = S32(ctx->r12 << 10);
    // 0x8033FE38: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8033FE3C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8033FE40: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8033FE44: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x8033FE48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8033FE4C: bgez        $t9, L_8033FE5C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8033FE50: sra         $t6, $t9, 2
        ctx->r14 = S32(SIGNED(ctx->r25) >> 2);
            goto L_8033FE5C;
    }
    // 0x8033FE50: sra         $t6, $t9, 2
    ctx->r14 = S32(SIGNED(ctx->r25) >> 2);
    // 0x8033FE54: addiu       $at, $t9, 0x3
    ctx->r1 = ADD32(ctx->r25, 0X3);
    // 0x8033FE58: sra         $t6, $at, 2
    ctx->r14 = S32(SIGNED(ctx->r1) >> 2);
L_8033FE5C:
    // 0x8033FE5C: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8033FE60: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x8033FE64: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x8033FE68: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033FE6C: lui         $t8, 0xF510
    ctx->r24 = S32(0XF510 << 16);
    // 0x8033FE70: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8033FE74: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8033FE78: sw          $fp, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r30;
    // 0x8033FE7C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8033FE80: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033FE84: lui         $t8, 0x73F
    ctx->r24 = S32(0X73F << 16);
    // 0x8033FE88: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8033FE8C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8033FE90: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8033FE94: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x8033FE98: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x8033FE9C: ori         $t8, $t8, 0xF100
    ctx->r24 = ctx->r24 | 0XF100;
    // 0x8033FEA0: addiu       $t9, $a3, 0x8
    ctx->r25 = ADD32(ctx->r7, 0X8);
    // 0x8033FEA4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8033FEA8: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x8033FEAC: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8033FEB0: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x8033FEB4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033FEB8: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8033FEBC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8033FEC0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8033FEC4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8033FEC8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8033FECC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033FED0: lui         $t7, 0x5
    ctx->r15 = S32(0X5 << 16);
    // 0x8033FED4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8033FED8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8033FEDC: lui         $t8, 0xF510
    ctx->r24 = S32(0XF510 << 16);
    // 0x8033FEE0: ori         $t8, $t8, 0x1000
    ctx->r24 = ctx->r24 | 0X1000;
    // 0x8033FEE4: ori         $t7, $t7, 0x4150
    ctx->r15 = ctx->r15 | 0X4150;
    // 0x8033FEE8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8033FEEC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8033FEF0: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8033FEF4: lui         $t8, 0x7
    ctx->r24 = S32(0X7 << 16);
    // 0x8033FEF8: addiu       $t9, $t2, 0x8
    ctx->r25 = ADD32(ctx->r10, 0X8);
    // 0x8033FEFC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8033FF00: ori         $t8, $t8, 0xC07C
    ctx->r24 = ctx->r24 | 0XC07C;
    // 0x8033FF04: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8033FF08: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x8033FF0C: b           L_803400F8
    // 0x8033FF10: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
        goto L_803400F8;
    // 0x8033FF10: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
L_8033FF14:
    // 0x8033FF14: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x8033FF18: sll         $t9, $t4, 1
    ctx->r25 = S32(ctx->r12 << 1);
    // 0x8033FF1C: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x8033FF20: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x8033FF24: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033FF28: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x8033FF2C: sll         $t7, $t8, 7
    ctx->r15 = S32(ctx->r24 << 7);
    // 0x8033FF30: andi        $t9, $a0, 0xF00
    ctx->r25 = ctx->r4 & 0XF00;
    // 0x8033FF34: sll         $t6, $t9, 3
    ctx->r14 = S32(ctx->r25 << 3);
    // 0x8033FF38: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8033FF3C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8033FF40: lui         $t9, 0xFD50
    ctx->r25 = S32(0XFD50 << 16);
    // 0x8033FF44: addu        $t5, $t7, $t6
    ctx->r13 = ADD32(ctx->r15, ctx->r14);
    // 0x8033FF48: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8033FF4C: lw          $t7, 0x10($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X10);
    // 0x8033FF50: sll         $t8, $t5, 3
    ctx->r24 = S32(ctx->r13 << 3);
    // 0x8033FF54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033FF58: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8033FF5C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033FF60: lui         $t7, 0xF550
    ctx->r15 = S32(0XF550 << 16);
    // 0x8033FF64: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8033FF68: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8033FF6C: sw          $fp, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r30;
    // 0x8033FF70: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8033FF74: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x8033FF78: lui         $t7, 0x71F
    ctx->r15 = S32(0X71F << 16);
    // 0x8033FF7C: addiu       $t8, $a3, 0x8
    ctx->r24 = ADD32(ctx->r7, 0X8);
    // 0x8033FF80: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8033FF84: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x8033FF88: sw          $ra, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r31;
    // 0x8033FF8C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033FF90: ori         $t7, $t7, 0xF200
    ctx->r15 = ctx->r15 | 0XF200;
    // 0x8033FF94: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8033FF98: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8033FF9C: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x8033FFA0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8033FFA4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8033FFA8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8033FFAC: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8033FFB0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8033FFB4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8033FFB8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8033FFBC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8033FFC0: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8033FFC4: lui         $t8, 0x5
    ctx->r24 = S32(0X5 << 16);
    // 0x8033FFC8: addiu       $t6, $t2, 0x8
    ctx->r14 = ADD32(ctx->r10, 0X8);
    // 0x8033FFCC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8033FFD0: lui         $t7, 0xF548
    ctx->r15 = S32(0XF548 << 16);
    // 0x8033FFD4: ori         $t7, $t7, 0x800
    ctx->r15 = ctx->r15 | 0X800;
    // 0x8033FFD8: ori         $t8, $t8, 0x4150
    ctx->r24 = ctx->r24 | 0X4150;
    // 0x8033FFDC: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x8033FFE0: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x8033FFE4: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x8033FFE8: lui         $t7, 0x7
    ctx->r15 = S32(0X7 << 16);
    // 0x8033FFEC: addiu       $t9, $t3, 0x8
    ctx->r25 = ADD32(ctx->r11, 0X8);
    // 0x8033FFF0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8033FFF4: ori         $t7, $t7, 0xC07C
    ctx->r15 = ctx->r15 | 0XC07C;
    // 0x8033FFF8: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8033FFFC: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x80340000: b           L_803400F8
    // 0x80340004: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
        goto L_803400F8;
    // 0x80340004: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
L_80340008:
    // 0x80340008: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x8034000C: sll         $t9, $t4, 1
    ctx->r25 = S32(ctx->r12 << 1);
    // 0x80340010: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80340014: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x80340018: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8034001C: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x80340020: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x80340024: andi        $t9, $a0, 0xF00
    ctx->r25 = ctx->r4 & 0XF00;
    // 0x80340028: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8034002C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80340030: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80340034: lui         $t9, 0xFD50
    ctx->r25 = S32(0XFD50 << 16);
    // 0x80340038: addu        $t5, $t8, $t6
    ctx->r13 = ADD32(ctx->r24, ctx->r14);
    // 0x8034003C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80340040: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x80340044: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x80340048: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x8034004C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80340050: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80340054: lui         $t8, 0xF550
    ctx->r24 = S32(0XF550 << 16);
    // 0x80340058: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8034005C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80340060: sw          $fp, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r30;
    // 0x80340064: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80340068: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x8034006C: lui         $t8, 0x70F
    ctx->r24 = S32(0X70F << 16);
    // 0x80340070: addiu       $t7, $a3, 0x8
    ctx->r15 = ADD32(ctx->r7, 0X8);
    // 0x80340074: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80340078: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x8034007C: sw          $ra, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r31;
    // 0x80340080: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80340084: ori         $t8, $t8, 0xF400
    ctx->r24 = ctx->r24 | 0XF400;
    // 0x80340088: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8034008C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80340090: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x80340094: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80340098: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8034009C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x803400A0: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x803400A4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x803400A8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x803400AC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x803400B0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x803400B4: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x803400B8: lui         $t7, 0x5
    ctx->r15 = S32(0X5 << 16);
    // 0x803400BC: addiu       $t6, $t2, 0x8
    ctx->r14 = ADD32(ctx->r10, 0X8);
    // 0x803400C0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x803400C4: lui         $t8, 0xF540
    ctx->r24 = S32(0XF540 << 16);
    // 0x803400C8: ori         $t8, $t8, 0x400
    ctx->r24 = ctx->r24 | 0X400;
    // 0x803400CC: ori         $t7, $t7, 0x4150
    ctx->r15 = ctx->r15 | 0X4150;
    // 0x803400D0: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x803400D4: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x803400D8: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x803400DC: lui         $t8, 0x7
    ctx->r24 = S32(0X7 << 16);
    // 0x803400E0: addiu       $t9, $t3, 0x8
    ctx->r25 = ADD32(ctx->r11, 0X8);
    // 0x803400E4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x803400E8: ori         $t8, $t8, 0xC07C
    ctx->r24 = ctx->r24 | 0XC07C;
    // 0x803400EC: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x803400F0: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x803400F4: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
L_803400F8:
    // 0x803400F8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_803400FC:
    // 0x803400FC: andi        $t9, $s2, 0xFFF
    ctx->r25 = ctx->r18 & 0XFFF;
    // 0x80340100: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x80340104: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80340108: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x8034010C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80340110: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80340114: andi        $t9, $s1, 0xFFF
    ctx->r25 = ctx->r17 & 0XFFF;
    // 0x80340118: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x8034011C: or          $t7, $t8, $s5
    ctx->r15 = ctx->r24 | ctx->r21;
    // 0x80340120: or          $t8, $t6, $s6
    ctx->r24 = ctx->r14 | ctx->r22;
    // 0x80340124: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80340128: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8034012C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80340130: sll         $t8, $s3, 16
    ctx->r24 = S32(ctx->r19 << 16);
    // 0x80340134: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80340138: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8034013C: or          $t7, $t8, $s7
    ctx->r15 = ctx->r24 | ctx->r23;
    // 0x80340140: lui         $t9, 0xB400
    ctx->r25 = S32(0XB400 << 16);
    // 0x80340144: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80340148: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8034014C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80340150: lui         $t8, 0x1000
    ctx->r24 = S32(0X1000 << 16);
    // 0x80340154: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80340158: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8034015C: ori         $t8, $t8, 0x400
    ctx->r24 = ctx->r24 | 0X400;
    // 0x80340160: lui         $t6, 0xB300
    ctx->r14 = S32(0XB300 << 16);
    // 0x80340164: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80340168: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_8034016C:
    // 0x8034016C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80340170: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80340174: bne         $s4, $at, L_8033FB80
    if (ctx->r20 != ctx->r1) {
        // 0x80340178: nop
    
            goto L_8033FB80;
    }
    // 0x80340178: nop

L_8034017C:
    // 0x8034017C: lw          $t7, 0x138($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X138);
L_80340180:
    // 0x80340180: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80340184: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80340188: bne         $t9, $at, L_8033FAF8
    if (ctx->r25 != ctx->r1) {
        // 0x8034018C: sw          $t9, 0x138($sp)
        MEM_W(0X138, ctx->r29) = ctx->r25;
            goto L_8033FAF8;
    }
    // 0x8034018C: sw          $t9, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r25;
    // 0x80340190: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80340194: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x80340198: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x8034019C: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x803401A0: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x803401A4: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x803401A8: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x803401AC: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x803401B0: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x803401B4: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x803401B8: jr          $ra
    // 0x803401BC: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    return;
    // 0x803401BC: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    // 0x803401C0: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F0000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F0004: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803F0008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F000C: lui         $a1, 0x3DE3
    ctx->r5 = S32(0X3DE3 << 16);
    // 0x803F0010: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x803F0014: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x803F0018: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x803F001C: ori         $a1, $a1, 0x8E39
    ctx->r5 = ctx->r5 | 0X8E39;
    // 0x803F0020: jal         0x80054388
    // 0x803F0024: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80054388(rdram, ctx);
        goto after_0;
    // 0x803F0024: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x803F0028: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x803F002C: lui         $a1, 0x3DE3
    ctx->r5 = S32(0X3DE3 << 16);
    // 0x803F0030: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x803F0034: jal         0x80054388
    // 0x803F0038: ori         $a1, $a1, 0x8E39
    ctx->r5 = ctx->r5 | 0X8E39;
    func_80054388(rdram, ctx);
        goto after_1;
    // 0x803F0038: ori         $a1, $a1, 0x8E39
    ctx->r5 = ctx->r5 | 0X8E39;
    after_1:
    // 0x803F003C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803F0040: lui         $a1, 0xBC88
    ctx->r5 = S32(0XBC88 << 16);
    // 0x803F0044: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x803F0048: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x803F004C: jal         0x80054524
    // 0x803F0050: ori         $a1, $a1, 0x8889
    ctx->r5 = ctx->r5 | 0X8889;
    func_80054524(rdram, ctx);
        goto after_2;
    // 0x803F0050: ori         $a1, $a1, 0x8889
    ctx->r5 = ctx->r5 | 0X8889;
    after_2:
    // 0x803F0054: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x803F0058: lui         $a1, 0xBC88
    ctx->r5 = S32(0XBC88 << 16);
    // 0x803F005C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x803F0060: ori         $a1, $a1, 0x8889
    ctx->r5 = ctx->r5 | 0X8889;
    // 0x803F0064: jal         0x80054524
    // 0x803F0068: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_80054524(rdram, ctx);
        goto after_3;
    // 0x803F0068: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x803F006C: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F0070: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803F0074: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803F0078: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x803F007C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0080: bc1f        L_803F0090
    if (!c1cs) {
        // 0x803F0084: sub.s       $f12, $f14, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f2.fl;
            goto L_803F0090;
    }
    // 0x803F0084: sub.s       $f12, $f14, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x803F0088: b           L_803F015C
    // 0x803F008C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F015C;
    // 0x803F008C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F0090:
    // 0x803F0090: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x803F0094: bgez        $a0, L_803F00AC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x803F0098: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_803F00AC;
    }
    // 0x803F0098: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F009C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F00A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F00A4: nop

    // 0x803F00A8: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_803F00AC:
    // 0x803F00AC: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x803F00B0: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x803F00B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803F00B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F00BC: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x803F00C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F00C4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x803F00C8: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803F00CC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x803F00D0: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x803F00D4: nop

    // 0x803F00D8: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x803F00DC: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x803F00E0: nop

    // 0x803F00E4: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x803F00E8: beq         $v0, $zero, L_803F0134
    if (ctx->r2 == 0) {
        // 0x803F00EC: nop
    
            goto L_803F0134;
    }
    // 0x803F00EC: nop

    // 0x803F00F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F00F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F00F8: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x803F00FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F0100: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x803F0104: nop

    // 0x803F0108: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x803F010C: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x803F0110: nop

    // 0x803F0114: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x803F0118: bne         $v0, $zero, L_803F012C
    if (ctx->r2 != 0) {
        // 0x803F011C: nop
    
            goto L_803F012C;
    }
    // 0x803F011C: nop

    // 0x803F0120: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x803F0124: b           L_803F0144
    // 0x803F0128: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_803F0144;
    // 0x803F0128: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_803F012C:
    // 0x803F012C: b           L_803F0144
    // 0x803F0130: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_803F0144;
    // 0x803F0130: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_803F0134:
    // 0x803F0134: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x803F0138: nop

    // 0x803F013C: bltz        $v0, L_803F012C
    if (SIGNED(ctx->r2) < 0) {
        // 0x803F0140: nop
    
            goto L_803F012C;
    }
    // 0x803F0140: nop

L_803F0144:
    // 0x803F0144: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x803F0148: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x803F014C: beq         $at, $zero, L_803F0158
    if (ctx->r1 == 0) {
        // 0x803F0150: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803F0158;
    }
    // 0x803F0150: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803F0154: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_803F0158:
    // 0x803F0158: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_803F015C:
    // 0x803F015C: jr          $ra
    // 0x803F0160: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F0160: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F0164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0164: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0168: lwc1        $f3, 0x7B38($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X7B38);
    // 0x803F016C: lwc1        $f2, 0x7B3C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7B3C);
    // 0x803F0170: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x803F0174: c.le.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d <= ctx->f0.d;
    // 0x803F0178: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803F017C: bc1f        L_803F018C
    if (!c1cs) {
        // 0x803F0180: nop
    
            goto L_803F018C;
    }
    // 0x803F0180: nop

    // 0x803F0184: sub.d       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f0.d - ctx->f2.d;
    // 0x803F0188: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
L_803F018C:
    // 0x803F018C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x803F0190: nop

    // 0x803F0194: bc1f        L_803F01A8
    if (!c1cs) {
        // 0x803F0198: nop
    
            goto L_803F01A8;
    }
    // 0x803F0198: nop

    // 0x803F019C: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x803F01A0: add.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f8.d + ctx->f2.d;
    // 0x803F01A4: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
L_803F01A8:
    // 0x803F01A8: jr          $ra
    // 0x803F01AC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x803F01AC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F01B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F01B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F01B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F01B8: lui         $s0, 0x803F
    ctx->r16 = S32(0X803F << 16);
    // 0x803F01BC: addiu       $s0, $s0, 0x7E04
    ctx->r16 = ADD32(ctx->r16, 0X7E04);
    // 0x803F01C0: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x803F01C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F01C8: beq         $v0, $zero, L_803F01EC
    if (ctx->r2 == 0) {
        // 0x803F01CC: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_803F01EC;
    }
    // 0x803F01CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F01D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F01D4: beq         $v0, $at, L_803F0290
    if (ctx->r2 == ctx->r1) {
        // 0x803F01D8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F0290;
    }
    // 0x803F01D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F01DC: beq         $v0, $at, L_803F02C4
    if (ctx->r2 == ctx->r1) {
        // 0x803F01E0: nop
    
            goto L_803F02C4;
    }
    // 0x803F01E0: nop

    // 0x803F01E4: b           L_803F02F8
    // 0x803F01E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F02F8;
    // 0x803F01E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F01EC:
    // 0x803F01EC: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F01F0: lwc1        $f12, 0x7E00($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7E00);
    // 0x803F01F4: jal         0x803F0164
    // 0x803F01F8: nop

    ovl_803F0000_menu_func_803F0164(rdram, ctx);
        goto after_0;
    // 0x803F01F8: nop

    after_0:
    // 0x803F01FC: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0200: swc1        $f0, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f0.u32l;
    // 0x803F0204: jal         0x80059898
    // 0x803F0208: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x803F0208: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x803F020C: beq         $v0, $zero, L_803F0244
    if (ctx->r2 == 0) {
        // 0x803F0210: nop
    
            goto L_803F0244;
    }
    // 0x803F0210: nop

    // 0x803F0214: jal         0x80058054
    // 0x803F0218: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_80058054(rdram, ctx);
        goto after_2;
    // 0x803F0218: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_2:
    // 0x803F021C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0220: lwc1        $f4, 0x7E00($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7E00);
    // 0x803F0224: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0228: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x803F022C: lwc1        $f11, 0x7B40($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X7B40);
    // 0x803F0230: lwc1        $f10, 0x7B44($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7B44);
    // 0x803F0234: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F0238: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x803F023C: b           L_803F0270
    // 0x803F0240: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
        goto L_803F0270;
    // 0x803F0240: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
L_803F0244:
    // 0x803F0244: jal         0x80058054
    // 0x803F0248: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_80058054(rdram, ctx);
        goto after_3;
    // 0x803F0248: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_3:
    // 0x803F024C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0250: lwc1        $f18, 0x7E00($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7E00);
    // 0x803F0254: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0258: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x803F025C: lwc1        $f9, 0x7B48($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X7B48);
    // 0x803F0260: lwc1        $f8, 0x7B4C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7B4C);
    // 0x803F0264: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x803F0268: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x803F026C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
L_803F0270:
    // 0x803F0270: jal         0x803F0164
    // 0x803F0274: nop

    ovl_803F0000_menu_func_803F0164(rdram, ctx);
        goto after_4;
    // 0x803F0274: nop

    after_4:
    // 0x803F0278: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x803F027C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0280: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x803F0284: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
    // 0x803F0288: b           L_803F02F4
    // 0x803F028C: swc1        $f0, 0x7E10($at)
    MEM_W(0X7E10, ctx->r1) = ctx->f0.u32l;
        goto L_803F02F4;
    // 0x803F028C: swc1        $f0, 0x7E10($at)
    MEM_W(0X7E10, ctx->r1) = ctx->f0.u32l;
L_803F0290:
    // 0x803F0290: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0294: lwc1        $f12, 0x7E10($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7E10);
    // 0x803F0298: lui         $at, 0x4274
    ctx->r1 = S32(0X4274 << 16);
    // 0x803F029C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803F02A0: jal         0x802A2B20
    // 0x803F02A4: nop

    LOOKUP_FUNC(0x802A2B20)(rdram, ctx);
        goto after_5;
    // 0x803F02A4: nop

    after_5:
    // 0x803F02A8: beq         $v0, $zero, L_803F02F8
    if (ctx->r2 == 0) {
        // 0x803F02AC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F02F8;
    }
    // 0x803F02AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F02B0: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x803F02B4: nop

    // 0x803F02B8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x803F02BC: b           L_803F02F4
    // 0x803F02C0: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
        goto L_803F02F4;
    // 0x803F02C0: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
L_803F02C4:
    // 0x803F02C4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F02C8: lwc1        $f12, 0x7E00($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7E00);
    // 0x803F02CC: lui         $at, 0x4274
    ctx->r1 = S32(0X4274 << 16);
    // 0x803F02D0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803F02D4: jal         0x802A2B20
    // 0x803F02D8: nop

    LOOKUP_FUNC(0x802A2B20)(rdram, ctx);
        goto after_6;
    // 0x803F02D8: nop

    after_6:
    // 0x803F02DC: beq         $v0, $zero, L_803F02F8
    if (ctx->r2 == 0) {
        // 0x803F02E0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F02F8;
    }
    // 0x803F02E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F02E4: lhu         $t0, 0x0($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X0);
    // 0x803F02E8: nop

    // 0x803F02EC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x803F02F0: sh          $t1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r9;
L_803F02F4:
    // 0x803F02F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F02F8:
    // 0x803F02F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F02FC: jr          $ra
    // 0x803F0300: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F0300: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F0304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0304: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F0308: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F030C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F0310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F0314: lh          $t7, 0xE8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XE8);
    // 0x803F0318: lh          $t6, 0xEA($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XEA);
    // 0x803F031C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x803F0320: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F0324: lw          $t9, 0xD8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD8);
    // 0x803F0328: nop

    // 0x803F032C: lbu         $t0, 0x13($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X13);
    // 0x803F0330: nop

    // 0x803F0334: andi        $t1, $t0, 0x40
    ctx->r9 = ctx->r8 & 0X40;
    // 0x803F0338: mflo        $t8
    ctx->r24 = lo;
    // 0x803F033C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x803F0340: beq         $t1, $zero, L_803F0368
    if (ctx->r9 == 0) {
        // 0x803F0344: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_803F0368;
    }
    // 0x803F0344: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F0348: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803F034C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F0350: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x803F0354: nop

    // 0x803F0358: bc1f        L_803F0384
    if (!c1cs) {
        // 0x803F035C: nop
    
            goto L_803F0384;
    }
    // 0x803F035C: nop

    // 0x803F0360: b           L_803F0384
    // 0x803F0364: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
        goto L_803F0384;
    // 0x803F0364: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
L_803F0368:
    // 0x803F0368: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F036C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F0370: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x803F0374: nop

    // 0x803F0378: bc1f        L_803F0384
    if (!c1cs) {
        // 0x803F037C: nop
    
            goto L_803F0384;
    }
    // 0x803F037C: nop

    // 0x803F0380: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
L_803F0384:
    // 0x803F0384: lw          $t3, 0xC8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC8);
    // 0x803F0388: nop

    // 0x803F038C: lw          $t4, 0x24($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X24);
    // 0x803F0390: nop

    // 0x803F0394: lh          $t5, 0x8B8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X8B8);
    // 0x803F0398: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F039C: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x803F03A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F03A4: jal         0x802645E0
    // 0x803F03A8: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    LOOKUP_FUNC(0x802645E0)(rdram, ctx);
        goto after_0;
    // 0x803F03A8: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_0:
    // 0x803F03AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F03B0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803F03B4: bne         $v0, $zero, L_803F03C4
    if (ctx->r2 != 0) {
        // 0x803F03B8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803F03C4;
    }
    // 0x803F03B8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F03BC: b           L_803F0498
    // 0x803F03C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F0498;
    // 0x803F03C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F03C4:
    // 0x803F03C4: bne         $v0, $v1, L_803F0444
    if (ctx->r2 != ctx->r3) {
        // 0x803F03C8: nop
    
            goto L_803F0444;
    }
    // 0x803F03C8: nop

    // 0x803F03CC: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x803F03D0: nop

    // 0x803F03D4: bne         $v1, $t6, L_803F040C
    if (ctx->r3 != ctx->r14) {
        // 0x803F03D8: nop
    
            goto L_803F040C;
    }
    // 0x803F03D8: nop

    // 0x803F03DC: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x803F03E0: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x803F03E4: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x803F03E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F03EC: lwc1        $f16, 0x8BC($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8BC);
    // 0x803F03F0: nop

    // 0x803F03F4: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803F03F8: nop

    // 0x803F03FC: bc1f        L_803F043C
    if (!c1cs) {
        // 0x803F0400: nop
    
            goto L_803F043C;
    }
    // 0x803F0400: nop

    // 0x803F0404: b           L_803F0498
    // 0x803F0408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F0498;
    // 0x803F0408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F040C:
    // 0x803F040C: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x803F0410: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803F0414: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x803F0418: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F041C: lwc1        $f4, 0x8BC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8BC);
    // 0x803F0420: nop

    // 0x803F0424: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F0428: nop

    // 0x803F042C: bc1f        L_803F043C
    if (!c1cs) {
        // 0x803F0430: nop
    
            goto L_803F043C;
    }
    // 0x803F0430: nop

    // 0x803F0434: b           L_803F0498
    // 0x803F0438: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F0498;
    // 0x803F0438: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F043C:
    // 0x803F043C: b           L_803F0498
    // 0x803F0440: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F0498;
    // 0x803F0440: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F0444:
    // 0x803F0444: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x803F0448: nop

    // 0x803F044C: bne         $v1, $t1, L_803F0498
    if (ctx->r3 != ctx->r9) {
        // 0x803F0450: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F0498;
    }
    // 0x803F0450: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F0454: lw          $t2, 0xC8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC8);
    // 0x803F0458: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x803F045C: lw          $t3, 0x24($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X24);
    // 0x803F0460: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F0464: lwc1        $f8, 0x8BC($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8BC);
    // 0x803F0468: nop

    // 0x803F046C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803F0470: nop

    // 0x803F0474: bc1f        L_803F0498
    if (!c1cs) {
        // 0x803F0478: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F0498;
    }
    // 0x803F0478: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F047C: jal         0x80059898
    // 0x803F0480: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x803F0480: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x803F0484: bne         $v0, $zero, L_803F0498
    if (ctx->r2 != 0) {
        // 0x803F0488: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F0498;
    }
    // 0x803F0488: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F048C: b           L_803F0498
    // 0x803F0490: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F0498;
    // 0x803F0490: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F0494: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F0498:
    // 0x803F0498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F049C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F04A0: jr          $ra
    // 0x803F04A4: nop

    return;
    // 0x803F04A4: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F04A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F04A8: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x803F04AC: addiu       $t7, $zero, 0x1FD
    ctx->r15 = ADD32(0, 0X1FD);
    // 0x803F04B0: lbu         $t9, 0x2($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X2);
    // 0x803F04B4: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x803F04B8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x803F04BC: andi        $t0, $t9, 0x80
    ctx->r8 = ctx->r25 & 0X80;
    // 0x803F04C0: beq         $t0, $zero, L_803F04E0
    if (ctx->r8 == 0) {
        // 0x803F04C4: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_803F04E0;
    }
    // 0x803F04C4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F04C8: lbu         $t1, 0x1($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X1);
    // 0x803F04CC: nop

    // 0x803F04D0: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x803F04D4: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x803F04D8: b           L_803F04F4
    // 0x803F04DC: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
        goto L_803F04F4;
    // 0x803F04DC: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
L_803F04E0:
    // 0x803F04E0: lbu         $t3, 0x1($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X1);
    // 0x803F04E4: nop

    // 0x803F04E8: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x803F04EC: nop

    // 0x803F04F0: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
L_803F04F4:
    // 0x803F04F4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F04F8: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x803F04FC: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x803F0500: nop

    // 0x803F0504: lhu         $t5, 0xD2($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0XD2);
    // 0x803F0508: nop

    // 0x803F050C: andi        $t7, $t5, 0x1
    ctx->r15 = ctx->r13 & 0X1;
    // 0x803F0510: beq         $t7, $zero, L_803F0520
    if (ctx->r15 == 0) {
        // 0x803F0514: nop
    
            goto L_803F0520;
    }
    // 0x803F0514: nop

    // 0x803F0518: b           L_803F0528
    // 0x803F051C: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
        goto L_803F0528;
    // 0x803F051C: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
L_803F0520:
    // 0x803F0520: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x803F0524: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
L_803F0528:
    // 0x803F0528: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x803F052C: nop

    // 0x803F0530: lh          $t8, 0xDA($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XDA);
    // 0x803F0534: nop

    // 0x803F0538: bgtz        $t8, L_803F0548
    if (SIGNED(ctx->r24) > 0) {
        // 0x803F053C: nop
    
            goto L_803F0548;
    }
    // 0x803F053C: nop

    // 0x803F0540: jr          $ra
    // 0x803F0544: swc1        $f2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f2.u32l;
    return;
    // 0x803F0544: swc1        $f2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f2.u32l;
L_803F0548:
    // 0x803F0548: neg.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = -ctx->f2.fl;
    // 0x803F054C: swc1        $f16, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f16.u32l;
    // 0x803F0550: jr          $ra
    // 0x803F0554: nop

    return;
    // 0x803F0554: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F0558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0558: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x803F055C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0560: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F0564: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803F0568: sh          $zero, 0x7E04($at)
    MEM_H(0X7E04, ctx->r1) = 0;
    // 0x803F056C: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x803F0570: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803F0574: lhu         $t6, 0x95C($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F0578: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F057C: andi        $t7, $t6, 0xFFEE
    ctx->r15 = ctx->r14 & 0XFFEE;
    // 0x803F0580: sh          $t7, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r15;
    // 0x803F0584: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x803F0588: nop

    // 0x803F058C: sw          $zero, 0x958($t8)
    MEM_W(0X958, ctx->r24) = 0;
    // 0x803F0590: lhu         $t9, 0xB78($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB78);
    // 0x803F0594: nop

    // 0x803F0598: addiu       $t1, $t9, -0x3
    ctx->r9 = ADD32(ctx->r25, -0X3);
    // 0x803F059C: sltiu       $at, $t1, 0x5
    ctx->r1 = ctx->r9 < 0X5 ? 1 : 0;
    // 0x803F05A0: beq         $at, $zero, L_803F0EC0
    if (ctx->r1 == 0) {
        // 0x803F05A4: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_803F0EC0;
    }
    // 0x803F05A4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803F05A8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F05AC: addu        $at, $at, $t1
    gpr jr_addend_803F05B8 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803F05B0: lw          $t1, 0x7B50($at)
    ctx->r9 = ADD32(ctx->r1, 0X7B50);
    // 0x803F05B4: nop

    // 0x803F05B8: jr          $t1
    // 0x803F05BC: nop

    switch (jr_addend_803F05B8 >> 2) {
        case 0: goto L_803F0AEC; break;
        case 1: goto L_803F0B64; break;
        case 2: goto L_803F05C0; break;
        case 3: goto L_803F072C; break;
        case 4: goto L_803F05C0; break;
        default: switch_error(__func__, 0x803F05B8, 0x803F7B50);
    }
    // 0x803F05BC: nop

L_803F05C0:
    // 0x803F05C0: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F05C4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F05C8: lw          $t3, 0x24($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X24);
    // 0x803F05CC: lwc1        $f9, 0x7B68($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X7B68);
    // 0x803F05D0: lwc1        $f4, 0x8C0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8C0);
    // 0x803F05D4: lwc1        $f8, 0x7B6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7B6C);
    // 0x803F05D8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x803F05DC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x803F05E0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F05E4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x803F05E8: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F05EC: swc1        $f16, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f16.u32l;
    // 0x803F05F0: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F05F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F05F8: sh          $t4, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r12;
    // 0x803F05FC: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0600: addiu       $a1, $zero, 0x7E0
    ctx->r5 = ADD32(0, 0X7E0);
    // 0x803F0604: lh          $v0, 0x8B0($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X8B0);
    // 0x803F0608: nop

    // 0x803F060C: bgtz        $v0, L_803F0630
    if (SIGNED(ctx->r2) > 0) {
        // 0x803F0610: slti        $at, $v0, -0xC7
        ctx->r1 = SIGNED(ctx->r2) < -0XC7 ? 1 : 0;
            goto L_803F0630;
    }
    // 0x803F0610: slti        $at, $v0, -0xC7
    ctx->r1 = SIGNED(ctx->r2) < -0XC7 ? 1 : 0;
    // 0x803F0614: bne         $at, $zero, L_803F06AC
    if (ctx->r1 != 0) {
        // 0x803F0618: lui         $t7, 0x8028
        ctx->r15 = S32(0X8028 << 16);
            goto L_803F06AC;
    }
    // 0x803F0618: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x803F061C: lh          $t7, -0x1B60($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1B60);
    // 0x803F0620: nop

    // 0x803F0624: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803F0628: beq         $t8, $zero, L_803F06AC
    if (ctx->r24 == 0) {
        // 0x803F062C: nop
    
            goto L_803F06AC;
    }
    // 0x803F062C: nop

L_803F0630:
    // 0x803F0630: jal         0x803F11B4
    // 0x803F0634: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_0;
    // 0x803F0634: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_0:
    // 0x803F0638: beq         $v0, $zero, L_803F06B0
    if (ctx->r2 == 0) {
        // 0x803F063C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F06B0;
    }
    // 0x803F063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F0640: lwc1        $f18, 0x88($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X88);
    // 0x803F0644: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0648: swc1        $f18, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f18.u32l;
    // 0x803F064C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0650: lwc1        $f4, 0x84($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X84);
    // 0x803F0654: lwc1        $f9, 0x7B70($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X7B70);
    // 0x803F0658: lwc1        $f8, 0x7B74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7B74);
    // 0x803F065C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x803F0660: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x803F0664: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x803F0668: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x803F066C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803F0670: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0674: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x803F0678: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x803F067C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x803F0680: nop

    // 0x803F0684: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x803F0688: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F068C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F0690: nop

    // 0x803F0694: cvt.w.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_D(ctx->f18.d);
    // 0x803F0698: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x803F069C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x803F06A0: sh          $t1, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r9;
    // 0x803F06A4: b           L_803F0EC0
    // 0x803F06A8: sh          $t3, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r11;
        goto L_803F0EC0;
    // 0x803F06A8: sh          $t3, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r11;
L_803F06AC:
    // 0x803F06AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F06B0:
    // 0x803F06B0: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    // 0x803F06B4: jal         0x803F11B4
    // 0x803F06B8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_1;
    // 0x803F06B8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x803F06BC: beq         $v0, $zero, L_803F0720
    if (ctx->r2 == 0) {
        // 0x803F06C0: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F0720;
    }
    // 0x803F06C0: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F06C4: lwc1        $f12, 0x7B78($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7B78);
    // 0x803F06C8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F06CC: lwc1        $f14, 0x7B7C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B7C);
    // 0x803F06D0: lui         $a2, 0x3E8F
    ctx->r6 = S32(0X3E8F << 16);
    // 0x803F06D4: lui         $a3, 0x3D7B
    ctx->r7 = S32(0X3D7B << 16);
    // 0x803F06D8: addiu       $t4, $sp, 0x34
    ctx->r12 = ADD32(ctx->r29, 0X34);
    // 0x803F06DC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x803F06E0: ori         $a3, $a3, 0x823F
    ctx->r7 = ctx->r7 | 0X823F;
    // 0x803F06E4: ori         $a2, $a2, 0xB824
    ctx->r6 = ctx->r6 | 0XB824;
    // 0x803F06E8: jal         0x8005743C
    // 0x803F06EC: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    func_8005743C(rdram, ctx);
        goto after_2;
    // 0x803F06EC: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    after_2:
    // 0x803F06F0: lw          $v1, 0xA4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA4);
    // 0x803F06F4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F06F8: lwc1        $f6, 0x88($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X88);
    // 0x803F06FC: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F0700: swc1        $f6, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f6.u32l;
    // 0x803F0704: lwc1        $f12, 0x84($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X84);
    // 0x803F0708: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x803F070C: jal         0x803F0000
    // 0x803F0710: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_3;
    // 0x803F0710: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    after_3:
    // 0x803F0714: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0718: nop

    // 0x803F071C: sh          $v0, 0x960($t5)
    MEM_H(0X960, ctx->r13) = ctx->r2;
L_803F0720:
    // 0x803F0720: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803F0724: b           L_803F0EC0
    // 0x803F0728: sh          $t6, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r14;
        goto L_803F0EC0;
    // 0x803F0728: sh          $t6, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r14;
L_803F072C:
    // 0x803F072C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0730: lwc1        $f12, 0x7B80($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7B80);
    // 0x803F0734: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0738: lwc1        $f14, 0x7B84($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B84);
    // 0x803F073C: lui         $a2, 0x3E8F
    ctx->r6 = S32(0X3E8F << 16);
    // 0x803F0740: lui         $a3, 0x3D7B
    ctx->r7 = S32(0X3D7B << 16);
    // 0x803F0744: addiu       $t7, $sp, 0x34
    ctx->r15 = ADD32(ctx->r29, 0X34);
    // 0x803F0748: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803F074C: ori         $a3, $a3, 0x823F
    ctx->r7 = ctx->r7 | 0X823F;
    // 0x803F0750: jal         0x8005743C
    // 0x803F0754: ori         $a2, $a2, 0xB824
    ctx->r6 = ctx->r6 | 0XB824;
    func_8005743C(rdram, ctx);
        goto after_4;
    // 0x803F0754: ori         $a2, $a2, 0xB824
    ctx->r6 = ctx->r6 | 0XB824;
    after_4:
    // 0x803F0758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F075C: jal         0x803F0304
    // 0x803F0760: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    ovl_803F0000_menu_func_803F0304(rdram, ctx);
        goto after_5;
    // 0x803F0760: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    after_5:
    // 0x803F0764: beq         $v0, $zero, L_803F0924
    if (ctx->r2 == 0) {
        // 0x803F0768: nop
    
            goto L_803F0924;
    }
    // 0x803F0768: nop

    // 0x803F076C: lhu         $t8, 0x2C($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2C);
    // 0x803F0770: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F0774: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F0778: beq         $t9, $zero, L_803F0788
    if (ctx->r25 == 0) {
        // 0x803F077C: addiu       $t4, $sp, 0x9C
        ctx->r12 = ADD32(ctx->r29, 0X9C);
            goto L_803F0788;
    }
    // 0x803F077C: addiu       $t4, $sp, 0x9C
    ctx->r12 = ADD32(ctx->r29, 0X9C);
    // 0x803F0780: b           L_803F078C
    // 0x803F0784: addiu       $v1, $zero, 0x26
    ctx->r3 = ADD32(0, 0X26);
        goto L_803F078C;
    // 0x803F0784: addiu       $v1, $zero, 0x26
    ctx->r3 = ADD32(0, 0X26);
L_803F0788:
    // 0x803F0788: addiu       $v1, $zero, -0x26
    ctx->r3 = ADD32(0, -0X26);
L_803F078C:
    // 0x803F078C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0790: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x803F0794: lw          $t2, 0x24($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X24);
    // 0x803F0798: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F079C: lh          $t3, 0x8B8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8B8);
    // 0x803F07A0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F07A4: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x803F07A8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x803F07AC: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F07B0: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x803F07B4: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x803F07B8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x803F07BC: jal         0x80272B1C
    // 0x803F07C0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_6;
    // 0x803F07C0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_6:
    // 0x803F07C4: lwc1        $f16, 0x9C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x803F07C8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F07CC: swc1        $f16, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f16.u32l;
    // 0x803F07D0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x803F07D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F07D8: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x803F07DC: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F07E0: lhu         $t5, 0x2C($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X2C);
    // 0x803F07E4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803F07E8: lwc1        $f11, 0x7B88($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X7B88);
    // 0x803F07EC: lwc1        $f10, 0x7B8C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7B8C);
    // 0x803F07F0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803F07F4: andi        $t6, $t5, 0x5
    ctx->r14 = ctx->r13 & 0X5;
    // 0x803F07F8: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x803F07FC: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x803F0800: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0804: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x803F0808: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x803F080C: add.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f16.d + ctx->f4.d;
    // 0x803F0810: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x803F0814: nop

    // 0x803F0818: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x803F081C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F0820: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F0824: nop

    // 0x803F0828: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x803F082C: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x803F0830: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x803F0834: jal         0x80058054
    // 0x803F0838: sh          $t8, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r24;
    func_80058054(rdram, ctx);
        goto after_7;
    // 0x803F0838: sh          $t8, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r24;
    after_7:
    // 0x803F083C: lw          $t1, 0xD8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD8);
    // 0x803F0840: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F0844: lbu         $t2, 0x13($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X13);
    // 0x803F0848: addiu       $t0, $t0, 0x7E00
    ctx->r8 = ADD32(ctx->r8, 0X7E00);
    // 0x803F084C: andi        $t3, $t2, 0x40
    ctx->r11 = ctx->r10 & 0X40;
    // 0x803F0850: beq         $t3, $zero, L_803F08A8
    if (ctx->r11 == 0) {
        // 0x803F0854: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F08A8;
    }
    // 0x803F0854: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0858: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F085C: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0860: lwc1        $f17, 0x7B90($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7B90);
    // 0x803F0864: lwc1        $f16, 0x7B94($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7B94);
    // 0x803F0868: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x803F086C: add.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f18.d + ctx->f16.d;
    // 0x803F0870: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0874: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x803F0878: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F087C: swc1        $f6, 0x970($t4)
    MEM_W(0X970, ctx->r12) = ctx->f6.u32l;
    // 0x803F0880: lwc1        $f10, 0x7B9C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7B9C);
    // 0x803F0884: lwc1        $f11, 0x7B98($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X7B98);
    // 0x803F0888: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x803F088C: add.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f8.d + ctx->f10.d;
    // 0x803F0890: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0894: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
    // 0x803F0898: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F089C: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x803F08A0: b           L_803F08F0
    // 0x803F08A4: swc1        $f6, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f6.u32l;
        goto L_803F08F0;
    // 0x803F08A4: swc1        $f6, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f6.u32l;
L_803F08A8:
    // 0x803F08A8: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F08AC: lwc1        $f19, 0x7BA0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7BA0);
    // 0x803F08B0: lwc1        $f18, 0x7BA4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7BA4);
    // 0x803F08B4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803F08B8: sub.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d - ctx->f18.d;
    // 0x803F08BC: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F08C0: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
    // 0x803F08C4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F08C8: swc1        $f16, 0x970($t5)
    MEM_W(0X970, ctx->r13) = ctx->f16.u32l;
    // 0x803F08CC: lwc1        $f8, 0x7BAC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7BAC);
    // 0x803F08D0: lwc1        $f9, 0x7BA8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X7BA8);
    // 0x803F08D4: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x803F08D8: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x803F08DC: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F08E0: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x803F08E4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F08E8: add.s       $f16, $f4, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x803F08EC: swc1        $f16, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f16.u32l;
L_803F08F0:
    // 0x803F08F0: jal         0x80059898
    // 0x803F08F4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80059898(rdram, ctx);
        goto after_8;
    // 0x803F08F4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_8:
    // 0x803F08F8: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F08FC: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
    // 0x803F0900: sh          $t6, 0x962($t7)
    MEM_H(0X962, ctx->r15) = ctx->r14;
    // 0x803F0904: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0908: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x803F090C: lhu         $t8, 0x95C($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F0910: nop

    // 0x803F0914: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x803F0918: sh          $t9, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r25;
    // 0x803F091C: b           L_803F0ACC
    // 0x803F0920: sh          $t1, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r9;
        goto L_803F0ACC;
    // 0x803F0920: sh          $t1, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r9;
L_803F0924:
    // 0x803F0924: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0928: nop

    // 0x803F092C: lw          $t3, 0x24($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X24);
    // 0x803F0930: nop

    // 0x803F0934: lh          $t4, 0x8B8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8B8);
    // 0x803F0938: nop

    // 0x803F093C: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x803F0940: jal         0x802645E0
    // 0x803F0944: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    LOOKUP_FUNC(0x802645E0)(rdram, ctx);
        goto after_9;
    // 0x803F0944: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_9:
    // 0x803F0948: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x803F094C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x803F0950: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803F0954: lw          $t6, -0x3F54($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3F54);
    // 0x803F0958: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x803F095C: jal         0x80059898
    // 0x803F0960: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    func_80059898(rdram, ctx);
        goto after_10;
    // 0x803F0960: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    after_10:
    // 0x803F0964: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x803F0968: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803F096C: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x803F0970: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x803F0974: jal         0x803F04A8
    // 0x803F0978: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    ovl_803F0000_menu_func_803F04A8(rdram, ctx);
        goto after_11;
    // 0x803F0978: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_11:
    // 0x803F097C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F0980: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F0984: lw          $a2, 0x94($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X94);
    // 0x803F0988: lw          $a3, 0x98($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X98);
    // 0x803F098C: addiu       $t9, $sp, 0x9C
    ctx->r25 = ADD32(ctx->r29, 0X9C);
    // 0x803F0990: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x803F0994: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x803F0998: jal         0x80272B1C
    // 0x803F099C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_12;
    // 0x803F099C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_12:
    // 0x803F09A0: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x803F09A4: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F09A8: addiu       $t0, $t0, 0x7E00
    ctx->r8 = ADD32(ctx->r8, 0X7E00);
    // 0x803F09AC: lwc1        $f12, 0xA0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x803F09B0: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F09B4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x803F09B8: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    // 0x803F09BC: jal         0x803F0000
    // 0x803F09C0: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_13;
    // 0x803F09C0: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
    after_13:
    // 0x803F09C4: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F09C8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F09CC: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F09D0: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F09D4: sh          $t2, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r10;
    // 0x803F09D8: lhu         $t3, 0x95C($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F09DC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x803F09E0: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x803F09E4: jal         0x80059898
    // 0x803F09E8: sh          $t4, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r12;
    func_80059898(rdram, ctx);
        goto after_14;
    // 0x803F09E8: sh          $t4, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r12;
    after_14:
    // 0x803F09EC: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F09F0: addiu       $t5, $v0, 0xA
    ctx->r13 = ADD32(ctx->r2, 0XA);
    // 0x803F09F4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x803F09F8: jal         0x80058054
    // 0x803F09FC: sh          $t5, 0x962($t6)
    MEM_H(0X962, ctx->r14) = ctx->r13;
    func_80058054(rdram, ctx);
        goto after_15;
    // 0x803F09FC: sh          $t5, 0x962($t6)
    MEM_H(0X962, ctx->r14) = ctx->r13;
    after_15:
    // 0x803F0A00: lw          $t7, 0xD8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD8);
    // 0x803F0A04: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F0A08: lbu         $t8, 0x13($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X13);
    // 0x803F0A0C: addiu       $t0, $t0, 0x7E00
    ctx->r8 = ADD32(ctx->r8, 0X7E00);
    // 0x803F0A10: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x803F0A14: beq         $t9, $zero, L_803F0A6C
    if (ctx->r25 == 0) {
        // 0x803F0A18: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F0A6C;
    }
    // 0x803F0A18: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0A1C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0A20: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0A24: lwc1        $f19, 0x7BB0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7BB0);
    // 0x803F0A28: lwc1        $f18, 0x7BB4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7BB4);
    // 0x803F0A2C: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x803F0A30: add.d       $f16, $f4, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f4.d + ctx->f18.d;
    // 0x803F0A34: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0A38: cvt.s.d     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f6.fl = CVT_S_D(ctx->f16.d);
    // 0x803F0A3C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0A40: swc1        $f6, 0x970($t1)
    MEM_W(0X970, ctx->r9) = ctx->f6.u32l;
    // 0x803F0A44: lwc1        $f10, 0x7BBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7BBC);
    // 0x803F0A48: lwc1        $f11, 0x7BB8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X7BB8);
    // 0x803F0A4C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x803F0A50: add.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f8.d + ctx->f10.d;
    // 0x803F0A54: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0A58: cvt.s.d     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f18.fl = CVT_S_D(ctx->f4.d);
    // 0x803F0A5C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0A60: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803F0A64: b           L_803F0AB4
    // 0x803F0A68: swc1        $f6, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f6.u32l;
        goto L_803F0AB4;
    // 0x803F0A68: swc1        $f6, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f6.u32l;
L_803F0A6C:
    // 0x803F0A6C: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0A70: lwc1        $f5, 0x7BC0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7BC0);
    // 0x803F0A74: lwc1        $f4, 0x7BC4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7BC4);
    // 0x803F0A78: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803F0A7C: sub.d       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = ctx->f10.d - ctx->f4.d;
    // 0x803F0A80: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0A84: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x803F0A88: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0A8C: swc1        $f18, 0x970($t2)
    MEM_W(0X970, ctx->r10) = ctx->f18.u32l;
    // 0x803F0A90: lwc1        $f8, 0x7BCC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7BCC);
    // 0x803F0A94: lwc1        $f9, 0x7BC8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X7BC8);
    // 0x803F0A98: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x803F0A9C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x803F0AA0: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0AA4: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x803F0AA8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0AAC: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x803F0AB0: swc1        $f18, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f18.u32l;
L_803F0AB4:
    // 0x803F0AB4: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0AB8: nop

    // 0x803F0ABC: lh          $t3, 0x960($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X960);
    // 0x803F0AC0: nop

    // 0x803F0AC4: addiu       $t4, $t3, 0x2
    ctx->r12 = ADD32(ctx->r11, 0X2);
    // 0x803F0AC8: sh          $t4, 0x960($v1)
    MEM_H(0X960, ctx->r3) = ctx->r12;
L_803F0ACC:
    // 0x803F0ACC: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0AD0: nop

    // 0x803F0AD4: lwc1        $f12, 0x970($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X970);
    // 0x803F0AD8: jal         0x803F0164
    // 0x803F0ADC: nop

    ovl_803F0000_menu_func_803F0164(rdram, ctx);
        goto after_16;
    // 0x803F0ADC: nop

    after_16:
    // 0x803F0AE0: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0AE4: b           L_803F0EC0
    // 0x803F0AE8: swc1        $f0, 0x970($t6)
    MEM_W(0X970, ctx->r14) = ctx->f0.u32l;
        goto L_803F0EC0;
    // 0x803F0AE8: swc1        $f0, 0x970($t6)
    MEM_W(0X970, ctx->r14) = ctx->f0.u32l;
L_803F0AEC:
    // 0x803F0AEC: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0AF0: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F0AF4: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x803F0AF8: addiu       $t0, $t0, 0x7E00
    ctx->r8 = ADD32(ctx->r8, 0X7E00);
    // 0x803F0AFC: lwc1        $f6, 0x8C0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8C0);
    // 0x803F0B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F0B04: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    // 0x803F0B08: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x803F0B0C: jal         0x803F11B4
    // 0x803F0B10: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_17;
    // 0x803F0B10: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    after_17:
    // 0x803F0B14: beq         $v0, $zero, L_803F0B44
    if (ctx->r2 == 0) {
        // 0x803F0B18: lui         $at, 0x43C8
        ctx->r1 = S32(0X43C8 << 16);
            goto L_803F0B44;
    }
    // 0x803F0B18: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x803F0B1C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F0B20: lwc1        $f10, 0x84($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X84);
    // 0x803F0B24: nop

    // 0x803F0B28: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803F0B2C: nop

    // 0x803F0B30: bc1f        L_803F0B44
    if (!c1cs) {
        // 0x803F0B34: nop
    
            goto L_803F0B44;
    }
    // 0x803F0B34: nop

    // 0x803F0B38: lwc1        $f16, 0x88($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X88);
    // 0x803F0B3C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0B40: swc1        $f16, 0x7E00($at)
    MEM_W(0X7E00, ctx->r1) = ctx->f16.u32l;
L_803F0B44:
    // 0x803F0B44: jal         0x80059898
    // 0x803F0B48: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80059898(rdram, ctx);
        goto after_18;
    // 0x803F0B48: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_18:
    // 0x803F0B4C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0B50: addiu       $t9, $v0, 0xF
    ctx->r25 = ADD32(ctx->r2, 0XF);
    // 0x803F0B54: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F0B58: sh          $t9, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r25;
    // 0x803F0B5C: b           L_803F0EC0
    // 0x803F0B60: sh          $t2, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r10;
        goto L_803F0EC0;
    // 0x803F0B60: sh          $t2, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r10;
L_803F0B64:
    // 0x803F0B64: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0B68: lwc1        $f12, 0x7BD0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7BD0);
    // 0x803F0B6C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0B70: lwc1        $f14, 0x7BD4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7BD4);
    // 0x803F0B74: lui         $a2, 0x3E8F
    ctx->r6 = S32(0X3E8F << 16);
    // 0x803F0B78: lui         $a3, 0x3D7B
    ctx->r7 = S32(0X3D7B << 16);
    // 0x803F0B7C: addiu       $t3, $sp, 0x34
    ctx->r11 = ADD32(ctx->r29, 0X34);
    // 0x803F0B80: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803F0B84: ori         $a3, $a3, 0x823F
    ctx->r7 = ctx->r7 | 0X823F;
    // 0x803F0B88: jal         0x8005743C
    // 0x803F0B8C: ori         $a2, $a2, 0xB824
    ctx->r6 = ctx->r6 | 0XB824;
    func_8005743C(rdram, ctx);
        goto after_19;
    // 0x803F0B8C: ori         $a2, $a2, 0xB824
    ctx->r6 = ctx->r6 | 0XB824;
    after_19:
    // 0x803F0B90: lhu         $t4, 0x2C($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X2C);
    // 0x803F0B94: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x803F0B98: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x803F0B9C: beq         $t5, $zero, L_803F0CA8
    if (ctx->r13 == 0) {
        // 0x803F0BA0: nop
    
            goto L_803F0CA8;
    }
    // 0x803F0BA0: nop

    // 0x803F0BA4: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x803F0BA8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803F0BAC: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x803F0BB0: bne         $t7, $zero, L_803F0CA8
    if (ctx->r15 != 0) {
        // 0x803F0BB4: nop
    
            goto L_803F0CA8;
    }
    // 0x803F0BB4: nop

    // 0x803F0BB8: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0BBC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F0BC0: lhu         $t9, 0x8($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X8);
    // 0x803F0BC4: addiu       $t2, $sp, 0x9C
    ctx->r10 = ADD32(ctx->r29, 0X9C);
    // 0x803F0BC8: andi        $t1, $t9, 0x1
    ctx->r9 = ctx->r25 & 0X1;
    // 0x803F0BCC: beq         $t1, $zero, L_803F0BDC
    if (ctx->r9 == 0) {
        // 0x803F0BD0: addiu       $v1, $zero, -0x1A4
        ctx->r3 = ADD32(0, -0X1A4);
            goto L_803F0BDC;
    }
    // 0x803F0BD0: addiu       $v1, $zero, -0x1A4
    ctx->r3 = ADD32(0, -0X1A4);
    // 0x803F0BD4: b           L_803F0BDC
    // 0x803F0BD8: addiu       $v1, $zero, 0x1A4
    ctx->r3 = ADD32(0, 0X1A4);
        goto L_803F0BDC;
    // 0x803F0BD8: addiu       $v1, $zero, 0x1A4
    ctx->r3 = ADD32(0, 0X1A4);
L_803F0BDC:
    // 0x803F0BDC: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x803F0BE0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F0BE4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F0BE8: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x803F0BEC: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x803F0BF0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803F0BF4: jal         0x80272B1C
    // 0x803F0BF8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_20;
    // 0x803F0BF8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_20:
    // 0x803F0BFC: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x803F0C00: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F0C04: addiu       $t0, $t0, 0x7E00
    ctx->r8 = ADD32(ctx->r8, 0X7E00);
    // 0x803F0C08: lwc1        $f12, 0xA0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x803F0C0C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F0C10: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x803F0C14: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    // 0x803F0C18: jal         0x803F0000
    // 0x803F0C1C: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_21;
    // 0x803F0C1C: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
    after_21:
    // 0x803F0C20: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0C24: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0C28: sh          $v0, 0x960($t3)
    MEM_H(0X960, ctx->r11) = ctx->r2;
    // 0x803F0C2C: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0C30: nop

    // 0x803F0C34: lhu         $t4, 0x8($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X8);
    // 0x803F0C38: nop

    // 0x803F0C3C: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x803F0C40: beq         $t5, $zero, L_803F0C60
    if (ctx->r13 == 0) {
        // 0x803F0C44: nop
    
            goto L_803F0C60;
    }
    // 0x803F0C44: nop

    // 0x803F0C48: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x803F0C4C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803F0C50: nop

    // 0x803F0C54: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x803F0C58: b           L_803F0C74
    // 0x803F0C5C: swc1        $f8, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f8.u32l;
        goto L_803F0C74;
    // 0x803F0C5C: swc1        $f8, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f8.u32l;
L_803F0C60:
    // 0x803F0C60: lwc1        $f11, 0x7BD8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X7BD8);
    // 0x803F0C64: lwc1        $f10, 0x7BDC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7BDC);
    // 0x803F0C68: nop

    // 0x803F0C6C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x803F0C70: swc1        $f16, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f16.u32l;
L_803F0C74:
    // 0x803F0C74: jal         0x80059898
    // 0x803F0C78: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80059898(rdram, ctx);
        goto after_22;
    // 0x803F0C78: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_22:
    // 0x803F0C7C: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0C80: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
    // 0x803F0C84: sh          $t6, 0x962($t7)
    MEM_H(0X962, ctx->r15) = ctx->r14;
    // 0x803F0C88: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0C8C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803F0C90: lhu         $t8, 0x95C($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F0C94: nop

    // 0x803F0C98: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x803F0C9C: sh          $t9, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r25;
    // 0x803F0CA0: b           L_803F0EC0
    // 0x803F0CA4: sh          $t1, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r9;
        goto L_803F0EC0;
    // 0x803F0CA4: sh          $t1, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r9;
L_803F0CA8:
    // 0x803F0CA8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0CAC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x803F0CB0: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x803F0CB4: lbu         $t4, 0x3($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X3);
    // 0x803F0CB8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803F0CBC: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803F0CC0: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x803F0CC4: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x803F0CC8: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x803F0CCC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x803F0CD0: lhu         $v0, -0x3330($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3330);
    // 0x803F0CD4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x803F0CD8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803F0CDC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803F0CE0: lw          $t8, -0x315C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X315C);
    // 0x803F0CE4: jal         0x80059898
    // 0x803F0CE8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    func_80059898(rdram, ctx);
        goto after_23;
    // 0x803F0CE8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    after_23:
    // 0x803F0CEC: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x803F0CF0: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x803F0CF4: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x803F0CF8: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x803F0CFC: jal         0x803F04A8
    // 0x803F0D00: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    ovl_803F0000_menu_func_803F04A8(rdram, ctx);
        goto after_24;
    // 0x803F0D00: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    after_24:
    // 0x803F0D04: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F0D08: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F0D0C: lw          $a2, 0x94($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X94);
    // 0x803F0D10: lw          $a3, 0x98($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X98);
    // 0x803F0D14: addiu       $t2, $sp, 0x9C
    ctx->r10 = ADD32(ctx->r29, 0X9C);
    // 0x803F0D18: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x803F0D1C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x803F0D20: jal         0x80272B1C
    // 0x803F0D24: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_25;
    // 0x803F0D24: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_25:
    // 0x803F0D28: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x803F0D2C: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F0D30: addiu       $t0, $t0, 0x7E00
    ctx->r8 = ADD32(ctx->r8, 0X7E00);
    // 0x803F0D34: lwc1        $f12, 0xA0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x803F0D38: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x803F0D3C: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x803F0D40: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    // 0x803F0D44: jal         0x803F0000
    // 0x803F0D48: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_26;
    // 0x803F0D48: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
    after_26:
    // 0x803F0D4C: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0D50: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F0D54: sh          $v0, 0x960($t4)
    MEM_H(0X960, ctx->r12) = ctx->r2;
    // 0x803F0D58: lhu         $t5, 0x2C($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X2C);
    // 0x803F0D5C: sh          $t3, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r11;
    // 0x803F0D60: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x803F0D64: beq         $t6, $zero, L_803F0EC0
    if (ctx->r14 == 0) {
        // 0x803F0D68: nop
    
            goto L_803F0EC0;
    }
    // 0x803F0D68: nop

    // 0x803F0D6C: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0D70: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x803F0D74: lhu         $t7, 0x95C($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F0D78: nop

    // 0x803F0D7C: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x803F0D80: jal         0x80059898
    // 0x803F0D84: sh          $t8, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r24;
    func_80059898(rdram, ctx);
        goto after_27;
    // 0x803F0D84: sh          $t8, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r24;
    after_27:
    // 0x803F0D88: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0D8C: addiu       $t9, $v0, 0xA
    ctx->r25 = ADD32(ctx->r2, 0XA);
    // 0x803F0D90: sh          $t9, 0x962($t1)
    MEM_H(0X962, ctx->r9) = ctx->r25;
    // 0x803F0D94: lhu         $t2, 0x14($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X14);
    // 0x803F0D98: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F0D9C: andi        $t4, $t2, 0x200
    ctx->r12 = ctx->r10 & 0X200;
    // 0x803F0DA0: beq         $t4, $zero, L_803F0DF4
    if (ctx->r12 == 0) {
        // 0x803F0DA4: addiu       $t0, $t0, 0x7E00
        ctx->r8 = ADD32(ctx->r8, 0X7E00);
            goto L_803F0DF4;
    }
    // 0x803F0DA4: addiu       $t0, $t0, 0x7E00
    ctx->r8 = ADD32(ctx->r8, 0X7E00);
    // 0x803F0DA8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0DAC: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0DB0: lhu         $t3, 0x8($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X8);
    // 0x803F0DB4: nop

    // 0x803F0DB8: andi        $t5, $t3, 0x1
    ctx->r13 = ctx->r11 & 0X1;
    // 0x803F0DBC: beq         $t5, $zero, L_803F0DDC
    if (ctx->r13 == 0) {
        // 0x803F0DC0: nop
    
            goto L_803F0DDC;
    }
    // 0x803F0DC0: nop

    // 0x803F0DC4: lwc1        $f19, 0x7BE0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7BE0);
    // 0x803F0DC8: lwc1        $f18, 0x7BE4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7BE4);
    // 0x803F0DCC: nop

    // 0x803F0DD0: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x803F0DD4: b           L_803F0E3C
    // 0x803F0DD8: swc1        $f6, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f6.u32l;
        goto L_803F0E3C;
    // 0x803F0DD8: swc1        $f6, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f6.u32l;
L_803F0DDC:
    // 0x803F0DDC: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x803F0DE0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F0DE4: nop

    // 0x803F0DE8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x803F0DEC: b           L_803F0E3C
    // 0x803F0DF0: swc1        $f10, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f10.u32l;
        goto L_803F0E3C;
    // 0x803F0DF0: swc1        $f10, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f10.u32l;
L_803F0DF4:
    // 0x803F0DF4: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0DF8: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0DFC: lhu         $t6, 0x8($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X8);
    // 0x803F0E00: nop

    // 0x803F0E04: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x803F0E08: beq         $t7, $zero, L_803F0E28
    if (ctx->r15 == 0) {
        // 0x803F0E0C: nop
    
            goto L_803F0E28;
    }
    // 0x803F0E0C: nop

    // 0x803F0E10: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x803F0E14: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803F0E18: nop

    // 0x803F0E1C: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x803F0E20: b           L_803F0E3C
    // 0x803F0E24: swc1        $f4, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f4.u32l;
        goto L_803F0E3C;
    // 0x803F0E24: swc1        $f4, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f4.u32l;
L_803F0E28:
    // 0x803F0E28: lwc1        $f19, 0x7BE8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7BE8);
    // 0x803F0E2C: lwc1        $f18, 0x7BEC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7BEC);
    // 0x803F0E30: nop

    // 0x803F0E34: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x803F0E38: swc1        $f6, 0x970($v1)
    MEM_W(0X970, ctx->r3) = ctx->f6.u32l;
L_803F0E3C:
    // 0x803F0E3C: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0E40: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0E44: lwc1        $f14, 0x970($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X970);
    // 0x803F0E48: jal         0x8027924C
    // 0x803F0E4C: nop

    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_28;
    // 0x803F0E4C: nop

    after_28:
    // 0x803F0E50: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F0E54: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F0E58: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F0E5C: addiu       $t0, $t0, 0x7E00
    ctx->r8 = ADD32(ctx->r8, 0X7E00);
    // 0x803F0E60: bc1f        L_803F0E8C
    if (!c1cs) {
        // 0x803F0E64: lui         $at, 0x803F
        ctx->r1 = S32(0X803F << 16);
            goto L_803F0E8C;
    }
    // 0x803F0E64: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0E68: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F0E6C: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0E70: lwc1        $f5, 0x7BF0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7BF0);
    // 0x803F0E74: lwc1        $f4, 0x7BF4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7BF4);
    // 0x803F0E78: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x803F0E7C: sub.d       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f16.d - ctx->f4.d;
    // 0x803F0E80: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x803F0E84: b           L_803F0EA8
    // 0x803F0E88: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
        goto L_803F0EA8;
    // 0x803F0E88: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
L_803F0E8C:
    // 0x803F0E8C: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803F0E90: lwc1        $f17, 0x7BF8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7BF8);
    // 0x803F0E94: lwc1        $f16, 0x7BFC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7BFC);
    // 0x803F0E98: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803F0E9C: add.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f10.d + ctx->f16.d;
    // 0x803F0EA0: cvt.s.d     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f18.fl = CVT_S_D(ctx->f4.d);
    // 0x803F0EA4: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
L_803F0EA8:
    // 0x803F0EA8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0EAC: nop

    // 0x803F0EB0: lh          $t9, 0x960($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X960);
    // 0x803F0EB4: nop

    // 0x803F0EB8: addiu       $t1, $t9, 0x2
    ctx->r9 = ADD32(ctx->r25, 0X2);
    // 0x803F0EBC: sh          $t1, 0x960($v1)
    MEM_H(0X960, ctx->r3) = ctx->r9;
L_803F0EC0:
    // 0x803F0EC0: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F0EC4: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x803F0EC8: lh          $t2, 0x960($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X960);
    // 0x803F0ECC: nop

    // 0x803F0ED0: slti        $at, $t2, 0x14
    ctx->r1 = SIGNED(ctx->r10) < 0X14 ? 1 : 0;
    // 0x803F0ED4: bne         $at, $zero, L_803F0EE4
    if (ctx->r1 != 0) {
        // 0x803F0ED8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803F0EE4;
    }
    // 0x803F0ED8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F0EDC: sh          $t4, 0x960($v1)
    MEM_H(0X960, ctx->r3) = ctx->r12;
    // 0x803F0EE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803F0EE4:
    // 0x803F0EE4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F0EE8: jr          $ra
    // 0x803F0EEC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x803F0EEC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
