#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_803AC054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AC054: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803AC058: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803AC05C: lh          $t6, 0x2C($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2C);
    // 0x803AC060: nop

    // 0x803AC064: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803AC068: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803AC06C: lw          $t8, -0x2CC0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2CC0);
    // 0x803AC070: jr          $ra
    // 0x803AC074: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    return;
    // 0x803AC074: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x803AC078: nop

    // 0x803AC07C: nop

;}
RECOMP_FUNC void func_803AC080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AC080: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803AC084: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803AC088: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803AC08C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803AC090: jal         0x800353B0
    // 0x803AC094: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800353B0(rdram, ctx);
        goto after_0;
    // 0x803AC094: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803AC098: bne         $v0, $zero, L_803AC14C
    if (ctx->r2 != 0) {
        // 0x803AC09C: lui         $v1, 0x8011
        ctx->r3 = S32(0X8011 << 16);
            goto L_803AC14C;
    }
    // 0x803AC09C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x803AC0A0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803AC0A4: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803AC0A8: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x803AC0AC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803AC0B0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803AC0B4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803AC0B8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803AC0BC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x803AC0C0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x803AC0C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803AC0C8: addiu       $a3, $a3, 0x71B0
    ctx->r7 = ADD32(ctx->r7, 0X71B0);
    // 0x803AC0CC: addiu       $a0, $a0, -0x30E8
    ctx->r4 = ADD32(ctx->r4, -0X30E8);
    // 0x803AC0D0: addiu       $a1, $zero, 0xCA
    ctx->r5 = ADD32(0, 0XCA);
    // 0x803AC0D4: jal         0x8002F528
    // 0x803AC0D8: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    func_8002F528(rdram, ctx);
        goto after_1;
    // 0x803AC0D8: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_1:
    // 0x803AC0DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AC0E0: lh          $a0, -0x306C($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X306C);
    // 0x803AC0E4: jal         0x80035438
    // 0x803AC0E8: nop

    func_80035438(rdram, ctx);
        goto after_2;
    // 0x803AC0E8: nop

    after_2:
    // 0x803AC0EC: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x803AC0F0: addiu       $t0, $t0, 0x7888
    ctx->r8 = ADD32(ctx->r8, 0X7888);
    // 0x803AC0F4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803AC0F8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803AC0FC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803AC100: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803AC104: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803AC108: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x803AC10C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x803AC110: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x803AC114: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803AC118: addiu       $a0, $a0, -0x30C8
    ctx->r4 = ADD32(ctx->r4, -0X30C8);
    // 0x803AC11C: addu        $a3, $v0, $t0
    ctx->r7 = ADD32(ctx->r2, ctx->r8);
    // 0x803AC120: addiu       $a1, $zero, 0x11E
    ctx->r5 = ADD32(0, 0X11E);
    // 0x803AC124: jal         0x8002F528
    // 0x803AC128: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    func_8002F528(rdram, ctx);
        goto after_3;
    // 0x803AC128: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_3:
    // 0x803AC12C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x803AC130: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803AC134: sb          $t5, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r13;
    // 0x803AC138: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803AC13C: lh          $t7, -0x306C($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X306C);
    // 0x803AC140: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803AC144: b           L_803AC160
    // 0x803AC148: sh          $t7, 0x1E($t8)
    MEM_H(0X1E, ctx->r24) = ctx->r15;
        goto L_803AC160;
    // 0x803AC148: sh          $t7, 0x1E($t8)
    MEM_H(0X1E, ctx->r24) = ctx->r15;
L_803AC14C:
    // 0x803AC14C: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803AC150: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x803AC154: sb          $zero, 0x6AC($v1)
    MEM_B(0X6AC, ctx->r3) = 0;
    // 0x803AC158: sb          $zero, 0x68C($v1)
    MEM_B(0X68C, ctx->r3) = 0;
    // 0x803AC15C: sb          $zero, 0x4($t9)
    MEM_B(0X4, ctx->r25) = 0;
L_803AC160:
    // 0x803AC160: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803AC164: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803AC168: jr          $ra
    // 0x803AC16C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803AC16C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803AC170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AC170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AC174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AC178: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AC17C: jal         0x80036234
    // 0x803AC180: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803AC180: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803AC184: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AC188: jal         0x80035FF0
    // 0x803AC18C: addiu       $a0, $a0, -0x2C70
    ctx->r4 = ADD32(ctx->r4, -0X2C70);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803AC18C: addiu       $a0, $a0, -0x2C70
    ctx->r4 = ADD32(ctx->r4, -0X2C70);
    after_1:
    // 0x803AC190: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803AC194: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803AC198: jal         0x80049E40
    // 0x803AC19C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x803AC19C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_2:
    // 0x803AC1A0: jal         0x8006FB58
    // 0x803AC1A4: nop

    func_8006FB58(rdram, ctx);
        goto after_3;
    // 0x803AC1A4: nop

    after_3:
    // 0x803AC1A8: jal         0x80039DF0
    // 0x803AC1AC: nop

    func_80039DF0(rdram, ctx);
        goto after_4;
    // 0x803AC1AC: nop

    after_4:
    // 0x803AC1B0: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AC1B4: jal         0x800296E0
    // 0x803AC1B8: addiu       $a0, $a0, -0x3E34
    ctx->r4 = ADD32(ctx->r4, -0X3E34);
    func_800296E0(rdram, ctx);
        goto after_5;
    // 0x803AC1B8: addiu       $a0, $a0, -0x3E34
    ctx->r4 = ADD32(ctx->r4, -0X3E34);
    after_5:
    // 0x803AC1BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AC1C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AC1C4: jr          $ra
    // 0x803AC1C8: nop

    return;
    // 0x803AC1C8: nop

;}
RECOMP_FUNC void func_803AC1CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AC1CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AC1D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AC1D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AC1D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AC1DC: jal         0x80034940
    // 0x803AC1E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80034940(rdram, ctx);
        goto after_0;
    // 0x803AC1E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803AC1E4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AC1E8: addiu       $a0, $a0, -0x3DFC
    ctx->r4 = ADD32(ctx->r4, -0X3DFC);
    // 0x803AC1EC: jal         0x8002989C
    // 0x803AC1F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x803AC1F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x803AC1F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AC1F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AC1FC: jr          $ra
    // 0x803AC200: nop

    return;
    // 0x803AC200: nop

;}
RECOMP_FUNC void func_803AC204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AC204: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803AC208: lbu         $t6, -0x3299($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3299);
    // 0x803AC20C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AC210: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AC214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AC218: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AC21C: bne         $t6, $at, L_803AC244
    if (ctx->r14 != ctx->r1) {
        // 0x803AC220: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_803AC244;
    }
    // 0x803AC220: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AC224: jal         0x80039DB4
    // 0x803AC228: nop

    func_80039DB4(rdram, ctx);
        goto after_0;
    // 0x803AC228: nop

    after_0:
    // 0x803AC22C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AC230: addiu       $a0, $a0, -0x3DA0
    ctx->r4 = ADD32(ctx->r4, -0X3DA0);
    // 0x803AC234: jal         0x8002989C
    // 0x803AC238: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x803AC238: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x803AC23C: b           L_803AC254
    // 0x803AC240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AC254;
    // 0x803AC240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AC244:
    // 0x803AC244: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AC248: jal         0x800296E0
    // 0x803AC24C: addiu       $a0, $a0, -0x3DA0
    ctx->r4 = ADD32(ctx->r4, -0X3DA0);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x803AC24C: addiu       $a0, $a0, -0x3DA0
    ctx->r4 = ADD32(ctx->r4, -0X3DA0);
    after_2:
    // 0x803AC250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AC254:
    // 0x803AC254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AC258: jr          $ra
    // 0x803AC25C: nop

    return;
    // 0x803AC25C: nop

;}
RECOMP_FUNC void func_803AC260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AC260: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AC264: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803AC268: lbu         $t6, -0x329F($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X329F);
    // 0x803AC26C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AC270: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AC274: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AC278: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x803AC27C: sh          $t7, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r15;
    // 0x803AC280: sh          $t6, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r14;
    // 0x803AC284: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AC288: jal         0x8002AAC0
    // 0x803AC28C: addiu       $a0, $a0, -0x2A84
    ctx->r4 = ADD32(ctx->r4, -0X2A84);
    func_8002AAC0(rdram, ctx);
        goto after_0;
    // 0x803AC28C: addiu       $a0, $a0, -0x2A84
    ctx->r4 = ADD32(ctx->r4, -0X2A84);
    after_0:
    // 0x803AC290: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AC294: addiu       $a0, $a0, -0x3BE4
    ctx->r4 = ADD32(ctx->r4, -0X3BE4);
    // 0x803AC298: jal         0x800293DC
    // 0x803AC29C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800293DC(rdram, ctx);
        goto after_1;
    // 0x803AC29C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x803AC2A0: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AC2A4: addiu       $a0, $a0, -0x3D40
    ctx->r4 = ADD32(ctx->r4, -0X3D40);
    // 0x803AC2A8: jal         0x8004A9B4
    // 0x803AC2AC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_2;
    // 0x803AC2AC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_2:
    // 0x803AC2B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AC2B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AC2B8: jr          $ra
    // 0x803AC2BC: nop

    return;
    // 0x803AC2BC: nop

;}
RECOMP_FUNC void func_803AC2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AC2C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AC2C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AC2C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AC2CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AC2D0: jal         0x80035680
    // 0x803AC2D4: ori         $a0, $zero, 0x8C00
    ctx->r4 = 0 | 0X8C00;
    func_80035680(rdram, ctx);
        goto after_0;
    // 0x803AC2D4: ori         $a0, $zero, 0x8C00
    ctx->r4 = 0 | 0X8C00;
    after_0:
    // 0x803AC2D8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803AC2DC: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x803AC2E0: nop

    // 0x803AC2E4: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x803AC2E8: jal         0x80035BB8
    // 0x803AC2EC: nop

    func_80035BB8(rdram, ctx);
        goto after_1;
    // 0x803AC2EC: nop

    after_1:
    // 0x803AC2F0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803AC2F4: lui         $t9, 0x803B
    ctx->r25 = S32(0X803B << 16);
    // 0x803AC2F8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803AC2FC: lw          $t9, -0x2A60($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2A60);
    // 0x803AC300: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803AC304: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803AC308: jalr        $t9
    // 0x803AC30C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x803AC30C: nop

    after_2:
    // 0x803AC310: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x803AC314: nop

    // 0x803AC318: lh          $a0, 0x2C($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2C);
    // 0x803AC31C: lh          $a1, 0x28($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X28);
    // 0x803AC320: jal         0x8001D6EC
    // 0x803AC324: nop

    func_8001D6EC(rdram, ctx);
        goto after_3;
    // 0x803AC324: nop

    after_3:
    // 0x803AC328: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x803AC32C: nop

    // 0x803AC330: sh          $v0, 0x2C($t8)
    MEM_H(0X2C, ctx->r24) = ctx->r2;
    // 0x803AC334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AC338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AC33C: jr          $ra
    // 0x803AC340: nop

    return;
    // 0x803AC340: nop

;}
RECOMP_FUNC void func_803AC344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AC344: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AC348: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AC34C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AC350: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AC354: jal         0x80034940
    // 0x803AC358: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80034940(rdram, ctx);
        goto after_0;
    // 0x803AC358: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803AC35C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x803AC360: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803AC364: lh          $t7, 0x2C($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2C);
    // 0x803AC368: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803AC36C: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x803AC370: sltiu       $at, $t8, 0x6
    ctx->r1 = ctx->r24 < 0X6 ? 1 : 0;
    // 0x803AC374: beq         $at, $zero, L_803AC3F8
    if (ctx->r1 == 0) {
        // 0x803AC378: sb          $t7, 0x11($v0)
        MEM_B(0X11, ctx->r2) = ctx->r15;
            goto L_803AC3F8;
    }
    // 0x803AC378: sb          $t7, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r15;
    // 0x803AC37C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803AC380: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803AC384: addu        $at, $at, $t8
    gpr jr_addend_803AC390 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803AC388: lw          $t8, -0x2948($at)
    ctx->r24 = ADD32(ctx->r1, -0X2948);
    // 0x803AC38C: nop

    // 0x803AC390: jr          $t8
    // 0x803AC394: nop

    switch (jr_addend_803AC390 >> 2) {
        case 0: goto L_803AC398; break;
        case 1: goto L_803AC3F8; break;
        case 2: goto L_803AC3E8; break;
        case 3: goto L_803AC3D0; break;
        case 4: goto L_803AC3A8; break;
        case 5: goto L_803AC3D0; break;
        default: switch_error(__func__, 0x803AC390, 0x803AD6B8);
    }
    // 0x803AC394: nop

L_803AC398:
    // 0x803AC398: jal         0x80037618
    // 0x803AC39C: nop

    func_80037618(rdram, ctx);
        goto after_1;
    // 0x803AC39C: nop

    after_1:
    // 0x803AC3A0: b           L_803AC3FC
    // 0x803AC3A4: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
        goto L_803AC3FC;
    // 0x803AC3A4: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_803AC3A8:
    // 0x803AC3A8: jal         0x8003294C
    // 0x803AC3AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003294C(rdram, ctx);
        goto after_2;
    // 0x803AC3AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x803AC3B0: jal         0x80032310
    // 0x803AC3B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80032310(rdram, ctx);
        goto after_3;
    // 0x803AC3B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x803AC3B8: jal         0x80032EC0
    // 0x803AC3BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80032EC0(rdram, ctx);
        goto after_4;
    // 0x803AC3BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x803AC3C0: jal         0x8003A300
    // 0x803AC3C4: nop

    func_8003A300(rdram, ctx);
        goto after_5;
    // 0x803AC3C4: nop

    after_5:
    // 0x803AC3C8: b           L_803AC3FC
    // 0x803AC3CC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
        goto L_803AC3FC;
    // 0x803AC3CC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_803AC3D0:
    // 0x803AC3D0: jal         0x80032EC0
    // 0x803AC3D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80032EC0(rdram, ctx);
        goto after_6;
    // 0x803AC3D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x803AC3D8: jal         0x8003A300
    // 0x803AC3DC: nop

    func_8003A300(rdram, ctx);
        goto after_7;
    // 0x803AC3DC: nop

    after_7:
    // 0x803AC3E0: b           L_803AC3FC
    // 0x803AC3E4: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
        goto L_803AC3FC;
    // 0x803AC3E4: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_803AC3E8:
    // 0x803AC3E8: jal         0x80032310
    // 0x803AC3EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80032310(rdram, ctx);
        goto after_8;
    // 0x803AC3EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x803AC3F0: jal         0x8003A300
    // 0x803AC3F4: nop

    func_8003A300(rdram, ctx);
        goto after_9;
    // 0x803AC3F4: nop

    after_9:
L_803AC3F8:
    // 0x803AC3F8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_803AC3FC:
    // 0x803AC3FC: nop

    // 0x803AC400: lbu         $a0, 0x2D($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X2D);
    // 0x803AC404: jal         0x80037908
    // 0x803AC408: nop

    func_80037908(rdram, ctx);
        goto after_10;
    // 0x803AC408: nop

    after_10:
    // 0x803AC40C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AC410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AC414: jr          $ra
    // 0x803AC418: nop

    return;
    // 0x803AC418: nop

;}
RECOMP_FUNC void func_803AC41C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AC41C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AC420: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803AC424: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AC428: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803AC42C: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AC430: addiu       $a1, $a1, -0x2A4C
    ctx->r5 = ADD32(ctx->r5, -0X2A4C);
    // 0x803AC434: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803AC438: jal         0x8002F444
    // 0x803AC43C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8002F444(rdram, ctx);
        goto after_0;
    // 0x803AC43C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x803AC440: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803AC444: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AC448: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x803AC44C: addiu       $a1, $a1, -0x2998
    ctx->r5 = ADD32(ctx->r5, -0X2998);
    // 0x803AC450: jal         0x8004A298
    // 0x803AC454: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x803AC454: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x803AC458: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x803AC45C: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
    // 0x803AC460: jal         0x800353B0
    // 0x803AC464: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800353B0(rdram, ctx);
        goto after_2;
    // 0x803AC464: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x803AC468: lh          $v1, 0x1E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1E);
    // 0x803AC46C: bgez        $v0, L_803AC47C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x803AC470: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_803AC47C;
    }
    // 0x803AC470: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803AC474: b           L_803AC494
    // 0x803AC478: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
        goto L_803AC494;
    // 0x803AC478: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
L_803AC47C:
    // 0x803AC47C: jal         0x800353B0
    // 0x803AC480: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
    func_800353B0(rdram, ctx);
        goto after_3;
    // 0x803AC480: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
    after_3:
    // 0x803AC484: lh          $v1, 0x1E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1E);
    // 0x803AC488: blez        $v0, L_803AC494
    if (SIGNED(ctx->r2) <= 0) {
        // 0x803AC48C: nop
    
            goto L_803AC494;
    }
    // 0x803AC48C: nop

    // 0x803AC490: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
L_803AC494:
    // 0x803AC494: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803AC498: addiu       $t8, $t8, -0x2A4C
    ctx->r24 = ADD32(ctx->r24, -0X2A4C);
    // 0x803AC49C: sll         $t7, $v1, 4
    ctx->r15 = S32(ctx->r3 << 4);
    // 0x803AC4A0: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x803AC4A4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x803AC4A8: jal         0x8002F444
    // 0x803AC4AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_4;
    // 0x803AC4AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x803AC4B0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803AC4B4: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AC4B8: addiu       $a1, $a1, -0x295C
    ctx->r5 = ADD32(ctx->r5, -0X295C);
    // 0x803AC4BC: jal         0x8004A298
    // 0x803AC4C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_5;
    // 0x803AC4C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x803AC4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AC4C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AC4CC: jr          $ra
    // 0x803AC4D0: nop

    return;
    // 0x803AC4D0: nop

    // 0x803AC4D4: nop

    // 0x803AC4D8: nop

    // 0x803AC4DC: nop

;}
RECOMP_FUNC void func_803AC4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AC4E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AC4E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AC4E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AC4EC: jal         0x80036234
    // 0x803AC4F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803AC4F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803AC4F4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AC4F8: jal         0x80035FF0
    // 0x803AC4FC: addiu       $a0, $a0, -0x2930
    ctx->r4 = ADD32(ctx->r4, -0X2930);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803AC4FC: addiu       $a0, $a0, -0x2930
    ctx->r4 = ADD32(ctx->r4, -0X2930);
    after_1:
    // 0x803AC500: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803AC504: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803AC508: jal         0x80049E40
    // 0x803AC50C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x803AC50C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_2:
    // 0x803AC510: jal         0x80034940
    // 0x803AC514: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80034940(rdram, ctx);
        goto after_3;
    // 0x803AC514: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x803AC518: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803AC51C: lbu         $t6, -0x329E($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X329E);
    // 0x803AC520: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x803AC524: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AC528: addiu       $a0, $a0, -0x28B4
    ctx->r4 = ADD32(ctx->r4, -0X28B4);
    // 0x803AC52C: jal         0x8002AAC0
    // 0x803AC530: sh          $t6, 0x2C($t7)
    MEM_H(0X2C, ctx->r15) = ctx->r14;
    func_8002AAC0(rdram, ctx);
        goto after_4;
    // 0x803AC530: sh          $t6, 0x2C($t7)
    MEM_H(0X2C, ctx->r15) = ctx->r14;
    after_4:
    // 0x803AC534: jal         0x8006FB58
    // 0x803AC538: nop

    func_8006FB58(rdram, ctx);
        goto after_5;
    // 0x803AC538: nop

    after_5:
    // 0x803AC53C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AC540: addiu       $a0, $a0, -0x38E8
    ctx->r4 = ADD32(ctx->r4, -0X38E8);
    // 0x803AC544: jal         0x800293DC
    // 0x803AC548: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800293DC(rdram, ctx);
        goto after_6;
    // 0x803AC548: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_6:
    // 0x803AC54C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AC550: addiu       $a0, $a0, -0x3A94
    ctx->r4 = ADD32(ctx->r4, -0X3A94);
    // 0x803AC554: jal         0x8004A9B4
    // 0x803AC558: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_7;
    // 0x803AC558: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_7:
    // 0x803AC55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AC560: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AC564: jr          $ra
    // 0x803AC568: nop

    return;
    // 0x803AC568: nop

;}
RECOMP_FUNC void func_803AC56C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AC56C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AC570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AC574: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AC578: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AC57C: jal         0x80035680
    // 0x803AC580: addiu       $a0, $zero, 0xC00
    ctx->r4 = ADD32(0, 0XC00);
    func_80035680(rdram, ctx);
        goto after_0;
    // 0x803AC580: addiu       $a0, $zero, 0xC00
    ctx->r4 = ADD32(0, 0XC00);
    after_0:
    // 0x803AC584: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803AC588: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x803AC58C: nop

    // 0x803AC590: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x803AC594: jal         0x80035BB8
    // 0x803AC598: nop

    func_80035BB8(rdram, ctx);
        goto after_1;
    // 0x803AC598: nop

    after_1:
    // 0x803AC59C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803AC5A0: lui         $t9, 0x803B
    ctx->r25 = S32(0X803B << 16);
    // 0x803AC5A4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803AC5A8: lw          $t9, -0x2890($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2890);
    // 0x803AC5AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803AC5B0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803AC5B4: jalr        $t9
    // 0x803AC5B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x803AC5B8: nop

    after_2:
    // 0x803AC5BC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x803AC5C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803AC5C4: lh          $a0, 0x2C($t8)
    ctx->r4 = MEM_H(ctx->r24, 0X2C);
    // 0x803AC5C8: jal         0x8001D6EC
    // 0x803AC5CC: nop

    func_8001D6EC(rdram, ctx);
        goto after_3;
    // 0x803AC5CC: nop

    after_3:
    // 0x803AC5D0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x803AC5D4: nop

    // 0x803AC5D8: sh          $v0, 0x2C($t0)
    MEM_H(0X2C, ctx->r8) = ctx->r2;
    // 0x803AC5DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AC5E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AC5E4: jr          $ra
    // 0x803AC5E8: nop

    return;
    // 0x803AC5E8: nop

;}
RECOMP_FUNC void func_803AC5EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AC5EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AC5F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AC5F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AC5F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AC5FC: lh          $t6, 0x2C($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2C);
    // 0x803AC600: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x803AC604: addiu       $a2, $a2, -0x32B0
    ctx->r6 = ADD32(ctx->r6, -0X32B0);
    // 0x803AC608: sb          $t6, 0x12($a2)
    MEM_B(0X12, ctx->r6) = ctx->r14;
    // 0x803AC60C: lh          $t7, 0x2C($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2C);
    // 0x803AC610: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x803AC614: bne         $t7, $zero, L_803AC634
    if (ctx->r15 != 0) {
        // 0x803AC618: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_803AC634;
    }
    // 0x803AC618: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803AC61C: jal         0x80037908
    // 0x803AC620: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x803AC620: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803AC624: jal         0x80035770
    // 0x803AC628: nop

    func_80035770(rdram, ctx);
        goto after_1;
    // 0x803AC628: nop

    after_1:
    // 0x803AC62C: b           L_803AC70C
    // 0x803AC630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AC70C;
    // 0x803AC630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AC634:
    // 0x803AC634: jal         0x80034940
    // 0x803AC638: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_80034940(rdram, ctx);
        goto after_2;
    // 0x803AC638: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_2:
    // 0x803AC63C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x803AC640: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x803AC644: beq         $v0, $zero, L_803AC658
    if (ctx->r2 == 0) {
        // 0x803AC648: addiu       $a2, $a2, -0x32B0
        ctx->r6 = ADD32(ctx->r6, -0X32B0);
            goto L_803AC658;
    }
    // 0x803AC648: addiu       $a2, $a2, -0x32B0
    ctx->r6 = ADD32(ctx->r6, -0X32B0);
    // 0x803AC64C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AC650: bne         $v0, $at, L_803AC6E8
    if (ctx->r2 != ctx->r1) {
        // 0x803AC654: nop
    
            goto L_803AC6E8;
    }
    // 0x803AC654: nop

L_803AC658:
    // 0x803AC658: lh          $v1, 0x2C($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X2C);
    // 0x803AC65C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803AC660: beq         $v1, $at, L_803AC6B8
    if (ctx->r3 == ctx->r1) {
        // 0x803AC664: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_803AC6B8;
    }
    // 0x803AC664: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AC668: beq         $v0, $at, L_803AC694
    if (ctx->r2 == ctx->r1) {
        // 0x803AC66C: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_803AC694;
    }
    // 0x803AC66C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803AC670: addiu       $v0, $v0, -0x3070
    ctx->r2 = ADD32(ctx->r2, -0X3070);
    // 0x803AC674: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x803AC678: nop

    // 0x803AC67C: bltz        $t8, L_803AC694
    if (SIGNED(ctx->r24) < 0) {
        // 0x803AC680: nop
    
            goto L_803AC694;
    }
    // 0x803AC680: nop

    // 0x803AC684: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    // 0x803AC688: nop

    // 0x803AC68C: bgez        $t9, L_803AC6BC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x803AC690: slti        $at, $v1, 0x2
        ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_803AC6BC;
    }
    // 0x803AC690: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
L_803AC694:
    // 0x803AC694: jal         0x800357AC
    // 0x803AC698: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_800357AC(rdram, ctx);
        goto after_3;
    // 0x803AC698: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x803AC69C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x803AC6A0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x803AC6A4: sh          $zero, 0x2C($a1)
    MEM_H(0X2C, ctx->r5) = 0;
    // 0x803AC6A8: lh          $t0, 0x2C($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X2C);
    // 0x803AC6AC: addiu       $a2, $a2, -0x32B0
    ctx->r6 = ADD32(ctx->r6, -0X32B0);
    // 0x803AC6B0: b           L_803AC708
    // 0x803AC6B4: sb          $t0, 0x12($a2)
    MEM_B(0X12, ctx->r6) = ctx->r8;
        goto L_803AC708;
    // 0x803AC6B4: sb          $t0, 0x12($a2)
    MEM_B(0X12, ctx->r6) = ctx->r8;
L_803AC6B8:
    // 0x803AC6B8: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
L_803AC6BC:
    // 0x803AC6BC: beq         $at, $zero, L_803AC6CC
    if (ctx->r1 == 0) {
        // 0x803AC6C0: nop
    
            goto L_803AC6CC;
    }
    // 0x803AC6C0: nop

    // 0x803AC6C4: b           L_803AC6D0
    // 0x803AC6C8: sh          $zero, 0x4($a2)
    MEM_H(0X4, ctx->r6) = 0;
        goto L_803AC6D0;
    // 0x803AC6C8: sh          $zero, 0x4($a2)
    MEM_H(0X4, ctx->r6) = 0;
L_803AC6CC:
    // 0x803AC6CC: sh          $v1, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r3;
L_803AC6D0:
    // 0x803AC6D0: jal         0x80037908
    // 0x803AC6D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_4;
    // 0x803AC6D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x803AC6D8: jal         0x80035770
    // 0x803AC6DC: nop

    func_80035770(rdram, ctx);
        goto after_5;
    // 0x803AC6DC: nop

    after_5:
    // 0x803AC6E0: b           L_803AC70C
    // 0x803AC6E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AC70C;
    // 0x803AC6E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AC6E8:
    // 0x803AC6E8: jal         0x800357AC
    // 0x803AC6EC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_800357AC(rdram, ctx);
        goto after_6;
    // 0x803AC6EC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_6:
    // 0x803AC6F0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x803AC6F4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x803AC6F8: sh          $zero, 0x2C($a1)
    MEM_H(0X2C, ctx->r5) = 0;
    // 0x803AC6FC: lh          $t1, 0x2C($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X2C);
    // 0x803AC700: addiu       $a2, $a2, -0x32B0
    ctx->r6 = ADD32(ctx->r6, -0X32B0);
    // 0x803AC704: sb          $t1, 0x12($a2)
    MEM_B(0X12, ctx->r6) = ctx->r9;
L_803AC708:
    // 0x803AC708: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AC70C:
    // 0x803AC70C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AC710: jr          $ra
    // 0x803AC714: nop

    return;
    // 0x803AC714: nop

;}
RECOMP_FUNC void func_803AC718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AC718: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AC71C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803AC720: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803AC724: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803AC728: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803AC72C: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AC730: addiu       $a1, $a1, -0x287C
    ctx->r5 = ADD32(ctx->r5, -0X287C);
    // 0x803AC734: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803AC738: jal         0x8002F444
    // 0x803AC73C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8002F444(rdram, ctx);
        goto after_0;
    // 0x803AC73C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_0:
    // 0x803AC740: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x803AC744: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AC748: addiu       $a1, $a1, -0x27E4
    ctx->r5 = ADD32(ctx->r5, -0X27E4);
    // 0x803AC74C: jal         0x8004A298
    // 0x803AC750: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x803AC750: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x803AC754: jal         0x800353B0
    // 0x803AC758: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800353B0(rdram, ctx);
        goto after_2;
    // 0x803AC758: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x803AC75C: beq         $v0, $zero, L_803AC798
    if (ctx->r2 == 0) {
        // 0x803AC760: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803AC798;
    }
    // 0x803AC760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803AC764: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AC768: addiu       $a1, $a1, -0x282C
    ctx->r5 = ADD32(ctx->r5, -0X282C);
    // 0x803AC76C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x803AC770: jal         0x8002F444
    // 0x803AC774: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_3;
    // 0x803AC774: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x803AC778: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AC77C: addiu       $a1, $a1, -0x27A8
    ctx->r5 = ADD32(ctx->r5, -0X27A8);
    // 0x803AC780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803AC784: jal         0x8004A298
    // 0x803AC788: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_4;
    // 0x803AC788: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x803AC78C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803AC790: b           L_803AC7B8
    // 0x803AC794: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
        goto L_803AC7B8;
    // 0x803AC794: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
L_803AC798:
    // 0x803AC798: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x803AC79C: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x803AC7A0: sb          $zero, 0x7FAC($v0)
    MEM_B(0X7FAC, ctx->r2) = 0;
    // 0x803AC7A4: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AC7A8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x803AC7AC: addiu       $a1, $a1, -0x27B2
    ctx->r5 = ADD32(ctx->r5, -0X27B2);
    // 0x803AC7B0: jal         0x8004A298
    // 0x803AC7B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_5;
    // 0x803AC7B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
L_803AC7B8:
    // 0x803AC7B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803AC7BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803AC7C0: jr          $ra
    // 0x803AC7C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803AC7C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AC7C8: nop

    // 0x803AC7CC: nop

;}
RECOMP_FUNC void func_803AD8C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AD8C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AD8C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AD8C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AD8CC: jal         0x80036234
    // 0x803AD8D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803AD8D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803AD8D4: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803AD8D8: jal         0x80035FF0
    // 0x803AD8DC: addiu       $a0, $a0, 0x1A34
    ctx->r4 = ADD32(ctx->r4, 0X1A34);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803AD8DC: addiu       $a0, $a0, 0x1A34
    ctx->r4 = ADD32(ctx->r4, 0X1A34);
    after_1:
    // 0x803AD8E0: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803AD8E4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803AD8E8: jal         0x80049E40
    // 0x803AD8EC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x803AD8EC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x803AD8F0: jal         0x803ADE6C
    // 0x803AD8F4: nop

    func_803ADE6C(rdram, ctx);
        goto after_3;
    // 0x803AD8F4: nop

    after_3:
    // 0x803AD8F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803AD8FC: jal         0x800356B4
    // 0x803AD900: ori         $a1, $zero, 0x8F00
    ctx->r5 = 0 | 0X8F00;
    func_800356B4(rdram, ctx);
        goto after_4;
    // 0x803AD900: ori         $a1, $zero, 0x8F00
    ctx->r5 = 0 | 0X8F00;
    after_4:
    // 0x803AD904: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x803AD908: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AD90C: lb          $t7, 0x2C($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X2C);
    // 0x803AD910: nop

    // 0x803AD914: bne         $t7, $at, L_803AD924
    if (ctx->r15 != ctx->r1) {
        // 0x803AD918: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_803AD924;
    }
    // 0x803AD918: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803AD91C: jal         0x800356B4
    // 0x803AD920: ori         $a1, $zero, 0x8F00
    ctx->r5 = 0 | 0X8F00;
    func_800356B4(rdram, ctx);
        goto after_5;
    // 0x803AD920: ori         $a1, $zero, 0x8F00
    ctx->r5 = 0 | 0X8F00;
    after_5:
L_803AD924:
    // 0x803AD924: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AD928: jal         0x80029220
    // 0x803AD92C: addiu       $a0, $a0, -0x1F2C
    ctx->r4 = ADD32(ctx->r4, -0X1F2C);
    func_80029220(rdram, ctx);
        goto after_6;
    // 0x803AD92C: addiu       $a0, $a0, -0x1F2C
    ctx->r4 = ADD32(ctx->r4, -0X1F2C);
    after_6:
    // 0x803AD930: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803AD934: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803AD938: jal         0x80021214
    // 0x803AD93C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_7;
    // 0x803AD93C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x803AD940: jal         0x803AE200
    // 0x803AD944: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803AE200(rdram, ctx);
        goto after_8;
    // 0x803AD944: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x803AD948: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803AD94C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x803AD950: jal         0x80021214
    // 0x803AD954: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80021214(rdram, ctx);
        goto after_9;
    // 0x803AD954: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x803AD958: jal         0x803AE200
    // 0x803AD95C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803AE200(rdram, ctx);
        goto after_10;
    // 0x803AD95C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x803AD960: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x803AD964: addiu       $t8, $t8, -0x6CE4
    ctx->r24 = ADD32(ctx->r24, -0X6CE4);
    // 0x803AD968: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x803AD96C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803AD970: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803AD974: lw          $a2, 0x4($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X4);
    // 0x803AD978: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803AD97C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803AD980: lw          $a3, 0x8($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X8);
    // 0x803AD984: jal         0x8004B078
    // 0x803AD988: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_11;
    // 0x803AD988: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_11:
    // 0x803AD98C: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x803AD990: addiu       $t1, $t1, -0x6CCC
    ctx->r9 = ADD32(ctx->r9, -0X6CCC);
    // 0x803AD994: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x803AD998: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803AD99C: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803AD9A0: lw          $a2, 0x4($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X4);
    // 0x803AD9A4: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803AD9A8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803AD9AC: lw          $a3, 0x8($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X8);
    // 0x803AD9B0: jal         0x8004B078
    // 0x803AD9B4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_12;
    // 0x803AD9B4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_12:
    // 0x803AD9B8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AD9BC: jal         0x8002AAC0
    // 0x803AD9C0: addiu       $a0, $a0, -0x208
    ctx->r4 = ADD32(ctx->r4, -0X208);
    func_8002AAC0(rdram, ctx);
        goto after_13;
    // 0x803AD9C0: addiu       $a0, $a0, -0x208
    ctx->r4 = ADD32(ctx->r4, -0X208);
    after_13:
    // 0x803AD9C4: jal         0x8006FB58
    // 0x803AD9C8: nop

    func_8006FB58(rdram, ctx);
        goto after_14;
    // 0x803AD9C8: nop

    after_14:
    // 0x803AD9CC: jal         0x803AE47C
    // 0x803AD9D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803AE47C(rdram, ctx);
        goto after_15;
    // 0x803AD9D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x803AD9D4: jal         0x803AE47C
    // 0x803AD9D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803AE47C(rdram, ctx);
        goto after_16;
    // 0x803AD9D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_16:
    // 0x803AD9DC: jal         0x803AE128
    // 0x803AD9E0: nop

    func_803AE128(rdram, ctx);
        goto after_17;
    // 0x803AD9E0: nop

    after_17:
    // 0x803AD9E4: jal         0x803AE6D0
    // 0x803AD9E8: nop

    func_803AE6D0(rdram, ctx);
        goto after_18;
    // 0x803AD9E8: nop

    after_18:
    // 0x803AD9EC: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AD9F0: addiu       $a0, $a0, -0x25F4
    ctx->r4 = ADD32(ctx->r4, -0X25F4);
    // 0x803AD9F4: jal         0x8004A9B4
    // 0x803AD9F8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_19;
    // 0x803AD9F8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_19:
    // 0x803AD9FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803ADA00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803ADA04: jr          $ra
    // 0x803ADA08: nop

    return;
    // 0x803ADA08: nop

;}
RECOMP_FUNC void func_803ADA0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ADA0C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803ADA10: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x803ADA14: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x803ADA18: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x803ADA1C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x803ADA20: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x803ADA24: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803ADA28: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803ADA2C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803ADA30: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803ADA34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803ADA38: lb          $t6, 0x2C($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2C);
    // 0x803ADA3C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x803ADA40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803ADA44: bne         $s3, $t6, L_803ADA58
    if (ctx->r19 != ctx->r14) {
        // 0x803ADA48: or          $fp, $a1, $zero
        ctx->r30 = ctx->r5 | 0;
            goto L_803ADA58;
    }
    // 0x803ADA48: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x803ADA4C: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x803ADA50: addiu       $s2, $s2, -0x32B0
    ctx->r18 = ADD32(ctx->r18, -0X32B0);
    // 0x803ADA54: sb          $zero, 0x44($s2)
    MEM_B(0X44, ctx->r18) = 0;
L_803ADA58:
    // 0x803ADA58: lhu         $t7, 0x48($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X48);
    // 0x803ADA5C: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x803ADA60: addiu       $s2, $s2, -0x32B0
    ctx->r18 = ADD32(ctx->r18, -0X32B0);
    // 0x803ADA64: blez        $t7, L_803ADAF4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x803ADA68: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803ADAF4;
    }
    // 0x803ADA68: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803ADA6C: lui         $s7, 0x803B
    ctx->r23 = S32(0X803B << 16);
    // 0x803ADA70: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x803ADA74: addiu       $s4, $s4, -0x3770
    ctx->r20 = ADD32(ctx->r20, -0X3770);
    // 0x803ADA78: addiu       $s7, $s7, -0x108
    ctx->r23 = ADD32(ctx->r23, -0X108);
    // 0x803ADA7C: lui         $s6, 0x3
    ctx->r22 = S32(0X3 << 16);
    // 0x803ADA80: addiu       $s5, $zero, 0x18
    ctx->r21 = ADD32(0, 0X18);
L_803ADA84:
    // 0x803ADA84: lb          $t8, 0x44($s2)
    ctx->r24 = MEM_B(ctx->r18, 0X44);
    // 0x803ADA88: nop

    // 0x803ADA8C: multu       $t8, $s5
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803ADA90: mflo        $t9
    ctx->r25 = lo;
    // 0x803ADA94: addu        $t0, $s4, $t9
    ctx->r8 = ADD32(ctx->r20, ctx->r25);
    // 0x803ADA98: addu        $t1, $t0, $s6
    ctx->r9 = ADD32(ctx->r8, ctx->r22);
    // 0x803ADA9C: lhu         $a0, 0x6F8($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X6F8);
    // 0x803ADAA0: jal         0x80035D2C
    // 0x803ADAA4: nop

    func_80035D2C(rdram, ctx);
        goto after_0;
    // 0x803ADAA4: nop

    after_0:
    // 0x803ADAA8: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x803ADAAC: addu        $t3, $s7, $t2
    ctx->r11 = ADD32(ctx->r23, ctx->r10);
    // 0x803ADAB0: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x803ADAB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803ADAB8: jalr        $t9
    // 0x803ADABC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x803ADABC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_1:
    // 0x803ADAC0: lb          $t4, 0x2C($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X2C);
    // 0x803ADAC4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803ADAC8: bne         $s3, $t4, L_803ADAE0
    if (ctx->r19 != ctx->r12) {
        // 0x803ADACC: nop
    
            goto L_803ADAE0;
    }
    // 0x803ADACC: nop

    // 0x803ADAD0: lb          $t5, 0x44($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X44);
    // 0x803ADAD4: nop

    // 0x803ADAD8: subu        $t6, $s3, $t5
    ctx->r14 = SUB32(ctx->r19, ctx->r13);
    // 0x803ADADC: sb          $t6, 0x44($s2)
    MEM_B(0X44, ctx->r18) = ctx->r14;
L_803ADAE0:
    // 0x803ADAE0: lhu         $t8, 0x48($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X48);
    // 0x803ADAE4: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x803ADAE8: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x803ADAEC: bne         $at, $zero, L_803ADA84
    if (ctx->r1 != 0) {
        // 0x803ADAF0: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_803ADA84;
    }
    // 0x803ADAF0: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_803ADAF4:
    // 0x803ADAF4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x803ADAF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803ADAFC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803ADB00: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803ADB04: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803ADB08: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803ADB0C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x803ADB10: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x803ADB14: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x803ADB18: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x803ADB1C: jr          $ra
    // 0x803ADB20: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803ADB20: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803ADB24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ADB24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803ADB28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803ADB2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803ADB30: jal         0x803ADF8C
    // 0x803ADB34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803ADF8C(rdram, ctx);
        goto after_0;
    // 0x803ADB34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803ADB38: jal         0x8006DF08
    // 0x803ADB3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006DF08(rdram, ctx);
        goto after_1;
    // 0x803ADB3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x803ADB40: jal         0x8006DF08
    // 0x803ADB44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006DF08(rdram, ctx);
        goto after_2;
    // 0x803ADB44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x803ADB48: jal         0x80037908
    // 0x803ADB4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_3;
    // 0x803ADB4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x803ADB50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803ADB54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803ADB58: jr          $ra
    // 0x803ADB5C: nop

    return;
    // 0x803ADB5C: nop

;}
RECOMP_FUNC void func_803ADB60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ADB60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803ADB64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803ADB68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803ADB6C: jal         0x803ADF8C
    // 0x803ADB70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803ADF8C(rdram, ctx);
        goto after_0;
    // 0x803ADB70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803ADB74: jal         0x8006DF08
    // 0x803ADB78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006DF08(rdram, ctx);
        goto after_1;
    // 0x803ADB78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x803ADB7C: jal         0x8006DF08
    // 0x803ADB80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006DF08(rdram, ctx);
        goto after_2;
    // 0x803ADB80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x803ADB84: jal         0x80037908
    // 0x803ADB88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_3;
    // 0x803ADB88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x803ADB8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803ADB90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803ADB94: jr          $ra
    // 0x803ADB98: nop

    return;
    // 0x803ADB98: nop

;}
RECOMP_FUNC void func_803ADB9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ADB9C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803ADBA0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803ADBA4: lb          $v1, -0x326C($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X326C);
    // 0x803ADBA8: lb          $t6, 0x2C($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2C);
    // 0x803ADBAC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x803ADBB0: bne         $t6, $zero, L_803ADBCC
    if (ctx->r14 != 0) {
        // 0x803ADBB4: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_803ADBCC;
    }
    // 0x803ADBB4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x803ADBB8: lbu         $t7, 0x4C($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4C);
    // 0x803ADBBC: nop

    // 0x803ADBC0: subu        $v0, $t7, $v1
    ctx->r2 = SUB32(ctx->r15, ctx->r3);
    // 0x803ADBC4: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x803ADBC8: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_803ADBCC:
    // 0x803ADBCC: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x803ADBD0: addu        $v1, $a0, $t9
    ctx->r3 = ADD32(ctx->r4, ctx->r25);
    // 0x803ADBD4: lh          $a1, 0x38($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X38);
    // 0x803ADBD8: nop

    // 0x803ADBDC: bne         $a1, $zero, L_803ADBEC
    if (ctx->r5 != 0) {
        // 0x803ADBE0: addiu       $t1, $a1, -0x1
        ctx->r9 = ADD32(ctx->r5, -0X1);
            goto L_803ADBEC;
    }
    // 0x803ADBE0: addiu       $t1, $a1, -0x1
    ctx->r9 = ADD32(ctx->r5, -0X1);
    // 0x803ADBE4: jr          $ra
    // 0x803ADBE8: sh          $t0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r8;
    return;
    // 0x803ADBE8: sh          $t0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r8;
L_803ADBEC:
    // 0x803ADBEC: sh          $t1, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r9;
    // 0x803ADBF0: jr          $ra
    // 0x803ADBF4: nop

    return;
    // 0x803ADBF4: nop

;}
RECOMP_FUNC void func_803ADBF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ADBF8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803ADBFC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803ADC00: lb          $v1, -0x326C($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X326C);
    // 0x803ADC04: lb          $t6, 0x2C($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2C);
    // 0x803ADC08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803ADC0C: bne         $t6, $zero, L_803ADC28
    if (ctx->r14 != 0) {
        // 0x803ADC10: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_803ADC28;
    }
    // 0x803ADC10: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x803ADC14: lbu         $t7, 0x4C($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4C);
    // 0x803ADC18: nop

    // 0x803ADC1C: subu        $v0, $t7, $v1
    ctx->r2 = SUB32(ctx->r15, ctx->r3);
    // 0x803ADC20: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x803ADC24: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_803ADC28:
    // 0x803ADC28: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x803ADC2C: addu        $a1, $a0, $t9
    ctx->r5 = ADD32(ctx->r4, ctx->r25);
    // 0x803ADC30: lh          $a2, 0x38($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X38);
    // 0x803ADC34: nop

    // 0x803ADC38: beq         $a2, $zero, L_803ADC58
    if (ctx->r6 == 0) {
        // 0x803ADC3C: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_803ADC58;
    }
    // 0x803ADC3C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x803ADC40: beq         $v1, $at, L_803ADC58
    if (ctx->r3 == ctx->r1) {
        // 0x803ADC44: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803ADC58;
    }
    // 0x803ADC44: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803ADC48: beq         $v1, $at, L_803ADC64
    if (ctx->r3 == ctx->r1) {
        // 0x803ADC4C: nop
    
            goto L_803ADC64;
    }
    // 0x803ADC4C: nop

    // 0x803ADC50: jr          $ra
    // 0x803ADC54: nop

    return;
    // 0x803ADC54: nop

L_803ADC58:
    // 0x803ADC58: addiu       $t0, $a2, 0x1
    ctx->r8 = ADD32(ctx->r6, 0X1);
    // 0x803ADC5C: jr          $ra
    // 0x803ADC60: sh          $t0, 0x38($a1)
    MEM_H(0X38, ctx->r5) = ctx->r8;
    return;
    // 0x803ADC60: sh          $t0, 0x38($a1)
    MEM_H(0X38, ctx->r5) = ctx->r8;
L_803ADC64:
    // 0x803ADC64: sh          $zero, 0x38($a1)
    MEM_H(0X38, ctx->r5) = 0;
    // 0x803ADC68: jr          $ra
    // 0x803ADC6C: nop

    return;
    // 0x803ADC6C: nop

;}
RECOMP_FUNC void func_803ADC70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ADC70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803ADC74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803ADC78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803ADC7C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803ADC80: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803ADC84: lb          $v1, -0x326C($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X326C);
    // 0x803ADC88: lb          $t6, 0x2C($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2C);
    // 0x803ADC8C: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803ADC90: bne         $t6, $zero, L_803ADCAC
    if (ctx->r14 != 0) {
        // 0x803ADC94: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_803ADCAC;
    }
    // 0x803ADC94: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x803ADC98: lbu         $t7, 0x4C($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4C);
    // 0x803ADC9C: nop

    // 0x803ADCA0: subu        $v0, $t7, $v1
    ctx->r2 = SUB32(ctx->r15, ctx->r3);
    // 0x803ADCA4: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x803ADCA8: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_803ADCAC:
    // 0x803ADCAC: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x803ADCB0: addu        $s0, $a0, $t9
    ctx->r16 = ADD32(ctx->r4, ctx->r25);
    // 0x803ADCB4: lh          $v1, 0x38($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X38);
    // 0x803ADCB8: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x803ADCBC: beq         $v1, $zero, L_803ADCE4
    if (ctx->r3 == 0) {
        // 0x803ADCC0: addu        $a1, $a1, $t0
        ctx->r5 = ADD32(ctx->r5, ctx->r8);
            goto L_803ADCE4;
    }
    // 0x803ADCC0: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x803ADCC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803ADCC8: beq         $v1, $at, L_803ADCFC
    if (ctx->r3 == ctx->r1) {
        // 0x803ADCCC: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_803ADCFC;
    }
    // 0x803ADCCC: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x803ADCD0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803ADCD4: beq         $v1, $at, L_803ADD1C
    if (ctx->r3 == ctx->r1) {
        // 0x803ADCD8: sll         $t2, $v0, 2
        ctx->r10 = S32(ctx->r2 << 2);
            goto L_803ADD1C;
    }
    // 0x803ADCD8: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x803ADCDC: b           L_803ADD3C
    // 0x803ADCE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803ADD3C;
    // 0x803ADCE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803ADCE4:
    // 0x803ADCE4: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x803ADCE8: lw          $a1, -0x2D0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2D0);
    // 0x803ADCEC: jal         0x8004C118
    // 0x803ADCF0: nop

    func_8004C118(rdram, ctx);
        goto after_0;
    // 0x803ADCF0: nop

    after_0:
    // 0x803ADCF4: b           L_803ADD38
    // 0x803ADCF8: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
        goto L_803ADD38;
    // 0x803ADCF8: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
L_803ADCFC:
    // 0x803ADCFC: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803ADD00: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x803ADD04: lw          $a1, -0x290($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X290);
    // 0x803ADD08: lb          $a0, 0x41($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X41);
    // 0x803ADD0C: jal         0x8004C118
    // 0x803ADD10: nop

    func_8004C118(rdram, ctx);
        goto after_1;
    // 0x803ADD10: nop

    after_1:
    // 0x803ADD14: b           L_803ADD38
    // 0x803ADD18: sh          $v0, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r2;
        goto L_803ADD38;
    // 0x803ADD18: sh          $v0, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r2;
L_803ADD1C:
    // 0x803ADD1C: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803ADD20: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x803ADD24: lw          $a1, -0x250($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X250);
    // 0x803ADD28: lb          $a0, 0x45($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X45);
    // 0x803ADD2C: jal         0x8004C118
    // 0x803ADD30: nop

    func_8004C118(rdram, ctx);
        goto after_2;
    // 0x803ADD30: nop

    after_2:
    // 0x803ADD34: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_803ADD38:
    // 0x803ADD38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803ADD3C:
    // 0x803ADD3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803ADD40: jr          $ra
    // 0x803ADD44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803ADD44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803ADD48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ADD48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803ADD4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803ADD50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803ADD54: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803ADD58: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803ADD5C: lb          $v1, -0x326C($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X326C);
    // 0x803ADD60: lb          $t6, 0x2C($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2C);
    // 0x803ADD64: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803ADD68: bne         $t6, $zero, L_803ADD84
    if (ctx->r14 != 0) {
        // 0x803ADD6C: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_803ADD84;
    }
    // 0x803ADD6C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x803ADD70: lbu         $t7, 0x4C($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4C);
    // 0x803ADD74: nop

    // 0x803ADD78: subu        $v0, $t7, $v1
    ctx->r2 = SUB32(ctx->r15, ctx->r3);
    // 0x803ADD7C: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x803ADD80: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_803ADD84:
    // 0x803ADD84: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x803ADD88: addu        $s0, $a0, $t9
    ctx->r16 = ADD32(ctx->r4, ctx->r25);
    // 0x803ADD8C: lh          $v1, 0x38($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X38);
    // 0x803ADD90: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x803ADD94: beq         $v1, $zero, L_803ADDBC
    if (ctx->r3 == 0) {
        // 0x803ADD98: addu        $a1, $a1, $t0
        ctx->r5 = ADD32(ctx->r5, ctx->r8);
            goto L_803ADDBC;
    }
    // 0x803ADD98: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x803ADD9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803ADDA0: beq         $v1, $at, L_803ADDD4
    if (ctx->r3 == ctx->r1) {
        // 0x803ADDA4: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_803ADDD4;
    }
    // 0x803ADDA4: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x803ADDA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803ADDAC: beq         $v1, $at, L_803ADDF4
    if (ctx->r3 == ctx->r1) {
        // 0x803ADDB0: sll         $t2, $v0, 2
        ctx->r10 = S32(ctx->r2 << 2);
            goto L_803ADDF4;
    }
    // 0x803ADDB0: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x803ADDB4: b           L_803ADE14
    // 0x803ADDB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803ADE14;
    // 0x803ADDB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803ADDBC:
    // 0x803ADDBC: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x803ADDC0: lw          $a1, -0x2D0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2D0);
    // 0x803ADDC4: jal         0x8004C08C
    // 0x803ADDC8: nop

    func_8004C08C(rdram, ctx);
        goto after_0;
    // 0x803ADDC8: nop

    after_0:
    // 0x803ADDCC: b           L_803ADE10
    // 0x803ADDD0: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
        goto L_803ADE10;
    // 0x803ADDD0: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
L_803ADDD4:
    // 0x803ADDD4: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803ADDD8: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x803ADDDC: lw          $a1, -0x290($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X290);
    // 0x803ADDE0: lb          $a0, 0x41($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X41);
    // 0x803ADDE4: jal         0x8004C08C
    // 0x803ADDE8: nop

    func_8004C08C(rdram, ctx);
        goto after_1;
    // 0x803ADDE8: nop

    after_1:
    // 0x803ADDEC: b           L_803ADE10
    // 0x803ADDF0: sh          $v0, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r2;
        goto L_803ADE10;
    // 0x803ADDF0: sh          $v0, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r2;
L_803ADDF4:
    // 0x803ADDF4: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803ADDF8: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x803ADDFC: lw          $a1, -0x250($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X250);
    // 0x803ADE00: lb          $a0, 0x45($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X45);
    // 0x803ADE04: jal         0x8004C08C
    // 0x803ADE08: nop

    func_8004C08C(rdram, ctx);
        goto after_2;
    // 0x803ADE08: nop

    after_2:
    // 0x803ADE0C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_803ADE10:
    // 0x803ADE10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803ADE14:
    // 0x803ADE14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803ADE18: jr          $ra
    // 0x803ADE1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803ADE1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803ADE20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ADE20: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803ADE24: lb          $t6, 0x2C($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2C);
    // 0x803ADE28: nop

    // 0x803ADE2C: bne         $t6, $zero, L_803ADE38
    if (ctx->r14 != 0) {
        // 0x803ADE30: nop
    
            goto L_803ADE38;
    }
    // 0x803ADE30: nop

    // 0x803ADE34: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
L_803ADE38:
    // 0x803ADE38: jr          $ra
    // 0x803ADE3C: nop

    return;
    // 0x803ADE3C: nop

;}
RECOMP_FUNC void func_803ADE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ADE40: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803ADE44: lb          $t6, 0x2C($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2C);
    // 0x803ADE48: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803ADE4C: bne         $t6, $zero, L_803ADE58
    if (ctx->r14 != 0) {
        // 0x803ADE50: nop
    
            goto L_803ADE58;
    }
    // 0x803ADE50: nop

    // 0x803ADE54: sb          $t7, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r15;
L_803ADE58:
    // 0x803ADE58: jr          $ra
    // 0x803ADE5C: nop

    return;
    // 0x803ADE5C: nop

;}
RECOMP_FUNC void func_803ADE60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ADE60: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803ADE64: jr          $ra
    // 0x803ADE68: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803ADE68: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803ADE6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ADE6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803ADE70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803ADE74: jal         0x8004DF70
    // 0x803ADE78: nop

    func_8004DF70(rdram, ctx);
        goto after_0;
    // 0x803ADE78: nop

    after_0:
    // 0x803ADE7C: beq         $v0, $zero, L_803ADEA0
    if (ctx->r2 == 0) {
        // 0x803ADE80: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803ADEA0;
    }
    // 0x803ADE80: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803ADE84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803ADE88: beq         $v1, $v0, L_803ADED0
    if (ctx->r3 == ctx->r2) {
        // 0x803ADE8C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803ADED0;
    }
    // 0x803ADE8C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803ADE90: beq         $v1, $at, L_803ADEA0
    if (ctx->r3 == ctx->r1) {
        // 0x803ADE94: lui         $a1, 0x801B
        ctx->r5 = S32(0X801B << 16);
            goto L_803ADEA0;
    }
    // 0x803ADE94: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x803ADE98: b           L_803ADEF0
    // 0x803ADE9C: addiu       $a1, $a1, 0x1CF0
    ctx->r5 = ADD32(ctx->r5, 0X1CF0);
        goto L_803ADEF0;
    // 0x803ADE9C: addiu       $a1, $a1, 0x1CF0
    ctx->r5 = ADD32(ctx->r5, 0X1CF0);
L_803ADEA0:
    // 0x803ADEA0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x803ADEA4: addiu       $a1, $a1, 0x1CF0
    ctx->r5 = ADD32(ctx->r5, 0X1CF0);
    // 0x803ADEA8: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x803ADEAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803ADEB0: sb          $zero, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = 0;
    // 0x803ADEB4: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x803ADEB8: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x803ADEBC: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803ADEC0: sh          $v0, 0x48($t7)
    MEM_H(0X48, ctx->r15) = ctx->r2;
    // 0x803ADEC4: sb          $zero, 0x70A($v1)
    MEM_B(0X70A, ctx->r3) = 0;
    // 0x803ADEC8: b           L_803ADEF0
    // 0x803ADECC: sb          $v0, 0x722($v1)
    MEM_B(0X722, ctx->r3) = ctx->r2;
        goto L_803ADEF0;
    // 0x803ADECC: sb          $v0, 0x722($v1)
    MEM_B(0X722, ctx->r3) = ctx->r2;
L_803ADED0:
    // 0x803ADED0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x803ADED4: addiu       $a1, $a1, 0x1CF0
    ctx->r5 = ADD32(ctx->r5, 0X1CF0);
    // 0x803ADED8: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x803ADEDC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803ADEE0: sb          $v0, 0x2C($t8)
    MEM_B(0X2C, ctx->r24) = ctx->r2;
    // 0x803ADEE4: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x803ADEE8: nop

    // 0x803ADEEC: sh          $t9, 0x48($t1)
    MEM_H(0X48, ctx->r9) = ctx->r25;
L_803ADEF0:
    // 0x803ADEF0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803ADEF4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x803ADEF8: addiu       $a2, $a2, -0x32B0
    ctx->r6 = ADD32(ctx->r6, -0X32B0);
    // 0x803ADEFC: addiu       $a3, $a3, -0x2CF0
    ctx->r7 = ADD32(ctx->r7, -0X2CF0);
    // 0x803ADF00: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803ADF04: addiu       $t0, $zero, 0xA94
    ctx->r8 = ADD32(0, 0XA94);
L_803ADF08:
    // 0x803ADF08: multu       $v1, $t0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803ADF0C: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x803ADF10: addu        $t2, $a2, $v1
    ctx->r10 = ADD32(ctx->r6, ctx->r3);
    // 0x803ADF14: lbu         $t3, 0x46($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X46);
    // 0x803ADF18: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x803ADF1C: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x803ADF20: sh          $t3, 0x3C($t5)
    MEM_H(0X3C, ctx->r13) = ctx->r11;
    // 0x803ADF24: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x803ADF28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803ADF2C: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x803ADF30: andi        $t5, $v1, 0xFF
    ctx->r13 = ctx->r3 & 0XFF;
    // 0x803ADF34: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x803ADF38: mflo        $t6
    ctx->r14 = lo;
    // 0x803ADF3C: addu        $a0, $a3, $t6
    ctx->r4 = ADD32(ctx->r7, ctx->r14);
    // 0x803ADF40: lbu         $t7, 0x8A7($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X8A7);
    // 0x803ADF44: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x803ADF48: addiu       $t8, $t7, -0x7
    ctx->r24 = ADD32(ctx->r15, -0X7);
    // 0x803ADF4C: sh          $t8, 0x40($t1)
    MEM_H(0X40, ctx->r9) = ctx->r24;
    // 0x803ADF50: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x803ADF54: lbu         $t2, 0x8A8($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X8A8);
    // 0x803ADF58: addu        $t3, $t4, $v0
    ctx->r11 = ADD32(ctx->r12, ctx->r2);
    // 0x803ADF5C: bne         $at, $zero, L_803ADF08
    if (ctx->r1 != 0) {
        // 0x803ADF60: sh          $t2, 0x44($t3)
        MEM_H(0X44, ctx->r11) = ctx->r10;
            goto L_803ADF08;
    }
    // 0x803ADF60: sh          $t2, 0x44($t3)
    MEM_H(0X44, ctx->r11) = ctx->r10;
    // 0x803ADF64: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x803ADF68: nop

    // 0x803ADF6C: sb          $zero, 0x4C($t6)
    MEM_B(0X4C, ctx->r14) = 0;
    // 0x803ADF70: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x803ADF74: nop

    // 0x803ADF78: sb          $zero, 0x4D($t7)
    MEM_B(0X4D, ctx->r15) = 0;
    // 0x803ADF7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803ADF80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803ADF84: jr          $ra
    // 0x803ADF88: nop

    return;
    // 0x803ADF88: nop

;}
RECOMP_FUNC void func_803ADF8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803ADF8C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803ADF90: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x803ADF94: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x803ADF98: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x803ADF9C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803ADFA0: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x803ADFA4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803ADFA8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803ADFAC: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x803ADFB0: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x803ADFB4: lui         $s7, 0x801B
    ctx->r23 = S32(0X801B << 16);
    // 0x803ADFB8: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x803ADFBC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x803ADFC0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803ADFC4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803ADFC8: addiu       $s7, $s7, 0x1CF0
    ctx->r23 = ADD32(ctx->r23, 0X1CF0);
    // 0x803ADFCC: addiu       $s5, $s5, -0x2CF0
    ctx->r21 = ADD32(ctx->r21, -0X2CF0);
    // 0x803ADFD0: addiu       $s4, $s4, -0x32B0
    ctx->r20 = ADD32(ctx->r20, -0X32B0);
    // 0x803ADFD4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803ADFD8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x803ADFDC: addiu       $s6, $zero, 0xA94
    ctx->r22 = ADD32(0, 0XA94);
L_803ADFE0:
    // 0x803ADFE0: sll         $s3, $s0, 1
    ctx->r19 = S32(ctx->r16 << 1);
    // 0x803ADFE4: addu        $t6, $a0, $s3
    ctx->r14 = ADD32(ctx->r4, ctx->r19);
    // 0x803ADFE8: lh          $t7, 0x3C($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X3C);
    // 0x803ADFEC: addu        $s1, $s4, $s0
    ctx->r17 = ADD32(ctx->r20, ctx->r16);
    // 0x803ADFF0: sb          $t7, 0x46($s1)
    MEM_B(0X46, ctx->r17) = ctx->r15;
    // 0x803ADFF4: sb          $zero, 0xF($s4)
    MEM_B(0XF, ctx->r20) = 0;
    // 0x803ADFF8: lbu         $t8, 0x46($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X46);
    // 0x803ADFFC: nop

    // 0x803AE000: bne         $t8, $zero, L_803AE038
    if (ctx->r24 != 0) {
        // 0x803AE004: nop
    
            goto L_803AE038;
    }
    // 0x803AE004: nop

    // 0x803AE008: jal         0x8001CA74
    // 0x803AE00C: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    func_8001CA74(rdram, ctx);
        goto after_0;
    // 0x803AE00C: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    after_0:
    // 0x803AE010: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x803AE014: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x803AE018: sra         $t0, $a2, 16
    ctx->r8 = S32(SIGNED(ctx->r6) >> 16);
    // 0x803AE01C: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803AE020: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x803AE024: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x803AE028: jal         0x80038620
    // 0x803AE02C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80038620(rdram, ctx);
        goto after_1;
    // 0x803AE02C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x803AE030: b           L_803AE06C
    // 0x803AE034: nop

        goto L_803AE06C;
    // 0x803AE034: nop

L_803AE038:
    // 0x803AE038: jal         0x8001CA74
    // 0x803AE03C: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    func_8001CA74(rdram, ctx);
        goto after_2;
    // 0x803AE03C: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    after_2:
    // 0x803AE040: lbu         $a1, 0x46($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X46);
    // 0x803AE044: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x803AE048: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x803AE04C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x803AE050: andi        $t2, $a1, 0xFF
    ctx->r10 = ctx->r5 & 0XFF;
    // 0x803AE054: sra         $t3, $a2, 16
    ctx->r11 = S32(SIGNED(ctx->r6) >> 16);
    // 0x803AE058: sra         $t1, $a0, 24
    ctx->r9 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803AE05C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x803AE060: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x803AE064: jal         0x80038620
    // 0x803AE068: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    func_80038620(rdram, ctx);
        goto after_3;
    // 0x803AE068: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    after_3:
L_803AE06C:
    // 0x803AE06C: multu       $s0, $s6
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803AE070: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    // 0x803AE074: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803AE078: addu        $v0, $a0, $s3
    ctx->r2 = ADD32(ctx->r4, ctx->r19);
    // 0x803AE07C: lh          $t5, 0x40($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X40);
    // 0x803AE080: andi        $s2, $s0, 0xFF
    ctx->r18 = ctx->r16 & 0XFF;
    // 0x803AE084: addiu       $t6, $t5, 0x7
    ctx->r14 = ADD32(ctx->r13, 0X7);
    // 0x803AE088: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x803AE08C: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x803AE090: mflo        $t4
    ctx->r12 = lo;
    // 0x803AE094: addu        $v1, $s5, $t4
    ctx->r3 = ADD32(ctx->r21, ctx->r12);
    // 0x803AE098: sb          $t6, 0x8A7($v1)
    MEM_B(0X8A7, ctx->r3) = ctx->r14;
    // 0x803AE09C: lh          $t7, 0x44($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X44);
    // 0x803AE0A0: bne         $at, $zero, L_803ADFE0
    if (ctx->r1 != 0) {
        // 0x803AE0A4: sb          $t7, 0x8A8($v1)
        MEM_B(0X8A8, ctx->r3) = ctx->r15;
            goto L_803ADFE0;
    }
    // 0x803AE0A4: sb          $t7, 0x8A8($v1)
    MEM_B(0X8A8, ctx->r3) = ctx->r15;
    // 0x803AE0A8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x803AE0AC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803AE0B0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803AE0B4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803AE0B8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803AE0BC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x803AE0C0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x803AE0C4: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x803AE0C8: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x803AE0CC: jr          $ra
    // 0x803AE0D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803AE0D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803AE0D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE0D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AE0D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AE0DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803AE0E0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803AE0E4: nop

    // 0x803AE0E8: lbu         $v1, 0x4C($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4C);
    // 0x803AE0EC: lbu         $t6, 0x4D($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4D);
    // 0x803AE0F0: nop

    // 0x803AE0F4: beq         $v1, $t6, L_803AE114
    if (ctx->r3 == ctx->r14) {
        // 0x803AE0F8: nop
    
            goto L_803AE114;
    }
    // 0x803AE0F8: nop

    // 0x803AE0FC: jal         0x80035770
    // 0x803AE100: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803AE100: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x803AE104: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x803AE108: nop

    // 0x803AE10C: lbu         $v1, 0x4C($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4C);
    // 0x803AE110: nop

L_803AE114:
    // 0x803AE114: sb          $v1, 0x4D($v0)
    MEM_B(0X4D, ctx->r2) = ctx->r3;
    // 0x803AE118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AE11C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AE120: jr          $ra
    // 0x803AE124: nop

    return;
    // 0x803AE124: nop

;}
RECOMP_FUNC void func_803AE128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AE12C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AE130: lui         $a1, 0x803E
    ctx->r5 = S32(0X803E << 16);
    // 0x803AE134: addiu       $a1, $a1, -0x60B0
    ctx->r5 = ADD32(ctx->r5, -0X60B0);
    // 0x803AE138: jal         0x8004C2C8
    // 0x803AE13C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004C2C8(rdram, ctx);
        goto after_0;
    // 0x803AE13C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803AE140: lui         $a1, 0x803E
    ctx->r5 = S32(0X803E << 16);
    // 0x803AE144: addiu       $a1, $a1, -0x60A4
    ctx->r5 = ADD32(ctx->r5, -0X60A4);
    // 0x803AE148: jal         0x8004C2C8
    // 0x803AE14C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004C2C8(rdram, ctx);
        goto after_1;
    // 0x803AE14C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x803AE150: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AE154: lbu         $a0, -0x326B($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326B);
    // 0x803AE158: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x803AE15C: jal         0x8004BA70
    // 0x803AE160: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    func_8004BA70(rdram, ctx);
        goto after_2;
    // 0x803AE160: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_2:
    // 0x803AE164: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AE168: lbu         $a0, -0x225C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X225C);
    // 0x803AE16C: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    // 0x803AE170: jal         0x8004BA70
    // 0x803AE174: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    func_8004BA70(rdram, ctx);
        goto after_3;
    // 0x803AE174: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_3:
    // 0x803AE178: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803AE17C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x803AE180: jal         0x8004BB64
    // 0x803AE184: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    func_8004BB64(rdram, ctx);
        goto after_4;
    // 0x803AE184: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_4:
    // 0x803AE188: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803AE18C: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    // 0x803AE190: jal         0x8004BB64
    // 0x803AE194: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    func_8004BB64(rdram, ctx);
        goto after_5;
    // 0x803AE194: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_5:
    // 0x803AE198: lui         $v0, 0x803E
    ctx->r2 = S32(0X803E << 16);
    // 0x803AE19C: addiu       $v0, $v0, -0x60E0
    ctx->r2 = ADD32(ctx->r2, -0X60E0);
    // 0x803AE1A0: lh          $a1, 0x4($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X4);
    // 0x803AE1A4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AE1A8: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x803AE1AC: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x803AE1B0: lb          $a0, -0x326B($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326B);
    // 0x803AE1B4: lh          $a2, 0x6($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X6);
    // 0x803AE1B8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x803AE1BC: jal         0x80039F88
    // 0x803AE1C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F88(rdram, ctx);
        goto after_6;
    // 0x803AE1C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x803AE1C4: lui         $v0, 0x803E
    ctx->r2 = S32(0X803E << 16);
    // 0x803AE1C8: addiu       $v0, $v0, -0x60D4
    ctx->r2 = ADD32(ctx->r2, -0X60D4);
    // 0x803AE1CC: lh          $a1, 0x4($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X4);
    // 0x803AE1D0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AE1D4: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x803AE1D8: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x803AE1DC: lbu         $a0, -0x225C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X225C);
    // 0x803AE1E0: lh          $a2, 0x6($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X6);
    // 0x803AE1E4: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x803AE1E8: jal         0x80039F88
    // 0x803AE1EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80039F88(rdram, ctx);
        goto after_7;
    // 0x803AE1EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x803AE1F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AE1F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AE1F8: jr          $ra
    // 0x803AE1FC: nop

    return;
    // 0x803AE1FC: nop

;}
RECOMP_FUNC void func_803AE200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE200: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803AE204: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803AE208: andi        $s2, $a0, 0xFF
    ctx->r18 = ctx->r4 & 0XFF;
    // 0x803AE20C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x803AE210: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803AE214: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AE218: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803AE21C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803AE220: jal         0x80029354
    // 0x803AE224: addiu       $a0, $a0, -0x1D78
    ctx->r4 = ADD32(ctx->r4, -0X1D78);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803AE224: addiu       $a0, $a0, -0x1D78
    ctx->r4 = ADD32(ctx->r4, -0X1D78);
    after_0:
    // 0x803AE228: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x803AE22C: sh          $s2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r18;
    // 0x803AE230: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x803AE234: jal         0x80029F00
    // 0x803AE238: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80029F00(rdram, ctx);
        goto after_1;
    // 0x803AE238: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x803AE23C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803AE240: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803AE244: lw          $s0, 0x14($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X14);
    // 0x803AE248: nop

L_803AE24C:
    // 0x803AE24C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803AE250: jal         0x8004BDA0
    // 0x803AE254: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    func_8004BDA0(rdram, ctx);
        goto after_2;
    // 0x803AE254: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    after_2:
    // 0x803AE258: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803AE25C: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x803AE260: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x803AE264: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803AE268: bne         $at, $zero, L_803AE24C
    if (ctx->r1 != 0) {
        // 0x803AE26C: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_803AE24C;
    }
    // 0x803AE26C: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x803AE270: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803AE274: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803AE278: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803AE27C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803AE280: jr          $ra
    // 0x803AE284: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803AE284: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803AE288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE288: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AE28C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803AE290: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803AE294: lbu         $a3, 0x29($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X29);
    // 0x803AE298: lw          $s0, 0x8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X8);
    // 0x803AE29C: sll         $t6, $a3, 1
    ctx->r14 = S32(ctx->r7 << 1);
    // 0x803AE2A0: addu        $a2, $s0, $t6
    ctx->r6 = ADD32(ctx->r16, ctx->r14);
    // 0x803AE2A4: lh          $t0, 0x3C($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X3C);
    // 0x803AE2A8: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x803AE2AC: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x803AE2B0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803AE2B4: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x803AE2B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803AE2BC: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803AE2C0: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x803AE2C4: lh          $t1, 0x40($a2)
    ctx->r9 = MEM_H(ctx->r6, 0X40);
    // 0x803AE2C8: lw          $v0, -0x390($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X390);
    // 0x803AE2CC: sll         $t3, $a3, 2
    ctx->r11 = S32(ctx->r7 << 2);
    // 0x803AE2D0: lh          $t2, 0x44($a2)
    ctx->r10 = MEM_H(ctx->r6, 0X44);
    // 0x803AE2D4: addu        $t3, $t3, $a3
    ctx->r11 = ADD32(ctx->r11, ctx->r7);
    // 0x803AE2D8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803AE2DC: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x803AE2E0: sw          $v0, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r2;
    // 0x803AE2E4: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803AE2E8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x803AE2EC: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x803AE2F0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x803AE2F4: lw          $v0, -0x360($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X360);
    // 0x803AE2F8: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x803AE2FC: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x803AE300: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803AE304: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x803AE308: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x803AE30C: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803AE310: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x803AE314: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x803AE318: lw          $v0, -0x338($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X338);
    // 0x803AE31C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x803AE320: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803AE324: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x803AE328: lb          $v0, 0x2C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2C);
    // 0x803AE32C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x803AE330: beq         $v0, $zero, L_803AE364
    if (ctx->r2 == 0) {
        // 0x803AE334: nop
    
            goto L_803AE364;
    }
    // 0x803AE334: nop

    // 0x803AE338: beq         $v0, $a0, L_803AE354
    if (ctx->r2 == ctx->r4) {
        // 0x803AE33C: andi        $a2, $a3, 0xFF
        ctx->r6 = ctx->r7 & 0XFF;
            goto L_803AE354;
    }
    // 0x803AE33C: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    // 0x803AE340: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803AE344: beq         $v0, $at, L_803AE410
    if (ctx->r2 == ctx->r1) {
        // 0x803AE348: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803AE410;
    }
    // 0x803AE348: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803AE34C: b           L_803AE410
    // 0x803AE350: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803AE410;
    // 0x803AE350: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803AE354:
    // 0x803AE354: jal         0x803AE41C
    // 0x803AE358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_803AE41C(rdram, ctx);
        goto after_0;
    // 0x803AE358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x803AE35C: b           L_803AE410
    // 0x803AE360: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803AE410;
    // 0x803AE360: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803AE364:
    // 0x803AE364: beq         $a3, $zero, L_803AE380
    if (ctx->r7 == 0) {
        // 0x803AE368: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_803AE380;
    }
    // 0x803AE368: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x803AE36C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803AE370: beq         $v0, $a0, L_803AE3CC
    if (ctx->r2 == ctx->r4) {
        // 0x803AE374: nop
    
            goto L_803AE3CC;
    }
    // 0x803AE374: nop

    // 0x803AE378: b           L_803AE410
    // 0x803AE37C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803AE410;
    // 0x803AE37C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803AE380:
    // 0x803AE380: lbu         $t9, 0x4C($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X4C);
    // 0x803AE384: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803AE388: bne         $a0, $t9, L_803AE3BC
    if (ctx->r4 != ctx->r25) {
        // 0x803AE38C: andi        $a2, $a3, 0xFF
        ctx->r6 = ctx->r7 & 0XFF;
            goto L_803AE3BC;
    }
    // 0x803AE38C: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    // 0x803AE390: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803AE394: addiu       $a0, $zero, 0x414
    ctx->r4 = ADD32(0, 0X414);
L_803AE398:
    // 0x803AE398: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803AE39C: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x803AE3A0: sh          $a0, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r4;
    // 0x803AE3A4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x803AE3A8: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x803AE3AC: bne         $at, $zero, L_803AE398
    if (ctx->r1 != 0) {
        // 0x803AE3B0: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_803AE398;
    }
    // 0x803AE3B0: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x803AE3B4: b           L_803AE410
    // 0x803AE3B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803AE410;
    // 0x803AE3B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803AE3BC:
    // 0x803AE3BC: jal         0x803AE41C
    // 0x803AE3C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_803AE41C(rdram, ctx);
        goto after_1;
    // 0x803AE3C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803AE3C4: b           L_803AE410
    // 0x803AE3C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803AE410;
    // 0x803AE3C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803AE3CC:
    // 0x803AE3CC: lbu         $t4, 0x4C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X4C);
    // 0x803AE3D0: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    // 0x803AE3D4: bne         $a0, $t4, L_803AE3EC
    if (ctx->r4 != ctx->r12) {
        // 0x803AE3D8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803AE3EC;
    }
    // 0x803AE3D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803AE3DC: jal         0x803AE41C
    // 0x803AE3E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_803AE41C(rdram, ctx);
        goto after_2;
    // 0x803AE3E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x803AE3E4: b           L_803AE410
    // 0x803AE3E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803AE410;
    // 0x803AE3E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803AE3EC:
    // 0x803AE3EC: addiu       $a0, $zero, 0x414
    ctx->r4 = ADD32(0, 0X414);
L_803AE3F0:
    // 0x803AE3F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803AE3F4: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x803AE3F8: sh          $a0, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r4;
    // 0x803AE3FC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x803AE400: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x803AE404: bne         $at, $zero, L_803AE3F0
    if (ctx->r1 != 0) {
        // 0x803AE408: or          $v0, $t5, $zero
        ctx->r2 = ctx->r13 | 0;
            goto L_803AE3F0;
    }
    // 0x803AE408: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x803AE40C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803AE410:
    // 0x803AE410: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803AE414: jr          $ra
    // 0x803AE418: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803AE418: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803AE41C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE41C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x803AE420: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x803AE424: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803AE428: addu        $a3, $a0, $t7
    ctx->r7 = ADD32(ctx->r4, ctx->r15);
    // 0x803AE42C: addiu       $a0, $zero, 0x210
    ctx->r4 = ADD32(0, 0X210);
    // 0x803AE430: addiu       $a2, $zero, 0x414
    ctx->r6 = ADD32(0, 0X414);
    // 0x803AE434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803AE438: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803AE43C:
    // 0x803AE43C: lh          $t8, 0x38($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X38);
    // 0x803AE440: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803AE444: bne         $v1, $t8, L_803AE454
    if (ctx->r3 != ctx->r24) {
        // 0x803AE448: nop
    
            goto L_803AE454;
    }
    // 0x803AE448: nop

    // 0x803AE44C: b           L_803AE458
    // 0x803AE450: sh          $a0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r4;
        goto L_803AE458;
    // 0x803AE450: sh          $a0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r4;
L_803AE454:
    // 0x803AE454: sh          $a2, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r6;
L_803AE458:
    // 0x803AE458: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x803AE45C: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x803AE460: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x803AE464: bne         $at, $zero, L_803AE43C
    if (ctx->r1 != 0) {
        // 0x803AE468: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_803AE43C;
    }
    // 0x803AE468: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x803AE46C: jr          $ra
    // 0x803AE470: nop

    return;
    // 0x803AE470: nop

;}
RECOMP_FUNC void func_803AE474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE474: jr          $ra
    // 0x803AE478: nop

    return;
    // 0x803AE478: nop

;}
RECOMP_FUNC void func_803AE47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE47C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803AE480: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x803AE484: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x803AE488: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AE48C: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x803AE490: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x803AE494: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x803AE498: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x803AE49C: addiu       $a0, $a0, -0x1AAC
    ctx->r4 = ADD32(ctx->r4, -0X1AAC);
    // 0x803AE4A0: jal         0x800293DC
    // 0x803AE4A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803AE4A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x803AE4A8: lbu         $v1, 0x43($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X43);
    // 0x803AE4AC: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x803AE4B0: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x803AE4B4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803AE4B8: beq         $s0, $s3, L_803AE538
    if (ctx->r16 == ctx->r19) {
        // 0x803AE4BC: sh          $v1, 0x28($v0)
        MEM_H(0X28, ctx->r2) = ctx->r3;
            goto L_803AE538;
    }
    // 0x803AE4BC: sh          $v1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r3;
    // 0x803AE4C0: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x803AE4C4: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x803AE4C8: lui         $t7, 0x803B
    ctx->r15 = S32(0X803B << 16);
    // 0x803AE4CC: addiu       $t7, $t7, -0xDC
    ctx->r15 = ADD32(ctx->r15, -0XDC);
    // 0x803AE4D0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803AE4D4: addu        $s2, $t6, $t7
    ctx->r18 = ADD32(ctx->r14, ctx->r15);
L_803AE4D8:
    // 0x803AE4D8: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x803AE4DC: addu        $v0, $s2, $t8
    ctx->r2 = ADD32(ctx->r18, ctx->r24);
    // 0x803AE4E0: lh          $a2, 0x0($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X0);
    // 0x803AE4E4: lh          $a3, 0x2($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X2);
    // 0x803AE4E8: addiu       $t9, $zero, 0x68
    ctx->r25 = ADD32(0, 0X68);
    // 0x803AE4EC: addiu       $t0, $zero, 0x23
    ctx->r8 = ADD32(0, 0X23);
    // 0x803AE4F0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803AE4F4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803AE4F8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803AE4FC: addiu       $t4, $zero, 0xB3
    ctx->r12 = ADD32(0, 0XB3);
    // 0x803AE500: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x803AE504: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x803AE508: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x803AE50C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x803AE510: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x803AE514: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803AE518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803AE51C: jal         0x8004A5E4
    // 0x803AE520: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8004A5E4(rdram, ctx);
        goto after_1;
    // 0x803AE520: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_1:
    // 0x803AE524: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803AE528: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803AE52C: andi        $t5, $s1, 0xFF
    ctx->r13 = ctx->r17 & 0XFF;
    // 0x803AE530: bne         $s0, $s3, L_803AE4D8
    if (ctx->r16 != ctx->r19) {
        // 0x803AE534: or          $s1, $t5, $zero
        ctx->r17 = ctx->r13 | 0;
            goto L_803AE4D8;
    }
    // 0x803AE534: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
L_803AE538:
    // 0x803AE538: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x803AE53C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x803AE540: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x803AE544: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x803AE548: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x803AE54C: jr          $ra
    // 0x803AE550: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803AE550: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803AE554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE554: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803AE558: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803AE55C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803AE560: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803AE564: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803AE568: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803AE56C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803AE570: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x803AE574: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x803AE578: lh          $t7, 0x28($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X28);
    // 0x803AE57C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803AE580: andi        $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 & 0XFF;
    // 0x803AE584: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x803AE588: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x803AE58C: sb          $t7, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r15;
    // 0x803AE590: lbu         $v0, 0x39($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X39);
    // 0x803AE594: beq         $a1, $s3, L_803AE5D4
    if (ctx->r5 == ctx->r19) {
        // 0x803AE598: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803AE5D4;
    }
    // 0x803AE598: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803AE59C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_803AE5A0:
    // 0x803AE5A0: bne         $s2, $s1, L_803AE5B8
    if (ctx->r18 != ctx->r17) {
        // 0x803AE5A4: nop
    
            goto L_803AE5B8;
    }
    // 0x803AE5A4: nop

    // 0x803AE5A8: jal         0x803AE670
    // 0x803AE5AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_803AE670(rdram, ctx);
        goto after_0;
    // 0x803AE5AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x803AE5B0: b           L_803AE5C4
    // 0x803AE5B4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_803AE5C4;
    // 0x803AE5B4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_803AE5B8:
    // 0x803AE5B8: jal         0x803AE6A0
    // 0x803AE5BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_803AE6A0(rdram, ctx);
        goto after_1;
    // 0x803AE5BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803AE5C0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_803AE5C4:
    // 0x803AE5C4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803AE5C8: andi        $t2, $s1, 0xFF
    ctx->r10 = ctx->r17 & 0XFF;
    // 0x803AE5CC: bne         $s0, $s3, L_803AE5A0
    if (ctx->r16 != ctx->r19) {
        // 0x803AE5D0: or          $s1, $t2, $zero
        ctx->r17 = ctx->r10 | 0;
            goto L_803AE5A0;
    }
    // 0x803AE5D0: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
L_803AE5D4:
    // 0x803AE5D4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803AE5D8: nop

    // 0x803AE5DC: lb          $t4, 0x2C($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X2C);
    // 0x803AE5E0: nop

    // 0x803AE5E4: bne         $t4, $zero, L_803AE658
    if (ctx->r12 != 0) {
        // 0x803AE5E8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803AE658;
    }
    // 0x803AE5E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803AE5EC: lbu         $v0, 0x4C($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X4C);
    // 0x803AE5F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803AE5F4: beq         $v0, $zero, L_803AE634
    if (ctx->r2 == 0) {
        // 0x803AE5F8: nop
    
            goto L_803AE634;
    }
    // 0x803AE5F8: nop

    // 0x803AE5FC: bne         $v0, $v1, L_803AE658
    if (ctx->r2 != ctx->r3) {
        // 0x803AE600: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803AE658;
    }
    // 0x803AE600: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803AE604: lbu         $v0, 0x2E($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2E);
    // 0x803AE608: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AE60C: beq         $v0, $zero, L_803AE624
    if (ctx->r2 == 0) {
        // 0x803AE610: nop
    
            goto L_803AE624;
    }
    // 0x803AE610: nop

    // 0x803AE614: beq         $v0, $v1, L_803AE658
    if (ctx->r2 == ctx->r3) {
        // 0x803AE618: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803AE658;
    }
    // 0x803AE618: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803AE61C: b           L_803AE658
    // 0x803AE620: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803AE658;
    // 0x803AE620: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803AE624:
    // 0x803AE624: jal         0x8002A468
    // 0x803AE628: addiu       $a0, $a0, -0x1960
    ctx->r4 = ADD32(ctx->r4, -0X1960);
    func_8002A468(rdram, ctx);
        goto after_2;
    // 0x803AE628: addiu       $a0, $a0, -0x1960
    ctx->r4 = ADD32(ctx->r4, -0X1960);
    after_2:
    // 0x803AE62C: b           L_803AE658
    // 0x803AE630: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_803AE658;
    // 0x803AE630: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803AE634:
    // 0x803AE634: lbu         $v0, 0x2E($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2E);
    // 0x803AE638: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803AE63C: beq         $v0, $zero, L_803AE658
    if (ctx->r2 == 0) {
        // 0x803AE640: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_803AE658;
    }
    // 0x803AE640: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803AE644: bne         $v0, $v1, L_803AE654
    if (ctx->r2 != ctx->r3) {
        // 0x803AE648: lui         $a0, 0x803B
        ctx->r4 = S32(0X803B << 16);
            goto L_803AE654;
    }
    // 0x803AE648: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AE64C: jal         0x8002A468
    // 0x803AE650: addiu       $a0, $a0, -0x1960
    ctx->r4 = ADD32(ctx->r4, -0X1960);
    func_8002A468(rdram, ctx);
        goto after_3;
    // 0x803AE650: addiu       $a0, $a0, -0x1960
    ctx->r4 = ADD32(ctx->r4, -0X1960);
    after_3:
L_803AE654:
    // 0x803AE654: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_803AE658:
    // 0x803AE658: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803AE65C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803AE660: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803AE664: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803AE668: jr          $ra
    // 0x803AE66C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803AE66C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803AE670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE670: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AE674: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803AE678: addiu       $t6, $zero, 0xB3
    ctx->r14 = ADD32(0, 0XB3);
    // 0x803AE67C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803AE680: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803AE684: addiu       $a2, $zero, 0xBB
    ctx->r6 = ADD32(0, 0XBB);
    // 0x803AE688: jal         0x8004A5C0
    // 0x803AE68C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004A5C0(rdram, ctx);
        goto after_0;
    // 0x803AE68C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x803AE690: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803AE694: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AE698: jr          $ra
    // 0x803AE69C: nop

    return;
    // 0x803AE69C: nop

;}
RECOMP_FUNC void func_803AE6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE6A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AE6A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803AE6A8: addiu       $t6, $zero, 0xB3
    ctx->r14 = ADD32(0, 0XB3);
    // 0x803AE6AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803AE6B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803AE6B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803AE6B8: jal         0x8004A5C0
    // 0x803AE6BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8004A5C0(rdram, ctx);
        goto after_0;
    // 0x803AE6BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x803AE6C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803AE6C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AE6C8: jr          $ra
    // 0x803AE6CC: nop

    return;
    // 0x803AE6CC: nop

;}
RECOMP_FUNC void func_803AE6D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE6D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803AE6D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803AE6D8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803AE6DC: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x803AE6E0: jal         0x800293DC
    // 0x803AE6E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803AE6E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803AE6E8: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803AE6EC: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AE6F0: addiu       $a1, $a1, -0x248
    ctx->r5 = ADD32(ctx->r5, -0X248);
    // 0x803AE6F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803AE6F8: jal         0x8004A298
    // 0x803AE6FC: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x803AE6FC: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_1:
    // 0x803AE700: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803AE704: addiu       $t6, $zero, 0xB3
    ctx->r14 = ADD32(0, 0XB3);
    // 0x803AE708: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803AE70C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803AE710: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803AE714: jal         0x8004A5C0
    // 0x803AE718: addiu       $a3, $zero, 0x2C
    ctx->r7 = ADD32(0, 0X2C);
    func_8004A5C0(rdram, ctx);
        goto after_2;
    // 0x803AE718: addiu       $a3, $zero, 0x2C
    ctx->r7 = ADD32(0, 0X2C);
    after_2:
    // 0x803AE71C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803AE720: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AE724: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x803AE728: addiu       $a1, $a1, -0x23E
    ctx->r5 = ADD32(ctx->r5, -0X23E);
    // 0x803AE72C: jal         0x8004A34C
    // 0x803AE730: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A34C(rdram, ctx);
        goto after_3;
    // 0x803AE730: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x803AE734: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803AE738: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803AE73C: jr          $ra
    // 0x803AE740: nop

    return;
    // 0x803AE740: nop

;}
RECOMP_FUNC void func_803AE744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE744: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x803AE748: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803AE74C: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x803AE750: nop

    // 0x803AE754: lw          $v0, 0x8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8);
    // 0x803AE758: nop

    // 0x803AE75C: lb          $t8, 0x2C($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X2C);
    // 0x803AE760: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803AE764: bne         $t8, $zero, L_803AE774
    if (ctx->r24 != 0) {
        // 0x803AE768: nop
    
            goto L_803AE774;
    }
    // 0x803AE768: nop

    // 0x803AE76C: jr          $ra
    // 0x803AE770: sb          $t9, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r25;
    return;
    // 0x803AE770: sb          $t9, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r25;
L_803AE774:
    // 0x803AE774: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x803AE778: jr          $ra
    // 0x803AE77C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803AE77C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803AE780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE780: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AE784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AE788: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AE78C: jal         0x80036234
    // 0x803AE790: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803AE790: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803AE794: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803AE798: jal         0x80035FF0
    // 0x803AE79C: addiu       $a0, $a0, 0x1AA4
    ctx->r4 = ADD32(ctx->r4, 0X1AA4);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803AE79C: addiu       $a0, $a0, 0x1AA4
    ctx->r4 = ADD32(ctx->r4, 0X1AA4);
    after_1:
    // 0x803AE7A0: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803AE7A4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803AE7A8: jal         0x80049E40
    // 0x803AE7AC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x803AE7AC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x803AE7B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803AE7B4: jal         0x800356B4
    // 0x803AE7B8: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    func_800356B4(rdram, ctx);
        goto after_3;
    // 0x803AE7B8: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    after_3:
    // 0x803AE7BC: jal         0x803AEA28
    // 0x803AE7C0: nop

    func_803AEA28(rdram, ctx);
        goto after_4;
    // 0x803AE7C0: nop

    after_4:
    // 0x803AE7C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803AE7C8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803AE7CC: jal         0x80021214
    // 0x803AE7D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_5;
    // 0x803AE7D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x803AE7D4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x803AE7D8: addiu       $t6, $t6, -0x6CE4
    ctx->r14 = ADD32(ctx->r14, -0X6CE4);
    // 0x803AE7DC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x803AE7E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803AE7E4: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803AE7E8: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x803AE7EC: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803AE7F0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803AE7F4: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x803AE7F8: jal         0x8004B078
    // 0x803AE7FC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_6;
    // 0x803AE7FC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_6:
    // 0x803AE800: jal         0x803AEBCC
    // 0x803AE804: nop

    func_803AEBCC(rdram, ctx);
        goto after_7;
    // 0x803AE804: nop

    after_7:
    // 0x803AE808: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AE80C: jal         0x8002AAC0
    // 0x803AE810: addiu       $a0, $a0, 0x204
    ctx->r4 = ADD32(ctx->r4, 0X204);
    func_8002AAC0(rdram, ctx);
        goto after_8;
    // 0x803AE810: addiu       $a0, $a0, 0x204
    ctx->r4 = ADD32(ctx->r4, 0X204);
    after_8:
    // 0x803AE814: jal         0x8006FB58
    // 0x803AE818: nop

    func_8006FB58(rdram, ctx);
        goto after_9;
    // 0x803AE818: nop

    after_9:
    // 0x803AE81C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AE820: jal         0x80029220
    // 0x803AE824: addiu       $a0, $a0, -0x12B0
    ctx->r4 = ADD32(ctx->r4, -0X12B0);
    func_80029220(rdram, ctx);
        goto after_10;
    // 0x803AE824: addiu       $a0, $a0, -0x12B0
    ctx->r4 = ADD32(ctx->r4, -0X12B0);
    after_10:
    // 0x803AE828: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AE82C: jal         0x8004B970
    // 0x803AE830: addiu       $a0, $a0, 0x194
    ctx->r4 = ADD32(ctx->r4, 0X194);
    func_8004B970(rdram, ctx);
        goto after_11;
    // 0x803AE830: addiu       $a0, $a0, 0x194
    ctx->r4 = ADD32(ctx->r4, 0X194);
    after_11:
    // 0x803AE834: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AE838: jal         0x803AEC5C
    // 0x803AE83C: addiu       $a0, $a0, 0x16C
    ctx->r4 = ADD32(ctx->r4, 0X16C);
    func_803AEC5C(rdram, ctx);
        goto after_12;
    // 0x803AE83C: addiu       $a0, $a0, 0x16C
    ctx->r4 = ADD32(ctx->r4, 0X16C);
    after_12:
    // 0x803AE840: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AE844: addiu       $a0, $a0, -0x17A0
    ctx->r4 = ADD32(ctx->r4, -0X17A0);
    // 0x803AE848: jal         0x8004A9B4
    // 0x803AE84C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_13;
    // 0x803AE84C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_13:
    // 0x803AE850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AE854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AE858: jr          $ra
    // 0x803AE85C: nop

    return;
    // 0x803AE85C: nop

;}
RECOMP_FUNC void func_803AE860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE860: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AE864: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AE868: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AE86C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x803AE870: lb          $t6, 0x2C($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2C);
    // 0x803AE874: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x803AE878: lhu         $a2, 0x6F8($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X6F8);
    // 0x803AE87C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AE880: bne         $t6, $at, L_803AE89C
    if (ctx->r14 != ctx->r1) {
        // 0x803AE884: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_803AE89C;
    }
    // 0x803AE884: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x803AE888: lhu         $t7, 0x710($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X710);
    // 0x803AE88C: nop

    // 0x803AE890: or          $a2, $a2, $t7
    ctx->r6 = ctx->r6 | ctx->r15;
    // 0x803AE894: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x803AE898: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
L_803AE89C:
    // 0x803AE89C: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    // 0x803AE8A0: jal         0x80035D2C
    // 0x803AE8A4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035D2C(rdram, ctx);
        goto after_0;
    // 0x803AE8A4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x803AE8A8: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x803AE8AC: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803AE8B0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803AE8B4: lw          $t9, 0x2C8($at)
    ctx->r25 = MEM_W(ctx->r1, 0X2C8);
    // 0x803AE8B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803AE8BC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803AE8C0: jalr        $t9
    // 0x803AE8C4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x803AE8C4: nop

    after_1:
    // 0x803AE8C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AE8CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AE8D0: jr          $ra
    // 0x803AE8D4: nop

    return;
    // 0x803AE8D4: nop

;}
RECOMP_FUNC void func_803AE8D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE8D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AE8DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AE8E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AE8E4: jal         0x800372F4
    // 0x803AE8E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800372F4(rdram, ctx);
        goto after_0;
    // 0x803AE8E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803AE8EC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x803AE8F0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803AE8F4: lh          $t7, 0x38($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X38);
    // 0x803AE8F8: jal         0x803AEAB8
    // 0x803AE8FC: sb          $t7, -0x3083($at)
    MEM_B(-0X3083, ctx->r1) = ctx->r15;
    func_803AEAB8(rdram, ctx);
        goto after_1;
    // 0x803AE8FC: sb          $t7, -0x3083($at)
    MEM_B(-0X3083, ctx->r1) = ctx->r15;
    after_1:
    // 0x803AE900: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803AE904: lbu         $t8, -0x32A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X32A4);
    // 0x803AE908: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x803AE90C: bne         $t8, $at, L_803AE924
    if (ctx->r24 != ctx->r1) {
        // 0x803AE910: nop
    
            goto L_803AE924;
    }
    // 0x803AE910: nop

    // 0x803AE914: jal         0x80037908
    // 0x803AE918: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_2;
    // 0x803AE918: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x803AE91C: b           L_803AE930
    // 0x803AE920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AE930;
    // 0x803AE920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AE924:
    // 0x803AE924: jal         0x80037AB8
    // 0x803AE928: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037AB8(rdram, ctx);
        goto after_3;
    // 0x803AE928: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x803AE92C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AE930:
    // 0x803AE930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AE934: jr          $ra
    // 0x803AE938: nop

    return;
    // 0x803AE938: nop

;}
RECOMP_FUNC void func_803AE93C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE93C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AE940: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AE944: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AE948: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AE94C: lh          $t6, 0x38($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X38);
    // 0x803AE950: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803AE954: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803AE958: jal         0x80037908
    // 0x803AE95C: sb          $t6, -0x3083($at)
    MEM_B(-0X3083, ctx->r1) = ctx->r14;
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x803AE95C: sb          $t6, -0x3083($at)
    MEM_B(-0X3083, ctx->r1) = ctx->r14;
    after_0:
    // 0x803AE960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AE964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AE968: jr          $ra
    // 0x803AE96C: nop

    return;
    // 0x803AE96C: nop

;}
RECOMP_FUNC void func_803AE970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AE974: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AE978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AE97C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803AE980: lb          $a0, 0x39($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X39);
    // 0x803AE984: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AE988: addiu       $a1, $a1, 0x150
    ctx->r5 = ADD32(ctx->r5, 0X150);
    // 0x803AE98C: jal         0x8004BF30
    // 0x803AE990: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004BF30(rdram, ctx);
        goto after_0;
    // 0x803AE990: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803AE994: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803AE998: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803AE99C: sh          $v0, 0x38($a2)
    MEM_H(0X38, ctx->r6) = ctx->r2;
    // 0x803AE9A0: sb          $t6, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r14;
    // 0x803AE9A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AE9A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AE9AC: jr          $ra
    // 0x803AE9B0: nop

    return;
    // 0x803AE9B0: nop

;}
RECOMP_FUNC void func_803AE9B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE9B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AE9B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AE9BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AE9C0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803AE9C4: lb          $a0, 0x39($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X39);
    // 0x803AE9C8: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AE9CC: addiu       $a1, $a1, 0x150
    ctx->r5 = ADD32(ctx->r5, 0X150);
    // 0x803AE9D0: jal         0x8004BFBC
    // 0x803AE9D4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8004BFBC(rdram, ctx);
        goto after_0;
    // 0x803AE9D4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x803AE9D8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x803AE9DC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803AE9E0: sh          $v0, 0x38($a2)
    MEM_H(0X38, ctx->r6) = ctx->r2;
    // 0x803AE9E4: sb          $t6, 0x40($a2)
    MEM_B(0X40, ctx->r6) = ctx->r14;
    // 0x803AE9E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AE9EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AE9F0: jr          $ra
    // 0x803AE9F4: nop

    return;
    // 0x803AE9F4: nop

;}
RECOMP_FUNC void func_803AE9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AE9F8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803AE9FC: jr          $ra
    // 0x803AEA00: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803AEA00: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803AEA04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AEA04: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803AEA08: jr          $ra
    // 0x803AEA0C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803AEA0C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803AEA10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AEA10: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803AEA14: jr          $ra
    // 0x803AEA18: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803AEA18: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803AEA1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AEA1C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803AEA20: jr          $ra
    // 0x803AEA24: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803AEA24: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803AEA28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AEA28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AEA2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AEA30: jal         0x8004DF70
    // 0x803AEA34: nop

    func_8004DF70(rdram, ctx);
        goto after_0;
    // 0x803AEA34: nop

    after_0:
    // 0x803AEA38: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803AEA3C: addiu       $a0, $a0, 0x1CF0
    ctx->r4 = ADD32(ctx->r4, 0X1CF0);
    // 0x803AEA40: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x803AEA44: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803AEA48: sb          $v0, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = ctx->r2;
    // 0x803AEA4C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x803AEA50: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803AEA54: lb          $t7, 0x2C($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X2C);
    // 0x803AEA58: addiu       $v0, $v0, -0x3088
    ctx->r2 = ADD32(ctx->r2, -0X3088);
    // 0x803AEA5C: bne         $t7, $at, L_803AEA6C
    if (ctx->r15 != ctx->r1) {
        // 0x803AEA60: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_803AEA6C;
    }
    // 0x803AEA60: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803AEA64: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803AEA68: sb          $zero, -0x3066($at)
    MEM_B(-0X3066, ctx->r1) = 0;
L_803AEA6C:
    // 0x803AEA6C: lb          $t8, 0x5($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X5);
    // 0x803AEA70: nop

    // 0x803AEA74: sh          $t8, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r24;
    // 0x803AEA78: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x803AEA7C: lb          $t9, 0x5($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X5);
    // 0x803AEA80: nop

    // 0x803AEA84: sh          $t9, 0x3A($t0)
    MEM_H(0X3A, ctx->r8) = ctx->r25;
    // 0x803AEA88: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x803AEA8C: nop

    // 0x803AEA90: lh          $t1, 0x38($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X38);
    // 0x803AEA94: nop

    // 0x803AEA98: slti        $at, $t1, 0x8
    ctx->r1 = SIGNED(ctx->r9) < 0X8 ? 1 : 0;
    // 0x803AEA9C: bne         $at, $zero, L_803AEAAC
    if (ctx->r1 != 0) {
        // 0x803AEAA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803AEAAC;
    }
    // 0x803AEAA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AEAA4: sh          $t2, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r10;
    // 0x803AEAA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AEAAC:
    // 0x803AEAAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AEAB0: jr          $ra
    // 0x803AEAB4: nop

    return;
    // 0x803AEAB4: nop

;}
RECOMP_FUNC void func_803AEAB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AEAB8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AEABC: addiu       $a0, $a0, -0x2CF0
    ctx->r4 = ADD32(ctx->r4, -0X2CF0);
    // 0x803AEAC0: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x803AEAC4: lui         $v1, 0x8040
    ctx->r3 = S32(0X8040 << 16);
    // 0x803AEAC8: addiu       $v1, $v1, -0x58A8
    ctx->r3 = ADD32(ctx->r3, -0X58A8);
    // 0x803AEACC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803AEAD0: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x803AEAD4: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x803AEAD8: lb          $v0, -0x3083($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3083);
    // 0x803AEADC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AEAE0: bne         $v0, $t8, L_803AEAF8
    if (ctx->r2 != ctx->r24) {
        // 0x803AEAE4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_803AEAF8;
    }
    // 0x803AEAE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AEAE8: jal         0x803AEB84
    // 0x803AEAEC: nop

    func_803AEB84(rdram, ctx);
        goto after_0;
    // 0x803AEAEC: nop

    after_0:
    // 0x803AEAF0: b           L_803AEB78
    // 0x803AEAF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AEB78;
    // 0x803AEAF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AEAF8:
    // 0x803AEAF8: lbu         $t9, 0xA94($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XA94);
    // 0x803AEAFC: nop

    // 0x803AEB00: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x803AEB04: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x803AEB08: nop

    // 0x803AEB0C: bne         $v0, $t1, L_803AEB24
    if (ctx->r2 != ctx->r9) {
        // 0x803AEB10: nop
    
            goto L_803AEB24;
    }
    // 0x803AEB10: nop

    // 0x803AEB14: jal         0x803AEBA8
    // 0x803AEB18: nop

    func_803AEBA8(rdram, ctx);
        goto after_1;
    // 0x803AEB18: nop

    after_1:
    // 0x803AEB1C: b           L_803AEB78
    // 0x803AEB20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AEB78;
    // 0x803AEB20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AEB24:
    // 0x803AEB24: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803AEB28: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803AEB2C: lbu         $t2, 0x53($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X53);
    // 0x803AEB30: nop

    // 0x803AEB34: bne         $t2, $zero, L_803AEB4C
    if (ctx->r10 != 0) {
        // 0x803AEB38: nop
    
            goto L_803AEB4C;
    }
    // 0x803AEB38: nop

    // 0x803AEB3C: jal         0x803AEB84
    // 0x803AEB40: nop

    func_803AEB84(rdram, ctx);
        goto after_2;
    // 0x803AEB40: nop

    after_2:
    // 0x803AEB44: b           L_803AEB78
    // 0x803AEB48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AEB78;
    // 0x803AEB48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AEB4C:
    // 0x803AEB4C: lbu         $t3, 0x54($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X54);
    // 0x803AEB50: nop

    // 0x803AEB54: bne         $t3, $zero, L_803AEB6C
    if (ctx->r11 != 0) {
        // 0x803AEB58: nop
    
            goto L_803AEB6C;
    }
    // 0x803AEB58: nop

    // 0x803AEB5C: jal         0x803AEBA8
    // 0x803AEB60: nop

    func_803AEBA8(rdram, ctx);
        goto after_3;
    // 0x803AEB60: nop

    after_3:
    // 0x803AEB64: b           L_803AEB78
    // 0x803AEB68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AEB78;
    // 0x803AEB68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AEB6C:
    // 0x803AEB6C: jal         0x803AEB84
    // 0x803AEB70: nop

    func_803AEB84(rdram, ctx);
        goto after_4;
    // 0x803AEB70: nop

    after_4:
    // 0x803AEB74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AEB78:
    // 0x803AEB78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AEB7C: jr          $ra
    // 0x803AEB80: nop

    return;
    // 0x803AEB80: nop

;}
RECOMP_FUNC void func_803AEB84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AEB84: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803AEB88: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x803AEB8C: lhu         $t6, 0x8($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X8);
    // 0x803AEB90: lhu         $t8, 0xA9C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XA9C);
    // 0x803AEB94: andi        $t7, $t6, 0xFFF7
    ctx->r15 = ctx->r14 & 0XFFF7;
    // 0x803AEB98: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x803AEB9C: sh          $t7, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r15;
    // 0x803AEBA0: jr          $ra
    // 0x803AEBA4: sh          $t9, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r25;
    return;
    // 0x803AEBA4: sh          $t9, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_803AEBA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AEBA8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803AEBAC: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x803AEBB0: lhu         $t6, 0x8($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X8);
    // 0x803AEBB4: lhu         $t8, 0xA9C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XA9C);
    // 0x803AEBB8: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x803AEBBC: andi        $t9, $t8, 0xFFF7
    ctx->r25 = ctx->r24 & 0XFFF7;
    // 0x803AEBC0: sh          $t7, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r15;
    // 0x803AEBC4: jr          $ra
    // 0x803AEBC8: sh          $t9, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r25;
    return;
    // 0x803AEBC8: sh          $t9, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_803AEBCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AEBCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AEBD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AEBD4: jal         0x8004BD64
    // 0x803AEBD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x803AEBD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803AEBDC: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803AEBE0: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x803AEBE4: addiu       $t6, $t6, -0x13F8
    ctx->r14 = ADD32(ctx->r14, -0X13F8);
    // 0x803AEBE8: lui         $t7, 0x803D
    ctx->r15 = S32(0X803D << 16);
    // 0x803AEBEC: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x803AEBF0: addiu       $t7, $t7, -0x2FA8
    ctx->r15 = ADD32(ctx->r15, -0X2FA8);
    // 0x803AEBF4: sw          $t7, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r15;
    // 0x803AEBF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AEBFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AEC00: jr          $ra
    // 0x803AEC04: nop

    return;
    // 0x803AEC04: nop

;}
RECOMP_FUNC void func_803AEC08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AEC08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AEC0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AEC10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AEC14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AEC18: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x803AEC1C: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803AEC20: lh          $a3, 0x38($v1)
    ctx->r7 = MEM_H(ctx->r3, 0X38);
    // 0x803AEC24: addiu       $t8, $t8, 0x310
    ctx->r24 = ADD32(ctx->r24, 0X310);
    // 0x803AEC28: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x803AEC2C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x803AEC30: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803AEC34: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803AEC38: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803AEC3C: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    // 0x803AEC40: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x803AEC44: jal         0x8004CD44
    // 0x803AEC48: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x803AEC48: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    after_0:
    // 0x803AEC4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AEC50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AEC54: jr          $ra
    // 0x803AEC58: nop

    return;
    // 0x803AEC58: nop

;}
RECOMP_FUNC void func_803AEC5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AEC5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AEC60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AEC64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AEC68: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803AEC6C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x803AEC70: jal         0x800293DC
    // 0x803AEC74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803AEC74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803AEC78: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803AEC7C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x803AEC80: jal         0x8004A298
    // 0x803AEC84: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x803AEC84: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x803AEC88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AEC8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AEC90: jr          $ra
    // 0x803AEC94: nop

    return;
    // 0x803AEC94: nop

;}
RECOMP_FUNC void func_803AEC98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AEC98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AEC9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AECA0: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x803AECA4: nop

    // 0x803AECA8: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x803AECAC: nop

    // 0x803AECB0: lw          $v0, 0x8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8);
    // 0x803AECB4: nop

    // 0x803AECB8: lh          $a1, 0x3A($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X3A);
    // 0x803AECBC: jal         0x803AED08
    // 0x803AECC0: nop

    func_803AED08(rdram, ctx);
        goto after_0;
    // 0x803AECC0: nop

    after_0:
    // 0x803AECC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AECC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AECCC: jr          $ra
    // 0x803AECD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803AECD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803AECD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AECD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AECD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AECDC: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803AECE0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803AECE4: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803AECE8: nop

    // 0x803AECEC: lh          $a1, 0x3A($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X3A);
    // 0x803AECF0: jal         0x803AED08
    // 0x803AECF4: nop

    func_803AED08(rdram, ctx);
        goto after_0;
    // 0x803AECF4: nop

    after_0:
    // 0x803AECF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AECFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AED00: jr          $ra
    // 0x803AED04: nop

    return;
    // 0x803AED04: nop

;}
RECOMP_FUNC void func_803AED08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AED08: sll         $a3, $a1, 16
    ctx->r7 = S32(ctx->r5 << 16);
    // 0x803AED0C: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x803AED10: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803AED14: addiu       $t8, $t8, 0x2F0
    ctx->r24 = ADD32(ctx->r24, 0X2F0);
    // 0x803AED18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803AED1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AED20: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x803AED24: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x803AED28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AED2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AED30: sh          $t9, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r25;
    // 0x803AED34: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    // 0x803AED38: jal         0x80021408
    // 0x803AED3C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_80021408(rdram, ctx);
        goto after_0;
    // 0x803AED3C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x803AED40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AED44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AED48: jr          $ra
    // 0x803AED4C: nop

    return;
    // 0x803AED4C: nop

;}
RECOMP_FUNC void func_803AED50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AED50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AED54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AED58: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803AED5C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803AED60: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AED64: lb          $t6, 0x40($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X40);
    // 0x803AED68: addiu       $a0, $a0, 0x2BC
    ctx->r4 = ADD32(ctx->r4, 0X2BC);
    // 0x803AED6C: beq         $t6, $zero, L_803AED88
    if (ctx->r14 == 0) {
        // 0x803AED70: nop
    
            goto L_803AED88;
    }
    // 0x803AED70: nop

    // 0x803AED74: jal         0x8002AAC0
    // 0x803AED78: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8002AAC0(rdram, ctx);
        goto after_0;
    // 0x803AED78: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x803AED7C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x803AED80: nop

    // 0x803AED84: sb          $zero, 0x40($v0)
    MEM_B(0X40, ctx->r2) = 0;
L_803AED88:
    // 0x803AED88: lb          $t7, 0x41($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X41);
    // 0x803AED8C: nop

    // 0x803AED90: beq         $t7, $zero, L_803AEDE4
    if (ctx->r15 == 0) {
        // 0x803AED94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803AEDE4;
    }
    // 0x803AED94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AED98: jal         0x80029520
    // 0x803AED9C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80029520(rdram, ctx);
        goto after_1;
    // 0x803AED9C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x803AEDA0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x803AEDA4: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x803AEDA8: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803AEDAC: sb          $zero, 0x41($v0)
    MEM_B(0X41, ctx->r2) = 0;
    // 0x803AEDB0: lbu         $t8, 0x70A($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X70A);
    // 0x803AEDB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AEDB8: andi        $t9, $t8, 0xFFFE
    ctx->r25 = ctx->r24 & 0XFFFE;
    // 0x803AEDBC: sb          $t9, 0x70A($v1)
    MEM_B(0X70A, ctx->r3) = ctx->r25;
    // 0x803AEDC0: lb          $t0, 0x2C($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X2C);
    // 0x803AEDC4: addiu       $a0, $zero, -0x2
    ctx->r4 = ADD32(0, -0X2);
    // 0x803AEDC8: bne         $t0, $at, L_803AEDE4
    if (ctx->r8 != ctx->r1) {
        // 0x803AEDCC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803AEDE4;
    }
    // 0x803AEDCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AEDD0: lbu         $t1, 0x722($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X722);
    // 0x803AEDD4: nop

    // 0x803AEDD8: and         $t2, $t1, $a0
    ctx->r10 = ctx->r9 & ctx->r4;
    // 0x803AEDDC: sb          $t2, 0x722($v1)
    MEM_B(0X722, ctx->r3) = ctx->r10;
    // 0x803AEDE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AEDE4:
    // 0x803AEDE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AEDE8: jr          $ra
    // 0x803AEDEC: nop

    return;
    // 0x803AEDEC: nop

;}
RECOMP_FUNC void func_803AEDF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AEDF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AEDF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AEDF8: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x803AEDFC: nop

    // 0x803AEE00: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x803AEE04: nop

    // 0x803AEE08: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x803AEE0C: nop

    // 0x803AEE10: lw          $v0, 0x8($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X8);
    // 0x803AEE14: nop

    // 0x803AEE18: lh          $a1, 0x38($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X38);
    // 0x803AEE1C: jal         0x803AED08
    // 0x803AEE20: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_803AED08(rdram, ctx);
        goto after_0;
    // 0x803AEE20: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x803AEE24: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x803AEE28: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x803AEE2C: lbu         $t9, 0x70A($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X70A);
    // 0x803AEE30: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x803AEE34: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x803AEE38: sb          $t0, 0x70A($v1)
    MEM_B(0X70A, ctx->r3) = ctx->r8;
    // 0x803AEE3C: lb          $t1, 0x2C($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X2C);
    // 0x803AEE40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AEE44: bne         $t1, $at, L_803AEE60
    if (ctx->r9 != ctx->r1) {
        // 0x803AEE48: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803AEE60;
    }
    // 0x803AEE48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AEE4C: lbu         $t2, 0x722($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X722);
    // 0x803AEE50: nop

    // 0x803AEE54: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x803AEE58: sb          $t3, 0x722($v1)
    MEM_B(0X722, ctx->r3) = ctx->r11;
    // 0x803AEE5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AEE60:
    // 0x803AEE60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AEE64: jr          $ra
    // 0x803AEE68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803AEE68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803AEE6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AEE6C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803AEE70: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x803AEE74: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803AEE78: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x803AEE7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803AEE80: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x803AEE84: nop

    // 0x803AEE88: lw          $v1, 0x8($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X8);
    // 0x803AEE8C: nop

    // 0x803AEE90: lh          $t0, 0x38($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X38);
    // 0x803AEE94: sb          $t9, 0x41($v1)
    MEM_B(0X41, ctx->r3) = ctx->r25;
    // 0x803AEE98: jr          $ra
    // 0x803AEE9C: sh          $t0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r8;
    return;
    // 0x803AEE9C: sh          $t0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r8;
;}
RECOMP_FUNC void func_803AEEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AEEA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AEEA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AEEA8: lbu         $v0, 0x1F($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1F);
    // 0x803AEEAC: lui         $t7, 0x803B
    ctx->r15 = S32(0X803B << 16);
    // 0x803AEEB0: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x803AEEB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803AEEB8: lhu         $t7, 0x304($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X304);
    // 0x803AEEBC: lui         $t9, 0x803B
    ctx->r25 = S32(0X803B << 16);
    // 0x803AEEC0: addiu       $t9, $t9, 0x310
    ctx->r25 = ADD32(ctx->r25, 0X310);
    // 0x803AEEC4: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x803AEEC8: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x803AEECC: sh          $t7, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r15;
    // 0x803AEED0: lh          $a2, 0x2($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X2);
    // 0x803AEED4: lh          $a1, 0x0($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X0);
    // 0x803AEED8: jal         0x8002AB30
    // 0x803AEEDC: nop

    func_8002AB30(rdram, ctx);
        goto after_0;
    // 0x803AEEDC: nop

    after_0:
    // 0x803AEEE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AEEE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AEEE8: jr          $ra
    // 0x803AEEEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803AEEEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803AEEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AEEF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AEEF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AEEF8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803AEEFC: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803AEF00: lbu         $v1, 0x71($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X71);
    // 0x803AEF04: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803AEF08: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803AEF0C: lh          $t7, 0x38($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X38);
    // 0x803AEF10: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x803AEF14: bne         $v1, $t7, L_803AEF68
    if (ctx->r3 != ctx->r15) {
        // 0x803AEF18: nop
    
            goto L_803AEF68;
    }
    // 0x803AEF18: nop

    // 0x803AEF1C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803AEF20: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x803AEF24: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    // 0x803AEF28: jal         0x8002135C
    // 0x803AEF2C: sb          $v1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r3;
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x803AEF2C: sb          $v1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r3;
    after_0:
    // 0x803AEF30: lbu         $v1, 0x1F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1F);
    // 0x803AEF34: lui         $t9, 0x803B
    ctx->r25 = S32(0X803B << 16);
    // 0x803AEF38: addiu       $t9, $t9, 0x310
    ctx->r25 = ADD32(ctx->r25, 0X310);
    // 0x803AEF3C: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x803AEF40: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x803AEF44: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803AEF48: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803AEF4C: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    // 0x803AEF50: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x803AEF54: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803AEF58: jal         0x8002AB30
    // 0x803AEF5C: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
    func_8002AB30(rdram, ctx);
        goto after_1;
    // 0x803AEF5C: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
    after_1:
    // 0x803AEF60: b           L_803AEFA0
    // 0x803AEF64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AEFA0;
    // 0x803AEF64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AEF68:
    // 0x803AEF68: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x803AEF6C: jal         0x8002135C
    // 0x803AEF70: sb          $v1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r3;
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803AEF70: sb          $v1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r3;
    after_2:
    // 0x803AEF74: lbu         $v1, 0x1F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1F);
    // 0x803AEF78: lui         $t3, 0x803B
    ctx->r11 = S32(0X803B << 16);
    // 0x803AEF7C: addiu       $t3, $t3, 0x310
    ctx->r11 = ADD32(ctx->r11, 0X310);
    // 0x803AEF80: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x803AEF84: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x803AEF88: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803AEF8C: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803AEF90: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803AEF94: jal         0x8002AB30
    // 0x803AEF98: nop

    func_8002AB30(rdram, ctx);
        goto after_3;
    // 0x803AEF98: nop

    after_3:
    // 0x803AEF9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AEFA0:
    // 0x803AEFA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AEFA4: jr          $ra
    // 0x803AEFA8: nop

    return;
    // 0x803AEFA8: nop

;}
RECOMP_FUNC void func_803AEFAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AEFAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803AEFB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AEFB4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803AEFB8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803AEFBC: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x803AEFC0: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803AEFC4: lw          $v1, 0x8($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X8);
    // 0x803AEFC8: addiu       $t8, $t8, 0x324
    ctx->r24 = ADD32(ctx->r24, 0X324);
    // 0x803AEFCC: lh          $a3, 0x38($v1)
    ctx->r7 = MEM_H(ctx->r3, 0X38);
    // 0x803AEFD0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803AEFD4: sll         $t0, $a3, 2
    ctx->r8 = S32(ctx->r7 << 2);
    // 0x803AEFD8: addu        $v0, $t0, $t8
    ctx->r2 = ADD32(ctx->r8, ctx->r24);
    // 0x803AEFDC: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803AEFE0: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803AEFE4: jal         0x8002AB30
    // 0x803AEFE8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_8002AB30(rdram, ctx);
        goto after_0;
    // 0x803AEFE8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_0:
    // 0x803AEFEC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803AEFF0: lui         $t9, 0x803B
    ctx->r25 = S32(0X803B << 16);
    // 0x803AEFF4: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x803AEFF8: lw          $t9, 0x180($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X180);
    // 0x803AEFFC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803AF000: nop

    // 0x803AF004: sw          $t9, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r25;
    // 0x803AF008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AF00C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803AF010: jr          $ra
    // 0x803AF014: nop

    return;
    // 0x803AF014: nop

;}
