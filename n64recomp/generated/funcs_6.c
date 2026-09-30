#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8001A0CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A0CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001A0D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001A0D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001A0D8: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8001A0DC: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8001A0E0: addiu       $a2, $a2, -0x77B0
    ctx->r6 = ADD32(ctx->r6, -0X77B0);
    // 0x8001A0E4: addiu       $a1, $a1, -0x77C8
    ctx->r5 = ADD32(ctx->r5, -0X77C8);
    // 0x8001A0E8: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    // 0x8001A0EC: jal         0x80083710
    // 0x8001A0F0: addiu       $a3, $zero, 0x320
    ctx->r7 = ADD32(0, 0X320);
    osCreatePiManager_recomp(rdram, ctx);
        goto after_0;
    // 0x8001A0F0: addiu       $a3, $zero, 0x320
    ctx->r7 = ADD32(0, 0X320);
    after_0:
    // 0x8001A0F4: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8001A0F8: addiu       $t6, $t6, -0x77C8
    ctx->r14 = ADD32(ctx->r14, -0X77C8);
    // 0x8001A0FC: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8001A100: lui         $a2, 0x8002
    ctx->r6 = S32(0X8002 << 16);
    // 0x8001A104: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8001A108: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x8001A10C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8001A110: addiu       $a2, $a2, -0x5EA0
    ctx->r6 = ADD32(ctx->r6, -0X5EA0);
    // 0x8001A114: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    // 0x8001A118: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8001A11C: jal         0x80081CB0
    // 0x8001A120: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    osCreateThread_recomp(rdram, ctx);
        goto after_1;
    // 0x8001A120: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x8001A124: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8001A128: jal         0x80081E00
    // 0x8001A12C: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    osStartThread_recomp(rdram, ctx);
        goto after_2;
    // 0x8001A12C: addiu       $a0, $a0, 0x688
    ctx->r4 = ADD32(ctx->r4, 0X688);
    after_2:
    // 0x8001A130: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001A134: jal         0x800838A0
    // 0x8001A138: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    osSetThreadPri_recomp(rdram, ctx);
        goto after_3;
    // 0x8001A138: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_8001A13C:
    // 0x8001A13C: b           L_8001A13C
    pause_self(rdram);
    // 0x8001A140: nop

    // 0x8001A144: nop

    // 0x8001A148: nop

    // 0x8001A14C: nop

    // 0x8001A150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A154: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001A158: jr          $ra
    // 0x8001A15C: nop

    return;
    // 0x8001A15C: nop

;}
RECOMP_FUNC void func_8001A160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A160: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001A164: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8001A168: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8001A16C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8001A170: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8001A174: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8001A178: jal         0x80021870
    // 0x8001A17C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80021870(rdram, ctx);
        goto after_0;
    // 0x8001A17C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x8001A180: jal         0x80036330
    // 0x8001A184: nop

    func_80036330(rdram, ctx);
        goto after_1;
    // 0x8001A184: nop

    after_1:
    // 0x8001A188: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8001A18C: jal         0x80027B60
    // 0x8001A190: sw          $zero, -0x2FA0($at)
    MEM_W(-0X2FA0, ctx->r1) = 0;
    func_80027B60(rdram, ctx);
        goto after_2;
    // 0x8001A190: sw          $zero, -0x2FA0($at)
    MEM_W(-0X2FA0, ctx->r1) = 0;
    after_2:
    // 0x8001A194: jal         0x80063B94
    // 0x8001A198: nop

    func_80063B94(rdram, ctx);
        goto after_3;
    // 0x8001A198: nop

    after_3:
    // 0x8001A19C: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x8001A1A0: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x8001A1A4: addiu       $s1, $s1, -0x4A30
    ctx->r17 = ADD32(ctx->r17, -0X4A30);
    // 0x8001A1A8: addiu       $s0, $s0, 0x500
    ctx->r16 = ADD32(ctx->r16, 0X500);
    // 0x8001A1AC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8001A1B0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8001A1B4: addiu       $a1, $a1, -0x69F8
    ctx->r5 = ADD32(ctx->r5, -0X69F8);
    // 0x8001A1B8: addiu       $a0, $a0, -0x6938
    ctx->r4 = ADD32(ctx->r4, -0X6938);
    // 0x8001A1BC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8001A1C0: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x8001A1C4: jal         0x8001B004
    // 0x8001A1C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001B004(rdram, ctx);
        goto after_4;
    // 0x8001A1C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x8001A1CC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8001A1D0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8001A1D4: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8001A1D8: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x8001A1DC: addiu       $a3, $a3, -0x4230
    ctx->r7 = ADD32(ctx->r7, -0X4230);
    // 0x8001A1E0: addiu       $a2, $a2, 0x1930
    ctx->r6 = ADD32(ctx->r6, 0X1930);
    // 0x8001A1E4: addiu       $a1, $a1, -0x69B8
    ctx->r5 = ADD32(ctx->r5, -0X69B8);
    // 0x8001A1E8: addiu       $a0, $a0, -0x6888
    ctx->r4 = ADD32(ctx->r4, -0X6888);
    // 0x8001A1EC: jal         0x8001B004
    // 0x8001A1F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001B004(rdram, ctx);
        goto after_5;
    // 0x8001A1F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x8001A1F4: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8001A1F8: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8001A1FC: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x8001A200: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8001A204: addiu       $a1, $a1, -0x6978
    ctx->r5 = ADD32(ctx->r5, -0X6978);
    // 0x8001A208: addiu       $a0, $a0, -0x67D8
    ctx->r4 = ADD32(ctx->r4, -0X67D8);
    // 0x8001A20C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8001A210: jal         0x8001B004
    // 0x8001A214: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_8001B004(rdram, ctx);
        goto after_6;
    // 0x8001A214: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_6:
    // 0x8001A218: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8001A21C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8001A220: addiu       $a1, $a1, -0x6B18
    ctx->r5 = ADD32(ctx->r5, -0X6B18);
    // 0x8001A224: addiu       $a0, $a0, -0x6B30
    ctx->r4 = ADD32(ctx->r4, -0X6B30);
    // 0x8001A228: jal         0x80081C80
    // 0x8001A22C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_7;
    // 0x8001A22C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x8001A230: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8001A234: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8001A238: addiu       $a1, $a1, -0x6AF8
    ctx->r5 = ADD32(ctx->r5, -0X6AF8);
    // 0x8001A23C: addiu       $a0, $a0, -0x6B10
    ctx->r4 = ADD32(ctx->r4, -0X6B10);
    // 0x8001A240: jal         0x80081C80
    // 0x8001A244: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_8;
    // 0x8001A244: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_8:
    // 0x8001A248: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8001A24C: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8001A250: addiu       $v0, $v0, 0x6560
    ctx->r2 = ADD32(ctx->r2, 0X6560);
    // 0x8001A254: addiu       $a1, $t7, -0x6290
    ctx->r5 = ADD32(ctx->r15, -0X6290);
    // 0x8001A258: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x8001A25C: jal         0x8001B120
    // 0x8001A260: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001B120(rdram, ctx);
        goto after_9;
    // 0x8001A260: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x8001A264: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x8001A268: lw          $t8, 0x300($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X300);
    // 0x8001A26C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001A270: bne         $t8, $at, L_8001A2A8
    if (ctx->r24 != ctx->r1) {
        // 0x8001A274: lui         $s0, 0x801B
        ctx->r16 = S32(0X801B << 16);
            goto L_8001A2A8;
    }
    // 0x8001A274: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x8001A278: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x8001A27C: addiu       $s0, $s0, -0x6728
    ctx->r16 = ADD32(ctx->r16, -0X6728);
    // 0x8001A280: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8001A284: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8001A288: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8001A28C: addiu       $a1, $a1, -0x42E0
    ctx->r5 = ADD32(ctx->r5, -0X42E0);
    // 0x8001A290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001A294: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x8001A298: jal         0x8001BB50
    // 0x8001A29C: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    func_8001BB50(rdram, ctx);
        goto after_10;
    // 0x8001A29C: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_10:
    // 0x8001A2A0: b           L_8001A2CC
    // 0x8001A2A4: nop

        goto L_8001A2CC;
    // 0x8001A2A4: nop

L_8001A2A8:
    // 0x8001A2A8: addiu       $s0, $s0, -0x6728
    ctx->r16 = ADD32(ctx->r16, -0X6728);
    // 0x8001A2AC: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8001A2B0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8001A2B4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8001A2B8: addiu       $a1, $a1, -0x42E0
    ctx->r5 = ADD32(ctx->r5, -0X42E0);
    // 0x8001A2BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001A2C0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x8001A2C4: jal         0x8001BB50
    // 0x8001A2C8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8001BB50(rdram, ctx);
        goto after_11;
    // 0x8001A2C8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_11:
L_8001A2CC:
    // 0x8001A2CC: lui         $s2, 0x8010
    ctx->r18 = S32(0X8010 << 16);
    // 0x8001A2D0: addiu       $s2, $s2, -0x3770
    ctx->r18 = ADD32(ctx->r18, -0X3770);
    // 0x8001A2D4: addiu       $at, $s2, 0x7FFF
    ctx->r1 = ADD32(ctx->r18, 0X7FFF);
    // 0x8001A2D8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8001A2DC: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8001A2E0: sh          $t1, 0x991($at)
    MEM_H(0X991, ctx->r1) = ctx->r9;
    // 0x8001A2E4: addiu       $a2, $a2, -0x6B10
    ctx->r6 = ADD32(ctx->r6, -0X6B10);
    // 0x8001A2E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001A2EC: jal         0x8001BC7C
    // 0x8001A2F0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8001BC7C(rdram, ctx);
        goto after_12;
    // 0x8001A2F0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_12:
    // 0x8001A2F4: jal         0x8001BD60
    // 0x8001A2F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001BD60(rdram, ctx);
        goto after_13;
    // 0x8001A2F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8001A2FC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001A300: sw          $v0, -0x42E0($at)
    MEM_W(-0X42E0, ctx->r1) = ctx->r2;
    // 0x8001A304: jal         0x800839E0
    // 0x8001A308: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_14;
    // 0x8001A308: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_14:
    // 0x8001A30C: jal         0x80025030
    // 0x8001A310: nop

    func_80025030(rdram, ctx);
        goto after_15;
    // 0x8001A310: nop

    after_15:
    // 0x8001A314: jal         0x80015490
    // 0x8001A318: nop

    func_80015490(rdram, ctx);
        goto after_16;
    // 0x8001A318: nop

    after_16:
    // 0x8001A31C: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x8001A320: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x8001A324: addiu       $s0, $s0, 0x6564
    ctx->r16 = ADD32(ctx->r16, 0X6564);
    // 0x8001A328: addiu       $s1, $s1, 0x6568
    ctx->r17 = ADD32(ctx->r17, 0X6568);
L_8001A32C:
    // 0x8001A32C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8001A330: addiu       $a0, $a0, -0x6B10
    ctx->r4 = ADD32(ctx->r4, -0X6B10);
    // 0x8001A334: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8001A338: jal         0x80081F50
    // 0x8001A33C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_17;
    // 0x8001A33C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_17:
    // 0x8001A340: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8001A344: nop

    // 0x8001A348: lh          $v1, 0x0($t2)
    ctx->r3 = MEM_H(ctx->r10, 0X0);
    // 0x8001A34C: nop

    // 0x8001A350: beq         $v1, $zero, L_8001A32C
    if (ctx->r3 == 0) {
        // 0x8001A354: nop
    
            goto L_8001A32C;
    }
    // 0x8001A354: nop

    // 0x8001A358: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001A35C: beq         $v1, $at, L_8001A384
    if (ctx->r3 == ctx->r1) {
        // 0x8001A360: lui         $t3, 0x8011
        ctx->r11 = S32(0X8011 << 16);
            goto L_8001A384;
    }
    // 0x8001A360: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8001A364: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001A368: beq         $v1, $at, L_8001A3D0
    if (ctx->r3 == ctx->r1) {
        // 0x8001A36C: addiu       $t6, $s2, 0x7FFF
        ctx->r14 = ADD32(ctx->r18, 0X7FFF);
            goto L_8001A3D0;
    }
    // 0x8001A36C: addiu       $t6, $s2, 0x7FFF
    ctx->r14 = ADD32(ctx->r18, 0X7FFF);
    // 0x8001A370: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8001A374: beq         $v1, $at, L_8001A3F8
    if (ctx->r3 == ctx->r1) {
        // 0x8001A378: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8001A3F8;
    }
    // 0x8001A378: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001A37C: b           L_8001A32C
    // 0x8001A380: nop

        goto L_8001A32C;
    // 0x8001A380: nop

L_8001A384:
    // 0x8001A384: lbu         $t3, -0x301C($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X301C);
    // 0x8001A388: nop

    // 0x8001A38C: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x8001A390: beq         $t4, $zero, L_8001A3C0
    if (ctx->r12 == 0) {
        // 0x8001A394: nop
    
            goto L_8001A3C0;
    }
    // 0x8001A394: nop

    // 0x8001A398: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8001A39C: nop

    // 0x8001A3A0: slt         $v1, $zero, $v0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8001A3A4: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x8001A3A8: beq         $v1, $zero, L_8001A32C
    if (ctx->r3 == 0) {
        // 0x8001A3AC: sw          $t5, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r13;
            goto L_8001A32C;
    }
    // 0x8001A3AC: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x8001A3B0: jal         0x8001A448
    // 0x8001A3B4: nop

    func_8001A448(rdram, ctx);
        goto after_18;
    // 0x8001A3B4: nop

    after_18:
    // 0x8001A3B8: b           L_8001A32C
    // 0x8001A3BC: nop

        goto L_8001A32C;
    // 0x8001A3BC: nop

L_8001A3C0:
    // 0x8001A3C0: jal         0x8001A448
    // 0x8001A3C4: nop

    func_8001A448(rdram, ctx);
        goto after_19;
    // 0x8001A3C4: nop

    after_19:
    // 0x8001A3C8: b           L_8001A32C
    // 0x8001A3CC: nop

        goto L_8001A32C;
    // 0x8001A3CC: nop

L_8001A3D0:
    // 0x8001A3D0: lh          $t6, 0x983($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X983);
    // 0x8001A3D4: addiu       $at, $s2, 0x7FFF
    ctx->r1 = ADD32(ctx->r18, 0X7FFF);
    // 0x8001A3D8: xori        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 ^ 0X1;
    // 0x8001A3DC: sh          $t7, 0x983($at)
    MEM_H(0X983, ctx->r1) = ctx->r15;
    // 0x8001A3E0: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8001A3E4: nop

    // 0x8001A3E8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8001A3EC: b           L_8001A32C
    // 0x8001A3F0: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
        goto L_8001A32C;
    // 0x8001A3F0: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x8001A3F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8001A3F8:
    // 0x8001A3F8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8001A3FC: jal         0x80083BA0
    // 0x8001A400: nop

    osViSetYScale_recomp(rdram, ctx);
        goto after_20;
    // 0x8001A400: nop

    after_20:
    // 0x8001A404: jal         0x80083C00
    // 0x8001A408: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80083C00(rdram, ctx);
        goto after_21;
    // 0x8001A408: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_21:
    // 0x8001A40C: jal         0x80015BC0
    // 0x8001A410: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80015BC0(rdram, ctx);
        goto after_22;
    // 0x8001A410: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_22:
    // 0x8001A414: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x8001A418: nop

    // 0x8001A41C: addiu       $t1, $t0, 0x2
    ctx->r9 = ADD32(ctx->r8, 0X2);
    // 0x8001A420: b           L_8001A32C
    // 0x8001A424: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
        goto L_8001A32C;
    // 0x8001A424: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x8001A428: nop

    // 0x8001A42C: nop

    // 0x8001A430: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8001A434: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8001A438: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8001A43C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8001A440: jr          $ra
    // 0x8001A444: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8001A444: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8001A448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A448: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001A44C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8001A450: addiu       $v1, $v1, 0x6564
    ctx->r3 = ADD32(ctx->r3, 0X6564);
    // 0x8001A454: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001A458: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8001A45C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8001A460: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001A464: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001A468: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001A46C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001A470: beq         $at, $zero, L_8001A904
    if (ctx->r1 == 0) {
        // 0x8001A474: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8001A904;
    }
    // 0x8001A474: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001A478: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x8001A47C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8001A480: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x8001A484: lh          $t7, 0x5210($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X5210);
    // 0x8001A488: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x8001A48C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8001A490: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001A494: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8001A498: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001A49C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001A4A0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001A4A4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001A4A8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8001A4AC: addiu       $s4, $s4, -0x3770
    ctx->r20 = ADD32(ctx->r20, -0X3770);
    // 0x8001A4B0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8001A4B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8001A4B8: sll         $t8, $t8, 6
    ctx->r24 = S32(ctx->r24 << 6);
    // 0x8001A4BC: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    // 0x8001A4C0: sw          $zero, 0x6568($at)
    MEM_W(0X6568, ctx->r1) = 0;
    // 0x8001A4C4: addu        $t9, $s4, $t8
    ctx->r25 = ADD32(ctx->r20, ctx->r24);
    // 0x8001A4C8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8001A4CC: jal         0x8001A924
    // 0x8001A4D0: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    func_8001A924(rdram, ctx);
        goto after_0;
    // 0x8001A4D0: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    after_0:
    // 0x8001A4D4: jal         0x8001AAB8
    // 0x8001A4D8: nop

    func_8001AAB8(rdram, ctx);
        goto after_1;
    // 0x8001A4D8: nop

    after_1:
    // 0x8001A4DC: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x8001A4E0: lh          $t1, 0x5220($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X5220);
    // 0x8001A4E4: nop

    // 0x8001A4E8: beq         $t1, $zero, L_8001A4F8
    if (ctx->r9 == 0) {
        // 0x8001A4EC: nop
    
            goto L_8001A4F8;
    }
    // 0x8001A4EC: nop

    // 0x8001A4F0: jal         0x8001AF1C
    // 0x8001A4F4: nop

    func_8001AF1C(rdram, ctx);
        goto after_2;
    // 0x8001A4F4: nop

    after_2:
L_8001A4F8:
    // 0x8001A4F8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001A4FC: lh          $v0, 0x5226($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5226);
    // 0x8001A500: nop

    // 0x8001A504: bne         $v0, $zero, L_8001A520
    if (ctx->r2 != 0) {
        // 0x8001A508: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8001A520;
    }
    // 0x8001A508: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001A50C: jal         0x8001ABA8
    // 0x8001A510: nop

    func_8001ABA8(rdram, ctx);
        goto after_3;
    // 0x8001A510: nop

    after_3:
    // 0x8001A514: b           L_8001A530
    // 0x8001A518: nop

        goto L_8001A530;
    // 0x8001A518: nop

    // 0x8001A51C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8001A520:
    // 0x8001A520: bne         $v0, $at, L_8001A530
    if (ctx->r2 != ctx->r1) {
        // 0x8001A524: nop
    
            goto L_8001A530;
    }
    // 0x8001A524: nop

    // 0x8001A528: jal         0x8001AD8C
    // 0x8001A52C: nop

    func_8001AD8C(rdram, ctx);
        goto after_4;
    // 0x8001A52C: nop

    after_4:
L_8001A530:
    // 0x8001A530: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8001A534: lh          $a0, 0x5210($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X5210);
    // 0x8001A538: jal         0x80002D20
    // 0x8001A53C: nop

    func_80002D20(rdram, ctx);
        goto after_5;
    // 0x8001A53C: nop

    after_5:
    // 0x8001A540: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8001A544: jal         0x80083C70
    // 0x8001A548: addiu       $a0, $a0, -0x3A80
    ctx->r4 = ADD32(ctx->r4, -0X3A80);
    osContStartReadData_recomp(rdram, ctx);
        goto after_6;
    // 0x8001A548: addiu       $a0, $a0, -0x3A80
    ctx->r4 = ADD32(ctx->r4, -0X3A80);
    after_6:
    // 0x8001A54C: jal         0x80025148
    // 0x8001A550: nop

    func_80025148(rdram, ctx);
        goto after_7;
    // 0x8001A550: nop

    after_7:
    // 0x8001A554: jal         0x8001B250
    // 0x8001A558: nop

    func_8001B250(rdram, ctx);
        goto after_8;
    // 0x8001A558: nop

    after_8:
    // 0x8001A55C: jal         0x8001AAB8
    // 0x8001A560: nop

    func_8001AAB8(rdram, ctx);
        goto after_9;
    // 0x8001A560: nop

    after_9:
    // 0x8001A564: jal         0x80012B64
    // 0x8001A568: nop

    func_80012B64(rdram, ctx);
        goto after_10;
    // 0x8001A568: nop

    after_10:
    // 0x8001A56C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001A570: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001A574: addiu       $t2, $v0, 0x7FFF
    ctx->r10 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001A578: lh          $t2, 0x995($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X995);
    // 0x8001A57C: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x8001A580: bne         $t2, $zero, L_8001A86C
    if (ctx->r10 != 0) {
        // 0x8001A584: addiu       $s0, $s0, -0x6CEC
        ctx->r16 = ADD32(ctx->r16, -0X6CEC);
            goto L_8001A86C;
    }
    // 0x8001A584: addiu       $s0, $s0, -0x6CEC
    ctx->r16 = ADD32(ctx->r16, -0X6CEC);
    // 0x8001A588: jal         0x80020A04
    // 0x8001A58C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80020A04(rdram, ctx);
        goto after_11;
    // 0x8001A58C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8001A590: jal         0x800208C8
    // 0x8001A594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800208C8(rdram, ctx);
        goto after_12;
    // 0x8001A594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8001A598: jal         0x8001AAB8
    // 0x8001A59C: nop

    func_8001AAB8(rdram, ctx);
        goto after_13;
    // 0x8001A59C: nop

    after_13:
    // 0x8001A5A0: jal         0x8001DD40
    // 0x8001A5A4: nop

    func_8001DD40(rdram, ctx);
        goto after_14;
    // 0x8001A5A4: nop

    after_14:
    // 0x8001A5A8: lui         $s3, 0x2
    ctx->r19 = S32(0X2 << 16);
    // 0x8001A5AC: ori         $s3, $s3, 0xCA84
    ctx->r19 = ctx->r19 | 0XCA84;
    // 0x8001A5B0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8001A5B4: addiu       $s2, $zero, 0x2CC
    ctx->r18 = ADD32(0, 0X2CC);
L_8001A5B8:
    // 0x8001A5B8: multu       $s1, $s2
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001A5BC: mflo        $t3
    ctx->r11 = lo;
    // 0x8001A5C0: addu        $t4, $s4, $t3
    ctx->r12 = ADD32(ctx->r20, ctx->r11);
    // 0x8001A5C4: addu        $s0, $t4, $s3
    ctx->r16 = ADD32(ctx->r12, ctx->r19);
    // 0x8001A5C8: jal         0x80020868
    // 0x8001A5CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80020868(rdram, ctx);
        goto after_15;
    // 0x8001A5CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x8001A5D0: jal         0x8001DE24
    // 0x8001A5D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001DE24(rdram, ctx);
        goto after_16;
    // 0x8001A5D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x8001A5D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8001A5DC: sll         $t5, $s1, 16
    ctx->r13 = S32(ctx->r17 << 16);
    // 0x8001A5E0: sra         $s1, $t5, 16
    ctx->r17 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8001A5E4: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
    // 0x8001A5E8: bne         $at, $zero, L_8001A5B8
    if (ctx->r1 != 0) {
        // 0x8001A5EC: nop
    
            goto L_8001A5B8;
    }
    // 0x8001A5EC: nop

    // 0x8001A5F0: jal         0x8001AAB8
    // 0x8001A5F4: nop

    func_8001AAB8(rdram, ctx);
        goto after_17;
    // 0x8001A5F4: nop

    after_17:
    // 0x8001A5F8: jal         0x80060510
    // 0x8001A5FC: nop

    func_80060510(rdram, ctx);
        goto after_18;
    // 0x8001A5FC: nop

    after_18:
    // 0x8001A600: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8001A604: lw          $t7, -0x2FA0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2FA0);
    // 0x8001A608: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001A60C: bne         $v0, $t7, L_8001A640
    if (ctx->r2 != ctx->r15) {
        // 0x8001A610: lui         $v1, 0x8010
        ctx->r3 = S32(0X8010 << 16);
            goto L_8001A640;
    }
    // 0x8001A610: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x8001A614: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x8001A618: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x8001A61C: sh          $v0, 0x991($at)
    MEM_H(0X991, ctx->r1) = ctx->r2;
    // 0x8001A620: addiu       $a0, $v1, 0x7FFF
    ctx->r4 = ADD32(ctx->r3, 0X7FFF);
    // 0x8001A624: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8001A628: lw          $a1, -0x2F94($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2F94);
    // 0x8001A62C: lh          $a0, 0x981($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X981);
    // 0x8001A630: jal         0x8033EFE8
    // 0x8001A634: nop

    LOOKUP_FUNC(0x8033EFE8)(rdram, ctx);
        goto after_19;
    // 0x8001A634: nop

    after_19:
    // 0x8001A638: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8001A63C: sw          $v0, -0x2F94($at)
    MEM_W(-0X2F94, ctx->r1) = ctx->r2;
L_8001A640:
    // 0x8001A640: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8001A644: lw          $t8, -0x2F98($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2F98);
    // 0x8001A648: lui         $t9, 0x3
    ctx->r25 = S32(0X3 << 16);
    // 0x8001A64C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001A650: lbu         $t9, -0x765E($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X765E);
    // 0x8001A654: addiu       $s1, $zero, 0xC
    ctx->r17 = ADD32(0, 0XC);
    // 0x8001A658: bne         $s1, $t9, L_8001A670
    if (ctx->r17 != ctx->r25) {
        // 0x8001A65C: nop
    
            goto L_8001A670;
    }
    // 0x8001A65C: nop

    // 0x8001A660: jal         0x8001AAB8
    // 0x8001A664: nop

    func_8001AAB8(rdram, ctx);
        goto after_20;
    // 0x8001A664: nop

    after_20:
    // 0x8001A668: jal         0x8000F0DC
    // 0x8001A66C: nop

    func_8000F0DC(rdram, ctx);
        goto after_21;
    // 0x8001A66C: nop

    after_21:
L_8001A670:
    // 0x8001A670: jal         0x80028A00
    // 0x8001A674: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80028A00(rdram, ctx);
        goto after_22;
    // 0x8001A674: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_22:
    // 0x8001A678: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x8001A67C: lh          $t0, 0x5210($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X5210);
    // 0x8001A680: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8001A684: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8001A688: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8001A68C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8001A690: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x8001A694: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8001A698: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8001A69C: addiu       $t2, $t2, -0x6938
    ctx->r10 = ADD32(ctx->r10, -0X6938);
    // 0x8001A6A0: lw          $a1, -0x2F94($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2F94);
    // 0x8001A6A4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8001A6A8: addu        $a2, $t1, $t2
    ctx->r6 = ADD32(ctx->r9, ctx->r10);
    // 0x8001A6AC: jal         0x8001AAE4
    // 0x8001A6B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8001AAE4(rdram, ctx);
        goto after_23;
    // 0x8001A6B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_23:
    // 0x8001A6B4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8001A6B8: addiu       $v0, $v0, -0x2F94
    ctx->r2 = ADD32(ctx->r2, -0X2F94);
    // 0x8001A6BC: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x8001A6C0: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8001A6C4: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x8001A6C8: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x8001A6CC: lh          $t6, 0x5210($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X5210);
    // 0x8001A6D0: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x8001A6D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001A6D8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8001A6DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001A6E0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8001A6E4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8001A6E8: addiu       $t8, $t7, 0xB0
    ctx->r24 = ADD32(ctx->r15, 0XB0);
    // 0x8001A6EC: addiu       $t9, $t9, -0x6938
    ctx->r25 = ADD32(ctx->r25, -0X6938);
    // 0x8001A6F0: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x8001A6F4: jal         0x800049E8
    // 0x8001A6F8: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    func_800049E8(rdram, ctx);
        goto after_24;
    // 0x8001A6F8: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    after_24:
    // 0x8001A6FC: beq         $v0, $zero, L_8001A720
    if (ctx->r2 == 0) {
        // 0x8001A700: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_8001A720;
    }
    // 0x8001A700: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8001A704: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8001A708: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8001A70C: addiu       $t0, $t0, 0x500
    ctx->r8 = ADD32(ctx->r8, 0X500);
    // 0x8001A710: addiu       $t1, $t1, -0x4A30
    ctx->r9 = ADD32(ctx->r9, -0X4A30);
    // 0x8001A714: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    // 0x8001A718: b           L_8001A738
    // 0x8001A71C: sw          $t1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r9;
        goto L_8001A738;
    // 0x8001A71C: sw          $t1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r9;
L_8001A720:
    // 0x8001A720: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8001A724: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8001A728: addiu       $t2, $t2, 0x1930
    ctx->r10 = ADD32(ctx->r10, 0X1930);
    // 0x8001A72C: addiu       $t3, $t3, -0x4230
    ctx->r11 = ADD32(ctx->r11, -0X4230);
    // 0x8001A730: sw          $t2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r10;
    // 0x8001A734: sw          $t3, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r11;
L_8001A738:
    // 0x8001A738: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8001A73C: lw          $a1, -0x5530($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5530);
    // 0x8001A740: lw          $a0, -0x552C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X552C);
    // 0x8001A744: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8001A748: jal         0x8001AAE4
    // 0x8001A74C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8001AAE4(rdram, ctx);
        goto after_25;
    // 0x8001A74C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_25:
    // 0x8001A750: jal         0x8001A924
    // 0x8001A754: nop

    func_8001A924(rdram, ctx);
        goto after_26;
    // 0x8001A754: nop

    after_26:
    // 0x8001A758: jal         0x8001AAB8
    // 0x8001A75C: nop

    func_8001AAB8(rdram, ctx);
        goto after_27;
    // 0x8001A75C: nop

    after_27:
    // 0x8001A760: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8001A764: lw          $t4, -0x2F98($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X2F98);
    // 0x8001A768: lui         $t5, 0x3
    ctx->r13 = S32(0X3 << 16);
    // 0x8001A76C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8001A770: lbu         $t5, -0x765E($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X765E);
    // 0x8001A774: nop

    // 0x8001A778: beq         $s1, $t5, L_8001A790
    if (ctx->r17 == ctx->r13) {
        // 0x8001A77C: nop
    
            goto L_8001A790;
    }
    // 0x8001A77C: nop

    // 0x8001A780: jal         0x8001AAB8
    // 0x8001A784: nop

    func_8001AAB8(rdram, ctx);
        goto after_28;
    // 0x8001A784: nop

    after_28:
    // 0x8001A788: jal         0x8000F0DC
    // 0x8001A78C: nop

    func_8000F0DC(rdram, ctx);
        goto after_29;
    // 0x8001A78C: nop

    after_29:
L_8001A790:
    // 0x8001A790: jal         0x8001AAB8
    // 0x8001A794: nop

    func_8001AAB8(rdram, ctx);
        goto after_30;
    // 0x8001A794: nop

    after_30:
    // 0x8001A798: jal         0x80010D80
    // 0x8001A79C: nop

    func_80010D80(rdram, ctx);
        goto after_31;
    // 0x8001A79C: nop

    after_31:
    // 0x8001A7A0: jal         0x800109C4
    // 0x8001A7A4: nop

    func_800109C4(rdram, ctx);
        goto after_32;
    // 0x8001A7A4: nop

    after_32:
    // 0x8001A7A8: jal         0x80028A00
    // 0x8001A7AC: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    func_80028A00(rdram, ctx);
        goto after_33;
    // 0x8001A7AC: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_33:
    // 0x8001A7B0: jal         0x8001DD40
    // 0x8001A7B4: nop

    func_8001DD40(rdram, ctx);
        goto after_34;
    // 0x8001A7B4: nop

    after_34:
    // 0x8001A7B8: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x8001A7BC: addiu       $s0, $s0, -0x5EF0
    ctx->r16 = ADD32(ctx->r16, -0X5EF0);
    // 0x8001A7C0: jal         0x80020868
    // 0x8001A7C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80020868(rdram, ctx);
        goto after_35;
    // 0x8001A7C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x8001A7C8: jal         0x8001DE24
    // 0x8001A7CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001DE24(rdram, ctx);
        goto after_36;
    // 0x8001A7CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x8001A7D0: jal         0x8001AAB8
    // 0x8001A7D4: nop

    func_8001AAB8(rdram, ctx);
        goto after_37;
    // 0x8001A7D4: nop

    after_37:
    // 0x8001A7D8: jal         0x8000E340
    // 0x8001A7DC: nop

    func_8000E340(rdram, ctx);
        goto after_38;
    // 0x8001A7DC: nop

    after_38:
    // 0x8001A7E0: jal         0x8001DD40
    // 0x8001A7E4: nop

    func_8001DD40(rdram, ctx);
        goto after_39;
    // 0x8001A7E4: nop

    after_39:
    // 0x8001A7E8: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
L_8001A7EC:
    // 0x8001A7EC: multu       $s1, $s2
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001A7F0: mflo        $t6
    ctx->r14 = lo;
    // 0x8001A7F4: addu        $t7, $s4, $t6
    ctx->r15 = ADD32(ctx->r20, ctx->r14);
    // 0x8001A7F8: addu        $s0, $t7, $s3
    ctx->r16 = ADD32(ctx->r15, ctx->r19);
    // 0x8001A7FC: jal         0x80020868
    // 0x8001A800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80020868(rdram, ctx);
        goto after_40;
    // 0x8001A800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_40:
    // 0x8001A804: jal         0x8001DE24
    // 0x8001A808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001DE24(rdram, ctx);
        goto after_41;
    // 0x8001A808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_41:
    // 0x8001A80C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8001A810: sll         $t8, $s1, 16
    ctx->r24 = S32(ctx->r17 << 16);
    // 0x8001A814: sra         $s1, $t8, 16
    ctx->r17 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8001A818: slti        $at, $s1, 0xC
    ctx->r1 = SIGNED(ctx->r17) < 0XC ? 1 : 0;
    // 0x8001A81C: bne         $at, $zero, L_8001A7EC
    if (ctx->r1 != 0) {
        // 0x8001A820: nop
    
            goto L_8001A7EC;
    }
    // 0x8001A820: nop

    // 0x8001A824: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8001A828: lbu         $t0, -0x301C($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X301C);
    // 0x8001A82C: nop

    // 0x8001A830: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8001A834: beq         $t1, $zero, L_8001A84C
    if (ctx->r9 == 0) {
        // 0x8001A838: nop
    
            goto L_8001A84C;
    }
    // 0x8001A838: nop

    // 0x8001A83C: jal         0x80060E10
    // 0x8001A840: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80060E10(rdram, ctx);
        goto after_42;
    // 0x8001A840: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_42:
    // 0x8001A844: jal         0x802A1A9C
    // 0x8001A848: nop

    LOOKUP_FUNC(0x802A1A9C)(rdram, ctx);
        goto after_43;
    // 0x8001A848: nop

    after_43:
L_8001A84C:
    // 0x8001A84C: jal         0x8001AAB8
    // 0x8001A850: nop

    func_8001AAB8(rdram, ctx);
        goto after_44;
    // 0x8001A850: nop

    after_44:
    // 0x8001A854: jal         0x80024A5C
    // 0x8001A858: nop

    func_80024A5C(rdram, ctx);
        goto after_45;
    // 0x8001A858: nop

    after_45:
    // 0x8001A85C: jal         0x80021A74
    // 0x8001A860: nop

    func_80021A74(rdram, ctx);
        goto after_46;
    // 0x8001A860: nop

    after_46:
    // 0x8001A864: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001A868: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
L_8001A86C:
    // 0x8001A86C: addiu       $t2, $v0, 0x7FFF
    ctx->r10 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001A870: lh          $t2, 0x983($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X983);
    // 0x8001A874: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001A878: addiu       $t3, $v0, 0x7FFF
    ctx->r11 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001A87C: sh          $t2, 0x985($at)
    MEM_H(0X985, ctx->r1) = ctx->r10;
    // 0x8001A880: lh          $t3, 0x981($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X981);
    // 0x8001A884: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8001A888: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8001A88C: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8001A890: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8001A894: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8001A898: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x8001A89C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8001A8A0: addiu       $t6, $t6, -0x6938
    ctx->r14 = ADD32(ctx->r14, -0X6938);
    // 0x8001A8A4: addiu       $t5, $t4, 0x160
    ctx->r13 = ADD32(ctx->r12, 0X160);
    // 0x8001A8A8: lw          $a1, -0x2F94($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2F94);
    // 0x8001A8AC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8001A8B0: addu        $a2, $t5, $t6
    ctx->r6 = ADD32(ctx->r13, ctx->r14);
    // 0x8001A8B4: jal         0x8001AAE4
    // 0x8001A8B8: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_8001AAE4(rdram, ctx);
        goto after_47;
    // 0x8001A8B8: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_47:
    // 0x8001A8BC: jal         0x802A1790
    // 0x8001A8C0: nop

    LOOKUP_FUNC(0x802A1790)(rdram, ctx);
        goto after_48;
    // 0x8001A8C0: nop

    after_48:
    // 0x8001A8C4: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x8001A8C8: addiu       $s0, $s0, -0x2F8C
    ctx->r16 = ADD32(ctx->r16, -0X2F8C);
    // 0x8001A8CC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8001A8D0: jal         0x80025A58
    // 0x8001A8D4: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
    func_80025A58(rdram, ctx);
        goto after_49;
    // 0x8001A8D4: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
    after_49:
    // 0x8001A8D8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x8001A8DC: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x8001A8E0: lhu         $t8, 0x5228($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X5228);
    // 0x8001A8E4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8001A8E8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8001A8EC: sh          $t9, 0x5228($at)
    MEM_H(0X5228, ctx->r1) = ctx->r25;
    // 0x8001A8F0: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x8001A8F4: lh          $t0, 0x5210($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X5210);
    // 0x8001A8F8: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8001A8FC: xori        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 ^ 0X1;
    // 0x8001A900: sh          $t1, 0x5210($at)
    MEM_H(0X5210, ctx->r1) = ctx->r9;
L_8001A904:
    // 0x8001A904: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8001A908: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001A90C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A910: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001A914: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001A918: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001A91C: jr          $ra
    // 0x8001A920: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8001A920: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8001A924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A924: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8001A928: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x8001A92C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001A930: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x8001A934: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001A938: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8001A93C: ori         $t7, $t7, 0x6
    ctx->r15 = ctx->r15 | 0X6;
    // 0x8001A940: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8001A944: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001A948: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001A94C: lui         $t6, 0x30
    ctx->r14 = S32(0X30 << 16);
    // 0x8001A950: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001A954: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8001A958: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x8001A95C: ori         $t9, $t9, 0x406
    ctx->r25 = ctx->r25 | 0X406;
    // 0x8001A960: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8001A964: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8001A968: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001A96C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001A970: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x8001A974: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x8001A978: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8001A97C: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x8001A980: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001A984: ori         $t8, $t8, 0x806
    ctx->r24 = ctx->r24 | 0X806;
    // 0x8001A988: addiu       $t9, $t5, 0x7FFF
    ctx->r25 = ADD32(ctx->r13, 0X7FFF);
    // 0x8001A98C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8001A990: lh          $t9, 0x981($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X981);
    // 0x8001A994: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x8001A998: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8001A99C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8001A9A0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001A9A4: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x8001A9A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001A9AC: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x8001A9B0: sll         $t6, $t6, 11
    ctx->r14 = S32(ctx->r14 << 11);
    // 0x8001A9B4: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x8001A9B8: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x8001A9BC: addu        $t7, $t6, $t4
    ctx->r15 = ADD32(ctx->r14, ctx->r12);
    // 0x8001A9C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8001A9C4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8001A9C8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001A9CC: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x8001A9D0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001A9D4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8001A9D8: ori         $t7, $t7, 0xC06
    ctx->r15 = ctx->r15 | 0XC06;
    // 0x8001A9DC: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x8001A9E0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8001A9E4: lw          $t8, 0x6560($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6560);
    // 0x8001A9E8: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x8001A9EC: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x8001A9F0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8001A9F4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001A9F8: ori         $t7, $t7, 0x1006
    ctx->r15 = ctx->r15 | 0X1006;
    // 0x8001A9FC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001AA00: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8001AA04: addiu       $t8, $t5, 0x7FFF
    ctx->r24 = ADD32(ctx->r13, 0X7FFF);
    // 0x8001AA08: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8001AA0C: lh          $t8, 0x981($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X981);
    // 0x8001AA10: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8001AA14: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8001AA18: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001AA1C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8001AA20: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001AA24: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8001AA28: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001AA2C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8001AA30: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8001AA34: sll         $t9, $t9, 6
    ctx->r25 = S32(ctx->r25 << 6);
    // 0x8001AA38: addu        $t6, $t9, $t4
    ctx->r14 = ADD32(ctx->r25, ctx->r12);
    // 0x8001AA3C: addiu       $t7, $t7, -0x3770
    ctx->r15 = ADD32(ctx->r15, -0X3770);
    // 0x8001AA40: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001AA44: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8001AA48: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001AA4C: lui         $t7, 0x3B
    ctx->r15 = S32(0X3B << 16);
    // 0x8001AA50: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8001AA54: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8001AA58: lui         $t6, 0xBC00
    ctx->r14 = S32(0XBC00 << 16);
    // 0x8001AA5C: ori         $t6, $t6, 0x1806
    ctx->r14 = ctx->r14 | 0X1806;
    // 0x8001AA60: addiu       $t7, $t7, -0x2600
    ctx->r15 = ADD32(ctx->r15, -0X2600);
    // 0x8001AA64: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8001AA68: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8001AA6C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001AA70: lui         $t6, 0x33
    ctx->r14 = S32(0X33 << 16);
    // 0x8001AA74: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001AA78: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8001AA7C: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x8001AA80: ori         $t9, $t9, 0x1C06
    ctx->r25 = ctx->r25 | 0X1C06;
    // 0x8001AA84: addiu       $t6, $t6, -0xD80
    ctx->r14 = ADD32(ctx->r14, -0XD80);
    // 0x8001AA88: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8001AA8C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001AA90: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001AA94: lui         $t9, 0x33
    ctx->r25 = S32(0X33 << 16);
    // 0x8001AA98: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x8001AA9C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8001AAA0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001AAA4: ori         $t8, $t8, 0x3406
    ctx->r24 = ctx->r24 | 0X3406;
    // 0x8001AAA8: addiu       $t9, $t9, -0x7800
    ctx->r25 = ADD32(ctx->r25, -0X7800);
    // 0x8001AAAC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8001AAB0: jr          $ra
    // 0x8001AAB4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    return;
    // 0x8001AAB4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_8001AAB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001AAB8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8001AABC: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    // 0x8001AAC0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8001AAC4: lui         $t8, 0x300
    ctx->r24 = S32(0X300 << 16);
    // 0x8001AAC8: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8001AACC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8001AAD0: addiu       $t8, $t8, 0x10
    ctx->r24 = ADD32(ctx->r24, 0X10);
    // 0x8001AAD4: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8001AAD8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001AADC: jr          $ra
    // 0x8001AAE0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    return;
    // 0x8001AAE0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
;}
RECOMP_FUNC void func_8001AAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001AAE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001AAE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001AAEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001AAF0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001AAF4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8001AAF8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8001AAFC: addiu       $v1, $a1, 0x8
    ctx->r3 = ADD32(ctx->r5, 0X8);
    // 0x8001AB00: lui         $t6, 0xE900
    ctx->r14 = S32(0XE900 << 16);
    // 0x8001AB04: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8001AB08: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001AB0C: lui         $t7, 0xB800
    ctx->r15 = S32(0XB800 << 16);
    // 0x8001AB10: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001AB14: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8001AB18: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x8001AB1C: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8001AB20: jal         0x80083ED0
    // 0x8001AB24: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_0;
    // 0x8001AB24: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8001AB28: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8001AB2C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8001AB30: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8001AB34: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8001AB38: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8001AB3C: subu        $t8, $a1, $v1
    ctx->r24 = SUB32(ctx->r5, ctx->r3);
    // 0x8001AB40: addiu       $v0, $v0, 0x1870
    ctx->r2 = ADD32(ctx->r2, 0X1870);
    // 0x8001AB44: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8001AB48: addiu       $t2, $t2, 0x430
    ctx->r10 = ADD32(ctx->r10, 0X430);
    // 0x8001AB4C: addiu       $t1, $t1, 0x500
    ctx->r9 = ADD32(ctx->r9, 0X500);
    // 0x8001AB50: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8001AB54: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x8001AB58: addiu       $t4, $v0, 0x1800
    ctx->r12 = ADD32(ctx->r2, 0X1800);
    // 0x8001AB5C: sw          $t0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r8;
    // 0x8001AB60: sw          $t3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r11;
    // 0x8001AB64: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x8001AB68: sw          $t4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r12;
    // 0x8001AB6C: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x8001AB70: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8001AB74: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8001AB78: ori         $t6, $t5, 0x3
    ctx->r14 = ctx->r13 | 0X3;
    // 0x8001AB7C: sw          $t6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r14;
    // 0x8001AB80: jal         0x8001BD60
    // 0x8001AB84: addiu       $a0, $a0, -0x6728
    ctx->r4 = ADD32(ctx->r4, -0X6728);
    func_8001BD60(rdram, ctx);
        goto after_1;
    // 0x8001AB84: addiu       $a0, $a0, -0x6728
    ctx->r4 = ADD32(ctx->r4, -0X6728);
    after_1:
    // 0x8001AB88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8001AB8C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8001AB90: jal         0x800828B0
    // 0x8001AB94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x8001AB94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8001AB98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001AB9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001ABA0: jr          $ra
    // 0x8001ABA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8001ABA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8001ABA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001ABA8: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8001ABAC: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x8001ABB0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001ABB4: lui         $a0, 0xE700
    ctx->r4 = S32(0XE700 << 16);
    // 0x8001ABB8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001ABBC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8001ABC0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001ABC4: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8001ABC8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001ABCC: lui         $a1, 0xBA00
    ctx->r5 = S32(0XBA00 << 16);
    // 0x8001ABD0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8001ABD4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001ABD8: ori         $a1, $a1, 0x1402
    ctx->r5 = ctx->r5 | 0X1402;
    // 0x8001ABDC: lui         $t8, 0x30
    ctx->r24 = S32(0X30 << 16);
    // 0x8001ABE0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8001ABE4: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x8001ABE8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001ABEC: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x8001ABF0: addiu       $t3, $t3, -0x3770
    ctx->r11 = ADD32(ctx->r11, -0X3770);
    // 0x8001ABF4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8001ABF8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8001ABFC: addiu       $t4, $t3, 0x7FFF
    ctx->r12 = ADD32(ctx->r11, 0X7FFF);
    // 0x8001AC00: lhu         $t4, 0x98F($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X98F);
    // 0x8001AC04: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x8001AC08: andi        $t5, $t4, 0x3
    ctx->r13 = ctx->r12 & 0X3;
    // 0x8001AC0C: sll         $t6, $t5, 19
    ctx->r14 = S32(ctx->r13 << 19);
    // 0x8001AC10: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8001AC14: ori         $t8, $t7, 0x13F
    ctx->r24 = ctx->r15 | 0X13F;
    // 0x8001AC18: addiu       $t9, $t3, 0x7FFF
    ctx->r25 = ADD32(ctx->r11, 0X7FFF);
    // 0x8001AC1C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8001AC20: lh          $t9, 0x981($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X981);
    // 0x8001AC24: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001AC28: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x8001AC2C: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x8001AC30: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8001AC34: subu        $t4, $t4, $t9
    ctx->r12 = SUB32(ctx->r12, ctx->r25);
    // 0x8001AC38: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8001AC3C: subu        $t4, $t4, $t9
    ctx->r12 = SUB32(ctx->r12, ctx->r25);
    // 0x8001AC40: sll         $t4, $t4, 11
    ctx->r12 = S32(ctx->r12 << 11);
    // 0x8001AC44: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x8001AC48: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8001AC4C: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x8001AC50: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8001AC54: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8001AC58: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001AC5C: lui         $t9, 0xF700
    ctx->r25 = S32(0XF700 << 16);
    // 0x8001AC60: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8001AC64: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8001AC68: addiu       $t4, $t3, 0x7FFF
    ctx->r12 = ADD32(ctx->r11, 0X7FFF);
    // 0x8001AC6C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8001AC70: lhu         $t4, 0x987($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X987);
    // 0x8001AC74: addiu       $t7, $t3, 0x7FFF
    ctx->r15 = ADD32(ctx->r11, 0X7FFF);
    // 0x8001AC78: lhu         $t7, 0x989($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X989);
    // 0x8001AC7C: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x8001AC80: andi        $t6, $t5, 0xF800
    ctx->r14 = ctx->r13 & 0XF800;
    // 0x8001AC84: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8001AC88: andi        $t9, $t8, 0x7C0
    ctx->r25 = ctx->r24 & 0X7C0;
    // 0x8001AC8C: addiu       $t5, $t3, 0x7FFF
    ctx->r13 = ADD32(ctx->r11, 0X7FFF);
    // 0x8001AC90: lhu         $t5, 0x98B($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X98B);
    // 0x8001AC94: or          $t4, $t6, $t9
    ctx->r12 = ctx->r14 | ctx->r25;
    // 0x8001AC98: addiu       $t9, $t3, 0x7FFF
    ctx->r25 = ADD32(ctx->r11, 0X7FFF);
    // 0x8001AC9C: lhu         $t9, 0x98D($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X98D);
    // 0x8001ACA0: sra         $t7, $t5, 2
    ctx->r15 = S32(SIGNED(ctx->r13) >> 2);
    // 0x8001ACA4: andi        $t8, $t7, 0x3E
    ctx->r24 = ctx->r15 & 0X3E;
    // 0x8001ACA8: or          $t6, $t4, $t8
    ctx->r14 = ctx->r12 | ctx->r24;
    // 0x8001ACAC: andi        $t5, $t9, 0x1
    ctx->r13 = ctx->r25 & 0X1;
    // 0x8001ACB0: or          $t2, $t6, $t5
    ctx->r10 = ctx->r14 | ctx->r13;
    // 0x8001ACB4: sll         $t7, $t2, 16
    ctx->r15 = S32(ctx->r10 << 16);
    // 0x8001ACB8: or          $t4, $t7, $t2
    ctx->r12 = ctx->r15 | ctx->r10;
    // 0x8001ACBC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8001ACC0: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8001ACC4: lw          $t8, -0x2F98($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2F98);
    // 0x8001ACC8: lui         $t9, 0x3
    ctx->r25 = S32(0X3 << 16);
    // 0x8001ACCC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001ACD0: lbu         $t9, -0x765E($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X765E);
    // 0x8001ACD4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8001ACD8: beq         $t9, $at, L_8001AD00
    if (ctx->r25 == ctx->r1) {
        // 0x8001ACDC: lui         $t1, 0xF64F
        ctx->r9 = S32(0XF64F << 16);
            goto L_8001AD00;
    }
    // 0x8001ACDC: lui         $t1, 0xF64F
    ctx->r9 = S32(0XF64F << 16);
    // 0x8001ACE0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001ACE4: lui         $t1, 0xF64F
    ctx->r9 = S32(0XF64F << 16);
    // 0x8001ACE8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8001ACEC: ori         $t1, $t1, 0xC3BC
    ctx->r9 = ctx->r9 | 0XC3BC;
    // 0x8001ACF0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8001ACF4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001ACF8: b           L_8001AD58
    // 0x8001ACFC: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_8001AD58;
    // 0x8001ACFC: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_8001AD00:
    // 0x8001AD00: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001AD04: ori         $t1, $t1, 0xC3BC
    ctx->r9 = ctx->r9 | 0XC3BC;
    // 0x8001AD08: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x8001AD0C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8001AD10: addiu       $t7, $zero, 0x3A0
    ctx->r15 = ADD32(0, 0X3A0);
    // 0x8001AD14: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8001AD18: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8001AD1C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001AD20: lui         $t8, 0x4D
    ctx->r24 = S32(0X4D << 16);
    // 0x8001AD24: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x8001AD28: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8001AD2C: ori         $t8, $t8, 0xC190
    ctx->r24 = ctx->r24 | 0XC190;
    // 0x8001AD30: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8001AD34: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8001AD38: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001AD3C: lui         $t6, 0xF602
    ctx->r14 = S32(0XF602 << 16);
    // 0x8001AD40: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8001AD44: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8001AD48: ori         $t6, $t6, 0x3BC
    ctx->r14 = ctx->r14 | 0X3BC;
    // 0x8001AD4C: addiu       $t5, $zero, 0x190
    ctx->r13 = ADD32(0, 0X190);
    // 0x8001AD50: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x8001AD54: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_8001AD58:
    // 0x8001AD58: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001AD5C: nop

    // 0x8001AD60: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8001AD64: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001AD68: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001AD6C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8001AD70: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001AD74: nop

    // 0x8001AD78: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x8001AD7C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8001AD80: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8001AD84: jr          $ra
    // 0x8001AD88: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    return;
    // 0x8001AD88: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_8001AD8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001AD8C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8001AD90: addiu       $a3, $a3, -0x2F94
    ctx->r7 = ADD32(ctx->r7, -0X2F94);
    // 0x8001AD94: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8001AD98: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8001AD9C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8001ADA0: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8001ADA4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8001ADA8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001ADAC: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8001ADB0: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8001ADB4: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8001ADB8: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x8001ADBC: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x8001ADC0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8001ADC4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8001ADC8: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8001ADCC: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x8001ADD0: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x8001ADD4: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x8001ADD8: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x8001ADDC: addiu       $t2, $t0, 0x7FFF
    ctx->r10 = ADD32(ctx->r8, 0X7FFF);
    // 0x8001ADE0: lhu         $t2, 0x98F($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X98F);
    // 0x8001ADE4: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x8001ADE8: andi        $t3, $t2, 0x3
    ctx->r11 = ctx->r10 & 0X3;
    // 0x8001ADEC: sll         $t4, $t3, 19
    ctx->r12 = S32(ctx->r11 << 19);
    // 0x8001ADF0: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x8001ADF4: ori         $t6, $t5, 0x13F
    ctx->r14 = ctx->r13 | 0X13F;
    // 0x8001ADF8: addiu       $t7, $t0, 0x7FFF
    ctx->r15 = ADD32(ctx->r8, 0X7FFF);
    // 0x8001ADFC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8001AE00: lh          $t7, 0x981($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X981);
    // 0x8001AE04: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001AE08: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8001AE0C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001AE10: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001AE14: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8001AE18: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001AE1C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8001AE20: sll         $t8, $t8, 11
    ctx->r24 = S32(ctx->r24 << 11);
    // 0x8001AE24: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x8001AE28: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x8001AE2C: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8001AE30: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8001AE34: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x8001AE38: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8001AE3C: lui         $t5, 0xA
    ctx->r13 = S32(0XA << 16);
    // 0x8001AE40: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x8001AE44: sw          $t3, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r11;
    // 0x8001AE48: addiu       $t5, $t5, 0x6570
    ctx->r13 = ADD32(ctx->r13, 0X6570);
    // 0x8001AE4C: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8001AE50: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8001AE54: jr          $ra
    // 0x8001AE58: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    return;
    // 0x8001AE58: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
;}
RECOMP_FUNC void func_8001AF1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001AF1C: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8001AF20: addiu       $t4, $t4, -0x2F94
    ctx->r12 = ADD32(ctx->r12, -0X2F94);
    // 0x8001AF24: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x8001AF28: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x8001AF2C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8001AF30: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x8001AF34: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8001AF38: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8001AF3C: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x8001AF40: lui         $t8, 0xFF10
    ctx->r24 = S32(0XFF10 << 16);
    // 0x8001AF44: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8001AF48: sw          $t7, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r15;
    // 0x8001AF4C: lui         $a1, 0x30
    ctx->r5 = S32(0X30 << 16);
    // 0x8001AF50: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8001AF54: ori         $t8, $t8, 0x13F
    ctx->r24 = ctx->r24 | 0X13F;
    // 0x8001AF58: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8001AF5C: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x8001AF60: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x8001AF64: lui         $t6, 0xFE00
    ctx->r14 = S32(0XFE00 << 16);
    // 0x8001AF68: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8001AF6C: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
    // 0x8001AF70: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x8001AF74: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8001AF78: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x8001AF7C: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8001AF80: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8001AF84: sw          $t7, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r15;
    // 0x8001AF88: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8001AF8C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8001AF90: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x8001AF94: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x8001AF98: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8001AF9C: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x8001AFA0: lui         $t6, 0x30
    ctx->r14 = S32(0X30 << 16);
    // 0x8001AFA4: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8001AFA8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8001AFAC: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x8001AFB0: lui         $t9, 0xFFFC
    ctx->r25 = S32(0XFFFC << 16);
    // 0x8001AFB4: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8001AFB8: sw          $t7, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r15;
    // 0x8001AFBC: ori         $t9, $t9, 0xFFFC
    ctx->r25 = ctx->r25 | 0XFFFC;
    // 0x8001AFC0: lui         $t8, 0xF700
    ctx->r24 = S32(0XF700 << 16);
    // 0x8001AFC4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8001AFC8: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8001AFCC: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x8001AFD0: lui         $t7, 0xF64F
    ctx->r15 = S32(0XF64F << 16);
    // 0x8001AFD4: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8001AFD8: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x8001AFDC: ori         $t7, $t7, 0xC3BC
    ctx->r15 = ctx->r15 | 0XC3BC;
    // 0x8001AFE0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001AFE4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8001AFE8: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x8001AFEC: nop

    // 0x8001AFF0: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8001AFF4: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x8001AFF8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8001AFFC: jr          $ra
    // 0x8001B000: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    return;
    // 0x8001B000: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
;}
RECOMP_FUNC void func_8001B004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B004: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B008: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x8001B00C: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x8001B010: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x8001B014: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x8001B018: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x8001B01C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8001B020: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x8001B024: lui         $s3, 0x801B
    ctx->r19 = S32(0X801B << 16);
    // 0x8001B028: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8001B02C: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8001B030: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8001B034: addiu       $t1, $t1, 0x430
    ctx->r9 = ADD32(ctx->r9, 0X430);
    // 0x8001B038: addiu       $t4, $t4, 0x3070
    ctx->r12 = ADD32(ctx->r12, 0X3070);
    // 0x8001B03C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8001B040: addiu       $s3, $s3, -0x6B10
    ctx->r19 = ADD32(ctx->r19, -0X6B10);
    // 0x8001B044: addiu       $s1, $s1, 0xE40
    ctx->r17 = ADD32(ctx->r17, 0XE40);
    // 0x8001B048: addiu       $s0, $s0, 0x1870
    ctx->r16 = ADD32(ctx->r16, 0X1870);
    // 0x8001B04C: addiu       $s2, $zero, 0xC00
    ctx->r18 = ADD32(0, 0XC00);
    // 0x8001B050: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x8001B054: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001B058: addiu       $t5, $zero, 0x400
    ctx->r13 = ADD32(0, 0X400);
    // 0x8001B05C: addiu       $t3, $zero, 0x800
    ctx->r11 = ADD32(0, 0X800);
    // 0x8001B060: addiu       $t2, $zero, 0x1000
    ctx->r10 = ADD32(0, 0X1000);
    // 0x8001B064: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_8001B068:
    // 0x8001B068: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x8001B06C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8001B070: ori         $at, $at, 0x5800
    ctx->r1 = ctx->r1 | 0X5800;
    // 0x8001B074: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8001B078: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    // 0x8001B07C: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8001B080: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x8001B084: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8001B088: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8001B08C: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x8001B090: sw          $t0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r8;
    // 0x8001B094: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x8001B098: sw          $t1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r9;
    // 0x8001B09C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x8001B0A0: sw          $a2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r6;
    // 0x8001B0A4: sw          $t2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r10;
    // 0x8001B0A8: sw          $a3, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r7;
    // 0x8001B0AC: sw          $t3, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r11;
    // 0x8001B0B0: sw          $t4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r12;
    // 0x8001B0B4: sw          $t5, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r13;
    // 0x8001B0B8: sw          $s0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r16;
    // 0x8001B0BC: sw          $zero, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = 0;
    // 0x8001B0C0: sw          $zero, 0x40($a0)
    MEM_W(0X40, ctx->r4) = 0;
    // 0x8001B0C4: sw          $zero, 0x44($a0)
    MEM_W(0X44, ctx->r4) = 0;
    // 0x8001B0C8: sw          $s1, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r17;
    // 0x8001B0CC: sw          $s2, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r18;
    // 0x8001B0D0: sw          $s3, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r19;
    // 0x8001B0D4: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    // 0x8001B0D8: bne         $v0, $s4, L_8001B068
    if (ctx->r2 != ctx->r20) {
        // 0x8001B0DC: addiu       $a0, $a0, 0x58
        ctx->r4 = ADD32(ctx->r4, 0X58);
            goto L_8001B068;
    }
    // 0x8001B0DC: addiu       $a0, $a0, 0x58
    ctx->r4 = ADD32(ctx->r4, 0X58);
    // 0x8001B0E0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8001B0E4: nop

    // 0x8001B0E8: beq         $t8, $zero, L_8001B0FC
    if (ctx->r24 == 0) {
        // 0x8001B0EC: nop
    
            goto L_8001B0FC;
    }
    // 0x8001B0EC: nop

    // 0x8001B0F0: sh          $s4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r20;
    // 0x8001B0F4: b           L_8001B104
    // 0x8001B0F8: sh          $s4, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r20;
        goto L_8001B104;
    // 0x8001B0F8: sh          $s4, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r20;
L_8001B0FC:
    // 0x8001B0FC: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x8001B100: sh          $zero, 0x20($a1)
    MEM_H(0X20, ctx->r5) = 0;
L_8001B104:
    // 0x8001B104: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x8001B108: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x8001B10C: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x8001B110: lw          $s3, 0x10($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X10);
    // 0x8001B114: lw          $s4, 0x14($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X14);
    // 0x8001B118: jr          $ra
    // 0x8001B11C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001B11C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001B120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B120: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x8001B124: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x8001B128: addiu       $t9, $t9, 0x6270
    ctx->r25 = ADD32(ctx->r25, 0X6270);
    // 0x8001B12C: addiu       $t8, $t7, -0x8
    ctx->r24 = ADD32(ctx->r15, -0X8);
    // 0x8001B130: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x8001B134: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    // 0x8001B138: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x8001B13C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001B140: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001B144: and         $t0, $a3, $at
    ctx->r8 = ctx->r7 & ctx->r1;
    // 0x8001B148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B14C: beq         $a0, $zero, L_8001B1A4
    if (ctx->r4 == 0) {
        // 0x8001B150: sw          $t0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r8;
            goto L_8001B1A4;
    }
    // 0x8001B150: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8001B154: sll         $t1, $a3, 0
    ctx->r9 = S32(ctx->r7 << 0);
    // 0x8001B158: bltz        $t1, L_8001B194
    if (SIGNED(ctx->r9) < 0) {
        // 0x8001B15C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8001B194;
    }
    // 0x8001B15C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8001B160: lw          $t2, 0x14($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X14);
    // 0x8001B164: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x8001B168: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001B16C: jal         0x8001B1B4
    // 0x8001B170: subu        $a2, $t2, $a3
    ctx->r6 = SUB32(ctx->r10, ctx->r7);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8001B170: subu        $a2, $t2, $a3
    ctx->r6 = SUB32(ctx->r10, ctx->r7);
    after_0:
    // 0x8001B174: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8001B178: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8001B17C: lw          $t3, 0x14($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X14);
    // 0x8001B180: lw          $t4, 0x10($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X10);
    // 0x8001B184: nop

    // 0x8001B188: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x8001B18C: b           L_8001B1A4
    // 0x8001B190: addu        $v0, $t5, $a1
    ctx->r2 = ADD32(ctx->r13, ctx->r5);
        goto L_8001B1A4;
    // 0x8001B190: addu        $v0, $t5, $a1
    ctx->r2 = ADD32(ctx->r13, ctx->r5);
L_8001B194:
    // 0x8001B194: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B198: lw          $t6, 0x14($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X14);
    // 0x8001B19C: jal         0x80025394
    // 0x8001B1A0: subu        $a2, $t6, $a0
    ctx->r6 = SUB32(ctx->r14, ctx->r4);
    func_80025394(rdram, ctx);
        goto after_1;
    // 0x8001B1A0: subu        $a2, $t6, $a0
    ctx->r6 = SUB32(ctx->r14, ctx->r4);
    after_1:
L_8001B1A4:
    // 0x8001B1A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B1A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001B1AC: jr          $ra
    // 0x8001B1B0: nop

    return;
    // 0x8001B1B0: nop

;}
RECOMP_FUNC void func_8001B1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B1B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001B1B8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001B1BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001B1C0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8001B1C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8001B1C8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8001B1CC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8001B1D0: sw          $zero, 0x65C4($at)
    MEM_W(0X65C4, ctx->r1) = 0;
    // 0x8001B1D4: jal         0x80084030
    // 0x8001B1D8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    osInvalDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8001B1D8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x8001B1DC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8001B1E0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8001B1E4: jal         0x800840E0
    // 0x8001B1E8: nop

    func_800840E0(rdram, ctx);
        goto after_1;
    // 0x8001B1E8: nop

    after_1:
    // 0x8001B1EC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8001B1F0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8001B1F4: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x8001B1F8: addiu       $t8, $t8, -0x6B30
    ctx->r24 = ADD32(ctx->r24, -0X6B30);
    // 0x8001B1FC: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8001B200: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8001B204: addiu       $a0, $a0, -0x3B40
    ctx->r4 = ADD32(ctx->r4, -0X3B40);
    // 0x8001B208: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8001B20C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001B210: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8001B214: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8001B218: jal         0x80082A00
    // 0x8001B21C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    osPiStartDma_recomp(rdram, ctx);
        goto after_2;
    // 0x8001B21C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_2:
    // 0x8001B220: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8001B224: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x8001B228: addiu       $a1, $a1, 0x65C4
    ctx->r5 = ADD32(ctx->r5, 0X65C4);
    // 0x8001B22C: addiu       $a0, $a0, -0x6B30
    ctx->r4 = ADD32(ctx->r4, -0X6B30);
    // 0x8001B230: jal         0x80081F50
    // 0x8001B234: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x8001B234: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8001B238: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001B23C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001B240: jr          $ra
    // 0x8001B244: nop

    return;
    // 0x8001B244: nop

    // 0x8001B248: nop

    // 0x8001B24C: nop

;}
RECOMP_FUNC void func_8001B250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B250: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8001B254: lbu         $t6, 0x522C($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X522C);
    // 0x8001B258: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x8001B25C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001B260: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8001B264: lw          $t9, 0x69F0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X69F0);
    // 0x8001B268: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B26C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B270: jalr        $t9
    // 0x8001B274: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8001B274: nop

    after_0:
    // 0x8001B278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B27C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B280: jr          $ra
    // 0x8001B284: nop

    return;
    // 0x8001B284: nop

;}
RECOMP_FUNC void func_8001B288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B288: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B28C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B290: jal         0x8001DCF0
    // 0x8001B294: nop

    func_8001DCF0(rdram, ctx);
        goto after_0;
    // 0x8001B294: nop

    after_0:
    // 0x8001B298: jal         0x80024960
    // 0x8001B29C: nop

    func_80024960(rdram, ctx);
        goto after_1;
    // 0x8001B29C: nop

    after_1:
    // 0x8001B2A0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8001B2A4: jal         0x80025A10
    // 0x8001B2A8: addiu       $a0, $a0, 0x3BB0
    ctx->r4 = ADD32(ctx->r4, 0X3BB0);
    func_80025A10(rdram, ctx);
        goto after_2;
    // 0x8001B2A8: addiu       $a0, $a0, 0x3BB0
    ctx->r4 = ADD32(ctx->r4, 0X3BB0);
    after_2:
    // 0x8001B2AC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8001B2B0: jal         0x80025A10
    // 0x8001B2B4: addiu       $a0, $a0, 0x3C90
    ctx->r4 = ADD32(ctx->r4, 0X3C90);
    func_80025A10(rdram, ctx);
        goto after_3;
    // 0x8001B2B4: addiu       $a0, $a0, 0x3C90
    ctx->r4 = ADD32(ctx->r4, 0X3C90);
    after_3:
    // 0x8001B2B8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8001B2BC: jal         0x80025A10
    // 0x8001B2C0: addiu       $a0, $a0, 0x3BC8
    ctx->r4 = ADD32(ctx->r4, 0X3BC8);
    func_80025A10(rdram, ctx);
        goto after_4;
    // 0x8001B2C0: addiu       $a0, $a0, 0x3BC8
    ctx->r4 = ADD32(ctx->r4, 0X3BC8);
    after_4:
    // 0x8001B2C4: lui         $a0, 0x20
    ctx->r4 = S32(0X20 << 16);
    // 0x8001B2C8: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x8001B2CC: addiu       $a0, $a0, -0x6900
    ctx->r4 = ADD32(ctx->r4, -0X6900);
    // 0x8001B2D0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001B2D4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8001B2D8: addiu       $t7, $t7, 0x3E90
    ctx->r15 = ADD32(ctx->r15, 0X3E90);
    // 0x8001B2DC: lui         $a1, 0x802D
    ctx->r5 = S32(0X802D << 16);
    // 0x8001B2E0: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8001B2E4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8001B2E8: jal         0x8001B1B4
    // 0x8001B2EC: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_5;
    // 0x8001B2EC: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_5:
    // 0x8001B2F0: lui         $a0, 0x1A
    ctx->r4 = S32(0X1A << 16);
    // 0x8001B2F4: lui         $t8, 0x1C
    ctx->r24 = S32(0X1C << 16);
    // 0x8001B2F8: addiu       $a0, $a0, 0x4EE0
    ctx->r4 = ADD32(ctx->r4, 0X4EE0);
    // 0x8001B2FC: addiu       $t8, $t8, 0x3400
    ctx->r24 = ADD32(ctx->r24, 0X3400);
    // 0x8001B300: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x8001B304: addiu       $a1, $a1, 0x1300
    ctx->r5 = ADD32(ctx->r5, 0X1300);
    // 0x8001B308: jal         0x8001B1B4
    // 0x8001B30C: subu        $a2, $t8, $a0
    ctx->r6 = SUB32(ctx->r24, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_6;
    // 0x8001B30C: subu        $a2, $t8, $a0
    ctx->r6 = SUB32(ctx->r24, ctx->r4);
    after_6:
    // 0x8001B310: lui         $a0, 0x1C
    ctx->r4 = S32(0X1C << 16);
    // 0x8001B314: lui         $t9, 0x20
    ctx->r25 = S32(0X20 << 16);
    // 0x8001B318: addiu       $a0, $a0, 0x3400
    ctx->r4 = ADD32(ctx->r4, 0X3400);
    // 0x8001B31C: addiu       $t9, $t9, -0x6900
    ctx->r25 = ADD32(ctx->r25, -0X6900);
    // 0x8001B320: lui         $a1, 0x8029
    ctx->r5 = S32(0X8029 << 16);
    // 0x8001B324: addiu       $a1, $a1, -0x4800
    ctx->r5 = ADD32(ctx->r5, -0X4800);
    // 0x8001B328: jal         0x8001B1B4
    // 0x8001B32C: subu        $a2, $t9, $a0
    ctx->r6 = SUB32(ctx->r25, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_7;
    // 0x8001B32C: subu        $a2, $t9, $a0
    ctx->r6 = SUB32(ctx->r25, ctx->r4);
    after_7:
    // 0x8001B330: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8001B334: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x8001B338: addiu       $a0, $a0, 0x1B00
    ctx->r4 = ADD32(ctx->r4, 0X1B00);
    // 0x8001B33C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8001B340: addiu       $t0, $t0, 0x5870
    ctx->r8 = ADD32(ctx->r8, 0X5870);
    // 0x8001B344: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8001B348: jal         0x80080910
    // 0x8001B34C: subu        $a1, $t0, $a0
    ctx->r5 = SUB32(ctx->r8, ctx->r4);
    func_80080910(rdram, ctx);
        goto after_8;
    // 0x8001B34C: subu        $a1, $t0, $a0
    ctx->r5 = SUB32(ctx->r8, ctx->r4);
    after_8:
    // 0x8001B350: jal         0x8003A108
    // 0x8001B354: nop

    func_8003A108(rdram, ctx);
        goto after_9;
    // 0x8001B354: nop

    after_9:
    // 0x8001B358: jal         0x8003A150
    // 0x8001B35C: nop

    func_8003A150(rdram, ctx);
        goto after_10;
    // 0x8001B35C: nop

    after_10:
    // 0x8001B360: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001B364: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001B368: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B36C: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x8001B370: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x8001B374: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x8001B378: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x8001B37C: addiu       $t1, $t1, 0x65D0
    ctx->r9 = ADD32(ctx->r9, 0X65D0);
    // 0x8001B380: addiu       $t2, $t2, 0x67F0
    ctx->r10 = ADD32(ctx->r10, 0X67F0);
    // 0x8001B384: addiu       $t3, $t3, 0x65F0
    ctx->r11 = ADD32(ctx->r11, 0X65F0);
    // 0x8001B388: addiu       $t4, $t4, 0xD20
    ctx->r12 = ADD32(ctx->r12, 0XD20);
    // 0x8001B38C: sw          $t1, 0x7ED9($at)
    MEM_W(0X7ED9, ctx->r1) = ctx->r9;
    // 0x8001B390: sw          $t2, 0x7EDD($at)
    MEM_W(0X7EDD, ctx->r1) = ctx->r10;
    // 0x8001B394: sw          $t3, 0x7EE1($at)
    MEM_W(0X7EE1, ctx->r1) = ctx->r11;
    // 0x8001B398: jal         0x8002F2AC
    // 0x8001B39C: sw          $t4, 0x7EE5($at)
    MEM_W(0X7EE5, ctx->r1) = ctx->r12;
    func_8002F2AC(rdram, ctx);
        goto after_11;
    // 0x8001B39C: sw          $t4, 0x7EE5($at)
    MEM_W(0X7EE5, ctx->r1) = ctx->r12;
    after_11:
    // 0x8001B3A0: jal         0x80027B60
    // 0x8001B3A4: nop

    func_80027B60(rdram, ctx);
        goto after_12;
    // 0x8001B3A4: nop

    after_12:
    // 0x8001B3A8: jal         0x80063B94
    // 0x8001B3AC: nop

    func_80063B94(rdram, ctx);
        goto after_13;
    // 0x8001B3AC: nop

    after_13:
    // 0x8001B3B0: jal         0x800603F0
    // 0x8001B3B4: nop

    func_800603F0(rdram, ctx);
        goto after_14;
    // 0x8001B3B4: nop

    after_14:
    // 0x8001B3B8: jal         0x8000E300
    // 0x8001B3BC: nop

    func_8000E300(rdram, ctx);
        goto after_15;
    // 0x8001B3BC: nop

    after_15:
    // 0x8001B3C0: jal         0x800363F0
    // 0x8001B3C4: nop

    func_800363F0(rdram, ctx);
        goto after_16;
    // 0x8001B3C4: nop

    after_16:
    // 0x8001B3C8: jal         0x80020270
    // 0x8001B3CC: nop

    func_80020270(rdram, ctx);
        goto after_17;
    // 0x8001B3CC: nop

    after_17:
    // 0x8001B3D0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8001B3D4: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001B3D8: sb          $zero, 0x7D4($v0)
    MEM_B(0X7D4, ctx->r2) = 0;
    // 0x8001B3DC: jal         0x80021C48
    // 0x8001B3E0: sb          $zero, 0x7D5($v0)
    MEM_B(0X7D5, ctx->r2) = 0;
    func_80021C48(rdram, ctx);
        goto after_18;
    // 0x8001B3E0: sb          $zero, 0x7D5($v0)
    MEM_B(0X7D5, ctx->r2) = 0;
    after_18:
    // 0x8001B3E4: bne         $v0, $zero, L_8001B3FC
    if (ctx->r2 != 0) {
        // 0x8001B3E8: nop
    
            goto L_8001B3FC;
    }
    // 0x8001B3E8: nop

    // 0x8001B3EC: jal         0x8001BAC4
    // 0x8001B3F0: nop

    func_8001BAC4(rdram, ctx);
        goto after_19;
    // 0x8001B3F0: nop

    after_19:
    // 0x8001B3F4: b           L_8001B408
    // 0x8001B3F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001B408;
    // 0x8001B3F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B3FC:
    // 0x8001B3FC: jal         0x8001BA88
    // 0x8001B400: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_8001BA88(rdram, ctx);
        goto after_20;
    // 0x8001B400: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_20:
    // 0x8001B404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B408:
    // 0x8001B408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B40C: jr          $ra
    // 0x8001B410: nop

    return;
    // 0x8001B410: nop

;}
RECOMP_FUNC void func_8001B414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B414: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x8001B418: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x8001B41C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B424: addiu       $v0, $v1, 0x7FFF
    ctx->r2 = ADD32(ctx->r3, 0X7FFF);
    // 0x8001B428: lbu         $v0, 0x99F($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X99F);
    // 0x8001B42C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8001B430: beq         $v0, $zero, L_8001B454
    if (ctx->r2 == 0) {
        // 0x8001B434: nop
    
            goto L_8001B454;
    }
    // 0x8001B434: nop

    // 0x8001B438: beq         $v0, $a2, L_8001B4CC
    if (ctx->r2 == ctx->r6) {
        // 0x8001B43C: addiu       $at, $v1, 0x7FFF
        ctx->r1 = ADD32(ctx->r3, 0X7FFF);
            goto L_8001B4CC;
    }
    // 0x8001B43C: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x8001B440: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001B444: beq         $v0, $at, L_8001B4FC
    if (ctx->r2 == ctx->r1) {
        // 0x8001B448: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_8001B4FC;
    }
    // 0x8001B448: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x8001B44C: b           L_8001B50C
    // 0x8001B450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001B50C;
    // 0x8001B450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B454:
    // 0x8001B454: jal         0x8001DCF0
    // 0x8001B458: nop

    func_8001DCF0(rdram, ctx);
        goto after_0;
    // 0x8001B458: nop

    after_0:
    // 0x8001B45C: jal         0x80024960
    // 0x8001B460: nop

    func_80024960(rdram, ctx);
        goto after_1;
    // 0x8001B460: nop

    after_1:
    // 0x8001B464: jal         0x8002F2AC
    // 0x8001B468: nop

    func_8002F2AC(rdram, ctx);
        goto after_2;
    // 0x8001B468: nop

    after_2:
    // 0x8001B46C: jal         0x800603F0
    // 0x8001B470: nop

    func_800603F0(rdram, ctx);
        goto after_3;
    // 0x8001B470: nop

    after_3:
    // 0x8001B474: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8001B478: lhu         $t6, 0x523A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X523A);
    // 0x8001B47C: nop

    // 0x8001B480: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x8001B484: beq         $t7, $zero, L_8001B4BC
    if (ctx->r15 == 0) {
        // 0x8001B488: nop
    
            goto L_8001B4BC;
    }
    // 0x8001B488: nop

    // 0x8001B48C: jal         0x8002230C
    // 0x8001B490: nop

    func_8002230C(rdram, ctx);
        goto after_4;
    // 0x8001B490: nop

    after_4:
    // 0x8001B494: beq         $v0, $zero, L_8001B4AC
    if (ctx->r2 == 0) {
        // 0x8001B498: nop
    
            goto L_8001B4AC;
    }
    // 0x8001B498: nop

    // 0x8001B49C: jal         0x8001BA88
    // 0x8001B4A0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001BA88(rdram, ctx);
        goto after_5;
    // 0x8001B4A0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_5:
    // 0x8001B4A4: b           L_8001B50C
    // 0x8001B4A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001B50C;
    // 0x8001B4A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B4AC:
    // 0x8001B4AC: jal         0x8001BA08
    // 0x8001B4B0: nop

    func_8001BA08(rdram, ctx);
        goto after_6;
    // 0x8001B4B0: nop

    after_6:
    // 0x8001B4B4: b           L_8001B50C
    // 0x8001B4B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001B50C;
    // 0x8001B4B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B4BC:
    // 0x8001B4BC: jal         0x8001BA88
    // 0x8001B4C0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001BA88(rdram, ctx);
        goto after_7;
    // 0x8001B4C0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_7:
    // 0x8001B4C4: b           L_8001B50C
    // 0x8001B4C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001B50C;
    // 0x8001B4C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B4CC:
    // 0x8001B4CC: sh          $a2, 0x995($at)
    MEM_H(0X995, ctx->r1) = ctx->r6;
    // 0x8001B4D0: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x8001B4D4: lw          $a1, 0x53AC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X53AC);
    // 0x8001B4D8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8001B4DC: jal         0x80022494
    // 0x8001B4E0: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    func_80022494(rdram, ctx);
        goto after_8;
    // 0x8001B4E0: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    after_8:
    // 0x8001B4E4: beq         $v0, $zero, L_8001B50C
    if (ctx->r2 == 0) {
        // 0x8001B4E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001B50C;
    }
    // 0x8001B4E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B4EC: jal         0x8001BA08
    // 0x8001B4F0: nop

    func_8001BA08(rdram, ctx);
        goto after_9;
    // 0x8001B4F0: nop

    after_9:
    // 0x8001B4F4: b           L_8001B50C
    // 0x8001B4F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001B50C;
    // 0x8001B4F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B4FC:
    // 0x8001B4FC: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x8001B500: jal         0x8001BA88
    // 0x8001B504: sh          $zero, 0x995($at)
    MEM_H(0X995, ctx->r1) = 0;
    func_8001BA88(rdram, ctx);
        goto after_10;
    // 0x8001B504: sh          $zero, 0x995($at)
    MEM_H(0X995, ctx->r1) = 0;
    after_10:
    // 0x8001B508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B50C:
    // 0x8001B50C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B510: jr          $ra
    // 0x8001B514: nop

    return;
    // 0x8001B514: nop

;}
RECOMP_FUNC void func_8001B518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B518: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B51C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B520: jal         0x8033EE00
    // 0x8001B524: nop

    LOOKUP_FUNC(0x8033EE00)(rdram, ctx);
        goto after_0;
    // 0x8001B524: nop

    after_0:
    // 0x8001B528: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8001B52C: lbu         $t6, 0x522D($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X522D);
    // 0x8001B530: nop

    // 0x8001B534: beq         $t6, $zero, L_8001B560
    if (ctx->r14 == 0) {
        // 0x8001B538: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001B560;
    }
    // 0x8001B538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B53C: jal         0x800839E0
    // 0x8001B540: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_1;
    // 0x8001B540: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x8001B544: jal         0x802B42A0
    // 0x8001B548: nop

    LOOKUP_FUNC(0x802B42A0)(rdram, ctx);
        goto after_2;
    // 0x8001B548: nop

    after_2:
    // 0x8001B54C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8001B550: sh          $zero, 0x522A($at)
    MEM_H(0X522A, ctx->r1) = 0;
    // 0x8001B554: jal         0x8001BA88
    // 0x8001B558: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8001BA88(rdram, ctx);
        goto after_3;
    // 0x8001B558: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x8001B55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B560:
    // 0x8001B560: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B564: jr          $ra
    // 0x8001B568: nop

    return;
    // 0x8001B568: nop

;}
RECOMP_FUNC void func_8001B56C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B56C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B574: jal         0x802B4D90
    // 0x8001B578: nop

    LOOKUP_FUNC(0x802B4D90)(rdram, ctx);
        goto after_0;
    // 0x8001B578: nop

    after_0:
    // 0x8001B57C: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8001B580: lbu         $t6, 0x522D($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X522D);
    // 0x8001B584: nop

    // 0x8001B588: beq         $t6, $zero, L_8001B5A4
    if (ctx->r14 == 0) {
        // 0x8001B58C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001B5A4;
    }
    // 0x8001B58C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B590: jal         0x8001BAC4
    // 0x8001B594: nop

    func_8001BAC4(rdram, ctx);
        goto after_1;
    // 0x8001B594: nop

    after_1:
    // 0x8001B598: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8001B59C: sh          $zero, 0x6968($at)
    MEM_H(0X6968, ctx->r1) = 0;
    // 0x8001B5A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B5A4:
    // 0x8001B5A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B5A8: jr          $ra
    // 0x8001B5AC: nop

    return;
    // 0x8001B5AC: nop

;}
RECOMP_FUNC void func_8001B5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B5B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B5B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B5B8: jal         0x802B3518
    // 0x8001B5BC: nop

    LOOKUP_FUNC(0x802B3518)(rdram, ctx);
        goto after_0;
    // 0x8001B5BC: nop

    after_0:
    // 0x8001B5C0: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8001B5C4: lbu         $t6, 0x522D($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X522D);
    // 0x8001B5C8: nop

    // 0x8001B5CC: beq         $t6, $zero, L_8001B5F8
    if (ctx->r14 == 0) {
        // 0x8001B5D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001B5F8;
    }
    // 0x8001B5D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B5D4: jal         0x8000E300
    // 0x8001B5D8: nop

    func_8000E300(rdram, ctx);
        goto after_1;
    // 0x8001B5D8: nop

    after_1:
    // 0x8001B5DC: jal         0x8001BA88
    // 0x8001B5E0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8001BA88(rdram, ctx);
        goto after_2;
    // 0x8001B5E0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x8001B5E4: jal         0x8001B7A8
    // 0x8001B5E8: nop

    func_8001B7A8(rdram, ctx);
        goto after_3;
    // 0x8001B5E8: nop

    after_3:
    // 0x8001B5EC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8001B5F0: sh          $zero, 0x6968($at)
    MEM_H(0X6968, ctx->r1) = 0;
    // 0x8001B5F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B5F8:
    // 0x8001B5F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B5FC: jr          $ra
    // 0x8001B600: nop

    return;
    // 0x8001B600: nop

;}
RECOMP_FUNC void func_8001B604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B604: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B608: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B60C: jal         0x8001BAC4
    // 0x8001B610: nop

    func_8001BAC4(rdram, ctx);
        goto after_0;
    // 0x8001B610: nop

    after_0:
    // 0x8001B614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B61C: jr          $ra
    // 0x8001B620: nop

    return;
    // 0x8001B620: nop

;}
RECOMP_FUNC void func_8001B624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B624: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B62C: jal         0x80025D00
    // 0x8001B630: nop

    func_80025D00(rdram, ctx);
        goto after_0;
    // 0x8001B630: nop

    after_0:
    // 0x8001B634: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8001B638: lbu         $t6, 0x5233($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5233);
    // 0x8001B63C: nop

    // 0x8001B640: beq         $t6, $zero, L_8001B654
    if (ctx->r14 == 0) {
        // 0x8001B644: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001B654;
    }
    // 0x8001B644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B648: jal         0x8001BA88
    // 0x8001B64C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001BA88(rdram, ctx);
        goto after_1;
    // 0x8001B64C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8001B650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B654:
    // 0x8001B654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B658: jr          $ra
    // 0x8001B65C: nop

    return;
    // 0x8001B65C: nop

;}
RECOMP_FUNC void func_8001B660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B660: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B668: jal         0x8001BA88
    // 0x8001B66C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8001BA88(rdram, ctx);
        goto after_0;
    // 0x8001B66C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x8001B670: jal         0x8001B7A8
    // 0x8001B674: nop

    func_8001B7A8(rdram, ctx);
        goto after_1;
    // 0x8001B674: nop

    after_1:
    // 0x8001B678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B67C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B680: jr          $ra
    // 0x8001B684: nop

    return;
    // 0x8001B684: nop

;}
RECOMP_FUNC void func_8001B688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B688: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B68C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B690: jal         0x802B4678
    // 0x8001B694: nop

    LOOKUP_FUNC(0x802B4678)(rdram, ctx);
        goto after_0;
    // 0x8001B694: nop

    after_0:
    // 0x8001B698: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001B69C: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001B6A0: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B6A4: lbu         $t6, 0x9A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X9A4);
    // 0x8001B6A8: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B6AC: beq         $t6, $zero, L_8001B6BC
    if (ctx->r14 == 0) {
        // 0x8001B6B0: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_8001B6BC;
    }
    // 0x8001B6B0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8001B6B4: jal         0x8001BA88
    // 0x8001B6B8: sh          $zero, 0x99B($at)
    MEM_H(0X99B, ctx->r1) = 0;
    func_8001BA88(rdram, ctx);
        goto after_1;
    // 0x8001B6B8: sh          $zero, 0x99B($at)
    MEM_H(0X99B, ctx->r1) = 0;
    after_1:
L_8001B6BC:
    // 0x8001B6BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B6C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B6C4: jr          $ra
    // 0x8001B6C8: nop

    return;
    // 0x8001B6C8: nop

;}
RECOMP_FUNC void func_8001B6CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B6CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B6D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B6D4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8001B6D8: jal         0x802B3818
    // 0x8001B6DC: sb          $zero, -0x2FAF($at)
    MEM_B(-0X2FAF, ctx->r1) = 0;
    LOOKUP_FUNC(0x802B3818)(rdram, ctx);
        goto after_0;
    // 0x8001B6DC: sb          $zero, -0x2FAF($at)
    MEM_B(-0X2FAF, ctx->r1) = 0;
    after_0:
    // 0x8001B6E0: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8001B6E4: lbu         $t6, 0x522D($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X522D);
    // 0x8001B6E8: nop

    // 0x8001B6EC: beq         $t6, $zero, L_8001B708
    if (ctx->r14 == 0) {
        // 0x8001B6F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001B708;
    }
    // 0x8001B6F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B6F4: jal         0x802B4B3C
    // 0x8001B6F8: nop

    LOOKUP_FUNC(0x802B4B3C)(rdram, ctx);
        goto after_1;
    // 0x8001B6F8: nop

    after_1:
    // 0x8001B6FC: jal         0x8001BA88
    // 0x8001B700: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8001BA88(rdram, ctx);
        goto after_2;
    // 0x8001B700: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x8001B704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B708:
    // 0x8001B708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B70C: jr          $ra
    // 0x8001B710: nop

    return;
    // 0x8001B710: nop

;}
RECOMP_FUNC void func_8001B714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B714: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001B718: lbu         $v0, 0x522E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X522E);
    // 0x8001B71C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B720: beq         $v0, $zero, L_8001B744
    if (ctx->r2 == 0) {
        // 0x8001B724: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8001B744;
    }
    // 0x8001B724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B728: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001B72C: beq         $v0, $at, L_8001B778
    if (ctx->r2 == ctx->r1) {
        // 0x8001B730: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8001B778;
    }
    // 0x8001B730: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001B734: beq         $v0, $at, L_8001B788
    if (ctx->r2 == ctx->r1) {
        // 0x8001B738: addiu       $t7, $zero, 0xA
        ctx->r15 = ADD32(0, 0XA);
            goto L_8001B788;
    }
    // 0x8001B738: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x8001B73C: b           L_8001B79C
    // 0x8001B740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001B79C;
    // 0x8001B740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B744:
    // 0x8001B744: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001B748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001B74C: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8001B750: jal         0x800201A8
    // 0x8001B754: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    func_800201A8(rdram, ctx);
        goto after_0;
    // 0x8001B754: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_0:
    // 0x8001B758: jal         0x80035530
    // 0x8001B75C: nop

    func_80035530(rdram, ctx);
        goto after_1;
    // 0x8001B75C: nop

    after_1:
    // 0x8001B760: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8001B764: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8001B768: jal         0x8001BA08
    // 0x8001B76C: sh          $t6, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = ctx->r14;
    func_8001BA08(rdram, ctx);
        goto after_2;
    // 0x8001B76C: sh          $t6, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = ctx->r14;
    after_2:
    // 0x8001B770: b           L_8001B79C
    // 0x8001B774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001B79C;
    // 0x8001B774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B778:
    // 0x8001B778: jal         0x8002910C
    // 0x8001B77C: nop

    func_8002910C(rdram, ctx);
        goto after_3;
    // 0x8001B77C: nop

    after_3:
    // 0x8001B780: b           L_8001B79C
    // 0x8001B784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001B79C;
    // 0x8001B784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B788:
    // 0x8001B788: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8001B78C: sh          $t7, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = ctx->r15;
    // 0x8001B790: jal         0x8001BA88
    // 0x8001B794: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001BA88(rdram, ctx);
        goto after_4;
    // 0x8001B794: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x8001B798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B79C:
    // 0x8001B79C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B7A0: jr          $ra
    // 0x8001B7A4: nop

    return;
    // 0x8001B7A4: nop

;}
RECOMP_FUNC void func_8001B7A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B7A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B7AC: lui         $a0, 0x11
    ctx->r4 = S32(0X11 << 16);
    // 0x8001B7B0: lui         $t7, 0x12
    ctx->r15 = S32(0X12 << 16);
    // 0x8001B7B4: addiu       $a0, $a0, 0x130
    ctx->r4 = ADD32(ctx->r4, 0X130);
    // 0x8001B7B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B7BC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001B7C0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8001B7C4: addiu       $t7, $t7, -0x45F0
    ctx->r15 = ADD32(ctx->r15, -0X45F0);
    // 0x8001B7C8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8001B7CC: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8001B7D0: addiu       $a1, $a1, -0x1200
    ctx->r5 = ADD32(ctx->r5, -0X1200);
    // 0x8001B7D4: jal         0x8001B1B4
    // 0x8001B7D8: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8001B7D8: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8001B7DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B7E0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8001B7E4: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8001B7E8: jr          $ra
    // 0x8001B7EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001B7EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001B7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B7F0: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001B7F4: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001B7F8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001B7FC: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B800: sb          $a0, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r4;
    // 0x8001B804: jr          $ra
    // 0x8001B808: sb          $zero, 0x9A6($at)
    MEM_B(0X9A6, ctx->r1) = 0;
    return;
    // 0x8001B808: sb          $zero, 0x9A6($at)
    MEM_B(0X9A6, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8001B80C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B80C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001B810: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001B814: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B818: lbu         $t6, 0x9A5($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X9A5);
    // 0x8001B81C: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B820: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001B824: sb          $t7, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r15;
    // 0x8001B828: jr          $ra
    // 0x8001B82C: sb          $zero, 0x9A6($at)
    MEM_B(0X9A6, ctx->r1) = 0;
    return;
    // 0x8001B82C: sb          $zero, 0x9A6($at)
    MEM_B(0X9A6, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8001B830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B830: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001B834: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001B838: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B83C: lbu         $t6, 0x9A5($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X9A5);
    // 0x8001B840: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B844: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8001B848: sb          $t7, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r15;
    // 0x8001B84C: jr          $ra
    // 0x8001B850: sb          $zero, 0x9A6($at)
    MEM_B(0X9A6, ctx->r1) = 0;
    return;
    // 0x8001B850: sb          $zero, 0x9A6($at)
    MEM_B(0X9A6, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8001B854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B854: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B858: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001B85C: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001B860: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B864: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001B868: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8001B86C: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B870: sb          $a1, 0x9A3($at)
    MEM_B(0X9A3, ctx->r1) = ctx->r5;
    // 0x8001B874: sb          $zero, 0x9A4($at)
    MEM_B(0X9A4, ctx->r1) = 0;
    // 0x8001B878: jal         0x8001B7F0
    // 0x8001B87C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001B7F0(rdram, ctx);
        goto after_0;
    // 0x8001B87C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001B880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B888: jr          $ra
    // 0x8001B88C: nop

    return;
    // 0x8001B88C: nop

;}
RECOMP_FUNC void func_8001B890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B890: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001B894: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001B898: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B89C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B8A0: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B8A4: lbu         $t6, 0x9A3($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X9A3);
    // 0x8001B8A8: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B8AC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001B8B0: sb          $t7, 0x9A3($at)
    MEM_B(0X9A3, ctx->r1) = ctx->r15;
    // 0x8001B8B4: sb          $zero, 0x9A4($at)
    MEM_B(0X9A4, ctx->r1) = 0;
    // 0x8001B8B8: jal         0x8001B7F0
    // 0x8001B8BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001B7F0(rdram, ctx);
        goto after_0;
    // 0x8001B8BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001B8C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B8C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B8C8: jr          $ra
    // 0x8001B8CC: nop

    return;
    // 0x8001B8CC: nop

;}
RECOMP_FUNC void func_8001B8D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B8D0: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001B8D4: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001B8D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B8DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B8E0: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B8E4: lbu         $t6, 0x9A3($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X9A3);
    // 0x8001B8E8: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B8EC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8001B8F0: sb          $t7, 0x9A3($at)
    MEM_B(0X9A3, ctx->r1) = ctx->r15;
    // 0x8001B8F4: sb          $zero, 0x9A4($at)
    MEM_B(0X9A4, ctx->r1) = 0;
    // 0x8001B8F8: jal         0x8001B7F0
    // 0x8001B8FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001B7F0(rdram, ctx);
        goto after_0;
    // 0x8001B8FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001B900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B908: jr          $ra
    // 0x8001B90C: nop

    return;
    // 0x8001B90C: nop

;}
RECOMP_FUNC void func_8001B910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B910: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B914: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001B918: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001B91C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B920: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001B924: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8001B928: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B92C: sb          $a1, 0x9A1($at)
    MEM_B(0X9A1, ctx->r1) = ctx->r5;
    // 0x8001B930: sb          $zero, 0x9A2($at)
    MEM_B(0X9A2, ctx->r1) = 0;
    // 0x8001B934: jal         0x8001B854
    // 0x8001B938: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001B854(rdram, ctx);
        goto after_0;
    // 0x8001B938: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001B93C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B944: jr          $ra
    // 0x8001B948: nop

    return;
    // 0x8001B948: nop

;}
RECOMP_FUNC void func_8001B94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B94C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001B950: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001B954: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B958: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B95C: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B960: lbu         $t6, 0x9A1($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X9A1);
    // 0x8001B964: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B968: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001B96C: sb          $t7, 0x9A1($at)
    MEM_B(0X9A1, ctx->r1) = ctx->r15;
    // 0x8001B970: sb          $zero, 0x9A2($at)
    MEM_B(0X9A2, ctx->r1) = 0;
    // 0x8001B974: jal         0x8001B854
    // 0x8001B978: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001B854(rdram, ctx);
        goto after_0;
    // 0x8001B978: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001B97C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B980: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B984: jr          $ra
    // 0x8001B988: nop

    return;
    // 0x8001B988: nop

;}
RECOMP_FUNC void func_8001B98C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B98C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001B990: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001B994: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B998: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B99C: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B9A0: lbu         $t6, 0x9A1($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X9A1);
    // 0x8001B9A4: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B9A8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8001B9AC: sb          $t7, 0x9A1($at)
    MEM_B(0X9A1, ctx->r1) = ctx->r15;
    // 0x8001B9B0: sb          $zero, 0x9A2($at)
    MEM_B(0X9A2, ctx->r1) = 0;
    // 0x8001B9B4: jal         0x8001B854
    // 0x8001B9B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001B854(rdram, ctx);
        goto after_0;
    // 0x8001B9B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001B9BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B9C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B9C4: jr          $ra
    // 0x8001B9C8: nop

    return;
    // 0x8001B9C8: nop

;}
RECOMP_FUNC void func_8001B9CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B9CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B9D0: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001B9D4: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001B9D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B9DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001B9E0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8001B9E4: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001B9E8: sb          $a1, 0x99F($at)
    MEM_B(0X99F, ctx->r1) = ctx->r5;
    // 0x8001B9EC: sb          $zero, 0x9A0($at)
    MEM_B(0X9A0, ctx->r1) = 0;
    // 0x8001B9F0: jal         0x8001B910
    // 0x8001B9F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001B910(rdram, ctx);
        goto after_0;
    // 0x8001B9F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001B9F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B9FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001BA00: jr          $ra
    // 0x8001BA04: nop

    return;
    // 0x8001BA04: nop

;}
RECOMP_FUNC void func_8001BA08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BA08: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001BA0C: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001BA10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001BA14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001BA18: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001BA1C: lbu         $t6, 0x99F($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X99F);
    // 0x8001BA20: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001BA24: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001BA28: sb          $t7, 0x99F($at)
    MEM_B(0X99F, ctx->r1) = ctx->r15;
    // 0x8001BA2C: sb          $zero, 0x9A0($at)
    MEM_B(0X9A0, ctx->r1) = 0;
    // 0x8001BA30: jal         0x8001B910
    // 0x8001BA34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001B910(rdram, ctx);
        goto after_0;
    // 0x8001BA34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001BA38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001BA3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001BA40: jr          $ra
    // 0x8001BA44: nop

    return;
    // 0x8001BA44: nop

;}
RECOMP_FUNC void func_8001BA48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BA48: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001BA4C: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001BA50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001BA54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001BA58: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001BA5C: lbu         $t6, 0x99F($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X99F);
    // 0x8001BA60: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001BA64: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8001BA68: sb          $t7, 0x99F($at)
    MEM_B(0X99F, ctx->r1) = ctx->r15;
    // 0x8001BA6C: sb          $zero, 0x9A0($at)
    MEM_B(0X9A0, ctx->r1) = 0;
    // 0x8001BA70: jal         0x8001B910
    // 0x8001BA74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001B910(rdram, ctx);
        goto after_0;
    // 0x8001BA74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001BA78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001BA7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001BA80: jr          $ra
    // 0x8001BA84: nop

    return;
    // 0x8001BA84: nop

;}
RECOMP_FUNC void func_8001BA88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BA88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001BA8C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001BA90: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001BA94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001BA98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001BA9C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8001BAA0: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001BAA4: sb          $a1, 0x99D($at)
    MEM_B(0X99D, ctx->r1) = ctx->r5;
    // 0x8001BAA8: sb          $zero, 0x99E($at)
    MEM_B(0X99E, ctx->r1) = 0;
    // 0x8001BAAC: jal         0x8001B9CC
    // 0x8001BAB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001B9CC(rdram, ctx);
        goto after_0;
    // 0x8001BAB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001BAB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001BAB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001BABC: jr          $ra
    // 0x8001BAC0: nop

    return;
    // 0x8001BAC0: nop

;}
RECOMP_FUNC void func_8001BAC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BAC4: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8001BAC8: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8001BACC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001BAD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001BAD4: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001BAD8: lbu         $t6, 0x99D($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X99D);
    // 0x8001BADC: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8001BAE0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001BAE4: sb          $t7, 0x99D($at)
    MEM_B(0X99D, ctx->r1) = ctx->r15;
    // 0x8001BAE8: sb          $zero, 0x99E($at)
    MEM_B(0X99E, ctx->r1) = 0;
    // 0x8001BAEC: jal         0x8001B9CC
    // 0x8001BAF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001B9CC(rdram, ctx);
        goto after_0;
    // 0x8001BAF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001BAF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001BAF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001BAFC: jr          $ra
    // 0x8001BB00: nop

    return;
    // 0x8001BB00: nop

;}
RECOMP_FUNC void func_8001BB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BB50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001BB54: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8001BB58: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8001BB5C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001BB60: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8001BB64: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8001BB68: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8001BB6C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001BB70: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8001BB74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001BB78: sw          $zero, 0x434($a0)
    MEM_W(0X434, ctx->r4) = 0;
    // 0x8001BB7C: sw          $zero, 0x438($a0)
    MEM_W(0X438, ctx->r4) = 0;
    // 0x8001BB80: sw          $zero, 0x420($a0)
    MEM_W(0X420, ctx->r4) = 0;
    // 0x8001BB84: sw          $zero, 0x43C($a0)
    MEM_W(0X43C, ctx->r4) = 0;
    // 0x8001BB88: sw          $zero, 0x424($a0)
    MEM_W(0X424, ctx->r4) = 0;
    // 0x8001BB8C: sw          $zero, 0x428($a0)
    MEM_W(0X428, ctx->r4) = 0;
    // 0x8001BB90: sw          $zero, 0x42C($a0)
    MEM_W(0X42C, ctx->r4) = 0;
    // 0x8001BB94: sw          $zero, 0x430($a0)
    MEM_W(0X430, ctx->r4) = 0;
    // 0x8001BB98: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x8001BB9C: sh          $t7, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r15;
    // 0x8001BBA0: addiu       $s1, $a0, 0x40
    ctx->r17 = ADD32(ctx->r4, 0X40);
    // 0x8001BBA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8001BBA8: addiu       $a1, $s0, 0x58
    ctx->r5 = ADD32(ctx->r16, 0X58);
    // 0x8001BBAC: jal         0x80081C80
    // 0x8001BBB0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x8001BBB0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8001BBB4: addiu       $a0, $s0, 0x158
    ctx->r4 = ADD32(ctx->r16, 0X158);
    // 0x8001BBB8: addiu       $a1, $s0, 0x170
    ctx->r5 = ADD32(ctx->r16, 0X170);
    // 0x8001BBBC: jal         0x80081C80
    // 0x8001BBC0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x8001BBC0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x8001BBC4: jal         0x80084160
    // 0x8001BBC8: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    osCreateViManager_recomp(rdram, ctx);
        goto after_2;
    // 0x8001BBC8: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_2:
    // 0x8001BBCC: lbu         $t8, 0x37($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X37);
    // 0x8001BBD0: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8001BBD4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8001BBD8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001BBDC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8001BBE0: addiu       $t0, $t0, 0x1900
    ctx->r8 = ADD32(ctx->r8, 0X1900);
    // 0x8001BBE4: jal         0x800844C0
    // 0x8001BBE8: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    osViSetMode_recomp(rdram, ctx);
        goto after_3;
    // 0x8001BBE8: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    after_3:
    // 0x8001BBEC: jal         0x80083C00
    // 0x8001BBF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80083C00(rdram, ctx);
        goto after_4;
    // 0x8001BBF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x8001BBF4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8001BBF8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8001BBFC: jal         0x80084530
    // 0x8001BC00: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x8001BC00: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    after_5:
    // 0x8001BC04: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8001BC08: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8001BC0C: jal         0x80084530
    // 0x8001BC10: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x8001BC10: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    after_6:
    // 0x8001BC14: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x8001BC18: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8001BC1C: jal         0x80084530
    // 0x8001BC20: addiu       $a2, $zero, 0x29D
    ctx->r6 = ADD32(0, 0X29D);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x8001BC20: addiu       $a2, $zero, 0x29D
    ctx->r6 = ADD32(0, 0X29D);
    after_7:
    // 0x8001BC24: lbu         $a2, 0x3B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3B);
    // 0x8001BC28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8001BC2C: jal         0x800845A0
    // 0x8001BC30: addiu       $a1, $zero, 0x29A
    ctx->r5 = ADD32(0, 0X29A);
    osViSetEvent_recomp(rdram, ctx);
        goto after_8;
    // 0x8001BC30: addiu       $a1, $zero, 0x29A
    ctx->r5 = ADD32(0, 0X29A);
    after_8:
    // 0x8001BC34: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8001BC38: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8001BC3C: addiu       $s1, $s0, 0x270
    ctx->r17 = ADD32(ctx->r16, 0X270);
    // 0x8001BC40: lui         $a2, 0x8002
    ctx->r6 = S32(0X8002 << 16);
    // 0x8001BC44: addiu       $a2, $a2, -0x4298
    ctx->r6 = ADD32(ctx->r6, -0X4298);
    // 0x8001BC48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8001BC4C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8001BC50: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8001BC54: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8001BC58: jal         0x80081CB0
    // 0x8001BC5C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    osCreateThread_recomp(rdram, ctx);
        goto after_9;
    // 0x8001BC5C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_9:
    // 0x8001BC60: jal         0x80081E00
    // 0x8001BC64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    osStartThread_recomp(rdram, ctx);
        goto after_10;
    // 0x8001BC64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x8001BC68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001BC6C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BC70: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8001BC74: jr          $ra
    // 0x8001BC78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001BC78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001BC7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BC7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001BC80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001BC84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001BC88: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8001BC8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8001BC90: jal         0x80084610
    // 0x8001BC94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8001BC94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8001BC98: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8001BC9C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BCA0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001BCA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8001BCA8: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x8001BCAC: lw          $t7, 0x420($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X420);
    // 0x8001BCB0: nop

    // 0x8001BCB4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8001BCB8: jal         0x80084610
    // 0x8001BCBC: sw          $a1, 0x420($v1)
    MEM_W(0X420, ctx->r3) = ctx->r5;
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x8001BCBC: sw          $a1, 0x420($v1)
    MEM_W(0X420, ctx->r3) = ctx->r5;
    after_1:
    // 0x8001BCC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001BCC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001BCC8: jr          $ra
    // 0x8001BCCC: nop

    return;
    // 0x8001BCCC: nop

;}
RECOMP_FUNC void func_8001BD60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BD60: jr          $ra
    // 0x8001BD64: addiu       $v0, $a0, 0x158
    ctx->r2 = ADD32(ctx->r4, 0X158);
    return;
    // 0x8001BD64: addiu       $v0, $a0, 0x158
    ctx->r2 = ADD32(ctx->r4, 0X158);
;}
RECOMP_FUNC void func_8001BD68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BD68: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8001BD6C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8001BD70: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8001BD74: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8001BD78: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8001BD7C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001BD80: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001BD84: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001BD88: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8001BD8C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8001BD90: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001BD94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001BD98: addiu       $s3, $a0, 0x40
    ctx->r19 = ADD32(ctx->r4, 0X40);
    // 0x8001BD9C: addiu       $s4, $sp, 0x54
    ctx->r20 = ADD32(ctx->r29, 0X54);
    // 0x8001BDA0: addiu       $s5, $zero, 0x29A
    ctx->r21 = ADD32(0, 0X29A);
    // 0x8001BDA4: addiu       $s6, $zero, 0x29B
    ctx->r22 = ADD32(0, 0X29B);
    // 0x8001BDA8: addiu       $s7, $zero, 0x29C
    ctx->r23 = ADD32(0, 0X29C);
    // 0x8001BDAC: addiu       $fp, $zero, 0x29D
    ctx->r30 = ADD32(0, 0X29D);
    // 0x8001BDB0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_8001BDB4:
    // 0x8001BDB4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8001BDB8: jal         0x80081F50
    // 0x8001BDBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8001BDBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8001BDC0: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x8001BDC4: nop

    // 0x8001BDC8: beq         $v0, $s5, L_8001BDF0
    if (ctx->r2 == ctx->r21) {
        // 0x8001BDCC: nop
    
            goto L_8001BDF0;
    }
    // 0x8001BDCC: nop

    // 0x8001BDD0: beq         $v0, $s6, L_8001BE00
    if (ctx->r2 == ctx->r22) {
        // 0x8001BDD4: nop
    
            goto L_8001BE00;
    }
    // 0x8001BDD4: nop

    // 0x8001BDD8: beq         $v0, $s7, L_8001BE10
    if (ctx->r2 == ctx->r23) {
        // 0x8001BDDC: nop
    
            goto L_8001BE10;
    }
    // 0x8001BDDC: nop

    // 0x8001BDE0: beq         $v0, $fp, L_8001BE20
    if (ctx->r2 == ctx->r30) {
        // 0x8001BDE4: nop
    
            goto L_8001BE20;
    }
    // 0x8001BDE4: nop

    // 0x8001BDE8: b           L_8001BDB4
    // 0x8001BDEC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_8001BDB4;
    // 0x8001BDEC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_8001BDF0:
    // 0x8001BDF0: jal         0x8001BEA0
    // 0x8001BDF4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8001BEA0(rdram, ctx);
        goto after_1;
    // 0x8001BDF4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x8001BDF8: b           L_8001BDB4
    // 0x8001BDFC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_8001BDB4;
    // 0x8001BDFC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_8001BE00:
    // 0x8001BE00: jal         0x8001BFD0
    // 0x8001BE04: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8001BFD0(rdram, ctx);
        goto after_2;
    // 0x8001BE04: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x8001BE08: b           L_8001BDB4
    // 0x8001BE0C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_8001BDB4;
    // 0x8001BE0C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_8001BE10:
    // 0x8001BE10: jal         0x8001C0C0
    // 0x8001BE14: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8001C0C0(rdram, ctx);
        goto after_3;
    // 0x8001BE14: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x8001BE18: b           L_8001BDB4
    // 0x8001BE1C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_8001BDB4;
    // 0x8001BE1C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_8001BE20:
    // 0x8001BE20: lw          $s0, 0x420($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X420);
    // 0x8001BE24: addiu       $s1, $s2, 0x20
    ctx->r17 = ADD32(ctx->r18, 0X20);
    // 0x8001BE28: beq         $s0, $zero, L_8001BDB4
    if (ctx->r16 == 0) {
        // 0x8001BE2C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_8001BDB4;
    }
    // 0x8001BE2C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_8001BE30:
    // 0x8001BE30: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8001BE34: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8001BE38: jal         0x800828B0
    // 0x8001BE3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x8001BE3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x8001BE40: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8001BE44: nop

    // 0x8001BE48: bne         $s0, $zero, L_8001BE30
    if (ctx->r16 != 0) {
        // 0x8001BE4C: nop
    
            goto L_8001BE30;
    }
    // 0x8001BE4C: nop

    // 0x8001BE50: b           L_8001BDB4
    // 0x8001BE54: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_8001BDB4;
    // 0x8001BE54: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8001BE58: nop

    // 0x8001BE5C: nop

    // 0x8001BE60: nop

    // 0x8001BE64: nop

    // 0x8001BE68: nop

    // 0x8001BE6C: nop

    // 0x8001BE70: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8001BE74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001BE78: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BE7C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001BE80: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001BE84: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001BE88: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001BE8C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001BE90: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8001BE94: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8001BE98: jr          $ra
    // 0x8001BE9C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8001BE9C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8001BEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BEA0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8001BEA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001BEA8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8001BEAC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8001BEB0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001BEB4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001BEB8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8001BEBC: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8001BEC0: lw          $t6, 0x43C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X43C);
    // 0x8001BEC4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8001BEC8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001BECC: addiu       $s3, $sp, 0x44
    ctx->r19 = ADD32(ctx->r29, 0X44);
    // 0x8001BED0: sw          $t7, 0x43C($a0)
    MEM_W(0X43C, ctx->r4) = ctx->r15;
    // 0x8001BED4: addiu       $s2, $a0, 0x158
    ctx->r18 = ADD32(ctx->r4, 0X158);
    // 0x8001BED8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8001BEDC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8001BEE0: jal         0x80081F50
    // 0x8001BEE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8001BEE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8001BEE8: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x8001BEEC: beq         $v0, $s0, L_8001BF18
    if (ctx->r2 == ctx->r16) {
        // 0x8001BEF0: nop
    
            goto L_8001BF18;
    }
    // 0x8001BEF0: nop

    // 0x8001BEF4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
L_8001BEF8:
    // 0x8001BEF8: jal         0x8001C254
    // 0x8001BEFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001C254(rdram, ctx);
        goto after_1;
    // 0x8001BEFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8001BF00: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8001BF04: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8001BF08: jal         0x80081F50
    // 0x8001BF0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x8001BF0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8001BF10: bne         $v0, $s0, L_8001BEF8
    if (ctx->r2 != ctx->r16) {
        // 0x8001BF14: lw          $a1, 0x44($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X44);
            goto L_8001BEF8;
    }
    // 0x8001BF14: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
L_8001BF18:
    // 0x8001BF18: lw          $t8, 0x440($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X440);
    // 0x8001BF1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8001BF20: beq         $t8, $zero, L_8001BF48
    if (ctx->r24 == 0) {
        // 0x8001BF24: addiu       $a1, $sp, 0x34
        ctx->r5 = ADD32(ctx->r29, 0X34);
            goto L_8001BF48;
    }
    // 0x8001BF24: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8001BF28: lw          $t9, 0x434($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X434);
    // 0x8001BF2C: nop

    // 0x8001BF30: beq         $t9, $zero, L_8001BF48
    if (ctx->r25 == 0) {
        // 0x8001BF34: nop
    
            goto L_8001BF48;
    }
    // 0x8001BF34: nop

    // 0x8001BF38: jal         0x8001C38C
    // 0x8001BF3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001C38C(rdram, ctx);
        goto after_3;
    // 0x8001BF3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x8001BF40: b           L_8001BF88
    // 0x8001BF44: lw          $s0, 0x420($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X420);
        goto L_8001BF88;
    // 0x8001BF44: lw          $s0, 0x420($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X420);
L_8001BF48:
    // 0x8001BF48: lw          $t0, 0x434($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X434);
    // 0x8001BF4C: lw          $t3, 0x438($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X438);
    // 0x8001BF50: sltiu       $t1, $t0, 0x1
    ctx->r9 = ctx->r8 < 0X1 ? 1 : 0;
    // 0x8001BF54: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8001BF58: sltiu       $t4, $t3, 0x1
    ctx->r12 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x8001BF5C: or          $s0, $t2, $t4
    ctx->r16 = ctx->r10 | ctx->r12;
    // 0x8001BF60: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8001BF64: jal         0x8001C3D0
    // 0x8001BF68: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_8001C3D0(rdram, ctx);
        goto after_4;
    // 0x8001BF68: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x8001BF6C: beq         $v0, $s0, L_8001BF84
    if (ctx->r2 == ctx->r16) {
        // 0x8001BF70: nop
    
            goto L_8001BF84;
    }
    // 0x8001BF70: nop

    // 0x8001BF74: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8001BF78: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8001BF7C: jal         0x8001C2C0
    // 0x8001BF80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001C2C0(rdram, ctx);
        goto after_5;
    // 0x8001BF80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
L_8001BF84:
    // 0x8001BF84: lw          $s0, 0x420($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X420);
L_8001BF88:
    // 0x8001BF88: nop

    // 0x8001BF8C: beq         $s0, $zero, L_8001BFB8
    if (ctx->r16 == 0) {
        // 0x8001BF90: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8001BFB8;
    }
    // 0x8001BF90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8001BF94:
    // 0x8001BF94: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8001BF98: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8001BF9C: jal         0x800828B0
    // 0x8001BFA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x8001BFA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x8001BFA4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8001BFA8: nop

    // 0x8001BFAC: bne         $s0, $zero, L_8001BF94
    if (ctx->r16 != 0) {
        // 0x8001BFB0: nop
    
            goto L_8001BF94;
    }
    // 0x8001BFB0: nop

    // 0x8001BFB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8001BFB8:
    // 0x8001BFB8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001BFBC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001BFC0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BFC4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8001BFC8: jr          $ra
    // 0x8001BFCC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8001BFCC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8001BFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BFD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001BFD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001BFD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001BFDC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8001BFE0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8001BFE4: lw          $a1, 0x434($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X434);
    // 0x8001BFE8: sw          $zero, 0x434($a0)
    MEM_W(0X434, ctx->r4) = 0;
    // 0x8001BFEC: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x8001BFF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001BFF4: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x8001BFF8: beq         $t7, $zero, L_8001C050
    if (ctx->r15 == 0) {
        // 0x8001BFFC: addiu       $a0, $a1, 0x10
        ctx->r4 = ADD32(ctx->r5, 0X10);
            goto L_8001C050;
    }
    // 0x8001BFFC: addiu       $a0, $a1, 0x10
    ctx->r4 = ADD32(ctx->r5, 0X10);
    // 0x8001C000: jal         0x800846B0
    // 0x8001C004: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    osSpTaskYielded_recomp(rdram, ctx);
        goto after_0;
    // 0x8001C004: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8001C008: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C00C: beq         $v0, $zero, L_8001C050
    if (ctx->r2 == 0) {
        // 0x8001C010: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8001C050;
    }
    // 0x8001C010: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8001C014: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x8001C018: lw          $t0, 0x8($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X8);
    // 0x8001C01C: ori         $t9, $t8, 0x20
    ctx->r25 = ctx->r24 | 0X20;
    // 0x8001C020: andi        $t1, $t0, 0x7
    ctx->r9 = ctx->r8 & 0X7;
    // 0x8001C024: bne         $t1, $at, L_8001C068
    if (ctx->r9 != ctx->r1) {
        // 0x8001C028: sw          $t9, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->r25;
            goto L_8001C068;
    }
    // 0x8001C028: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x8001C02C: lw          $t2, 0x428($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X428);
    // 0x8001C030: nop

    // 0x8001C034: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x8001C038: lw          $t3, 0x430($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X430);
    // 0x8001C03C: sw          $a1, 0x428($s0)
    MEM_W(0X428, ctx->r16) = ctx->r5;
    // 0x8001C040: bne         $t3, $zero, L_8001C068
    if (ctx->r11 != 0) {
        // 0x8001C044: nop
    
            goto L_8001C068;
    }
    // 0x8001C044: nop

    // 0x8001C048: b           L_8001C068
    // 0x8001C04C: sw          $a1, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r5;
        goto L_8001C068;
    // 0x8001C04C: sw          $a1, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r5;
L_8001C050:
    // 0x8001C050: lw          $t4, 0x4($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X4);
    // 0x8001C054: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8001C058: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x8001C05C: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    // 0x8001C060: jal         0x8001C1A4
    // 0x8001C064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001C1A4(rdram, ctx);
        goto after_1;
    // 0x8001C064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_8001C068:
    // 0x8001C068: lw          $t6, 0x434($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X434);
    // 0x8001C06C: lw          $t9, 0x438($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X438);
    // 0x8001C070: sltiu       $t7, $t6, 0x1
    ctx->r15 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x8001C074: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8001C078: sltiu       $t0, $t9, 0x1
    ctx->r8 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x8001C07C: or          $a3, $t8, $t0
    ctx->r7 = ctx->r24 | ctx->r8;
    // 0x8001C080: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x8001C084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001C088: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8001C08C: jal         0x8001C3D0
    // 0x8001C090: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    func_8001C3D0(rdram, ctx);
        goto after_2;
    // 0x8001C090: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x8001C094: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8001C098: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8001C09C: beq         $v0, $a3, L_8001C0B4
    if (ctx->r2 == ctx->r7) {
        // 0x8001C0A0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8001C0B4;
    }
    // 0x8001C0A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C0A4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8001C0A8: jal         0x8001C2C0
    // 0x8001C0AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001C2C0(rdram, ctx);
        goto after_3;
    // 0x8001C0AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8001C0B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8001C0B4:
    // 0x8001C0B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001C0B8: jr          $ra
    // 0x8001C0BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8001C0BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8001C0C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C0C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001C0C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C0C8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8001C0CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8001C0D0: lw          $a1, 0x438($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X438);
    // 0x8001C0D4: sw          $zero, 0x438($a0)
    MEM_W(0X438, ctx->r4) = 0;
    // 0x8001C0D8: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x8001C0DC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8001C0E0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8001C0E4: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x8001C0E8: jal         0x8001C1A4
    // 0x8001C0EC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8001C1A4(rdram, ctx);
        goto after_0;
    // 0x8001C0EC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x8001C0F0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8001C0F4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8001C0F8: lw          $t8, 0x434($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X434);
    // 0x8001C0FC: lw          $t1, 0x438($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X438);
    // 0x8001C100: sltiu       $t9, $t8, 0x1
    ctx->r25 = ctx->r24 < 0X1 ? 1 : 0;
    // 0x8001C104: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8001C108: sltiu       $t2, $t1, 0x1
    ctx->r10 = ctx->r9 < 0X1 ? 1 : 0;
    // 0x8001C10C: or          $a3, $t0, $t2
    ctx->r7 = ctx->r8 | ctx->r10;
    // 0x8001C110: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8001C114: jal         0x8001C3D0
    // 0x8001C118: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_8001C3D0(rdram, ctx);
        goto after_1;
    // 0x8001C118: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x8001C11C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8001C120: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8001C124: beq         $v0, $a3, L_8001C140
    if (ctx->r2 == ctx->r7) {
        // 0x8001C128: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001C140;
    }
    // 0x8001C128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C12C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8001C130: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C134: jal         0x8001C2C0
    // 0x8001C138: nop

    func_8001C2C0(rdram, ctx);
        goto after_2;
    // 0x8001C138: nop

    after_2:
    // 0x8001C13C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001C140:
    // 0x8001C140: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001C144: jr          $ra
    // 0x8001C148: nop

    return;
    // 0x8001C148: nop

;}
RECOMP_FUNC void func_8001C14C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C14C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001C150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C154: beq         $a0, $zero, L_8001C190
    if (ctx->r4 == 0) {
        // 0x8001C158: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_8001C190;
    }
    // 0x8001C158: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001C15C: jal         0x80084730
    // 0x8001C160: nop

    func_80084730(rdram, ctx);
        goto after_0;
    // 0x8001C160: nop

    after_0:
    // 0x8001C164: jal         0x80084770
    // 0x8001C168: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80084770(rdram, ctx);
        goto after_1;
    // 0x8001C168: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8001C16C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8001C170: nop

    // 0x8001C174: beq         $v0, $t7, L_8001C188
    if (ctx->r2 == ctx->r15) {
        // 0x8001C178: lw          $v0, 0x28($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X28);
            goto L_8001C188;
    }
    // 0x8001C178: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8001C17C: b           L_8001C194
    // 0x8001C180: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001C194;
    // 0x8001C180: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001C184: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
L_8001C188:
    // 0x8001C188: b           L_8001C198
    // 0x8001C18C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001C198;
    // 0x8001C18C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001C190:
    // 0x8001C190: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001C194:
    // 0x8001C194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001C198:
    // 0x8001C198: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001C19C: jr          $ra
    // 0x8001C1A0: nop

    return;
    // 0x8001C1A0: nop

;}
RECOMP_FUNC void func_8001C1A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C1A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C1A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C1AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001C1B0: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x8001C1B4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8001C1B8: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x8001C1BC: bne         $t7, $zero, L_8001C244
    if (ctx->r15 != 0) {
        // 0x8001C1C0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8001C244;
    }
    // 0x8001C1C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001C1C4: lw          $a0, 0x50($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X50);
    // 0x8001C1C8: lw          $a1, 0x54($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X54);
    // 0x8001C1CC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x8001C1D0: jal         0x800828B0
    // 0x8001C1D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8001C1D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8001C1D8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C1DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001C1E0: lw          $t8, 0x10($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X10);
    // 0x8001C1E4: nop

    // 0x8001C1E8: bne         $t8, $at, L_8001C23C
    if (ctx->r24 != ctx->r1) {
        // 0x8001C1EC: nop
    
            goto L_8001C23C;
    }
    // 0x8001C1EC: nop

    // 0x8001C1F0: lw          $v0, 0x8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8);
    // 0x8001C1F4: nop

    // 0x8001C1F8: andi        $t9, $v0, 0x40
    ctx->r25 = ctx->r2 & 0X40;
    // 0x8001C1FC: beq         $t9, $zero, L_8001C23C
    if (ctx->r25 == 0) {
        // 0x8001C200: andi        $t0, $v0, 0x20
        ctx->r8 = ctx->r2 & 0X20;
            goto L_8001C23C;
    }
    // 0x8001C200: andi        $t0, $v0, 0x20
    ctx->r8 = ctx->r2 & 0X20;
    // 0x8001C204: beq         $t0, $zero, L_8001C23C
    if (ctx->r8 == 0) {
        // 0x8001C208: lui         $t1, 0x800A
        ctx->r9 = S32(0X800A << 16);
            goto L_8001C23C;
    }
    // 0x8001C208: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x8001C20C: lw          $t1, 0x6A2C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6A2C);
    // 0x8001C210: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001C214: beq         $t1, $zero, L_8001C230
    if (ctx->r9 == 0) {
        // 0x8001C218: nop
    
            goto L_8001C230;
    }
    // 0x8001C218: nop

    // 0x8001C21C: jal         0x80083C00
    // 0x8001C220: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80083C00(rdram, ctx);
        goto after_1;
    // 0x8001C220: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x8001C224: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8001C228: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C22C: sw          $zero, 0x6A2C($at)
    MEM_W(0X6A2C, ctx->r1) = 0;
L_8001C230:
    // 0x8001C230: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x8001C234: jal         0x800847B0
    // 0x8001C238: nop

    osViSwapBuffer_recomp(rdram, ctx);
        goto after_2;
    // 0x8001C238: nop

    after_2:
L_8001C23C:
    // 0x8001C23C: b           L_8001C244
    // 0x8001C240: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8001C244;
    // 0x8001C240: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001C244:
    // 0x8001C244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001C24C: jr          $ra
    // 0x8001C250: nop

    return;
    // 0x8001C250: nop

;}
RECOMP_FUNC void func_8001C254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C254: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x8001C258: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001C25C: bne         $v0, $at, L_8001C28C
    if (ctx->r2 != ctx->r1) {
        // 0x8001C260: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8001C28C;
    }
    // 0x8001C260: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001C264: lw          $v0, 0x42C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X42C);
    // 0x8001C268: nop

    // 0x8001C26C: beq         $v0, $zero, L_8001C27C
    if (ctx->r2 == 0) {
        // 0x8001C270: nop
    
            goto L_8001C27C;
    }
    // 0x8001C270: nop

    // 0x8001C274: b           L_8001C280
    // 0x8001C278: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
        goto L_8001C280;
    // 0x8001C278: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_8001C27C:
    // 0x8001C27C: sw          $a1, 0x424($a0)
    MEM_W(0X424, ctx->r4) = ctx->r5;
L_8001C280:
    // 0x8001C280: sw          $a1, 0x42C($a0)
    MEM_W(0X42C, ctx->r4) = ctx->r5;
    // 0x8001C284: b           L_8001C2AC
    // 0x8001C288: sw          $t6, 0x440($a0)
    MEM_W(0X440, ctx->r4) = ctx->r14;
        goto L_8001C2AC;
    // 0x8001C288: sw          $t6, 0x440($a0)
    MEM_W(0X440, ctx->r4) = ctx->r14;
L_8001C28C:
    // 0x8001C28C: lw          $v0, 0x430($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X430);
    // 0x8001C290: nop

    // 0x8001C294: beq         $v0, $zero, L_8001C2A4
    if (ctx->r2 == 0) {
        // 0x8001C298: nop
    
            goto L_8001C2A4;
    }
    // 0x8001C298: nop

    // 0x8001C29C: b           L_8001C2A8
    // 0x8001C2A0: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
        goto L_8001C2A8;
    // 0x8001C2A0: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_8001C2A4:
    // 0x8001C2A4: sw          $a1, 0x428($a0)
    MEM_W(0X428, ctx->r4) = ctx->r5;
L_8001C2A8:
    // 0x8001C2A8: sw          $a1, 0x430($a0)
    MEM_W(0X430, ctx->r4) = ctx->r5;
L_8001C2AC:
    // 0x8001C2AC: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x8001C2B0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x8001C2B4: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x8001C2B8: jr          $ra
    // 0x8001C2BC: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    return;
    // 0x8001C2BC: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
;}
RECOMP_FUNC void func_8001C2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C2C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001C2C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001C2C8: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8001C2CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001C2D0: beq         $a1, $zero, L_8001C338
    if (ctx->r5 == 0) {
        // 0x8001C2D4: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_8001C338;
    }
    // 0x8001C2D4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001C2D8: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x8001C2DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001C2E0: bne         $t6, $at, L_8001C2F8
    if (ctx->r14 != ctx->r1) {
        // 0x8001C2E4: nop
    
            goto L_8001C2F8;
    }
    // 0x8001C2E4: nop

    // 0x8001C2E8: jal         0x80083ED0
    // 0x8001C2EC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_0;
    // 0x8001C2EC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8001C2F0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C2F4: nop

L_8001C2F8:
    // 0x8001C2F8: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x8001C2FC: addiu       $at, $zero, -0x31
    ctx->r1 = ADD32(0, -0X31);
    // 0x8001C300: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8001C304: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x8001C308: addiu       $a0, $a1, 0x10
    ctx->r4 = ADD32(ctx->r5, 0X10);
    // 0x8001C30C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001C310: jal         0x8008491C
    // 0x8001C314: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_1;
    // 0x8001C314: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_1:
    // 0x8001C318: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8001C31C: jal         0x80084AAC
    // 0x8001C320: nop

    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_2;
    // 0x8001C320: nop

    after_2:
    // 0x8001C324: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C328: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8001C32C: bne         $a1, $s0, L_8001C338
    if (ctx->r5 != ctx->r16) {
        // 0x8001C330: sw          $a1, 0x434($t9)
        MEM_W(0X434, ctx->r25) = ctx->r5;
            goto L_8001C338;
    }
    // 0x8001C330: sw          $a1, 0x434($t9)
    MEM_W(0X434, ctx->r25) = ctx->r5;
    // 0x8001C334: sw          $s0, 0x438($t9)
    MEM_W(0X438, ctx->r25) = ctx->r16;
L_8001C338:
    // 0x8001C338: beq         $s0, $zero, L_8001C380
    if (ctx->r16 == 0) {
        // 0x8001C33C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8001C380;
    }
    // 0x8001C33C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C340: beq         $s0, $a1, L_8001C380
    if (ctx->r16 == ctx->r5) {
        // 0x8001C344: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8001C380;
    }
    // 0x8001C344: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C348: lw          $t0, 0x3C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X3C);
    // 0x8001C34C: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x8001C350: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x8001C354: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x8001C358: jal         0x80084AF0
    // 0x8001C35C: nop

    osDpSetNextBuffer_recomp(rdram, ctx);
        goto after_3;
    // 0x8001C35C: nop

    after_3:
    // 0x8001C360: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8001C364: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8001C368: sw          $t1, 0x6A24($at)
    MEM_W(0X6A24, ctx->r1) = ctx->r9;
    // 0x8001C36C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8001C370: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8001C374: sw          $zero, 0x6A28($at)
    MEM_W(0X6A28, ctx->r1) = 0;
    // 0x8001C378: sw          $s0, 0x438($t2)
    MEM_W(0X438, ctx->r10) = ctx->r16;
    // 0x8001C37C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8001C380:
    // 0x8001C380: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001C384: jr          $ra
    // 0x8001C388: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001C388: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001C38C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C38C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C390: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C394: lw          $v0, 0x434($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X434);
    // 0x8001C398: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001C39C: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x8001C3A0: nop

    // 0x8001C3A4: bne         $t6, $at, L_8001C3C4
    if (ctx->r14 != ctx->r1) {
        // 0x8001C3A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001C3C4;
    }
    // 0x8001C3A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C3AC: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x8001C3B0: nop

    // 0x8001C3B4: ori         $t8, $t7, 0x10
    ctx->r24 = ctx->r15 | 0X10;
    // 0x8001C3B8: jal         0x80084BA0
    // 0x8001C3BC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    func_80084BA0(rdram, ctx);
        goto after_0;
    // 0x8001C3BC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    after_0:
    // 0x8001C3C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001C3C4:
    // 0x8001C3C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001C3C8: jr          $ra
    // 0x8001C3CC: nop

    return;
    // 0x8001C3CC: nop

;}
RECOMP_FUNC void func_8001C3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C3D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001C3D4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001C3D8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8001C3DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001C3E0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001C3E4: addiu       $t0, $zero, -0x3
    ctx->r8 = ADD32(0, -0X3);
L_8001C3E8:
    // 0x8001C3E8: lw          $t6, 0x440($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X440);
    // 0x8001C3EC: lw          $s0, 0x428($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X428);
    // 0x8001C3F0: lw          $v0, 0x424($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X424);
    // 0x8001C3F4: beq         $t6, $zero, L_8001C450
    if (ctx->r14 == 0) {
        // 0x8001C3F8: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_8001C450;
    }
    // 0x8001C3F8: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x8001C3FC: andi        $t7, $a3, 0x2
    ctx->r15 = ctx->r7 & 0X2;
    // 0x8001C400: beq         $t7, $zero, L_8001C454
    if (ctx->r15 == 0) {
        // 0x8001C404: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8001C454;
    }
    // 0x8001C404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001C408: beq         $s0, $zero, L_8001C42C
    if (ctx->r16 == 0) {
        // 0x8001C40C: nop
    
            goto L_8001C42C;
    }
    // 0x8001C40C: nop

    // 0x8001C410: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x8001C414: and         $v1, $a3, $t0
    ctx->r3 = ctx->r7 & ctx->r8;
    // 0x8001C418: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x8001C41C: beq         $t9, $zero, L_8001C42C
    if (ctx->r25 == 0) {
        // 0x8001C420: nop
    
            goto L_8001C42C;
    }
    // 0x8001C420: nop

    // 0x8001C424: b           L_8001C59C
    // 0x8001C428: sw          $s0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r16;
        goto L_8001C59C;
    // 0x8001C428: sw          $s0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r16;
L_8001C42C:
    // 0x8001C42C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8001C430: lw          $t2, 0x424($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X424);
    // 0x8001C434: sw          $zero, 0x440($s1)
    MEM_W(0X440, ctx->r17) = 0;
    // 0x8001C438: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8001C43C: and         $v1, $a3, $t0
    ctx->r3 = ctx->r7 & ctx->r8;
    // 0x8001C440: bne         $t3, $zero, L_8001C59C
    if (ctx->r11 != 0) {
        // 0x8001C444: sw          $t3, 0x424($s1)
        MEM_W(0X424, ctx->r17) = ctx->r11;
            goto L_8001C59C;
    }
    // 0x8001C444: sw          $t3, 0x424($s1)
    MEM_W(0X424, ctx->r17) = ctx->r11;
    // 0x8001C448: b           L_8001C59C
    // 0x8001C44C: sw          $zero, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = 0;
        goto L_8001C59C;
    // 0x8001C44C: sw          $zero, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = 0;
L_8001C450:
    // 0x8001C450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8001C454:
    // 0x8001C454: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8001C458: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8001C45C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8001C460: jal         0x8001C14C
    // 0x8001C464: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_8001C14C(rdram, ctx);
        goto after_0;
    // 0x8001C464: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x8001C468: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8001C46C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C470: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8001C474: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8001C478: addiu       $t0, $zero, -0x3
    ctx->r8 = ADD32(0, -0X3);
    // 0x8001C47C: beq         $v0, $zero, L_8001C59C
    if (ctx->r2 == 0) {
        // 0x8001C480: addiu       $t1, $zero, -0x2
        ctx->r9 = ADD32(0, -0X2);
            goto L_8001C59C;
    }
    // 0x8001C480: addiu       $t1, $zero, -0x2
    ctx->r9 = ADD32(0, -0X2);
    // 0x8001C484: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x8001C488: nop

    // 0x8001C48C: andi        $t6, $t5, 0x7
    ctx->r14 = ctx->r13 & 0X7;
    // 0x8001C490: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8001C494: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x8001C498: beq         $at, $zero, L_8001C59C
    if (ctx->r1 == 0) {
        // 0x8001C49C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8001C59C;
    }
    // 0x8001C49C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001C4A0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8001C4A4: addu        $at, $at, $t7
    gpr jr_addend_8001C4B0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8001C4A8: lw          $t7, 0x38A0($at)
    ctx->r15 = ADD32(ctx->r1, 0X38A0);
    // 0x8001C4AC: nop

    // 0x8001C4B0: jr          $t7
    // 0x8001C4B4: nop

    switch (jr_addend_8001C4B0 >> 2) {
        case 0: goto L_8001C59C; break;
        case 1: goto L_8001C544; break;
        case 2: goto L_8001C4B8; break;
        case 3: goto L_8001C59C; break;
        case 4: goto L_8001C59C; break;
        case 5: goto L_8001C544; break;
        case 6: goto L_8001C544; break;
        default: switch_error(__func__, 0x8001C4B0, 0x800D38A0);
    }
    // 0x8001C4B4: nop

L_8001C4B8:
    // 0x8001C4B8: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8001C4BC: andi        $t2, $a3, 0x2
    ctx->r10 = ctx->r7 & 0X2;
    // 0x8001C4C0: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x8001C4C4: beq         $t9, $zero, L_8001C514
    if (ctx->r25 == 0) {
        // 0x8001C4C8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8001C514;
    }
    // 0x8001C4C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8001C4CC: beq         $t2, $zero, L_8001C59C
    if (ctx->r10 == 0) {
        // 0x8001C4D0: nop
    
            goto L_8001C59C;
    }
    // 0x8001C4D0: nop

    // 0x8001C4D4: sw          $s0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r16;
    // 0x8001C4D8: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x8001C4DC: and         $v1, $a3, $t0
    ctx->r3 = ctx->r7 & ctx->r8;
    // 0x8001C4E0: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8001C4E4: beq         $t4, $zero, L_8001C4F4
    if (ctx->r12 == 0) {
        // 0x8001C4E8: nop
    
            goto L_8001C4F4;
    }
    // 0x8001C4E8: nop

    // 0x8001C4EC: sw          $s0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r16;
    // 0x8001C4F0: and         $v1, $v1, $t1
    ctx->r3 = ctx->r3 & ctx->r9;
L_8001C4F4:
    // 0x8001C4F4: lw          $t5, 0x428($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X428);
    // 0x8001C4F8: nop

    // 0x8001C4FC: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8001C500: nop

    // 0x8001C504: bne         $t6, $zero, L_8001C59C
    if (ctx->r14 != 0) {
        // 0x8001C508: sw          $t6, 0x428($s1)
        MEM_W(0X428, ctx->r17) = ctx->r14;
            goto L_8001C59C;
    }
    // 0x8001C508: sw          $t6, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r14;
    // 0x8001C50C: b           L_8001C59C
    // 0x8001C510: sw          $zero, 0x430($s1)
    MEM_W(0X430, ctx->r17) = 0;
        goto L_8001C59C;
    // 0x8001C510: sw          $zero, 0x430($s1)
    MEM_W(0X430, ctx->r17) = 0;
L_8001C514:
    // 0x8001C514: bne         $a3, $at, L_8001C59C
    if (ctx->r7 != ctx->r1) {
        // 0x8001C518: nop
    
            goto L_8001C59C;
    }
    // 0x8001C518: nop

    // 0x8001C51C: sw          $s0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r16;
    // 0x8001C520: sw          $s0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r16;
    // 0x8001C524: lw          $t8, 0x428($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X428);
    // 0x8001C528: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x8001C52C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8001C530: and         $v1, $a3, $at
    ctx->r3 = ctx->r7 & ctx->r1;
    // 0x8001C534: bne         $t9, $zero, L_8001C59C
    if (ctx->r25 != 0) {
        // 0x8001C538: sw          $t9, 0x428($s1)
        MEM_W(0X428, ctx->r17) = ctx->r25;
            goto L_8001C59C;
    }
    // 0x8001C538: sw          $t9, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r25;
    // 0x8001C53C: b           L_8001C59C
    // 0x8001C540: sw          $zero, 0x430($s1)
    MEM_W(0X430, ctx->r17) = 0;
        goto L_8001C59C;
    // 0x8001C540: sw          $zero, 0x430($s1)
    MEM_W(0X430, ctx->r17) = 0;
L_8001C544:
    // 0x8001C544: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8001C548: andi        $t4, $a3, 0x2
    ctx->r12 = ctx->r7 & 0X2;
    // 0x8001C54C: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    // 0x8001C550: beq         $t3, $zero, L_8001C56C
    if (ctx->r11 == 0) {
        // 0x8001C554: andi        $t5, $v0, 0x1
        ctx->r13 = ctx->r2 & 0X1;
            goto L_8001C56C;
    }
    // 0x8001C554: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x8001C558: beq         $t4, $zero, L_8001C59C
    if (ctx->r12 == 0) {
        // 0x8001C55C: nop
    
            goto L_8001C59C;
    }
    // 0x8001C55C: nop

    // 0x8001C560: sw          $s0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r16;
    // 0x8001C564: b           L_8001C59C
    // 0x8001C568: and         $v1, $a3, $t0
    ctx->r3 = ctx->r7 & ctx->r8;
        goto L_8001C59C;
    // 0x8001C568: and         $v1, $a3, $t0
    ctx->r3 = ctx->r7 & ctx->r8;
L_8001C56C:
    // 0x8001C56C: beq         $t5, $zero, L_8001C59C
    if (ctx->r13 == 0) {
        // 0x8001C570: andi        $t6, $a3, 0x1
        ctx->r14 = ctx->r7 & 0X1;
            goto L_8001C59C;
    }
    // 0x8001C570: andi        $t6, $a3, 0x1
    ctx->r14 = ctx->r7 & 0X1;
    // 0x8001C574: beq         $t6, $zero, L_8001C59C
    if (ctx->r14 == 0) {
        // 0x8001C578: nop
    
            goto L_8001C59C;
    }
    // 0x8001C578: nop

    // 0x8001C57C: sw          $s0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r16;
    // 0x8001C580: lw          $t7, 0x428($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X428);
    // 0x8001C584: and         $v1, $a3, $t1
    ctx->r3 = ctx->r7 & ctx->r9;
    // 0x8001C588: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8001C58C: nop

    // 0x8001C590: bne         $t8, $zero, L_8001C59C
    if (ctx->r24 != 0) {
        // 0x8001C594: sw          $t8, 0x428($s1)
        MEM_W(0X428, ctx->r17) = ctx->r24;
            goto L_8001C59C;
    }
    // 0x8001C594: sw          $t8, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r24;
    // 0x8001C598: sw          $zero, 0x430($s1)
    MEM_W(0X430, ctx->r17) = 0;
L_8001C59C:
    // 0x8001C59C: beq         $v1, $a3, L_8001C5B0
    if (ctx->r3 == ctx->r7) {
        // 0x8001C5A0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8001C5B0;
    }
    // 0x8001C5A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C5A4: b           L_8001C3E8
    // 0x8001C5A8: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
        goto L_8001C3E8;
    // 0x8001C5A8: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8001C5AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8001C5B0:
    // 0x8001C5B0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001C5B4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001C5B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001C5BC: jr          $ra
    // 0x8001C5C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8001C5C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8001C5C4: nop

    // 0x8001C5C8: nop

    // 0x8001C5CC: nop

;}
RECOMP_FUNC void func_8001C5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C5D0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001C5D4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8001C5D8: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x8001C5DC: nop

    // 0x8001C5E0: bc1f        L_8001C5F0
    if (!c1cs) {
        // 0x8001C5E4: nop
    
            goto L_8001C5F0;
    }
    // 0x8001C5E4: nop

    // 0x8001C5E8: b           L_8001C5F4
    // 0x8001C5EC: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_8001C5F4;
    // 0x8001C5EC: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_8001C5F0:
    // 0x8001C5F0: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_8001C5F4:
    // 0x8001C5F4: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8001C5F8: nop

    // 0x8001C5FC: bc1f        L_8001C60C
    if (!c1cs) {
        // 0x8001C600: nop
    
            goto L_8001C60C;
    }
    // 0x8001C600: nop

    // 0x8001C604: b           L_8001C610
    // 0x8001C608: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
        goto L_8001C610;
    // 0x8001C608: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
L_8001C60C:
    // 0x8001C60C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_8001C610:
    // 0x8001C610: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8001C614: nop

    // 0x8001C618: bc1f        L_8001C6A0
    if (!c1cs) {
        // 0x8001C61C: nop
    
            goto L_8001C6A0;
    }
    // 0x8001C61C: nop

    // 0x8001C620: c.eq.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl == ctx->f16.fl;
    // 0x8001C624: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8001C628: bc1f        L_8001C638
    if (!c1cs) {
        // 0x8001C62C: nop
    
            goto L_8001C638;
    }
    // 0x8001C62C: nop

    // 0x8001C630: b           L_8001C810
    // 0x8001C634: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
        goto L_8001C810;
    // 0x8001C634: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_8001C638:
    // 0x8001C638: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8001C63C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8001C640: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x8001C644: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8001C648: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8001C64C: nop

    // 0x8001C650: div.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x8001C654: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8001C658: nop

    // 0x8001C65C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8001C660: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001C664: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001C668: nop

    // 0x8001C66C: cvt.w.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_D(ctx->f18.d);
    // 0x8001C670: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x8001C674: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8001C678: sltiu       $at, $v0, 0x201
    ctx->r1 = ctx->r2 < 0X201 ? 1 : 0;
    // 0x8001C67C: bne         $at, $zero, L_8001C68C
    if (ctx->r1 != 0) {
        // 0x8001C680: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_8001C68C;
    }
    // 0x8001C680: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8001C684: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8001C688: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
L_8001C68C:
    // 0x8001C68C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8001C690: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8001C694: lwc1        $f2, 0x3CF0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3CF0);
    // 0x8001C698: b           L_8001C768
    // 0x8001C69C: swc1        $f2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f2.u32l;
        goto L_8001C768;
    // 0x8001C69C: swc1        $f2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f2.u32l;
L_8001C6A0:
    // 0x8001C6A0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8001C6A4: nop

    // 0x8001C6A8: bc1f        L_8001C74C
    if (!c1cs) {
        // 0x8001C6AC: nop
    
            goto L_8001C74C;
    }
    // 0x8001C6AC: nop

    // 0x8001C6B0: c.eq.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl == ctx->f16.fl;
    // 0x8001C6B4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8001C6B8: bc1f        L_8001C6C8
    if (!c1cs) {
        // 0x8001C6BC: nop
    
            goto L_8001C6C8;
    }
    // 0x8001C6BC: nop

    // 0x8001C6C0: b           L_8001C810
    // 0x8001C6C4: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
        goto L_8001C810;
    // 0x8001C6C4: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_8001C6C8:
    // 0x8001C6C8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8001C6CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8001C6D0: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8001C6D4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8001C6D8: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x8001C6DC: nop

    // 0x8001C6E0: div.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x8001C6E4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8001C6E8: nop

    // 0x8001C6EC: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8001C6F0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001C6F4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001C6F8: nop

    // 0x8001C6FC: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x8001C700: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x8001C704: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8001C708: sltiu       $at, $v0, 0x201
    ctx->r1 = ctx->r2 < 0X201 ? 1 : 0;
    // 0x8001C70C: bne         $at, $zero, L_8001C718
    if (ctx->r1 != 0) {
        // 0x8001C710: nop
    
            goto L_8001C718;
    }
    // 0x8001C710: nop

    // 0x8001C714: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_8001C718:
    // 0x8001C718: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8001C71C: lwc1        $f9, 0x38C0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X38C0);
    // 0x8001C720: lwc1        $f8, 0x38C4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X38C4);
    // 0x8001C724: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8001C728: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8001C72C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8001C730: lwc1        $f10, 0x3CF0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3CF0);
    // 0x8001C734: nop

    // 0x8001C738: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x8001C73C: sub.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f8.d - ctx->f18.d;
    // 0x8001C740: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x8001C744: b           L_8001C768
    // 0x8001C748: swc1        $f2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f2.u32l;
        goto L_8001C768;
    // 0x8001C748: swc1        $f2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f2.u32l;
L_8001C74C:
    // 0x8001C74C: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x8001C750: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8001C754: bc1f        L_8001C768
    if (!c1cs) {
        // 0x8001C758: nop
    
            goto L_8001C768;
    }
    // 0x8001C758: nop

    // 0x8001C75C: lwc1        $f2, 0x38C8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X38C8);
    // 0x8001C760: nop

    // 0x8001C764: swc1        $f2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f2.u32l;
L_8001C768:
    // 0x8001C768: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x8001C76C: lwc1        $f2, 0x0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8001C770: bc1f        L_8001C7A0
    if (!c1cs) {
        // 0x8001C774: nop
    
            goto L_8001C7A0;
    }
    // 0x8001C774: nop

    // 0x8001C778: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x8001C77C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8001C780: bc1f        L_8001C7A0
    if (!c1cs) {
        // 0x8001C784: nop
    
            goto L_8001C7A0;
    }
    // 0x8001C784: nop

    // 0x8001C788: lwc1        $f7, 0x38D0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X38D0);
    // 0x8001C78C: lwc1        $f6, 0x38D4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X38D4);
    // 0x8001C790: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x8001C794: sub.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f6.d - ctx->f10.d;
    // 0x8001C798: b           L_8001C80C
    // 0x8001C79C: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
        goto L_8001C80C;
    // 0x8001C79C: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
L_8001C7A0:
    // 0x8001C7A0: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x8001C7A4: nop

    // 0x8001C7A8: bc1f        L_8001C7D8
    if (!c1cs) {
        // 0x8001C7AC: nop
    
            goto L_8001C7D8;
    }
    // 0x8001C7AC: nop

    // 0x8001C7B0: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8001C7B4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8001C7B8: bc1f        L_8001C7D8
    if (!c1cs) {
        // 0x8001C7BC: nop
    
            goto L_8001C7D8;
    }
    // 0x8001C7BC: nop

    // 0x8001C7C0: lwc1        $f5, 0x38D8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X38D8);
    // 0x8001C7C4: lwc1        $f4, 0x38DC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X38DC);
    // 0x8001C7C8: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x8001C7CC: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x8001C7D0: b           L_8001C80C
    // 0x8001C7D4: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
        goto L_8001C80C;
    // 0x8001C7D4: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
L_8001C7D8:
    // 0x8001C7D8: c.le.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl <= ctx->f14.fl;
    // 0x8001C7DC: nop

    // 0x8001C7E0: bc1f        L_8001C80C
    if (!c1cs) {
        // 0x8001C7E4: nop
    
            goto L_8001C80C;
    }
    // 0x8001C7E4: nop

    // 0x8001C7E8: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8001C7EC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8001C7F0: bc1f        L_8001C80C
    if (!c1cs) {
        // 0x8001C7F4: nop
    
            goto L_8001C80C;
    }
    // 0x8001C7F4: nop

    // 0x8001C7F8: lwc1        $f11, 0x38E0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X38E0);
    // 0x8001C7FC: lwc1        $f10, 0x38E4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X38E4);
    // 0x8001C800: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x8001C804: sub.d       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = ctx->f10.d - ctx->f8.d;
    // 0x8001C808: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
L_8001C80C:
    // 0x8001C80C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8001C810:
    // 0x8001C810: jr          $ra
    // 0x8001C814: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8001C814: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x8001C818: nop

    // 0x8001C81C: nop

;}
RECOMP_FUNC void func_8001C820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C828: jal         0x80084BC0
    // 0x8001C82C: nop

    osGetCount_recomp(rdram, ctx);
        goto after_0;
    // 0x8001C82C: nop

    after_0:
    // 0x8001C830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C834: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8001C838: sw          $v0, -0x4038($at)
    MEM_W(-0X4038, ctx->r1) = ctx->r2;
    // 0x8001C83C: jr          $ra
    // 0x8001C840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001C840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001C844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C844: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8001C848: addiu       $v1, $v1, -0x4038
    ctx->r3 = ADD32(ctx->r3, -0X4038);
    // 0x8001C84C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001C850: nop

    // 0x8001C854: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x8001C858: beq         $t6, $zero, L_8001C870
    if (ctx->r14 == 0) {
        // 0x8001C85C: srl         $t9, $v0, 1
        ctx->r25 = S32(U32(ctx->r2) >> 1);
            goto L_8001C870;
    }
    // 0x8001C85C: srl         $t9, $v0, 1
    ctx->r25 = S32(U32(ctx->r2) >> 1);
    // 0x8001C860: srl         $t7, $v0, 1
    ctx->r15 = S32(U32(ctx->r2) >> 1);
    // 0x8001C864: xori        $t8, $t7, 0x8812
    ctx->r24 = ctx->r15 ^ 0X8812;
    // 0x8001C868: b           L_8001C874
    // 0x8001C86C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_8001C874;
    // 0x8001C86C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_8001C870:
    // 0x8001C870: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
L_8001C874:
    // 0x8001C874: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001C878: nop

    // 0x8001C87C: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x8001C880: beq         $t0, $zero, L_8001C898
    if (ctx->r8 == 0) {
        // 0x8001C884: srl         $t3, $v0, 1
        ctx->r11 = S32(U32(ctx->r2) >> 1);
            goto L_8001C898;
    }
    // 0x8001C884: srl         $t3, $v0, 1
    ctx->r11 = S32(U32(ctx->r2) >> 1);
    // 0x8001C888: srl         $t1, $v0, 1
    ctx->r9 = S32(U32(ctx->r2) >> 1);
    // 0x8001C88C: xori        $t2, $t1, 0x8812
    ctx->r10 = ctx->r9 ^ 0X8812;
    // 0x8001C890: b           L_8001C89C
    // 0x8001C894: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
        goto L_8001C89C;
    // 0x8001C894: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_8001C898:
    // 0x8001C898: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_8001C89C:
    // 0x8001C89C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001C8A0: nop

    // 0x8001C8A4: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x8001C8A8: beq         $t4, $zero, L_8001C8C0
    if (ctx->r12 == 0) {
        // 0x8001C8AC: srl         $t7, $v0, 1
        ctx->r15 = S32(U32(ctx->r2) >> 1);
            goto L_8001C8C0;
    }
    // 0x8001C8AC: srl         $t7, $v0, 1
    ctx->r15 = S32(U32(ctx->r2) >> 1);
    // 0x8001C8B0: srl         $t5, $v0, 1
    ctx->r13 = S32(U32(ctx->r2) >> 1);
    // 0x8001C8B4: xori        $t6, $t5, 0x8812
    ctx->r14 = ctx->r13 ^ 0X8812;
    // 0x8001C8B8: b           L_8001C8C4
    // 0x8001C8BC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
        goto L_8001C8C4;
    // 0x8001C8BC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_8001C8C0:
    // 0x8001C8C0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_8001C8C4:
    // 0x8001C8C4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001C8C8: nop

    // 0x8001C8CC: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x8001C8D0: beq         $t8, $zero, L_8001C8E8
    if (ctx->r24 == 0) {
        // 0x8001C8D4: srl         $t1, $v0, 1
        ctx->r9 = S32(U32(ctx->r2) >> 1);
            goto L_8001C8E8;
    }
    // 0x8001C8D4: srl         $t1, $v0, 1
    ctx->r9 = S32(U32(ctx->r2) >> 1);
    // 0x8001C8D8: srl         $t9, $v0, 1
    ctx->r25 = S32(U32(ctx->r2) >> 1);
    // 0x8001C8DC: xori        $t0, $t9, 0x8812
    ctx->r8 = ctx->r25 ^ 0X8812;
    // 0x8001C8E0: b           L_8001C8EC
    // 0x8001C8E4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
        goto L_8001C8EC;
    // 0x8001C8E4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_8001C8E8:
    // 0x8001C8E8: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_8001C8EC:
    // 0x8001C8EC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001C8F0: nop

    // 0x8001C8F4: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x8001C8F8: beq         $t2, $zero, L_8001C910
    if (ctx->r10 == 0) {
        // 0x8001C8FC: srl         $t5, $v0, 1
        ctx->r13 = S32(U32(ctx->r2) >> 1);
            goto L_8001C910;
    }
    // 0x8001C8FC: srl         $t5, $v0, 1
    ctx->r13 = S32(U32(ctx->r2) >> 1);
    // 0x8001C900: srl         $t3, $v0, 1
    ctx->r11 = S32(U32(ctx->r2) >> 1);
    // 0x8001C904: xori        $t4, $t3, 0x8812
    ctx->r12 = ctx->r11 ^ 0X8812;
    // 0x8001C908: b           L_8001C914
    // 0x8001C90C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_8001C914;
    // 0x8001C90C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_8001C910:
    // 0x8001C910: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_8001C914:
    // 0x8001C914: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001C918: nop

    // 0x8001C91C: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x8001C920: beq         $t6, $zero, L_8001C938
    if (ctx->r14 == 0) {
        // 0x8001C924: srl         $t9, $v0, 1
        ctx->r25 = S32(U32(ctx->r2) >> 1);
            goto L_8001C938;
    }
    // 0x8001C924: srl         $t9, $v0, 1
    ctx->r25 = S32(U32(ctx->r2) >> 1);
    // 0x8001C928: srl         $t7, $v0, 1
    ctx->r15 = S32(U32(ctx->r2) >> 1);
    // 0x8001C92C: xori        $t8, $t7, 0x8812
    ctx->r24 = ctx->r15 ^ 0X8812;
    // 0x8001C930: b           L_8001C93C
    // 0x8001C934: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_8001C93C;
    // 0x8001C934: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_8001C938:
    // 0x8001C938: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
L_8001C93C:
    // 0x8001C93C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001C940: nop

    // 0x8001C944: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x8001C948: beq         $t0, $zero, L_8001C960
    if (ctx->r8 == 0) {
        // 0x8001C94C: srl         $t3, $v0, 1
        ctx->r11 = S32(U32(ctx->r2) >> 1);
            goto L_8001C960;
    }
    // 0x8001C94C: srl         $t3, $v0, 1
    ctx->r11 = S32(U32(ctx->r2) >> 1);
    // 0x8001C950: srl         $t1, $v0, 1
    ctx->r9 = S32(U32(ctx->r2) >> 1);
    // 0x8001C954: xori        $t2, $t1, 0x8812
    ctx->r10 = ctx->r9 ^ 0X8812;
    // 0x8001C958: b           L_8001C964
    // 0x8001C95C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
        goto L_8001C964;
    // 0x8001C95C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_8001C960:
    // 0x8001C960: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_8001C964:
    // 0x8001C964: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x8001C968: jr          $ra
    // 0x8001C96C: nop

    return;
    // 0x8001C96C: nop

;}
RECOMP_FUNC void func_8001C970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C978: jal         0x8001C844
    // 0x8001C97C: nop

    func_8001C844(rdram, ctx);
        goto after_0;
    // 0x8001C97C: nop

    after_0:
    // 0x8001C980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C984: or          $t6, $v0, $zero
    ctx->r14 = ctx->r2 | 0;
    // 0x8001C988: andi        $v0, $t6, 0x1
    ctx->r2 = ctx->r14 & 0X1;
    // 0x8001C98C: jr          $ra
    // 0x8001C990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001C990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001C994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C994: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C998: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C99C: jal         0x8001C844
    // 0x8001C9A0: nop

    func_8001C844(rdram, ctx);
        goto after_0;
    // 0x8001C9A0: nop

    after_0:
    // 0x8001C9A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C9A8: or          $t6, $v0, $zero
    ctx->r14 = ctx->r2 | 0;
    // 0x8001C9AC: andi        $v0, $t6, 0x3
    ctx->r2 = ctx->r14 & 0X3;
    // 0x8001C9B0: jr          $ra
    // 0x8001C9B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001C9B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001C9B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C9B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C9BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C9C0: jal         0x8001C844
    // 0x8001C9C4: nop

    func_8001C844(rdram, ctx);
        goto after_0;
    // 0x8001C9C4: nop

    after_0:
    // 0x8001C9C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C9CC: or          $t6, $v0, $zero
    ctx->r14 = ctx->r2 | 0;
    // 0x8001C9D0: andi        $v0, $t6, 0x7
    ctx->r2 = ctx->r14 & 0X7;
    // 0x8001C9D4: jr          $ra
    // 0x8001C9D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001C9D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001C9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C9DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C9E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C9E4: jal         0x8001C844
    // 0x8001C9E8: nop

    func_8001C844(rdram, ctx);
        goto after_0;
    // 0x8001C9E8: nop

    after_0:
    // 0x8001C9EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C9F0: or          $t6, $v0, $zero
    ctx->r14 = ctx->r2 | 0;
    // 0x8001C9F4: andi        $v0, $t6, 0xF
    ctx->r2 = ctx->r14 & 0XF;
    // 0x8001C9F8: jr          $ra
    // 0x8001C9FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001C9FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001CA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CA00: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8001CA04: addiu       $v1, $v1, -0x4038
    ctx->r3 = ADD32(ctx->r3, -0X4038);
    // 0x8001CA08: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8001CA0C: lui         $at, 0x5D58
    ctx->r1 = S32(0X5D58 << 16);
    // 0x8001CA10: ori         $at, $at, 0x8B65
    ctx->r1 = ctx->r1 | 0X8B65;
    // 0x8001CA14: multu       $t6, $at
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001CA18: mflo        $t7
    ctx->r15 = lo;
    // 0x8001CA1C: addiu       $v0, $t7, 0x1
    ctx->r2 = ADD32(ctx->r15, 0X1);
    // 0x8001CA20: jr          $ra
    // 0x8001CA24: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    return;
    // 0x8001CA24: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_8001CA28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CA28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001CA2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001CA30: jal         0x8001CA00
    // 0x8001CA34: nop

    func_8001CA00(rdram, ctx);
        goto after_0;
    // 0x8001CA34: nop

    after_0:
    // 0x8001CA38: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8001CA3C: bgez        $v0, L_8001CA58
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8001CA40: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_8001CA58;
    }
    // 0x8001CA40: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8001CA44: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8001CA48: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8001CA4C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8001CA50: nop

    // 0x8001CA54: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_8001CA58:
    // 0x8001CA58: lui         $at, 0x3DF0
    ctx->r1 = S32(0X3DF0 << 16);
    // 0x8001CA5C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8001CA60: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8001CA64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001CA68: mul.d       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f0.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x8001CA6C: jr          $ra
    // 0x8001CA70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001CA70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001CA74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CA74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001CA78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001CA7C: jal         0x8001CA28
    // 0x8001CA80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8001CA28(rdram, ctx);
        goto after_0;
    // 0x8001CA80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8001CA84: lhu         $t6, 0x1A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001CA88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001CA8C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8001CA90: bgez        $t6, L_8001CAAC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8001CA94: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_8001CAAC;
    }
    // 0x8001CA94: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8001CA98: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8001CA9C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8001CAA0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8001CAA4: nop

    // 0x8001CAA8: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_8001CAAC:
    // 0x8001CAAC: mul.d       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x8001CAB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001CAB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001CAB8: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8001CABC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8001CAC0: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8001CAC4: nop

    // 0x8001CAC8: cvt.w.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_D(ctx->f10.d);
    // 0x8001CACC: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8001CAD0: nop

    // 0x8001CAD4: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8001CAD8: beq         $v0, $zero, L_8001CB28
    if (ctx->r2 == 0) {
        // 0x8001CADC: nop
    
            goto L_8001CB28;
    }
    // 0x8001CADC: nop

    // 0x8001CAE0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8001CAE4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001CAE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001CAEC: sub.d       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f16.d = ctx->f10.d - ctx->f16.d;
    // 0x8001CAF0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001CAF4: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8001CAF8: nop

    // 0x8001CAFC: cvt.w.d     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_D(ctx->f16.d);
    // 0x8001CB00: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8001CB04: nop

    // 0x8001CB08: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8001CB0C: bne         $v0, $zero, L_8001CB20
    if (ctx->r2 != 0) {
        // 0x8001CB10: nop
    
            goto L_8001CB20;
    }
    // 0x8001CB10: nop

    // 0x8001CB14: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x8001CB18: b           L_8001CB38
    // 0x8001CB1C: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_8001CB38;
    // 0x8001CB1C: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_8001CB20:
    // 0x8001CB20: b           L_8001CB38
    // 0x8001CB24: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001CB38;
    // 0x8001CB24: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001CB28:
    // 0x8001CB28: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x8001CB2C: nop

    // 0x8001CB30: bltz        $v0, L_8001CB20
    if (SIGNED(ctx->r2) < 0) {
        // 0x8001CB34: nop
    
            goto L_8001CB20;
    }
    // 0x8001CB34: nop

L_8001CB38:
    // 0x8001CB38: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8001CB3C: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x8001CB40: jr          $ra
    // 0x8001CB44: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x8001CB44: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_8001CB48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CB48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001CB4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001CB50: jal         0x8001CA28
    // 0x8001CB54: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    func_8001CA28(rdram, ctx);
        goto after_0;
    // 0x8001CB54: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8001CB58: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8001CB5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001CB60: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8001CB64: mul.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x8001CB68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001CB6C: jr          $ra
    // 0x8001CB70: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    return;
    // 0x8001CB70: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
;}
RECOMP_FUNC void func_8001CB74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CB74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001CB78: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x8001CB7C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001CB80: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x8001CB84: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x8001CB88: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001CB8C: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8001CB90: sra         $t8, $s0, 16
    ctx->r24 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8001CB94: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8001CB98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001CB9C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001CBA0: blez        $t0, L_8001CC20
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8001CBA4: or          $s0, $t8, $zero
        ctx->r16 = ctx->r24 | 0;
            goto L_8001CC20;
    }
    // 0x8001CBA4: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
L_8001CBA8:
    // 0x8001CBA8: jal         0x8001CA28
    // 0x8001CBAC: nop

    func_8001CA28(rdram, ctx);
        goto after_0;
    // 0x8001CBAC: nop

    after_0:
    // 0x8001CBB0: addiu       $t2, $s0, 0x1
    ctx->r10 = ADD32(ctx->r16, 0X1);
    // 0x8001CBB4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8001CBB8: sll         $t1, $s0, 1
    ctx->r9 = S32(ctx->r16 << 1);
    // 0x8001CBBC: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8001CBC0: addu        $v0, $s1, $t1
    ctx->r2 = ADD32(ctx->r17, ctx->r9);
    // 0x8001CBC4: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x8001CBC8: mul.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x8001CBCC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8001CBD0: sll         $t9, $s0, 16
    ctx->r25 = S32(ctx->r16 << 16);
    // 0x8001CBD4: sra         $s0, $t9, 16
    ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8001CBD8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8001CBDC: nop

    // 0x8001CBE0: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8001CBE4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001CBE8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001CBEC: nop

    // 0x8001CBF0: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x8001CBF4: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x8001CBF8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8001CBFC: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x8001CC00: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8001CC04: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8001CC08: addu        $v1, $s1, $t7
    ctx->r3 = ADD32(ctx->r17, ctx->r15);
    // 0x8001CC0C: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x8001CC10: nop

    // 0x8001CC14: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x8001CC18: bgtz        $s0, L_8001CBA8
    if (SIGNED(ctx->r16) > 0) {
        // 0x8001CC1C: sh          $a0, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r4;
            goto L_8001CBA8;
    }
    // 0x8001CC1C: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
L_8001CC20:
    // 0x8001CC20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CC24: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001CC28: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001CC2C: jr          $ra
    // 0x8001CC30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8001CC30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
