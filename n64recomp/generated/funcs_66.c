#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_8026A0F0_func_8026C070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C070: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8026C074: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8026C078: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8026C07C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8026C080: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8026C084: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8026C088: jr          $ra
    // 0x8026C08C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8026C08C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026C094: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C098: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026C09C: addiu       $a0, $a0, -0x3F38
    ctx->r4 = ADD32(ctx->r4, -0X3F38);
    // 0x8026C0A0: jal         0x800293DC
    // 0x8026C0A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x8026C0A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x8026C0A8: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026C0AC: addiu       $a1, $a1, -0x310C
    ctx->r5 = ADD32(ctx->r5, -0X310C);
    // 0x8026C0B0: jal         0x8002A4C4
    // 0x8026C0B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8002A4C4(rdram, ctx);
        goto after_1;
    // 0x8026C0B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8026C0B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C0BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026C0C0: jr          $ra
    // 0x8026C0C4: nop

    return;
    // 0x8026C0C4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C0C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C0C8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8026C0CC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8026C0D0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8026C0D4: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8026C0D8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8026C0DC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8026C0E0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8026C0E4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8026C0E8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8026C0EC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8026C0F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8026C0F4: lw          $s2, 0x8($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X8);
    // 0x8026C0F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026C0FC: lb          $t6, 0x44($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X44);
    // 0x8026C100: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8026C104: bne         $t6, $at, L_8026C1C8
    if (ctx->r14 != ctx->r1) {
        // 0x8026C108: addiu       $fp, $zero, -0x1
        ctx->r30 = ADD32(0, -0X1);
            goto L_8026C1C8;
    }
    // 0x8026C108: addiu       $fp, $zero, -0x1
    ctx->r30 = ADD32(0, -0X1);
    // 0x8026C10C: addiu       $fp, $zero, -0x1
    ctx->r30 = ADD32(0, -0X1);
    // 0x8026C110: beq         $a1, $fp, L_8026C280
    if (ctx->r5 == ctx->r30) {
        // 0x8026C114: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_8026C280;
    }
    // 0x8026C114: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8026C118: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x8026C11C: addiu       $s3, $s3, -0x2CF0
    ctx->r19 = ADD32(ctx->r19, -0X2CF0);
    // 0x8026C120: addiu       $s6, $zero, 0x6
    ctx->r22 = ADD32(0, 0X6);
    // 0x8026C124: addiu       $s5, $zero, 0xB
    ctx->r21 = ADD32(0, 0XB);
    // 0x8026C128: addiu       $s4, $zero, 0xA94
    ctx->r20 = ADD32(0, 0XA94);
L_8026C12C:
    // 0x8026C12C: lb          $t0, 0x43($s2)
    ctx->r8 = MEM_B(ctx->r18, 0X43);
    // 0x8026C130: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x8026C134: multu       $t0, $s4
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026C138: sll         $a3, $v1, 24
    ctx->r7 = S32(ctx->r3 << 24);
    // 0x8026C13C: sra         $t5, $a3, 24
    ctx->r13 = S32(SIGNED(ctx->r7) >> 24);
    // 0x8026C140: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x8026C144: mflo        $t7
    ctx->r15 = lo;
    // 0x8026C148: addu        $v0, $s3, $t7
    ctx->r2 = ADD32(ctx->r19, ctx->r15);
    // 0x8026C14C: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8026C150: nop

    // 0x8026C154: multu       $a0, $s5
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026C158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026C15C: mflo        $t8
    ctx->r24 = lo;
    // 0x8026C160: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8026C164: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8026C168: multu       $s1, $s6
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026C16C: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x8026C170: addu        $t1, $v0, $t9
    ctx->r9 = ADD32(ctx->r2, ctx->r25);
    // 0x8026C174: mflo        $t2
    ctx->r10 = lo;
    // 0x8026C178: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8026C17C: lbu         $a1, 0x41C($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0X41C);
    // 0x8026C180: nop

    // 0x8026C184: andi        $t4, $a1, 0x80
    ctx->r12 = ctx->r5 & 0X80;
    // 0x8026C188: beq         $t4, $zero, L_8026C1A8
    if (ctx->r12 == 0) {
        // 0x8026C18C: andi        $a1, $t0, 0xFF
        ctx->r5 = ctx->r8 & 0XFF;
            goto L_8026C1A8;
    }
    // 0x8026C18C: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    // 0x8026C190: lb          $t6, 0x3B($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X3B);
    // 0x8026C194: lb          $a2, 0x40($s2)
    ctx->r6 = MEM_B(ctx->r18, 0X40);
    // 0x8026C198: jal         0x8026C2B0
    // 0x8026C19C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    ovl_8026A0F0_func_8026C2B0(rdram, ctx);
        goto after_0;
    // 0x8026C19C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x8026C1A0: b           L_8026C1B0
    // 0x8026C1A4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_8026C1B0;
    // 0x8026C1A4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8026C1A8:
    // 0x8026C1A8: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x8026C1AC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8026C1B0:
    // 0x8026C1B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8026C1B4: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x8026C1B8: bne         $s0, $fp, L_8026C12C
    if (ctx->r16 != ctx->r30) {
        // 0x8026C1BC: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_8026C12C;
    }
    // 0x8026C1BC: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x8026C1C0: b           L_8026C284
    // 0x8026C1C4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_8026C284;
    // 0x8026C1C4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_8026C1C8:
    // 0x8026C1C8: beq         $a1, $fp, L_8026C280
    if (ctx->r5 == ctx->r30) {
        // 0x8026C1CC: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_8026C280;
    }
    // 0x8026C1CC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8026C1D0: lui         $s7, 0x8012
    ctx->r23 = S32(0X8012 << 16);
    // 0x8026C1D4: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x8026C1D8: addiu       $s3, $s3, -0x2CF0
    ctx->r19 = ADD32(ctx->r19, -0X2CF0);
    // 0x8026C1DC: addiu       $s7, $s7, -0x32B0
    ctx->r23 = ADD32(ctx->r23, -0X32B0);
    // 0x8026C1E0: addiu       $s6, $zero, 0x6
    ctx->r22 = ADD32(0, 0X6);
    // 0x8026C1E4: addiu       $s5, $zero, 0xB
    ctx->r21 = ADD32(0, 0XB);
    // 0x8026C1E8: addiu       $s4, $zero, 0xA94
    ctx->r20 = ADD32(0, 0XA94);
L_8026C1EC:
    // 0x8026C1EC: lb          $t0, 0x44($s7)
    ctx->r8 = MEM_B(ctx->r23, 0X44);
    // 0x8026C1F0: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x8026C1F4: multu       $t0, $s4
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026C1F8: sll         $a3, $v1, 24
    ctx->r7 = S32(ctx->r3 << 24);
    // 0x8026C1FC: sra         $t6, $a3, 24
    ctx->r14 = S32(SIGNED(ctx->r7) >> 24);
    // 0x8026C200: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8026C204: mflo        $t8
    ctx->r24 = lo;
    // 0x8026C208: addu        $v0, $s3, $t8
    ctx->r2 = ADD32(ctx->r19, ctx->r24);
    // 0x8026C20C: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8026C210: nop

    // 0x8026C214: multu       $a0, $s5
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026C218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026C21C: mflo        $t9
    ctx->r25 = lo;
    // 0x8026C220: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8026C224: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x8026C228: multu       $s1, $s6
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026C22C: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x8026C230: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x8026C234: mflo        $t3
    ctx->r11 = lo;
    // 0x8026C238: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8026C23C: lbu         $a1, 0x41C($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X41C);
    // 0x8026C240: nop

    // 0x8026C244: andi        $t5, $a1, 0x80
    ctx->r13 = ctx->r5 & 0X80;
    // 0x8026C248: beq         $t5, $zero, L_8026C268
    if (ctx->r13 == 0) {
        // 0x8026C24C: andi        $a1, $t0, 0xFF
        ctx->r5 = ctx->r8 & 0XFF;
            goto L_8026C268;
    }
    // 0x8026C24C: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    // 0x8026C250: lb          $t7, 0x3A($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X3A);
    // 0x8026C254: lb          $a2, 0x2E($s2)
    ctx->r6 = MEM_B(ctx->r18, 0X2E);
    // 0x8026C258: jal         0x8026C2B0
    // 0x8026C25C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    ovl_8026A0F0_func_8026C2B0(rdram, ctx);
        goto after_1;
    // 0x8026C25C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x8026C260: b           L_8026C270
    // 0x8026C264: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_8026C270;
    // 0x8026C264: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8026C268:
    // 0x8026C268: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x8026C26C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8026C270:
    // 0x8026C270: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8026C274: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x8026C278: bne         $s0, $fp, L_8026C1EC
    if (ctx->r16 != ctx->r30) {
        // 0x8026C27C: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_8026C1EC;
    }
    // 0x8026C27C: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_8026C280:
    // 0x8026C280: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_8026C284:
    // 0x8026C284: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026C288: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8026C28C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8026C290: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8026C294: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8026C298: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8026C29C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8026C2A0: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8026C2A4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8026C2A8: jr          $ra
    // 0x8026C2AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8026C2AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C1EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026C1EC:
    // 0x8026C1EC: lb          $t0, 0x44($s7)
    ctx->r8 = MEM_B(ctx->r23, 0X44);
    // 0x8026C1F0: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x8026C1F4: multu       $t0, $s4
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026C1F8: sll         $a3, $v1, 24
    ctx->r7 = S32(ctx->r3 << 24);
    // 0x8026C1FC: sra         $t6, $a3, 24
    ctx->r14 = S32(SIGNED(ctx->r7) >> 24);
    // 0x8026C200: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8026C204: mflo        $t8
    ctx->r24 = lo;
    // 0x8026C208: addu        $v0, $s3, $t8
    ctx->r2 = ADD32(ctx->r19, ctx->r24);
    // 0x8026C20C: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8026C210: nop

    // 0x8026C214: multu       $a0, $s5
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026C218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026C21C: mflo        $t9
    ctx->r25 = lo;
    // 0x8026C220: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8026C224: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x8026C228: multu       $s1, $s6
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026C22C: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x8026C230: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x8026C234: mflo        $t3
    ctx->r11 = lo;
    // 0x8026C238: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8026C23C: lbu         $a1, 0x41C($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X41C);
    // 0x8026C240: nop

    // 0x8026C244: andi        $t5, $a1, 0x80
    ctx->r13 = ctx->r5 & 0X80;
    // 0x8026C248: beq         $t5, $zero, L_8026C268
    if (ctx->r13 == 0) {
        // 0x8026C24C: andi        $a1, $t0, 0xFF
        ctx->r5 = ctx->r8 & 0XFF;
            goto L_8026C268;
    }
    // 0x8026C24C: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    // 0x8026C250: lb          $t7, 0x3A($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X3A);
    // 0x8026C254: lb          $a2, 0x2E($s2)
    ctx->r6 = MEM_B(ctx->r18, 0X2E);
    // 0x8026C258: jal         0x8026C2B0
    // 0x8026C25C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    ovl_8026A0F0_func_8026C2B0(rdram, ctx);
        goto after_0;
    // 0x8026C25C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x8026C260: b           L_8026C270
    // 0x8026C264: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_8026C270;
    // 0x8026C264: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8026C268:
    // 0x8026C268: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x8026C26C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8026C270:
    // 0x8026C270: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8026C274: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x8026C278: bne         $s0, $fp, L_8026C1EC
    if (ctx->r16 != ctx->r30) {
        // 0x8026C27C: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_8026C1EC;
    }
    // 0x8026C27C: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x8026C280: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8026C284: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026C288: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8026C28C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8026C290: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8026C294: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8026C298: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8026C29C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8026C2A0: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8026C2A4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8026C2A8: jr          $ra
    // 0x8026C2AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8026C2AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026C1EC:
    // 0x8026C22C: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x8026C230: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x8026C234: mflo        $t3
    ctx->r11 = lo;
    // 0x8026C238: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8026C23C: lbu         $a1, 0x41C($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X41C);
    // 0x8026C240: nop

    // 0x8026C244: andi        $t5, $a1, 0x80
    ctx->r13 = ctx->r5 & 0X80;
    // 0x8026C248: beq         $t5, $zero, L_8026C268
    if (ctx->r13 == 0) {
        // 0x8026C24C: andi        $a1, $t0, 0xFF
        ctx->r5 = ctx->r8 & 0XFF;
            goto L_8026C268;
    }
    // 0x8026C24C: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    // 0x8026C250: lb          $t7, 0x3A($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X3A);
    // 0x8026C254: lb          $a2, 0x2E($s2)
    ctx->r6 = MEM_B(ctx->r18, 0X2E);
    // 0x8026C258: jal         0x8026C2B0
    // 0x8026C25C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    ovl_8026A0F0_func_8026C2B0(rdram, ctx);
        goto after_0;
    // 0x8026C25C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x8026C260: b           L_8026C270
    // 0x8026C264: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_8026C270;
    // 0x8026C264: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8026C268:
    // 0x8026C268: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x8026C26C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8026C270:
    // 0x8026C270: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8026C274: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x8026C278: bne         $s0, $fp, L_8026C1EC
    if (ctx->r16 != ctx->r30) {
            // 0x8026C27C: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    ovl_8026A0F0_func_8026C1EC(rdram, ctx);
    return;
    }
    // 0x8026C27C: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x8026C280: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8026C284: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026C288: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8026C28C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8026C290: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8026C294: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8026C298: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8026C29C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8026C2A0: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8026C2A4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8026C2A8: jr          $ra
    // 0x8026C2AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8026C2AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C2B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8026C2B4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8026C2B8: lb          $t6, 0x33($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X33);
    // 0x8026C2BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026C2C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026C2C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026C2C8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8026C2CC: bne         $t6, $zero, L_8026C2E4
    if (ctx->r14 != 0) {
        // 0x8026C2D0: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_8026C2E4;
    }
    // 0x8026C2D0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8026C2D4: lui         $t7, 0x803D
    ctx->r15 = S32(0X803D << 16);
    // 0x8026C2D8: addiu       $t7, $t7, -0x728C
    ctx->r15 = ADD32(ctx->r15, -0X728C);
    // 0x8026C2DC: b           L_8026C2F0
    // 0x8026C2E0: sw          $t7, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r15;
        goto L_8026C2F0;
    // 0x8026C2E0: sw          $t7, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r15;
L_8026C2E4:
    // 0x8026C2E4: lui         $t8, 0x803D
    ctx->r24 = S32(0X803D << 16);
    // 0x8026C2E8: addiu       $t8, $t8, -0x72E0
    ctx->r24 = ADD32(ctx->r24, -0X72E0);
    // 0x8026C2EC: sw          $t8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r24;
L_8026C2F0:
    // 0x8026C2F0: addiu       $t9, $zero, 0x30B
    ctx->r25 = ADD32(0, 0X30B);
    // 0x8026C2F4: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x8026C2F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026C2FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8026C300: jal         0x8002135C
    // 0x8026C304: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8026C304: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    after_0:
    // 0x8026C308: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8026C30C: sb          $t0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r8;
    // 0x8026C310: lbu         $a3, 0x37($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X37);
    // 0x8026C314: lbu         $a2, 0x33($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X33);
    // 0x8026C318: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x8026C31C: jal         0x8026CC04
    // 0x8026C320: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    ovl_8026A0F0_func_8026CC04(rdram, ctx);
        goto after_1;
    // 0x8026C320: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x8026C324: lh          $a1, 0x24($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X24);
    // 0x8026C328: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x8026C32C: jal         0x8004CD44
    // 0x8026C330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x8026C330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8026C334: lb          $t1, 0x37($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X37);
    // 0x8026C338: lb          $t2, 0x3B($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X3B);
    // 0x8026C33C: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x8026C340: bne         $t1, $t2, L_8026C350
    if (ctx->r9 != ctx->r10) {
        // 0x8026C344: addiu       $t3, $zero, 0xFF
        ctx->r11 = ADD32(0, 0XFF);
            goto L_8026C350;
    }
    // 0x8026C344: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8026C348: b           L_8026C354
    // 0x8026C34C: sh          $t3, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r11;
        goto L_8026C354;
    // 0x8026C34C: sh          $t3, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r11;
L_8026C350:
    // 0x8026C350: sh          $t4, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r12;
L_8026C354:
    // 0x8026C354: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026C358: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026C35C: jr          $ra
    // 0x8026C360: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8026C360: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026C368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C36C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026C370: addiu       $a0, $a0, -0x3C60
    ctx->r4 = ADD32(ctx->r4, -0X3C60);
    // 0x8026C374: jal         0x800293DC
    // 0x8026C378: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x8026C378: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x8026C37C: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026C380: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    // 0x8026C384: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8026C388: jal         0x8006E170
    // 0x8026C38C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8006E170(rdram, ctx);
        goto after_1;
    // 0x8026C38C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8026C390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C394: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026C398: jr          $ra
    // 0x8026C39C: nop

    return;
    // 0x8026C39C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C3A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8026C3A4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8026C3A8: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x8026C3AC: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x8026C3B0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8026C3B4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8026C3B8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026C3BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026C3C0: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x8026C3C4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8026C3C8: beq         $v1, $at, L_8026C3E4
    if (ctx->r3 == ctx->r1) {
        // 0x8026C3CC: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_8026C3E4;
    }
    // 0x8026C3CC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026C3D0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026C3D4: beq         $v1, $at, L_8026C458
    if (ctx->r3 == ctx->r1) {
        // 0x8026C3D8: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_8026C458;
    }
    // 0x8026C3D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026C3DC: b           L_8026C4CC
    // 0x8026C3E0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
        goto L_8026C4CC;
    // 0x8026C3E0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
L_8026C3E4:
    // 0x8026C3E4: lb          $a1, 0x3A($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X3A);
    // 0x8026C3E8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8026C3EC: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x8026C3F0: addiu       $t7, $zero, 0x48
    ctx->r15 = ADD32(0, 0X48);
    // 0x8026C3F4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8026C3F8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8026C3FC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8026C400: jal         0x8006E244
    // 0x8026C404: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    func_8006E244(rdram, ctx);
        goto after_0;
    // 0x8026C404: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    after_0:
    // 0x8026C408: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026C40C: jal         0x8002A468
    // 0x8026C410: addiu       $a0, $a0, -0x310C
    ctx->r4 = ADD32(ctx->r4, -0X310C);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x8026C410: addiu       $a0, $a0, -0x310C
    ctx->r4 = ADD32(ctx->r4, -0X310C);
    after_1:
    // 0x8026C414: lui         $s3, 0x3
    ctx->r19 = S32(0X3 << 16);
    // 0x8026C418: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x8026C41C: addiu       $s2, $s2, -0x3770
    ctx->r18 = ADD32(ctx->r18, -0X3770);
    // 0x8026C420: ori         $s3, $s3, 0x3E8
    ctx->r19 = ctx->r19 | 0X3E8;
    // 0x8026C424: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8026C428: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8026C42C:
    // 0x8026C42C: sll         $t8, $s1, 5
    ctx->r24 = S32(ctx->r17 << 5);
    // 0x8026C430: addu        $t9, $s2, $t8
    ctx->r25 = ADD32(ctx->r18, ctx->r24);
    // 0x8026C434: jal         0x8026CF08
    // 0x8026C438: addu        $a0, $t9, $s3
    ctx->r4 = ADD32(ctx->r25, ctx->r19);
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_2;
    // 0x8026C438: addu        $a0, $t9, $s3
    ctx->r4 = ADD32(ctx->r25, ctx->r19);
    after_2:
    // 0x8026C43C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8026C440: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x8026C444: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x8026C448: bne         $at, $zero, L_8026C42C
    if (ctx->r1 != 0) {
        // 0x8026C44C: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8026C42C;
    }
    // 0x8026C44C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8026C450: b           L_8026C4E4
    // 0x8026C454: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8026C4E4;
    // 0x8026C454: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8026C458:
    // 0x8026C458: lb          $a1, 0x3A($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X3A);
    // 0x8026C45C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8026C460: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x8026C464: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x8026C468: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8026C46C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8026C470: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8026C474: jal         0x8006E244
    // 0x8026C478: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    func_8006E244(rdram, ctx);
        goto after_3;
    // 0x8026C478: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    after_3:
    // 0x8026C47C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026C480: jal         0x8002A468
    // 0x8026C484: addiu       $a0, $a0, -0x310C
    ctx->r4 = ADD32(ctx->r4, -0X310C);
    func_8002A468(rdram, ctx);
        goto after_4;
    // 0x8026C484: addiu       $a0, $a0, -0x310C
    ctx->r4 = ADD32(ctx->r4, -0X310C);
    after_4:
    // 0x8026C488: lui         $s3, 0x3
    ctx->r19 = S32(0X3 << 16);
    // 0x8026C48C: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x8026C490: addiu       $s2, $s2, -0x3770
    ctx->r18 = ADD32(ctx->r18, -0X3770);
    // 0x8026C494: ori         $s3, $s3, 0x3E8
    ctx->r19 = ctx->r19 | 0X3E8;
    // 0x8026C498: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8026C49C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8026C4A0:
    // 0x8026C4A0: sll         $t3, $s1, 5
    ctx->r11 = S32(ctx->r17 << 5);
    // 0x8026C4A4: addu        $t4, $s2, $t3
    ctx->r12 = ADD32(ctx->r18, ctx->r11);
    // 0x8026C4A8: jal         0x8026CF08
    // 0x8026C4AC: addu        $a0, $t4, $s3
    ctx->r4 = ADD32(ctx->r12, ctx->r19);
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_5;
    // 0x8026C4AC: addu        $a0, $t4, $s3
    ctx->r4 = ADD32(ctx->r12, ctx->r19);
    after_5:
    // 0x8026C4B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8026C4B4: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x8026C4B8: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x8026C4BC: bne         $at, $zero, L_8026C4A0
    if (ctx->r1 != 0) {
        // 0x8026C4C0: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8026C4A0;
    }
    // 0x8026C4C0: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8026C4C4: b           L_8026C4E4
    // 0x8026C4C8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8026C4E4;
    // 0x8026C4C8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8026C4CC:
    // 0x8026C4CC: jal         0x8002A468
    // 0x8026C4D0: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_6;
    // 0x8026C4D0: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_6:
    // 0x8026C4D4: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x8026C4D8: jal         0x8002F224
    // 0x8026C4DC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    func_8002F224(rdram, ctx);
        goto after_7;
    // 0x8026C4DC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_7:
    // 0x8026C4E0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8026C4E4:
    // 0x8026C4E4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8026C4E8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8026C4EC: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x8026C4F0: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x8026C4F4: jr          $ra
    // 0x8026C4F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026C4F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C4FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026C500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C504: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026C508: addiu       $a0, $a0, -0x3AC8
    ctx->r4 = ADD32(ctx->r4, -0X3AC8);
    // 0x8026C50C: jal         0x800293DC
    // 0x8026C510: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x8026C510: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x8026C514: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026C518: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x8026C51C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x8026C520: jal         0x8006E170
    // 0x8026C524: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006E170(rdram, ctx);
        goto after_1;
    // 0x8026C524: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8026C528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C52C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026C530: jr          $ra
    // 0x8026C534: nop

    return;
    // 0x8026C534: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C538: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8026C53C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8026C540: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x8026C544: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x8026C548: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8026C54C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8026C550: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026C554: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026C558: lb          $t6, 0x38($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X38);
    // 0x8026C55C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8026C560: bne         $t6, $at, L_8026C5E0
    if (ctx->r14 != ctx->r1) {
        // 0x8026C564: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_8026C5E0;
    }
    // 0x8026C564: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8026C568: lbu         $a0, 0x43($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X43);
    // 0x8026C56C: lb          $a1, 0x3B($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X3B);
    // 0x8026C570: addiu       $t7, $zero, 0xC0
    ctx->r15 = ADD32(0, 0XC0);
    // 0x8026C574: addiu       $t8, $zero, 0x48
    ctx->r24 = ADD32(0, 0X48);
    // 0x8026C578: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8026C57C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8026C580: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8026C584: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8026C588: jal         0x8006E244
    // 0x8026C58C: addiu       $a3, $zero, 0x33
    ctx->r7 = ADD32(0, 0X33);
    func_8006E244(rdram, ctx);
        goto after_0;
    // 0x8026C58C: addiu       $a3, $zero, 0x33
    ctx->r7 = ADD32(0, 0X33);
    after_0:
    // 0x8026C590: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026C594: jal         0x8002A468
    // 0x8026C598: addiu       $a0, $a0, -0x310C
    ctx->r4 = ADD32(ctx->r4, -0X310C);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x8026C598: addiu       $a0, $a0, -0x310C
    ctx->r4 = ADD32(ctx->r4, -0X310C);
    after_1:
    // 0x8026C59C: lui         $s3, 0x3
    ctx->r19 = S32(0X3 << 16);
    // 0x8026C5A0: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x8026C5A4: addiu       $s2, $s2, -0x3770
    ctx->r18 = ADD32(ctx->r18, -0X3770);
    // 0x8026C5A8: ori         $s3, $s3, 0x548
    ctx->r19 = ctx->r19 | 0X548;
    // 0x8026C5AC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8026C5B0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8026C5B4:
    // 0x8026C5B4: sll         $t0, $s1, 5
    ctx->r8 = S32(ctx->r17 << 5);
    // 0x8026C5B8: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x8026C5BC: jal         0x8026CF08
    // 0x8026C5C0: addu        $a0, $t1, $s3
    ctx->r4 = ADD32(ctx->r9, ctx->r19);
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_2;
    // 0x8026C5C0: addu        $a0, $t1, $s3
    ctx->r4 = ADD32(ctx->r9, ctx->r19);
    after_2:
    // 0x8026C5C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8026C5C8: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x8026C5CC: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x8026C5D0: bne         $at, $zero, L_8026C5B4
    if (ctx->r1 != 0) {
        // 0x8026C5D4: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8026C5B4;
    }
    // 0x8026C5D4: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8026C5D8: b           L_8026C5F8
    // 0x8026C5DC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8026C5F8;
    // 0x8026C5DC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8026C5E0:
    // 0x8026C5E0: jal         0x8002A468
    // 0x8026C5E4: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_3;
    // 0x8026C5E4: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_3:
    // 0x8026C5E8: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    // 0x8026C5EC: jal         0x8002F224
    // 0x8026C5F0: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    func_8002F224(rdram, ctx);
        goto after_4;
    // 0x8026C5F0: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    after_4:
    // 0x8026C5F4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8026C5F8:
    // 0x8026C5F8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8026C5FC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8026C600: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x8026C604: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x8026C608: jr          $ra
    // 0x8026C60C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026C60C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C610: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026C614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C618: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026C61C: jal         0x80029220
    // 0x8026C620: addiu       $a0, $a0, -0x39CC
    ctx->r4 = ADD32(ctx->r4, -0X39CC);
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x8026C620: addiu       $a0, $a0, -0x39CC
    ctx->r4 = ADD32(ctx->r4, -0X39CC);
    after_0:
    // 0x8026C624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026C62C: jr          $ra
    // 0x8026C630: nop

    return;
    // 0x8026C630: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026C638: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C63C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026C640: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8026C644: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026C648: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x8026C64C: nop

    // 0x8026C650: beq         $v0, $zero, L_8026C67C
    if (ctx->r2 == 0) {
        // 0x8026C654: nop
    
            goto L_8026C67C;
    }
    // 0x8026C654: nop

    // 0x8026C658: beq         $v0, $at, L_8026C67C
    if (ctx->r2 == ctx->r1) {
        // 0x8026C65C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8026C67C;
    }
    // 0x8026C65C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026C660: beq         $v0, $at, L_8026C68C
    if (ctx->r2 == ctx->r1) {
        // 0x8026C664: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8026C68C;
    }
    // 0x8026C664: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8026C668: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026C66C: beq         $v0, $at, L_8026C6A8
    if (ctx->r2 == ctx->r1) {
        // 0x8026C670: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8026C6A8;
    }
    // 0x8026C670: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8026C674: b           L_8026C6C0
    // 0x8026C678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026C6C0;
    // 0x8026C678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026C67C:
    // 0x8026C67C: jal         0x8000E25C
    // 0x8026C680: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8000E25C(rdram, ctx);
        goto after_0;
    // 0x8026C680: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x8026C684: b           L_8026C6C0
    // 0x8026C688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026C6C0;
    // 0x8026C688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026C68C:
    // 0x8026C68C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026C690: lb          $a1, -0x326B($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X326B);
    // 0x8026C694: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    // 0x8026C698: jal         0x8026D384
    // 0x8026C69C: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    ovl_8026A0F0_func_8026D384(rdram, ctx);
        goto after_1;
    // 0x8026C69C: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_1:
    // 0x8026C6A0: b           L_8026C6C0
    // 0x8026C6A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026C6C0;
    // 0x8026C6A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026C6A8:
    // 0x8026C6A8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026C6AC: lb          $a1, -0x326B($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X326B);
    // 0x8026C6B0: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    // 0x8026C6B4: jal         0x8026D384
    // 0x8026C6B8: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    ovl_8026A0F0_func_8026D384(rdram, ctx);
        goto after_2;
    // 0x8026C6B8: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_2:
    // 0x8026C6BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026C6C0:
    // 0x8026C6C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026C6C4: jr          $ra
    // 0x8026C6C8: nop

    return;
    // 0x8026C6C8: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C6CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C6CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026C6D0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026C6D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C6D8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8026C6DC: lui         $a1, 0x803D
    ctx->r5 = S32(0X803D << 16);
    // 0x8026C6E0: jal         0x8004C2C8
    // 0x8026C6E4: addiu       $a1, $a1, -0x5594
    ctx->r5 = ADD32(ctx->r5, -0X5594);
    func_8004C2C8(rdram, ctx);
        goto after_0;
    // 0x8026C6E4: addiu       $a1, $a1, -0x5594
    ctx->r5 = ADD32(ctx->r5, -0X5594);
    after_0:
    // 0x8026C6E8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8026C6EC: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8026C6F0: addiu       $t6, $t6, -0x38DC
    ctx->r14 = ADD32(ctx->r14, -0X38DC);
    // 0x8026C6F4: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026C6F8: jal         0x8026CEF4
    // 0x8026C6FC: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_1;
    // 0x8026C6FC: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    after_1:
    // 0x8026C700: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8026C704: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8026C708: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x8026C70C: nop

    // 0x8026C710: sb          $t7, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r15;
    // 0x8026C714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C718: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026C71C: jr          $ra
    // 0x8026C720: nop

    return;
    // 0x8026C720: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C724: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026C728: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026C72C: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x8026C730: nop

    // 0x8026C734: beq         $v1, $zero, L_8026C760
    if (ctx->r3 == 0) {
        // 0x8026C738: nop
    
            goto L_8026C760;
    }
    // 0x8026C738: nop

    // 0x8026C73C: beq         $v1, $at, L_8026C760
    if (ctx->r3 == ctx->r1) {
        // 0x8026C740: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8026C760;
    }
    // 0x8026C740: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026C744: beq         $v1, $at, L_8026C768
    if (ctx->r3 == ctx->r1) {
        // 0x8026C748: lui         $t6, 0x803D
        ctx->r14 = S32(0X803D << 16);
            goto L_8026C768;
    }
    // 0x8026C748: lui         $t6, 0x803D
    ctx->r14 = S32(0X803D << 16);
    // 0x8026C74C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026C750: beq         $v1, $at, L_8026C774
    if (ctx->r3 == ctx->r1) {
        // 0x8026C754: lui         $t7, 0x803D
        ctx->r15 = S32(0X803D << 16);
            goto L_8026C774;
    }
    // 0x8026C754: lui         $t7, 0x803D
    ctx->r15 = S32(0X803D << 16);
    // 0x8026C758: jr          $ra
    // 0x8026C75C: nop

    return;
    // 0x8026C75C: nop

L_8026C760:
    // 0x8026C760: jr          $ra
    // 0x8026C764: sw          $zero, 0x30($a1)
    MEM_W(0X30, ctx->r5) = 0;
    return;
    // 0x8026C764: sw          $zero, 0x30($a1)
    MEM_W(0X30, ctx->r5) = 0;
L_8026C768:
    // 0x8026C768: addiu       $t6, $t6, -0x54F8
    ctx->r14 = ADD32(ctx->r14, -0X54F8);
    // 0x8026C76C: jr          $ra
    // 0x8026C770: sw          $t6, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r14;
    return;
    // 0x8026C770: sw          $t6, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r14;
L_8026C774:
    // 0x8026C774: addiu       $t7, $t7, -0x5594
    ctx->r15 = ADD32(ctx->r15, -0X5594);
    // 0x8026C778: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
    // 0x8026C77C: jr          $ra
    // 0x8026C780: nop

    return;
    // 0x8026C780: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C784: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026C788: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C78C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026C790: jal         0x80029220
    // 0x8026C794: addiu       $a0, $a0, -0x3858
    ctx->r4 = ADD32(ctx->r4, -0X3858);
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x8026C794: addiu       $a0, $a0, -0x3858
    ctx->r4 = ADD32(ctx->r4, -0X3858);
    after_0:
    // 0x8026C798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C79C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026C7A0: jr          $ra
    // 0x8026C7A4: nop

    return;
    // 0x8026C7A4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C7A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C7A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026C7AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C7B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026C7B4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026C7B8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026C7BC: lb          $t6, 0x38($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X38);
    // 0x8026C7C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8026C7C4: bne         $t6, $at, L_8026C810
    if (ctx->r14 != ctx->r1) {
        // 0x8026C7C8: lui         $a1, 0x8012
        ctx->r5 = S32(0X8012 << 16);
            goto L_8026C810;
    }
    // 0x8026C7C8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026C7CC: lb          $t7, 0x43($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X43);
    // 0x8026C7D0: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    // 0x8026C7D4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8026C7D8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8026C7DC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8026C7E0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8026C7E4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8026C7E8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8026C7EC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8026C7F0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8026C7F4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8026C7F8: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x8026C7FC: lbu         $a1, -0x2CF0($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2CF0);
    // 0x8026C800: jal         0x8026D384
    // 0x8026C804: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    ovl_8026A0F0_func_8026D384(rdram, ctx);
        goto after_0;
    // 0x8026C804: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_0:
    // 0x8026C808: b           L_8026C81C
    // 0x8026C80C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026C81C;
    // 0x8026C80C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026C810:
    // 0x8026C810: jal         0x8000E25C
    // 0x8026C814: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8000E25C(rdram, ctx);
        goto after_1;
    // 0x8026C814: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x8026C818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026C81C:
    // 0x8026C81C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026C820: jr          $ra
    // 0x8026C824: nop

    return;
    // 0x8026C824: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C828: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8026C82C: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x8026C830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026C834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C838: lui         $a1, 0x803D
    ctx->r5 = S32(0X803D << 16);
    // 0x8026C83C: lbu         $a0, 0x43($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X43);
    // 0x8026C840: jal         0x8004C2C8
    // 0x8026C844: addiu       $a1, $a1, -0x5654
    ctx->r5 = ADD32(ctx->r5, -0X5654);
    func_8004C2C8(rdram, ctx);
        goto after_0;
    // 0x8026C844: addiu       $a1, $a1, -0x5654
    ctx->r5 = ADD32(ctx->r5, -0X5654);
    after_0:
    // 0x8026C848: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x8026C84C: addiu       $t7, $t7, -0x3794
    ctx->r15 = ADD32(ctx->r15, -0X3794);
    // 0x8026C850: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026C854: jal         0x8026CEF4
    // 0x8026C858: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_1;
    // 0x8026C858: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
    after_1:
    // 0x8026C85C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C860: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026C864: jr          $ra
    // 0x8026C868: nop

    return;
    // 0x8026C868: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C86C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C86C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026C870: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026C874: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x8026C878: nop

    // 0x8026C87C: beq         $v1, $zero, L_8026C8A4
    if (ctx->r3 == 0) {
        // 0x8026C880: nop
    
            goto L_8026C8A4;
    }
    // 0x8026C880: nop

    // 0x8026C884: beq         $v1, $at, L_8026C8A4
    if (ctx->r3 == ctx->r1) {
        // 0x8026C888: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8026C8A4;
    }
    // 0x8026C888: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026C88C: beq         $v1, $at, L_8026C8A4
    if (ctx->r3 == ctx->r1) {
        // 0x8026C890: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8026C8A4;
    }
    // 0x8026C890: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026C894: beq         $v1, $at, L_8026C8AC
    if (ctx->r3 == ctx->r1) {
        // 0x8026C898: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8026C8AC;
    }
    // 0x8026C898: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8026C89C: jr          $ra
    // 0x8026C8A0: nop

    return;
    // 0x8026C8A0: nop

L_8026C8A4:
    // 0x8026C8A4: jr          $ra
    // 0x8026C8A8: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    return;
    // 0x8026C8A8: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
L_8026C8AC:
    // 0x8026C8AC: sb          $t6, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r14;
    // 0x8026C8B0: jr          $ra
    // 0x8026C8B4: nop

    return;
    // 0x8026C8B4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C8B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C8B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026C8BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C8C0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026C8C4: addiu       $a0, $a0, -0x3710
    ctx->r4 = ADD32(ctx->r4, -0X3710);
    // 0x8026C8C8: jal         0x800293DC
    // 0x8026C8CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x8026C8CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8026C8D0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026C8D4: addiu       $a1, $a1, -0x310C
    ctx->r5 = ADD32(ctx->r5, -0X310C);
    // 0x8026C8D8: jal         0x8002A4C4
    // 0x8026C8DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8002A4C4(rdram, ctx);
        goto after_1;
    // 0x8026C8DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8026C8E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C8E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026C8E8: jr          $ra
    // 0x8026C8EC: nop

    return;
    // 0x8026C8EC: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C8F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C8F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026C8F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026C8F8: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8026C8FC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8026C900: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8026C904: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8026C908: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8026C90C: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    // 0x8026C910: jal         0x8002A468
    // 0x8026C914: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x8026C914: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x8026C918: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8026C91C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8026C920: lb          $t9, 0x44($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X44);
    // 0x8026C924: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026C928: bne         $t9, $at, L_8026C974
    if (ctx->r25 != ctx->r1) {
        // 0x8026C92C: lui         $t1, 0x8012
        ctx->r9 = S32(0X8012 << 16);
            goto L_8026C974;
    }
    // 0x8026C92C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8026C930: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8026C934: lb          $t0, -0x326C($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X326C);
    // 0x8026C938: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8026C93C: bne         $t0, $zero, L_8026C960
    if (ctx->r8 != 0) {
        // 0x8026C940: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_8026C960;
    }
    // 0x8026C940: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026C944: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026C948: addiu       $a1, $a1, -0x1436
    ctx->r5 = ADD32(ctx->r5, -0X1436);
    // 0x8026C94C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8026C950: jal         0x8004A298
    // 0x8026C954: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x8026C954: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8026C958: b           L_8026C9B0
    // 0x8026C95C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
        goto L_8026C9B0;
    // 0x8026C95C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
L_8026C960:
    // 0x8026C960: addiu       $a1, $a1, -0x1436
    ctx->r5 = ADD32(ctx->r5, -0X1436);
    // 0x8026C964: jal         0x8004A34C
    // 0x8026C968: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A34C(rdram, ctx);
        goto after_2;
    // 0x8026C968: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8026C96C: b           L_8026C9B0
    // 0x8026C970: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
        goto L_8026C9B0;
    // 0x8026C970: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
L_8026C974:
    // 0x8026C974: lb          $t1, -0x326C($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X326C);
    // 0x8026C978: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8026C97C: bne         $t1, $zero, L_8026C9A0
    if (ctx->r9 != 0) {
        // 0x8026C980: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_8026C9A0;
    }
    // 0x8026C980: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026C984: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026C988: addiu       $a1, $a1, -0x1440
    ctx->r5 = ADD32(ctx->r5, -0X1440);
    // 0x8026C98C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8026C990: jal         0x8004A34C
    // 0x8026C994: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A34C(rdram, ctx);
        goto after_3;
    // 0x8026C994: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8026C998: b           L_8026C9B0
    // 0x8026C99C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
        goto L_8026C9B0;
    // 0x8026C99C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
L_8026C9A0:
    // 0x8026C9A0: addiu       $a1, $a1, -0x1440
    ctx->r5 = ADD32(ctx->r5, -0X1440);
    // 0x8026C9A4: jal         0x8004A298
    // 0x8026C9A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_4;
    // 0x8026C9A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8026C9AC: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
L_8026C9B0:
    // 0x8026C9B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026C9B4: lb          $v0, 0x38($t2)
    ctx->r2 = MEM_B(ctx->r10, 0X38);
    // 0x8026C9B8: nop

    // 0x8026C9BC: beq         $v0, $zero, L_8026CA40
    if (ctx->r2 == 0) {
        // 0x8026C9C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026CA40;
    }
    // 0x8026C9C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C9C4: beq         $v0, $at, L_8026C9E8
    if (ctx->r2 == ctx->r1) {
        // 0x8026C9C8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8026C9E8;
    }
    // 0x8026C9C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026C9CC: beq         $v0, $at, L_8026CA14
    if (ctx->r2 == ctx->r1) {
        // 0x8026C9D0: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_8026CA14;
    }
    // 0x8026C9D0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026C9D4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026C9D8: beq         $v0, $at, L_8026CA2C
    if (ctx->r2 == ctx->r1) {
        // 0x8026C9DC: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_8026CA2C;
    }
    // 0x8026C9DC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026C9E0: b           L_8026CA40
    // 0x8026C9E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026CA40;
    // 0x8026C9E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026C9E8:
    // 0x8026C9E8: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8026C9EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026C9F0: lb          $t4, 0x39($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X39);
    // 0x8026C9F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026C9F8: bne         $t4, $at, L_8026CA3C
    if (ctx->r12 != ctx->r1) {
        // 0x8026C9FC: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_8026CA3C;
    }
    // 0x8026C9FC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026CA00: addiu       $a1, $a1, -0x1418
    ctx->r5 = ADD32(ctx->r5, -0X1418);
    // 0x8026CA04: jal         0x8004A298
    // 0x8026CA08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_5;
    // 0x8026CA08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8026CA0C: b           L_8026CA40
    // 0x8026CA10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026CA40;
    // 0x8026CA10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026CA14:
    // 0x8026CA14: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026CA18: addiu       $a1, $a1, -0x142C
    ctx->r5 = ADD32(ctx->r5, -0X142C);
    // 0x8026CA1C: jal         0x8004A298
    // 0x8026CA20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_6;
    // 0x8026CA20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x8026CA24: b           L_8026CA40
    // 0x8026CA28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026CA40;
    // 0x8026CA28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026CA2C:
    // 0x8026CA2C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026CA30: addiu       $a1, $a1, -0x1422
    ctx->r5 = ADD32(ctx->r5, -0X1422);
    // 0x8026CA34: jal         0x8004A298
    // 0x8026CA38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_7;
    // 0x8026CA38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
L_8026CA3C:
    // 0x8026CA3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026CA40:
    // 0x8026CA40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026CA44: jr          $ra
    // 0x8026CA48: nop

    return;
    // 0x8026CA48: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026C934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026C934: lb          $t0, -0x326C($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X326C);
    // 0x8026C938: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8026C93C: bne         $t0, $zero, L_8026C960
    if (ctx->r8 != 0) {
        // 0x8026C940: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_8026C960;
    }
    // 0x8026C940: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026C944: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026C948: addiu       $a1, $a1, -0x1436
    ctx->r5 = ADD32(ctx->r5, -0X1436);
    // 0x8026C94C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8026C950: jal         0x8004A298
    // 0x8026C954: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_0;
    // 0x8026C954: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8026C958: b           L_8026C9B0
    // 0x8026C95C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
        goto L_8026C9B0;
    // 0x8026C95C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
L_8026C960:
    // 0x8026C960: addiu       $a1, $a1, -0x1436
    ctx->r5 = ADD32(ctx->r5, -0X1436);
    // 0x8026C964: jal         0x8004A34C
    // 0x8026C968: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A34C(rdram, ctx);
        goto after_1;
    // 0x8026C968: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8026C96C: b           L_8026C9B0
    // 0x8026C970: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
        goto L_8026C9B0;
    // 0x8026C970: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8026C974: lb          $t1, -0x326C($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X326C);
    // 0x8026C978: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8026C97C: bne         $t1, $zero, L_8026C9A0
    if (ctx->r9 != 0) {
        // 0x8026C980: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_8026C9A0;
    }
    // 0x8026C980: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026C984: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026C988: addiu       $a1, $a1, -0x1440
    ctx->r5 = ADD32(ctx->r5, -0X1440);
    // 0x8026C98C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8026C990: jal         0x8004A34C
    // 0x8026C994: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A34C(rdram, ctx);
        goto after_2;
    // 0x8026C994: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8026C998: b           L_8026C9B0
    // 0x8026C99C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
        goto L_8026C9B0;
    // 0x8026C99C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
L_8026C9A0:
    // 0x8026C9A0: addiu       $a1, $a1, -0x1440
    ctx->r5 = ADD32(ctx->r5, -0X1440);
    // 0x8026C9A4: jal         0x8004A298
    // 0x8026C9A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_3;
    // 0x8026C9A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8026C9AC: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
L_8026C9B0:
    // 0x8026C9B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026C9B4: lb          $v0, 0x38($t2)
    ctx->r2 = MEM_B(ctx->r10, 0X38);
    // 0x8026C9B8: nop

    // 0x8026C9BC: beq         $v0, $zero, L_8026CA40
    if (ctx->r2 == 0) {
        // 0x8026C9C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026CA40;
    }
    // 0x8026C9C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026C9C4: beq         $v0, $at, L_8026C9E8
    if (ctx->r2 == ctx->r1) {
        // 0x8026C9C8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8026C9E8;
    }
    // 0x8026C9C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026C9CC: beq         $v0, $at, L_8026CA14
    if (ctx->r2 == ctx->r1) {
        // 0x8026C9D0: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_8026CA14;
    }
    // 0x8026C9D0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026C9D4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026C9D8: beq         $v0, $at, L_8026CA2C
    if (ctx->r2 == ctx->r1) {
        // 0x8026C9DC: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_8026CA2C;
    }
    // 0x8026C9DC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026C9E0: b           L_8026CA40
    // 0x8026C9E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026CA40;
    // 0x8026C9E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026C9E8:
    // 0x8026C9E8: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8026C9EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026C9F0: lb          $t4, 0x39($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X39);
    // 0x8026C9F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026C9F8: bne         $t4, $at, L_8026CA3C
    if (ctx->r12 != ctx->r1) {
        // 0x8026C9FC: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_8026CA3C;
    }
    // 0x8026C9FC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026CA00: addiu       $a1, $a1, -0x1418
    ctx->r5 = ADD32(ctx->r5, -0X1418);
    // 0x8026CA04: jal         0x8004A298
    // 0x8026CA08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_4;
    // 0x8026CA08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8026CA0C: b           L_8026CA40
    // 0x8026CA10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026CA40;
    // 0x8026CA10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026CA14:
    // 0x8026CA14: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026CA18: addiu       $a1, $a1, -0x142C
    ctx->r5 = ADD32(ctx->r5, -0X142C);
    // 0x8026CA1C: jal         0x8004A298
    // 0x8026CA20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_5;
    // 0x8026CA20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8026CA24: b           L_8026CA40
    // 0x8026CA28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026CA40;
    // 0x8026CA28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026CA2C:
    // 0x8026CA2C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026CA30: addiu       $a1, $a1, -0x1422
    ctx->r5 = ADD32(ctx->r5, -0X1422);
    // 0x8026CA34: jal         0x8004A298
    // 0x8026CA38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_6;
    // 0x8026CA38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
L_8026CA3C:
    // 0x8026CA3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026CA40:
    // 0x8026CA40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026CA44: jr          $ra
    // 0x8026CA48: nop

    return;
    // 0x8026CA48: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026CA4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CA4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026CA50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026CA54: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8026CA58: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8026CA5C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x8026CA60: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x8026CA64: jal         0x8002F224
    // 0x8026CA68: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_8002F224(rdram, ctx);
        goto after_0;
    // 0x8026CA68: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x8026CA6C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8026CA70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8026CA74: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x8026CA78: nop

    // 0x8026CA7C: beq         $v0, $zero, L_8026CAF4
    if (ctx->r2 == 0) {
        // 0x8026CA80: nop
    
            goto L_8026CAF4;
    }
    // 0x8026CA80: nop

    // 0x8026CA84: beq         $v0, $a0, L_8026CAA8
    if (ctx->r2 == ctx->r4) {
        // 0x8026CA88: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8026CAA8;
    }
    // 0x8026CA88: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026CA8C: beq         $v0, $at, L_8026CACC
    if (ctx->r2 == ctx->r1) {
        // 0x8026CA90: addiu       $a0, $zero, 0x1F
        ctx->r4 = ADD32(0, 0X1F);
            goto L_8026CACC;
    }
    // 0x8026CA90: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x8026CA94: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026CA98: beq         $v0, $at, L_8026CAE4
    if (ctx->r2 == ctx->r1) {
        // 0x8026CA9C: addiu       $a0, $zero, 0x1F
        ctx->r4 = ADD32(0, 0X1F);
            goto L_8026CAE4;
    }
    // 0x8026CA9C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x8026CAA0: b           L_8026CAF4
    // 0x8026CAA4: nop

        goto L_8026CAF4;
    // 0x8026CAA4: nop

L_8026CAA8:
    // 0x8026CAA8: lb          $t6, 0x39($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X39);
    // 0x8026CAAC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026CAB0: bne         $a0, $t6, L_8026CAF4
    if (ctx->r4 != ctx->r14) {
        // 0x8026CAB4: addiu       $a1, $a1, -0x13EC
        ctx->r5 = ADD32(ctx->r5, -0X13EC);
            goto L_8026CAF4;
    }
    // 0x8026CAB4: addiu       $a1, $a1, -0x13EC
    ctx->r5 = ADD32(ctx->r5, -0X13EC);
    // 0x8026CAB8: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x8026CABC: jal         0x8002F444
    // 0x8026CAC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_1;
    // 0x8026CAC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8026CAC4: b           L_8026CAF4
    // 0x8026CAC8: nop

        goto L_8026CAF4;
    // 0x8026CAC8: nop

L_8026CACC:
    // 0x8026CACC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026CAD0: addiu       $a1, $a1, -0x140C
    ctx->r5 = ADD32(ctx->r5, -0X140C);
    // 0x8026CAD4: jal         0x8002F444
    // 0x8026CAD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_2;
    // 0x8026CAD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8026CADC: b           L_8026CAF4
    // 0x8026CAE0: nop

        goto L_8026CAF4;
    // 0x8026CAE0: nop

L_8026CAE4:
    // 0x8026CAE4: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026CAE8: addiu       $a1, $a1, -0x13FC
    ctx->r5 = ADD32(ctx->r5, -0X13FC);
    // 0x8026CAEC: jal         0x8002F444
    // 0x8026CAF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_3;
    // 0x8026CAF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_8026CAF4:
    // 0x8026CAF4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8026CAF8: jal         0x8026CF08
    // 0x8026CAFC: addiu       $a0, $a0, -0x34A8
    ctx->r4 = ADD32(ctx->r4, -0X34A8);
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_4;
    // 0x8026CAFC: addiu       $a0, $a0, -0x34A8
    ctx->r4 = ADD32(ctx->r4, -0X34A8);
    after_4:
    // 0x8026CB00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026CB04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026CB08: jr          $ra
    // 0x8026CB0C: nop

    return;
    // 0x8026CB0C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026CB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CB10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026CB14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026CB18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026CB1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026CB20: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x8026CB24: jal         0x8026CBA8
    // 0x8026CB28: nop

    ovl_8026A0F0_func_8026CBA8(rdram, ctx);
        goto after_0;
    // 0x8026CB28: nop

    after_0:
    // 0x8026CB2C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8026CB30: lb          $t7, -0x326C($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X326C);
    // 0x8026CB34: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8026CB38: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8026CB3C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8026CB40: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8026CB44: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8026CB48: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8026CB4C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026CB50: sb          $t6, -0x3066($at)
    MEM_B(-0X3066, ctx->r1) = ctx->r14;
    // 0x8026CB54: addiu       $a0, $a0, -0x3490
    ctx->r4 = ADD32(ctx->r4, -0X3490);
    // 0x8026CB58: jal         0x8002989C
    // 0x8026CB5C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x8026CB5C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_1:
    // 0x8026CB60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026CB64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026CB68: jr          $ra
    // 0x8026CB6C: nop

    return;
    // 0x8026CB6C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026CB48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CB48: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8026CB4C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026CB50: sb          $t6, -0x3066($at)
    MEM_B(-0X3066, ctx->r1) = ctx->r14;
    // 0x8026CB54: addiu       $a0, $a0, -0x3490
    ctx->r4 = ADD32(ctx->r4, -0X3490);
    // 0x8026CB58: jal         0x8002989C
    // 0x8026CB5C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x8026CB5C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_0:
    // 0x8026CB60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026CB64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026CB68: jr          $ra
    // 0x8026CB6C: nop

    return;
    // 0x8026CB6C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026CB70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CB70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026CB74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026CB78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026CB7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026CB80: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026CB84: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8026CB88: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026CB8C: addiu       $a0, $a0, -0x31A0
    ctx->r4 = ADD32(ctx->r4, -0X31A0);
    // 0x8026CB90: jal         0x800296E0
    // 0x8026CB94: sb          $t6, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r14;
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x8026CB94: sb          $t6, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r14;
    after_0:
    // 0x8026CB98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026CB9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026CBA0: jr          $ra
    // 0x8026CBA4: nop

    return;
    // 0x8026CBA4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026CBA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CBA8: lb          $t6, 0x3B($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X3B);
    // 0x8026CBAC: nop

    // 0x8026CBB0: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8026CBB4: lb          $v0, 0x54($t7)
    ctx->r2 = MEM_B(ctx->r15, 0X54);
    // 0x8026CBB8: nop

    // 0x8026CBBC: addu        $t8, $a0, $v0
    ctx->r24 = ADD32(ctx->r4, ctx->r2);
    // 0x8026CBC0: sb          $zero, 0x48($t8)
    MEM_B(0X48, ctx->r24) = 0;
    // 0x8026CBC4: lb          $t9, 0x3A($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X3A);
    // 0x8026CBC8: nop

    // 0x8026CBCC: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x8026CBD0: lb          $v0, 0x48($t0)
    ctx->r2 = MEM_B(ctx->r8, 0X48);
    // 0x8026CBD4: nop

    // 0x8026CBD8: addu        $t1, $a0, $v0
    ctx->r9 = ADD32(ctx->r4, ctx->r2);
    // 0x8026CBDC: sb          $zero, 0x54($t1)
    MEM_B(0X54, ctx->r9) = 0;
    // 0x8026CBE0: lb          $t3, 0x3A($a0)
    ctx->r11 = MEM_B(ctx->r4, 0X3A);
    // 0x8026CBE4: lb          $t2, 0x3B($a0)
    ctx->r10 = MEM_B(ctx->r4, 0X3B);
    // 0x8026CBE8: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x8026CBEC: sb          $t2, 0x48($t4)
    MEM_B(0X48, ctx->r12) = ctx->r10;
    // 0x8026CBF0: lb          $t6, 0x3B($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X3B);
    // 0x8026CBF4: lb          $t5, 0x3A($a0)
    ctx->r13 = MEM_B(ctx->r4, 0X3A);
    // 0x8026CBF8: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8026CBFC: jr          $ra
    // 0x8026CC00: sb          $t5, 0x54($t7)
    MEM_B(0X54, ctx->r15) = ctx->r13;
    return;
    // 0x8026CC00: sb          $t5, 0x54($t7)
    MEM_B(0X54, ctx->r15) = ctx->r13;
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026CC04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CC04: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8026CC08: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8026CC0C: lbu         $t6, 0x57($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X57);
    // 0x8026CC10: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8026CC14: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026CC18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026CC1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026CC20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026CC24: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026CC28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026CC2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026CC30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026CC34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026CC38: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x8026CC3C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8026CC40: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8026CC44: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    // 0x8026CC48: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8026CC4C: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x8026CC50: subu        $t9, $t9, $a2
    ctx->r25 = SUB32(ctx->r25, ctx->r6);
    // 0x8026CC54: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8026CC58: lbu         $a1, 0x5F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5F);
    // 0x8026CC5C: subu        $t9, $t9, $a2
    ctx->r25 = SUB32(ctx->r25, ctx->r6);
    // 0x8026CC60: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x8026CC64: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x8026CC68: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8026CC6C: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x8026CC70: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8026CC74: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8026CC78: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x8026CC7C: addu        $v1, $t4, $t6
    ctx->r3 = ADD32(ctx->r12, ctx->r14);
    // 0x8026CC80: lbu         $t0, 0x5B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X5B);
    // 0x8026CC84: lh          $t1, 0x418($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X418);
    // 0x8026CC88: lh          $t2, 0x41A($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X41A);
    // 0x8026CC8C: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8026CC90: addiu       $t8, $t8, -0x1510
    ctx->r24 = ADD32(ctx->r24, -0X1510);
    // 0x8026CC94: sll         $t7, $t0, 4
    ctx->r15 = S32(ctx->r8 << 4);
    // 0x8026CC98: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8026CC9C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8026CCA0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8026CCA4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8026CCA8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8026CCAC: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x8026CCB0: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x8026CCB4: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8026CCB8: swl         $at, 0x18($sp)
    do_swl(rdram, 0X18, ctx->r29, ctx->r1);
    // 0x8026CCBC: swr         $at, 0x1B($sp)
    do_swr(rdram, 0X1B, ctx->r29, ctx->r1);
    // 0x8026CCC0: lwl         $t4, 0x4($t9)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r25, 0X4);
    // 0x8026CCC4: lwr         $t4, 0x7($t9)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r25, 0X7);
    // 0x8026CCC8: addiu       $t6, $t6, -0x14F0
    ctx->r14 = ADD32(ctx->r14, -0X14F0);
    // 0x8026CCCC: swl         $t4, 0x1C($sp)
    do_swl(rdram, 0X1C, ctx->r29, ctx->r12);
    // 0x8026CCD0: swr         $t4, 0x1F($sp)
    do_swr(rdram, 0X1F, ctx->r29, ctx->r12);
    // 0x8026CCD4: lwl         $at, 0x8($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X8);
    // 0x8026CCD8: lwr         $at, 0xB($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0XB);
    // 0x8026CCDC: addu        $t5, $t7, $t6
    ctx->r13 = ADD32(ctx->r15, ctx->r14);
    // 0x8026CCE0: swl         $at, 0x20($sp)
    do_swl(rdram, 0X20, ctx->r29, ctx->r1);
    // 0x8026CCE4: swr         $at, 0x23($sp)
    do_swr(rdram, 0X23, ctx->r29, ctx->r1);
    // 0x8026CCE8: lwl         $t4, 0xC($t9)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r25, 0XC);
    // 0x8026CCEC: lwr         $t4, 0xF($t9)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r25, 0XF);
    // 0x8026CCF0: lb          $a3, 0x5B($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X5B);
    // 0x8026CCF4: swl         $t4, 0x24($sp)
    do_swl(rdram, 0X24, ctx->r29, ctx->r12);
    // 0x8026CCF8: swr         $t4, 0x27($sp)
    do_swr(rdram, 0X27, ctx->r29, ctx->r12);
    // 0x8026CCFC: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x8026CD00: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x8026CD04: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8026CD08: swl         $at, 0x28($sp)
    do_swl(rdram, 0X28, ctx->r29, ctx->r1);
    // 0x8026CD0C: swr         $at, 0x2B($sp)
    do_swr(rdram, 0X2B, ctx->r29, ctx->r1);
    // 0x8026CD10: lwl         $t8, 0x4($t5)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r13, 0X4);
    // 0x8026CD14: lwr         $t8, 0x7($t5)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r13, 0X7);
    // 0x8026CD18: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x8026CD1C: swl         $t8, 0x2C($sp)
    do_swl(rdram, 0X2C, ctx->r29, ctx->r24);
    // 0x8026CD20: swr         $t8, 0x2F($sp)
    do_swr(rdram, 0X2F, ctx->r29, ctx->r24);
    // 0x8026CD24: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x8026CD28: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x8026CD2C: nop

    // 0x8026CD30: swl         $at, 0x30($sp)
    do_swl(rdram, 0X30, ctx->r29, ctx->r1);
    // 0x8026CD34: swr         $at, 0x33($sp)
    do_swr(rdram, 0X33, ctx->r29, ctx->r1);
    // 0x8026CD38: lwl         $t8, 0xC($t5)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r13, 0XC);
    // 0x8026CD3C: lwr         $t8, 0xF($t5)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r13, 0XF);
    // 0x8026CD40: nop

    // 0x8026CD44: swl         $t8, 0x34($sp)
    do_swl(rdram, 0X34, ctx->r29, ctx->r24);
    // 0x8026CD48: jal         0x8006D974
    // 0x8026CD4C: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    func_8006D974(rdram, ctx);
        goto after_0;
    // 0x8026CD4C: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    after_0:
    // 0x8026CD50: addiu       $t3, $sp, 0x44
    ctx->r11 = ADD32(ctx->r29, 0X44);
    // 0x8026CD54: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x8026CD58: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x8026CD5C: nop

    // 0x8026CD60: swl         $at, 0x0($v0)
    do_swl(rdram, 0X0, ctx->r2, ctx->r1);
    // 0x8026CD64: swr         $at, 0x3($v0)
    do_swr(rdram, 0X3, ctx->r2, ctx->r1);
    // 0x8026CD68: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8026CD6C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8026CD70: jr          $ra
    // 0x8026CD74: nop

    return;
    // 0x8026CD74: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026CC18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CC18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026CC1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026CC20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026CC24: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026CC28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026CC2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026CC30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026CC34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026CC38: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x8026CC3C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8026CC40: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8026CC44: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    // 0x8026CC48: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8026CC4C: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x8026CC50: subu        $t9, $t9, $a2
    ctx->r25 = SUB32(ctx->r25, ctx->r6);
    // 0x8026CC54: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8026CC58: lbu         $a1, 0x5F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5F);
    // 0x8026CC5C: subu        $t9, $t9, $a2
    ctx->r25 = SUB32(ctx->r25, ctx->r6);
    // 0x8026CC60: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x8026CC64: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x8026CC68: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8026CC6C: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x8026CC70: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8026CC74: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8026CC78: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x8026CC7C: addu        $v1, $t4, $t6
    ctx->r3 = ADD32(ctx->r12, ctx->r14);
    // 0x8026CC80: lbu         $t0, 0x5B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X5B);
    // 0x8026CC84: lh          $t1, 0x418($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X418);
    // 0x8026CC88: lh          $t2, 0x41A($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X41A);
    // 0x8026CC8C: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8026CC90: addiu       $t8, $t8, -0x1510
    ctx->r24 = ADD32(ctx->r24, -0X1510);
    // 0x8026CC94: sll         $t7, $t0, 4
    ctx->r15 = S32(ctx->r8 << 4);
    // 0x8026CC98: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8026CC9C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8026CCA0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8026CCA4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8026CCA8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8026CCAC: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x8026CCB0: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x8026CCB4: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8026CCB8: swl         $at, 0x18($sp)
    do_swl(rdram, 0X18, ctx->r29, ctx->r1);
    // 0x8026CCBC: swr         $at, 0x1B($sp)
    do_swr(rdram, 0X1B, ctx->r29, ctx->r1);
    // 0x8026CCC0: lwl         $t4, 0x4($t9)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r25, 0X4);
    // 0x8026CCC4: lwr         $t4, 0x7($t9)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r25, 0X7);
    // 0x8026CCC8: addiu       $t6, $t6, -0x14F0
    ctx->r14 = ADD32(ctx->r14, -0X14F0);
    // 0x8026CCCC: swl         $t4, 0x1C($sp)
    do_swl(rdram, 0X1C, ctx->r29, ctx->r12);
    // 0x8026CCD0: swr         $t4, 0x1F($sp)
    do_swr(rdram, 0X1F, ctx->r29, ctx->r12);
    // 0x8026CCD4: lwl         $at, 0x8($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X8);
    // 0x8026CCD8: lwr         $at, 0xB($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0XB);
    // 0x8026CCDC: addu        $t5, $t7, $t6
    ctx->r13 = ADD32(ctx->r15, ctx->r14);
    // 0x8026CCE0: swl         $at, 0x20($sp)
    do_swl(rdram, 0X20, ctx->r29, ctx->r1);
    // 0x8026CCE4: swr         $at, 0x23($sp)
    do_swr(rdram, 0X23, ctx->r29, ctx->r1);
    // 0x8026CCE8: lwl         $t4, 0xC($t9)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r25, 0XC);
    // 0x8026CCEC: lwr         $t4, 0xF($t9)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r25, 0XF);
    // 0x8026CCF0: lb          $a3, 0x5B($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X5B);
    // 0x8026CCF4: swl         $t4, 0x24($sp)
    do_swl(rdram, 0X24, ctx->r29, ctx->r12);
    // 0x8026CCF8: swr         $t4, 0x27($sp)
    do_swr(rdram, 0X27, ctx->r29, ctx->r12);
    // 0x8026CCFC: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x8026CD00: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x8026CD04: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8026CD08: swl         $at, 0x28($sp)
    do_swl(rdram, 0X28, ctx->r29, ctx->r1);
    // 0x8026CD0C: swr         $at, 0x2B($sp)
    do_swr(rdram, 0X2B, ctx->r29, ctx->r1);
    // 0x8026CD10: lwl         $t8, 0x4($t5)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r13, 0X4);
    // 0x8026CD14: lwr         $t8, 0x7($t5)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r13, 0X7);
    // 0x8026CD18: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x8026CD1C: swl         $t8, 0x2C($sp)
    do_swl(rdram, 0X2C, ctx->r29, ctx->r24);
    // 0x8026CD20: swr         $t8, 0x2F($sp)
    do_swr(rdram, 0X2F, ctx->r29, ctx->r24);
    // 0x8026CD24: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x8026CD28: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x8026CD2C: nop

    // 0x8026CD30: swl         $at, 0x30($sp)
    do_swl(rdram, 0X30, ctx->r29, ctx->r1);
    // 0x8026CD34: swr         $at, 0x33($sp)
    do_swr(rdram, 0X33, ctx->r29, ctx->r1);
    // 0x8026CD38: lwl         $t8, 0xC($t5)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r13, 0XC);
    // 0x8026CD3C: lwr         $t8, 0xF($t5)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r13, 0XF);
    // 0x8026CD40: nop

    // 0x8026CD44: swl         $t8, 0x34($sp)
    do_swl(rdram, 0X34, ctx->r29, ctx->r24);
    // 0x8026CD48: jal         0x8006D974
    // 0x8026CD4C: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    func_8006D974(rdram, ctx);
        goto after_0;
    // 0x8026CD4C: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    after_0:
    // 0x8026CD50: addiu       $t3, $sp, 0x44
    ctx->r11 = ADD32(ctx->r29, 0X44);
    // 0x8026CD54: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x8026CD58: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x8026CD5C: nop

    // 0x8026CD60: swl         $at, 0x0($v0)
    do_swl(rdram, 0X0, ctx->r2, ctx->r1);
    // 0x8026CD64: swr         $at, 0x3($v0)
    do_swr(rdram, 0X3, ctx->r2, ctx->r1);
    // 0x8026CD68: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8026CD6C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8026CD70: jr          $ra
    // 0x8026CD74: nop

    return;
    // 0x8026CD74: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026CC54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CC54: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8026CC58: lbu         $a1, 0x5F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5F);
    // 0x8026CC5C: subu        $t9, $t9, $a2
    ctx->r25 = SUB32(ctx->r25, ctx->r6);
    // 0x8026CC60: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x8026CC64: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x8026CC68: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8026CC6C: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x8026CC70: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8026CC74: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8026CC78: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x8026CC7C: addu        $v1, $t4, $t6
    ctx->r3 = ADD32(ctx->r12, ctx->r14);
    // 0x8026CC80: lbu         $t0, 0x5B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X5B);
    // 0x8026CC84: lh          $t1, 0x418($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X418);
    // 0x8026CC88: lh          $t2, 0x41A($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X41A);
    // 0x8026CC8C: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8026CC90: addiu       $t8, $t8, -0x1510
    ctx->r24 = ADD32(ctx->r24, -0X1510);
    // 0x8026CC94: sll         $t7, $t0, 4
    ctx->r15 = S32(ctx->r8 << 4);
    // 0x8026CC98: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8026CC9C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8026CCA0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8026CCA4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8026CCA8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8026CCAC: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x8026CCB0: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x8026CCB4: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8026CCB8: swl         $at, 0x18($sp)
    do_swl(rdram, 0X18, ctx->r29, ctx->r1);
    // 0x8026CCBC: swr         $at, 0x1B($sp)
    do_swr(rdram, 0X1B, ctx->r29, ctx->r1);
    // 0x8026CCC0: lwl         $t4, 0x4($t9)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r25, 0X4);
    // 0x8026CCC4: lwr         $t4, 0x7($t9)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r25, 0X7);
    // 0x8026CCC8: addiu       $t6, $t6, -0x14F0
    ctx->r14 = ADD32(ctx->r14, -0X14F0);
    // 0x8026CCCC: swl         $t4, 0x1C($sp)
    do_swl(rdram, 0X1C, ctx->r29, ctx->r12);
    // 0x8026CCD0: swr         $t4, 0x1F($sp)
    do_swr(rdram, 0X1F, ctx->r29, ctx->r12);
    // 0x8026CCD4: lwl         $at, 0x8($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X8);
    // 0x8026CCD8: lwr         $at, 0xB($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0XB);
    // 0x8026CCDC: addu        $t5, $t7, $t6
    ctx->r13 = ADD32(ctx->r15, ctx->r14);
    // 0x8026CCE0: swl         $at, 0x20($sp)
    do_swl(rdram, 0X20, ctx->r29, ctx->r1);
    // 0x8026CCE4: swr         $at, 0x23($sp)
    do_swr(rdram, 0X23, ctx->r29, ctx->r1);
    // 0x8026CCE8: lwl         $t4, 0xC($t9)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r25, 0XC);
    // 0x8026CCEC: lwr         $t4, 0xF($t9)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r25, 0XF);
    // 0x8026CCF0: lb          $a3, 0x5B($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X5B);
    // 0x8026CCF4: swl         $t4, 0x24($sp)
    do_swl(rdram, 0X24, ctx->r29, ctx->r12);
    // 0x8026CCF8: swr         $t4, 0x27($sp)
    do_swr(rdram, 0X27, ctx->r29, ctx->r12);
    // 0x8026CCFC: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x8026CD00: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x8026CD04: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8026CD08: swl         $at, 0x28($sp)
    do_swl(rdram, 0X28, ctx->r29, ctx->r1);
    // 0x8026CD0C: swr         $at, 0x2B($sp)
    do_swr(rdram, 0X2B, ctx->r29, ctx->r1);
    // 0x8026CD10: lwl         $t8, 0x4($t5)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r13, 0X4);
    // 0x8026CD14: lwr         $t8, 0x7($t5)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r13, 0X7);
    // 0x8026CD18: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x8026CD1C: swl         $t8, 0x2C($sp)
    do_swl(rdram, 0X2C, ctx->r29, ctx->r24);
    // 0x8026CD20: swr         $t8, 0x2F($sp)
    do_swr(rdram, 0X2F, ctx->r29, ctx->r24);
    // 0x8026CD24: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x8026CD28: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x8026CD2C: nop

    // 0x8026CD30: swl         $at, 0x30($sp)
    do_swl(rdram, 0X30, ctx->r29, ctx->r1);
    // 0x8026CD34: swr         $at, 0x33($sp)
    do_swr(rdram, 0X33, ctx->r29, ctx->r1);
    // 0x8026CD38: lwl         $t8, 0xC($t5)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r13, 0XC);
    // 0x8026CD3C: lwr         $t8, 0xF($t5)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r13, 0XF);
    // 0x8026CD40: nop

    // 0x8026CD44: swl         $t8, 0x34($sp)
    do_swl(rdram, 0X34, ctx->r29, ctx->r24);
    // 0x8026CD48: jal         0x8006D974
    // 0x8026CD4C: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    func_8006D974(rdram, ctx);
        goto after_0;
    // 0x8026CD4C: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    after_0:
    // 0x8026CD50: addiu       $t3, $sp, 0x44
    ctx->r11 = ADD32(ctx->r29, 0X44);
    // 0x8026CD54: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x8026CD58: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x8026CD5C: nop

    // 0x8026CD60: swl         $at, 0x0($v0)
    do_swl(rdram, 0X0, ctx->r2, ctx->r1);
    // 0x8026CD64: swr         $at, 0x3($v0)
    do_swr(rdram, 0X3, ctx->r2, ctx->r1);
    // 0x8026CD68: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8026CD6C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8026CD70: jr          $ra
    // 0x8026CD74: nop

    return;
    // 0x8026CD74: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026CD40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CD40: nop

    // 0x8026CD44: swl         $t8, 0x34($sp)
    do_swl(rdram, 0X34, ctx->r29, ctx->r24);
    // 0x8026CD48: jal         0x8006D974
    // 0x8026CD4C: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    func_8006D974(rdram, ctx);
        goto after_0;
    // 0x8026CD4C: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    after_0:
    // 0x8026CD50: addiu       $t3, $sp, 0x44
    ctx->r11 = ADD32(ctx->r29, 0X44);
    // 0x8026CD54: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x8026CD58: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x8026CD5C: nop

    // 0x8026CD60: swl         $at, 0x0($v0)
    do_swl(rdram, 0X0, ctx->r2, ctx->r1);
    // 0x8026CD64: swr         $at, 0x3($v0)
    do_swr(rdram, 0X3, ctx->r2, ctx->r1);
    // 0x8026CD68: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8026CD6C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8026CD70: jr          $ra
    // 0x8026CD74: nop

    return;
    // 0x8026CD74: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026CD78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CD78: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8026CD7C: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x8026CD80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026CD84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026CD88: lb          $t7, 0x44($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X44);
    // 0x8026CD8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026CD90: bne         $t7, $at, L_8026CDAC
    if (ctx->r15 != ctx->r1) {
        // 0x8026CD94: lui         $a0, 0x8027
        ctx->r4 = S32(0X8027 << 16);
            goto L_8026CDAC;
    }
    // 0x8026CD94: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026CD98: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026CD9C: jal         0x80029220
    // 0x8026CDA0: addiu       $a0, $a0, -0x31A0
    ctx->r4 = ADD32(ctx->r4, -0X31A0);
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x8026CDA0: addiu       $a0, $a0, -0x31A0
    ctx->r4 = ADD32(ctx->r4, -0X31A0);
    after_0:
    // 0x8026CDA4: b           L_8026CDB8
    // 0x8026CDA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026CDB8;
    // 0x8026CDA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026CDAC:
    // 0x8026CDAC: jal         0x80029220
    // 0x8026CDB0: addiu       $a0, $a0, -0x323C
    ctx->r4 = ADD32(ctx->r4, -0X323C);
    func_80029220(rdram, ctx);
        goto after_1;
    // 0x8026CDB0: addiu       $a0, $a0, -0x323C
    ctx->r4 = ADD32(ctx->r4, -0X323C);
    after_1:
    // 0x8026CDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026CDB8:
    // 0x8026CDB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026CDBC: jr          $ra
    // 0x8026CDC0: nop

    return;
    // 0x8026CDC0: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026CDC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CDC4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026CDC8: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x8026CDCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026CDD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026CDD4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8026CDD8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026CDDC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026CDE0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8026CDE4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8026CDE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026CDEC: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8026CDF0: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8026CDF4: lui         $a2, 0x8010
    ctx->r6 = S32(0X8010 << 16);
    // 0x8026CDF8: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8026CDFC: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x8026CE00: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8026CE04: addiu       $a2, $a2, 0x4890
    ctx->r6 = ADD32(ctx->r6, 0X4890);
    // 0x8026CE08: sb          $t0, 0x70A($a1)
    MEM_B(0X70A, ctx->r5) = ctx->r8;
    // 0x8026CE0C: lh          $v0, 0xEDC($a2)
    ctx->r2 = MEM_H(ctx->r6, 0XEDC);
    // 0x8026CE10: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x8026CE14: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8026CE18: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x8026CE1C: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8026CE20: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8026CE24: bne         $at, $zero, L_8026CE4C
    if (ctx->r1 != 0) {
        // 0x8026CE28: nop
    
            goto L_8026CE4C;
    }
    // 0x8026CE28: nop

    // 0x8026CE2C: sb          $zero, 0x70A($a1)
    MEM_B(0X70A, ctx->r5) = 0;
    // 0x8026CE30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8026CE34: sh          $t3, 0xEDC($a2)
    MEM_H(0XEDC, ctx->r6) = ctx->r11;
    // 0x8026CE38: sb          $v0, 0x44($v1)
    MEM_B(0X44, ctx->r3) = ctx->r2;
    // 0x8026CE3C: jal         0x800294F8
    // 0x8026CE40: sb          $v0, 0x45($v1)
    MEM_B(0X45, ctx->r3) = ctx->r2;
    func_800294F8(rdram, ctx);
        goto after_0;
    // 0x8026CE40: sb          $v0, 0x45($v1)
    MEM_B(0X45, ctx->r3) = ctx->r2;
    after_0:
    // 0x8026CE44: b           L_8026CE54
    // 0x8026CE48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026CE54;
    // 0x8026CE48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026CE4C:
    // 0x8026CE4C: sh          $v0, 0xEDC($a2)
    MEM_H(0XEDC, ctx->r6) = ctx->r2;
    // 0x8026CE50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026CE54:
    // 0x8026CE54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026CE58: jr          $ra
    // 0x8026CE5C: nop

    return;
    // 0x8026CE5C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026CE60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CE60: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026CE64: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x8026CE68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026CE6C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026CE70: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8026CE74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026CE78: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026CE7C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8026CE80: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8026CE84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026CE88: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8026CE8C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8026CE90: lui         $a2, 0x8010
    ctx->r6 = S32(0X8010 << 16);
    // 0x8026CE94: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8026CE98: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x8026CE9C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8026CEA0: addiu       $a2, $a2, 0x4890
    ctx->r6 = ADD32(ctx->r6, 0X4890);
    // 0x8026CEA4: sb          $t0, 0x70A($a1)
    MEM_B(0X70A, ctx->r5) = ctx->r8;
    // 0x8026CEA8: lh          $v0, 0xEDC($a2)
    ctx->r2 = MEM_H(ctx->r6, 0XEDC);
    // 0x8026CEAC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8026CEB0: addiu       $v0, $v0, -0x18
    ctx->r2 = ADD32(ctx->r2, -0X18);
    // 0x8026CEB4: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x8026CEB8: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8026CEBC: bgtz        $v0, L_8026CEE0
    if (SIGNED(ctx->r2) > 0) {
        // 0x8026CEC0: nop
    
            goto L_8026CEE0;
    }
    // 0x8026CEC0: nop

    // 0x8026CEC4: sb          $zero, 0x70A($a1)
    MEM_B(0X70A, ctx->r5) = 0;
    // 0x8026CEC8: sh          $zero, 0xEDC($a2)
    MEM_H(0XEDC, ctx->r6) = 0;
    // 0x8026CECC: sb          $zero, 0x44($v1)
    MEM_B(0X44, ctx->r3) = 0;
    // 0x8026CED0: jal         0x800294F8
    // 0x8026CED4: sb          $t3, 0x45($v1)
    MEM_B(0X45, ctx->r3) = ctx->r11;
    func_800294F8(rdram, ctx);
        goto after_0;
    // 0x8026CED4: sb          $t3, 0x45($v1)
    MEM_B(0X45, ctx->r3) = ctx->r11;
    after_0:
    // 0x8026CED8: b           L_8026CEE8
    // 0x8026CEDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026CEE8;
    // 0x8026CEDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026CEE0:
    // 0x8026CEE0: sh          $v0, 0xEDC($a2)
    MEM_H(0XEDC, ctx->r6) = ctx->r2;
    // 0x8026CEE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026CEE8:
    // 0x8026CEE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026CEEC: jr          $ra
    // 0x8026CEF0: nop

    return;
    // 0x8026CEF0: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026CEF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CEF4: lhu         $t6, 0x16($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X16);
    // 0x8026CEF8: nop

    // 0x8026CEFC: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x8026CF00: jr          $ra
    // 0x8026CF04: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
    return;
    // 0x8026CF04: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026CF08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CF08: lhu         $t6, 0x8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8);
    // 0x8026CF0C: nop

    // 0x8026CF10: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x8026CF14: jr          $ra
    // 0x8026CF18: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
    return;
    // 0x8026CF18: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026CF1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CF1C: jr          $ra
    // 0x8026CF20: nop

    return;
    // 0x8026CF20: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026CF24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026CF24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8026CF28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026CF2C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8026CF30: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8026CF34: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8026CF38: lhu         $s1, 0x70($a0)
    ctx->r17 = MEM_HU(ctx->r4, 0X70);
    // 0x8026CF3C: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x8026CF40: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8026CF44: lb          $t7, 0x45($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X45);
    // 0x8026CF48: nop

    // 0x8026CF4C: beq         $t7, $zero, L_8026D040
    if (ctx->r15 == 0) {
        // 0x8026CF50: addiu       $t5, $zero, 0xA
        ctx->r13 = ADD32(0, 0XA);
            goto L_8026D040;
    }
    // 0x8026CF50: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8026CF54: lb          $t8, 0x44($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X44);
    // 0x8026CF58: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8026CF5C: bne         $v1, $t8, L_8026CFD4
    if (ctx->r3 != ctx->r24) {
        // 0x8026CF60: nop
    
            goto L_8026CFD4;
    }
    // 0x8026CF60: nop

    // 0x8026CF64: lb          $t9, 0x42($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X42);
    // 0x8026CF68: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026CF6C: bne         $v1, $t9, L_8026CFA0
    if (ctx->r3 != ctx->r25) {
        // 0x8026CF70: andi        $a2, $s1, 0xFF
        ctx->r6 = ctx->r17 & 0XFF;
            goto L_8026CFA0;
    }
    // 0x8026CF70: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    // 0x8026CF74: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8026CF78: addiu       $a1, $a1, -0x1060
    ctx->r5 = ADD32(ctx->r5, -0X1060);
    // 0x8026CF7C: jal         0x8002B9DC
    // 0x8026CF80: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8002B9DC(rdram, ctx);
        goto after_0;
    // 0x8026CF80: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_0:
    // 0x8026CF84: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8026CF88: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8026CF8C: lbu         $a0, 0x43($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X43);
    // 0x8026CF90: jal         0x8006DAD8
    // 0x8026CF94: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    func_8006DAD8(rdram, ctx);
        goto after_1;
    // 0x8026CF94: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_1:
    // 0x8026CF98: b           L_8026CFAC
    // 0x8026CF9C: nop

        goto L_8026CFAC;
    // 0x8026CF9C: nop

L_8026CFA0:
    // 0x8026CFA0: lbu         $a0, 0x43($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X43);
    // 0x8026CFA4: jal         0x8006DB98
    // 0x8026CFA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8006DB98(rdram, ctx);
        goto after_2;
    // 0x8026CFA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
L_8026CFAC:
    // 0x8026CFAC: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x8026CFB0: addiu       $t1, $t1, -0x1540
    ctx->r9 = ADD32(ctx->r9, -0X1540);
    // 0x8026CFB4: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x8026CFB8: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x8026CFBC: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8026CFC0: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8026CFC4: jal         0x8002AB30
    // 0x8026CFC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002AB30(rdram, ctx);
        goto after_3;
    // 0x8026CFC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8026CFCC: b           L_8026D040
    // 0x8026CFD0: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
        goto L_8026D040;
    // 0x8026CFD0: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
L_8026CFD4:
    // 0x8026CFD4: lb          $t2, 0x42($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X42);
    // 0x8026CFD8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026CFDC: bne         $v1, $t2, L_8026D010
    if (ctx->r3 != ctx->r10) {
        // 0x8026CFE0: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_8026D010;
    }
    // 0x8026CFE0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8026CFE4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8026CFE8: addiu       $a1, $a1, -0x1060
    ctx->r5 = ADD32(ctx->r5, -0X1060);
    // 0x8026CFEC: jal         0x8002B9DC
    // 0x8026CFF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002B9DC(rdram, ctx);
        goto after_4;
    // 0x8026CFF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8026CFF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026CFF8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8026CFFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8026D000: jal         0x8006DAD8
    // 0x8026D004: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    func_8006DAD8(rdram, ctx);
        goto after_5;
    // 0x8026D004: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_5:
    // 0x8026D008: b           L_8026D01C
    // 0x8026D00C: nop

        goto L_8026D01C;
    // 0x8026D00C: nop

L_8026D010:
    // 0x8026D010: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8026D014: jal         0x8006DB98
    // 0x8026D018: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    func_8006DB98(rdram, ctx);
        goto after_6;
    // 0x8026D018: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_6:
L_8026D01C:
    // 0x8026D01C: lui         $t4, 0x8027
    ctx->r12 = S32(0X8027 << 16);
    // 0x8026D020: addiu       $t4, $t4, -0x1570
    ctx->r12 = ADD32(ctx->r12, -0X1570);
    // 0x8026D024: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x8026D028: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x8026D02C: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8026D030: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8026D034: jal         0x8002AB30
    // 0x8026D038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002AB30(rdram, ctx);
        goto after_7;
    // 0x8026D038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8026D03C: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
L_8026D040:
    // 0x8026D040: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x8026D044: sb          $t5, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r13;
    // 0x8026D048: jal         0x8002BEC4
    // 0x8026D04C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002BEC4(rdram, ctx);
        goto after_8;
    // 0x8026D04C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8026D050: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x8026D054: jal         0x8002BFF4
    // 0x8026D058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002BFF4(rdram, ctx);
        goto after_9;
    // 0x8026D058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8026D05C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D060: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8026D064: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8026D068: jr          $ra
    // 0x8026D06C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8026D06C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D070: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8026D074: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026D078: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x8026D07C: lui         $t9, 0x803D
    ctx->r25 = S32(0X803D << 16);
    // 0x8026D080: lb          $t7, 0x44($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X44);
    // 0x8026D084: lui         $t8, 0x803D
    ctx->r24 = S32(0X803D << 16);
    // 0x8026D088: bne         $t7, $at, L_8026D09C
    if (ctx->r15 != ctx->r1) {
        // 0x8026D08C: addiu       $t9, $t9, -0x56D8
        ctx->r25 = ADD32(ctx->r25, -0X56D8);
            goto L_8026D09C;
    }
    // 0x8026D08C: addiu       $t9, $t9, -0x56D8
    ctx->r25 = ADD32(ctx->r25, -0X56D8);
    // 0x8026D090: addiu       $t8, $t8, -0x560C
    ctx->r24 = ADD32(ctx->r24, -0X560C);
    // 0x8026D094: jr          $ra
    // 0x8026D098: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    return;
    // 0x8026D098: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
L_8026D09C:
    // 0x8026D09C: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    // 0x8026D0A0: jr          $ra
    // 0x8026D0A4: nop

    return;
    // 0x8026D0A4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D0A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026D0AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D0B0: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8026D0B4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8026D0B8: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x8026D0BC: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8026D0C0: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x8026D0C4: nop

    // 0x8026D0C8: bne         $t7, $zero, L_8026D0EC
    if (ctx->r15 != 0) {
        // 0x8026D0CC: nop
    
            goto L_8026D0EC;
    }
    // 0x8026D0CC: nop

    // 0x8026D0D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026D0D4: jal         0x8006F678
    // 0x8026D0D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8006F678(rdram, ctx);
        goto after_0;
    // 0x8026D0D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8026D0DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026D0E0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D0E4: b           L_8026D0F8
    // 0x8026D0E8: lhu         $t9, 0x3A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3A);
        goto L_8026D0F8;
    // 0x8026D0E8: lhu         $t9, 0x3A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3A);
L_8026D0EC:
    // 0x8026D0EC: sh          $t8, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r24;
    // 0x8026D0F0: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    // 0x8026D0F4: lhu         $t9, 0x3A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3A);
L_8026D0F8:
    // 0x8026D0F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026D0FC: bne         $t9, $at, L_8026D11C
    if (ctx->r25 != ctx->r1) {
        // 0x8026D100: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8026D11C;
    }
    // 0x8026D100: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8026D104: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8026D108: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8026D10C: jal         0x8002135C
    // 0x8026D110: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8026D110: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    after_1:
    // 0x8026D114: b           L_8026D12C
    // 0x8026D118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026D12C;
    // 0x8026D118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026D11C:
    // 0x8026D11C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8026D120: jal         0x8002135C
    // 0x8026D124: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8026D124: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    after_2:
    // 0x8026D128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026D12C:
    // 0x8026D12C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026D130: jr          $ra
    // 0x8026D134: nop

    return;
    // 0x8026D134: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D138: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026D13C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D140: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8026D144: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026D148: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x8026D14C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8026D150: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x8026D154: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8026D158: bne         $t7, $at, L_8026D17C
    if (ctx->r15 != ctx->r1) {
        // 0x8026D15C: nop
    
            goto L_8026D17C;
    }
    // 0x8026D15C: nop

    // 0x8026D160: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026D164: jal         0x8006F678
    // 0x8026D168: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8006F678(rdram, ctx);
        goto after_0;
    // 0x8026D168: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8026D16C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026D170: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D174: b           L_8026D188
    // 0x8026D178: lhu         $t9, 0x3A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3A);
        goto L_8026D188;
    // 0x8026D178: lhu         $t9, 0x3A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3A);
L_8026D17C:
    // 0x8026D17C: sh          $t8, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r24;
    // 0x8026D180: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    // 0x8026D184: lhu         $t9, 0x3A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3A);
L_8026D188:
    // 0x8026D188: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026D18C: bne         $t9, $at, L_8026D1AC
    if (ctx->r25 != ctx->r1) {
        // 0x8026D190: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8026D1AC;
    }
    // 0x8026D190: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8026D194: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8026D198: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8026D19C: jal         0x8002135C
    // 0x8026D1A0: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8026D1A0: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    after_1:
    // 0x8026D1A4: b           L_8026D1BC
    // 0x8026D1A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026D1BC;
    // 0x8026D1A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026D1AC:
    // 0x8026D1AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8026D1B0: jal         0x8002135C
    // 0x8026D1B4: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8026D1B4: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    after_2:
    // 0x8026D1B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026D1BC:
    // 0x8026D1BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026D1C0: jr          $ra
    // 0x8026D1C4: nop

    return;
    // 0x8026D1C4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D1C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D1C8: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8026D1CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026D1D0: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x8026D1D4: lui         $t9, 0x803D
    ctx->r25 = S32(0X803D << 16);
    // 0x8026D1D8: lb          $t7, 0x44($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X44);
    // 0x8026D1DC: lui         $t8, 0x803D
    ctx->r24 = S32(0X803D << 16);
    // 0x8026D1E0: bne         $t7, $at, L_8026D1F4
    if (ctx->r15 != ctx->r1) {
        // 0x8026D1E4: addiu       $t9, $t9, -0x5708
        ctx->r25 = ADD32(ctx->r25, -0X5708);
            goto L_8026D1F4;
    }
    // 0x8026D1E4: addiu       $t9, $t9, -0x5708
    ctx->r25 = ADD32(ctx->r25, -0X5708);
    // 0x8026D1E8: addiu       $t8, $t8, -0x5624
    ctx->r24 = ADD32(ctx->r24, -0X5624);
    // 0x8026D1EC: jr          $ra
    // 0x8026D1F0: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    return;
    // 0x8026D1F0: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
L_8026D1F4:
    // 0x8026D1F4: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    // 0x8026D1F8: jr          $ra
    // 0x8026D1FC: nop

    return;
    // 0x8026D1FC: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D200: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8026D204: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026D208: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x8026D20C: lui         $t8, 0x803D
    ctx->r24 = S32(0X803D << 16);
    // 0x8026D210: lb          $t7, 0x44($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X44);
    // 0x8026D214: addiu       $t8, $t8, -0x5528
    ctx->r24 = ADD32(ctx->r24, -0X5528);
    // 0x8026D218: bne         $t7, $at, L_8026D228
    if (ctx->r15 != ctx->r1) {
        // 0x8026D21C: nop
    
            goto L_8026D228;
    }
    // 0x8026D21C: nop

    // 0x8026D220: jr          $ra
    // 0x8026D224: sw          $zero, 0x30($a1)
    MEM_W(0X30, ctx->r5) = 0;
    return;
    // 0x8026D224: sw          $zero, 0x30($a1)
    MEM_W(0X30, ctx->r5) = 0;
L_8026D228:
    // 0x8026D228: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x8026D22C: jr          $ra
    // 0x8026D230: nop

    return;
    // 0x8026D230: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D234: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8026D238: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026D23C: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x8026D240: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8026D244: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x8026D248: nop

    // 0x8026D24C: bne         $t7, $at, L_8026D25C
    if (ctx->r15 != ctx->r1) {
        // 0x8026D250: nop
    
            goto L_8026D25C;
    }
    // 0x8026D250: nop

    // 0x8026D254: jr          $ra
    // 0x8026D258: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
    return;
    // 0x8026D258: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
L_8026D25C:
    // 0x8026D25C: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x8026D260: jr          $ra
    // 0x8026D264: nop

    return;
    // 0x8026D264: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D268: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026D26C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D270: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026D274: lhu         $v1, 0x1E($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X1E);
    // 0x8026D278: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x8026D27C: addiu       $t7, $t7, -0x1570
    ctx->r15 = ADD32(ctx->r15, -0X1570);
    // 0x8026D280: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8026D284: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8026D288: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8026D28C: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8026D290: jal         0x8002AB30
    // 0x8026D294: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
    func_8002AB30(rdram, ctx);
        goto after_0;
    // 0x8026D294: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
    after_0:
    // 0x8026D298: lhu         $v1, 0x1E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1E);
    // 0x8026D29C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026D2A0: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8026D2A4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8026D2A8: jal         0x8006DB98
    // 0x8026D2AC: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
    func_8006DB98(rdram, ctx);
        goto after_1;
    // 0x8026D2AC: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
    after_1:
    // 0x8026D2B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D2B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026D2B8: jr          $ra
    // 0x8026D2BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026D2BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D2C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026D2C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D2C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026D2CC: lhu         $t6, 0x1E($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1E);
    // 0x8026D2D0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8026D2D4: addiu       $a1, $a1, -0x1060
    ctx->r5 = ADD32(ctx->r5, -0X1060);
    // 0x8026D2D8: jal         0x8002B9DC
    // 0x8026D2DC: sb          $t6, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r14;
    func_8002B9DC(rdram, ctx);
        goto after_0;
    // 0x8026D2DC: sb          $t6, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r14;
    after_0:
    // 0x8026D2E0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8026D2E4: lb          $t7, -0x326C($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X326C);
    // 0x8026D2E8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8026D2EC: subu        $a1, $t8, $t7
    ctx->r5 = SUB32(ctx->r24, ctx->r15);
    // 0x8026D2F0: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x8026D2F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026D2F8: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    // 0x8026D2FC: jal         0x8006D838
    // 0x8026D300: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8006D838(rdram, ctx);
        goto after_1;
    // 0x8026D300: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_1:
    // 0x8026D304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D308: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026D30C: jr          $ra
    // 0x8026D310: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026D310: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D314: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8026D318: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D31C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8026D320: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x8026D324: lbu         $a2, 0x1F($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X1F);
    // 0x8026D328: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8026D32C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8026D330: lw          $v0, 0x8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8);
    // 0x8026D334: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x8026D338: lb          $t8, 0x2E($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X2E);
    // 0x8026D33C: nop

    // 0x8026D340: subu        $a1, $t9, $t8
    ctx->r5 = SUB32(ctx->r25, ctx->r24);
    // 0x8026D344: andi        $t0, $a1, 0xFF
    ctx->r8 = ctx->r5 & 0XFF;
    // 0x8026D348: jal         0x803F7ABC
    // 0x8026D34C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    LOOKUP_FUNC(0x803F7ABC)(rdram, ctx);
        goto after_0;
    // 0x8026D34C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_0:
    // 0x8026D350: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x8026D354: lh          $t1, 0x1C($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1C);
    // 0x8026D358: lw          $t2, 0x38($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X38);
    // 0x8026D35C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026D360: sh          $t1, 0x14($t2)
    MEM_H(0X14, ctx->r10) = ctx->r9;
    // 0x8026D364: lh          $t3, 0x1E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1E);
    // 0x8026D368: lw          $t4, 0x38($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X38);
    // 0x8026D36C: nop

    // 0x8026D370: sh          $t3, 0x18($t4)
    MEM_H(0X18, ctx->r12) = ctx->r11;
    // 0x8026D374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D378: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8026D37C: jr          $ra
    // 0x8026D380: nop

    return;
    // 0x8026D380: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D384: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026D388: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8026D38C: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x8026D390: lh          $t7, 0x576C($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X576C);
    // 0x8026D394: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8026D398: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026D39C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026D3A0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8026D3A4: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x8026D3A8: sll         $a1, $t8, 16
    ctx->r5 = S32(ctx->r24 << 16);
    // 0x8026D3AC: lh          $a3, 0x1A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X1A);
    // 0x8026D3B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D3B4: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8026D3B8: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x8026D3BC: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x8026D3C0: sh          $t8, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r24;
    // 0x8026D3C4: jal         0x80039F1C
    // 0x8026D3C8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_80039F1C(rdram, ctx);
        goto after_0;
    // 0x8026D3C8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_0:
    // 0x8026D3CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D3D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026D3D4: jr          $ra
    // 0x8026D3D8: nop

    return;
    // 0x8026D3D8: nop

    // 0x8026D3DC: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D3E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026D3E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D3E8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8026D3EC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8026D3F0: jal         0x80036234
    // 0x8026D3F4: sb          $t6, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = ctx->r14;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x8026D3F4: sb          $t6, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = ctx->r14;
    after_0:
    // 0x8026D3F8: jal         0x80020A4C
    // 0x8026D3FC: nop

    func_80020A4C(rdram, ctx);
        goto after_1;
    // 0x8026D3FC: nop

    after_1:
    // 0x8026D400: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8026D404: jal         0x80020318
    // 0x8026D408: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    func_80020318(rdram, ctx);
        goto after_2;
    // 0x8026D408: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    after_2:
    // 0x8026D40C: jal         0x800202D8
    // 0x8026D410: nop

    func_800202D8(rdram, ctx);
        goto after_3;
    // 0x8026D410: nop

    after_3:
    // 0x8026D414: jal         0x80029A54
    // 0x8026D418: nop

    func_80029A54(rdram, ctx);
        goto after_4;
    // 0x8026D418: nop

    after_4:
    // 0x8026D41C: jal         0x8002F1F0
    // 0x8026D420: nop

    func_8002F1F0(rdram, ctx);
        goto after_5;
    // 0x8026D420: nop

    after_5:
    // 0x8026D424: jal         0x8002F2AC
    // 0x8026D428: nop

    func_8002F2AC(rdram, ctx);
        goto after_6;
    // 0x8026D428: nop

    after_6:
    // 0x8026D42C: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8026D430: jal         0x8007AAE0
    // 0x8026D434: addiu       $a0, $a0, -0x3314
    ctx->r4 = ADD32(ctx->r4, -0X3314);
    func_8007AAE0(rdram, ctx);
        goto after_7;
    // 0x8026D434: addiu       $a0, $a0, -0x3314
    ctx->r4 = ADD32(ctx->r4, -0X3314);
    after_7:
    // 0x8026D438: jal         0x80073F40
    // 0x8026D43C: nop

    func_80073F40(rdram, ctx);
        goto after_8;
    // 0x8026D43C: nop

    after_8:
    // 0x8026D440: jal         0x800356EC
    // 0x8026D444: nop

    func_800356EC(rdram, ctx);
        goto after_9;
    // 0x8026D444: nop

    after_9:
    // 0x8026D448: jal         0x80021004
    // 0x8026D44C: nop

    func_80021004(rdram, ctx);
        goto after_10;
    // 0x8026D44C: nop

    after_10:
    // 0x8026D450: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x8026D454: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8026D458: jal         0x80049E40
    // 0x8026D45C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_11;
    // 0x8026D45C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_11:
    // 0x8026D460: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8026D464: jal         0x80020318
    // 0x8026D468: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80020318(rdram, ctx);
        goto after_12;
    // 0x8026D468: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_12:
    // 0x8026D46C: jal         0x8026D484
    // 0x8026D470: nop

    ovl_8026A0F0_func_8026D484(rdram, ctx);
        goto after_13;
    // 0x8026D470: nop

    after_13:
    // 0x8026D474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D478: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026D47C: jr          $ra
    // 0x8026D480: nop

    return;
    // 0x8026D480: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D484: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026D488: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8026D48C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026D490: bne         $t6, $zero, L_8026D4A4
    if (ctx->r14 != 0) {
        // 0x8026D494: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8026D4A4;
    }
    // 0x8026D494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D498: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8026D49C: b           L_8026D4B0
    // 0x8026D4A0: sb          $zero, -0xBC0($at)
    MEM_B(-0XBC0, ctx->r1) = 0;
        goto L_8026D4B0;
    // 0x8026D4A0: sb          $zero, -0xBC0($at)
    MEM_B(-0XBC0, ctx->r1) = 0;
L_8026D4A4:
    // 0x8026D4A4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8026D4A8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8026D4AC: sb          $t7, -0xBC0($at)
    MEM_B(-0XBC0, ctx->r1) = ctx->r15;
L_8026D4B0:
    // 0x8026D4B0: jal         0x80049A90
    // 0x8026D4B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80049A90(rdram, ctx);
        goto after_0;
    // 0x8026D4B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8026D4B8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8026D4BC: jal         0x80280E2C
    // 0x8026D4C0: sb          $v0, -0xBBF($at)
    MEM_B(-0XBBF, ctx->r1) = ctx->r2;
    LOOKUP_FUNC(0x80280E2C)(rdram, ctx);
        goto after_1;
    // 0x8026D4C0: sb          $v0, -0xBBF($at)
    MEM_B(-0XBBF, ctx->r1) = ctx->r2;
    after_1:
    // 0x8026D4C4: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026D4C8: addiu       $a1, $a1, -0xBC0
    ctx->r5 = ADD32(ctx->r5, -0XBC0);
    // 0x8026D4CC: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8026D4D0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026D4D4: addiu       $a0, $a0, -0xBBE
    ctx->r4 = ADD32(ctx->r4, -0XBBE);
    // 0x8026D4D8: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026D4DC: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x8026D4E0: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
    // 0x8026D4E4: beq         $v1, $zero, L_8026D4FC
    if (ctx->r3 == 0) {
        // 0x8026D4E8: addiu       $a2, $a2, -0xBBF
        ctx->r6 = ADD32(ctx->r6, -0XBBF);
            goto L_8026D4FC;
    }
    // 0x8026D4E8: addiu       $a2, $a2, -0xBBF
    ctx->r6 = ADD32(ctx->r6, -0XBBF);
    // 0x8026D4EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026D4F0: beq         $v1, $at, L_8026D4FC
    if (ctx->r3 == ctx->r1) {
        // 0x8026D4F4: nop
    
            goto L_8026D4FC;
    }
    // 0x8026D4F4: nop

    // 0x8026D4F8: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_8026D4FC:
    // 0x8026D4FC: lb          $t9, 0x0($a2)
    ctx->r25 = MEM_B(ctx->r6, 0X0);
    // 0x8026D500: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x8026D504: slti        $at, $t9, 0x24
    ctx->r1 = SIGNED(ctx->r25) < 0X24 ? 1 : 0;
    // 0x8026D508: bne         $at, $zero, L_8026D514
    if (ctx->r1 != 0) {
        // 0x8026D50C: nop
    
            goto L_8026D514;
    }
    // 0x8026D50C: nop

    // 0x8026D510: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
L_8026D514:
    // 0x8026D514: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8026D518: nop

    // 0x8026D51C: slti        $at, $v0, 0x25
    ctx->r1 = SIGNED(ctx->r2) < 0X25 ? 1 : 0;
    // 0x8026D520: beq         $at, $zero, L_8026D530
    if (ctx->r1 == 0) {
        // 0x8026D524: nop
    
            goto L_8026D530;
    }
    // 0x8026D524: nop

    // 0x8026D528: bgez        $v0, L_8026D538
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026D52C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026D538;
    }
    // 0x8026D52C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026D530:
    // 0x8026D530: sb          $t0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r8;
    // 0x8026D534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026D538:
    // 0x8026D538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026D53C: jr          $ra
    // 0x8026D540: nop

    return;
    // 0x8026D540: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D4C0: sb          $v0, -0xBBF($at)
    MEM_B(-0XBBF, ctx->r1) = ctx->r2;
    // 0x8026D4C4: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026D4C8: addiu       $a1, $a1, -0xBC0
    ctx->r5 = ADD32(ctx->r5, -0XBC0);
    // 0x8026D4CC: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8026D4D0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026D4D4: addiu       $a0, $a0, -0xBBE
    ctx->r4 = ADD32(ctx->r4, -0XBBE);
    // 0x8026D4D8: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026D4DC: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x8026D4E0: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
    // 0x8026D4E4: beq         $v1, $zero, L_8026D4FC
    if (ctx->r3 == 0) {
        // 0x8026D4E8: addiu       $a2, $a2, -0xBBF
        ctx->r6 = ADD32(ctx->r6, -0XBBF);
            goto L_8026D4FC;
    }
    // 0x8026D4E8: addiu       $a2, $a2, -0xBBF
    ctx->r6 = ADD32(ctx->r6, -0XBBF);
    // 0x8026D4EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026D4F0: beq         $v1, $at, L_8026D4FC
    if (ctx->r3 == ctx->r1) {
        // 0x8026D4F4: nop
    
            goto L_8026D4FC;
    }
    // 0x8026D4F4: nop

    // 0x8026D4F8: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_8026D4FC:
    // 0x8026D4FC: lb          $t9, 0x0($a2)
    ctx->r25 = MEM_B(ctx->r6, 0X0);
    // 0x8026D500: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x8026D504: slti        $at, $t9, 0x24
    ctx->r1 = SIGNED(ctx->r25) < 0X24 ? 1 : 0;
    // 0x8026D508: bne         $at, $zero, L_8026D514
    if (ctx->r1 != 0) {
        // 0x8026D50C: nop
    
            goto L_8026D514;
    }
    // 0x8026D50C: nop

    // 0x8026D510: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
L_8026D514:
    // 0x8026D514: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8026D518: nop

    // 0x8026D51C: slti        $at, $v0, 0x25
    ctx->r1 = SIGNED(ctx->r2) < 0X25 ? 1 : 0;
    // 0x8026D520: beq         $at, $zero, L_8026D530
    if (ctx->r1 == 0) {
        // 0x8026D524: nop
    
            goto L_8026D530;
    }
    // 0x8026D524: nop

    // 0x8026D528: bgez        $v0, L_8026D538
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026D52C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026D538;
    }
    // 0x8026D52C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026D530:
    // 0x8026D530: sb          $t0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r8;
    // 0x8026D534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026D538:
    // 0x8026D538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026D53C: jr          $ra
    // 0x8026D540: nop

    return;
    // 0x8026D540: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026D548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D54C: jal         0x8026D5CC
    // 0x8026D550: nop

    ovl_8026A0F0_func_8026D5CC(rdram, ctx);
        goto after_0;
    // 0x8026D550: nop

    after_0:
    // 0x8026D554: jal         0x8026D61C
    // 0x8026D558: nop

    ovl_8026A0F0_func_8026D61C(rdram, ctx);
        goto after_1;
    // 0x8026D558: nop

    after_1:
    // 0x8026D55C: jal         0x8026D688
    // 0x8026D560: nop

    ovl_8026A0F0_func_8026D688(rdram, ctx);
        goto after_2;
    // 0x8026D560: nop

    after_2:
    // 0x8026D564: jal         0x8026D6E4
    // 0x8026D568: nop

    ovl_8026A0F0_func_8026D6E4(rdram, ctx);
        goto after_3;
    // 0x8026D568: nop

    after_3:
    // 0x8026D56C: jal         0x8026D740
    // 0x8026D570: nop

    ovl_8026A0F0_func_8026D740(rdram, ctx);
        goto after_4;
    // 0x8026D570: nop

    after_4:
    // 0x8026D574: jal         0x8026D78C
    // 0x8026D578: nop

    ovl_8026A0F0_func_8026D78C(rdram, ctx);
        goto after_5;
    // 0x8026D578: nop

    after_5:
    // 0x8026D57C: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8026D580: lbu         $t6, -0xBC0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0XBC0);
    // 0x8026D584: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026D588: beq         $t6, $at, L_8026D5A0
    if (ctx->r14 == ctx->r1) {
        // 0x8026D58C: nop
    
            goto L_8026D5A0;
    }
    // 0x8026D58C: nop

    // 0x8026D590: jal         0x8026D794
    // 0x8026D594: nop

    ovl_8026A0F0_func_8026D794(rdram, ctx);
        goto after_6;
    // 0x8026D594: nop

    after_6:
    // 0x8026D598: jal         0x8026D820
    // 0x8026D59C: nop

    ovl_8026A0F0_func_8026D820(rdram, ctx);
        goto after_7;
    // 0x8026D59C: nop

    after_7:
L_8026D5A0:
    // 0x8026D5A0: jal         0x8026D878
    // 0x8026D5A4: nop

    ovl_8026A0F0_func_8026D878(rdram, ctx);
        goto after_8;
    // 0x8026D5A4: nop

    after_8:
    // 0x8026D5A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D5AC: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8026D5B0: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8026D5B4: addiu       $t7, $zero, 0x140
    ctx->r15 = ADD32(0, 0X140);
    // 0x8026D5B8: addiu       $t8, $zero, -0x140
    ctx->r24 = ADD32(0, -0X140);
    // 0x8026D5BC: sh          $t7, 0xEDC($v0)
    MEM_H(0XEDC, ctx->r2) = ctx->r15;
    // 0x8026D5C0: sh          $t8, 0x112C($v0)
    MEM_H(0X112C, ctx->r2) = ctx->r24;
    // 0x8026D5C4: jr          $ra
    // 0x8026D5C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8026D5C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D5CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026D5D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D5D4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8026D5D8: jal         0x80029354
    // 0x8026D5DC: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8026D5DC: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x8026D5E0: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026D5E4: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x8026D5E8: addiu       $a3, $a3, -0x4D80
    ctx->r7 = ADD32(ctx->r7, -0X4D80);
    // 0x8026D5EC: addiu       $a1, $zero, 0x5C3
    ctx->r5 = ADD32(0, 0X5C3);
    // 0x8026D5F0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8026D5F4: jal         0x8004CD24
    // 0x8026D5F8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x8026D5F8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8026D5FC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D600: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026D604: jal         0x8002135C
    // 0x8026D608: addiu       $a2, $zero, 0xE4
    ctx->r6 = ADD32(0, 0XE4);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8026D608: addiu       $a2, $zero, 0xE4
    ctx->r6 = ADD32(0, 0XE4);
    after_2:
    // 0x8026D60C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D610: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026D614: jr          $ra
    // 0x8026D618: nop

    return;
    // 0x8026D618: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D5D4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8026D5D8: jal         0x80029354
    // 0x8026D5DC: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8026D5DC: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x8026D5E0: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026D5E4: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x8026D5E8: addiu       $a3, $a3, -0x4D80
    ctx->r7 = ADD32(ctx->r7, -0X4D80);
    // 0x8026D5EC: addiu       $a1, $zero, 0x5C3
    ctx->r5 = ADD32(0, 0X5C3);
    // 0x8026D5F0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8026D5F4: jal         0x8004CD24
    // 0x8026D5F8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x8026D5F8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8026D5FC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D600: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026D604: jal         0x8002135C
    // 0x8026D608: addiu       $a2, $zero, 0xE4
    ctx->r6 = ADD32(0, 0XE4);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8026D608: addiu       $a2, $zero, 0xE4
    ctx->r6 = ADD32(0, 0XE4);
    after_2:
    // 0x8026D60C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D610: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026D614: jr          $ra
    // 0x8026D618: nop

    return;
    // 0x8026D618: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D61C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026D620: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D624: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8026D628: jal         0x80029354
    // 0x8026D62C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8026D62C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x8026D630: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8026D634: lbu         $t6, -0xBC0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0XBC0);
    // 0x8026D638: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8026D63C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026D640: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026D644: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x8026D648: lw          $a3, -0x11E0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X11E0);
    // 0x8026D64C: addiu       $a1, $zero, 0x4D9
    ctx->r5 = ADD32(0, 0X4D9);
    // 0x8026D650: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8026D654: jal         0x8004CD24
    // 0x8026D658: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x8026D658: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8026D65C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D660: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026D664: jal         0x8002135C
    // 0x8026D668: addiu       $a2, $zero, 0xE1
    ctx->r6 = ADD32(0, 0XE1);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8026D668: addiu       $a2, $zero, 0xE1
    ctx->r6 = ADD32(0, 0XE1);
    after_2:
    // 0x8026D66C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D670: jal         0x8004CE00
    // 0x8026D674: nop

    func_8004CE00(rdram, ctx);
        goto after_3;
    // 0x8026D674: nop

    after_3:
    // 0x8026D678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D67C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026D680: jr          $ra
    // 0x8026D684: nop

    return;
    // 0x8026D684: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D670: jal         0x8004CE00
    // 0x8026D674: nop

    func_8004CE00(rdram, ctx);
        goto after_0;
    // 0x8026D674: nop

    after_0:
    // 0x8026D678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D67C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026D680: jr          $ra
    // 0x8026D684: nop

    return;
    // 0x8026D684: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D688: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026D68C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D690: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8026D694: jal         0x80029354
    // 0x8026D698: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8026D698: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x8026D69C: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026D6A0: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x8026D6A4: addiu       $a3, $a3, -0x48AC
    ctx->r7 = ADD32(ctx->r7, -0X48AC);
    // 0x8026D6A8: addiu       $a1, $zero, 0x510
    ctx->r5 = ADD32(0, 0X510);
    // 0x8026D6AC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8026D6B0: jal         0x8004CD24
    // 0x8026D6B4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x8026D6B4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8026D6B8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D6BC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026D6C0: jal         0x8002135C
    // 0x8026D6C4: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8026D6C4: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    after_2:
    // 0x8026D6C8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D6CC: jal         0x8004CE14
    // 0x8026D6D0: nop

    func_8004CE14(rdram, ctx);
        goto after_3;
    // 0x8026D6D0: nop

    after_3:
    // 0x8026D6D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D6D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026D6DC: jr          $ra
    // 0x8026D6E0: nop

    return;
    // 0x8026D6E0: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D6E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D6E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026D6E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D6EC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8026D6F0: jal         0x80029354
    // 0x8026D6F4: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8026D6F4: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x8026D6F8: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026D6FC: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x8026D700: addiu       $a3, $a3, -0x481C
    ctx->r7 = ADD32(ctx->r7, -0X481C);
    // 0x8026D704: addiu       $a1, $zero, 0x4F8
    ctx->r5 = ADD32(0, 0X4F8);
    // 0x8026D708: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8026D70C: jal         0x8004CD24
    // 0x8026D710: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x8026D710: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8026D714: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D718: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026D71C: jal         0x8002135C
    // 0x8026D720: addiu       $a2, $zero, 0xE2
    ctx->r6 = ADD32(0, 0XE2);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8026D720: addiu       $a2, $zero, 0xE2
    ctx->r6 = ADD32(0, 0XE2);
    after_2:
    // 0x8026D724: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D728: jal         0x8004CE14
    // 0x8026D72C: nop

    func_8004CE14(rdram, ctx);
        goto after_3;
    // 0x8026D72C: nop

    after_3:
    // 0x8026D730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D734: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026D738: jr          $ra
    // 0x8026D73C: nop

    return;
    // 0x8026D73C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D720: addiu       $a2, $zero, 0xE2
    ctx->r6 = ADD32(0, 0XE2);
    // 0x8026D724: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D728: jal         0x8004CE14
    // 0x8026D72C: nop

    func_8004CE14(rdram, ctx);
        goto after_0;
    // 0x8026D72C: nop

    after_0:
    // 0x8026D730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D734: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026D738: jr          $ra
    // 0x8026D73C: nop

    return;
    // 0x8026D73C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D740: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026D744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D748: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8026D74C: jal         0x80029354
    // 0x8026D750: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8026D750: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x8026D754: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026D758: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026D75C: lbu         $a1, -0xBBF($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0XBBF);
    // 0x8026D760: addiu       $a2, $zero, 0xA4
    ctx->r6 = ADD32(0, 0XA4);
    // 0x8026D764: addiu       $a3, $zero, 0x36
    ctx->r7 = ADD32(0, 0X36);
    // 0x8026D768: jal         0x8026E160
    // 0x8026D76C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    ovl_8026A0F0_func_8026E160(rdram, ctx);
        goto after_1;
    // 0x8026D76C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8026D770: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D774: jal         0x8004CE00
    // 0x8026D778: nop

    func_8004CE00(rdram, ctx);
        goto after_2;
    // 0x8026D778: nop

    after_2:
    // 0x8026D77C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D780: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026D784: jr          $ra
    // 0x8026D788: nop

    return;
    // 0x8026D788: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D78C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D78C: jr          $ra
    // 0x8026D790: nop

    return;
    // 0x8026D790: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D794: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026D798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D79C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8026D7A0: jal         0x80029354
    // 0x8026D7A4: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8026D7A4: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x8026D7A8: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8026D7AC: lb          $v1, -0xBBE($v1)
    ctx->r3 = MEM_B(ctx->r3, -0XBBE);
    // 0x8026D7B0: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026D7B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026D7B8: bne         $v1, $at, L_8026D7CC
    if (ctx->r3 != ctx->r1) {
        // 0x8026D7BC: addiu       $a1, $zero, 0x515
        ctx->r5 = ADD32(0, 0X515);
            goto L_8026D7CC;
    }
    // 0x8026D7BC: addiu       $a1, $zero, 0x515
    ctx->r5 = ADD32(0, 0X515);
    // 0x8026D7C0: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x8026D7C4: b           L_8026D7E8
    // 0x8026D7C8: addiu       $a3, $a3, -0x47EC
    ctx->r7 = ADD32(ctx->r7, -0X47EC);
        goto L_8026D7E8;
    // 0x8026D7C8: addiu       $a3, $a3, -0x47EC
    ctx->r7 = ADD32(ctx->r7, -0X47EC);
L_8026D7CC:
    // 0x8026D7CC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026D7D0: bne         $v1, $at, L_8026D7E4
    if (ctx->r3 != ctx->r1) {
        // 0x8026D7D4: lui         $a3, 0x800D
        ctx->r7 = S32(0X800D << 16);
            goto L_8026D7E4;
    }
    // 0x8026D7D4: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x8026D7D8: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x8026D7DC: b           L_8026D7E8
    // 0x8026D7E0: addiu       $a3, $a3, -0x45DC
    ctx->r7 = ADD32(ctx->r7, -0X45DC);
        goto L_8026D7E8;
    // 0x8026D7E0: addiu       $a3, $a3, -0x45DC
    ctx->r7 = ADD32(ctx->r7, -0X45DC);
L_8026D7E4:
    // 0x8026D7E4: addiu       $a3, $a3, -0x4588
    ctx->r7 = ADD32(ctx->r7, -0X4588);
L_8026D7E8:
    // 0x8026D7E8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8026D7EC: jal         0x8004CD24
    // 0x8026D7F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x8026D7F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x8026D7F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026D7F8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026D7FC: jal         0x8002135C
    // 0x8026D800: addiu       $a2, $zero, 0xE3
    ctx->r6 = ADD32(0, 0XE3);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8026D800: addiu       $a2, $zero, 0xE3
    ctx->r6 = ADD32(0, 0XE3);
    after_2:
    // 0x8026D804: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026D808: jal         0x8004CE00
    // 0x8026D80C: nop

    func_8004CE00(rdram, ctx);
        goto after_3;
    // 0x8026D80C: nop

    after_3:
    // 0x8026D810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D814: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026D818: jr          $ra
    // 0x8026D81C: nop

    return;
    // 0x8026D81C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D820: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026D824: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8026D828: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026D82C: lb          $a3, -0xBBE($a3)
    ctx->r7 = MEM_B(ctx->r7, -0XBBE);
    // 0x8026D830: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8026D834: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8026D838: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8026D83C: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x8026D840: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
    // 0x8026D844: jal         0x8002FE24
    // 0x8026D848: addiu       $a2, $zero, 0x5C
    ctx->r6 = ADD32(0, 0X5C);
    func_8002FE24(rdram, ctx);
        goto after_0;
    // 0x8026D848: addiu       $a2, $zero, 0x5C
    ctx->r6 = ADD32(0, 0X5C);
    after_0:
    // 0x8026D84C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8026D850: jal         0x8004CE3C
    // 0x8026D854: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    func_8004CE3C(rdram, ctx);
        goto after_1;
    // 0x8026D854: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    after_1:
    // 0x8026D858: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8026D85C: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x8026D860: jal         0x80031B0C
    // 0x8026D864: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80031B0C(rdram, ctx);
        goto after_2;
    // 0x8026D864: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8026D868: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D86C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026D870: jr          $ra
    // 0x8026D874: nop

    return;
    // 0x8026D874: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D878: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026D87C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D880: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8026D884: jal         0x80029354
    // 0x8026D888: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8026D888: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x8026D88C: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026D890: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x8026D894: addiu       $a3, $a3, -0x478C
    ctx->r7 = ADD32(ctx->r7, -0X478C);
    // 0x8026D898: addiu       $a1, $zero, 0x5C3
    ctx->r5 = ADD32(0, 0X5C3);
    // 0x8026D89C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8026D8A0: jal         0x8004CD24
    // 0x8026D8A4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x8026D8A4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8026D8A8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D8AC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026D8B0: jal         0x8002135C
    // 0x8026D8B4: addiu       $a2, $zero, 0xE4
    ctx->r6 = ADD32(0, 0XE4);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8026D8B4: addiu       $a2, $zero, 0xE4
    ctx->r6 = ADD32(0, 0XE4);
    after_2:
    // 0x8026D8B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D8BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026D8C0: jr          $ra
    // 0x8026D8C4: nop

    return;
    // 0x8026D8C4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D8A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D8A4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x8026D8A8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026D8AC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026D8B0: jal         0x8002135C
    // 0x8026D8B4: addiu       $a2, $zero, 0xE4
    ctx->r6 = ADD32(0, 0XE4);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8026D8B4: addiu       $a2, $zero, 0xE4
    ctx->r6 = ADD32(0, 0XE4);
    after_0:
    // 0x8026D8B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D8BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026D8C0: jr          $ra
    // 0x8026D8C4: nop

    return;
    // 0x8026D8C4: nop

;}
