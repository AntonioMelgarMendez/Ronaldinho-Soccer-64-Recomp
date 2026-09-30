#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80042070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80042074: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80042078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004207C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80042080: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80042084: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x80042088: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8004208C: jal         0x8006F274
    // 0x80042090: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    func_8006F274(rdram, ctx);
        goto after_0;
    // 0x80042090: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    after_0:
    // 0x80042094: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x80042098: jal         0x8004DE44
    // 0x8004209C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8004DE44(rdram, ctx);
        goto after_1;
    // 0x8004209C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800420A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800420A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800420A8: jr          $ra
    // 0x800420AC: nop

    return;
    // 0x800420AC: nop

;}
RECOMP_FUNC void func_800420B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800420B0: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x800420B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800420B8: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x800420BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800420C0: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x800420C4: lb          $t8, 0x1F($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X1F);
    // 0x800420C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800420CC: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x800420D0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800420D4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800420D8: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x800420DC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800420E0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800420E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800420E8: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x800420EC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800420F0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800420F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800420F8: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x800420FC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80042100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80042104: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80042108: addiu       $t2, $t2, -0x2CF0
    ctx->r10 = ADD32(ctx->r10, -0X2CF0);
    // 0x8004210C: addiu       $t1, $t0, 0x28
    ctx->r9 = ADD32(ctx->r8, 0X28);
    // 0x80042110: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80042114: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x80042118: jal         0x8004DE44
    // 0x8004211C: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    func_8004DE44(rdram, ctx);
        goto after_0;
    // 0x8004211C: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    after_0:
    // 0x80042120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80042124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80042128: jr          $ra
    // 0x8004212C: nop

    return;
    // 0x8004212C: nop

;}
RECOMP_FUNC void func_80042130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042130: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80042134: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80042138: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x8004213C: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80042140: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80042144: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80042148: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8004214C: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80042150: lbu         $t2, 0x7450($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X7450);
    // 0x80042154: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80042158: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8004215C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80042160: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x80042164: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80042168: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x8004216C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80042170: lbu         $t4, 0x745C($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X745C);
    // 0x80042174: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x80042178: lbu         $v1, -0x7A10($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X7A10);
    // 0x8004217C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80042180: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80042184: beq         $t4, $zero, L_80042198
    if (ctx->r12 == 0) {
        // 0x80042188: sw          $a2, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r6;
            goto L_80042198;
    }
    // 0x80042188: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8004218C: srl         $t5, $v1, 4
    ctx->r13 = S32(U32(ctx->r3) >> 4);
    // 0x80042190: jr          $ra
    // 0x80042194: andi        $v0, $t5, 0xFF
    ctx->r2 = ctx->r13 & 0XFF;
    return;
    // 0x80042194: andi        $v0, $t5, 0xFF
    ctx->r2 = ctx->r13 & 0XFF;
L_80042198:
    // 0x80042198: or          $t7, $v1, $zero
    ctx->r15 = ctx->r3 | 0;
    // 0x8004219C: andi        $v1, $t7, 0xF
    ctx->r3 = ctx->r15 & 0XF;
    // 0x800421A0: jr          $ra
    // 0x800421A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800421A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800421A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800421A8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800421AC: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800421B0: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800421B4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800421B8: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800421BC: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800421C0: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800421C4: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x800421C8: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x800421CC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800421D0: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x800421D4: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x800421D8: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800421DC: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x800421E0: lbu         $t2, 0x7450($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X7450);
    // 0x800421E4: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x800421E8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800421EC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800421F0: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x800421F4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800421F8: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x800421FC: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80042200: lbu         $t4, 0x745C($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X745C);
    // 0x80042204: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x80042208: lbu         $v1, -0x237A($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X237A);
    // 0x8004220C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80042210: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80042214: beq         $t4, $zero, L_80042228
    if (ctx->r12 == 0) {
        // 0x80042218: sw          $a2, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r6;
            goto L_80042228;
    }
    // 0x80042218: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8004221C: srl         $t5, $v1, 4
    ctx->r13 = S32(U32(ctx->r3) >> 4);
    // 0x80042220: jr          $ra
    // 0x80042224: andi        $v0, $t5, 0xFF
    ctx->r2 = ctx->r13 & 0XFF;
    return;
    // 0x80042224: andi        $v0, $t5, 0xFF
    ctx->r2 = ctx->r13 & 0XFF;
L_80042228:
    // 0x80042228: or          $t7, $v1, $zero
    ctx->r15 = ctx->r3 | 0;
    // 0x8004222C: andi        $v1, $t7, 0xF
    ctx->r3 = ctx->r15 & 0XF;
    // 0x80042230: jr          $ra
    // 0x80042234: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80042234: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80042238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042238: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004223C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80042240: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80042244: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80042248: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8004224C: sll         $t8, $a1, 24
    ctx->r24 = S32(ctx->r5 << 24);
    // 0x80042250: sra         $a1, $t8, 24
    ctx->r5 = S32(SIGNED(ctx->r24) >> 24);
    // 0x80042254: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80042258: jal         0x80042024
    // 0x8004225C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80042024(rdram, ctx);
        goto after_0;
    // 0x8004225C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80042260: lbu         $a2, 0x23($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X23);
    // 0x80042264: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80042268: andi        $t0, $a2, 0x80
    ctx->r8 = ctx->r6 & 0X80;
    // 0x8004226C: beq         $t0, $zero, L_80042294
    if (ctx->r8 == 0) {
        // 0x80042270: or          $a3, $a2, $zero
        ctx->r7 = ctx->r6 | 0;
            goto L_80042294;
    }
    // 0x80042270: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80042274: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x80042278: andi        $t1, $a2, 0x7F
    ctx->r9 = ctx->r6 & 0X7F;
    // 0x8004227C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80042280: lbu         $a1, 0x1($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X1);
    // 0x80042284: jal         0x80042130
    // 0x80042288: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    func_80042130(rdram, ctx);
        goto after_1;
    // 0x80042288: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    after_1:
    // 0x8004228C: b           L_800422A8
    // 0x80042290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800422A8;
    // 0x80042290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80042294:
    // 0x80042294: lb          $a0, 0x0($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X0);
    // 0x80042298: lb          $a1, 0x1($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X1);
    // 0x8004229C: jal         0x80042070
    // 0x800422A0: nop

    func_80042070(rdram, ctx);
        goto after_2;
    // 0x800422A0: nop

    after_2:
    // 0x800422A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800422A8:
    // 0x800422A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800422AC: jr          $ra
    // 0x800422B0: nop

    return;
    // 0x800422B0: nop

;}
RECOMP_FUNC void func_800422B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800422B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800422B8: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x800422BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800422C0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800422C4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800422C8: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x800422CC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800422D0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x800422D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800422D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800422DC: beq         $t8, $zero, L_80042300
    if (ctx->r24 == 0) {
        // 0x800422E0: andi        $a3, $a1, 0xFF
        ctx->r7 = ctx->r5 & 0XFF;
            goto L_80042300;
    }
    // 0x800422E0: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x800422E4: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x800422E8: andi        $t9, $a2, 0x7F
    ctx->r25 = ctx->r6 & 0X7F;
    // 0x800422EC: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x800422F0: jal         0x800421A8
    // 0x800422F4: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
    func_800421A8(rdram, ctx);
        goto after_0;
    // 0x800422F4: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
    after_0:
    // 0x800422F8: b           L_80042314
    // 0x800422FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80042314;
    // 0x800422FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80042300:
    // 0x80042300: sll         $a1, $a3, 24
    ctx->r5 = S32(ctx->r7 << 24);
    // 0x80042304: sra         $t0, $a1, 24
    ctx->r8 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80042308: jal         0x800420B0
    // 0x8004230C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_800420B0(rdram, ctx);
        goto after_1;
    // 0x8004230C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_1:
    // 0x80042310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80042314:
    // 0x80042314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80042318: jr          $ra
    // 0x8004231C: nop

    return;
    // 0x8004231C: nop

;}
RECOMP_FUNC void func_80042320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042320: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80042324: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80042328: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004232C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80042330: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x80042334: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x80042338: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8004233C: jal         0x8003D080
    // 0x80042340: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8003D080(rdram, ctx);
        goto after_0;
    // 0x80042340: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x80042344: bne         $v0, $zero, L_80042358
    if (ctx->r2 != 0) {
        // 0x80042348: lb          $a0, 0x1B($sp)
        ctx->r4 = MEM_B(ctx->r29, 0X1B);
            goto L_80042358;
    }
    // 0x80042348: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x8004234C: b           L_8004236C
    // 0x80042350: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8004236C;
    // 0x80042350: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80042354: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
L_80042358:
    // 0x80042358: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x8004235C: lbu         $a2, 0x23($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X23);
    // 0x80042360: lh          $a3, 0x26($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X26);
    // 0x80042364: jal         0x8004237C
    // 0x80042368: nop

    func_8004237C(rdram, ctx);
        goto after_1;
    // 0x80042368: nop

    after_1:
L_8004236C:
    // 0x8004236C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80042370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80042374: jr          $ra
    // 0x80042378: nop

    return;
    // 0x80042378: nop

;}
RECOMP_FUNC void func_8004237C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004237C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80042380: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80042384: lb          $t6, 0x53($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X53);
    // 0x80042388: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8004238C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80042390: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80042394: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80042398: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004239C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800423A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800423A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800423A8: lb          $t8, 0x57($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X57);
    // 0x800423AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800423B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800423B4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800423B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800423BC: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x800423C0: lbu         $a1, -0x29E8($v0)
    ctx->r5 = MEM_BU(ctx->r2, -0X29E8);
    // 0x800423C4: lbu         $a0, 0x53($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X53);
    // 0x800423C8: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x800423CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800423D0: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x800423D4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800423D8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800423DC: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x800423E0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800423E4: jal         0x800422B4
    // 0x800423E8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_800422B4(rdram, ctx);
        goto after_0;
    // 0x800423E8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x800423EC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800423F0: bgez        $v0, L_80042408
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800423F4: cvt.s.w     $f20, $f4
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80042408;
    }
    // 0x800423F4: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800423F8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800423FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80042400: nop

    // 0x80042404: add.s       $f20, $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f6.fl;
L_80042408:
    // 0x80042408: lbu         $v1, 0x5B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X5B);
    // 0x8004240C: nop

    // 0x80042410: andi        $t0, $v1, 0x80
    ctx->r8 = ctx->r3 & 0X80;
    // 0x80042414: bne         $t0, $zero, L_800425C8
    if (ctx->r8 != 0) {
        // 0x80042418: slti        $at, $v1, 0x13
        ctx->r1 = SIGNED(ctx->r3) < 0X13 ? 1 : 0;
            goto L_800425C8;
    }
    // 0x80042418: slti        $at, $v1, 0x13
    ctx->r1 = SIGNED(ctx->r3) < 0X13 ? 1 : 0;
    // 0x8004241C: beq         $at, $zero, L_800425C8
    if (ctx->r1 == 0) {
        // 0x80042420: nop
    
            goto L_800425C8;
    }
    // 0x80042420: nop

    // 0x80042424: lbu         $a1, 0x57($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X57);
    // 0x80042428: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x8004242C: jal         0x8004DCB0
    // 0x80042430: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_8004DCB0(rdram, ctx);
        goto after_1;
    // 0x80042430: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_1:
    // 0x80042434: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80042438: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
    // 0x8004243C: lh          $a2, 0x5E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X5E);
    // 0x80042440: jal         0x8003C8F8
    // 0x80042444: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    func_8003C8F8(rdram, ctx);
        goto after_2;
    // 0x80042444: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_2:
    // 0x80042448: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8004244C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80042450: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80042454: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80042458: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x8004245C: div.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80042460: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x80042464: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x80042468: jal         0x800422B4
    // 0x8004246C: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    func_800422B4(rdram, ctx);
        goto after_3;
    // 0x8004246C: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    after_3:
    // 0x80042470: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x80042474: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80042478: bgez        $v0, L_80042490
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004247C: cvt.s.w     $f12, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
            goto L_80042490;
    }
    // 0x8004247C: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80042480: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80042484: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80042488: nop

    // 0x8004248C: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
L_80042490:
    // 0x80042490: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80042494: nop

    // 0x80042498: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    // 0x8004249C: nop

    // 0x800424A0: bc1f        L_800424F4
    if (!c1cs) {
        // 0x800424A4: nop
    
            goto L_800424F4;
    }
    // 0x800424A4: nop

    // 0x800424A8: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x800424AC: jal         0x8001CA28
    // 0x800424B0: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    func_8001CA28(rdram, ctx);
        goto after_4;
    // 0x800424B0: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    after_4:
    // 0x800424B4: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800424B8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800424BC: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x800424C0: mul.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f8.d);
    // 0x800424C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800424C8: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800424CC: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x800424D0: mul.s       $f18, $f12, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x800424D4: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x800424D8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x800424DC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800424E0: add.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f10.d + ctx->f4.d;
    // 0x800424E4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800424E8: mul.d       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x800424EC: b           L_80042500
    // 0x800424F0: div.d       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f2.d = DIV_D(ctx->f16.d, ctx->f18.d);
        goto L_80042500;
    // 0x800424F0: div.d       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f2.d = DIV_D(ctx->f16.d, ctx->f18.d);
L_800424F4:
    // 0x800424F4: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x800424F8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x800424FC: nop

L_80042500:
    // 0x80042500: mul.s       $f10, $f14, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x80042504: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80042508: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004250C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80042510: div.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80042514: cvt.d.s     $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f18.d = CVT_D_S(ctx->f20.fl);
    // 0x80042518: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8004251C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80042520: add.d       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f8.d + ctx->f2.d;
    // 0x80042524: add.d       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = ctx->f18.d + ctx->f16.d;
    // 0x80042528: jal         0x8004D880
    // 0x8004252C: cvt.s.d     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f20.fl = CVT_S_D(ctx->f10.d);
    func_8004D880(rdram, ctx);
        goto after_5;
    // 0x8004252C: cvt.s.d     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f20.fl = CVT_S_D(ctx->f10.d);
    after_5:
    // 0x80042530: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80042534: lwc1        $f5, 0x73D0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X73D0);
    // 0x80042538: lwc1        $f4, 0x73D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X73D4);
    // 0x8004253C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80042540: cvt.d.s     $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.d = CVT_D_S(ctx->f20.fl);
    // 0x80042544: mul.d       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x80042548: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8004254C: bgez        $v0, L_80042564
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80042550: cvt.d.w     $f18, $f8
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.d = CVT_D_W(ctx->f8.u32l);
            goto L_80042564;
    }
    // 0x80042550: cvt.d.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.d = CVT_D_W(ctx->f8.u32l);
    // 0x80042554: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80042558: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8004255C: nop

    // 0x80042560: add.d       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f18.d + ctx->f16.d;
L_80042564:
    // 0x80042564: mul.d       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f18.d);
    // 0x80042568: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8004256C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80042570: sub.d       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f0.d - ctx->f10.d;
    // 0x80042574: jal         0x8004D880
    // 0x80042578: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    func_8004D880(rdram, ctx);
        goto after_6;
    // 0x80042578: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    after_6:
    // 0x8004257C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80042580: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80042584: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80042588: cvt.d.s     $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.d = CVT_D_S(ctx->f20.fl);
    // 0x8004258C: bgez        $v0, L_800425A4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80042590: cvt.s.w     $f6, $f16
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
            goto L_800425A4;
    }
    // 0x80042590: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80042594: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80042598: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8004259C: nop

    // 0x800425A0: add.s       $f6, $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f18.fl;
L_800425A4:
    // 0x800425A4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800425A8: lwc1        $f17, 0x73D8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X73D8);
    // 0x800425AC: lwc1        $f16, 0x73DC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X73DC);
    // 0x800425B0: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x800425B4: mul.d       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f0.d, ctx->f16.d);
    // 0x800425B8: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x800425BC: mul.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x800425C0: sub.d       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f0.d - ctx->f8.d;
    // 0x800425C4: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
L_800425C8:
    // 0x800425C8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800425CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800425D0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800425D4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800425D8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800425DC: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x800425E0: cvt.w.s     $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    ctx->f10.u32l = CVT_W_S(ctx->f20.fl);
    // 0x800425E4: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x800425E8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800425EC: jal         0x8001D4C0
    // 0x800425F0: nop

    func_8001D4C0(rdram, ctx);
        goto after_7;
    // 0x800425F0: nop

    after_7:
    // 0x800425F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800425F8: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x800425FC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80042600: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80042604: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80042608: jr          $ra
    // 0x8004260C: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
    return;
    // 0x8004260C: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
;}
RECOMP_FUNC void func_80042610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042610: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80042614: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80042618: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004261C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80042620: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x80042624: sra         $a1, $t6, 24
    ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80042628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004262C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80042630: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x80042634: lbu         $a2, 0x2B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2B);
    // 0x80042638: lb          $a0, 0x23($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X23);
    // 0x8004263C: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80042640: jal         0x80042320
    // 0x80042644: sb          $a1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r5;
    func_80042320(rdram, ctx);
        goto after_0;
    // 0x80042644: sb          $a1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r5;
    after_0:
    // 0x80042648: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x8004264C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80042650: sll         $a2, $a1, 24
    ctx->r6 = S32(ctx->r5 << 24);
    // 0x80042654: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80042658: sra         $t0, $a2, 24
    ctx->r8 = S32(SIGNED(ctx->r6) >> 24);
    // 0x8004265C: lb          $a0, 0x23($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X23);
    // 0x80042660: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x80042664: jal         0x80042748
    // 0x80042668: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_80042748(rdram, ctx);
        goto after_1;
    // 0x80042668: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8004266C: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80042670: beq         $v0, $zero, L_80042718
    if (ctx->r2 == 0) {
        // 0x80042674: nop
    
            goto L_80042718;
    }
    // 0x80042674: nop

    // 0x80042678: lbu         $v0, 0x2B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2B);
    // 0x8004267C: nop

    // 0x80042680: andi        $t1, $v0, 0x80
    ctx->r9 = ctx->r2 & 0X80;
    // 0x80042684: bne         $t1, $zero, L_800426AC
    if (ctx->r9 != 0) {
        // 0x80042688: slti        $at, $v0, 0x13
        ctx->r1 = SIGNED(ctx->r2) < 0X13 ? 1 : 0;
            goto L_800426AC;
    }
    // 0x80042688: slti        $at, $v0, 0x13
    ctx->r1 = SIGNED(ctx->r2) < 0X13 ? 1 : 0;
    // 0x8004268C: beq         $at, $zero, L_800426AC
    if (ctx->r1 == 0) {
        // 0x80042690: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_800426AC;
    }
    // 0x80042690: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80042694: lwc1        $f9, 0x73E0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X73E0);
    // 0x80042698: lwc1        $f8, 0x73E4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X73E4);
    // 0x8004269C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x800426A0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x800426A4: b           L_80042718
    // 0x800426A8: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
        goto L_80042718;
    // 0x800426A8: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
L_800426AC:
    // 0x800426AC: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    // 0x800426B0: beq         $v0, $at, L_800426CC
    if (ctx->r2 == ctx->r1) {
        // 0x800426B4: addiu       $at, $zero, 0x84
        ctx->r1 = ADD32(0, 0X84);
            goto L_800426CC;
    }
    // 0x800426B4: addiu       $at, $zero, 0x84
    ctx->r1 = ADD32(0, 0X84);
    // 0x800426B8: beq         $v0, $at, L_800426CC
    if (ctx->r2 == ctx->r1) {
        // 0x800426BC: addiu       $at, $zero, 0x85
        ctx->r1 = ADD32(0, 0X85);
            goto L_800426CC;
    }
    // 0x800426BC: addiu       $at, $zero, 0x85
    ctx->r1 = ADD32(0, 0X85);
    // 0x800426C0: beq         $v0, $at, L_800426CC
    if (ctx->r2 == ctx->r1) {
        // 0x800426C4: addiu       $at, $zero, 0x86
        ctx->r1 = ADD32(0, 0X86);
            goto L_800426CC;
    }
    // 0x800426C4: addiu       $at, $zero, 0x86
    ctx->r1 = ADD32(0, 0X86);
    // 0x800426C8: bne         $v0, $at, L_80042718
    if (ctx->r2 != ctx->r1) {
        // 0x800426CC: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_80042718;
    }
L_800426CC:
    // 0x800426CC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800426D0: lwc1        $f16, 0x73E8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X73E8);
    // 0x800426D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800426D8: mul.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800426DC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x800426E0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800426E4: nop

    // 0x800426E8: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800426EC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800426F0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800426F4: nop

    // 0x800426F8: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800426FC: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80042700: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80042704: jal         0x8001D4C0
    // 0x80042708: nop

    func_8001D4C0(rdram, ctx);
        goto after_2;
    // 0x80042708: nop

    after_2:
    // 0x8004270C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80042710: nop

    // 0x80042714: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
L_80042718:
    // 0x80042718: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8004271C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80042720: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80042724: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80042728: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004272C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80042730: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80042734: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x80042738: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8004273C: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x80042740: jr          $ra
    // 0x80042744: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
    return;
    // 0x80042744: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
;}
RECOMP_FUNC void func_80042748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042748: sll         $a3, $a0, 24
    ctx->r7 = S32(ctx->r4 << 24);
    // 0x8004274C: sra         $t6, $a3, 24
    ctx->r14 = S32(SIGNED(ctx->r7) >> 24);
    // 0x80042750: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80042754: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80042758: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8004275C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80042760: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80042764: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80042768: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004276C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80042770: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80042774: lb          $t8, 0x27($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X27);
    // 0x80042778: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004277C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80042780: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80042784: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80042788: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004278C: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x80042790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80042794: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80042798: lbu         $a1, -0x29E8($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X29E8);
    // 0x8004279C: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    // 0x800427A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800427A4: jal         0x800422B4
    // 0x800427A8: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    func_800422B4(rdram, ctx);
        goto after_0;
    // 0x800427A8: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    after_0:
    // 0x800427AC: lb          $a2, 0x2B($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X2B);
    // 0x800427B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800427B4: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x800427B8: slti        $at, $a2, 0xB
    ctx->r1 = SIGNED(ctx->r6) < 0XB ? 1 : 0;
    // 0x800427BC: beq         $at, $zero, L_800427F8
    if (ctx->r1 == 0) {
        // 0x800427C0: sra         $t0, $v1, 16
        ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
            goto L_800427F8;
    }
    // 0x800427C0: sra         $t0, $v1, 16
    ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
    // 0x800427C4: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    // 0x800427C8: jal         0x80042AEC
    // 0x800427CC: sh          $t0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r8;
    func_80042AEC(rdram, ctx);
        goto after_1;
    // 0x800427CC: sh          $t0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r8;
    after_1:
    // 0x800427D0: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x800427D4: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x800427D8: lbu         $t1, 0x7648($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X7648);
    // 0x800427DC: lh          $v1, 0x1E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1E);
    // 0x800427E0: nop

    // 0x800427E4: and         $t2, $t1, $v1
    ctx->r10 = ctx->r9 & ctx->r3;
    // 0x800427E8: bne         $t2, $zero, L_800427FC
    if (ctx->r10 != 0) {
        // 0x800427EC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800427FC;
    }
    // 0x800427EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800427F0: b           L_800427FC
    // 0x800427F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800427FC;
    // 0x800427F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800427F8:
    // 0x800427F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800427FC:
    // 0x800427FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80042800: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80042804: jr          $ra
    // 0x80042808: nop

    return;
    // 0x80042808: nop

;}
RECOMP_FUNC void func_8004280C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004280C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80042810: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80042814: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80042818: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8004281C: sll         $s2, $a0, 24
    ctx->r18 = S32(ctx->r4 << 24);
    // 0x80042820: sll         $s3, $a1, 24
    ctx->r19 = S32(ctx->r5 << 24);
    // 0x80042824: sll         $s4, $a2, 24
    ctx->r20 = S32(ctx->r6 << 24);
    // 0x80042828: sra         $t8, $s4, 24
    ctx->r24 = S32(SIGNED(ctx->r20) >> 24);
    // 0x8004282C: sra         $t7, $s3, 24
    ctx->r15 = S32(SIGNED(ctx->r19) >> 24);
    // 0x80042830: sra         $t6, $s2, 24
    ctx->r14 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80042834: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80042838: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x8004283C: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x80042840: or          $s4, $t8, $zero
    ctx->r20 = ctx->r24 | 0;
    // 0x80042844: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80042848: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004284C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80042850: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80042854: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80042858: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004285C: sll         $s0, $s1, 24
    ctx->r16 = S32(ctx->r17 << 24);
L_80042860:
    // 0x80042860: sra         $t1, $s0, 24
    ctx->r9 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80042864: sll         $a2, $t1, 24
    ctx->r6 = S32(ctx->r9 << 24);
    // 0x80042868: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x8004286C: sll         $a1, $s3, 24
    ctx->r5 = S32(ctx->r19 << 24);
    // 0x80042870: sra         $t0, $a1, 24
    ctx->r8 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80042874: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80042878: sra         $t2, $a2, 24
    ctx->r10 = S32(SIGNED(ctx->r6) >> 24);
    // 0x8004287C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x80042880: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80042884: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80042888: jal         0x80042748
    // 0x8004288C: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    func_80042748(rdram, ctx);
        goto after_0;
    // 0x8004288C: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    after_0:
    // 0x80042890: bne         $v0, $zero, L_800428CC
    if (ctx->r2 != 0) {
        // 0x80042894: sll         $a0, $s2, 24
        ctx->r4 = S32(ctx->r18 << 24);
            goto L_800428CC;
    }
    // 0x80042894: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x80042898: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x8004289C: sll         $a2, $s4, 24
    ctx->r6 = S32(ctx->r20 << 24);
    // 0x800428A0: sra         $t5, $a2, 24
    ctx->r13 = S32(SIGNED(ctx->r6) >> 24);
    // 0x800428A4: sra         $t4, $a1, 24
    ctx->r12 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800428A8: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800428AC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x800428B0: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x800428B4: jal         0x80042748
    // 0x800428B8: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    func_80042748(rdram, ctx);
        goto after_1;
    // 0x800428B8: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_1:
    // 0x800428BC: bne         $v0, $zero, L_800428D0
    if (ctx->r2 != 0) {
        // 0x800428C0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800428D0;
    }
    // 0x800428C0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800428C4: b           L_800428E8
    // 0x800428C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800428E8;
    // 0x800428C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800428CC:
    // 0x800428CC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800428D0:
    // 0x800428D0: sll         $t6, $s1, 16
    ctx->r14 = S32(ctx->r17 << 16);
    // 0x800428D4: sra         $s1, $t6, 16
    ctx->r17 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800428D8: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x800428DC: bne         $at, $zero, L_80042860
    if (ctx->r1 != 0) {
        // 0x800428E0: sll         $s0, $s1, 24
        ctx->r16 = S32(ctx->r17 << 24);
            goto L_80042860;
    }
    // 0x800428E0: sll         $s0, $s1, 24
    ctx->r16 = S32(ctx->r17 << 24);
    // 0x800428E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800428E8:
    // 0x800428E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800428EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800428F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800428F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800428F8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800428FC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80042900: jr          $ra
    // 0x80042904: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80042904: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80042908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042908: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004290C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80042910: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x80042914: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80042918: sll         $s2, $a1, 24
    ctx->r18 = S32(ctx->r5 << 24);
    // 0x8004291C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80042920: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80042924: sll         $s4, $a2, 24
    ctx->r20 = S32(ctx->r6 << 24);
    // 0x80042928: sra         $t8, $s2, 24
    ctx->r24 = S32(SIGNED(ctx->r18) >> 24);
    // 0x8004292C: sll         $s0, $t7, 16
    ctx->r16 = S32(ctx->r15 << 16);
    // 0x80042930: sra         $t9, $s4, 24
    ctx->r25 = S32(SIGNED(ctx->r20) >> 24);
    // 0x80042934: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80042938: sll         $t0, $a3, 24
    ctx->r8 = S32(ctx->r7 << 24);
    // 0x8004293C: sra         $t2, $s0, 16
    ctx->r10 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80042940: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80042944: sra         $t1, $t0, 24
    ctx->r9 = S32(SIGNED(ctx->r8) >> 24);
    // 0x80042948: or          $s4, $t9, $zero
    ctx->r20 = ctx->r25 | 0;
    // 0x8004294C: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    // 0x80042950: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80042954: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80042958: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8004295C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80042960: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80042964: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80042968: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8004296C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80042970: beq         $at, $zero, L_800429CC
    if (ctx->r1 == 0) {
        // 0x80042974: or          $s0, $t2, $zero
        ctx->r16 = ctx->r10 | 0;
            goto L_800429CC;
    }
    // 0x80042974: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80042978: lh          $s5, 0x42($sp)
    ctx->r21 = MEM_H(ctx->r29, 0X42);
    // 0x8004297C: andi        $s3, $t1, 0xFF
    ctx->r19 = ctx->r9 & 0XFF;
L_80042980:
    // 0x80042980: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x80042984: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80042988: sll         $a3, $s5, 16
    ctx->r7 = S32(ctx->r21 << 16);
    // 0x8004298C: sra         $t5, $a3, 16
    ctx->r13 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80042990: sra         $t4, $a1, 24
    ctx->r12 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80042994: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80042998: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8004299C: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x800429A0: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x800429A4: jal         0x80042610
    // 0x800429A8: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    func_80042610(rdram, ctx);
        goto after_0;
    // 0x800429A8: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    after_0:
    // 0x800429AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800429B0: sll         $t8, $s0, 16
    ctx->r24 = S32(ctx->r16 << 16);
    // 0x800429B4: sra         $s0, $t8, 16
    ctx->r16 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800429B8: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x800429BC: slt         $at, $s0, $s2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x800429C0: sll         $t6, $s1, 16
    ctx->r14 = S32(ctx->r17 << 16);
    // 0x800429C4: bne         $at, $zero, L_80042980
    if (ctx->r1 != 0) {
        // 0x800429C8: sra         $s1, $t6, 16
        ctx->r17 = S32(SIGNED(ctx->r14) >> 16);
            goto L_80042980;
    }
    // 0x800429C8: sra         $s1, $t6, 16
    ctx->r17 = S32(SIGNED(ctx->r14) >> 16);
L_800429CC:
    // 0x800429CC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800429D0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x800429D4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800429D8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800429DC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800429E0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800429E4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800429E8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800429EC: jr          $ra
    // 0x800429F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800429F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800429F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800429F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800429F8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800429FC: lh          $t7, 0x2A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2A);
    // 0x80042A00: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80042A04: sll         $a3, $a1, 24
    ctx->r7 = S32(ctx->r5 << 24);
    // 0x80042A08: sra         $t6, $a3, 24
    ctx->r14 = S32(SIGNED(ctx->r7) >> 24);
    // 0x80042A0C: lb          $a2, 0x23($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X23);
    // 0x80042A10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80042A14: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80042A18: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x80042A1C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80042A20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80042A24: jal         0x80042908
    // 0x80042A28: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80042908(rdram, ctx);
        goto after_0;
    // 0x80042A28: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x80042A2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80042A30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80042A34: jr          $ra
    // 0x80042A38: nop

    return;
    // 0x80042A38: nop

;}
RECOMP_FUNC void func_80042A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042A3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80042A40: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80042A44: lh          $t7, 0x2A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2A);
    // 0x80042A48: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80042A4C: sll         $a3, $a1, 24
    ctx->r7 = S32(ctx->r5 << 24);
    // 0x80042A50: sra         $t6, $a3, 24
    ctx->r14 = S32(SIGNED(ctx->r7) >> 24);
    // 0x80042A54: lb          $a2, 0x23($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X23);
    // 0x80042A58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80042A5C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80042A60: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x80042A64: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80042A68: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x80042A6C: jal         0x80042908
    // 0x80042A70: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80042908(rdram, ctx);
        goto after_0;
    // 0x80042A70: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x80042A74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80042A78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80042A7C: jr          $ra
    // 0x80042A80: nop

    return;
    // 0x80042A80: nop

;}
RECOMP_FUNC void func_80042A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042A8C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80042A90: sll         $t8, $a1, 24
    ctx->r24 = S32(ctx->r5 << 24);
    // 0x80042A94: sra         $a1, $t8, 24
    ctx->r5 = S32(SIGNED(ctx->r24) >> 24);
    // 0x80042A98: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80042A9C: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x80042AA0: slti        $at, $a1, 0xB
    ctx->r1 = SIGNED(ctx->r5) < 0XB ? 1 : 0;
    // 0x80042AA4: bne         $at, $zero, L_80042AB4
    if (ctx->r1 != 0) {
        // 0x80042AA8: sra         $a0, $t6, 24
        ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
            goto L_80042AB4;
    }
    // 0x80042AA8: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80042AAC: jr          $ra
    // 0x80042AB0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80042AB0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80042AB4:
    // 0x80042AB4: sll         $t0, $a0, 5
    ctx->r8 = S32(ctx->r4 << 5);
    // 0x80042AB8: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x80042ABC: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x80042AC0: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x80042AC4: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x80042AC8: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x80042ACC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80042AD0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80042AD4: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x80042AD8: lbu         $t3, -0x4E3C($v0)
    ctx->r11 = MEM_BU(ctx->r2, -0X4E3C);
    // 0x80042ADC: nop

    // 0x80042AE0: andi        $v0, $t3, 0x7F
    ctx->r2 = ctx->r11 & 0X7F;
    // 0x80042AE4: jr          $ra
    // 0x80042AE8: nop

    return;
    // 0x80042AE8: nop

;}
RECOMP_FUNC void func_80042AEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042AEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80042AF0: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80042AF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80042AF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80042AFC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80042B00: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x80042B04: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80042B08: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80042B0C: bne         $at, $zero, L_80042B1C
    if (ctx->r1 != 0) {
        // 0x80042B10: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80042B1C;
    }
    // 0x80042B10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80042B14: b           L_80042B30
    // 0x80042B18: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80042B30;
    // 0x80042B18: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80042B1C:
    // 0x80042B1C: jal         0x8004D4B0
    // 0x80042B20: nop

    func_8004D4B0(rdram, ctx);
        goto after_0;
    // 0x80042B20: nop

    after_0:
    // 0x80042B24: lbu         $t8, 0x4($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4);
    // 0x80042B28: nop

    // 0x80042B2C: andi        $v0, $t8, 0x7F
    ctx->r2 = ctx->r24 & 0X7F;
L_80042B30:
    // 0x80042B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80042B34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80042B38: jr          $ra
    // 0x80042B3C: nop

    return;
    // 0x80042B3C: nop

;}
RECOMP_FUNC void func_80042B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042B40: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80042B44: sll         $t8, $a1, 24
    ctx->r24 = S32(ctx->r5 << 24);
    // 0x80042B48: sra         $a1, $t8, 24
    ctx->r5 = S32(SIGNED(ctx->r24) >> 24);
    // 0x80042B4C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80042B50: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x80042B54: slti        $at, $a1, 0xB
    ctx->r1 = SIGNED(ctx->r5) < 0XB ? 1 : 0;
    // 0x80042B58: bne         $at, $zero, L_80042B68
    if (ctx->r1 != 0) {
        // 0x80042B5C: sra         $a0, $t6, 24
        ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
            goto L_80042B68;
    }
    // 0x80042B5C: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80042B60: jr          $ra
    // 0x80042B64: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80042B64: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80042B68:
    // 0x80042B68: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x80042B6C: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x80042B70: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80042B74: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x80042B78: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80042B7C: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x80042B80: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80042B84: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x80042B88: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80042B8C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80042B90: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80042B94: lbu         $t1, -0x2CEF($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X2CEF);
    // 0x80042B98: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x80042B9C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80042BA0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80042BA4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80042BA8: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80042BAC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80042BB0: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80042BB4: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x80042BB8: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x80042BBC: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x80042BC0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80042BC4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80042BC8: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x80042BCC: lbu         $t6, -0x525C($v0)
    ctx->r14 = MEM_BU(ctx->r2, -0X525C);
    // 0x80042BD0: nop

    // 0x80042BD4: andi        $v0, $t6, 0x7F
    ctx->r2 = ctx->r14 & 0X7F;
    // 0x80042BD8: jr          $ra
    // 0x80042BDC: nop

    return;
    // 0x80042BDC: nop

;}
RECOMP_FUNC void func_80042BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042BE0: sll         $a2, $a0, 24
    ctx->r6 = S32(ctx->r4 << 24);
    // 0x80042BE4: sra         $t6, $a2, 24
    ctx->r14 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80042BE8: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80042BEC: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80042BF0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80042BF4: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80042BF8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80042BFC: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80042C00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80042C04: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80042C08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80042C0C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80042C10: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80042C14: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80042C18: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x80042C1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80042C20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80042C24: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80042C28: lbu         $a0, -0x2CF0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2CF0);
    // 0x80042C2C: jal         0x80042C44
    // 0x80042C30: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80042C44(rdram, ctx);
        goto after_0;
    // 0x80042C30: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_0:
    // 0x80042C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80042C38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80042C3C: jr          $ra
    // 0x80042C40: nop

    return;
    // 0x80042C40: nop

;}
RECOMP_FUNC void func_80042C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042C44: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80042C48: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80042C4C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80042C50: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x80042C54: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x80042C58: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x80042C5C: sra         $t0, $t8, 1
    ctx->r8 = S32(SIGNED(ctx->r24) >> 1);
    // 0x80042C60: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80042C64: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80042C68: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x80042C6C: lbu         $v1, 0x7468($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7468);
    // 0x80042C70: andi        $t2, $t8, 0x1
    ctx->r10 = ctx->r24 & 0X1;
    // 0x80042C74: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80042C78: beq         $t2, $zero, L_80042C8C
    if (ctx->r10 == 0) {
        // 0x80042C7C: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_80042C8C;
    }
    // 0x80042C7C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80042C80: srl         $t3, $v1, 4
    ctx->r11 = S32(U32(ctx->r3) >> 4);
    // 0x80042C84: jr          $ra
    // 0x80042C88: andi        $v0, $t3, 0xFF
    ctx->r2 = ctx->r11 & 0XFF;
    return;
    // 0x80042C88: andi        $v0, $t3, 0xFF
    ctx->r2 = ctx->r11 & 0XFF;
L_80042C8C:
    // 0x80042C8C: or          $t5, $v1, $zero
    ctx->r13 = ctx->r3 | 0;
    // 0x80042C90: andi        $v1, $t5, 0xF
    ctx->r3 = ctx->r13 & 0XF;
    // 0x80042C94: jr          $ra
    // 0x80042C98: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80042C98: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80042C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042C9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80042CA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80042CA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80042CA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80042CAC: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x80042CB0: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x80042CB4: jal         0x8004DCB0
    // 0x80042CB8: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    func_8004DCB0(rdram, ctx);
        goto after_0;
    // 0x80042CB8: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    after_0:
    // 0x80042CBC: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x80042CC0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80042CC4: jal         0x80042D1C
    // 0x80042CC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80042D1C(rdram, ctx);
        goto after_1;
    // 0x80042CC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80042CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80042CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80042CD4: jr          $ra
    // 0x80042CD8: nop

    return;
    // 0x80042CD8: nop

;}
RECOMP_FUNC void func_80042CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042CDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80042CE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80042CE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80042CE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80042CEC: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x80042CF0: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x80042CF4: jal         0x8004DCB0
    // 0x80042CF8: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    func_8004DCB0(rdram, ctx);
        goto after_0;
    // 0x80042CF8: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    after_0:
    // 0x80042CFC: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x80042D00: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80042D04: jal         0x80042D1C
    // 0x80042D08: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80042D1C(rdram, ctx);
        goto after_1;
    // 0x80042D08: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x80042D0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80042D10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80042D14: jr          $ra
    // 0x80042D18: nop

    return;
    // 0x80042D18: nop

;}
RECOMP_FUNC void func_80042D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042D1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80042D20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80042D24: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80042D28: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80042D2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80042D30: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80042D34: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80042D38: jal         0x8004D880
    // 0x80042D3C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8004D880(rdram, ctx);
        goto after_0;
    // 0x80042D3C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80042D40: lb          $t6, 0x33($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X33);
    // 0x80042D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80042D48: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x80042D4C: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x80042D50: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x80042D54: bne         $at, $zero, L_80042DFC
    if (ctx->r1 != 0) {
        // 0x80042D58: andi        $a3, $v1, 0xFF
        ctx->r7 = ctx->r3 & 0XFF;
            goto L_80042DFC;
    }
    // 0x80042D58: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    // 0x80042D5C: addiu       $a2, $a3, -0x2
    ctx->r6 = ADD32(ctx->r7, -0X2);
    // 0x80042D60: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x80042D64: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80042D68: jal         0x8004D9DC
    // 0x80042D6C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8004D9DC(rdram, ctx);
        goto after_1;
    // 0x80042D6C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_1:
    // 0x80042D70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80042D74: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80042D78: jal         0x8004D9DC
    // 0x80042D7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004D9DC(rdram, ctx);
        goto after_2;
    // 0x80042D7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80042D80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80042D84: jal         0x8004D880
    // 0x80042D88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8004D880(rdram, ctx);
        goto after_3;
    // 0x80042D88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x80042D8C: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80042D90: sb          $v1, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r3;
    // 0x80042D94: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
    // 0x80042D98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80042D9C: jal         0x8004D9DC
    // 0x80042DA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8004D9DC(rdram, ctx);
        goto after_4;
    // 0x80042DA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80042DA4: lbu         $a2, 0x26($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X26);
    // 0x80042DA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80042DAC: jal         0x8004D9DC
    // 0x80042DB0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004D9DC(rdram, ctx);
        goto after_5;
    // 0x80042DB0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x80042DB4: lb          $t9, 0x2B($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X2B);
    // 0x80042DB8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80042DBC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80042DC0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80042DC4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80042DC8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80042DCC: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80042DD0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80042DD4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80042DD8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80042DDC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80042DE0: addiu       $t1, $t1, -0x2CF0
    ctx->r9 = ADD32(ctx->r9, -0X2CF0);
    // 0x80042DE4: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x80042DE8: lbu         $t2, 0x839($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X839);
    // 0x80042DEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80042DF0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80042DF4: b           L_80042E50
    // 0x80042DF8: sb          $t3, 0x839($v1)
    MEM_B(0X839, ctx->r3) = ctx->r11;
        goto L_80042E50;
    // 0x80042DF8: sb          $t3, 0x839($v1)
    MEM_B(0X839, ctx->r3) = ctx->r11;
L_80042DFC:
    // 0x80042DFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80042E00: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80042E04: jal         0x8004D9DC
    // 0x80042E08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004D9DC(rdram, ctx);
        goto after_6;
    // 0x80042E08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x80042E0C: lb          $t4, 0x2B($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X2B);
    // 0x80042E10: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80042E14: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80042E18: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80042E1C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80042E20: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80042E24: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80042E28: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80042E2C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80042E30: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80042E34: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80042E38: addiu       $t6, $t6, -0x2CF0
    ctx->r14 = ADD32(ctx->r14, -0X2CF0);
    // 0x80042E3C: addu        $v1, $t5, $t6
    ctx->r3 = ADD32(ctx->r13, ctx->r14);
    // 0x80042E40: lbu         $t7, 0x838($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X838);
    // 0x80042E44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80042E48: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80042E4C: sb          $t8, 0x838($v1)
    MEM_B(0X838, ctx->r3) = ctx->r24;
L_80042E50:
    // 0x80042E50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80042E54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80042E58: jr          $ra
    // 0x80042E5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80042E5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80042E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042E60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80042E64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80042E68: sll         $s0, $a0, 24
    ctx->r16 = S32(ctx->r4 << 24);
    // 0x80042E6C: sra         $t6, $s0, 24
    ctx->r14 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80042E70: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80042E74: sll         $a0, $t6, 24
    ctx->r4 = S32(ctx->r14 << 24);
    // 0x80042E78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80042E7C: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80042E80: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80042E84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80042E88: jal         0x80047B54
    // 0x80042E8C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80047B54(rdram, ctx);
        goto after_0;
    // 0x80042E8C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x80042E90: beq         $v0, $zero, L_80042F18
    if (ctx->r2 == 0) {
        // 0x80042E94: sll         $a0, $s0, 24
        ctx->r4 = S32(ctx->r16 << 24);
            goto L_80042F18;
    }
    // 0x80042E94: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
    // 0x80042E98: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
    // 0x80042E9C: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80042EA0: jal         0x80042FEC
    // 0x80042EA4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80042FEC(rdram, ctx);
        goto after_1;
    // 0x80042EA4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
    // 0x80042EA8: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80042EAC: beq         $at, $zero, L_80042F38
    if (ctx->r1 == 0) {
        // 0x80042EB0: sll         $a0, $s0, 24
        ctx->r4 = S32(ctx->r16 << 24);
            goto L_80042F38;
    }
    // 0x80042EB0: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
    // 0x80042EB4: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80042EB8: jal         0x800430C8
    // 0x80042EBC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_800430C8(rdram, ctx);
        goto after_2;
    // 0x80042EBC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_2:
    // 0x80042EC0: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x80042EC4: beq         $at, $zero, L_80042F38
    if (ctx->r1 == 0) {
        // 0x80042EC8: sll         $a0, $s0, 24
        ctx->r4 = S32(ctx->r16 << 24);
            goto L_80042F38;
    }
    // 0x80042EC8: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
    // 0x80042ECC: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80042ED0: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x80042ED4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80042ED8: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x80042EDC: jal         0x8004237C
    // 0x80042EE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004237C(rdram, ctx);
        goto after_3;
    // 0x80042EE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x80042EE4: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x80042EE8: beq         $t1, $zero, L_80042F10
    if (ctx->r9 == 0) {
        // 0x80042EEC: sll         $a0, $s0, 24
        ctx->r4 = S32(ctx->r16 << 24);
            goto L_80042F10;
    }
    // 0x80042EEC: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
    // 0x80042EF0: sra         $t2, $a0, 24
    ctx->r10 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80042EF4: jal         0x8004328C
    // 0x80042EF8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_8004328C(rdram, ctx);
        goto after_4;
    // 0x80042EF8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_4:
    // 0x80042EFC: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80042F00: bne         $at, $zero, L_80042F3C
    if (ctx->r1 != 0) {
        // 0x80042F04: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80042F3C;
    }
    // 0x80042F04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80042F08: b           L_80042F3C
    // 0x80042F0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80042F3C;
    // 0x80042F0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80042F10:
    // 0x80042F10: b           L_80042F3C
    // 0x80042F14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80042F3C;
    // 0x80042F14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80042F18:
    // 0x80042F18: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80042F1C: jal         0x800430C8
    // 0x80042F20: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_800430C8(rdram, ctx);
        goto after_5;
    // 0x80042F20: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_5:
    // 0x80042F24: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x80042F28: beq         $at, $zero, L_80042F3C
    if (ctx->r1 == 0) {
        // 0x80042F2C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80042F3C;
    }
    // 0x80042F2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80042F30: b           L_80042F3C
    // 0x80042F34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80042F3C;
    // 0x80042F34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80042F38:
    // 0x80042F38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80042F3C:
    // 0x80042F3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80042F40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80042F44: jr          $ra
    // 0x80042F48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80042F48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80042F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042F4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80042F50: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80042F54: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80042F58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80042F5C: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x80042F60: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x80042F64: jal         0x8004DCB0
    // 0x80042F68: nop

    func_8004DCB0(rdram, ctx);
        goto after_0;
    // 0x80042F68: nop

    after_0:
    // 0x80042F6C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80042F70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80042F74: jal         0x8004D880
    // 0x80042F78: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8004D880(rdram, ctx);
        goto after_1;
    // 0x80042F78: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_1:
    // 0x80042F7C: addiu       $a2, $v0, 0x1
    ctx->r6 = ADD32(ctx->r2, 0X1);
    // 0x80042F80: slti        $at, $a2, 0x2
    ctx->r1 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x80042F84: bne         $at, $zero, L_80042FA4
    if (ctx->r1 != 0) {
        // 0x80042F88: addiu       $a1, $zero, 0xA
        ctx->r5 = ADD32(0, 0XA);
            goto L_80042FA4;
    }
    // 0x80042F88: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80042F8C: lb          $a0, 0x23($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X23);
    // 0x80042F90: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x80042F94: jal         0x80042E60
    // 0x80042F98: nop

    func_80042E60(rdram, ctx);
        goto after_2;
    // 0x80042F98: nop

    after_2:
    // 0x80042F9C: b           L_80042FE0
    // 0x80042FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80042FE0;
    // 0x80042FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80042FA4:
    // 0x80042FA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80042FA8: jal         0x8004D880
    // 0x80042FAC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8004D880(rdram, ctx);
        goto after_3;
    // 0x80042FAC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_3:
    // 0x80042FB0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80042FB4: lb          $a0, 0x23($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X23);
    // 0x80042FB8: addu        $t6, $v0, $a2
    ctx->r14 = ADD32(ctx->r2, ctx->r6);
    // 0x80042FBC: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x80042FC0: bne         $at, $zero, L_80042FDC
    if (ctx->r1 != 0) {
        // 0x80042FC4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80042FDC;
    }
    // 0x80042FC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80042FC8: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x80042FCC: jal         0x80042E60
    // 0x80042FD0: nop

    func_80042E60(rdram, ctx);
        goto after_4;
    // 0x80042FD0: nop

    after_4:
    // 0x80042FD4: b           L_80042FE0
    // 0x80042FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80042FE0;
    // 0x80042FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80042FDC:
    // 0x80042FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80042FE0:
    // 0x80042FE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80042FE4: jr          $ra
    // 0x80042FE8: nop

    return;
    // 0x80042FE8: nop

;}
RECOMP_FUNC void func_80042FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042FEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80042FF0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80042FF4: sll         $s3, $a0, 24
    ctx->r19 = S32(ctx->r4 << 24);
    // 0x80042FF8: sra         $t6, $s3, 24
    ctx->r14 = S32(SIGNED(ctx->r19) >> 24);
    // 0x80042FFC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80043000: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80043004: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80043008: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8004300C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80043010: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80043014: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80043018: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004301C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80043020: andi        $s4, $t6, 0xFF
    ctx->r20 = ctx->r14 & 0XFF;
L_80043024:
    // 0x80043024: andi        $a0, $s4, 0xFF
    ctx->r4 = ctx->r20 & 0XFF;
    // 0x80043028: jal         0x8004DCB0
    // 0x8004302C: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    func_8004DCB0(rdram, ctx);
        goto after_0;
    // 0x8004302C: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    after_0:
    // 0x80043030: sll         $a1, $s3, 24
    ctx->r5 = S32(ctx->r19 << 24);
    // 0x80043034: sra         $t7, $a1, 24
    ctx->r15 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80043038: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004303C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80043040: jal         0x800431EC
    // 0x80043044: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800431EC(rdram, ctx);
        goto after_1;
    // 0x80043044: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80043048: beq         $v0, $zero, L_8004307C
    if (ctx->r2 == 0) {
        // 0x8004304C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8004307C;
    }
    // 0x8004304C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80043050: sll         $a1, $s3, 24
    ctx->r5 = S32(ctx->r19 << 24);
    // 0x80043054: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80043058: jal         0x80044268
    // 0x8004305C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80044268(rdram, ctx);
        goto after_2;
    // 0x8004305C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_2:
    // 0x80043060: beq         $v0, $zero, L_8004307C
    if (ctx->r2 == 0) {
        // 0x80043064: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8004307C;
    }
    // 0x80043064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80043068: jal         0x8004D880
    // 0x8004306C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8004D880(rdram, ctx);
        goto after_3;
    // 0x8004306C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_3:
    // 0x80043070: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x80043074: beq         $t9, $zero, L_80043088
    if (ctx->r25 == 0) {
        // 0x80043078: nop
    
            goto L_80043088;
    }
    // 0x80043078: nop

L_8004307C:
    // 0x8004307C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80043080: andi        $t0, $s2, 0xFF
    ctx->r8 = ctx->r18 & 0XFF;
    // 0x80043084: or          $s2, $t0, $zero
    ctx->r18 = ctx->r8 | 0;
L_80043088:
    // 0x80043088: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004308C: andi        $t1, $s1, 0xFF
    ctx->r9 = ctx->r17 & 0XFF;
    // 0x80043090: slti        $at, $t1, 0xB
    ctx->r1 = SIGNED(ctx->r9) < 0XB ? 1 : 0;
    // 0x80043094: bne         $at, $zero, L_80043024
    if (ctx->r1 != 0) {
        // 0x80043098: or          $s1, $t1, $zero
        ctx->r17 = ctx->r9 | 0;
            goto L_80043024;
    }
    // 0x80043098: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x8004309C: sll         $v0, $s2, 24
    ctx->r2 = S32(ctx->r18 << 24);
    // 0x800430A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800430A4: sra         $t2, $v0, 24
    ctx->r10 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800430A8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800430AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800430B0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800430B4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800430B8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800430BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800430C0: jr          $ra
    // 0x800430C4: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    return;
    // 0x800430C4: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
;}
RECOMP_FUNC void func_800430C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800430C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800430CC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800430D0: sll         $s3, $a0, 24
    ctx->r19 = S32(ctx->r4 << 24);
    // 0x800430D4: sra         $t6, $s3, 24
    ctx->r14 = S32(SIGNED(ctx->r19) >> 24);
    // 0x800430D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800430DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800430E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800430E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800430E8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800430EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800430F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800430F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800430F8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800430FC: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80043100: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80043104: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80043108: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8004310C: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x80043110: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80043114: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x80043118: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004311C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80043120: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80043124: addu        $s5, $t7, $t8
    ctx->r21 = ADD32(ctx->r15, ctx->r24);
    // 0x80043128: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004312C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80043130: addiu       $s4, $zero, 0x2C
    ctx->r20 = ADD32(0, 0X2C);
L_80043134:
    // 0x80043134: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043138: sll         $a1, $s3, 24
    ctx->r5 = S32(ctx->r19 << 24);
    // 0x8004313C: sra         $t0, $a1, 24
    ctx->r8 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80043140: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80043144: mflo        $t9
    ctx->r25 = lo;
    // 0x80043148: addu        $s0, $s5, $t9
    ctx->r16 = ADD32(ctx->r21, ctx->r25);
    // 0x8004314C: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x80043150: jal         0x80043220
    // 0x80043154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80043220(rdram, ctx);
        goto after_0;
    // 0x80043154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80043158: beq         $v0, $zero, L_8004318C
    if (ctx->r2 == 0) {
        // 0x8004315C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8004318C;
    }
    // 0x8004315C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80043160: sll         $a1, $s3, 24
    ctx->r5 = S32(ctx->r19 << 24);
    // 0x80043164: sra         $t1, $a1, 24
    ctx->r9 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80043168: jal         0x8004429C
    // 0x8004316C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_8004429C(rdram, ctx);
        goto after_1;
    // 0x8004316C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_1:
    // 0x80043170: beq         $v0, $zero, L_8004318C
    if (ctx->r2 == 0) {
        // 0x80043174: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8004318C;
    }
    // 0x80043174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80043178: jal         0x8004D880
    // 0x8004317C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8004D880(rdram, ctx);
        goto after_2;
    // 0x8004317C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_2:
    // 0x80043180: andi        $t2, $v0, 0x4
    ctx->r10 = ctx->r2 & 0X4;
    // 0x80043184: beq         $t2, $zero, L_80043198
    if (ctx->r10 == 0) {
        // 0x80043188: nop
    
            goto L_80043198;
    }
    // 0x80043188: nop

L_8004318C:
    // 0x8004318C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80043190: andi        $t3, $s2, 0xFF
    ctx->r11 = ctx->r18 & 0XFF;
    // 0x80043194: or          $s2, $t3, $zero
    ctx->r18 = ctx->r11 | 0;
L_80043198:
    // 0x80043198: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004319C: andi        $t4, $s1, 0xFF
    ctx->r12 = ctx->r17 & 0XFF;
    // 0x800431A0: slti        $at, $t4, 0x10
    ctx->r1 = SIGNED(ctx->r12) < 0X10 ? 1 : 0;
    // 0x800431A4: bne         $at, $zero, L_80043134
    if (ctx->r1 != 0) {
        // 0x800431A8: or          $s1, $t4, $zero
        ctx->r17 = ctx->r12 | 0;
            goto L_80043134;
    }
    // 0x800431A8: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x800431AC: sll         $v0, $s2, 24
    ctx->r2 = S32(ctx->r18 << 24);
    // 0x800431B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800431B4: sra         $t5, $v0, 24
    ctx->r13 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800431B8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800431BC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800431C0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800431C4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800431C8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800431CC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800431D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800431D4: jr          $ra
    // 0x800431D8: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    return;
    // 0x800431D8: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
;}
RECOMP_FUNC void func_800431EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800431EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800431F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800431F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800431F8: jal         0x8004D880
    // 0x800431FC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004D880(rdram, ctx);
        goto after_0;
    // 0x800431FC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x80043200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80043204: beq         $v0, $zero, L_80043218
    if (ctx->r2 == 0) {
        // 0x80043208: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80043218;
    }
    // 0x80043208: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004320C: b           L_80043218
    // 0x80043210: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80043218;
    // 0x80043210: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80043214: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80043218:
    // 0x80043218: jr          $ra
    // 0x8004321C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8004321C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80043220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80043224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80043228: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004322C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80043230: jal         0x8004D880
    // 0x80043234: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8004D880(rdram, ctx);
        goto after_0;
    // 0x80043234: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80043238: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004323C: beq         $v0, $zero, L_8004325C
    if (ctx->r2 == 0) {
        // 0x80043240: nop
    
            goto L_8004325C;
    }
    // 0x80043240: nop

    // 0x80043244: jal         0x8004D880
    // 0x80043248: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004D880(rdram, ctx);
        goto after_1;
    // 0x80043248: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x8004324C: blez        $v0, L_8004327C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80043250: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8004327C;
    }
    // 0x80043250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80043254: b           L_8004327C
    // 0x80043258: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8004327C;
    // 0x80043258: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004325C:
    // 0x8004325C: jal         0x8004D880
    // 0x80043260: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8004D880(rdram, ctx);
        goto after_2;
    // 0x80043260: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x80043264: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80043268: bne         $at, $zero, L_8004327C
    if (ctx->r1 != 0) {
        // 0x8004326C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8004327C;
    }
    // 0x8004326C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80043270: b           L_8004327C
    // 0x80043274: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8004327C;
    // 0x80043274: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80043278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004327C:
    // 0x8004327C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80043280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80043284: jr          $ra
    // 0x80043288: nop

    return;
    // 0x80043288: nop

;}
RECOMP_FUNC void func_8004328C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004328C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80043290: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80043294: sll         $s1, $a0, 24
    ctx->r17 = S32(ctx->r4 << 24);
    // 0x80043298: sra         $t6, $s1, 24
    ctx->r14 = S32(SIGNED(ctx->r17) >> 24);
    // 0x8004329C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800432A0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800432A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800432A8: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x800432AC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800432B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800432B4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800432B8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800432BC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800432C0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800432C4: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
L_800432C8:
    // 0x800432C8: sll         $a1, $s2, 24
    ctx->r5 = S32(ctx->r18 << 24);
    // 0x800432CC: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800432D0: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800432D4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x800432D8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x800432DC: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x800432E0: jal         0x80042320
    // 0x800432E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80042320(rdram, ctx);
        goto after_0;
    // 0x800432E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800432E8: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x800432EC: beq         $t9, $zero, L_80043390
    if (ctx->r25 == 0) {
        // 0x800432F0: andi        $a0, $s1, 0xFF
        ctx->r4 = ctx->r17 & 0XFF;
            goto L_80043390;
    }
    // 0x800432F0: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x800432F4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800432F8: sll         $t0, $s3, 16
    ctx->r8 = S32(ctx->r19 << 16);
    // 0x800432FC: sra         $s3, $t0, 16
    ctx->r19 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80043300: jal         0x8004DCB0
    // 0x80043304: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    func_8004DCB0(rdram, ctx);
        goto after_1;
    // 0x80043304: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    after_1:
    // 0x80043308: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x8004330C: sra         $t2, $a1, 24
    ctx->r10 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80043310: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80043314: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x80043318: jal         0x80044268
    // 0x8004331C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80044268(rdram, ctx);
        goto after_2;
    // 0x8004331C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80043320: beq         $v0, $zero, L_80043384
    if (ctx->r2 == 0) {
        // 0x80043324: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80043384;
    }
    // 0x80043324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80043328: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x8004332C: sra         $t3, $a1, 24
    ctx->r11 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80043330: jal         0x8004429C
    // 0x80043334: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_8004429C(rdram, ctx);
        goto after_3;
    // 0x80043334: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_3:
    // 0x80043338: beq         $v0, $zero, L_80043384
    if (ctx->r2 == 0) {
        // 0x8004333C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80043384;
    }
    // 0x8004333C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80043340: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x80043344: sra         $t4, $a1, 24
    ctx->r12 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80043348: jal         0x800431EC
    // 0x8004334C: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_800431EC(rdram, ctx);
        goto after_4;
    // 0x8004334C: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_4:
    // 0x80043350: beq         $v0, $zero, L_80043384
    if (ctx->r2 == 0) {
        // 0x80043354: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80043384;
    }
    // 0x80043354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80043358: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x8004335C: sra         $t5, $a1, 24
    ctx->r13 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80043360: jal         0x80043220
    // 0x80043364: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_80043220(rdram, ctx);
        goto after_5;
    // 0x80043364: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_5:
    // 0x80043368: beq         $v0, $zero, L_80043384
    if (ctx->r2 == 0) {
        // 0x8004336C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80043384;
    }
    // 0x8004336C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80043370: jal         0x8004D880
    // 0x80043374: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8004D880(rdram, ctx);
        goto after_6;
    // 0x80043374: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_6:
    // 0x80043378: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x8004337C: beq         $t6, $zero, L_80043390
    if (ctx->r14 == 0) {
        // 0x80043380: nop
    
            goto L_80043390;
    }
    // 0x80043380: nop

L_80043384:
    // 0x80043384: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80043388: sll         $t7, $s4, 16
    ctx->r15 = S32(ctx->r20 << 16);
    // 0x8004338C: sra         $s4, $t7, 16
    ctx->r20 = S32(SIGNED(ctx->r15) >> 16);
L_80043390:
    // 0x80043390: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80043394: sll         $t9, $s2, 16
    ctx->r25 = S32(ctx->r18 << 16);
    // 0x80043398: sra         $s2, $t9, 16
    ctx->r18 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8004339C: slti        $at, $s2, 0x10
    ctx->r1 = SIGNED(ctx->r18) < 0X10 ? 1 : 0;
    // 0x800433A0: bne         $at, $zero, L_800432C8
    if (ctx->r1 != 0) {
        // 0x800433A4: sll         $a0, $s1, 24
        ctx->r4 = S32(ctx->r17 << 24);
            goto L_800432C8;
    }
    // 0x800433A4: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x800433A8: subu        $v0, $s3, $s4
    ctx->r2 = SUB32(ctx->r19, ctx->r20);
    // 0x800433AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800433B0: sll         $t1, $v0, 24
    ctx->r9 = S32(ctx->r2 << 24);
    // 0x800433B4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800433B8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800433BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800433C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800433C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800433C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800433CC: jr          $ra
    // 0x800433D0: sra         $v0, $t1, 24
    ctx->r2 = S32(SIGNED(ctx->r9) >> 24);
    return;
    // 0x800433D0: sra         $v0, $t1, 24
    ctx->r2 = S32(SIGNED(ctx->r9) >> 24);
;}
RECOMP_FUNC void func_800433D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800433D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800433D8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800433DC: sll         $s3, $a0, 24
    ctx->r19 = S32(ctx->r4 << 24);
    // 0x800433E0: sra         $t6, $s3, 24
    ctx->r14 = S32(SIGNED(ctx->r19) >> 24);
    // 0x800433E4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800433E8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800433EC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800433F0: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x800433F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800433F8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800433FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80043400: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80043404: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80043408: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
L_8004340C:
    // 0x8004340C: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80043410: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80043414: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80043418: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8004341C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80043420: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x80043424: jal         0x80042320
    // 0x80043428: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80042320(rdram, ctx);
        goto after_0;
    // 0x80043428: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8004342C: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x80043430: beq         $t9, $zero, L_80043478
    if (ctx->r25 == 0) {
        // 0x80043434: andi        $a0, $s3, 0xFF
        ctx->r4 = ctx->r19 & 0XFF;
            goto L_80043478;
    }
    // 0x80043434: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    // 0x80043438: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004343C: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x80043440: sra         $s1, $t0, 16
    ctx->r17 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80043444: jal         0x8004DCB0
    // 0x80043448: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_8004DCB0(rdram, ctx);
        goto after_1;
    // 0x80043448: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_1:
    // 0x8004344C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80043450: jal         0x8004D880
    // 0x80043454: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8004D880(rdram, ctx);
        goto after_2;
    // 0x80043454: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x80043458: beq         $v0, $zero, L_8004346C
    if (ctx->r2 == 0) {
        // 0x8004345C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004346C;
    }
    // 0x8004345C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80043460: b           L_8004346C
    // 0x80043464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004346C;
    // 0x80043464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80043468: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004346C:
    // 0x8004346C: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x80043470: sll         $t2, $s2, 16
    ctx->r10 = S32(ctx->r18 << 16);
    // 0x80043474: sra         $s2, $t2, 16
    ctx->r18 = S32(SIGNED(ctx->r10) >> 16);
L_80043478:
    // 0x80043478: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004347C: sll         $t4, $s0, 16
    ctx->r12 = S32(ctx->r16 << 16);
    // 0x80043480: sra         $s0, $t4, 16
    ctx->r16 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80043484: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x80043488: bne         $at, $zero, L_8004340C
    if (ctx->r1 != 0) {
        // 0x8004348C: sll         $a0, $s3, 24
        ctx->r4 = S32(ctx->r19 << 24);
            goto L_8004340C;
    }
    // 0x8004348C: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80043490: subu        $v0, $s1, $s2
    ctx->r2 = SUB32(ctx->r17, ctx->r18);
    // 0x80043494: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80043498: sll         $t6, $v0, 24
    ctx->r14 = S32(ctx->r2 << 24);
    // 0x8004349C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800434A0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800434A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800434A8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800434AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800434B0: jr          $ra
    // 0x800434B4: sra         $v0, $t6, 24
    ctx->r2 = S32(SIGNED(ctx->r14) >> 24);
    return;
    // 0x800434B4: sra         $v0, $t6, 24
    ctx->r2 = S32(SIGNED(ctx->r14) >> 24);
;}
RECOMP_FUNC void func_800434B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800434B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800434BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800434C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800434C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800434C8: jal         0x8004D880
    // 0x800434CC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8004D880(rdram, ctx);
        goto after_0;
    // 0x800434CC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x800434D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800434D4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x800434D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800434DC: jal         0x8004D9DC
    // 0x800434E0: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    func_8004D9DC(rdram, ctx);
        goto after_1;
    // 0x800434E0: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    after_1:
    // 0x800434E4: lbu         $a3, 0x27($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X27);
    // 0x800434E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800434EC: slti        $at, $a3, 0x3
    ctx->r1 = SIGNED(ctx->r7) < 0X3 ? 1 : 0;
    // 0x800434F0: bne         $at, $zero, L_80043538
    if (ctx->r1 != 0) {
        // 0x800434F4: addiu       $a1, $zero, 0xB
        ctx->r5 = ADD32(0, 0XB);
            goto L_80043538;
    }
    // 0x800434F4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x800434F8: jal         0x8004D9DC
    // 0x800434FC: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_8004D9DC(rdram, ctx);
        goto after_2;
    // 0x800434FC: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_2:
    // 0x80043500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80043504: jal         0x8004D880
    // 0x80043508: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8004D880(rdram, ctx);
        goto after_3;
    // 0x80043508: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x8004350C: addiu       $a3, $v0, 0x1
    ctx->r7 = ADD32(ctx->r2, 0X1);
    // 0x80043510: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    // 0x80043514: sb          $a3, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r7;
    // 0x80043518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8004351C: jal         0x8004D9DC
    // 0x80043520: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8004D9DC(rdram, ctx);
        goto after_4;
    // 0x80043520: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80043524: lbu         $a2, 0x26($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X26);
    // 0x80043528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8004352C: jal         0x8004D9DC
    // 0x80043530: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004D9DC(rdram, ctx);
        goto after_5;
    // 0x80043530: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x80043534: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_80043538:
    // 0x80043538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8004353C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80043540: jal         0x8004D9DC
    // 0x80043544: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    func_8004D9DC(rdram, ctx);
        goto after_6;
    // 0x80043544: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    after_6:
    // 0x80043548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8004354C: jal         0x8004D880
    // 0x80043550: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004D880(rdram, ctx);
        goto after_7;
    // 0x80043550: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_7:
    // 0x80043554: bne         $v0, $zero, L_80043574
    if (ctx->r2 != 0) {
        // 0x80043558: andi        $a3, $v0, 0xFF
        ctx->r7 = ctx->r2 & 0XFF;
            goto L_80043574;
    }
    // 0x80043558: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    // 0x8004355C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80043560: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80043564: jal         0x8004D9DC
    // 0x80043568: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004D9DC(rdram, ctx);
        goto after_8;
    // 0x80043568: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x8004356C: b           L_8004359C
    // 0x80043570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8004359C;
    // 0x80043570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80043574:
    // 0x80043574: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x80043578: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    // 0x8004357C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80043580: jal         0x8001D4C0
    // 0x80043584: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8001D4C0(rdram, ctx);
        goto after_9;
    // 0x80043584: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_9:
    // 0x80043588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8004358C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80043590: jal         0x8004D9DC
    // 0x80043594: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    func_8004D9DC(rdram, ctx);
        goto after_10;
    // 0x80043594: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    after_10:
    // 0x80043598: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8004359C:
    // 0x8004359C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800435A0: jr          $ra
    // 0x800435A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800435A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800435A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800435A8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800435AC: lb          $t1, -0x32A1($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X32A1);
    // 0x800435B0: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x800435B4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800435B8: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x800435BC: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x800435C0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800435C4: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x800435C8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800435CC: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x800435D0: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x800435D4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800435D8: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x800435DC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800435E0: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x800435E4: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x800435E8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800435EC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800435F0: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x800435F4: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x800435F8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800435FC: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80043600: sll         $t8, $a1, 24
    ctx->r24 = S32(ctx->r5 << 24);
    // 0x80043604: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x80043608: addiu       $t3, $t3, -0x2F80
    ctx->r11 = ADD32(ctx->r11, -0X2F80);
    // 0x8004360C: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80043610: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80043614: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x80043618: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x8004361C: addiu       $t5, $t5, -0x2CF0
    ctx->r13 = ADD32(ctx->r13, -0X2CF0);
    // 0x80043620: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80043624: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80043628: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8004362C: addu        $a2, $t4, $t5
    ctx->r6 = ADD32(ctx->r12, ctx->r13);
    // 0x80043630: addu        $t7, $v0, $t7
    ctx->r15 = ADD32(ctx->r2, ctx->r15);
    // 0x80043634: lb          $t8, 0x7($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X7);
    // 0x80043638: addu        $t6, $a2, $t9
    ctx->r14 = ADD32(ctx->r6, ctx->r25);
    // 0x8004363C: lbu         $v1, 0x308($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0X308);
    // 0x80043640: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80043644: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80043648: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x8004364C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80043650: subu        $t3, $t3, $v1
    ctx->r11 = SUB32(ctx->r11, ctx->r3);
    // 0x80043654: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80043658: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8004365C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80043660: subu        $t3, $t3, $v1
    ctx->r11 = SUB32(ctx->r11, ctx->r3);
    // 0x80043664: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80043668: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8004366C: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x80043670: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80043674: addu        $t0, $a2, $t3
    ctx->r8 = ADD32(ctx->r6, ctx->r11);
    // 0x80043678: subu        $t2, $t2, $v1
    ctx->r10 = SUB32(ctx->r10, ctx->r3);
    // 0x8004367C: lbu         $t4, 0x42($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X42);
    // 0x80043680: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x80043684: addu        $t1, $v0, $t9
    ctx->r9 = ADD32(ctx->r2, ctx->r25);
    // 0x80043688: addu        $a3, $t1, $t2
    ctx->r7 = ADD32(ctx->r9, ctx->r10);
    // 0x8004368C: sb          $t4, 0x4B1($a3)
    MEM_B(0X4B1, ctx->r7) = ctx->r12;
    // 0x80043690: lbu         $t5, 0x43($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X43);
    // 0x80043694: addiu       $a3, $a3, 0x4AE
    ctx->r7 = ADD32(ctx->r7, 0X4AE);
    // 0x80043698: sb          $t5, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r13;
    // 0x8004369C: lbu         $t6, 0x44($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X44);
    // 0x800436A0: nop

    // 0x800436A4: sb          $t6, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r14;
    // 0x800436A8: lbu         $t7, 0x45($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X45);
    // 0x800436AC: jr          $ra
    // 0x800436B0: sb          $t7, 0x5($a3)
    MEM_B(0X5, ctx->r7) = ctx->r15;
    return;
    // 0x800436B0: sb          $t7, 0x5($a3)
    MEM_B(0X5, ctx->r7) = ctx->r15;
;}
RECOMP_FUNC void func_800436B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800436B4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800436B8: lb          $t7, -0x32A1($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X32A1);
    // 0x800436BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800436C0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800436C4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800436C8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800436CC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800436D0: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800436D4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800436D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800436DC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800436E0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800436E4: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800436E8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800436EC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800436F0: addiu       $t9, $t9, -0x2F80
    ctx->r25 = ADD32(ctx->r25, -0X2F80);
    // 0x800436F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800436F8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800436FC: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80043700: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x80043704: lb          $a0, 0x1($t1)
    ctx->r4 = MEM_B(ctx->r9, 0X1);
    // 0x80043708: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8004370C: jal         0x80049A4C
    // 0x80043710: sb          $t6, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r14;
    func_80049A4C(rdram, ctx);
        goto after_0;
    // 0x80043710: sb          $t6, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r14;
    after_0:
    // 0x80043714: lb          $a1, 0x2B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X2B);
    // 0x80043718: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8004371C: bne         $v0, $zero, L_80043728
    if (ctx->r2 != 0) {
        // 0x80043720: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80043728;
    }
    // 0x80043720: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80043724: bne         $a1, $zero, L_800437EC
    if (ctx->r5 != 0) {
        // 0x80043728: sll         $t2, $a1, 2
        ctx->r10 = S32(ctx->r5 << 2);
            goto L_800437EC;
    }
L_80043728:
    // 0x80043728: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x8004372C: addu        $t2, $t2, $a1
    ctx->r10 = ADD32(ctx->r10, ctx->r5);
    // 0x80043730: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80043734: addu        $t2, $t2, $a1
    ctx->r10 = ADD32(ctx->r10, ctx->r5);
    // 0x80043738: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8004373C: addu        $t2, $t2, $a1
    ctx->r10 = ADD32(ctx->r10, ctx->r5);
    // 0x80043740: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80043744: addu        $t2, $t2, $a1
    ctx->r10 = ADD32(ctx->r10, ctx->r5);
    // 0x80043748: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8004374C: addiu       $t3, $t3, -0x2CF0
    ctx->r11 = ADD32(ctx->r11, -0X2CF0);
    // 0x80043750: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80043754: addu        $a3, $t1, $a1
    ctx->r7 = ADD32(ctx->r9, ctx->r5);
    // 0x80043758: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8004375C: addu        $t0, $t2, $t3
    ctx->r8 = ADD32(ctx->r10, ctx->r11);
    // 0x80043760: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
L_80043764:
    // 0x80043764: multu       $a0, $a1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043768: lb          $t4, 0x7($a3)
    ctx->r12 = MEM_B(ctx->r7, 0X7);
    // 0x8004376C: nop

    // 0x80043770: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80043774: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80043778: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8004377C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80043780: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80043784: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80043788: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8004378C: addu        $t6, $t1, $t5
    ctx->r14 = ADD32(ctx->r9, ctx->r13);
    // 0x80043790: mflo        $t7
    ctx->r15 = lo;
    // 0x80043794: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80043798: lbu         $t9, 0x4B1($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4B1);
    // 0x8004379C: multu       $a0, $a2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800437A0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800437A4: sll         $t5, $a0, 24
    ctx->r13 = S32(ctx->r4 << 24);
    // 0x800437A8: sra         $a0, $t5, 24
    ctx->r4 = S32(SIGNED(ctx->r13) >> 24);
    // 0x800437AC: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x800437B0: addiu       $v0, $v0, 0x4AE
    ctx->r2 = ADD32(ctx->r2, 0X4AE);
    // 0x800437B4: mflo        $t8
    ctx->r24 = lo;
    // 0x800437B8: addu        $v1, $t0, $t8
    ctx->r3 = ADD32(ctx->r8, ctx->r24);
    // 0x800437BC: sb          $t9, 0x42($v1)
    MEM_B(0X42, ctx->r3) = ctx->r25;
    // 0x800437C0: lbu         $t2, 0x2($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X2);
    // 0x800437C4: nop

    // 0x800437C8: sb          $t2, 0x43($v1)
    MEM_B(0X43, ctx->r3) = ctx->r10;
    // 0x800437CC: lbu         $t3, 0x4($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X4);
    // 0x800437D0: nop

    // 0x800437D4: sb          $t3, 0x44($v1)
    MEM_B(0X44, ctx->r3) = ctx->r11;
    // 0x800437D8: lbu         $t4, 0x5($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X5);
    // 0x800437DC: bne         $at, $zero, L_80043764
    if (ctx->r1 != 0) {
        // 0x800437E0: sb          $t4, 0x45($v1)
        MEM_B(0X45, ctx->r3) = ctx->r12;
            goto L_80043764;
    }
    // 0x800437E0: sb          $t4, 0x45($v1)
    MEM_B(0X45, ctx->r3) = ctx->r12;
    // 0x800437E4: b           L_80043800
    // 0x800437E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80043800;
    // 0x800437E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800437EC:
    // 0x800437EC: jal         0x80038C38
    // 0x800437F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038C38(rdram, ctx);
        goto after_1;
    // 0x800437F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800437F4: jal         0x80038B18
    // 0x800437F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038B18(rdram, ctx);
        goto after_2;
    // 0x800437F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x800437FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80043800:
    // 0x80043800: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80043804: jr          $ra
    // 0x80043808: nop

    return;
    // 0x80043808: nop

;}
RECOMP_FUNC void func_8004380C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004380C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80043810: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80043814: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80043818: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8004381C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80043820: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80043824: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80043828: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8004382C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80043830: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80043834: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80043838: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8004383C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80043840: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80043844: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x80043848: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8004384C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80043850: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x80043854: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80043858: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
L_8004385C:
    // 0x8004385C: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x80043860: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80043864: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x80043868: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8004386C: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x80043870: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80043874: addu        $a1, $v0, $t9
    ctx->r5 = ADD32(ctx->r2, ctx->r25);
    // 0x80043878: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8004387C:
    // 0x8004387C: multu       $a0, $t0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043880: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80043884: sll         $t3, $a0, 24
    ctx->r11 = S32(ctx->r4 << 24);
    // 0x80043888: sra         $a0, $t3, 24
    ctx->r4 = S32(SIGNED(ctx->r11) >> 24);
    // 0x8004388C: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x80043890: mflo        $t2
    ctx->r10 = lo;
    // 0x80043894: addu        $a2, $a1, $t2
    ctx->r6 = ADD32(ctx->r5, ctx->r10);
    // 0x80043898: sb          $t1, 0x4B1($a2)
    MEM_B(0X4B1, ctx->r6) = ctx->r9;
    // 0x8004389C: sb          $zero, 0x4B3($a2)
    MEM_B(0X4B3, ctx->r6) = 0;
    // 0x800438A0: sb          $zero, 0x4B2($a2)
    MEM_B(0X4B2, ctx->r6) = 0;
    // 0x800438A4: bne         $at, $zero, L_8004387C
    if (ctx->r1 != 0) {
        // 0x800438A8: sb          $zero, 0x4B0($a2)
        MEM_B(0X4B0, ctx->r6) = 0;
            goto L_8004387C;
    }
    // 0x800438A8: sb          $zero, 0x4B0($a2)
    MEM_B(0X4B0, ctx->r6) = 0;
    // 0x800438AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800438B0: sll         $t5, $v1, 24
    ctx->r13 = S32(ctx->r3 << 24);
    // 0x800438B4: sra         $v1, $t5, 24
    ctx->r3 = S32(SIGNED(ctx->r13) >> 24);
    // 0x800438B8: slti        $at, $v1, 0x24
    ctx->r1 = SIGNED(ctx->r3) < 0X24 ? 1 : 0;
    // 0x800438BC: bne         $at, $zero, L_8004385C
    if (ctx->r1 != 0) {
        // 0x800438C0: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_8004385C;
    }
    // 0x800438C0: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x800438C4: jr          $ra
    // 0x800438C8: nop

    return;
    // 0x800438C8: nop

;}
RECOMP_FUNC void func_800438CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800438CC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800438D0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800438D4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800438D8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800438DC: sll         $s2, $a0, 24
    ctx->r18 = S32(ctx->r4 << 24);
    // 0x800438E0: sll         $s4, $a1, 16
    ctx->r20 = S32(ctx->r5 << 16);
    // 0x800438E4: sll         $s5, $a3, 24
    ctx->r21 = S32(ctx->r7 << 24);
    // 0x800438E8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800438EC: sra         $t8, $s5, 24
    ctx->r24 = S32(SIGNED(ctx->r21) >> 24);
    // 0x800438F0: sra         $t7, $s4, 16
    ctx->r15 = S32(SIGNED(ctx->r20) >> 16);
    // 0x800438F4: sra         $t6, $s2, 24
    ctx->r14 = S32(SIGNED(ctx->r18) >> 24);
    // 0x800438F8: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x800438FC: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80043900: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80043904: lui         $s3, 0x801B
    ctx->r19 = S32(0X801B << 16);
    // 0x80043908: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x8004390C: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x80043910: or          $s4, $t7, $zero
    ctx->r20 = ctx->r15 | 0;
    // 0x80043914: or          $s5, $t8, $zero
    ctx->r21 = ctx->r24 | 0;
    // 0x80043918: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8004391C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80043920: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80043924: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80043928: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8004392C: addiu       $s3, $s3, -0x4280
    ctx->r19 = ADD32(ctx->r19, -0X4280);
    // 0x80043930: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80043934: addiu       $s6, $zero, 0x64
    ctx->r22 = ADD32(0, 0X64);
L_80043938:
    // 0x80043938: sll         $s0, $s1, 24
    ctx->r16 = S32(ctx->r17 << 24);
    // 0x8004393C: sra         $t0, $s0, 24
    ctx->r8 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80043940: sll         $a1, $t0, 24
    ctx->r5 = S32(ctx->r8 << 24);
    // 0x80043944: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x80043948: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8004394C: sra         $t1, $a1, 24
    ctx->r9 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80043950: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x80043954: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80043958: jal         0x8003D080
    // 0x8004395C: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    func_8003D080(rdram, ctx);
        goto after_0;
    // 0x8004395C: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    after_0:
    // 0x80043960: bne         $v0, $zero, L_80043980
    if (ctx->r2 != 0) {
        // 0x80043964: sll         $t2, $s1, 3
        ctx->r10 = S32(ctx->r17 << 3);
            goto L_80043980;
    }
    // 0x80043964: sll         $t2, $s1, 3
    ctx->r10 = S32(ctx->r17 << 3);
    // 0x80043968: addu        $s0, $s3, $t2
    ctx->r16 = ADD32(ctx->r19, ctx->r10);
    // 0x8004396C: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x80043970: addiu       $t5, $zero, 0x0
    ctx->r13 = ADD32(0, 0X0);
    // 0x80043974: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x80043978: b           L_80043A48
    // 0x8004397C: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
        goto L_80043A48;
    // 0x8004397C: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_80043980:
    // 0x80043980: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x80043984: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80043988: sll         $a3, $s4, 16
    ctx->r7 = S32(ctx->r20 << 16);
    // 0x8004398C: sra         $t7, $a3, 16
    ctx->r15 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80043990: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80043994: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80043998: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8004399C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800439A0: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x800439A4: jal         0x8004237C
    // 0x800439A8: andi        $a2, $s5, 0xFF
    ctx->r6 = ctx->r21 & 0XFF;
    func_8004237C(rdram, ctx);
        goto after_1;
    // 0x800439A8: andi        $a2, $s5, 0xFF
    ctx->r6 = ctx->r21 & 0XFF;
    after_1:
    // 0x800439AC: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x800439B0: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x800439B4: sll         $a3, $s4, 16
    ctx->r7 = S32(ctx->r20 << 16);
    // 0x800439B8: sra         $t0, $a3, 16
    ctx->r8 = S32(SIGNED(ctx->r7) >> 16);
    // 0x800439BC: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800439C0: sra         $t8, $s0, 16
    ctx->r24 = S32(SIGNED(ctx->r16) >> 16);
    // 0x800439C4: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x800439C8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x800439CC: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x800439D0: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x800439D4: jal         0x8003C7BC
    // 0x800439D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8003C7BC(rdram, ctx);
        goto after_2;
    // 0x800439D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x800439DC: sll         $t1, $v0, 3
    ctx->r9 = S32(ctx->r2 << 3);
    // 0x800439E0: div         $zero, $t1, $s6
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r22)));
    // 0x800439E4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800439E8: bne         $s6, $zero, L_800439F4
    if (ctx->r22 != 0) {
        // 0x800439EC: nop
    
            goto L_800439F4;
    }
    // 0x800439EC: nop

    // 0x800439F0: break       7
    do_break(2147760624);
L_800439F4:
    // 0x800439F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800439F8: bne         $s6, $at, L_80043A0C
    if (ctx->r22 != ctx->r1) {
        // 0x800439FC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80043A0C;
    }
    // 0x800439FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043A00: bne         $t1, $at, L_80043A0C
    if (ctx->r9 != ctx->r1) {
        // 0x80043A04: nop
    
            goto L_80043A0C;
    }
    // 0x80043A04: nop

    // 0x80043A08: break       6
    do_break(2147760648);
L_80043A0C:
    // 0x80043A0C: addiu       $a3, $zero, 0x1F
    ctx->r7 = ADD32(0, 0X1F);
    // 0x80043A10: mflo        $t2
    ctx->r10 = lo;
    // 0x80043A14: addu        $t4, $t2, $s0
    ctx->r12 = ADD32(ctx->r10, ctx->r16);
    // 0x80043A18: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x80043A1C: jal         0x80080A54
    // 0x80043A20: sra         $a0, $t4, 31
    ctx->r4 = S32(SIGNED(ctx->r12) >> 31);
    func_80080A54(rdram, ctx);
        goto after_3;
    // 0x80043A20: sra         $a0, $t4, 31
    ctx->r4 = S32(SIGNED(ctx->r12) >> 31);
    after_3:
    // 0x80043A24: sll         $t5, $s1, 3
    ctx->r13 = S32(ctx->r17 << 3);
    // 0x80043A28: addu        $s0, $s3, $t5
    ctx->r16 = ADD32(ctx->r19, ctx->r13);
    // 0x80043A2C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80043A30: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x80043A34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80043A38: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80043A3C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80043A40: jal         0x80080C44
    // 0x80043A44: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80080C44(rdram, ctx);
        goto after_4;
    // 0x80043A44: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_4:
L_80043A48:
    // 0x80043A48: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80043A4C: sra         $a0, $s1, 31
    ctx->r4 = S32(SIGNED(ctx->r17) >> 31);
    // 0x80043A50: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80043A54: jal         0x80080A54
    // 0x80043A58: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    func_80080A54(rdram, ctx);
        goto after_5;
    // 0x80043A58: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    after_5:
    // 0x80043A5C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80043A60: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x80043A64: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80043A68: or          $t8, $t6, $v0
    ctx->r24 = ctx->r14 | ctx->r2;
    // 0x80043A6C: or          $t9, $t7, $v1
    ctx->r25 = ctx->r15 | ctx->r3;
    // 0x80043A70: sll         $t4, $s1, 16
    ctx->r12 = S32(ctx->r17 << 16);
    // 0x80043A74: sltiu       $at, $t9, 0x1
    ctx->r1 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x80043A78: nor         $t2, $t8, $zero
    ctx->r10 = ~(ctx->r24 | 0);
    // 0x80043A7C: sra         $s1, $t4, 16
    ctx->r17 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80043A80: addu        $t2, $t2, $at
    ctx->r10 = ADD32(ctx->r10, ctx->r1);
    // 0x80043A84: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x80043A88: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x80043A8C: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80043A90: negu        $t3, $t9
    ctx->r11 = SUB32(0, ctx->r25);
    // 0x80043A94: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x80043A98: bne         $at, $zero, L_80043938
    if (ctx->r1 != 0) {
        // 0x80043A9C: sw          $t2, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r10;
            goto L_80043938;
    }
    // 0x80043A9C: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x80043AA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80043AA4: jal         0x8001CDFC
    // 0x80043AA8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8001CDFC(rdram, ctx);
        goto after_6;
    // 0x80043AA8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_6:
    // 0x80043AAC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80043AB0:
    // 0x80043AB0: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x80043AB4: addu        $s0, $s3, $t6
    ctx->r16 = ADD32(ctx->r19, ctx->r14);
    // 0x80043AB8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80043ABC: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x80043AC0: nor         $t0, $t8, $zero
    ctx->r8 = ~(ctx->r24 | 0);
    // 0x80043AC4: sltiu       $at, $t9, 0x1
    ctx->r1 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x80043AC8: addu        $a0, $t0, $at
    ctx->r4 = ADD32(ctx->r8, ctx->r1);
    // 0x80043ACC: negu        $a1, $t9
    ctx->r5 = SUB32(0, ctx->r25);
    // 0x80043AD0: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    // 0x80043AD4: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x80043AD8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80043ADC: jal         0x80080C44
    // 0x80043AE0: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    func_80080C44(rdram, ctx);
        goto after_7;
    // 0x80043AE0: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    after_7:
    // 0x80043AE4: addu        $t4, $s7, $s1
    ctx->r12 = ADD32(ctx->r23, ctx->r17);
    // 0x80043AE8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80043AEC: sll         $t5, $s1, 16
    ctx->r13 = S32(ctx->r17 << 16);
    // 0x80043AF0: sra         $s1, $t5, 16
    ctx->r17 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80043AF4: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x80043AF8: andi        $t3, $v1, 0x7F
    ctx->r11 = ctx->r3 & 0X7F;
    // 0x80043AFC: bne         $at, $zero, L_80043AB0
    if (ctx->r1 != 0) {
        // 0x80043B00: sb          $t3, 0x0($t4)
        MEM_B(0X0, ctx->r12) = ctx->r11;
            goto L_80043AB0;
    }
    // 0x80043B00: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    // 0x80043B04: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80043B08: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80043B0C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80043B10: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80043B14: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80043B18: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80043B1C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80043B20: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80043B24: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80043B28: jr          $ra
    // 0x80043B2C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80043B2C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80043B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043B30: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80043B34: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80043B38: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80043B3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80043B40: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80043B44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80043B48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80043B4C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80043B50: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80043B54: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80043B58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80043B5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80043B60: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80043B64: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80043B68: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80043B6C: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x80043B70: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80043B74: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80043B78: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80043B7C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80043B80: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80043B84: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80043B88: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80043B8C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80043B90: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80043B94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80043B98: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80043B9C: lb          $a0, 0x1($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X1);
    // 0x80043BA0: jal         0x8003EC2C
    // 0x80043BA4: nop

    func_8003EC2C(rdram, ctx);
        goto after_0;
    // 0x80043BA4: nop

    after_0:
    // 0x80043BA8: lh          $t9, 0x2($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2);
    // 0x80043BAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80043BB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80043BB4: jal         0x80042BE0
    // 0x80043BB8: sh          $t9, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r25;
    func_80042BE0(rdram, ctx);
        goto after_1;
    // 0x80043BB8: sh          $t9, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r25;
    after_1:
    // 0x80043BBC: lh          $a1, 0x5A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X5A);
    // 0x80043BC0: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x80043BC4: jal         0x8003C684
    // 0x80043BC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003C684(rdram, ctx);
        goto after_2;
    // 0x80043BC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80043BCC: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80043BD0: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80043BD4: jal         0x8003CB70
    // 0x80043BD8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8003CB70(rdram, ctx);
        goto after_3;
    // 0x80043BD8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_3:
    // 0x80043BDC: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x80043BE0: bgez        $s0, L_80043BF8
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80043BE4: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80043BF8;
    }
    // 0x80043BE4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80043BE8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80043BEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80043BF0: nop

    // 0x80043BF4: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80043BF8:
    // 0x80043BF8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80043BFC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80043C00: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80043C04: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80043C08: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80043C0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80043C10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80043C14: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80043C18: sub.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x80043C1C: jal         0x80042BE0
    // 0x80043C20: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    func_80042BE0(rdram, ctx);
        goto after_4;
    // 0x80043C20: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x80043C24: lh          $a1, 0x5A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X5A);
    // 0x80043C28: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x80043C2C: jal         0x8003C684
    // 0x80043C30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003C684(rdram, ctx);
        goto after_5;
    // 0x80043C30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x80043C34: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80043C38: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80043C3C: jal         0x8003CB70
    // 0x80043C40: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_8003CB70(rdram, ctx);
        goto after_6;
    // 0x80043C40: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_6:
    // 0x80043C44: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x80043C48: bgez        $s0, L_80043C60
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80043C4C: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80043C60;
    }
    // 0x80043C4C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80043C50: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80043C54: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80043C58: nop

    // 0x80043C5C: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_80043C60:
    // 0x80043C60: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80043C64: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80043C68: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80043C6C: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80043C70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80043C74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80043C78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80043C7C: mul.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80043C80: sub.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80043C84: jal         0x80042BE0
    // 0x80043C88: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    func_80042BE0(rdram, ctx);
        goto after_7;
    // 0x80043C88: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x80043C8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80043C90: jal         0x80042BE0
    // 0x80043C94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80042BE0(rdram, ctx);
        goto after_8;
    // 0x80043C94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x80043C98: lh          $a1, 0x5A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X5A);
    // 0x80043C9C: jal         0x8003C684
    // 0x80043CA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003C684(rdram, ctx);
        goto after_9;
    // 0x80043CA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x80043CA4: lh          $a1, 0x5A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X5A);
    // 0x80043CA8: jal         0x8003C684
    // 0x80043CAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003C684(rdram, ctx);
        goto after_10;
    // 0x80043CAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x80043CB0: lh          $a1, 0x5A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X5A);
    // 0x80043CB4: jal         0x8003C684
    // 0x80043CB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003C684(rdram, ctx);
        goto after_11;
    // 0x80043CB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x80043CBC: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80043CC0: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80043CC4: jal         0x8003CB70
    // 0x80043CC8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_8003CB70(rdram, ctx);
        goto after_12;
    // 0x80043CC8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_12:
    // 0x80043CCC: lh          $a1, 0x5A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X5A);
    // 0x80043CD0: jal         0x8003C684
    // 0x80043CD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003C684(rdram, ctx);
        goto after_13;
    // 0x80043CD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_13:
    // 0x80043CD8: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80043CDC: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80043CE0: jal         0x8003CB70
    // 0x80043CE4: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_8003CB70(rdram, ctx);
        goto after_14;
    // 0x80043CE4: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_14:
    // 0x80043CE8: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80043CEC: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80043CF0: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x80043CF4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80043CF8: add.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x80043CFC: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80043D00: nop

    // 0x80043D04: bc1f        L_80043D28
    if (!c1cs) {
        // 0x80043D08: nop
    
            goto L_80043D28;
    }
    // 0x80043D08: nop

    // 0x80043D0C: jal         0x8001C9DC
    // 0x80043D10: nop

    func_8001C9DC(rdram, ctx);
        goto after_15;
    // 0x80043D10: nop

    after_15:
    // 0x80043D14: lui         $fp, 0x800D
    ctx->r30 = S32(0X800D << 16);
    // 0x80043D18: addu        $fp, $fp, $v0
    ctx->r30 = ADD32(ctx->r30, ctx->r2);
    // 0x80043D1C: lbu         $fp, 0x6488($fp)
    ctx->r30 = MEM_BU(ctx->r30, 0X6488);
    // 0x80043D20: b           L_80043D44
    // 0x80043D24: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
        goto L_80043D44;
    // 0x80043D24: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
L_80043D28:
    // 0x80043D28: jal         0x8001C9DC
    // 0x80043D2C: nop

    func_8001C9DC(rdram, ctx);
        goto after_16;
    // 0x80043D2C: nop

    after_16:
    // 0x80043D30: lui         $fp, 0x800D
    ctx->r30 = S32(0X800D << 16);
    // 0x80043D34: addu        $fp, $fp, $v0
    ctx->r30 = ADD32(ctx->r30, ctx->r2);
    // 0x80043D38: lbu         $fp, 0x6478($fp)
    ctx->r30 = MEM_BU(ctx->r30, 0X6478);
    // 0x80043D3C: nop

    // 0x80043D40: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
L_80043D44:
    // 0x80043D44: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80043D48: lui         $s4, 0x801B
    ctx->r20 = S32(0X801B << 16);
    // 0x80043D4C: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x80043D50: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80043D54: bc1f        L_80043D64
    if (!c1cs) {
        // 0x80043D58: addiu       $s4, $s4, 0x35D0
        ctx->r20 = ADD32(ctx->r20, 0X35D0);
            goto L_80043D64;
    }
    // 0x80043D58: addiu       $s4, $s4, 0x35D0
    ctx->r20 = ADD32(ctx->r20, 0X35D0);
    // 0x80043D5C: b           L_80043D68
    // 0x80043D60: sh          $zero, 0x52($sp)
    MEM_H(0X52, ctx->r29) = 0;
        goto L_80043D68;
    // 0x80043D60: sh          $zero, 0x52($sp)
    MEM_H(0X52, ctx->r29) = 0;
L_80043D64:
    // 0x80043D64: sh          $t4, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r12;
L_80043D68:
    // 0x80043D68: blez        $fp, L_80044024
    if (SIGNED(ctx->r30) <= 0) {
        // 0x80043D6C: addiu       $s7, $zero, 0x1
        ctx->r23 = ADD32(0, 0X1);
            goto L_80044024;
    }
    // 0x80043D6C: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x80043D70: sll         $s3, $s7, 24
    ctx->r19 = S32(ctx->r23 << 24);
L_80043D74:
    // 0x80043D74: sra         $t5, $s3, 24
    ctx->r13 = S32(SIGNED(ctx->r19) >> 24);
    // 0x80043D78: sll         $a0, $t5, 24
    ctx->r4 = S32(ctx->r13 << 24);
    // 0x80043D7C: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80043D80: lh          $a1, 0x5A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X5A);
    // 0x80043D84: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80043D88: or          $s3, $t5, $zero
    ctx->r19 = ctx->r13 | 0;
    // 0x80043D8C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80043D90: addiu       $a3, $zero, -0x7D
    ctx->r7 = ADD32(0, -0X7D);
    // 0x80043D94: sh          $fp, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r30;
    // 0x80043D98: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x80043D9C: jal         0x800438CC
    // 0x80043DA0: sh          $zero, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = 0;
    func_800438CC(rdram, ctx);
        goto after_17;
    // 0x80043DA0: sh          $zero, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = 0;
    after_17:
    // 0x80043DA4: slti        $at, $fp, 0x4
    ctx->r1 = SIGNED(ctx->r30) < 0X4 ? 1 : 0;
    // 0x80043DA8: beq         $at, $zero, L_80043DD4
    if (ctx->r1 == 0) {
        // 0x80043DAC: nop
    
            goto L_80043DD4;
    }
    // 0x80043DAC: nop

    // 0x80043DB0: jal         0x8001C9DC
    // 0x80043DB4: nop

    func_8001C9DC(rdram, ctx);
        goto after_18;
    // 0x80043DB4: nop

    after_18:
    // 0x80043DB8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80043DBC: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x80043DC0: lbu         $t7, 0x6498($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X6498);
    // 0x80043DC4: nop

    // 0x80043DC8: addu        $t8, $t7, $fp
    ctx->r24 = ADD32(ctx->r15, ctx->r30);
    // 0x80043DCC: b           L_80043DF4
    // 0x80043DD0: sh          $t8, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r24;
        goto L_80043DF4;
    // 0x80043DD0: sh          $t8, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r24;
L_80043DD4:
    // 0x80043DD4: jal         0x8001C9DC
    // 0x80043DD8: nop

    func_8001C9DC(rdram, ctx);
        goto after_19;
    // 0x80043DD8: nop

    after_19:
    // 0x80043DDC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80043DE0: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x80043DE4: lbu         $t9, 0x64A8($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X64A8);
    // 0x80043DE8: nop

    // 0x80043DEC: addu        $t0, $t9, $fp
    ctx->r8 = ADD32(ctx->r25, ctx->r30);
    // 0x80043DF0: sh          $t0, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r8;
L_80043DF4:
    // 0x80043DF4: blez        $fp, L_80044008
    if (SIGNED(ctx->r30) <= 0) {
        // 0x80043DF8: nop
    
            goto L_80044008;
    }
    // 0x80043DF8: nop

    // 0x80043DFC: blez        $fp, L_80044008
    if (SIGNED(ctx->r30) <= 0) {
        // 0x80043E00: nop
    
            goto L_80044008;
    }
    // 0x80043E00: nop

    // 0x80043E04: lh          $t1, 0x52($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X52);
L_80043E08:
    // 0x80043E08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80043E0C: beq         $s7, $t1, L_80043E30
    if (ctx->r23 == ctx->r9) {
        // 0x80043E10: lh          $s2, 0x58($sp)
        ctx->r18 = MEM_H(ctx->r29, 0X58);
            goto L_80043E30;
    }
    // 0x80043E10: lh          $s2, 0x58($sp)
    ctx->r18 = MEM_H(ctx->r29, 0X58);
    // 0x80043E14: bne         $s7, $at, L_80043E30
    if (ctx->r23 != ctx->r1) {
        // 0x80043E18: lh          $s2, 0x58($sp)
        ctx->r18 = MEM_H(ctx->r29, 0X58);
            goto L_80043E30;
    }
    // 0x80043E18: lh          $s2, 0x58($sp)
    ctx->r18 = MEM_H(ctx->r29, 0X58);
    // 0x80043E1C: jal         0x8001C994
    // 0x80043E20: nop

    func_8001C994(rdram, ctx);
        goto after_20;
    // 0x80043E20: nop

    after_20:
    // 0x80043E24: bne         $v0, $zero, L_80043FC8
    if (ctx->r2 != 0) {
        // 0x80043E28: nop
    
            goto L_80043FC8;
    }
    // 0x80043E28: nop

    // 0x80043E2C: lh          $s2, 0x58($sp)
    ctx->r18 = MEM_H(ctx->r29, 0X58);
L_80043E30:
    // 0x80043E30: andi        $s5, $s7, 0xFF
    ctx->r21 = ctx->r23 & 0XFF;
    // 0x80043E34: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80043E38: andi        $t2, $s2, 0xFFFF
    ctx->r10 = ctx->r18 & 0XFFFF;
    // 0x80043E3C: or          $s2, $t2, $zero
    ctx->r18 = ctx->r10 | 0;
L_80043E40:
    // 0x80043E40: jal         0x8001CA74
    // 0x80043E44: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    func_8001CA74(rdram, ctx);
        goto after_21;
    // 0x80043E44: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    after_21:
    // 0x80043E48: addu        $t3, $s4, $v0
    ctx->r11 = ADD32(ctx->r20, ctx->r2);
    // 0x80043E4C: lbu         $s0, 0x0($t3)
    ctx->r16 = MEM_BU(ctx->r11, 0X0);
    // 0x80043E50: nop

    // 0x80043E54: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x80043E58: beq         $at, $zero, L_80043E40
    if (ctx->r1 == 0) {
        // 0x80043E5C: nop
    
            goto L_80043E40;
    }
    // 0x80043E5C: nop

    // 0x80043E60: sll         $s1, $s0, 24
    ctx->r17 = S32(ctx->r16 << 24);
    // 0x80043E64: sra         $t5, $s1, 24
    ctx->r13 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80043E68: sll         $a1, $t5, 24
    ctx->r5 = S32(ctx->r13 << 24);
    // 0x80043E6C: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80043E70: sra         $t4, $a0, 24
    ctx->r12 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80043E74: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80043E78: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80043E7C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80043E80: jal         0x8003D080
    // 0x80043E84: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    func_8003D080(rdram, ctx);
        goto after_22;
    // 0x80043E84: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    after_22:
    // 0x80043E88: beq         $v0, $zero, L_80043E40
    if (ctx->r2 == 0) {
        // 0x80043E8C: nop
    
            goto L_80043E40;
    }
    // 0x80043E8C: nop

    // 0x80043E90: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    // 0x80043E94: jal         0x8004DCB0
    // 0x80043E98: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_8004DCB0(rdram, ctx);
        goto after_23;
    // 0x80043E98: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_23:
    // 0x80043E9C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80043EA0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80043EA4: jal         0x8004D880
    // 0x80043EA8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8004D880(rdram, ctx);
        goto after_24;
    // 0x80043EA8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_24:
    // 0x80043EAC: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x80043EB0: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80043EB4: blez        $t8, L_80043F88
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80043EB8: sll         $a0, $s3, 24
        ctx->r4 = S32(ctx->r19 << 24);
            goto L_80043F88;
    }
    // 0x80043EB8: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80043EBC: lh          $t9, 0x52($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X52);
    // 0x80043EC0: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80043EC4: bne         $s7, $t9, L_80043FC8
    if (ctx->r23 != ctx->r25) {
        // 0x80043EC8: sra         $t0, $a0, 24
        ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
            goto L_80043FC8;
    }
    // 0x80043EC8: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80043ECC: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x80043ED0: sra         $t1, $a1, 24
    ctx->r9 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80043ED4: lh          $a3, 0x5A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X5A);
    // 0x80043ED8: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x80043EDC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80043EE0: jal         0x80042320
    // 0x80043EE4: addiu       $a2, $zero, 0x84
    ctx->r6 = ADD32(0, 0X84);
    func_80042320(rdram, ctx);
        goto after_25;
    // 0x80043EE4: addiu       $a2, $zero, 0x84
    ctx->r6 = ADD32(0, 0X84);
    after_25:
    // 0x80043EE8: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x80043EEC: subu        $a0, $t2, $v0
    ctx->r4 = SUB32(ctx->r10, ctx->r2);
    // 0x80043EF0: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x80043EF4: jal         0x8001CA74
    // 0x80043EF8: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_8001CA74(rdram, ctx);
        goto after_26;
    // 0x80043EF8: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_26:
    // 0x80043EFC: bne         $v0, $zero, L_80043F48
    if (ctx->r2 != 0) {
        // 0x80043F00: sll         $a0, $s3, 24
        ctx->r4 = S32(ctx->r19 << 24);
            goto L_80043F48;
    }
    // 0x80043F00: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80043F04: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x80043F08: sra         $t5, $a1, 24
    ctx->r13 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80043F0C: sra         $t4, $a0, 24
    ctx->r12 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80043F10: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80043F14: jal         0x80042F4C
    // 0x80043F18: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_80042F4C(rdram, ctx);
        goto after_27;
    // 0x80043F18: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_27:
    // 0x80043F1C: bne         $v0, $zero, L_80043F48
    if (ctx->r2 != 0) {
        // 0x80043F20: sll         $a0, $s3, 24
        ctx->r4 = S32(ctx->r19 << 24);
            goto L_80043F48;
    }
    // 0x80043F20: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80043F24: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80043F28: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80043F2C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80043F30: jal         0x80042D1C
    // 0x80043F34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80042D1C(rdram, ctx);
        goto after_28;
    // 0x80043F34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_28:
    // 0x80043F38: addiu       $fp, $fp, -0x1
    ctx->r30 = ADD32(ctx->r30, -0X1);
    // 0x80043F3C: sll         $t7, $fp, 16
    ctx->r15 = S32(ctx->r30 << 16);
    // 0x80043F40: b           L_80043FC8
    // 0x80043F44: sra         $fp, $t7, 16
    ctx->r30 = S32(SIGNED(ctx->r15) >> 16);
        goto L_80043FC8;
    // 0x80043F44: sra         $fp, $t7, 16
    ctx->r30 = S32(SIGNED(ctx->r15) >> 16);
L_80043F48:
    // 0x80043F48: beq         $s7, $zero, L_80043F68
    if (ctx->r23 == 0) {
        // 0x80043F4C: nop
    
            goto L_80043F68;
    }
    // 0x80043F4C: nop

    // 0x80043F50: jal         0x8001C994
    // 0x80043F54: nop

    func_8001C994(rdram, ctx);
        goto after_29;
    // 0x80043F54: nop

    after_29:
    // 0x80043F58: blez        $v0, L_80043F78
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80043F5C: nop
    
            goto L_80043F78;
    }
    // 0x80043F5C: nop

    // 0x80043F60: b           L_80043FCC
    // 0x80043F64: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
        goto L_80043FCC;
    // 0x80043F64: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_80043F68:
    // 0x80043F68: jal         0x8001C9B8
    // 0x80043F6C: nop

    func_8001C9B8(rdram, ctx);
        goto after_30;
    // 0x80043F6C: nop

    after_30:
    // 0x80043F70: beq         $v0, $zero, L_80043FC8
    if (ctx->r2 == 0) {
        // 0x80043F74: nop
    
            goto L_80043FC8;
    }
    // 0x80043F74: nop

L_80043F78:
    // 0x80043F78: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x80043F7C: sll         $t9, $s6, 16
    ctx->r25 = S32(ctx->r22 << 16);
    // 0x80043F80: b           L_80043FC8
    // 0x80043F84: sra         $s6, $t9, 16
    ctx->r22 = S32(SIGNED(ctx->r25) >> 16);
        goto L_80043FC8;
    // 0x80043F84: sra         $s6, $t9, 16
    ctx->r22 = S32(SIGNED(ctx->r25) >> 16);
L_80043F88:
    // 0x80043F88: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x80043F8C: sra         $t2, $a1, 24
    ctx->r10 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80043F90: sra         $t1, $a0, 24
    ctx->r9 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80043F94: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80043F98: jal         0x80042F4C
    // 0x80043F9C: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    func_80042F4C(rdram, ctx);
        goto after_31;
    // 0x80043F9C: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    after_31:
    // 0x80043FA0: bne         $v0, $zero, L_80043FC8
    if (ctx->r2 != 0) {
        // 0x80043FA4: sll         $a0, $s3, 24
        ctx->r4 = S32(ctx->r19 << 24);
            goto L_80043FC8;
    }
    // 0x80043FA4: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80043FA8: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80043FAC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80043FB0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80043FB4: jal         0x80042D1C
    // 0x80043FB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80042D1C(rdram, ctx);
        goto after_32;
    // 0x80043FB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_32:
    // 0x80043FBC: addiu       $fp, $fp, -0x1
    ctx->r30 = ADD32(ctx->r30, -0X1);
    // 0x80043FC0: sll         $t4, $fp, 16
    ctx->r12 = S32(ctx->r30 << 16);
    // 0x80043FC4: sra         $fp, $t4, 16
    ctx->r30 = S32(SIGNED(ctx->r12) >> 16);
L_80043FC8:
    // 0x80043FC8: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_80043FCC:
    // 0x80043FCC: lh          $t8, 0x4C($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4C);
    // 0x80043FD0: lh          $t0, 0x50($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X50);
    // 0x80043FD4: sll         $t6, $s6, 16
    ctx->r14 = S32(ctx->r22 << 16);
    // 0x80043FD8: sra         $s6, $t6, 16
    ctx->r22 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80043FDC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80043FE0: slt         $at, $s6, $t0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80043FE4: beq         $at, $zero, L_80044008
    if (ctx->r1 == 0) {
        // 0x80043FE8: sh          $t9, 0x4C($sp)
        MEM_H(0X4C, ctx->r29) = ctx->r25;
            goto L_80044008;
    }
    // 0x80043FE8: sh          $t9, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r25;
    // 0x80043FEC: sll         $t1, $t9, 16
    ctx->r9 = S32(ctx->r25 << 16);
    // 0x80043FF0: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80043FF4: slti        $at, $t2, 0xA
    ctx->r1 = SIGNED(ctx->r10) < 0XA ? 1 : 0;
    // 0x80043FF8: beq         $at, $zero, L_80044008
    if (ctx->r1 == 0) {
        // 0x80043FFC: nop
    
            goto L_80044008;
    }
    // 0x80043FFC: nop

    // 0x80044000: bgtz        $fp, L_80043E08
    if (SIGNED(ctx->r30) > 0) {
        // 0x80044004: lh          $t1, 0x52($sp)
        ctx->r9 = MEM_H(ctx->r29, 0X52);
            goto L_80043E08;
    }
    // 0x80044004: lh          $t1, 0x52($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X52);
L_80044008:
    // 0x80044008: addiu       $s7, $s7, -0x1
    ctx->r23 = ADD32(ctx->r23, -0X1);
    // 0x8004400C: sll         $t3, $s7, 16
    ctx->r11 = S32(ctx->r23 << 16);
    // 0x80044010: sra         $s7, $t3, 16
    ctx->r23 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80044014: bltz        $s7, L_80044028
    if (SIGNED(ctx->r23) < 0) {
        // 0x80044018: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80044028;
    }
    // 0x80044018: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8004401C: bgtz        $fp, L_80043D74
    if (SIGNED(ctx->r30) > 0) {
        // 0x80044020: sll         $s3, $s7, 24
        ctx->r19 = S32(ctx->r23 << 24);
            goto L_80043D74;
    }
    // 0x80044020: sll         $s3, $s7, 24
    ctx->r19 = S32(ctx->r23 << 24);
L_80044024:
    // 0x80044024: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80044028:
    // 0x80044028: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004402C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80044030: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80044034: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80044038: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8004403C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80044040: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80044044: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80044048: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8004404C: jr          $ra
    // 0x80044050: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80044050: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80044054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044054: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80044058: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8004405C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80044060: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80044064: addiu       $v0, $v0, 0x7640
    ctx->r2 = ADD32(ctx->r2, 0X7640);
    // 0x80044068: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8004406C: addu        $t8, $v0, $v1
    ctx->r24 = ADD32(ctx->r2, ctx->r3);
L_80044070:
    // 0x80044070: lb          $t9, 0x0($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X0);
    // 0x80044074: nop

    // 0x80044078: slt         $at, $t9, $a0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8004407C: bne         $at, $zero, L_80044094
    if (ctx->r1 != 0) {
        // 0x80044080: nop
    
            goto L_80044094;
    }
    // 0x80044080: nop

    // 0x80044084: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x80044088: sra         $t0, $v0, 24
    ctx->r8 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8004408C: jr          $ra
    // 0x80044090: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    return;
    // 0x80044090: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_80044094:
    // 0x80044094: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80044098: sll         $t1, $v1, 16
    ctx->r9 = S32(ctx->r3 << 16);
    // 0x8004409C: sra         $v1, $t1, 16
    ctx->r3 = S32(SIGNED(ctx->r9) >> 16);
    // 0x800440A0: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x800440A4: bne         $at, $zero, L_80044070
    if (ctx->r1 != 0) {
        // 0x800440A8: addu        $t8, $v0, $v1
        ctx->r24 = ADD32(ctx->r2, ctx->r3);
            goto L_80044070;
    }
    // 0x800440A8: addu        $t8, $v0, $v1
    ctx->r24 = ADD32(ctx->r2, ctx->r3);
    // 0x800440AC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x800440B0: jr          $ra
    // 0x800440B4: nop

    return;
    // 0x800440B4: nop

;}
RECOMP_FUNC void func_800440B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800440B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800440BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800440C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800440C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800440C8: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x800440CC: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x800440D0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800440D4: jal         0x8004DCB0
    // 0x800440D8: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    func_8004DCB0(rdram, ctx);
        goto after_0;
    // 0x800440D8: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    after_0:
    // 0x800440DC: lb          $a1, 0x23($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X23);
    // 0x800440E0: jal         0x800440F8
    // 0x800440E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800440F8(rdram, ctx);
        goto after_1;
    // 0x800440E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800440E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800440EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800440F0: jr          $ra
    // 0x800440F4: nop

    return;
    // 0x800440F4: nop

;}
RECOMP_FUNC void func_800440F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800440F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800440FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80044100: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80044104: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80044108: jal         0x8004D880
    // 0x8004410C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8004D880(rdram, ctx);
        goto after_0;
    // 0x8004410C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x80044110: lb          $t6, 0x27($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X27);
    // 0x80044114: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80044118: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004411C: lb          $t7, 0x7640($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X7640);
    // 0x80044120: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80044124: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    // 0x80044128: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x8004412C: sra         $a0, $t0, 16
    ctx->r4 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80044130: jal         0x8001D4C0
    // 0x80044134: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_8001D4C0(rdram, ctx);
        goto after_1;
    // 0x80044134: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_1:
    // 0x80044138: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8004413C: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80044140: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x80044144: jal         0x80044054
    // 0x80044148: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_80044054(rdram, ctx);
        goto after_2;
    // 0x80044148: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_2:
    // 0x8004414C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80044150: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80044154: jal         0x8001D4C0
    // 0x80044158: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8001D4C0(rdram, ctx);
        goto after_3;
    // 0x80044158: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_3:
    // 0x8004415C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80044160: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    // 0x80044164: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x80044168: jal         0x8004D9DC
    // 0x8004416C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8004D9DC(rdram, ctx);
        goto after_4;
    // 0x8004416C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_4:
    // 0x80044170: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80044174: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x80044178: jal         0x8004D9DC
    // 0x8004417C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8004D9DC(rdram, ctx);
        goto after_5;
    // 0x8004417C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_5:
    // 0x80044180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80044184: lb          $v0, 0x27($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X27);
    // 0x80044188: jr          $ra
    // 0x8004418C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8004418C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80044190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044190: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80044194: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80044198: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004419C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800441A0: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x800441A4: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x800441A8: jal         0x8004DCB0
    // 0x800441AC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8004DCB0(rdram, ctx);
        goto after_0;
    // 0x800441AC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800441B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800441B4: jal         0x8004D880
    // 0x800441B8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8004D880(rdram, ctx);
        goto after_1;
    // 0x800441B8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x800441BC: lb          $t6, 0x23($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X23);
    // 0x800441C0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800441C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800441C8: lb          $t7, 0x7640($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X7640);
    // 0x800441CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800441D0: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    // 0x800441D4: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x800441D8: sra         $a0, $t0, 16
    ctx->r4 = S32(SIGNED(ctx->r8) >> 16);
    // 0x800441DC: jal         0x8001D4C0
    // 0x800441E0: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_8001D4C0(rdram, ctx);
        goto after_2;
    // 0x800441E0: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_2:
    // 0x800441E4: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x800441E8: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800441EC: jal         0x80044054
    // 0x800441F0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_80044054(rdram, ctx);
        goto after_3;
    // 0x800441F0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_3:
    // 0x800441F4: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x800441F8: bne         $at, $zero, L_80044218
    if (ctx->r1 != 0) {
        // 0x800441FC: addiu       $a2, $zero, 0x1D
        ctx->r6 = ADD32(0, 0X1D);
            goto L_80044218;
    }
    // 0x800441FC: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x80044200: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x80044204: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x80044208: jal         0x80042E60
    // 0x8004420C: nop

    func_80042E60(rdram, ctx);
        goto after_4;
    // 0x8004420C: nop

    after_4:
    // 0x80044210: b           L_8004425C
    // 0x80044214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004425C;
    // 0x80044214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80044218:
    // 0x80044218: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x8004421C: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x80044220: jal         0x8004237C
    // 0x80044224: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004237C(rdram, ctx);
        goto after_5;
    // 0x80044224: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x80044228: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x8004422C: beq         $t3, $zero, L_80044258
    if (ctx->r11 == 0) {
        // 0x80044230: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80044258;
    }
    // 0x80044230: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80044234: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x80044238: jal         0x800433D4
    // 0x8004423C: nop

    func_800433D4(rdram, ctx);
        goto after_6;
    // 0x8004423C: nop

    after_6:
    // 0x80044240: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80044244: beq         $at, $zero, L_80044258
    if (ctx->r1 == 0) {
        // 0x80044248: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80044258;
    }
    // 0x80044248: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004424C: b           L_80044258
    // 0x80044250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80044258;
    // 0x80044250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80044254: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80044258:
    // 0x80044258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004425C:
    // 0x8004425C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80044260: jr          $ra
    // 0x80044264: nop

    return;
    // 0x80044264: nop

;}
RECOMP_FUNC void func_80044268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044268: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004426C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80044270: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80044274: jal         0x8004D880
    // 0x80044278: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8004D880(rdram, ctx);
        goto after_0;
    // 0x80044278: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x8004427C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80044280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80044284: bne         $at, $zero, L_80044294
    if (ctx->r1 != 0) {
        // 0x80044288: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80044294;
    }
    // 0x80044288: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004428C: b           L_80044294
    // 0x80044290: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80044294;
    // 0x80044290: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80044294:
    // 0x80044294: jr          $ra
    // 0x80044298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80044298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004429C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004429C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800442A0: lb          $t7, -0x32A1($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X32A1);
    // 0x800442A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800442A8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800442AC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800442B0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800442B4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800442B8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800442BC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800442C0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800442C4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800442C8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800442CC: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800442D0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800442D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800442D8: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x800442DC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800442E0: addiu       $t9, $t9, -0x2F80
    ctx->r25 = ADD32(ctx->r25, -0X2F80);
    // 0x800442E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800442E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800442EC: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x800442F0: sll         $a0, $t6, 24
    ctx->r4 = S32(ctx->r14 << 24);
    // 0x800442F4: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800442F8: lb          $a1, 0x1($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X1);
    // 0x800442FC: jal         0x8003ED84
    // 0x80044300: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8003ED84(rdram, ctx);
        goto after_0;
    // 0x80044300: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_0:
    // 0x80044304: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80044308: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x8004430C: jal         0x8004D880
    // 0x80044310: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8004D880(rdram, ctx);
        goto after_1;
    // 0x80044310: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x80044314: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80044318: bne         $at, $zero, L_80044354
    if (ctx->r1 != 0) {
        // 0x8004431C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80044354;
    }
    // 0x8004431C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80044320: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80044324: jal         0x8004D880
    // 0x80044328: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8004D880(rdram, ctx);
        goto after_2;
    // 0x80044328: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x8004432C: lh          $t3, 0x1E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1E);
    // 0x80044330: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x80044334: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80044338: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x8004433C: slti        $at, $t4, 0xF
    ctx->r1 = SIGNED(ctx->r12) < 0XF ? 1 : 0;
    // 0x80044340: bne         $at, $zero, L_80044354
    if (ctx->r1 != 0) {
        // 0x80044344: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80044354;
    }
    // 0x80044344: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80044348: b           L_80044354
    // 0x8004434C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80044354;
    // 0x8004434C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80044350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80044354:
    // 0x80044354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80044358: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004435C: jr          $ra
    // 0x80044360: nop

    return;
    // 0x80044360: nop

;}
RECOMP_FUNC void func_80044364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044364: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80044368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004436C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80044370: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80044374: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80044378: jal         0x8004D880
    // 0x8004437C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8004D880(rdram, ctx);
        goto after_0;
    // 0x8004437C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x80044380: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x80044384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80044388: subu        $a0, $v0, $t8
    ctx->r4 = SUB32(ctx->r2, ctx->r24);
    // 0x8004438C: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x80044390: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80044394: jal         0x8001D4C0
    // 0x80044398: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_8001D4C0(rdram, ctx);
        goto after_1;
    // 0x80044398: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_1:
    // 0x8004439C: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x800443A0: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800443A4: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x800443A8: jal         0x80044054
    // 0x800443AC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_80044054(rdram, ctx);
        goto after_2;
    // 0x800443AC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_2:
    // 0x800443B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800443B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800443B8: jal         0x8001D4C0
    // 0x800443BC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8001D4C0(rdram, ctx);
        goto after_3;
    // 0x800443BC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_3:
    // 0x800443C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800443C4: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    // 0x800443C8: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x800443CC: jal         0x8004D9DC
    // 0x800443D0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8004D9DC(rdram, ctx);
        goto after_4;
    // 0x800443D0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_4:
    // 0x800443D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800443D8: lbu         $a2, 0x1D($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1D);
    // 0x800443DC: jal         0x8004D9DC
    // 0x800443E0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8004D9DC(rdram, ctx);
        goto after_5;
    // 0x800443E0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_5:
    // 0x800443E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800443E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800443EC: jr          $ra
    // 0x800443F0: nop

    return;
    // 0x800443F0: nop

;}
RECOMP_FUNC void func_800443F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800443F4: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x800443F8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800443FC: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80044400: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80044404: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80044408: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8004440C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80044410: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80044414: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80044418: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8004441C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80044420: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80044424: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80044428: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8004442C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80044430: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x80044434: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80044438: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x8004443C: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80044440: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80044444: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80044448: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8004444C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80044450: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80044454: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80044458: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8004445C: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80044460: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80044464: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80044468: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x8004446C: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80044470: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80044474: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80044478: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8004447C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80044480: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80044484: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80044488: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8004448C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80044490: lb          $a0, 0x1($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X1);
    // 0x80044494: jal         0x8003EC2C
    // 0x80044498: nop

    func_8003EC2C(rdram, ctx);
        goto after_0;
    // 0x80044498: nop

    after_0:
    // 0x8004449C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800444A0: lh          $s6, 0x2($v0)
    ctx->r22 = MEM_H(ctx->r2, 0X2);
    // 0x800444A4: lwc1        $f31, 0x73F0($at)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r1, 0X73F0);
    // 0x800444A8: lwc1        $f30, 0x73F4($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X73F4);
    // 0x800444AC: sh          $zero, 0x84($sp)
    MEM_H(0X84, ctx->r29) = 0;
    // 0x800444B0: addiu       $fp, $zero, 0x10
    ctx->r30 = ADD32(0, 0X10);
L_800444B4:
    // 0x800444B4: lh          $v1, 0x84($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X84);
    // 0x800444B8: sll         $a1, $s6, 16
    ctx->r5 = S32(ctx->r22 << 16);
    // 0x800444BC: sll         $s3, $v1, 24
    ctx->r19 = S32(ctx->r3 << 24);
    // 0x800444C0: sra         $t9, $s3, 24
    ctx->r25 = S32(SIGNED(ctx->r19) >> 24);
    // 0x800444C4: sll         $a0, $t9, 24
    ctx->r4 = S32(ctx->r25 << 24);
    // 0x800444C8: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800444CC: sra         $t1, $a1, 16
    ctx->r9 = S32(SIGNED(ctx->r5) >> 16);
    // 0x800444D0: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x800444D4: addiu       $a2, $a2, 0x35E0
    ctx->r6 = ADD32(ctx->r6, 0X35E0);
    // 0x800444D8: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x800444DC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800444E0: or          $s3, $t9, $zero
    ctx->r19 = ctx->r25 | 0;
    // 0x800444E4: jal         0x80044910
    // 0x800444E8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    func_80044910(rdram, ctx);
        goto after_1;
    // 0x800444E8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    after_1:
    // 0x800444EC: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x800444F0: sra         $t2, $a0, 24
    ctx->r10 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800444F4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x800444F8: jal         0x80042BE0
    // 0x800444FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80042BE0(rdram, ctx);
        goto after_2;
    // 0x800444FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80044500: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80044504: sll         $a1, $s6, 16
    ctx->r5 = S32(ctx->r22 << 16);
    // 0x80044508: sra         $t4, $a1, 16
    ctx->r12 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8004450C: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80044510: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80044514: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x80044518: jal         0x8003C684
    // 0x8004451C: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    func_8003C684(rdram, ctx);
        goto after_3;
    // 0x8004451C: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    after_3:
    // 0x80044520: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80044524: sra         $t5, $a0, 16
    ctx->r13 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80044528: jal         0x8003CB70
    // 0x8004452C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_8003CB70(rdram, ctx);
        goto after_4;
    // 0x8004452C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_4:
    // 0x80044530: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80044534: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80044538: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x8004453C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80044540: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80044544: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80044548: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8004454C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80044550: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80044554: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80044558: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8004455C: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80044560: nop

    // 0x80044564: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80044568: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8004456C: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
L_80044570:
    // 0x80044570: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80044574: addu        $s0, $s0, $s5
    ctx->r16 = ADD32(ctx->r16, ctx->r21);
    // 0x80044578: lbu         $s0, 0x35E0($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X35E0);
    // 0x8004457C: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80044580: sll         $s2, $s0, 24
    ctx->r18 = S32(ctx->r16 << 24);
    // 0x80044584: sra         $t8, $s2, 24
    ctx->r24 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80044588: sll         $a1, $t8, 24
    ctx->r5 = S32(ctx->r24 << 24);
    // 0x8004458C: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80044590: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80044594: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80044598: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8004459C: jal         0x8003D080
    // 0x800445A0: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    func_8003D080(rdram, ctx);
        goto after_5;
    // 0x800445A0: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    after_5:
    // 0x800445A4: beq         $v0, $zero, L_80044878
    if (ctx->r2 == 0) {
        // 0x800445A8: andi        $s1, $s0, 0xFF
        ctx->r17 = ctx->r16 & 0XFF;
            goto L_80044878;
    }
    // 0x800445A8: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x800445AC: sll         $t0, $s7, 2
    ctx->r8 = S32(ctx->r23 << 2);
    // 0x800445B0: subu        $t0, $t0, $s7
    ctx->r8 = SUB32(ctx->r8, ctx->r23);
    // 0x800445B4: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x800445B8: addu        $t0, $t0, $s7
    ctx->r8 = ADD32(ctx->r8, ctx->r23);
    // 0x800445BC: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x800445C0: addiu       $t1, $t0, 0x18C
    ctx->r9 = ADD32(ctx->r8, 0X18C);
    // 0x800445C4: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x800445C8: lbu         $a0, 0x85($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X85);
    // 0x800445CC: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x800445D0: jal         0x8004DCB0
    // 0x800445D4: cvt.s.w     $f28, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    ctx->f28.fl = CVT_S_W(ctx->f10.u32l);
    func_8004DCB0(rdram, ctx);
        goto after_6;
    // 0x800445D4: cvt.s.w     $f28, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    ctx->f28.fl = CVT_S_W(ctx->f10.u32l);
    after_6:
    // 0x800445D8: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x800445DC: sll         $a2, $s6, 16
    ctx->r6 = S32(ctx->r22 << 16);
    // 0x800445E0: sra         $t3, $a2, 16
    ctx->r11 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800445E4: sra         $t2, $a0, 24
    ctx->r10 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800445E8: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x800445EC: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x800445F0: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x800445F4: jal         0x8003C8F8
    // 0x800445F8: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    func_8003C8F8(rdram, ctx);
        goto after_7;
    // 0x800445F8: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    after_7:
    // 0x800445FC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80044600: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80044604: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80044608: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8004460C: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80044610: sll         $a1, $s2, 24
    ctx->r5 = S32(ctx->r18 << 24);
    // 0x80044614: sll         $a3, $s6, 16
    ctx->r7 = S32(ctx->r22 << 16);
    // 0x80044618: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8004461C: sra         $t5, $a1, 24
    ctx->r13 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80044620: sra         $t4, $a0, 24
    ctx->r12 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80044624: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80044628: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x8004462C: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x80044630: addiu       $a2, $zero, 0x85
    ctx->r6 = ADD32(0, 0X85);
    // 0x80044634: jal         0x8004237C
    // 0x80044638: div.s       $f26, $f18, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f26.fl = DIV_S(ctx->f18.fl, ctx->f8.fl);
    func_8004237C(rdram, ctx);
        goto after_8;
    // 0x80044638: div.s       $f26, $f18, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f26.fl = DIV_S(ctx->f18.fl, ctx->f8.fl);
    after_8:
    // 0x8004463C: subu        $t7, $fp, $v0
    ctx->r15 = SUB32(ctx->r30, ctx->r2);
    // 0x80044640: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80044644: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80044648: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8004464C: jal         0x8004D880
    // 0x80044650: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    func_8004D880(rdram, ctx);
        goto after_9;
    // 0x80044650: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    after_9:
    // 0x80044654: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80044658: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8004465C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80044660: bgez        $v0, L_80044678
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80044664: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80044678;
    }
    // 0x80044664: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80044668: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8004466C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80044670: nop

    // 0x80044674: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_80044678:
    // 0x80044678: mul.s       $f8, $f26, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f26.fl, ctx->f20.fl);
    // 0x8004467C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80044680: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80044684: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80044688: div.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8004468C: sub.s       $f24, $f6, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x80044690: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80044694: jal         0x8004D880
    // 0x80044698: add.s       $f20, $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f10.fl;
    func_8004D880(rdram, ctx);
        goto after_10;
    // 0x80044698: add.s       $f20, $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f10.fl;
    after_10:
    // 0x8004469C: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x800446A0: bgez        $v0, L_800446B8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800446A4: cvt.s.w     $f6, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
            goto L_800446B8;
    }
    // 0x800446A4: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800446A8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800446AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800446B0: nop

    // 0x800446B4: add.s       $f6, $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f16.fl;
L_800446B8:
    // 0x800446B8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800446BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800446C0: cvt.d.s     $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f22.d = CVT_D_S(ctx->f24.fl);
    // 0x800446C4: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800446C8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800446CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800446D0: add.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x800446D4: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x800446D8: cvt.d.s     $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.d = CVT_D_S(ctx->f20.fl);
    // 0x800446DC: mul.d       $f10, $f0, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f30.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f30.d);
    // 0x800446E0: nop

    // 0x800446E4: mul.d       $f18, $f10, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f22.d);
    // 0x800446E8: sub.d       $f16, $f0, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f0.d - ctx->f18.d;
    // 0x800446EC: cvt.s.d     $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f20.fl = CVT_S_D(ctx->f16.d);
    // 0x800446F0: mul.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x800446F4: add.s       $f20, $f8, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x800446F8: jal         0x8001CB48
    // 0x800446FC: add.s       $f12, $f20, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f28.fl;
    func_8001CB48(rdram, ctx);
        goto after_11;
    // 0x800446FC: add.s       $f12, $f20, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f28.fl;
    after_11:
    // 0x80044700: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80044704: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80044708: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x8004470C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80044710: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80044714: bc1f        L_80044878
    if (!c1cs) {
        // 0x80044718: sra         $t0, $a0, 24
        ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
            goto L_80044878;
    }
    // 0x80044718: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8004471C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80044720: sll         $a1, $s2, 24
    ctx->r5 = S32(ctx->r18 << 24);
    // 0x80044724: sll         $a3, $s6, 16
    ctx->r7 = S32(ctx->r22 << 16);
    // 0x80044728: sll         $t8, $s7, 16
    ctx->r24 = S32(ctx->r23 << 16);
    // 0x8004472C: sra         $t2, $a3, 16
    ctx->r10 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80044730: sra         $t1, $a1, 24
    ctx->r9 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80044734: sra         $s7, $t8, 16
    ctx->r23 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80044738: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8004473C: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x80044740: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80044744: jal         0x80042320
    // 0x80044748: addiu       $a2, $zero, 0x86
    ctx->r6 = ADD32(0, 0X86);
    func_80042320(rdram, ctx);
        goto after_12;
    // 0x80044748: addiu       $a2, $zero, 0x86
    ctx->r6 = ADD32(0, 0X86);
    after_12:
    // 0x8004474C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80044750: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80044754: subu        $t3, $fp, $v0
    ctx->r11 = SUB32(ctx->r30, ctx->r2);
    // 0x80044758: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8004475C: c.eq.s      $f24, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f24.fl == ctx->f16.fl;
    // 0x80044760: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80044764: bc1f        L_8004477C
    if (!c1cs) {
        // 0x80044768: cvt.s.w     $f20, $f18
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = CVT_S_W(ctx->f18.u32l);
            goto L_8004477C;
    }
    // 0x80044768: cvt.s.w     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8004476C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80044770: nop

    // 0x80044774: mul.s       $f24, $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f6.fl);
    // 0x80044778: cvt.d.s     $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f22.d = CVT_D_S(ctx->f24.fl);
L_8004477C:
    // 0x8004477C: mul.s       $f8, $f26, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f26.fl, ctx->f20.fl);
    // 0x80044780: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80044784: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80044788: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x8004478C: div.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80044790: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80044794: add.s       $f20, $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f10.fl;
    // 0x80044798: cvt.d.s     $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.d = CVT_D_S(ctx->f20.fl);
    // 0x8004479C: mul.d       $f18, $f0, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f30.d); 
    ctx->f18.d = MUL_D(ctx->f0.d, ctx->f30.d);
    // 0x800447A0: nop

    // 0x800447A4: mul.d       $f16, $f18, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = MUL_D(ctx->f18.d, ctx->f22.d);
    // 0x800447A8: sub.d       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = ctx->f0.d - ctx->f16.d;
    // 0x800447AC: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
    // 0x800447B0: add.s       $f20, $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f8.fl;
    // 0x800447B4: jal         0x8001CB48
    // 0x800447B8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_8001CB48(rdram, ctx);
        goto after_13;
    // 0x800447B8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_13:
    // 0x800447BC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800447C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800447C4: nop

    // 0x800447C8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800447CC: nop

    // 0x800447D0: bc1f        L_800447DC
    if (!c1cs) {
        // 0x800447D4: nop
    
            goto L_800447DC;
    }
    // 0x800447D4: nop

    // 0x800447D8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_800447DC:
    // 0x800447DC: jal         0x8001CB48
    // 0x800447E0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_8001CB48(rdram, ctx);
        goto after_14;
    // 0x800447E0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_14:
    // 0x800447E4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800447E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800447EC: nop

    // 0x800447F0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800447F4: nop

    // 0x800447F8: bc1f        L_8004480C
    if (!c1cs) {
        // 0x800447FC: nop
    
            goto L_8004480C;
    }
    // 0x800447FC: nop

    // 0x80044800: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80044804: sll         $t4, $s1, 16
    ctx->r12 = S32(ctx->r17 << 16);
    // 0x80044808: sra         $s1, $t4, 16
    ctx->r17 = S32(SIGNED(ctx->r12) >> 16);
L_8004480C:
    // 0x8004480C: blez        $s1, L_80044878
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80044810: sll         $s0, $s1, 24
        ctx->r16 = S32(ctx->r17 << 24);
            goto L_80044878;
    }
    // 0x80044810: sll         $s0, $s1, 24
    ctx->r16 = S32(ctx->r17 << 24);
L_80044814:
    // 0x80044814: sra         $t8, $s0, 24
    ctx->r24 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80044818: sll         $a2, $t8, 24
    ctx->r6 = S32(ctx->r24 << 24);
    // 0x8004481C: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80044820: sll         $a1, $s2, 24
    ctx->r5 = S32(ctx->r18 << 24);
    // 0x80044824: sra         $t7, $a1, 24
    ctx->r15 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80044828: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8004482C: sra         $t9, $a2, 24
    ctx->r25 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80044830: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80044834: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80044838: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8004483C: jal         0x80044190
    // 0x80044840: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    func_80044190(rdram, ctx);
        goto after_15;
    // 0x80044840: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    after_15:
    // 0x80044844: bne         $v0, $zero, L_80044868
    if (ctx->r2 != 0) {
        // 0x80044848: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_80044868;
    }
    // 0x80044848: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8004484C: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80044850: sra         $t0, $a1, 24
    ctx->r8 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80044854: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80044858: jal         0x800440F8
    // 0x8004485C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_800440F8(rdram, ctx);
        goto after_16;
    // 0x8004485C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_16:
    // 0x80044860: b           L_8004487C
    // 0x80044864: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
        goto L_8004487C;
    // 0x80044864: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_80044868:
    // 0x80044868: sll         $t1, $s1, 16
    ctx->r9 = S32(ctx->r17 << 16);
    // 0x8004486C: sra         $s1, $t1, 16
    ctx->r17 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80044870: bgtz        $s1, L_80044814
    if (SIGNED(ctx->r17) > 0) {
        // 0x80044874: sll         $s0, $s1, 24
        ctx->r16 = S32(ctx->r17 << 24);
            goto L_80044814;
    }
    // 0x80044874: sll         $s0, $s1, 24
    ctx->r16 = S32(ctx->r17 << 24);
L_80044878:
    // 0x80044878: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_8004487C:
    // 0x8004487C: sll         $t3, $s5, 16
    ctx->r11 = S32(ctx->r21 << 16);
    // 0x80044880: sra         $s5, $t3, 16
    ctx->r21 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80044884: slti        $at, $s5, 0xB
    ctx->r1 = SIGNED(ctx->r21) < 0XB ? 1 : 0;
    // 0x80044888: bne         $at, $zero, L_80044570
    if (ctx->r1 != 0) {
        // 0x8004488C: nop
    
            goto L_80044570;
    }
    // 0x8004488C: nop

    // 0x80044890: lh          $t5, 0x84($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X84);
    // 0x80044894: nop

    // 0x80044898: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8004489C: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x800448A0: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800448A4: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x800448A8: bne         $at, $zero, L_800444B4
    if (ctx->r1 != 0) {
        // 0x800448AC: sh          $t6, 0x84($sp)
        MEM_H(0X84, ctx->r29) = ctx->r14;
            goto L_800444B4;
    }
    // 0x800448AC: sh          $t6, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r14;
    // 0x800448B0: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x800448B4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800448B8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800448BC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800448C0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800448C4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800448C8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800448CC: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x800448D0: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800448D4: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x800448D8: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800448DC: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x800448E0: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800448E4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x800448E8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x800448EC: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x800448F0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x800448F4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x800448F8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x800448FC: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80044900: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80044904: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80044908: jr          $ra
    // 0x8004490C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x8004490C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80044910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044910: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80044914: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80044918: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8004491C: sll         $s3, $a0, 24
    ctx->r19 = S32(ctx->r4 << 24);
    // 0x80044920: sll         $s4, $a1, 16
    ctx->r20 = S32(ctx->r5 << 16);
    // 0x80044924: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80044928: sra         $t7, $s4, 16
    ctx->r15 = S32(SIGNED(ctx->r20) >> 16);
    // 0x8004492C: sra         $t6, $s3, 24
    ctx->r14 = S32(SIGNED(ctx->r19) >> 24);
    // 0x80044930: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80044934: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80044938: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x8004493C: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x80044940: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x80044944: or          $s4, $t7, $zero
    ctx->r20 = ctx->r15 | 0;
    // 0x80044948: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004494C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80044950: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80044954: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80044958: addiu       $s2, $s2, -0x4280
    ctx->r18 = ADD32(ctx->r18, -0X4280);
    // 0x8004495C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80044960:
    // 0x80044960: sll         $s0, $s1, 24
    ctx->r16 = S32(ctx->r17 << 24);
    // 0x80044964: sra         $t9, $s0, 24
    ctx->r25 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80044968: sll         $a1, $t9, 24
    ctx->r5 = S32(ctx->r25 << 24);
    // 0x8004496C: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80044970: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80044974: sra         $t0, $a1, 24
    ctx->r8 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80044978: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8004497C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80044980: jal         0x8003D080
    // 0x80044984: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    func_8003D080(rdram, ctx);
        goto after_0;
    // 0x80044984: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    after_0:
    // 0x80044988: bne         $v0, $zero, L_800449A8
    if (ctx->r2 != 0) {
        // 0x8004498C: sll         $t1, $s1, 3
        ctx->r9 = S32(ctx->r17 << 3);
            goto L_800449A8;
    }
    // 0x8004498C: sll         $t1, $s1, 3
    ctx->r9 = S32(ctx->r17 << 3);
    // 0x80044990: addu        $s0, $s2, $t1
    ctx->r16 = ADD32(ctx->r18, ctx->r9);
    // 0x80044994: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x80044998: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
    // 0x8004499C: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x800449A0: b           L_80044A0C
    // 0x800449A4: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
        goto L_80044A0C;
    // 0x800449A4: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
L_800449A8:
    // 0x800449A8: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x800449AC: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x800449B0: sll         $a3, $s4, 16
    ctx->r7 = S32(ctx->r20 << 16);
    // 0x800449B4: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x800449B8: sra         $t5, $a1, 24
    ctx->r13 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800449BC: sra         $t4, $a0, 24
    ctx->r12 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800449C0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x800449C4: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x800449C8: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x800449CC: jal         0x8004237C
    // 0x800449D0: addiu       $a2, $zero, 0x86
    ctx->r6 = ADD32(0, 0X86);
    func_8004237C(rdram, ctx);
        goto after_1;
    // 0x800449D0: addiu       $a2, $zero, 0x86
    ctx->r6 = ADD32(0, 0X86);
    after_1:
    // 0x800449D4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800449D8: sra         $a0, $v0, 31
    ctx->r4 = S32(SIGNED(ctx->r2) >> 31);
    // 0x800449DC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800449E0: jal         0x80080A54
    // 0x800449E4: addiu       $a3, $zero, 0x1F
    ctx->r7 = ADD32(0, 0X1F);
    func_80080A54(rdram, ctx);
        goto after_2;
    // 0x800449E4: addiu       $a3, $zero, 0x1F
    ctx->r7 = ADD32(0, 0X1F);
    after_2:
    // 0x800449E8: sll         $t7, $s1, 3
    ctx->r15 = S32(ctx->r17 << 3);
    // 0x800449EC: addu        $s0, $s2, $t7
    ctx->r16 = ADD32(ctx->r18, ctx->r15);
    // 0x800449F0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800449F4: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x800449F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800449FC: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80044A00: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80044A04: jal         0x80080C44
    // 0x80044A08: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80080C44(rdram, ctx);
        goto after_3;
    // 0x80044A08: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_3:
L_80044A0C:
    // 0x80044A0C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80044A10: sra         $a0, $s1, 31
    ctx->r4 = S32(SIGNED(ctx->r17) >> 31);
    // 0x80044A14: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80044A18: jal         0x80080A54
    // 0x80044A1C: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    func_80080A54(rdram, ctx);
        goto after_4;
    // 0x80044A1C: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    after_4:
    // 0x80044A20: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80044A24: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x80044A28: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80044A2C: or          $t0, $t8, $v0
    ctx->r8 = ctx->r24 | ctx->r2;
    // 0x80044A30: or          $t1, $t9, $v1
    ctx->r9 = ctx->r25 | ctx->r3;
    // 0x80044A34: sll         $t6, $s1, 16
    ctx->r14 = S32(ctx->r17 << 16);
    // 0x80044A38: sltiu       $at, $t1, 0x1
    ctx->r1 = ctx->r9 < 0X1 ? 1 : 0;
    // 0x80044A3C: nor         $t4, $t0, $zero
    ctx->r12 = ~(ctx->r8 | 0);
    // 0x80044A40: sra         $s1, $t6, 16
    ctx->r17 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80044A44: addu        $t4, $t4, $at
    ctx->r12 = ADD32(ctx->r12, ctx->r1);
    // 0x80044A48: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x80044A4C: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x80044A50: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x80044A54: negu        $t5, $t1
    ctx->r13 = SUB32(0, ctx->r9);
    // 0x80044A58: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x80044A5C: bne         $at, $zero, L_80044960
    if (ctx->r1 != 0) {
        // 0x80044A60: sw          $t4, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r12;
            goto L_80044960;
    }
    // 0x80044A60: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x80044A64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80044A68: jal         0x8001CDFC
    // 0x80044A6C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8001CDFC(rdram, ctx);
        goto after_5;
    // 0x80044A6C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_5:
    // 0x80044A70: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80044A74:
    // 0x80044A74: sll         $t8, $s1, 3
    ctx->r24 = S32(ctx->r17 << 3);
    // 0x80044A78: addu        $s0, $s2, $t8
    ctx->r16 = ADD32(ctx->r18, ctx->r24);
    // 0x80044A7C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80044A80: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x80044A84: nor         $t2, $t0, $zero
    ctx->r10 = ~(ctx->r8 | 0);
    // 0x80044A88: sltiu       $at, $t1, 0x1
    ctx->r1 = ctx->r9 < 0X1 ? 1 : 0;
    // 0x80044A8C: addu        $a0, $t2, $at
    ctx->r4 = ADD32(ctx->r10, ctx->r1);
    // 0x80044A90: negu        $a1, $t1
    ctx->r5 = SUB32(0, ctx->r9);
    // 0x80044A94: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    // 0x80044A98: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x80044A9C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80044AA0: jal         0x80080C44
    // 0x80044AA4: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    func_80080C44(rdram, ctx);
        goto after_6;
    // 0x80044AA4: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    after_6:
    // 0x80044AA8: addu        $t6, $s5, $s1
    ctx->r14 = ADD32(ctx->r21, ctx->r17);
    // 0x80044AAC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80044AB0: sll         $t7, $s1, 16
    ctx->r15 = S32(ctx->r17 << 16);
    // 0x80044AB4: sra         $s1, $t7, 16
    ctx->r17 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80044AB8: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x80044ABC: andi        $t5, $v1, 0x7F
    ctx->r13 = ctx->r3 & 0X7F;
    // 0x80044AC0: bne         $at, $zero, L_80044A74
    if (ctx->r1 != 0) {
        // 0x80044AC4: sb          $t5, 0x0($t6)
        MEM_B(0X0, ctx->r14) = ctx->r13;
            goto L_80044A74;
    }
    // 0x80044AC4: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x80044AC8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80044ACC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80044AD0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80044AD4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80044AD8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80044ADC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80044AE0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80044AE4: jr          $ra
    // 0x80044AE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80044AE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80044AEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044AEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80044AF0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80044AF4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80044AF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80044AFC: lbu         $a1, 0x37($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X37);
    // 0x80044B00: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    // 0x80044B04: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80044B08: jal         0x8004DCB0
    // 0x80044B0C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    func_8004DCB0(rdram, ctx);
        goto after_0;
    // 0x80044B0C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80044B10: lh          $a0, 0x3A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3A);
    // 0x80044B14: jal         0x80044E8C
    // 0x80044B18: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80044E8C(rdram, ctx);
        goto after_1;
    // 0x80044B18: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80044B1C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80044B20: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80044B24: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80044B28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80044B2C: jal         0x8004D880
    // 0x80044B30: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    func_8004D880(rdram, ctx);
        goto after_2;
    // 0x80044B30: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80044B34: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x80044B38: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80044B3C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80044B40: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80044B44: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80044B48: lh          $a0, 0x3E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3E);
    // 0x80044B4C: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x80044B50: add.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80044B54: jal         0x8003EC2C
    // 0x80044B58: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    func_8003EC2C(rdram, ctx);
        goto after_3;
    // 0x80044B58: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    after_3:
    // 0x80044B5C: lb          $t8, 0x37($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X37);
    // 0x80044B60: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80044B64: slti        $at, $t8, 0xB
    ctx->r1 = SIGNED(ctx->r24) < 0XB ? 1 : 0;
    // 0x80044B68: bne         $at, $zero, L_80044BB0
    if (ctx->r1 != 0) {
        // 0x80044B6C: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_80044BB0;
    }
    // 0x80044B6C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80044B70: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80044B74: jal         0x8004D880
    // 0x80044B78: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    func_8004D880(rdram, ctx);
        goto after_4;
    // 0x80044B78: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    after_4:
    // 0x80044B7C: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80044B80: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x80044B84: bne         $t9, $zero, L_80044BB0
    if (ctx->r25 != 0) {
        // 0x80044B88: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_80044BB0;
    }
    // 0x80044B88: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044B8C: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80044B90: lwc1        $f7, 0x73F8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X73F8);
    // 0x80044B94: lwc1        $f6, 0x73FC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X73FC);
    // 0x80044B98: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80044B9C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80044BA0: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80044BA4: add.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d + ctx->f8.d;
    // 0x80044BA8: b           L_80044D6C
    // 0x80044BAC: cvt.s.d     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f14.fl = CVT_S_D(ctx->f16.d);
        goto L_80044D6C;
    // 0x80044BAC: cvt.s.d     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f14.fl = CVT_S_D(ctx->f16.d);
L_80044BB0:
    // 0x80044BB0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80044BB4: addiu       $a1, $a1, -0x30A0
    ctx->r5 = ADD32(ctx->r5, -0X30A0);
    // 0x80044BB8: lb          $t0, 0x1($a1)
    ctx->r8 = MEM_B(ctx->r5, 0X1);
    // 0x80044BBC: lh          $a0, 0x3E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3E);
    // 0x80044BC0: bne         $t0, $zero, L_80044D44
    if (ctx->r8 != 0) {
        // 0x80044BC4: lh          $t2, 0x2E($sp)
        ctx->r10 = MEM_H(ctx->r29, 0X2E);
            goto L_80044D44;
    }
    // 0x80044BC4: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x80044BC8: jal         0x8003EC2C
    // 0x80044BCC: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    func_8003EC2C(rdram, ctx);
        goto after_5;
    // 0x80044BCC: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    after_5:
    // 0x80044BD0: lb          $t7, 0x33($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X33);
    // 0x80044BD4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80044BD8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80044BDC: addiu       $a1, $a1, -0x30A0
    ctx->r5 = ADD32(ctx->r5, -0X30A0);
    // 0x80044BE0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80044BE4: lb          $v1, 0x0($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X0);
    // 0x80044BE8: lb          $t3, 0x5($a1)
    ctx->r11 = MEM_B(ctx->r5, 0X5);
    // 0x80044BEC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80044BF0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80044BF4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80044BF8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80044BFC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80044C00: sll         $t1, $v1, 16
    ctx->r9 = S32(ctx->r3 << 16);
    // 0x80044C04: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80044C08: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80044C0C: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80044C10: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80044C14: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80044C18: addu        $t5, $t4, $t2
    ctx->r13 = ADD32(ctx->r12, ctx->r10);
    // 0x80044C1C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80044C20: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80044C24: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80044C28: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80044C2C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80044C30: lb          $t6, 0x78D8($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X78D8);
    // 0x80044C34: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80044C38: lbu         $t9, -0x2CF0($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X2CF0);
    // 0x80044C3C: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80044C40: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80044C44: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x80044C48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80044C4C: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x80044C50: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80044C54: lbu         $a0, -0x58A8($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X58A8);
    // 0x80044C58: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80044C5C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80044C60: beq         $a0, $at, L_80044CAC
    if (ctx->r4 == ctx->r1) {
        // 0x80044C64: div.s       $f12, $f4, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
            goto L_80044CAC;
    }
    // 0x80044C64: div.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80044C68: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80044C6C: beq         $a0, $at, L_80044C84
    if (ctx->r4 == ctx->r1) {
        // 0x80044C70: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80044C84;
    }
    // 0x80044C70: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80044C74: beq         $a0, $at, L_80044C8C
    if (ctx->r4 == ctx->r1) {
        // 0x80044C78: nop
    
            goto L_80044C8C;
    }
    // 0x80044C78: nop

    // 0x80044C7C: b           L_80044CC8
    // 0x80044C80: lb          $t0, 0x4($a1)
    ctx->r8 = MEM_B(ctx->r5, 0X4);
        goto L_80044CC8;
    // 0x80044C80: lb          $t0, 0x4($a1)
    ctx->r8 = MEM_B(ctx->r5, 0X4);
L_80044C84:
    // 0x80044C84: b           L_80044CC4
    // 0x80044C88: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_80044CC4;
    // 0x80044C88: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_80044C8C:
    // 0x80044C8C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044C90: lwc1        $f17, 0x7400($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X7400);
    // 0x80044C94: lwc1        $f16, 0x7404($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7404);
    // 0x80044C98: neg.s       $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = -ctx->f12.fl;
    // 0x80044C9C: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x80044CA0: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x80044CA4: b           L_80044CC4
    // 0x80044CA8: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
        goto L_80044CC4;
    // 0x80044CA8: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
L_80044CAC:
    // 0x80044CAC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044CB0: lwc1        $f7, 0x7408($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X7408);
    // 0x80044CB4: lwc1        $f6, 0x740C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X740C);
    // 0x80044CB8: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x80044CBC: mul.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80044CC0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
L_80044CC4:
    // 0x80044CC4: lb          $t0, 0x4($a1)
    ctx->r8 = MEM_B(ctx->r5, 0X4);
L_80044CC8:
    // 0x80044CC8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80044CCC: sltiu       $t1, $t0, 0x1
    ctx->r9 = ctx->r8 < 0X1 ? 1 : 0;
    // 0x80044CD0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80044CD4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80044CD8: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80044CDC: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x80044CE0: nop

    // 0x80044CE4: bc1f        L_80044CF8
    if (!c1cs) {
        // 0x80044CE8: nop
    
            goto L_80044CF8;
    }
    // 0x80044CE8: nop

    // 0x80044CEC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80044CF0: nop

    // 0x80044CF4: div.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f16.fl);
L_80044CF8:
    // 0x80044CF8: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x80044CFC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044D00: bc1t        L_80044D18
    if (c1cs) {
        // 0x80044D04: nop
    
            goto L_80044D18;
    }
    // 0x80044D04: nop

    // 0x80044D08: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x80044D0C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80044D10: b           L_80044D2C
    // 0x80044D14: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
        goto L_80044D2C;
    // 0x80044D14: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
L_80044D18:
    // 0x80044D18: lwc1        $f19, 0x7410($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7410);
    // 0x80044D1C: lwc1        $f18, 0x7414($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7414);
    // 0x80044D20: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x80044D24: mul.d       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f2.d = MUL_D(ctx->f0.d, ctx->f18.d);
    // 0x80044D28: nop

L_80044D2C:
    // 0x80044D2C: add.d       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f0.d + ctx->f2.d;
    // 0x80044D30: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80044D34: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    // 0x80044D38: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80044D3C: add.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x80044D40: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
L_80044D44:
    // 0x80044D44: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80044D48: bne         $t2, $zero, L_80044D6C
    if (ctx->r10 != 0) {
        // 0x80044D4C: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_80044D6C;
    }
    // 0x80044D4C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044D50: lwc1        $f19, 0x7418($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7418);
    // 0x80044D54: lwc1        $f18, 0x741C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X741C);
    // 0x80044D58: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x80044D5C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80044D60: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x80044D64: sub.d       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f6.d - ctx->f4.d;
    // 0x80044D68: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
L_80044D6C:
    // 0x80044D6C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80044D70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80044D74: jal         0x8004D880
    // 0x80044D78: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    func_8004D880(rdram, ctx);
        goto after_6;
    // 0x80044D78: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    after_6:
    // 0x80044D7C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80044D80: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x80044D84: lb          $t3, 0x663C($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X663C);
    // 0x80044D88: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80044D8C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80044D90: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80044D94: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80044D98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80044D9C: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80044DA0: mul.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80044DA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80044DA8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80044DAC: div.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80044DB0: add.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x80044DB4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80044DB8: nop

    // 0x80044DBC: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80044DC0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80044DC4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80044DC8: nop

    // 0x80044DCC: cvt.w.s     $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.u32l = CVT_W_S(ctx->f14.fl);
    // 0x80044DD0: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x80044DD4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80044DD8: jal         0x8001D4C0
    // 0x80044DDC: nop

    func_8001D4C0(rdram, ctx);
        goto after_7;
    // 0x80044DDC: nop

    after_7:
    // 0x80044DE0: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80044DE4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80044DE8: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80044DEC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80044DF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80044DF4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80044DF8: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x80044DFC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80044E00: cvt.w.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80044E04: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x80044E08: nop

    // 0x80044E0C: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x80044E10: beq         $a2, $zero, L_80044E5C
    if (ctx->r6 == 0) {
        // 0x80044E14: nop
    
            goto L_80044E5C;
    }
    // 0x80044E14: nop

    // 0x80044E18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80044E1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80044E20: sub.s       $f6, $f18, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80044E24: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80044E28: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x80044E2C: nop

    // 0x80044E30: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80044E34: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x80044E38: nop

    // 0x80044E3C: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x80044E40: bne         $a2, $zero, L_80044E54
    if (ctx->r6 != 0) {
        // 0x80044E44: nop
    
            goto L_80044E54;
    }
    // 0x80044E44: nop

    // 0x80044E48: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80044E4C: b           L_80044E6C
    // 0x80044E50: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_80044E6C;
    // 0x80044E50: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_80044E54:
    // 0x80044E54: b           L_80044E6C
    // 0x80044E58: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_80044E6C;
    // 0x80044E58: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_80044E5C:
    // 0x80044E5C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80044E60: nop

    // 0x80044E64: bltz        $a2, L_80044E54
    if (SIGNED(ctx->r6) < 0) {
        // 0x80044E68: nop
    
            goto L_80044E54;
    }
    // 0x80044E68: nop

L_80044E6C:
    // 0x80044E6C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80044E70: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x80044E74: jal         0x8004D9DC
    // 0x80044E78: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_8004D9DC(rdram, ctx);
        goto after_8;
    // 0x80044E78: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_8:
    // 0x80044E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80044E80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80044E84: jr          $ra
    // 0x80044E88: nop

    return;
    // 0x80044E88: nop

;}
RECOMP_FUNC void func_80044E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044E8C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80044E90: or          $t7, $a0, $zero
    ctx->r15 = ctx->r4 | 0;
    // 0x80044E94: addiu       $a0, $t7, -0x1
    ctx->r4 = ADD32(ctx->r15, -0X1);
    // 0x80044E98: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x80044E9C: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80044EA0: bltz        $a0, L_80044EAC
    if (SIGNED(ctx->r4) < 0) {
        // 0x80044EA4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80044EAC;
    }
    // 0x80044EA4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80044EA8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_80044EAC:
    // 0x80044EAC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80044EB0: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x80044EB4: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80044EB8: bltz        $t1, L_80044ED0
    if (SIGNED(ctx->r9) < 0) {
        // 0x80044EBC: nop
    
            goto L_80044ED0;
    }
    // 0x80044EBC: nop

    // 0x80044EC0: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x80044EC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80044EC8: sll         $t2, $v1, 16
    ctx->r10 = S32(ctx->r3 << 16);
    // 0x80044ECC: sra         $v1, $t2, 16
    ctx->r3 = S32(SIGNED(ctx->r10) >> 16);
L_80044ED0:
    // 0x80044ED0: jr          $ra
    // 0x80044ED4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80044ED4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80044ED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044ED8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80044EDC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80044EE0: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80044EE4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80044EE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80044EEC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80044EF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80044EF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80044EF8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80044EFC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80044F00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80044F04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80044F08: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80044F0C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80044F10: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80044F14: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x80044F18: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80044F1C: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x80044F20: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x80044F24: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x80044F28: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80044F2C: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80044F30: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80044F34: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80044F38: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80044F3C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80044F40: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80044F44: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80044F48: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80044F4C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80044F50: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80044F54: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80044F58: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80044F5C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80044F60: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80044F64: lb          $a0, 0x1($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X1);
    // 0x80044F68: jal         0x8003EC2C
    // 0x80044F6C: nop

    func_8003EC2C(rdram, ctx);
        goto after_0;
    // 0x80044F6C: nop

    after_0:
    // 0x80044F70: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80044F74: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80044F78: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80044F7C: lh          $fp, 0x2($v0)
    ctx->r30 = MEM_H(ctx->r2, 0X2);
    // 0x80044F80: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80044F84: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80044F88: sll         $s6, $s7, 24
    ctx->r22 = S32(ctx->r23 << 24);
L_80044F8C:
    // 0x80044F8C: sra         $t9, $s6, 24
    ctx->r25 = S32(SIGNED(ctx->r22) >> 24);
    // 0x80044F90: or          $s6, $t9, $zero
    ctx->r22 = ctx->r25 | 0;
    // 0x80044F94: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80044F98: sll         $s0, $s2, 24
    ctx->r16 = S32(ctx->r18 << 24);
L_80044F9C:
    // 0x80044F9C: sra         $t1, $s0, 24
    ctx->r9 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80044FA0: sll         $a1, $t1, 24
    ctx->r5 = S32(ctx->r9 << 24);
    // 0x80044FA4: sll         $a0, $s6, 24
    ctx->r4 = S32(ctx->r22 << 24);
    // 0x80044FA8: sll         $a3, $fp, 16
    ctx->r7 = S32(ctx->r30 << 16);
    // 0x80044FAC: sra         $t3, $a3, 16
    ctx->r11 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80044FB0: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80044FB4: sra         $t2, $a1, 24
    ctx->r10 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80044FB8: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x80044FBC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80044FC0: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x80044FC4: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x80044FC8: jal         0x80042320
    // 0x80044FCC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80042320(rdram, ctx);
        goto after_1;
    // 0x80044FCC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x80044FD0: sll         $s4, $v0, 16
    ctx->r20 = S32(ctx->r2 << 16);
    // 0x80044FD4: sll         $a0, $s6, 24
    ctx->r4 = S32(ctx->r22 << 24);
    // 0x80044FD8: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80044FDC: sra         $t4, $s4, 16
    ctx->r12 = S32(SIGNED(ctx->r20) >> 16);
    // 0x80044FE0: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80044FE4: sra         $t5, $a0, 24
    ctx->r13 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80044FE8: or          $s4, $t4, $zero
    ctx->r20 = ctx->r12 | 0;
    // 0x80044FEC: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80044FF0: jal         0x8003D080
    // 0x80044FF4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_8003D080(rdram, ctx);
        goto after_2;
    // 0x80044FF4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_2:
    // 0x80044FF8: beq         $v0, $zero, L_800451C8
    if (ctx->r2 == 0) {
        // 0x80044FFC: andi        $s0, $s7, 0xFF
        ctx->r16 = ctx->r23 & 0XFF;
            goto L_800451C8;
    }
    // 0x80044FFC: andi        $s0, $s7, 0xFF
    ctx->r16 = ctx->r23 & 0XFF;
    // 0x80045000: andi        $s1, $s2, 0xFF
    ctx->r17 = ctx->r18 & 0XFF;
    // 0x80045004: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x80045008: jal         0x8004DCB0
    // 0x8004500C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_8004DCB0(rdram, ctx);
        goto after_3;
    // 0x8004500C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_3:
    // 0x80045010: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80045014: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80045018: jal         0x8004D880
    // 0x8004501C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8004D880(rdram, ctx);
        goto after_4;
    // 0x8004501C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80045020: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80045024: bgez        $v0, L_8004503C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80045028: cvt.s.w     $f20, $f4
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8004503C;
    }
    // 0x80045028: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004502C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80045030: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80045034: nop

    // 0x80045038: add.s       $f20, $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f6.fl;
L_8004503C:
    // 0x8004503C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x80045040: jal         0x8004D5B0
    // 0x80045044: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    func_8004D5B0(rdram, ctx);
        goto after_5;
    // 0x80045044: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    after_5:
    // 0x80045048: andi        $s3, $v0, 0xFF
    ctx->r19 = ctx->r2 & 0XFF;
    // 0x8004504C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x80045050: jal         0x80042AEC
    // 0x80045054: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    func_80042AEC(rdram, ctx);
        goto after_6;
    // 0x80045054: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    after_6:
    // 0x80045058: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8004505C: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x80045060: lbu         $t7, 0x66B0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X66B0);
    // 0x80045064: mtc1        $s4, $f16
    ctx->f16.u32l = ctx->r20;
    // 0x80045068: addu        $t8, $t7, $s3
    ctx->r24 = ADD32(ctx->r15, ctx->r19);
    // 0x8004506C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80045070: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80045074: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80045078: sub.s       $f20, $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f10.fl;
    // 0x8004507C: jal         0x8001CB48
    // 0x80045080: div.s       $f12, $f18, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = DIV_S(ctx->f18.fl, ctx->f24.fl);
    func_8001CB48(rdram, ctx);
        goto after_7;
    // 0x80045080: div.s       $f12, $f18, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = DIV_S(ctx->f18.fl, ctx->f24.fl);
    after_7:
    // 0x80045084: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80045088: jal         0x8001CB48
    // 0x8004508C: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    func_8001CB48(rdram, ctx);
        goto after_8;
    // 0x8004508C: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    after_8:
    // 0x80045090: sub.s       $f4, $f22, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x80045094: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80045098: add.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x8004509C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800450A0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800450A4: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x800450A8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x800450AC: cvt.w.s     $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    ctx->f6.u32l = CVT_W_S(ctx->f20.fl);
    // 0x800450B0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800450B4: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x800450B8: nop

    // 0x800450BC: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x800450C0: beq         $a0, $zero, L_8004510C
    if (ctx->r4 == 0) {
        // 0x800450C4: nop
    
            goto L_8004510C;
    }
    // 0x800450C4: nop

    // 0x800450C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800450CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800450D0: sub.s       $f6, $f20, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f20.fl - ctx->f6.fl;
    // 0x800450D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800450D8: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x800450DC: nop

    // 0x800450E0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800450E4: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x800450E8: nop

    // 0x800450EC: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x800450F0: bne         $a0, $zero, L_80045104
    if (ctx->r4 != 0) {
        // 0x800450F4: nop
    
            goto L_80045104;
    }
    // 0x800450F4: nop

    // 0x800450F8: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x800450FC: b           L_8004511C
    // 0x80045100: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_8004511C;
    // 0x80045100: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_80045104:
    // 0x80045104: b           L_8004511C
    // 0x80045108: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_8004511C;
    // 0x80045108: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_8004510C:
    // 0x8004510C: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80045110: nop

    // 0x80045114: bltz        $a0, L_80045104
    if (SIGNED(ctx->r4) < 0) {
        // 0x80045118: nop
    
            goto L_80045104;
    }
    // 0x80045118: nop

L_8004511C:
    // 0x8004511C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80045120: andi        $t0, $a0, 0xFF
    ctx->r8 = ctx->r4 & 0XFF;
    // 0x80045124: jal         0x8001D4C0
    // 0x80045128: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8001D4C0(rdram, ctx);
        goto after_9;
    // 0x80045128: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_9:
    // 0x8004512C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80045130: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80045134: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80045138: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8004513C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80045140: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80045144: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x80045148: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8004514C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80045150: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x80045154: nop

    // 0x80045158: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x8004515C: beq         $a2, $zero, L_800451A8
    if (ctx->r6 == 0) {
        // 0x80045160: nop
    
            goto L_800451A8;
    }
    // 0x80045160: nop

    // 0x80045164: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80045168: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8004516C: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80045170: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80045174: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x80045178: nop

    // 0x8004517C: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80045180: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x80045184: nop

    // 0x80045188: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x8004518C: bne         $a2, $zero, L_800451A0
    if (ctx->r6 != 0) {
        // 0x80045190: nop
    
            goto L_800451A0;
    }
    // 0x80045190: nop

    // 0x80045194: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80045198: b           L_800451B8
    // 0x8004519C: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_800451B8;
    // 0x8004519C: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_800451A0:
    // 0x800451A0: b           L_800451B8
    // 0x800451A4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_800451B8;
    // 0x800451A4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_800451A8:
    // 0x800451A8: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x800451AC: nop

    // 0x800451B0: bltz        $a2, L_800451A0
    if (SIGNED(ctx->r6) < 0) {
        // 0x800451B4: nop
    
            goto L_800451A0;
    }
    // 0x800451B4: nop

L_800451B8:
    // 0x800451B8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800451BC: andi        $t2, $a2, 0xFF
    ctx->r10 = ctx->r6 & 0XFF;
    // 0x800451C0: jal         0x8004D9DC
    // 0x800451C4: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    func_8004D9DC(rdram, ctx);
        goto after_10;
    // 0x800451C4: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_10:
L_800451C8:
    // 0x800451C8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800451CC: sll         $t3, $s2, 16
    ctx->r11 = S32(ctx->r18 << 16);
    // 0x800451D0: sra         $s2, $t3, 16
    ctx->r18 = S32(SIGNED(ctx->r11) >> 16);
    // 0x800451D4: slti        $at, $s2, 0xB
    ctx->r1 = SIGNED(ctx->r18) < 0XB ? 1 : 0;
    // 0x800451D8: bne         $at, $zero, L_80044F9C
    if (ctx->r1 != 0) {
        // 0x800451DC: sll         $s0, $s2, 24
        ctx->r16 = S32(ctx->r18 << 24);
            goto L_80044F9C;
    }
    // 0x800451DC: sll         $s0, $s2, 24
    ctx->r16 = S32(ctx->r18 << 24);
    // 0x800451E0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x800451E4: sll         $t5, $s7, 16
    ctx->r13 = S32(ctx->r23 << 16);
    // 0x800451E8: sra         $s7, $t5, 16
    ctx->r23 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800451EC: slti        $at, $s7, 0x2
    ctx->r1 = SIGNED(ctx->r23) < 0X2 ? 1 : 0;
    // 0x800451F0: bne         $at, $zero, L_80044F8C
    if (ctx->r1 != 0) {
        // 0x800451F4: sll         $s6, $s7, 24
        ctx->r22 = S32(ctx->r23 << 24);
            goto L_80044F8C;
    }
    // 0x800451F4: sll         $s6, $s7, 24
    ctx->r22 = S32(ctx->r23 << 24);
    // 0x800451F8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x800451FC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80045200: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80045204: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80045208: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8004520C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80045210: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80045214: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80045218: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8004521C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80045220: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80045224: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80045228: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8004522C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80045230: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80045234: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80045238: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x8004523C: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x80045240: jr          $ra
    // 0x80045244: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80045244: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80045248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045248: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8004524C: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80045250: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80045254: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80045258: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8004525C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80045260: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80045264: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80045268: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8004526C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80045270: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80045274: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80045278: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004527C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80045280: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80045284: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80045288: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8004528C: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x80045290: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80045294: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80045298: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8004529C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800452A0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800452A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800452A8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800452AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800452B0: jal         0x8003ED00
    // 0x800452B4: addu        $fp, $t7, $t8
    ctx->r30 = ADD32(ctx->r15, ctx->r24);
    func_8003ED00(rdram, ctx);
        goto after_0;
    // 0x800452B4: addu        $fp, $t7, $t8
    ctx->r30 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x800452B8: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x800452BC: addiu       $t9, $t9, -0x78AC
    ctx->r25 = ADD32(ctx->r25, -0X78AC);
    // 0x800452C0: lui         $s6, 0x8004
    ctx->r22 = S32(0X8004 << 16);
    // 0x800452C4: lui         $s7, 0x8004
    ctx->r23 = S32(0X8004 << 16);
    // 0x800452C8: sh          $v0, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r2;
    // 0x800452CC: addiu       $s7, $s7, 0x7DBC
    ctx->r23 = ADD32(ctx->r23, 0X7DBC);
    // 0x800452D0: addiu       $s6, $s6, 0x7CA8
    ctx->r22 = ADD32(ctx->r22, 0X7CA8);
    // 0x800452D4: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x800452D8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800452DC: addiu       $s2, $sp, 0x5C
    ctx->r18 = ADD32(ctx->r29, 0X5C);
    // 0x800452E0: sll         $s5, $s3, 24
    ctx->r21 = S32(ctx->r19 << 24);
L_800452E4:
    // 0x800452E4: sra         $t0, $s5, 24
    ctx->r8 = S32(SIGNED(ctx->r21) >> 24);
    // 0x800452E8: sll         $a0, $t0, 24
    ctx->r4 = S32(ctx->r8 << 24);
    // 0x800452EC: sra         $t1, $a0, 24
    ctx->r9 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800452F0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x800452F4: or          $s5, $t0, $zero
    ctx->r21 = ctx->r8 | 0;
    // 0x800452F8: jal         0x8027F80C
    // 0x800452FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    LOOKUP_FUNC(0x8027F80C)(rdram, ctx);
        goto after_1;
    // 0x800452FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_1:
    // 0x80045300: andi        $s1, $s3, 0xFF
    ctx->r17 = ctx->r19 & 0XFF;
    // 0x80045304: jal         0x8006E028
    // 0x80045308: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_8006E028(rdram, ctx);
        goto after_2;
    // 0x80045308: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_2:
    // 0x8004530C: sll         $a0, $s5, 24
    ctx->r4 = S32(ctx->r21 << 24);
    // 0x80045310: sra         $t2, $a0, 24
    ctx->r10 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80045314: jal         0x800436B4
    // 0x80045318: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_800436B4(rdram, ctx);
        goto after_3;
    // 0x80045318: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_3:
    // 0x8004531C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80045320: lbu         $t3, -0x32B0($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X32B0);
    // 0x80045324: nop

    // 0x80045328: bne         $t3, $zero, L_80045390
    if (ctx->r11 != 0) {
        // 0x8004532C: sll         $a0, $s3, 16
        ctx->r4 = S32(ctx->r19 << 16);
            goto L_80045390;
    }
    // 0x8004532C: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x80045330: lb          $a0, 0x1($fp)
    ctx->r4 = MEM_B(ctx->r30, 0X1);
    // 0x80045334: jal         0x80049A4C
    // 0x80045338: nop

    func_80049A4C(rdram, ctx);
        goto after_4;
    // 0x80045338: nop

    after_4:
    // 0x8004533C: bne         $v0, $zero, L_80045378
    if (ctx->r2 != 0) {
        // 0x80045340: sll         $a0, $s5, 24
        ctx->r4 = S32(ctx->r21 << 24);
            goto L_80045378;
    }
    // 0x80045340: sll         $a0, $s5, 24
    ctx->r4 = S32(ctx->r21 << 24);
    // 0x80045344: bne         $s3, $zero, L_80045364
    if (ctx->r19 != 0) {
        // 0x80045348: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80045364;
    }
    // 0x80045348: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8004534C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80045350: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80045354: jal         0x80038620
    // 0x80045358: addiu       $a2, $zero, 0x45
    ctx->r6 = ADD32(0, 0X45);
    func_80038620(rdram, ctx);
        goto after_5;
    // 0x80045358: addiu       $a2, $zero, 0x45
    ctx->r6 = ADD32(0, 0X45);
    after_5:
    // 0x8004535C: b           L_80045390
    // 0x80045360: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
        goto L_80045390;
    // 0x80045360: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
L_80045364:
    // 0x80045364: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80045368: jal         0x80038620
    // 0x8004536C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80038620(rdram, ctx);
        goto after_6;
    // 0x8004536C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80045370: b           L_80045390
    // 0x80045374: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
        goto L_80045390;
    // 0x80045374: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
L_80045378:
    // 0x80045378: sra         $t4, $a0, 24
    ctx->r12 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8004537C: lh          $a2, 0x60($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X60);
    // 0x80045380: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80045384: jal         0x80038620
    // 0x80045388: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80038620(rdram, ctx);
        goto after_7;
    // 0x80045388: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_7:
    // 0x8004538C: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
L_80045390:
    // 0x80045390: sra         $t5, $a0, 16
    ctx->r13 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80045394: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80045398: jal         0x80047B84
    // 0x8004539C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80047B84(rdram, ctx);
        goto after_8;
    // 0x8004539C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_8:
    // 0x800453A0: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x800453A4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800453A8: jal         0x80048BFC
    // 0x800453AC: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    func_80048BFC(rdram, ctx);
        goto after_9;
    // 0x800453AC: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    after_9:
    // 0x800453B0: jal         0x80047AE4
    // 0x800453B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80047AE4(rdram, ctx);
        goto after_10;
    // 0x800453B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_10:
    // 0x800453B8: beq         $v0, $zero, L_800453F8
    if (ctx->r2 == 0) {
        // 0x800453BC: sll         $a0, $s5, 24
        ctx->r4 = S32(ctx->r21 << 24);
            goto L_800453F8;
    }
    // 0x800453BC: sll         $a0, $s5, 24
    ctx->r4 = S32(ctx->r21 << 24);
    // 0x800453C0: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800453C4: lb          $a1, 0x1($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X1);
    // 0x800453C8: lb          $a2, 0x3($s2)
    ctx->r6 = MEM_B(ctx->r18, 0X3);
    // 0x800453CC: jal         0x80045644
    // 0x800453D0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_80045644(rdram, ctx);
        goto after_11;
    // 0x800453D0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_11:
    // 0x800453D4: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x800453D8: jal         0x80048B78
    // 0x800453DC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_80048B78(rdram, ctx);
        goto after_12;
    // 0x800453DC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_12:
    // 0x800453E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800453E4: sll         $t7, $s0, 16
    ctx->r15 = S32(ctx->r16 << 16);
    // 0x800453E8: sra         $s0, $t7, 16
    ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800453EC: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x800453F0: bne         $at, $zero, L_80045390
    if (ctx->r1 != 0) {
        // 0x800453F4: sll         $a0, $s3, 16
        ctx->r4 = S32(ctx->r19 << 16);
            goto L_80045390;
    }
    // 0x800453F4: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
L_800453F8:
    // 0x800453F8: lb          $a0, 0x7($fp)
    ctx->r4 = MEM_B(ctx->r30, 0X7);
    // 0x800453FC: lb          $a1, 0x8($fp)
    ctx->r5 = MEM_B(ctx->r30, 0X8);
    // 0x80045400: jal         0x8003CCB0
    // 0x80045404: nop

    func_8003CCB0(rdram, ctx);
        goto after_13;
    // 0x80045404: nop

    after_13:
    // 0x80045408: bne         $v0, $zero, L_800454A8
    if (ctx->r2 != 0) {
        // 0x8004540C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_800454A8;
    }
    // 0x8004540C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80045410: lui         $s4, 0x8005
    ctx->r20 = S32(0X8005 << 16);
    // 0x80045414: addiu       $s4, $s4, -0x7BD4
    ctx->r20 = ADD32(ctx->r20, -0X7BD4);
    // 0x80045418: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
L_8004541C:
    // 0x8004541C: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80045420: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80045424: jal         0x80047B84
    // 0x80045428: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80047B84(rdram, ctx);
        goto after_14;
    // 0x80045428: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_14:
    // 0x8004542C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80045430: jal         0x80047AE4
    // 0x80045434: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    func_80047AE4(rdram, ctx);
        goto after_15;
    // 0x80045434: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    after_15:
    // 0x80045438: bne         $v0, $zero, L_80045454
    if (ctx->r2 != 0) {
        // 0x8004543C: sll         $a0, $s3, 16
        ctx->r4 = S32(ctx->r19 << 16);
            goto L_80045454;
    }
    // 0x8004543C: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x80045440: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80045444: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80045448: jal         0x80047B84
    // 0x8004544C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80047B84(rdram, ctx);
        goto after_16;
    // 0x8004544C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_16:
    // 0x80045450: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
L_80045454:
    // 0x80045454: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80045458: jal         0x80048BFC
    // 0x8004545C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_80048BFC(rdram, ctx);
        goto after_17;
    // 0x8004545C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_17:
    // 0x80045460: jal         0x80047AE4
    // 0x80045464: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80047AE4(rdram, ctx);
        goto after_18;
    // 0x80045464: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_18:
    // 0x80045468: beq         $v0, $zero, L_800454A8
    if (ctx->r2 == 0) {
        // 0x8004546C: sll         $a0, $s5, 24
        ctx->r4 = S32(ctx->r21 << 24);
            goto L_800454A8;
    }
    // 0x8004546C: sll         $a0, $s5, 24
    ctx->r4 = S32(ctx->r21 << 24);
    // 0x80045470: sra         $t1, $a0, 24
    ctx->r9 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80045474: lb          $a1, 0x1($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X1);
    // 0x80045478: lb          $a2, 0x3($s2)
    ctx->r6 = MEM_B(ctx->r18, 0X3);
    // 0x8004547C: jal         0x80045644
    // 0x80045480: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_80045644(rdram, ctx);
        goto after_19;
    // 0x80045480: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_19:
    // 0x80045484: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80045488: jal         0x80048B78
    // 0x8004548C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_80048B78(rdram, ctx);
        goto after_20;
    // 0x8004548C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_20:
    // 0x80045490: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80045494: sll         $t2, $s0, 16
    ctx->r10 = S32(ctx->r16 << 16);
    // 0x80045498: sra         $s0, $t2, 16
    ctx->r16 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8004549C: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x800454A0: bne         $at, $zero, L_8004541C
    if (ctx->r1 != 0) {
        // 0x800454A4: sll         $a0, $s3, 16
        ctx->r4 = S32(ctx->r19 << 16);
            goto L_8004541C;
    }
    // 0x800454A4: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
L_800454A8:
    // 0x800454A8: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x800454AC: sra         $t4, $a0, 16
    ctx->r12 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800454B0: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x800454B4: jal         0x80047B84
    // 0x800454B8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_80047B84(rdram, ctx);
        goto after_21;
    // 0x800454B8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_21:
    // 0x800454BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800454C0: jal         0x80047AE4
    // 0x800454C4: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    func_80047AE4(rdram, ctx);
        goto after_22;
    // 0x800454C4: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    after_22:
    // 0x800454C8: beq         $v0, $zero, L_800454E4
    if (ctx->r2 == 0) {
        // 0x800454CC: sll         $a0, $s5, 24
        ctx->r4 = S32(ctx->r21 << 24);
            goto L_800454E4;
    }
    // 0x800454CC: sll         $a0, $s5, 24
    ctx->r4 = S32(ctx->r21 << 24);
    // 0x800454D0: sra         $t5, $a0, 24
    ctx->r13 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800454D4: lb          $a1, 0x1($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X1);
    // 0x800454D8: lb          $a2, 0x3($s2)
    ctx->r6 = MEM_B(ctx->r18, 0X3);
    // 0x800454DC: jal         0x80045644
    // 0x800454E0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_80045644(rdram, ctx);
        goto after_23;
    // 0x800454E0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_23:
L_800454E4:
    // 0x800454E4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800454E8: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x800454EC: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800454F0: slti        $at, $s3, 0x2
    ctx->r1 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x800454F4: bne         $at, $zero, L_800452E4
    if (ctx->r1 != 0) {
        // 0x800454F8: sll         $s5, $s3, 24
        ctx->r21 = S32(ctx->r19 << 24);
            goto L_800452E4;
    }
    // 0x800454F8: sll         $s5, $s3, 24
    ctx->r21 = S32(ctx->r19 << 24);
    // 0x800454FC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80045500: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80045504: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80045508: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8004550C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80045510: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80045514: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80045518: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8004551C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80045520: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80045524: jr          $ra
    // 0x80045528: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80045528: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8004552C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004552C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80045530: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80045534: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80045538: sll         $s3, $a0, 24
    ctx->r19 = S32(ctx->r4 << 24);
    // 0x8004553C: sll         $s4, $a1, 24
    ctx->r20 = S32(ctx->r5 << 24);
    // 0x80045540: sra         $t7, $s4, 24
    ctx->r15 = S32(SIGNED(ctx->r20) >> 24);
    // 0x80045544: sra         $t6, $s3, 24
    ctx->r14 = S32(SIGNED(ctx->r19) >> 24);
    // 0x80045548: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8004554C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80045550: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80045554: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x80045558: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8004555C: or          $s4, $t7, $zero
    ctx->r20 = ctx->r15 | 0;
    // 0x80045560: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80045564: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80045568: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8004556C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80045570: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80045574: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80045578: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
L_8004557C:
    // 0x8004557C: addu        $s1, $s0, $s5
    ctx->r17 = ADD32(ctx->r16, ctx->r21);
    // 0x80045580: lb          $a1, 0x0($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X0);
    // 0x80045584: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80045588: jal         0x8003D108
    // 0x8004558C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8003D108(rdram, ctx);
        goto after_0;
    // 0x8004558C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_0:
    // 0x80045590: beq         $v0, $zero, L_800455FC
    if (ctx->r2 == 0) {
        // 0x80045594: sll         $a0, $s3, 24
        ctx->r4 = S32(ctx->r19 << 24);
            goto L_800455FC;
    }
    // 0x80045594: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80045598: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8004559C: lb          $a1, 0x0($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X0);
    // 0x800455A0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x800455A4: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x800455A8: jal         0x8004237C
    // 0x800455AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004237C(rdram, ctx);
        goto after_1;
    // 0x800455AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x800455B0: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x800455B4: beq         $t0, $zero, L_800455E0
    if (ctx->r8 == 0) {
        // 0x800455B8: sll         $s2, $s0, 16
        ctx->r18 = S32(ctx->r16 << 16);
            goto L_800455E0;
    }
    // 0x800455B8: sll         $s2, $s0, 16
    ctx->r18 = S32(ctx->r16 << 16);
    // 0x800455BC: bne         $s4, $zero, L_800455D4
    if (ctx->r20 != 0) {
        // 0x800455C0: sll         $s2, $s0, 16
        ctx->r18 = S32(ctx->r16 << 16);
            goto L_800455D4;
    }
    // 0x800455C0: sll         $s2, $s0, 16
    ctx->r18 = S32(ctx->r16 << 16);
    // 0x800455C4: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x800455C8: sra         $t1, $v0, 24
    ctx->r9 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800455CC: b           L_80045620
    // 0x800455D0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_80045620;
    // 0x800455D0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_800455D4:
    // 0x800455D4: sra         $t2, $s2, 16
    ctx->r10 = S32(SIGNED(ctx->r18) >> 16);
    // 0x800455D8: b           L_800455FC
    // 0x800455DC: or          $s2, $t2, $zero
    ctx->r18 = ctx->r10 | 0;
        goto L_800455FC;
    // 0x800455DC: or          $s2, $t2, $zero
    ctx->r18 = ctx->r10 | 0;
L_800455E0:
    // 0x800455E0: beq         $s4, $zero, L_800455F8
    if (ctx->r20 == 0) {
        // 0x800455E4: sra         $t4, $s2, 16
        ctx->r12 = S32(SIGNED(ctx->r18) >> 16);
            goto L_800455F8;
    }
    // 0x800455E4: sra         $t4, $s2, 16
    ctx->r12 = S32(SIGNED(ctx->r18) >> 16);
    // 0x800455E8: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x800455EC: sra         $t3, $v0, 24
    ctx->r11 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800455F0: b           L_80045620
    // 0x800455F4: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
        goto L_80045620;
    // 0x800455F4: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_800455F8:
    // 0x800455F8: or          $s2, $t4, $zero
    ctx->r18 = ctx->r12 | 0;
L_800455FC:
    // 0x800455FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80045600: sll         $t5, $s0, 16
    ctx->r13 = S32(ctx->r16 << 16);
    // 0x80045604: sra         $s0, $t5, 16
    ctx->r16 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80045608: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x8004560C: bne         $at, $zero, L_8004557C
    if (ctx->r1 != 0) {
        // 0x80045610: sll         $a0, $s3, 24
        ctx->r4 = S32(ctx->r19 << 24);
            goto L_8004557C;
    }
    // 0x80045610: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80045614: sll         $v0, $s2, 24
    ctx->r2 = S32(ctx->r18 << 24);
    // 0x80045618: sra         $t7, $v0, 24
    ctx->r15 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8004561C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80045620:
    // 0x80045620: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80045624: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80045628: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8004562C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80045630: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80045634: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80045638: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8004563C: jr          $ra
    // 0x80045640: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80045640: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80045644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045644: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80045648: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8004564C: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80045650: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80045654: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80045658: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8004565C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80045660: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80045664: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80045668: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8004566C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80045670: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80045674: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80045678: sll         $t8, $a1, 24
    ctx->r24 = S32(ctx->r5 << 24);
    // 0x8004567C: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x80045680: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80045684: sra         $a1, $t8, 24
    ctx->r5 = S32(SIGNED(ctx->r24) >> 24);
    // 0x80045688: sll         $t4, $a2, 24
    ctx->r12 = S32(ctx->r6 << 24);
    // 0x8004568C: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80045690: sra         $t5, $t4, 24
    ctx->r13 = S32(SIGNED(ctx->r12) >> 24);
    // 0x80045694: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80045698: addu        $a3, $v1, $t5
    ctx->r7 = ADD32(ctx->r3, ctx->r13);
    // 0x8004569C: addiu       $t9, $t9, -0x32B0
    ctx->r25 = ADD32(ctx->r25, -0X32B0);
    // 0x800456A0: addu        $t1, $v1, $a1
    ctx->r9 = ADD32(ctx->r3, ctx->r5);
    // 0x800456A4: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x800456A8: lb          $v0, 0x308($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X308);
    // 0x800456AC: lbu         $t0, 0x308($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X308);
    // 0x800456B0: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x800456B4: addu        $t4, $t2, $t5
    ctx->r12 = ADD32(ctx->r10, ctx->r13);
    // 0x800456B8: addu        $t5, $t2, $a1
    ctx->r13 = ADD32(ctx->r10, ctx->r5);
    // 0x800456BC: sb          $t0, 0x1E($t4)
    MEM_B(0X1E, ctx->r12) = ctx->r8;
    // 0x800456C0: sb          $t0, 0x308($a3)
    MEM_B(0X308, ctx->r7) = ctx->r8;
    // 0x800456C4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x800456C8: sb          $v0, 0x308($t1)
    MEM_B(0X308, ctx->r9) = ctx->r2;
    // 0x800456CC: jr          $ra
    // 0x800456D0: sb          $v0, 0x1E($t5)
    MEM_B(0X1E, ctx->r13) = ctx->r2;
    return;
    // 0x800456D0: sb          $v0, 0x1E($t5)
    MEM_B(0X1E, ctx->r13) = ctx->r2;
;}
RECOMP_FUNC void func_800456D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800456D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800456D8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800456DC: sll         $s2, $a0, 24
    ctx->r18 = S32(ctx->r4 << 24);
    // 0x800456E0: sra         $t6, $s2, 24
    ctx->r14 = S32(SIGNED(ctx->r18) >> 24);
    // 0x800456E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800456E8: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x800456EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800456F0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800456F4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800456F8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800456FC: sll         $s1, $s0, 24
    ctx->r17 = S32(ctx->r16 << 24);
L_80045700:
    // 0x80045700: sra         $t8, $s1, 24
    ctx->r24 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80045704: sll         $a1, $t8, 24
    ctx->r5 = S32(ctx->r24 << 24);
    // 0x80045708: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x8004570C: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80045710: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80045714: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80045718: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8004571C: jal         0x8003D108
    // 0x80045720: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    func_8003D108(rdram, ctx);
        goto after_0;
    // 0x80045720: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    after_0:
    // 0x80045724: bne         $v0, $zero, L_80045734
    if (ctx->r2 != 0) {
        // 0x80045728: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80045734;
    }
    // 0x80045728: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004572C: b           L_8004574C
    // 0x80045730: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_8004574C;
    // 0x80045730: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_80045734:
    // 0x80045734: sll         $t0, $s0, 16
    ctx->r8 = S32(ctx->r16 << 16);
    // 0x80045738: sra         $s0, $t0, 16
    ctx->r16 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8004573C: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x80045740: bne         $at, $zero, L_80045700
    if (ctx->r1 != 0) {
        // 0x80045744: sll         $s1, $s0, 24
        ctx->r17 = S32(ctx->r16 << 24);
            goto L_80045700;
    }
    // 0x80045744: sll         $s1, $s0, 24
    ctx->r17 = S32(ctx->r16 << 24);
    // 0x80045748: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004574C:
    // 0x8004574C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80045750: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80045754: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80045758: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8004575C: jr          $ra
    // 0x80045760: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80045760: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80045764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045764: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80045768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004576C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80045770: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80045774: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80045778: jal         0x800457AC
    // 0x8004577C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800457AC(rdram, ctx);
        goto after_0;
    // 0x8004577C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80045780: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80045784: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x80045788: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x8004578C: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80045790: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80045794: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80045798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004579C: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x800457A0: lb          $v0, 0x6790($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X6790);
    // 0x800457A4: jr          $ra
    // 0x800457A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800457A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800457AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800457AC: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x800457B0: xori        $t0, $t6, 0x1
    ctx->r8 = ctx->r14 ^ 0X1;
    // 0x800457B4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800457B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800457BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800457C0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800457C4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800457C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800457CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800457D0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800457D4: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x800457D8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800457DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800457E0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800457E4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800457E8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800457EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800457F0: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x800457F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800457F8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800457FC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80045800: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80045804: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80045808: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x8004580C: lhu         $t3, 0xA($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0XA);
    // 0x80045810: lhu         $t9, 0xA($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0XA);
    // 0x80045814: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80045818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004581C: subu        $t5, $t9, $t3
    ctx->r13 = SUB32(ctx->r25, ctx->r11);
    // 0x80045820: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80045824: sh          $t5, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r13;
    // 0x80045828: jal         0x8003906C
    // 0x8004582C: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    func_8003906C(rdram, ctx);
        goto after_0;
    // 0x8004582C: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    after_0:
    // 0x80045830: lh          $v1, 0x1E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1E);
    // 0x80045834: lh          $a1, 0x1C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1C);
    // 0x80045838: beq         $v0, $zero, L_800458F0
    if (ctx->r2 == 0) {
        // 0x8004583C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800458F0;
    }
    // 0x8004583C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80045840: bltz        $a1, L_8004586C
    if (SIGNED(ctx->r5) < 0) {
        // 0x80045844: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_8004586C;
    }
    // 0x80045844: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80045848: slti        $at, $a1, 0x3
    ctx->r1 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x8004584C: bne         $at, $zero, L_8004585C
    if (ctx->r1 != 0) {
        // 0x80045850: nop
    
            goto L_8004585C;
    }
    // 0x80045850: nop

    // 0x80045854: b           L_80045880
    // 0x80045858: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_80045880;
    // 0x80045858: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_8004585C:
    // 0x8004585C: beq         $a1, $zero, L_80045880
    if (ctx->r5 == 0) {
        // 0x80045860: nop
    
            goto L_80045880;
    }
    // 0x80045860: nop

    // 0x80045864: b           L_80045880
    // 0x80045868: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80045880;
    // 0x80045868: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8004586C:
    // 0x8004586C: slti        $at, $a1, -0x2
    ctx->r1 = SIGNED(ctx->r5) < -0X2 ? 1 : 0;
    // 0x80045870: beq         $at, $zero, L_80045880
    if (ctx->r1 == 0) {
        // 0x80045874: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80045880;
    }
    // 0x80045874: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80045878: b           L_80045880
    // 0x8004587C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
        goto L_80045880;
    // 0x8004587C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_80045880:
    // 0x80045880: lhu         $v0, 0xB74($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB74);
    // 0x80045884: nop

    // 0x80045888: bne         $v0, $zero, L_800458B4
    if (ctx->r2 != 0) {
        // 0x8004588C: nop
    
            goto L_800458B4;
    }
    // 0x8004588C: nop

    // 0x80045890: bne         $v0, $zero, L_800458F0
    if (ctx->r2 != 0) {
        // 0x80045894: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800458F0;
    }
    // 0x80045894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80045898: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
    // 0x8004589C: jal         0x80048F74
    // 0x800458A0: sh          $a1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r5;
    func_80048F74(rdram, ctx);
        goto after_1;
    // 0x800458A0: sh          $a1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x800458A4: lh          $v1, 0x1E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1E);
    // 0x800458A8: lh          $a1, 0x1C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1C);
    // 0x800458AC: bne         $v0, $zero, L_800458F0
    if (ctx->r2 != 0) {
        // 0x800458B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800458F0;
    }
    // 0x800458B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800458B4:
    // 0x800458B4: bne         $a1, $zero, L_800458E4
    if (ctx->r5 != 0) {
        // 0x800458B8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800458E4;
    }
    // 0x800458B8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800458BC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800458C0: lhu         $t6, 0xB74($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB74);
    // 0x800458C4: nop

    // 0x800458C8: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x800458CC: beq         $at, $zero, L_800458DC
    if (ctx->r1 == 0) {
        // 0x800458D0: nop
    
            goto L_800458DC;
    }
    // 0x800458D0: nop

    // 0x800458D4: b           L_800458EC
    // 0x800458D8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_800458EC;
    // 0x800458D8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_800458DC:
    // 0x800458DC: b           L_800458EC
    // 0x800458E0: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
        goto L_800458EC;
    // 0x800458E0: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
L_800458E4:
    // 0x800458E4: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x800458E8: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
L_800458EC:
    // 0x800458EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800458F0:
    // 0x800458F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800458F4: jr          $ra
    // 0x800458F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800458F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800458FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800458FC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80045900: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80045904: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80045908: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8004590C: lb          $a0, 0x4B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X4B);
    // 0x80045910: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80045914: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80045918: jal         0x80045BA4
    // 0x8004591C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80045BA4(rdram, ctx);
        goto after_0;
    // 0x8004591C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x80045920: lh          $v0, 0x28($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X28);
    // 0x80045924: lh          $t6, 0x56($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X56);
    // 0x80045928: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004592C: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x80045930: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80045934: lwc1        $f1, 0x7420($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X7420);
    // 0x80045938: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004593C: lwc1        $f0, 0x7424($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7424);
    // 0x80045940: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80045944: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80045948: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x8004594C: lwc1        $f3, 0x7428($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X7428);
    // 0x80045950: lwc1        $f2, 0x742C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X742C);
    // 0x80045954: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80045958: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8004595C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80045960: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x80045964: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x80045968: lh          $t5, 0x2C($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2C);
    // 0x8004596C: lb          $a0, 0x4B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X4B);
    // 0x80045970: lb          $a1, 0x4F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X4F);
    // 0x80045974: lb          $a2, 0x53($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X53);
    // 0x80045978: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8004597C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80045980: nop

    // 0x80045984: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80045988: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004598C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80045990: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80045994: cvt.w.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_D(ctx->f18.d);
    // 0x80045998: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8004599C: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x800459A0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800459A4: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x800459A8: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800459AC: subu        $t2, $t1, $v0
    ctx->r10 = SUB32(ctx->r9, ctx->r2);
    // 0x800459B0: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x800459B4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800459B8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800459BC: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x800459C0: lh          $t1, 0x30($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X30);
    // 0x800459C4: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800459C8: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x800459CC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800459D0: nop

    // 0x800459D4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800459D8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800459DC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800459E0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800459E4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800459E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800459EC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800459F0: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x800459F4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800459F8: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800459FC: sh          $t4, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r12;
    // 0x80045A00: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80045A04: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x80045A08: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80045A0C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80045A10: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80045A14: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80045A18: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80045A1C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80045A20: nop

    // 0x80045A24: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80045A28: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80045A2C: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x80045A30: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80045A34: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x80045A38: sh          $t7, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r15;
    // 0x80045A3C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80045A40: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x80045A44: addiu       $t7, $sp, 0x28
    ctx->r15 = ADD32(ctx->r29, 0X28);
    // 0x80045A48: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80045A4C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80045A50: nop

    // 0x80045A54: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80045A58: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80045A5C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80045A60: nop

    // 0x80045A64: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x80045A68: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80045A6C: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x80045A70: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80045A74: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x80045A78: lbu         $t9, 0x5F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X5F);
    // 0x80045A7C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80045A80: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x80045A84: sh          $t0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r8;
    // 0x80045A88: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80045A8C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80045A90: nop

    // 0x80045A94: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80045A98: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80045A9C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80045AA0: nop

    // 0x80045AA4: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80045AA8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80045AAC: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x80045AB0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80045AB4: sh          $t3, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r11;
    // 0x80045AB8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80045ABC: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x80045AC0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80045AC4: nop

    // 0x80045AC8: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80045ACC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80045AD0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80045AD4: nop

    // 0x80045AD8: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x80045ADC: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80045AE0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80045AE4: jal         0x80045CBC
    // 0x80045AE8: sh          $t6, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r14;
    func_80045CBC(rdram, ctx);
        goto after_1;
    // 0x80045AE8: sh          $t6, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r14;
    after_1:
    // 0x80045AEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80045AF0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80045AF4: jr          $ra
    // 0x80045AF8: nop

    return;
    // 0x80045AF8: nop

;}
RECOMP_FUNC void func_80045AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045AFC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80045B00: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80045B04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80045B08: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80045B0C: lb          $a0, 0x4B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X4B);
    // 0x80045B10: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80045B14: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80045B18: jal         0x80045BA4
    // 0x80045B1C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80045BA4(rdram, ctx);
        goto after_0;
    // 0x80045B1C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x80045B20: lh          $v0, 0x28($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X28);
    // 0x80045B24: lh          $t6, 0x56($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X56);
    // 0x80045B28: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x80045B2C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80045B30: bgez        $v0, L_80045B40
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80045B34: sra         $t7, $v0, 1
        ctx->r15 = S32(SIGNED(ctx->r2) >> 1);
            goto L_80045B40;
    }
    // 0x80045B34: sra         $t7, $v0, 1
    ctx->r15 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80045B38: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x80045B3C: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_80045B40:
    // 0x80045B40: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x80045B44: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80045B48: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x80045B4C: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x80045B50: lbu         $t5, 0x63($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X63);
    // 0x80045B54: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80045B58: bgez        $t1, L_80045B68
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80045B5C: sra         $t2, $t1, 1
        ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
            goto L_80045B68;
    }
    // 0x80045B5C: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x80045B60: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x80045B64: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_80045B68:
    // 0x80045B68: lb          $a0, 0x4B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X4B);
    // 0x80045B6C: lb          $a1, 0x4F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X4F);
    // 0x80045B70: lb          $a2, 0x53($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X53);
    // 0x80045B74: lb          $a3, 0x5B($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X5B);
    // 0x80045B78: addiu       $t3, $sp, 0x28
    ctx->r11 = ADD32(ctx->r29, 0X28);
    // 0x80045B7C: sh          $t2, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r10;
    // 0x80045B80: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80045B84: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80045B88: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80045B8C: jal         0x80045CBC
    // 0x80045B90: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    func_80045CBC(rdram, ctx);
        goto after_1;
    // 0x80045B90: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    after_1:
    // 0x80045B94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80045B98: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80045B9C: jr          $ra
    // 0x80045BA0: nop

    return;
    // 0x80045BA0: nop

;}
RECOMP_FUNC void func_80045BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045BA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80045BA8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80045BAC: sll         $s1, $a0, 24
    ctx->r17 = S32(ctx->r4 << 24);
    // 0x80045BB0: sra         $t6, $s1, 24
    ctx->r14 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80045BB4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80045BB8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80045BBC: sll         $a0, $t6, 24
    ctx->r4 = S32(ctx->r14 << 24);
    // 0x80045BC0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80045BC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80045BC8: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80045BCC: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x80045BD0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80045BD4: jal         0x80042BE0
    // 0x80045BD8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80042BE0(rdram, ctx);
        goto after_0;
    // 0x80045BD8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x80045BDC: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80045BE0: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x80045BE4: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x80045BE8: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x80045BEC: sra         $t1, $a0, 24
    ctx->r9 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80045BF0: subu        $t0, $t9, $t8
    ctx->r8 = SUB32(ctx->r25, ctx->r24);
    // 0x80045BF4: sh          $t0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r8;
    // 0x80045BF8: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80045BFC: jal         0x80042BE0
    // 0x80045C00: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80042BE0(rdram, ctx);
        goto after_1;
    // 0x80045C00: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x80045C04: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x80045C08: sra         $t2, $a0, 24
    ctx->r10 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80045C0C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80045C10: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80045C14: jal         0x80042BE0
    // 0x80045C18: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80042BE0(rdram, ctx);
        goto after_2;
    // 0x80045C18: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x80045C1C: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x80045C20: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80045C24: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x80045C28: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80045C2C: jal         0x80042BE0
    // 0x80045C30: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80042BE0(rdram, ctx);
        goto after_3;
    // 0x80045C30: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_3:
    // 0x80045C34: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x80045C38: sra         $t4, $a0, 24
    ctx->r12 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80045C3C: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80045C40: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80045C44: jal         0x80042BE0
    // 0x80045C48: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_80042BE0(rdram, ctx);
        goto after_4;
    // 0x80045C48: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_4:
    // 0x80045C4C: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x80045C50: sra         $t5, $a0, 24
    ctx->r13 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80045C54: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80045C58: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80045C5C: jal         0x80042BE0
    // 0x80045C60: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_80042BE0(rdram, ctx);
        goto after_5;
    // 0x80045C60: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_5:
    // 0x80045C64: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80045C68: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    // 0x80045C6C: jal         0x80045764
    // 0x80045C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80045764(rdram, ctx);
        goto after_6;
    // 0x80045C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80045C74: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x80045C78: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80045C7C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80045C80: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x80045C84: jal         0x80042BE0
    // 0x80045C88: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80042BE0(rdram, ctx);
        goto after_7;
    // 0x80045C88: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_7:
    // 0x80045C8C: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x80045C90: nop

    // 0x80045C94: multu       $v0, $t7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80045C98: mflo        $t9
    ctx->r25 = lo;
    // 0x80045C9C: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80045CA0: subu        $t8, $t8, $t9
    ctx->r24 = SUB32(ctx->r24, ctx->r25);
    // 0x80045CA4: sh          $t8, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r24;
    // 0x80045CA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80045CAC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80045CB0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80045CB4: jr          $ra
    // 0x80045CB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80045CB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80045CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045CBC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80045CC0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80045CC4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80045CC8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80045CCC: sll         $s2, $a0, 24
    ctx->r18 = S32(ctx->r4 << 24);
    // 0x80045CD0: sll         $s3, $a3, 24
    ctx->r19 = S32(ctx->r7 << 24);
    // 0x80045CD4: sll         $fp, $a2, 24
    ctx->r30 = S32(ctx->r6 << 24);
    // 0x80045CD8: sra         $t7, $fp, 24
    ctx->r15 = S32(SIGNED(ctx->r30) >> 24);
    // 0x80045CDC: sra         $t8, $s3, 24
    ctx->r24 = S32(SIGNED(ctx->r19) >> 24);
    // 0x80045CE0: sra         $t6, $s2, 24
    ctx->r14 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80045CE4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80045CE8: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x80045CEC: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
    // 0x80045CF0: or          $fp, $t7, $zero
    ctx->r30 = ctx->r15 | 0;
    // 0x80045CF4: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80045CF8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80045CFC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80045D00: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80045D04: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80045D08: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80045D0C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80045D10: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80045D14: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x80045D18: jal         0x8003ED00
    // 0x80045D1C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    func_8003ED00(rdram, ctx);
        goto after_0;
    // 0x80045D1C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    after_0:
    // 0x80045D20: lb          $s1, 0x5F($sp)
    ctx->r17 = MEM_B(ctx->r29, 0X5F);
    // 0x80045D24: sll         $s5, $v0, 16
    ctx->r21 = S32(ctx->r2 << 16);
    // 0x80045D28: sra         $t9, $s5, 16
    ctx->r25 = S32(SIGNED(ctx->r21) >> 16);
    // 0x80045D2C: slt         $at, $fp, $s1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80045D30: bne         $at, $zero, L_80045F7C
    if (ctx->r1 != 0) {
        // 0x80045D34: or          $s5, $t9, $zero
        ctx->r21 = ctx->r25 | 0;
            goto L_80045F7C;
    }
    // 0x80045D34: or          $s5, $t9, $zero
    ctx->r21 = ctx->r25 | 0;
    // 0x80045D38: lui         $s7, 0x801B
    ctx->r23 = S32(0X801B << 16);
    // 0x80045D3C: lbu         $s6, 0x73($sp)
    ctx->r22 = MEM_BU(ctx->r29, 0X73);
    // 0x80045D40: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x80045D44: addiu       $s7, $s7, -0x4280
    ctx->r23 = ADD32(ctx->r23, -0X4280);
L_80045D48:
    // 0x80045D48: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x80045D4C: beq         $at, $zero, L_80045DA4
    if (ctx->r1 == 0) {
        // 0x80045D50: sll         $a0, $s2, 24
        ctx->r4 = S32(ctx->r18 << 24);
            goto L_80045DA4;
    }
    // 0x80045D50: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x80045D54: sll         $s0, $s1, 24
    ctx->r16 = S32(ctx->r17 << 24);
    // 0x80045D58: sra         $t2, $s0, 24
    ctx->r10 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80045D5C: sll         $a1, $t2, 24
    ctx->r5 = S32(ctx->r10 << 24);
    // 0x80045D60: sll         $a2, $t2, 24
    ctx->r6 = S32(ctx->r10 << 24);
    // 0x80045D64: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x80045D68: sra         $t1, $a0, 24
    ctx->r9 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80045D6C: sra         $t4, $a2, 24
    ctx->r12 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80045D70: sra         $t3, $a1, 24
    ctx->r11 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80045D74: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x80045D78: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x80045D7C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80045D80: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80045D84: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x80045D88: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x80045D8C: jal         0x80046244
    // 0x80045D90: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    func_80046244(rdram, ctx);
        goto after_1;
    // 0x80045D90: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    after_1:
    // 0x80045D94: sra         $t6, $v0, 31
    ctx->r14 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80045D98: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x80045D9C: b           L_80045DEC
    // 0x80045DA0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
        goto L_80045DEC;
    // 0x80045DA0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
L_80045DA4:
    // 0x80045DA4: sll         $s0, $s1, 24
    ctx->r16 = S32(ctx->r17 << 24);
    // 0x80045DA8: sra         $t8, $s0, 24
    ctx->r24 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80045DAC: sll         $a1, $t8, 24
    ctx->r5 = S32(ctx->r24 << 24);
    // 0x80045DB0: sll         $a2, $s3, 24
    ctx->r6 = S32(ctx->r19 << 24);
    // 0x80045DB4: sra         $t0, $a2, 24
    ctx->r8 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80045DB8: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80045DBC: sra         $t5, $a0, 24
    ctx->r13 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80045DC0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80045DC4: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80045DC8: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x80045DCC: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80045DD0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x80045DD4: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x80045DD8: jal         0x80046244
    // 0x80045DDC: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    func_80046244(rdram, ctx);
        goto after_2;
    // 0x80045DDC: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    after_2:
    // 0x80045DE0: sra         $t2, $v0, 31
    ctx->r10 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80045DE4: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x80045DE8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
L_80045DEC:
    // 0x80045DEC: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x80045DF0: nop

    // 0x80045DF4: bgtz        $t4, L_80045E28
    if (SIGNED(ctx->r12) > 0) {
        // 0x80045DF8: slti        $at, $s1, 0xB
        ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
            goto L_80045E28;
    }
    // 0x80045DF8: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x80045DFC: bltz        $t4, L_80045E0C
    if (SIGNED(ctx->r12) < 0) {
        // 0x80045E00: sll         $t1, $s1, 3
        ctx->r9 = S32(ctx->r17 << 3);
            goto L_80045E0C;
    }
    // 0x80045E00: sll         $t1, $s1, 3
    ctx->r9 = S32(ctx->r17 << 3);
    // 0x80045E04: b           L_80045E28
    // 0x80045E08: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
        goto L_80045E28;
    // 0x80045E08: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
L_80045E0C:
    // 0x80045E0C: addu        $s0, $s7, $t1
    ctx->r16 = ADD32(ctx->r23, ctx->r9);
    // 0x80045E10: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x80045E14: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x80045E18: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x80045E1C: b           L_80045F1C
    // 0x80045E20: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
        goto L_80045F1C;
    // 0x80045E20: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80045E24: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
L_80045E28:
    // 0x80045E28: beq         $at, $zero, L_80045E5C
    if (ctx->r1 == 0) {
        // 0x80045E2C: sll         $a0, $s2, 24
        ctx->r4 = S32(ctx->r18 << 24);
            goto L_80045E5C;
    }
    // 0x80045E2C: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x80045E30: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80045E34: sll         $a2, $s0, 24
    ctx->r6 = S32(ctx->r16 << 24);
    // 0x80045E38: sra         $t0, $a2, 24
    ctx->r8 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80045E3C: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80045E40: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80045E44: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80045E48: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80045E4C: jal         0x80042748
    // 0x80045E50: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    func_80042748(rdram, ctx);
        goto after_3;
    // 0x80045E50: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    after_3:
    // 0x80045E54: beq         $v0, $zero, L_80045EC0
    if (ctx->r2 == 0) {
        // 0x80045E58: lw          $t9, 0x4C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X4C);
            goto L_80045EC0;
    }
    // 0x80045E58: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
L_80045E5C:
    // 0x80045E5C: bltz        $s3, L_80045EE4
    if (SIGNED(ctx->r19) < 0) {
        // 0x80045E60: sll         $a0, $s2, 24
        ctx->r4 = S32(ctx->r18 << 24);
            goto L_80045EE4;
    }
    // 0x80045E60: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x80045E64: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80045E68: sll         $a2, $s3, 24
    ctx->r6 = S32(ctx->r19 << 24);
    // 0x80045E6C: sra         $t4, $a2, 24
    ctx->r12 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80045E70: sra         $t3, $a1, 24
    ctx->r11 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80045E74: sra         $t2, $a0, 24
    ctx->r10 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80045E78: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80045E7C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x80045E80: jal         0x80042748
    // 0x80045E84: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    func_80042748(rdram, ctx);
        goto after_4;
    // 0x80045E84: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_4:
    // 0x80045E88: beq         $v0, $zero, L_80045EBC
    if (ctx->r2 == 0) {
        // 0x80045E8C: sll         $a0, $s2, 24
        ctx->r4 = S32(ctx->r18 << 24);
            goto L_80045EBC;
    }
    // 0x80045E8C: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x80045E90: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80045E94: sll         $a2, $s3, 24
    ctx->r6 = S32(ctx->r19 << 24);
    // 0x80045E98: sra         $t6, $a2, 24
    ctx->r14 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80045E9C: sra         $t1, $a1, 24
    ctx->r9 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80045EA0: sra         $t5, $a0, 24
    ctx->r13 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80045EA4: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80045EA8: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x80045EAC: jal         0x8004280C
    // 0x80045EB0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_8004280C(rdram, ctx);
        goto after_5;
    // 0x80045EB0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_5:
    // 0x80045EB4: bne         $v0, $zero, L_80045EE8
    if (ctx->r2 != 0) {
        // 0x80045EB8: lw          $a0, 0x48($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X48);
            goto L_80045EE8;
    }
    // 0x80045EB8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
L_80045EBC:
    // 0x80045EBC: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
L_80045EC0:
    // 0x80045EC0: lh          $t7, 0xA($s4)
    ctx->r15 = MEM_H(ctx->r20, 0XA);
    // 0x80045EC4: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80045EC8: addu        $t3, $t9, $t7
    ctx->r11 = ADD32(ctx->r25, ctx->r15);
    // 0x80045ECC: sltu        $at, $t3, $t7
    ctx->r1 = ctx->r11 < ctx->r15 ? 1 : 0;
    // 0x80045ED0: sra         $t0, $t7, 31
    ctx->r8 = S32(SIGNED(ctx->r15) >> 31);
    // 0x80045ED4: addu        $t2, $at, $t8
    ctx->r10 = ADD32(ctx->r1, ctx->r24);
    // 0x80045ED8: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80045EDC: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x80045EE0: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
L_80045EE4:
    // 0x80045EE4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
L_80045EE8:
    // 0x80045EE8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80045EEC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80045EF0: jal         0x80080A54
    // 0x80045EF4: addiu       $a3, $zero, 0x1F
    ctx->r7 = ADD32(0, 0X1F);
    func_80080A54(rdram, ctx);
        goto after_6;
    // 0x80045EF4: addiu       $a3, $zero, 0x1F
    ctx->r7 = ADD32(0, 0X1F);
    after_6:
    // 0x80045EF8: sll         $t4, $s1, 3
    ctx->r12 = S32(ctx->r17 << 3);
    // 0x80045EFC: addu        $s0, $s7, $t4
    ctx->r16 = ADD32(ctx->r23, ctx->r12);
    // 0x80045F00: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80045F04: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x80045F08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80045F0C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80045F10: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80045F14: jal         0x80080C44
    // 0x80045F18: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80080C44(rdram, ctx);
        goto after_7;
    // 0x80045F18: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_7:
L_80045F1C:
    // 0x80045F1C: sra         $a0, $s1, 31
    ctx->r4 = S32(SIGNED(ctx->r17) >> 31);
    // 0x80045F20: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80045F24: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80045F28: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80045F2C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80045F30: jal         0x80080A54
    // 0x80045F34: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    func_80080A54(rdram, ctx);
        goto after_8;
    // 0x80045F34: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    after_8:
    // 0x80045F38: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80045F3C: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x80045F40: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80045F44: or          $t0, $t8, $v0
    ctx->r8 = ctx->r24 | ctx->r2;
    // 0x80045F48: or          $t1, $t9, $v1
    ctx->r9 = ctx->r25 | ctx->r3;
    // 0x80045F4C: sll         $t6, $s1, 16
    ctx->r14 = S32(ctx->r17 << 16);
    // 0x80045F50: sltiu       $at, $t1, 0x1
    ctx->r1 = ctx->r9 < 0X1 ? 1 : 0;
    // 0x80045F54: nor         $t4, $t0, $zero
    ctx->r12 = ~(ctx->r8 | 0);
    // 0x80045F58: sra         $s1, $t6, 16
    ctx->r17 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80045F5C: addu        $t4, $t4, $at
    ctx->r12 = ADD32(ctx->r12, ctx->r1);
    // 0x80045F60: slt         $at, $fp, $s1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80045F64: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x80045F68: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x80045F6C: negu        $t5, $t1
    ctx->r13 = SUB32(0, ctx->r9);
    // 0x80045F70: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x80045F74: beq         $at, $zero, L_80045D48
    if (ctx->r1 == 0) {
        // 0x80045F78: sw          $t4, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r12;
            goto L_80045D48;
    }
    // 0x80045F78: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_80045F7C:
    // 0x80045F7C: sll         $a1, $fp, 16
    ctx->r5 = S32(ctx->r30 << 16);
    // 0x80045F80: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80045F84: lb          $a0, 0x5F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X5F);
    // 0x80045F88: jal         0x8001CDFC
    // 0x80045F8C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8001CDFC(rdram, ctx);
        goto after_9;
    // 0x80045F8C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_9:
    // 0x80045F90: lb          $t9, 0x5F($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X5F);
    // 0x80045F94: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80045F98: subu        $s2, $fp, $t9
    ctx->r18 = SUB32(ctx->r30, ctx->r25);
    // 0x80045F9C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80045FA0: blez        $s2, L_80046024
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80045FA4: lui         $t1, 0x801B
        ctx->r9 = S32(0X801B << 16);
            goto L_80046024;
    }
    // 0x80045FA4: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x80045FA8: addiu       $t1, $t1, -0x4280
    ctx->r9 = ADD32(ctx->r9, -0X4280);
    // 0x80045FAC: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80045FB0: lw          $s4, 0x6C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X6C);
    // 0x80045FB4: addu        $s3, $t0, $t1
    ctx->r19 = ADD32(ctx->r8, ctx->r9);
    // 0x80045FB8: sll         $t2, $s0, 3
    ctx->r10 = S32(ctx->r16 << 3);
L_80045FBC:
    // 0x80045FBC: addu        $s1, $s3, $t2
    ctx->r17 = ADD32(ctx->r19, ctx->r10);
    // 0x80045FC0: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x80045FC4: lw          $t5, 0x4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4);
    // 0x80045FC8: nor         $t6, $t4, $zero
    ctx->r14 = ~(ctx->r12 | 0);
    // 0x80045FCC: sltiu       $at, $t5, 0x1
    ctx->r1 = ctx->r13 < 0X1 ? 1 : 0;
    // 0x80045FD0: addu        $a0, $t6, $at
    ctx->r4 = ADD32(ctx->r14, ctx->r1);
    // 0x80045FD4: negu        $a1, $t5
    ctx->r5 = SUB32(0, ctx->r13);
    // 0x80045FD8: sw          $a1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r5;
    // 0x80045FDC: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    // 0x80045FE0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80045FE4: jal         0x80080C44
    // 0x80045FE8: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    func_80080C44(rdram, ctx);
        goto after_10;
    // 0x80045FE8: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    after_10:
    // 0x80045FEC: andi        $t9, $v1, 0x7F
    ctx->r25 = ctx->r3 & 0X7F;
    // 0x80045FF0: addu        $t0, $s4, $s0
    ctx->r8 = ADD32(ctx->r20, ctx->r16);
    // 0x80045FF4: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
    // 0x80045FF8: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x80045FFC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80046000: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80046004: jal         0x80080C44
    // 0x80046008: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80080C44(rdram, ctx);
        goto after_11;
    // 0x80046008: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_11:
    // 0x8004600C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80046010: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x80046014: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80046018: slt         $at, $s0, $s2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8004601C: bne         $at, $zero, L_80045FBC
    if (ctx->r1 != 0) {
        // 0x80046020: sll         $t2, $s0, 3
        ctx->r10 = S32(ctx->r16 << 3);
            goto L_80045FBC;
    }
    // 0x80046020: sll         $t2, $s0, 3
    ctx->r10 = S32(ctx->r16 << 3);
L_80046024:
    // 0x80046024: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80046028: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8004602C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80046030: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80046034: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80046038: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8004603C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80046040: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80046044: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80046048: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8004604C: jr          $ra
    // 0x80046050: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80046050: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80046054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046054: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80046058: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8004605C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80046060: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80046064: lb          $a0, 0x4B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X4B);
    // 0x80046068: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8004606C: jal         0x80045BA4
    // 0x80046070: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_80045BA4(rdram, ctx);
        goto after_0;
    // 0x80046070: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x80046074: jal         0x8003ED00
    // 0x80046078: nop

    func_8003ED00(rdram, ctx);
        goto after_1;
    // 0x80046078: nop

    after_1:
    // 0x8004607C: lb          $a1, 0x4F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X4F);
    // 0x80046080: lbu         $t7, 0x53($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X53);
    // 0x80046084: sll         $a2, $a1, 24
    ctx->r6 = S32(ctx->r5 << 24);
    // 0x80046088: sra         $t6, $a2, 24
    ctx->r14 = S32(SIGNED(ctx->r6) >> 24);
    // 0x8004608C: lb          $a0, 0x4B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X4B);
    // 0x80046090: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80046094: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x80046098: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8004609C: jal         0x80046244
    // 0x800460A0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_80046244(rdram, ctx);
        goto after_2;
    // 0x800460A0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_2:
    // 0x800460A4: bltz        $v0, L_800460D8
    if (SIGNED(ctx->r2) < 0) {
        // 0x800460A8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800460D8;
    }
    // 0x800460A8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800460AC: lb          $a2, 0x4F($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X4F);
    // 0x800460B0: lb          $a0, 0x4B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X4B);
    // 0x800460B4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x800460B8: jal         0x80042748
    // 0x800460BC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80042748(rdram, ctx);
        goto after_3;
    // 0x800460BC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_3:
    // 0x800460C0: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x800460C4: bne         $v0, $zero, L_800460DC
    if (ctx->r2 != 0) {
        // 0x800460C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800460DC;
    }
    // 0x800460C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800460CC: lh          $t9, 0x2A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2A);
    // 0x800460D0: nop

    // 0x800460D4: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
L_800460D8:
    // 0x800460D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800460DC:
    // 0x800460DC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800460E0: jr          $ra
    // 0x800460E4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800460E4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800460E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800460E8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800460EC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x800460F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800460F4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x800460F8: lb          $a0, 0x4B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X4B);
    // 0x800460FC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80046100: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80046104: jal         0x80045BA4
    // 0x80046108: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_80045BA4(rdram, ctx);
        goto after_0;
    // 0x80046108: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x8004610C: jal         0x8003ED00
    // 0x80046110: nop

    func_8003ED00(rdram, ctx);
        goto after_1;
    // 0x80046110: nop

    after_1:
    // 0x80046114: lbu         $t6, 0x57($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X57);
    // 0x80046118: lb          $a0, 0x4B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X4B);
    // 0x8004611C: lb          $a1, 0x4F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X4F);
    // 0x80046120: lb          $a2, 0x53($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X53);
    // 0x80046124: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x80046128: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8004612C: jal         0x80046244
    // 0x80046130: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_80046244(rdram, ctx);
        goto after_2;
    // 0x80046130: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_2:
    // 0x80046134: bltz        $v0, L_80046168
    if (SIGNED(ctx->r2) < 0) {
        // 0x80046138: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80046168;
    }
    // 0x80046138: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8004613C: lb          $a0, 0x4B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X4B);
    // 0x80046140: lb          $a1, 0x4F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X4F);
    // 0x80046144: lb          $a2, 0x53($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X53);
    // 0x80046148: jal         0x80042748
    // 0x8004614C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    func_80042748(rdram, ctx);
        goto after_3;
    // 0x8004614C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_3:
    // 0x80046150: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80046154: bne         $v0, $zero, L_8004616C
    if (ctx->r2 != 0) {
        // 0x80046158: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8004616C;
    }
    // 0x80046158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004615C: lh          $t7, 0x2A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2A);
    // 0x80046160: nop

    // 0x80046164: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
L_80046168:
    // 0x80046168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8004616C:
    // 0x8004616C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80046170: jr          $ra
    // 0x80046174: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80046174: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80046178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046178: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004617C: sll         $a3, $a1, 24
    ctx->r7 = S32(ctx->r5 << 24);
    // 0x80046180: sra         $t6, $a3, 24
    ctx->r14 = S32(SIGNED(ctx->r7) >> 24);
    // 0x80046184: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x80046188: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8004618C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80046190: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80046194: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80046198: beq         $at, $zero, L_800461CC
    if (ctx->r1 == 0) {
        // 0x8004619C: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_800461CC;
    }
    // 0x8004619C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800461A0: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x800461A4: jal         0x8004D540
    // 0x800461A8: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    func_8004D540(rdram, ctx);
        goto after_0;
    // 0x800461A8: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    after_0:
    // 0x800461AC: lb          $t8, 0x23($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X23);
    // 0x800461B0: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x800461B4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800461B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800461BC: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x800461C0: lb          $v1, 0x6934($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X6934);
    // 0x800461C4: b           L_80046238
    // 0x800461C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80046238;
    // 0x800461C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800461CC:
    // 0x800461CC: lb          $t0, 0x1B($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X1B);
    // 0x800461D0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800461D4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800461D8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800461DC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800461E0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800461E4: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x800461E8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800461EC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800461F0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800461F4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800461F8: addu        $t2, $t1, $a3
    ctx->r10 = ADD32(ctx->r9, ctx->r7);
    // 0x800461FC: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x80046200: lbu         $a1, -0x29E8($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X29E8);
    // 0x80046204: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x80046208: jal         0x800422B4
    // 0x8004620C: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    func_800422B4(rdram, ctx);
        goto after_1;
    // 0x8004620C: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    after_1:
    // 0x80046210: jal         0x8004D710
    // 0x80046214: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_8004D710(rdram, ctx);
        goto after_2;
    // 0x80046214: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_2:
    // 0x80046218: lb          $t4, 0x23($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X23);
    // 0x8004621C: sll         $t3, $v0, 1
    ctx->r11 = S32(ctx->r2 << 1);
    // 0x80046220: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80046224: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80046228: addu        $v1, $v1, $t5
    ctx->r3 = ADD32(ctx->r3, ctx->r13);
    // 0x8004622C: lb          $v1, 0x694C($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X694C);
    // 0x80046230: nop

    // 0x80046234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80046238:
    // 0x80046238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004623C: jr          $ra
    // 0x80046240: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80046240: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80046244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046244: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80046248: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8004624C: lb          $v0, 0x53($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X53);
    // 0x80046250: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80046254: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80046258: lbu         $a1, 0x57($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X57);
    // 0x8004625C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x80046260: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80046264: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80046268: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8004626C: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x80046270: jal         0x8004DCB0
    // 0x80046274: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_8004DCB0(rdram, ctx);
        goto after_0;
    // 0x80046274: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_0:
    // 0x80046278: lb          $v1, 0x5B($sp)
    ctx->r3 = MEM_B(ctx->r29, 0X5B);
    // 0x8004627C: lb          $t6, 0x57($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X57);
    // 0x80046280: slti        $at, $v1, 0xB
    ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x80046284: beq         $at, $zero, L_800463C0
    if (ctx->r1 == 0) {
        // 0x80046288: sw          $v0, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r2;
            goto L_800463C0;
    }
    // 0x80046288: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8004628C: beq         $t6, $v1, L_800463C0
    if (ctx->r14 == ctx->r3) {
        // 0x80046290: andi        $s0, $v1, 0xFF
        ctx->r16 = ctx->r3 & 0XFF;
            goto L_800463C0;
    }
    // 0x80046290: andi        $s0, $v1, 0xFF
    ctx->r16 = ctx->r3 & 0XFF;
    // 0x80046294: lbu         $a0, 0x2F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2F);
    // 0x80046298: jal         0x8004D5B0
    // 0x8004629C: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_8004D5B0(rdram, ctx);
        goto after_1;
    // 0x8004629C: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_1:
    // 0x800462A0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x800462A4: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x800462A8: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x800462AC: lbu         $a0, 0x2F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2F);
    // 0x800462B0: sh          $t7, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r15;
    // 0x800462B4: jal         0x8004D4B0
    // 0x800462B8: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_8004D4B0(rdram, ctx);
        goto after_2;
    // 0x800462B8: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_2:
    // 0x800462BC: lb          $t8, 0x53($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X53);
    // 0x800462C0: lb          $t0, 0x57($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X57);
    // 0x800462C4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800462C8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800462CC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800462D0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800462D4: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800462D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800462DC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800462E0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800462E4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800462E8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800462EC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800462F0: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x800462F4: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x800462F8: lbu         $a1, -0x29E8($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X29E8);
    // 0x800462FC: lbu         $a0, 0x2F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2F);
    // 0x80046300: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x80046304: jal         0x800422B4
    // 0x80046308: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_800422B4(rdram, ctx);
        goto after_3;
    // 0x80046308: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_3:
    // 0x8004630C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80046310: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80046314: bgez        $v0, L_8004632C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80046318: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8004632C;
    }
    // 0x80046318: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004631C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80046320: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80046324: nop

    // 0x80046328: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8004632C:
    // 0x8004632C: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x80046330: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x80046334: jal         0x8001DAB4
    // 0x80046338: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    func_8001DAB4(rdram, ctx);
        goto after_4;
    // 0x80046338: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_4:
    // 0x8004633C: lui         $at, 0x4282
    ctx->r1 = S32(0X4282 << 16);
    // 0x80046340: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80046344: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80046348: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x8004634C: nop

    // 0x80046350: bc1f        L_800463AC
    if (!c1cs) {
        // 0x80046354: nop
    
            goto L_800463AC;
    }
    // 0x80046354: nop

    // 0x80046358: bgez        $v1, L_8004637C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8004635C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8004637C;
    }
    // 0x8004635C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80046360: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80046364: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80046368: nop

    // 0x8004636C: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x80046370: nop

    // 0x80046374: bc1t        L_8004639C
    if (c1cs) {
        // 0x80046378: nop
    
            goto L_8004639C;
    }
    // 0x80046378: nop

L_8004637C:
    // 0x8004637C: blez        $v1, L_800463AC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80046380: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_800463AC;
    }
    // 0x80046380: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80046384: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80046388: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004638C: nop

    // 0x80046390: c.eq.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl == ctx->f6.fl;
    // 0x80046394: nop

    // 0x80046398: bc1f        L_800463AC
    if (!c1cs) {
        // 0x8004639C: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_800463AC;
    }
L_8004639C:
    // 0x8004639C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800463A0: lwc1        $f10, 0x7430($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7430);
    // 0x800463A4: b           L_800463B8
    // 0x800463A8: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
        goto L_800463B8;
    // 0x800463A8: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
L_800463AC:
    // 0x800463AC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800463B0: nop

    // 0x800463B4: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
L_800463B8:
    // 0x800463B8: b           L_800463D4
    // 0x800463BC: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
        goto L_800463D4;
    // 0x800463BC: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
L_800463C0:
    // 0x800463C0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800463C4: lwc1        $f18, 0x7434($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7434);
    // 0x800463C8: sh          $zero, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = 0;
    // 0x800463CC: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x800463D0: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
L_800463D4:
    // 0x800463D4: lb          $a1, 0x57($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X57);
    // 0x800463D8: jal         0x8003D108
    // 0x800463DC: nop

    func_8003D108(rdram, ctx);
        goto after_5;
    // 0x800463DC: nop

    after_5:
    // 0x800463E0: bne         $v0, $zero, L_800463F0
    if (ctx->r2 != 0) {
        // 0x800463E4: addiu       $a2, $zero, 0x80
        ctx->r6 = ADD32(0, 0X80);
            goto L_800463F0;
    }
    // 0x800463E4: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x800463E8: b           L_800469D8
    // 0x800463EC: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
        goto L_800469D8;
    // 0x800463EC: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_800463F0:
    // 0x800463F0: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
    // 0x800463F4: lb          $a1, 0x57($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X57);
    // 0x800463F8: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x800463FC: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x80046400: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80046404: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x80046408: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8004640C: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x80046410: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80046414: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x80046418: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8004641C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80046420: addiu       $t4, $t4, -0x2CF0
    ctx->r12 = ADD32(ctx->r12, -0X2CF0);
    // 0x80046424: addu        $t3, $t2, $a1
    ctx->r11 = ADD32(ctx->r10, ctx->r5);
    // 0x80046428: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8004642C: lh          $a3, 0x62($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X62);
    // 0x80046430: jal         0x8004237C
    // 0x80046434: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    func_8004237C(rdram, ctx);
        goto after_6;
    // 0x80046434: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    after_6:
    // 0x80046438: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x8004643C: lb          $t9, 0x57($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X57);
    // 0x80046440: lh          $t8, 0x6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X6);
    // 0x80046444: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x80046448: bne         $t9, $zero, L_800464AC
    if (ctx->r25 != 0) {
        // 0x8004644C: addu        $v1, $t6, $t8
        ctx->r3 = ADD32(ctx->r14, ctx->r24);
            goto L_800464AC;
    }
    // 0x8004644C: addu        $v1, $t6, $t8
    ctx->r3 = ADD32(ctx->r14, ctx->r24);
    // 0x80046450: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
    // 0x80046454: lh          $a3, 0x62($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X62);
    // 0x80046458: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8004645C: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x80046460: jal         0x8004237C
    // 0x80046464: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_8004237C(rdram, ctx);
        goto after_7;
    // 0x80046464: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_7:
    // 0x80046468: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x8004646C: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x80046470: beq         $t0, $zero, L_800464AC
    if (ctx->r8 == 0) {
        // 0x80046474: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_800464AC;
    }
    // 0x80046474: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80046478: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8004647C: jal         0x8004D880
    // 0x80046480: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_8004D880(rdram, ctx);
        goto after_8;
    // 0x80046480: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_8:
    // 0x80046484: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80046488: bne         $v0, $zero, L_800464AC
    if (ctx->r2 != 0) {
        // 0x8004648C: lui         $t1, 0x800D
        ctx->r9 = S32(0X800D << 16);
            goto L_800464AC;
    }
    // 0x8004648C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80046490: lb          $t1, 0x6792($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X6792);
    // 0x80046494: lhu         $t2, 0x32($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X32);
    // 0x80046498: multu       $v1, $t1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004649C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x800464A0: mflo        $v1
    ctx->r3 = lo;
    // 0x800464A4: b           L_800464DC
    // 0x800464A8: lbu         $v0, 0x67($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X67);
        goto L_800464DC;
    // 0x800464A8: lbu         $v0, 0x67($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X67);
L_800464AC:
    // 0x800464AC: lhu         $a0, 0x32($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X32);
    // 0x800464B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800464B4: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x800464B8: jal         0x80045764
    // 0x800464BC: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_80045764(rdram, ctx);
        goto after_9;
    // 0x800464BC: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_9:
    // 0x800464C0: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x800464C4: nop

    // 0x800464C8: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800464CC: mflo        $v1
    ctx->r3 = lo;
    // 0x800464D0: nop

    // 0x800464D4: nop

    // 0x800464D8: lbu         $v0, 0x67($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X67);
L_800464DC:
    // 0x800464DC: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
    // 0x800464E0: sltiu       $t3, $v0, 0x1
    ctx->r11 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800464E4: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800464E8: lb          $a1, 0x57($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X57);
    // 0x800464EC: lh          $a3, 0x62($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X62);
    // 0x800464F0: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x800464F4: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x800464F8: mflo        $s0
    ctx->r16 = lo;
    // 0x800464FC: jal         0x8004237C
    // 0x80046500: nop

    func_8004237C(rdram, ctx);
        goto after_10;
    // 0x80046500: nop

    after_10:
    // 0x80046504: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    // 0x80046508: jal         0x80045764
    // 0x8004650C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80045764(rdram, ctx);
        goto after_11;
    // 0x8004650C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
    // 0x80046510: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80046514: sh          $v0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r2;
    // 0x80046518: lbu         $a0, 0x2F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2F);
    // 0x8004651C: lbu         $a1, 0x308($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X308);
    // 0x80046520: jal         0x800422B4
    // 0x80046524: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_800422B4(rdram, ctx);
        goto after_12;
    // 0x80046524: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_12:
    // 0x80046528: addiu       $a0, $v0, -0x45
    ctx->r4 = ADD32(ctx->r2, -0X45);
    // 0x8004652C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80046530: jal         0x8001D4C0
    // 0x80046534: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_8001D4C0(rdram, ctx);
        goto after_13;
    // 0x80046534: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_13:
    // 0x80046538: lh          $t5, 0x3A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X3A);
    // 0x8004653C: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80046540: multu       $v0, $t5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80046544: lh          $t8, 0x6($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X6);
    // 0x80046548: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8004654C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80046550: lbu         $a0, 0x2F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2F);
    // 0x80046554: lbu         $a1, 0x308($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X308);
    // 0x80046558: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8004655C: mflo        $t7
    ctx->r15 = lo;
    // 0x80046560: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80046564: nop

    // 0x80046568: multu       $v1, $t9
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004656C: mflo        $t0
    ctx->r8 = lo;
    // 0x80046570: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x80046574: jal         0x800422B4
    // 0x80046578: nop

    func_800422B4(rdram, ctx);
        goto after_14;
    // 0x80046578: nop

    after_14:
    // 0x8004657C: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    // 0x80046580: jal         0x80045764
    // 0x80046584: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80045764(rdram, ctx);
        goto after_15;
    // 0x80046584: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_15:
    // 0x80046588: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
    // 0x8004658C: lb          $a1, 0x57($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X57);
    // 0x80046590: lh          $a3, 0x62($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X62);
    // 0x80046594: sh          $v0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r2;
    // 0x80046598: jal         0x8004237C
    // 0x8004659C: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    func_8004237C(rdram, ctx);
        goto after_16;
    // 0x8004659C: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    after_16:
    // 0x800465A0: lh          $t6, 0x3A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X3A);
    // 0x800465A4: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x800465A8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800465AC: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x800465B0: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800465B4: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x800465B8: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800465BC: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x800465C0: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800465C4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800465C8: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
    // 0x800465CC: lb          $a1, 0x5B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X5B);
    // 0x800465D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800465D4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800465D8: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x800465DC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800465E0: nop

    // 0x800465E4: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800465E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800465EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800465F0: nop

    // 0x800465F4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800465F8: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x800465FC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80046600: jal         0x80046178
    // 0x80046604: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_80046178(rdram, ctx);
        goto after_17;
    // 0x80046604: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_17:
    // 0x80046608: lh          $t8, 0x4E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4E);
    // 0x8004660C: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80046610: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80046614: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80046618: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x8004661C: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80046620: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80046624: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80046628: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8004662C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80046630: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80046634: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80046638: mtc1        $s0, $f18
    ctx->f18.u32l = ctx->r16;
    // 0x8004663C: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
    // 0x80046640: lb          $a1, 0x57($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X57);
    // 0x80046644: div.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80046648: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8004664C: lh          $a3, 0x62($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X62);
    // 0x80046650: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    // 0x80046654: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80046658: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8004665C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80046660: nop

    // 0x80046664: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80046668: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004666C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80046670: nop

    // 0x80046674: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80046678: mfc1        $s0, $f10
    ctx->r16 = (int32_t)ctx->f10.u32l;
    // 0x8004667C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80046680: jal         0x8004237C
    // 0x80046684: nop

    func_8004237C(rdram, ctx);
        goto after_18;
    // 0x80046684: nop

    after_18:
    // 0x80046688: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
    // 0x8004668C: lb          $a1, 0x5B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X5B);
    // 0x80046690: jal         0x80046178
    // 0x80046694: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80046178(rdram, ctx);
        goto after_19;
    // 0x80046694: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
    // 0x80046698: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    // 0x8004669C: jal         0x80045764
    // 0x800466A0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_80045764(rdram, ctx);
        goto after_20;
    // 0x800466A0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_20:
    // 0x800466A4: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
    // 0x800466A8: lb          $a1, 0x57($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X57);
    // 0x800466AC: lh          $a3, 0x62($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X62);
    // 0x800466B0: sh          $v0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r2;
    // 0x800466B4: jal         0x8004237C
    // 0x800466B8: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    func_8004237C(rdram, ctx);
        goto after_21;
    // 0x800466B8: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    after_21:
    // 0x800466BC: lh          $t5, 0x3A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X3A);
    // 0x800466C0: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x800466C4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800466C8: lh          $t2, 0x2($t3)
    ctx->r10 = MEM_H(ctx->r11, 0X2);
    // 0x800466CC: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800466D0: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x800466D4: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800466D8: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x800466DC: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x800466E0: mul.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x800466E4: lb          $t7, 0x57($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X57);
    // 0x800466E8: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800466EC: mul.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x800466F0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800466F4: nop

    // 0x800466F8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800466FC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80046700: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80046704: nop

    // 0x80046708: cvt.w.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8004670C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x80046710: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80046714: beq         $t7, $zero, L_80046748
    if (ctx->r15 == 0) {
        // 0x80046718: lw          $a0, 0x3C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X3C);
            goto L_80046748;
    }
    // 0x80046718: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8004671C: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
    // 0x80046720: lh          $a3, 0x62($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X62);
    // 0x80046724: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80046728: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x8004672C: jal         0x8004237C
    // 0x80046730: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_8004237C(rdram, ctx);
        goto after_22;
    // 0x80046730: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_22:
    // 0x80046734: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80046738: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x8004673C: beq         $t8, $zero, L_80046768
    if (ctx->r24 == 0) {
        // 0x80046740: lb          $a0, 0x53($sp)
        ctx->r4 = MEM_B(ctx->r29, 0X53);
            goto L_80046768;
    }
    // 0x80046740: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
    // 0x80046744: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
L_80046748:
    // 0x80046748: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8004674C: jal         0x8004D880
    // 0x80046750: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_8004D880(rdram, ctx);
        goto after_23;
    // 0x80046750: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_23:
    // 0x80046754: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80046758: beq         $v0, $zero, L_80046768
    if (ctx->r2 == 0) {
        // 0x8004675C: lb          $a0, 0x53($sp)
        ctx->r4 = MEM_B(ctx->r29, 0X53);
            goto L_80046768;
    }
    // 0x8004675C: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
    // 0x80046760: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80046764: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
L_80046768:
    // 0x80046768: lb          $a1, 0x5B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X5B);
    // 0x8004676C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80046770: jal         0x80046178
    // 0x80046774: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_80046178(rdram, ctx);
        goto after_24;
    // 0x80046774: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_24:
    // 0x80046778: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x8004677C: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x80046780: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x80046784: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80046788: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8004678C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80046790: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80046794: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80046798: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8004679C: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800467A0: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x800467A4: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
    // 0x800467A8: lb          $a1, 0x57($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X57);
    // 0x800467AC: div.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x800467B0: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800467B4: lh          $a3, 0x62($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X62);
    // 0x800467B8: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    // 0x800467BC: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800467C0: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x800467C4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800467C8: nop

    // 0x800467CC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800467D0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800467D4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800467D8: nop

    // 0x800467DC: cvt.w.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800467E0: mfc1        $s0, $f16
    ctx->r16 = (int32_t)ctx->f16.u32l;
    // 0x800467E4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800467E8: jal         0x8004237C
    // 0x800467EC: nop

    func_8004237C(rdram, ctx);
        goto after_25;
    // 0x800467EC: nop

    after_25:
    // 0x800467F0: lb          $a0, 0x53($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X53);
    // 0x800467F4: lb          $a1, 0x5B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X5B);
    // 0x800467F8: jal         0x80046178
    // 0x800467FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80046178(rdram, ctx);
        goto after_26;
    // 0x800467FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_26:
    // 0x80046800: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    // 0x80046804: jal         0x80045764
    // 0x80046808: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80045764(rdram, ctx);
        goto after_27;
    // 0x80046808: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_27:
    // 0x8004680C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80046810: sh          $v0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r2;
    // 0x80046814: jal         0x8004D880
    // 0x80046818: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8004D880(rdram, ctx);
        goto after_28;
    // 0x80046818: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_28:
    // 0x8004681C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80046820: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80046824: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x80046828: lbu         $t0, 0x6A64($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X6A64);
    // 0x8004682C: lh          $t2, 0xC($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC);
    // 0x80046830: lh          $t5, 0x3A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X3A);
    // 0x80046834: sll         $t3, $t0, 1
    ctx->r11 = S32(ctx->r8 << 1);
    // 0x80046838: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x8004683C: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80046840: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80046844: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80046848: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004684C: mflo        $v1
    ctx->r3 = lo;
    // 0x80046850: nop

    // 0x80046854: nop

    // 0x80046858: multu       $v1, $t6
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004685C: mflo        $t7
    ctx->r15 = lo;
    // 0x80046860: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80046864: jal         0x8004D880
    // 0x80046868: nop

    func_8004D880(rdram, ctx);
        goto after_29;
    // 0x80046868: nop

    after_29:
    // 0x8004686C: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    // 0x80046870: jal         0x80045764
    // 0x80046874: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80045764(rdram, ctx);
        goto after_30;
    // 0x80046874: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_30:
    // 0x80046878: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8004687C: sh          $v0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r2;
    // 0x80046880: jal         0x8004D880
    // 0x80046884: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8004D880(rdram, ctx);
        goto after_31;
    // 0x80046884: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_31:
    // 0x80046888: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8004688C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80046890: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x80046894: lbu         $t8, 0x6A54($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X6A54);
    // 0x80046898: lh          $t0, 0x8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X8);
    // 0x8004689C: lh          $t3, 0x3A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X3A);
    // 0x800468A0: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x800468A4: multu       $t1, $t3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800468A8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800468AC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x800468B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800468B4: mflo        $v1
    ctx->r3 = lo;
    // 0x800468B8: nop

    // 0x800468BC: nop

    // 0x800468C0: multu       $v1, $t2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800468C4: mflo        $t4
    ctx->r12 = lo;
    // 0x800468C8: addu        $s0, $s0, $t4
    ctx->r16 = ADD32(ctx->r16, ctx->r12);
    // 0x800468CC: jal         0x8004D880
    // 0x800468D0: nop

    func_8004D880(rdram, ctx);
        goto after_32;
    // 0x800468D0: nop

    after_32:
    // 0x800468D4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x800468D8: jal         0x8004D880
    // 0x800468DC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8004D880(rdram, ctx);
        goto after_33;
    // 0x800468DC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_33:
    // 0x800468E0: bne         $v0, $zero, L_800468FC
    if (ctx->r2 != 0) {
        // 0x800468E4: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_800468FC;
    }
    // 0x800468E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800468E8: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x800468EC: nop

    // 0x800468F0: lh          $v1, 0x4($t5)
    ctx->r3 = MEM_H(ctx->r13, 0X4);
    // 0x800468F4: b           L_80046900
    // 0x800468F8: addiu       $v1, $v1, 0x1E
    ctx->r3 = ADD32(ctx->r3, 0X1E);
        goto L_80046900;
    // 0x800468F8: addiu       $v1, $v1, 0x1E
    ctx->r3 = ADD32(ctx->r3, 0X1E);
L_800468FC:
    // 0x800468FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80046900:
    // 0x80046900: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    // 0x80046904: jal         0x80045764
    // 0x80046908: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_80045764(rdram, ctx);
        goto after_34;
    // 0x80046908: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_34:
    // 0x8004690C: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80046910: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80046914: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80046918: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8004691C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80046920: mflo        $v1
    ctx->r3 = lo;
    // 0x80046924: nop

    // 0x80046928: nop

    // 0x8004692C: multu       $v1, $t6
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80046930: mflo        $t7
    ctx->r15 = lo;
    // 0x80046934: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80046938: jal         0x8004D880
    // 0x8004693C: nop

    func_8004D880(rdram, ctx);
        goto after_35;
    // 0x8004693C: nop

    after_35:
    // 0x80046940: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    // 0x80046944: jal         0x80045764
    // 0x80046948: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80045764(rdram, ctx);
        goto after_36;
    // 0x80046948: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_36:
    // 0x8004694C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80046950: sh          $v0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r2;
    // 0x80046954: jal         0x8004D880
    // 0x80046958: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8004D880(rdram, ctx);
        goto after_37;
    // 0x80046958: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_37:
    // 0x8004695C: negu        $t9, $v0
    ctx->r25 = SUB32(0, ctx->r2);
    // 0x80046960: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x80046964: lh          $t1, 0x3A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X3A);
    // 0x80046968: subu        $t8, $t8, $t9
    ctx->r24 = SUB32(ctx->r24, ctx->r25);
    // 0x8004696C: addiu       $t0, $t8, 0x2D
    ctx->r8 = ADD32(ctx->r24, 0X2D);
    // 0x80046970: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80046974: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80046978: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8004697C: mflo        $t3
    ctx->r11 = lo;
    // 0x80046980: addu        $s0, $s0, $t3
    ctx->r16 = ADD32(ctx->r16, ctx->r11);
    // 0x80046984: jal         0x8004D880
    // 0x80046988: nop

    func_8004D880(rdram, ctx);
        goto after_38;
    // 0x80046988: nop

    after_38:
    // 0x8004698C: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    // 0x80046990: jal         0x80045764
    // 0x80046994: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80045764(rdram, ctx);
        goto after_39;
    // 0x80046994: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_39:
    // 0x80046998: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x8004699C: sh          $v0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r2;
    // 0x800469A0: lhu         $a0, 0xE($t2)
    ctx->r4 = MEM_HU(ctx->r10, 0XE);
    // 0x800469A4: jal         0x8001CA74
    // 0x800469A8: nop

    func_8001CA74(rdram, ctx);
        goto after_40;
    // 0x800469A8: nop

    after_40:
    // 0x800469AC: lh          $t5, 0x3A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X3A);
    // 0x800469B0: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x800469B4: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800469B8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800469BC: mflo        $t6
    ctx->r14 = lo;
    // 0x800469C0: nop

    // 0x800469C4: nop

    // 0x800469C8: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800469CC: mflo        $t9
    ctx->r25 = lo;
    // 0x800469D0: addu        $s0, $s0, $t9
    ctx->r16 = ADD32(ctx->r16, ctx->r25);
    // 0x800469D4: nop

L_800469D8:
    // 0x800469D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800469DC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800469E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800469E4: jr          $ra
    // 0x800469E8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800469E8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800469EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800469EC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800469F0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800469F4: sll         $s1, $a0, 24
    ctx->r17 = S32(ctx->r4 << 24);
    // 0x800469F8: sra         $t6, $s1, 24
    ctx->r14 = S32(SIGNED(ctx->r17) >> 24);
    // 0x800469FC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80046A00: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80046A04: sll         $s0, $a1, 24
    ctx->r16 = S32(ctx->r5 << 24);
    // 0x80046A08: sll         $a0, $t6, 24
    ctx->r4 = S32(ctx->r14 << 24);
    // 0x80046A0C: sra         $t7, $s0, 24
    ctx->r15 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80046A10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80046A14: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80046A18: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80046A1C: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80046A20: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x80046A24: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x80046A28: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80046A2C: jal         0x80045BA4
    // 0x80046A30: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80045BA4(rdram, ctx);
        goto after_0;
    // 0x80046A30: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x80046A34: jal         0x8003ED00
    // 0x80046A38: nop

    func_8003ED00(rdram, ctx);
        goto after_1;
    // 0x80046A38: nop

    after_1:
    // 0x80046A3C: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x80046A40: sll         $a2, $s0, 24
    ctx->r6 = S32(ctx->r16 << 24);
    // 0x80046A44: sra         $t1, $a2, 24
    ctx->r9 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80046A48: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80046A4C: lb          $a1, 0x63($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X63);
    // 0x80046A50: sh          $v0, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r2;
    // 0x80046A54: sh          $zero, 0x54($sp)
    MEM_H(0X54, ctx->r29) = 0;
    // 0x80046A58: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80046A5C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x80046A60: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x80046A64: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80046A68: jal         0x80046244
    // 0x80046A6C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80046244(rdram, ctx);
        goto after_2;
    // 0x80046A6C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x80046A70: bgez        $v0, L_80046A84
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80046A74: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_80046A84;
    }
    // 0x80046A74: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x80046A78: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80046A7C: b           L_80046BC0
    // 0x80046A80: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
        goto L_80046BC0;
    // 0x80046A80: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
L_80046A84:
    // 0x80046A84: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x80046A88: sll         $a2, $s0, 24
    ctx->r6 = S32(ctx->r16 << 24);
    // 0x80046A8C: sra         $t3, $a2, 24
    ctx->r11 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80046A90: sra         $t2, $a0, 24
    ctx->r10 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80046A94: lb          $a1, 0x63($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X63);
    // 0x80046A98: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80046A9C: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80046AA0: jal         0x80042748
    // 0x80046AA4: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    func_80042748(rdram, ctx);
        goto after_3;
    // 0x80046AA4: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    after_3:
    // 0x80046AA8: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80046AAC: beq         $v0, $zero, L_80046AE0
    if (ctx->r2 == 0) {
        // 0x80046AB0: sll         $a0, $s1, 24
        ctx->r4 = S32(ctx->r17 << 24);
            goto L_80046AE0;
    }
    // 0x80046AB0: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x80046AB4: sll         $a2, $s0, 24
    ctx->r6 = S32(ctx->r16 << 24);
    // 0x80046AB8: sra         $t5, $a2, 24
    ctx->r13 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80046ABC: sra         $t4, $a0, 24
    ctx->r12 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80046AC0: lb          $a1, 0x63($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X63);
    // 0x80046AC4: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80046AC8: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x80046ACC: jal         0x8004280C
    // 0x80046AD0: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    func_8004280C(rdram, ctx);
        goto after_4;
    // 0x80046AD0: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    after_4:
    // 0x80046AD4: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80046AD8: bne         $v0, $zero, L_80046AF4
    if (ctx->r2 != 0) {
        // 0x80046ADC: lh          $t2, 0x56($sp)
        ctx->r10 = MEM_H(ctx->r29, 0X56);
            goto L_80046AF4;
    }
    // 0x80046ADC: lh          $t2, 0x56($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X56);
L_80046AE0:
    // 0x80046AE0: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
    // 0x80046AE4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80046AE8: sh          $t7, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r15;
    // 0x80046AEC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80046AF0: lh          $t2, 0x56($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X56);
L_80046AF4:
    // 0x80046AF4: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x80046AF8: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80046AFC: sll         $a2, $s0, 24
    ctx->r6 = S32(ctx->r16 << 24);
    // 0x80046B00: sra         $t1, $a2, 24
    ctx->r9 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80046B04: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80046B08: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80046B0C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80046B10: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80046B14: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x80046B18: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x80046B1C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80046B20: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x80046B24: jal         0x80046244
    // 0x80046B28: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80046244(rdram, ctx);
        goto after_5;
    // 0x80046B28: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_5:
    // 0x80046B2C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80046B30: bgez        $v0, L_80046B44
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80046B34: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80046B44;
    }
    // 0x80046B34: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80046B38: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80046B3C: b           L_80046BC0
    // 0x80046B40: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
        goto L_80046BC0;
    // 0x80046B40: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
L_80046B44:
    // 0x80046B44: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x80046B48: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80046B4C: sll         $a2, $s0, 24
    ctx->r6 = S32(ctx->r16 << 24);
    // 0x80046B50: sra         $t5, $a2, 24
    ctx->r13 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80046B54: sra         $t4, $a1, 24
    ctx->r12 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80046B58: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80046B5C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80046B60: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x80046B64: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x80046B68: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x80046B6C: jal         0x80042748
    // 0x80046B70: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    func_80042748(rdram, ctx);
        goto after_6;
    // 0x80046B70: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    after_6:
    // 0x80046B74: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x80046B78: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80046B7C: bne         $v0, $zero, L_80046B98
    if (ctx->r2 != 0) {
        // 0x80046B80: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80046B98;
    }
    // 0x80046B80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80046B84: lh          $t7, 0x54($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X54);
    // 0x80046B88: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
    // 0x80046B8C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80046B90: sh          $t8, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r24;
    // 0x80046B94: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
L_80046B98:
    // 0x80046B98: lh          $t9, 0x54($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X54);
    // 0x80046B9C: subu        $t1, $t0, $v1
    ctx->r9 = SUB32(ctx->r8, ctx->r3);
    // 0x80046BA0: bne         $t9, $zero, L_80046BB0
    if (ctx->r25 != 0) {
        // 0x80046BA4: nop
    
            goto L_80046BB0;
    }
    // 0x80046BA4: nop

    // 0x80046BA8: b           L_80046BB0
    // 0x80046BAC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
        goto L_80046BB0;
    // 0x80046BAC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_80046BB0:
    // 0x80046BB0: multu       $t1, $a0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80046BB4: mflo        $v0
    ctx->r2 = lo;
    // 0x80046BB8: nop

    // 0x80046BBC: nop

L_80046BC0:
    // 0x80046BC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80046BC4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80046BC8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80046BCC: jr          $ra
    // 0x80046BD0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80046BD0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80046BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046BD4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80046BD8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80046BDC: sll         $s3, $a0, 24
    ctx->r19 = S32(ctx->r4 << 24);
    // 0x80046BE0: sra         $t6, $s3, 24
    ctx->r14 = S32(SIGNED(ctx->r19) >> 24);
    // 0x80046BE4: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x80046BE8: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80046BEC: sll         $a0, $t6, 24
    ctx->r4 = S32(ctx->r14 << 24);
    // 0x80046BF0: addiu       $s5, $sp, 0x40
    ctx->r21 = ADD32(ctx->r29, 0X40);
    // 0x80046BF4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80046BF8: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80046BFC: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x80046C00: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80046C04: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80046C08: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80046C0C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80046C10: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80046C14: jal         0x80045BA4
    // 0x80046C18: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80045BA4(rdram, ctx);
        goto after_0;
    // 0x80046C18: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_0:
    // 0x80046C1C: jal         0x8003ED00
    // 0x80046C20: nop

    func_8003ED00(rdram, ctx);
        goto after_1;
    // 0x80046C20: nop

    after_1:
    // 0x80046C24: sll         $s4, $v0, 16
    ctx->r20 = S32(ctx->r2 << 16);
    // 0x80046C28: sra         $t8, $s4, 16
    ctx->r24 = S32(SIGNED(ctx->r20) >> 16);
    // 0x80046C2C: or          $s4, $t8, $zero
    ctx->r20 = ctx->r24 | 0;
    // 0x80046C30: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80046C34: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80046C38: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80046C3C:
    // 0x80046C3C: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80046C40: sra         $t0, $a1, 24
    ctx->r8 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80046C44: sll         $a2, $t0, 24
    ctx->r6 = S32(ctx->r8 << 24);
    // 0x80046C48: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80046C4C: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80046C50: sra         $t1, $a2, 24
    ctx->r9 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80046C54: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x80046C58: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80046C5C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80046C60: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x80046C64: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x80046C68: jal         0x80046244
    // 0x80046C6C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80046244(rdram, ctx);
        goto after_2;
    // 0x80046C6C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x80046C70: bltz        $v0, L_80046C94
    if (SIGNED(ctx->r2) < 0) {
        // 0x80046C74: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80046C94;
    }
    // 0x80046C74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80046C78: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80046C7C: lh          $t3, 0x4A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4A);
    // 0x80046C80: sll         $t4, $s1, 16
    ctx->r12 = S32(ctx->r17 << 16);
    // 0x80046C84: addu        $t2, $s2, $v0
    ctx->r10 = ADD32(ctx->r18, ctx->r2);
    // 0x80046C88: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80046C8C: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x80046C90: addu        $s2, $t2, $t3
    ctx->r18 = ADD32(ctx->r10, ctx->r11);
L_80046C94:
    // 0x80046C94: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x80046C98: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80046C9C: slti        $at, $t7, 0x10
    ctx->r1 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x80046CA0: bne         $at, $zero, L_80046C3C
    if (ctx->r1 != 0) {
        // 0x80046CA4: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_80046C3C;
    }
    // 0x80046CA4: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80046CA8: sltu        $t8, $zero, $s1
    ctx->r24 = 0 < ctx->r17 ? 1 : 0;
    // 0x80046CAC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80046CB0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80046CB4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80046CB8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80046CBC: c.eq.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl == ctx->f8.fl;
    // 0x80046CC0: nop

    // 0x80046CC4: bc1t        L_80046CD4
    if (c1cs) {
        // 0x80046CC8: nop
    
            goto L_80046CD4;
    }
    // 0x80046CC8: nop

    // 0x80046CCC: b           L_80046CD4
    // 0x80046CD0: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
        goto L_80046CD4;
    // 0x80046CD0: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
L_80046CD4:
    // 0x80046CD4: div         $zero, $s2, $v1
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r3)));
    // 0x80046CD8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80046CDC: bne         $v1, $zero, L_80046CE8
    if (ctx->r3 != 0) {
        // 0x80046CE0: nop
    
            goto L_80046CE8;
    }
    // 0x80046CE0: nop

    // 0x80046CE4: break       7
    do_break(2147773668);
L_80046CE8:
    // 0x80046CE8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80046CEC: bne         $v1, $at, L_80046D00
    if (ctx->r3 != ctx->r1) {
        // 0x80046CF0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80046D00;
    }
    // 0x80046CF0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80046CF4: bne         $s2, $at, L_80046D00
    if (ctx->r18 != ctx->r1) {
        // 0x80046CF8: nop
    
            goto L_80046D00;
    }
    // 0x80046CF8: nop

    // 0x80046CFC: break       6
    do_break(2147773692);
L_80046D00:
    // 0x80046D00: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80046D04: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80046D08: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80046D0C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80046D10: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80046D14: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80046D18: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80046D1C: mflo        $v0
    ctx->r2 = lo;
    // 0x80046D20: jr          $ra
    // 0x80046D24: nop

    return;
    // 0x80046D24: nop

;}
