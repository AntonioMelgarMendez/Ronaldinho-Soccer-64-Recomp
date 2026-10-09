#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_8026F480_func_8026FA14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FA14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026FA18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026FA1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026FA20: jal         0x80036234
    // 0x8026FA24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x8026FA24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8026FA28: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8026FA2C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FA30: addiu       $a0, $a0, -0x578
    ctx->r4 = ADD32(ctx->r4, -0X578);
    // 0x8026FA34: jal         0x800297B4
    // 0x8026FA38: sh          $zero, 0x38($t6)
    MEM_H(0X38, ctx->r14) = 0;
    func_800297B4(rdram, ctx);
        goto after_1;
    // 0x8026FA38: sh          $zero, 0x38($t6)
    MEM_H(0X38, ctx->r14) = 0;
    after_1:
    // 0x8026FA3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026FA40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026FA44: jr          $ra
    // 0x8026FA48: nop

    return;
    // 0x8026FA48: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026FA4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FA4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026FA50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026FA54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026FA58: jal         0x80036234
    // 0x8026FA5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x8026FA5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8026FA60: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8026FA64: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8026FA68: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FA6C: addiu       $a0, $a0, -0x578
    ctx->r4 = ADD32(ctx->r4, -0X578);
    // 0x8026FA70: jal         0x800297B4
    // 0x8026FA74: sh          $t6, 0x38($t7)
    MEM_H(0X38, ctx->r15) = ctx->r14;
    func_800297B4(rdram, ctx);
        goto after_1;
    // 0x8026FA74: sh          $t6, 0x38($t7)
    MEM_H(0X38, ctx->r15) = ctx->r14;
    after_1:
    // 0x8026FA78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026FA7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026FA80: jr          $ra
    // 0x8026FA84: nop

    return;
    // 0x8026FA84: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026FA88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FA88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026FA8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026FA90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026FA94: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FA98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026FA9C: jal         0x80035FF0
    // 0x8026FAA0: addiu       $a0, $a0, 0x3A40
    ctx->r4 = ADD32(ctx->r4, 0X3A40);
    func_80035FF0(rdram, ctx);
        goto after_0;
    // 0x8026FAA0: addiu       $a0, $a0, 0x3A40
    ctx->r4 = ADD32(ctx->r4, 0X3A40);
    after_0:
    // 0x8026FAA4: addiu       $a0, $zero, 0x2330
    ctx->r4 = ADD32(0, 0X2330);
    // 0x8026FAA8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x8026FAAC: jal         0x80049E40
    // 0x8026FAB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80049E40(rdram, ctx);
        goto after_1;
    // 0x8026FAB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8026FAB4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8026FAB8: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8026FABC: lbu         $t6, 0x70A($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X70A);
    // 0x8026FAC0: lbu         $t8, 0x754($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X754);
    // 0x8026FAC4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FAC8: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x8026FACC: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x8026FAD0: sb          $t7, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r15;
    // 0x8026FAD4: sb          $t9, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r25;
    // 0x8026FAD8: addiu       $a0, $a0, -0x50C
    ctx->r4 = ADD32(ctx->r4, -0X50C);
    // 0x8026FADC: jal         0x8002989C
    // 0x8026FAE0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002989C(rdram, ctx);
        goto after_2;
    // 0x8026FAE0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x8026FAE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026FAE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026FAEC: jr          $ra
    // 0x8026FAF0: nop

    return;
    // 0x8026FAF0: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026FAA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FAA0: addiu       $a0, $a0, 0x3A40
    ctx->r4 = ADD32(ctx->r4, 0X3A40);
    // 0x8026FAA4: addiu       $a0, $zero, 0x2330
    ctx->r4 = ADD32(0, 0X2330);
    // 0x8026FAA8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x8026FAAC: jal         0x80049E40
    // 0x8026FAB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80049E40(rdram, ctx);
        goto after_0;
    // 0x8026FAB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8026FAB4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8026FAB8: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8026FABC: lbu         $t6, 0x70A($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X70A);
    // 0x8026FAC0: lbu         $t8, 0x754($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X754);
    // 0x8026FAC4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FAC8: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x8026FACC: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x8026FAD0: sb          $t7, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r15;
    // 0x8026FAD4: sb          $t9, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r25;
    // 0x8026FAD8: addiu       $a0, $a0, -0x50C
    ctx->r4 = ADD32(ctx->r4, -0X50C);
    // 0x8026FADC: jal         0x8002989C
    // 0x8026FAE0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x8026FAE0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x8026FAE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026FAE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026FAEC: jr          $ra
    // 0x8026FAF0: nop

    return;
    // 0x8026FAF0: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026FAF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FAF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026FAF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026FAFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026FB00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026FB04: jal         0x8006196C
    // 0x8026FB08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006196C(rdram, ctx);
        goto after_0;
    // 0x8026FB08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8026FB0C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FB10: addiu       $a0, $a0, -0x4D4
    ctx->r4 = ADD32(ctx->r4, -0X4D4);
    // 0x8026FB14: jal         0x8002989C
    // 0x8026FB18: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x8026FB18: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x8026FB1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026FB20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026FB24: jr          $ra
    // 0x8026FB28: nop

    return;
    // 0x8026FB28: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026FB2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FB2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026FB30: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8026FB34: lb          $t7, 0x419($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X419);
    // 0x8026FB38: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8026FB3C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8026FB40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026FB44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026FB48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026FB4C: sh          $t6, 0x5220($at)
    MEM_H(0X5220, ctx->r1) = ctx->r14;
    // 0x8026FB50: sh          $t7, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r15;
    // 0x8026FB54: lh          $a0, 0x24($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X24);
    // 0x8026FB58: jal         0x8003C138
    // 0x8026FB5C: nop

    func_8003C138(rdram, ctx);
        goto after_0;
    // 0x8026FB5C: nop

    after_0:
    // 0x8026FB60: jal         0x802704C0
    // 0x8026FB64: nop

    ovl_8026F480_func_802704C0(rdram, ctx);
        goto after_1;
    // 0x8026FB64: nop

    after_1:
    // 0x8026FB68: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FB6C: jal         0x8002AAC0
    // 0x8026FB70: addiu       $a0, $a0, 0x3C50
    ctx->r4 = ADD32(ctx->r4, 0X3C50);
    func_8002AAC0(rdram, ctx);
        goto after_2;
    // 0x8026FB70: addiu       $a0, $a0, 0x3C50
    ctx->r4 = ADD32(ctx->r4, 0X3C50);
    after_2:
    // 0x8026FB74: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FB78: jal         0x800296E0
    // 0x8026FB7C: addiu       $a0, $a0, -0x470
    ctx->r4 = ADD32(ctx->r4, -0X470);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x8026FB7C: addiu       $a0, $a0, -0x470
    ctx->r4 = ADD32(ctx->r4, -0X470);
    after_3:
    // 0x8026FB80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026FB84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026FB88: jr          $ra
    // 0x8026FB8C: nop

    return;
    // 0x8026FB8C: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026FB90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FB90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026FB94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026FB98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026FB9C: jal         0x8006FB58
    // 0x8026FBA0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8006FB58(rdram, ctx);
        goto after_0;
    // 0x8026FBA0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8026FBA4: jal         0x800375E8
    // 0x8026FBA8: nop

    func_800375E8(rdram, ctx);
        goto after_1;
    // 0x8026FBA8: nop

    after_1:
    // 0x8026FBAC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FBB0: jal         0x80029354
    // 0x8026FBB4: addiu       $a0, $a0, -0x6C
    ctx->r4 = ADD32(ctx->r4, -0X6C);
    func_80029354(rdram, ctx);
        goto after_2;
    // 0x8026FBB4: addiu       $a0, $a0, -0x6C
    ctx->r4 = ADD32(ctx->r4, -0X6C);
    after_2:
    // 0x8026FBB8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FBBC: jal         0x80029220
    // 0x8026FBC0: addiu       $a0, $a0, 0x774
    ctx->r4 = ADD32(ctx->r4, 0X774);
    func_80029220(rdram, ctx);
        goto after_3;
    // 0x8026FBC0: addiu       $a0, $a0, 0x774
    ctx->r4 = ADD32(ctx->r4, 0X774);
    after_3:
    // 0x8026FBC4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FBC8: addiu       $a0, $a0, -0x41C
    ctx->r4 = ADD32(ctx->r4, -0X41C);
    // 0x8026FBCC: jal         0x8004AE38
    // 0x8026FBD0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_4;
    // 0x8026FBD0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_4:
    // 0x8026FBD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026FBD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026FBDC: jr          $ra
    // 0x8026FBE0: nop

    return;
    // 0x8026FBE0: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026FBA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FBA4: jal         0x800375E8
    // 0x8026FBA8: nop

    func_800375E8(rdram, ctx);
        goto after_0;
    // 0x8026FBA8: nop

    after_0:
    // 0x8026FBAC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FBB0: jal         0x80029354
    // 0x8026FBB4: addiu       $a0, $a0, -0x6C
    ctx->r4 = ADD32(ctx->r4, -0X6C);
    func_80029354(rdram, ctx);
        goto after_1;
    // 0x8026FBB4: addiu       $a0, $a0, -0x6C
    ctx->r4 = ADD32(ctx->r4, -0X6C);
    after_1:
    // 0x8026FBB8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FBBC: jal         0x80029220
    // 0x8026FBC0: addiu       $a0, $a0, 0x774
    ctx->r4 = ADD32(ctx->r4, 0X774);
    func_80029220(rdram, ctx);
        goto after_2;
    // 0x8026FBC0: addiu       $a0, $a0, 0x774
    ctx->r4 = ADD32(ctx->r4, 0X774);
    after_2:
    // 0x8026FBC4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FBC8: addiu       $a0, $a0, -0x41C
    ctx->r4 = ADD32(ctx->r4, -0X41C);
    // 0x8026FBCC: jal         0x8004AE38
    // 0x8026FBD0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_3;
    // 0x8026FBD0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
    // 0x8026FBD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026FBD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026FBDC: jr          $ra
    // 0x8026FBE0: nop

    return;
    // 0x8026FBE0: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026FBE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FBE4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026FBE8: lb          $t6, -0x3110($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3110);
    // 0x8026FBEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026FBF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026FBF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026FBF8: bne         $t6, $zero, L_8026FC18
    if (ctx->r14 != 0) {
        // 0x8026FBFC: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8026FC18;
    }
    // 0x8026FBFC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026FC00: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FC04: addiu       $a0, $a0, 0x560
    ctx->r4 = ADD32(ctx->r4, 0X560);
    // 0x8026FC08: jal         0x8002989C
    // 0x8026FC0C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x8026FC0C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
    // 0x8026FC10: b           L_8026FC28
    // 0x8026FC14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026FC28;
    // 0x8026FC14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026FC18:
    // 0x8026FC18: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FC1C: jal         0x800296E0
    // 0x8026FC20: addiu       $a0, $a0, -0x3CC
    ctx->r4 = ADD32(ctx->r4, -0X3CC);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x8026FC20: addiu       $a0, $a0, -0x3CC
    ctx->r4 = ADD32(ctx->r4, -0X3CC);
    after_1:
    // 0x8026FC24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026FC28:
    // 0x8026FC28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026FC2C: jr          $ra
    // 0x8026FC30: nop

    return;
    // 0x8026FC30: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026FC34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FC34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8026FC38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026FC3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026FC40: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026FC44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026FC48: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8026FC4C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8026FC50: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026FC54: lh          $a0, 0x523E($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X523E);
    // 0x8026FC58: sb          $t6, -0x3110($at)
    MEM_B(-0X3110, ctx->r1) = ctx->r14;
    // 0x8026FC5C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x8026FC60: jal         0x8001D4C0
    // 0x8026FC64: addiu       $a2, $zero, 0x4B
    ctx->r6 = ADD32(0, 0X4B);
    func_8001D4C0(rdram, ctx);
        goto after_0;
    // 0x8026FC64: addiu       $a2, $zero, 0x4B
    ctx->r6 = ADD32(0, 0X4B);
    after_0:
    // 0x8026FC68: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026FC6C: lh          $a0, 0x523E($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X523E);
    // 0x8026FC70: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8026FC74: addiu       $a1, $zero, -0x4B
    ctx->r5 = ADD32(0, -0X4B);
    // 0x8026FC78: jal         0x8001D4C0
    // 0x8026FC7C: addiu       $a2, $zero, -0xF
    ctx->r6 = ADD32(0, -0XF);
    func_8001D4C0(rdram, ctx);
        goto after_1;
    // 0x8026FC7C: addiu       $a2, $zero, -0xF
    ctx->r6 = ADD32(0, -0XF);
    after_1:
    // 0x8026FC80: addiu       $v1, $zero, 0x6D3A
    ctx->r3 = ADD32(0, 0X6D3A);
    // 0x8026FC84: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026FC88: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8026FC8C: sh          $zero, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = 0;
    // 0x8026FC90: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8026FC94: mflo        $t7
    ctx->r15 = lo;
    // 0x8026FC98: nop

    // 0x8026FC9C: nop

    // 0x8026FCA0: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026FCA4: mflo        $t9
    ctx->r25 = lo;
    // 0x8026FCA8: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8026FCAC: sw          $t0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r8;
    // 0x8026FCB0: lw          $t1, -0x3250($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3250);
    // 0x8026FCB4: nop

    // 0x8026FCB8: lhu         $a0, 0x0($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X0);
    // 0x8026FCBC: jal         0x80035C90
    // 0x8026FCC0: nop

    func_80035C90(rdram, ctx);
        goto after_2;
    // 0x8026FCC0: nop

    after_2:
    // 0x8026FCC4: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x8026FCC8: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x8026FCCC: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x8026FCD0: lw          $t9, 0x3CD8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3CD8);
    // 0x8026FCD4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8026FCD8: jalr        $t9
    // 0x8026FCDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x8026FCDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8026FCE0: lh          $t3, 0x2C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X2C);
    // 0x8026FCE4: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x8026FCE8: lw          $t5, 0x59BC($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X59BC);
    // 0x8026FCEC: lw          $t8, 0x28($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X28);
    // 0x8026FCF0: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x8026FCF4: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8026FCF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8026FCFC: lui         $a2, 0x238
    ctx->r6 = S32(0X238 << 16);
    // 0x8026FD00: jal         0x8001D4C0
    // 0x8026FD04: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    func_8001D4C0(rdram, ctx);
        goto after_4;
    // 0x8026FD04: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    after_4:
    // 0x8026FD08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026FD0C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8026FD10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026FD14: sw          $v0, 0x59BC($at)
    MEM_W(0X59BC, ctx->r1) = ctx->r2;
    // 0x8026FD18: jr          $ra
    // 0x8026FD1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8026FD1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8026F480_func_8026FD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FD20: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8026FD24: lb          $t7, -0x32A1($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X32A1);
    // 0x8026FD28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8026FD2C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8026FD30: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8026FD34: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8026FD38: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8026FD3C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8026FD40: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8026FD44: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8026FD48: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8026FD4C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8026FD50: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8026FD54: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8026FD58: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8026FD5C: addiu       $t9, $t9, -0x2F80
    ctx->r25 = ADD32(ctx->r25, -0X2F80);
    // 0x8026FD60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026FD64: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8026FD68: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x8026FD6C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8026FD70: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8026FD74: sh          $t6, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r14;
    // 0x8026FD78: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8026FD7C: jal         0x80035770
    // 0x8026FD80: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x8026FD80: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    after_0:
    // 0x8026FD84: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8026FD88: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8026FD8C: lh          $t2, 0x38($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X38);
    // 0x8026FD90: lh          $a3, 0x24($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X24);
    // 0x8026FD94: bne         $t2, $zero, L_8026FE9C
    if (ctx->r10 != 0) {
        // 0x8026FD98: lui         $t0, 0x8012
        ctx->r8 = S32(0X8012 << 16);
            goto L_8026FE9C;
    }
    // 0x8026FD98: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8026FD9C: addiu       $t0, $t0, -0x32B0
    ctx->r8 = ADD32(ctx->r8, -0X32B0);
    // 0x8026FDA0: lbu         $t3, 0x11($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X11);
    // 0x8026FDA4: nop

    // 0x8026FDA8: bne         $t3, $zero, L_8026FE9C
    if (ctx->r11 != 0) {
        // 0x8026FDAC: nop
    
            goto L_8026FE9C;
    }
    // 0x8026FDAC: nop

    // 0x8026FDB0: lbu         $t4, 0x0($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X0);
    // 0x8026FDB4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8026FDB8: bne         $t4, $zero, L_8026FE9C
    if (ctx->r12 != 0) {
        // 0x8026FDBC: nop
    
            goto L_8026FE9C;
    }
    // 0x8026FDBC: nop

    // 0x8026FDC0: lb          $v0, 0x419($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X419);
    // 0x8026FDC4: nop

    // 0x8026FDC8: blez        $v0, L_8026FE9C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8026FDCC: slti        $at, $v0, 0x5
        ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
            goto L_8026FE9C;
    }
    // 0x8026FDCC: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x8026FDD0: beq         $at, $zero, L_8026FE9C
    if (ctx->r1 == 0) {
        // 0x8026FDD4: slti        $at, $v0, 0x4
        ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
            goto L_8026FE9C;
    }
    // 0x8026FDD4: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8026FDD8: bne         $at, $zero, L_8026FE30
    if (ctx->r1 != 0) {
        // 0x8026FDDC: nop
    
            goto L_8026FE30;
    }
    // 0x8026FDDC: nop

    // 0x8026FDE0: lb          $v1, 0x5($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X5);
    // 0x8026FDE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026FDE8: blez        $v1, L_8026FE30
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8026FDEC: nop
    
            goto L_8026FE30;
    }
    // 0x8026FDEC: nop

    // 0x8026FDF0: lb          $a0, 0x335C($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X335C);
    // 0x8026FDF4: addiu       $a1, $zero, 0x47C
    ctx->r5 = ADD32(0, 0X47C);
L_8026FDF8:
    // 0x8026FDF8: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026FDFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8026FE00: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x8026FE04: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8026FE08: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8026FE0C: mflo        $t5
    ctx->r13 = lo;
    // 0x8026FE10: addu        $t6, $a2, $t5
    ctx->r14 = ADD32(ctx->r6, ctx->r13);
    // 0x8026FE14: lb          $t7, 0xC($t6)
    ctx->r15 = MEM_B(ctx->r14, 0XC);
    // 0x8026FE18: nop

    // 0x8026FE1C: bne         $a0, $t7, L_8026FE28
    if (ctx->r4 != ctx->r15) {
        // 0x8026FE20: nop
    
            goto L_8026FE28;
    }
    // 0x8026FE20: nop

    // 0x8026FE24: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_8026FE28:
    // 0x8026FE28: bne         $at, $zero, L_8026FDF8
    if (ctx->r1 != 0) {
        // 0x8026FE2C: nop
    
            goto L_8026FDF8;
    }
    // 0x8026FE2C: nop

L_8026FE30:
    // 0x8026FE30: jal         0x80280DAC
    // 0x8026FE34: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x80280DAC)(rdram, ctx);
        goto after_1;
    // 0x8026FE34: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x8026FE38: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8026FE3C: jal         0x80049A90
    // 0x8026FE40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80049A90(rdram, ctx);
        goto after_2;
    // 0x8026FE40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8026FE44: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x8026FE48: lh          $a3, 0x24($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X24);
    // 0x8026FE4C: beq         $v0, $t1, L_8026FE84
    if (ctx->r2 == ctx->r9) {
        // 0x8026FE50: nop
    
            goto L_8026FE84;
    }
    // 0x8026FE50: nop

    // 0x8026FE54: jal         0x8027EDD0
    // 0x8026FE58: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x8027EDD0)(rdram, ctx);
        goto after_3;
    // 0x8026FE58: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    after_3:
    // 0x8026FE5C: lh          $a3, 0x24($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X24);
    // 0x8026FE60: bne         $v0, $zero, L_8026FE9C
    if (ctx->r2 != 0) {
        // 0x8026FE64: nop
    
            goto L_8026FE9C;
    }
    // 0x8026FE64: nop

    // 0x8026FE68: bne         $a3, $zero, L_8026FE9C
    if (ctx->r7 != 0) {
        // 0x8026FE6C: lui         $t2, 0x8011
        ctx->r10 = S32(0X8011 << 16);
            goto L_8026FE9C;
    }
    // 0x8026FE6C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8026FE70: lb          $t2, 0x419($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X419);
    // 0x8026FE74: nop

    // 0x8026FE78: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x8026FE7C: beq         $at, $zero, L_8026FE9C
    if (ctx->r1 == 0) {
        // 0x8026FE80: nop
    
            goto L_8026FE9C;
    }
    // 0x8026FE80: nop

L_8026FE84:
    // 0x8026FE84: jal         0x80015BC0
    // 0x8026FE88: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80015BC0(rdram, ctx);
        goto after_4;
    // 0x8026FE88: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_4:
    // 0x8026FE8C: addiu       $t3, $zero, 0x30
    ctx->r11 = ADD32(0, 0X30);
    // 0x8026FE90: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026FE94: sh          $t3, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r11;
    // 0x8026FE98: sb          $zero, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = 0;
L_8026FE9C:
    // 0x8026FE9C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FEA0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x8026FEA4: jal         0x8002989C
    // 0x8026FEA8: addiu       $a0, $a0, -0x144
    ctx->r4 = ADD32(ctx->r4, -0X144);
    func_8002989C(rdram, ctx);
        goto after_5;
    // 0x8026FEA8: addiu       $a0, $a0, -0x144
    ctx->r4 = ADD32(ctx->r4, -0X144);
    after_5:
    // 0x8026FEAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026FEB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8026FEB4: jr          $ra
    // 0x8026FEB8: nop

    return;
    // 0x8026FEB8: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026FDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FDD0: beq         $at, $zero, L_8026FE9C
    if (ctx->r1 == 0) {
        // 0x8026FDD4: slti        $at, $v0, 0x4
        ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
            goto L_8026FE9C;
    }
    // 0x8026FDD4: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8026FDD8: bne         $at, $zero, L_8026FE30
    if (ctx->r1 != 0) {
        // 0x8026FDDC: nop
    
            goto L_8026FE30;
    }
    // 0x8026FDDC: nop

    // 0x8026FDE0: lb          $v1, 0x5($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X5);
    // 0x8026FDE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026FDE8: blez        $v1, L_8026FE30
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8026FDEC: nop
    
            goto L_8026FE30;
    }
    // 0x8026FDEC: nop

    // 0x8026FDF0: lb          $a0, 0x335C($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X335C);
    // 0x8026FDF4: addiu       $a1, $zero, 0x47C
    ctx->r5 = ADD32(0, 0X47C);
L_8026FDF8:
    // 0x8026FDF8: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8026FDFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8026FE00: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x8026FE04: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8026FE08: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8026FE0C: mflo        $t5
    ctx->r13 = lo;
    // 0x8026FE10: addu        $t6, $a2, $t5
    ctx->r14 = ADD32(ctx->r6, ctx->r13);
    // 0x8026FE14: lb          $t7, 0xC($t6)
    ctx->r15 = MEM_B(ctx->r14, 0XC);
    // 0x8026FE18: nop

    // 0x8026FE1C: bne         $a0, $t7, L_8026FE28
    if (ctx->r4 != ctx->r15) {
        // 0x8026FE20: nop
    
            goto L_8026FE28;
    }
    // 0x8026FE20: nop

    // 0x8026FE24: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_8026FE28:
    // 0x8026FE28: bne         $at, $zero, L_8026FDF8
    if (ctx->r1 != 0) {
        // 0x8026FE2C: nop
    
            goto L_8026FDF8;
    }
    // 0x8026FE2C: nop

L_8026FE30:
    // 0x8026FE30: jal         0x80280DAC
    // 0x8026FE34: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x80280DAC)(rdram, ctx);
        goto after_0;
    // 0x8026FE34: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x8026FE38: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8026FE3C: jal         0x80049A90
    // 0x8026FE40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80049A90(rdram, ctx);
        goto after_1;
    // 0x8026FE40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8026FE44: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x8026FE48: lh          $a3, 0x24($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X24);
    // 0x8026FE4C: beq         $v0, $t1, L_8026FE84
    if (ctx->r2 == ctx->r9) {
        // 0x8026FE50: nop
    
            goto L_8026FE84;
    }
    // 0x8026FE50: nop

    // 0x8026FE54: jal         0x8027EDD0
    // 0x8026FE58: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x8027EDD0)(rdram, ctx);
        goto after_2;
    // 0x8026FE58: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    after_2:
    // 0x8026FE5C: lh          $a3, 0x24($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X24);
    // 0x8026FE60: bne         $v0, $zero, L_8026FE9C
    if (ctx->r2 != 0) {
        // 0x8026FE64: nop
    
            goto L_8026FE9C;
    }
    // 0x8026FE64: nop

    // 0x8026FE68: bne         $a3, $zero, L_8026FE9C
    if (ctx->r7 != 0) {
        // 0x8026FE6C: lui         $t2, 0x8011
        ctx->r10 = S32(0X8011 << 16);
            goto L_8026FE9C;
    }
    // 0x8026FE6C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8026FE70: lb          $t2, 0x419($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X419);
    // 0x8026FE74: nop

    // 0x8026FE78: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x8026FE7C: beq         $at, $zero, L_8026FE9C
    if (ctx->r1 == 0) {
        // 0x8026FE80: nop
    
            goto L_8026FE9C;
    }
    // 0x8026FE80: nop

L_8026FE84:
    // 0x8026FE84: jal         0x80015BC0
    // 0x8026FE88: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x8026FE88: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_3:
    // 0x8026FE8C: addiu       $t3, $zero, 0x30
    ctx->r11 = ADD32(0, 0X30);
    // 0x8026FE90: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026FE94: sh          $t3, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r11;
    // 0x8026FE98: sb          $zero, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = 0;
L_8026FE9C:
    // 0x8026FE9C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FEA0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x8026FEA4: jal         0x8002989C
    // 0x8026FEA8: addiu       $a0, $a0, -0x144
    ctx->r4 = ADD32(ctx->r4, -0X144);
    func_8002989C(rdram, ctx);
        goto after_4;
    // 0x8026FEA8: addiu       $a0, $a0, -0x144
    ctx->r4 = ADD32(ctx->r4, -0X144);
    after_4:
    // 0x8026FEAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026FEB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8026FEB4: jr          $ra
    // 0x8026FEB8: nop

    return;
    // 0x8026FEB8: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026FEBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FEBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026FEC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026FEC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026FEC8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8026FECC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026FED0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026FED4: sb          $t6, -0x3110($at)
    MEM_B(-0X3110, ctx->r1) = ctx->r14;
    // 0x8026FED8: jal         0x80037AB8
    // 0x8026FEDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037AB8(rdram, ctx);
        goto after_0;
    // 0x8026FEDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8026FEE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026FEE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026FEE8: jr          $ra
    // 0x8026FEEC: nop

    return;
    // 0x8026FEEC: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026FEC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FEC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026FEC8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8026FECC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026FED0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026FED4: sb          $t6, -0x3110($at)
    MEM_B(-0X3110, ctx->r1) = ctx->r14;
    // 0x8026FED8: jal         0x80037AB8
    // 0x8026FEDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037AB8(rdram, ctx);
        goto after_0;
    // 0x8026FEDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8026FEE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026FEE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026FEE8: jr          $ra
    // 0x8026FEEC: nop

    return;
    // 0x8026FEEC: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026FEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FEF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026FEF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026FEF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026FEFC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8026FF00: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026FF04: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026FF08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026FF0C: sb          $t6, -0x3110($at)
    MEM_B(-0X3110, ctx->r1) = ctx->r14;
    // 0x8026FF10: jal         0x800296E0
    // 0x8026FF14: addiu       $a0, $a0, -0x3CC
    ctx->r4 = ADD32(ctx->r4, -0X3CC);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x8026FF14: addiu       $a0, $a0, -0x3CC
    ctx->r4 = ADD32(ctx->r4, -0X3CC);
    after_0:
    // 0x8026FF18: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8026FF1C: lb          $t7, 0x419($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X419);
    // 0x8026FF20: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026FF24: beq         $t7, $zero, L_8026FF4C
    if (ctx->r15 == 0) {
        // 0x8026FF28: addiu       $v0, $v0, -0x32B0
        ctx->r2 = ADD32(ctx->r2, -0X32B0);
            goto L_8026FF4C;
    }
    // 0x8026FF28: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x8026FF2C: lbu         $t8, 0x11($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X11);
    // 0x8026FF30: nop

    // 0x8026FF34: bne         $t8, $zero, L_8026FF4C
    if (ctx->r24 != 0) {
        // 0x8026FF38: nop
    
            goto L_8026FF4C;
    }
    // 0x8026FF38: nop

    // 0x8026FF3C: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x8026FF40: nop

    // 0x8026FF44: beq         $t9, $zero, L_8026FF58
    if (ctx->r25 == 0) {
        // 0x8026FF48: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026FF58;
    }
    // 0x8026FF48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026FF4C:
    // 0x8026FF4C: jal         0x80037AB8
    // 0x8026FF50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037AB8(rdram, ctx);
        goto after_1;
    // 0x8026FF50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8026FF54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026FF58:
    // 0x8026FF58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026FF5C: jr          $ra
    // 0x8026FF60: nop

    return;
    // 0x8026FF60: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026FF64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FF64: jr          $ra
    // 0x8026FF68: nop

    return;
    // 0x8026FF68: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026FF6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FF6C: jr          $ra
    // 0x8026FF70: nop

    return;
    // 0x8026FF70: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026FF74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FF74: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8026FF78: addiu       $t6, $zero, -0x8
    ctx->r14 = ADD32(0, -0X8);
    // 0x8026FF7C: jr          $ra
    // 0x8026FF80: sh          $t6, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r14;
    return;
    // 0x8026FF80: sh          $t6, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void ovl_8026F480_func_8026FF84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FF84: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8026FF88: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8026FF8C: jr          $ra
    // 0x8026FF90: sh          $t6, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r14;
    return;
    // 0x8026FF90: sh          $t6, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void ovl_8026F480_func_8026FF94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FF94: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8026FF98: lh          $v1, -0x6B8($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X6B8);
    // 0x8026FF9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8026FFA0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8026FFA4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8026FFA8: beq         $v1, $zero, L_8026FFD8
    if (ctx->r3 == 0) {
        // 0x8026FFAC: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_8026FFD8;
    }
    // 0x8026FFAC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8026FFB0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026FFB4: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x8026FFB8: lbu         $t6, 0x11($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X11);
    // 0x8026FFBC: nop

    // 0x8026FFC0: bne         $t6, $zero, L_8026FFD8
    if (ctx->r14 != 0) {
        // 0x8026FFC4: nop
    
            goto L_8026FFD8;
    }
    // 0x8026FFC4: nop

    // 0x8026FFC8: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x8026FFCC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026FFD0: bne         $t7, $at, L_80270030
    if (ctx->r15 != ctx->r1) {
        // 0x8026FFD4: addiu       $v0, $v1, -0x1
        ctx->r2 = ADD32(ctx->r3, -0X1);
            goto L_80270030;
    }
    // 0x8026FFD4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_8026FFD8:
    // 0x8026FFD8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8026FFDC: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8026FFE0: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8026FFE4: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8026FFE8: addiu       $t0, $t0, 0x6224
    ctx->r8 = ADD32(ctx->r8, 0X6224);
    // 0x8026FFEC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8026FFF0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8026FFF4: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x8026FFF8: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8026FFFC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80270000: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80270004: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80270008: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8027000C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80270010: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80270014: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x80270018: addu        $a3, $t9, $t0
    ctx->r7 = ADD32(ctx->r25, ctx->r8);
    // 0x8027001C: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x80270020: jal         0x8002F528
    // 0x80270024: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_8002F528(rdram, ctx);
        goto after_0;
    // 0x80270024: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_0:
    // 0x80270028: b           L_80270084
    // 0x8027002C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_80270084;
    // 0x8027002C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80270030:
    // 0x80270030: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x80270034: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80270038: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8027003C: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80270040: addiu       $t8, $t8, 0x627C
    ctx->r24 = ADD32(ctx->r24, 0X627C);
    // 0x80270044: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80270048: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8027004C: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x80270050: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80270054: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80270058: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8027005C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80270060: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80270064: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80270068: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8027006C: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x80270070: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x80270074: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x80270078: jal         0x8002F528
    // 0x8027007C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_8002F528(rdram, ctx);
        goto after_1;
    // 0x8027007C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_1:
    // 0x80270080: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80270084:
    // 0x80270084: jal         0x8003BFB4
    // 0x80270088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003BFB4(rdram, ctx);
        goto after_2;
    // 0x80270088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8027008C: jal         0x800299C8
    // 0x80270090: nop

    func_800299C8(rdram, ctx);
        goto after_3;
    // 0x80270090: nop

    after_3:
    // 0x80270094: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80270098: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027009C: jr          $ra
    // 0x802700A0: nop

    return;
    // 0x802700A0: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026FFAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026FFAC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8026FFB0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026FFB4: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x8026FFB8: lbu         $t6, 0x11($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X11);
    // 0x8026FFBC: nop

    // 0x8026FFC0: bne         $t6, $zero, L_8026FFD8
    if (ctx->r14 != 0) {
        // 0x8026FFC4: nop
    
            goto L_8026FFD8;
    }
    // 0x8026FFC4: nop

    // 0x8026FFC8: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x8026FFCC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026FFD0: bne         $t7, $at, L_80270030
    if (ctx->r15 != ctx->r1) {
        // 0x8026FFD4: addiu       $v0, $v1, -0x1
        ctx->r2 = ADD32(ctx->r3, -0X1);
            goto L_80270030;
    }
    // 0x8026FFD4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_8026FFD8:
    // 0x8026FFD8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8026FFDC: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8026FFE0: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8026FFE4: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8026FFE8: addiu       $t0, $t0, 0x6224
    ctx->r8 = ADD32(ctx->r8, 0X6224);
    // 0x8026FFEC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8026FFF0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8026FFF4: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x8026FFF8: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8026FFFC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80270000: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80270004: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80270008: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8027000C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80270010: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80270014: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x80270018: addu        $a3, $t9, $t0
    ctx->r7 = ADD32(ctx->r25, ctx->r8);
    // 0x8027001C: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x80270020: jal         0x8002F528
    // 0x80270024: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_8002F528(rdram, ctx);
        goto after_0;
    // 0x80270024: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_0:
    // 0x80270028: b           L_80270084
    // 0x8027002C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_80270084;
    // 0x8027002C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80270030:
    // 0x80270030: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x80270034: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80270038: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8027003C: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80270040: addiu       $t8, $t8, 0x627C
    ctx->r24 = ADD32(ctx->r24, 0X627C);
    // 0x80270044: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80270048: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8027004C: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x80270050: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80270054: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80270058: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8027005C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80270060: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80270064: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80270068: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8027006C: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x80270070: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x80270074: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x80270078: jal         0x8002F528
    // 0x8027007C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_8002F528(rdram, ctx);
        goto after_1;
    // 0x8027007C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_1:
    // 0x80270080: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80270084:
    // 0x80270084: jal         0x8003BFB4
    // 0x80270088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003BFB4(rdram, ctx);
        goto after_2;
    // 0x80270088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8027008C: jal         0x800299C8
    // 0x80270090: nop

    func_800299C8(rdram, ctx);
        goto after_3;
    // 0x80270090: nop

    after_3:
    // 0x80270094: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80270098: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027009C: jr          $ra
    // 0x802700A0: nop

    return;
    // 0x802700A0: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80270028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270028: b           L_80270084
    // 0x8027002C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_80270084;
    // 0x8027002C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80270030: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x80270034: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80270038: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8027003C: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80270040: addiu       $t8, $t8, 0x627C
    ctx->r24 = ADD32(ctx->r24, 0X627C);
    // 0x80270044: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80270048: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8027004C: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x80270050: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80270054: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80270058: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8027005C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80270060: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80270064: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80270068: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8027006C: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x80270070: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x80270074: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x80270078: jal         0x8002F528
    // 0x8027007C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_8002F528(rdram, ctx);
        goto after_0;
    // 0x8027007C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_0:
    // 0x80270080: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80270084:
    // 0x80270084: jal         0x8003BFB4
    // 0x80270088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003BFB4(rdram, ctx);
        goto after_1;
    // 0x80270088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8027008C: jal         0x800299C8
    // 0x80270090: nop

    func_800299C8(rdram, ctx);
        goto after_2;
    // 0x80270090: nop

    after_2:
    // 0x80270094: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80270098: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027009C: jr          $ra
    // 0x802700A0: nop

    return;
    // 0x802700A0: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802700A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802700A4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802700A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802700AC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802700B0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802700B4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x802700B8: lh          $t0, 0x1E($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X1E);
    // 0x802700BC: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x802700C0: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x802700C4: lb          $v0, 0x40A0($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X40A0);
    // 0x802700C8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x802700CC: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x802700D0: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x802700D4: addiu       $a3, $a3, -0x3110
    ctx->r7 = ADD32(ctx->r7, -0X3110);
    // 0x802700D8: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802700DC: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x802700E0: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x802700E4: addu        $v1, $a3, $t6
    ctx->r3 = ADD32(ctx->r7, ctx->r14);
    // 0x802700E8: addu        $a2, $a3, $t2
    ctx->r6 = ADD32(ctx->r7, ctx->r10);
    // 0x802700EC: lb          $t7, 0x30($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X30);
    // 0x802700F0: lb          $t3, 0x30($a2)
    ctx->r11 = MEM_B(ctx->r6, 0X30);
    // 0x802700F4: sh          $t7, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r15;
    // 0x802700F8: sh          $t3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r11;
    // 0x802700FC: lw          $s0, 0x4($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X4);
    // 0x80270100: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x80270104: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x80270108: sh          $t0, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r8;
    // 0x8027010C: jal         0x8002A008
    // 0x80270110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002A008(rdram, ctx);
        goto after_0;
    // 0x80270110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80270114: lh          $a3, 0x40($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X40);
    // 0x80270118: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8027011C: bltz        $a3, L_80270354
    if (SIGNED(ctx->r7) < 0) {
        // 0x80270120: addiu       $s1, $zero, 0x3D5
        ctx->r17 = ADD32(0, 0X3D5);
            goto L_80270354;
    }
    // 0x80270120: addiu       $s1, $zero, 0x3D5
    ctx->r17 = ADD32(0, 0X3D5);
    // 0x80270124: lh          $t4, 0x3E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X3E);
    // 0x80270128: lh          $v1, 0x46($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X46);
    // 0x8027012C: bltz        $t4, L_80270354
    if (SIGNED(ctx->r12) < 0) {
        // 0x80270130: sll         $t5, $v1, 4
        ctx->r13 = S32(ctx->r3 << 4);
            goto L_80270354;
    }
    // 0x80270130: sll         $t5, $v1, 4
    ctx->r13 = S32(ctx->r3 << 4);
    // 0x80270134: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80270138: addiu       $t6, $t6, 0x3DC8
    ctx->r14 = ADD32(ctx->r14, 0X3DC8);
    // 0x8027013C: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x80270140: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x80270144: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x80270148: sh          $t7, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r15;
    // 0x8027014C: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x80270150: lh          $t2, 0x2C($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2C);
    // 0x80270154: sh          $t8, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r24;
    // 0x80270158: lh          $t3, 0x59BC($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X59BC);
    // 0x8027015C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80270160: addiu       $t1, $t1, -0x3770
    ctx->r9 = ADD32(ctx->r9, -0X3770);
    // 0x80270164: sll         $t9, $v1, 5
    ctx->r25 = S32(ctx->r3 << 5);
    // 0x80270168: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8027016C: subu        $a1, $t2, $t3
    ctx->r5 = SUB32(ctx->r10, ctx->r11);
    // 0x80270170: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x80270174: ori         $at, $at, 0xFF68
    ctx->r1 = ctx->r1 | 0XFF68;
    // 0x80270178: addu        $s1, $t9, $t1
    ctx->r17 = ADD32(ctx->r25, ctx->r9);
    // 0x8027017C: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x80270180: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80270184: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80270188: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x8027018C: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80270190: jal         0x8002F914
    // 0x80270194: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_8002F914(rdram, ctx);
        goto after_1;
    // 0x80270194: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_1:
    // 0x80270198: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x8027019C: lh          $t8, 0x59BC($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X59BC);
    // 0x802701A0: lh          $t7, 0x2E($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2E);
    // 0x802701A4: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x802701A8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802701AC: subu        $a1, $t7, $t8
    ctx->r5 = SUB32(ctx->r15, ctx->r24);
    // 0x802701B0: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x802701B4: ori         $at, $at, 0x148
    ctx->r1 = ctx->r1 | 0X148;
    // 0x802701B8: lh          $a3, 0x3E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X3E);
    // 0x802701BC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x802701C0: lh          $a2, 0x6($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X6);
    // 0x802701C4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802701C8: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x802701CC: jal         0x8002F914
    // 0x802701D0: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    func_8002F914(rdram, ctx);
        goto after_2;
    // 0x802701D0: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    after_2:
    // 0x802701D4: lh          $t3, 0x40($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X40);
    // 0x802701D8: lh          $t4, 0x3E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X3E);
    // 0x802701DC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x802701E0: bne         $t3, $t4, L_80270288
    if (ctx->r11 != ctx->r12) {
        // 0x802701E4: lui         $at, 0x3
        ctx->r1 = S32(0X3 << 16);
            goto L_80270288;
    }
    // 0x802701E4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802701E8: lh          $t5, 0x8($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X8);
    // 0x802701EC: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x802701F0: sh          $t5, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r13;
    // 0x802701F4: lh          $t6, 0xC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XC);
    // 0x802701F8: lh          $t7, 0x30($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X30);
    // 0x802701FC: sh          $t6, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r14;
    // 0x80270200: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80270204: lh          $t8, 0x59BC($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X59BC);
    // 0x80270208: lb          $a3, 0x31($t2)
    ctx->r7 = MEM_B(ctx->r10, 0X31);
    // 0x8027020C: subu        $a1, $t7, $t8
    ctx->r5 = SUB32(ctx->r15, ctx->r24);
    // 0x80270210: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x80270214: lh          $a2, 0xA($v0)
    ctx->r6 = MEM_H(ctx->r2, 0XA);
    // 0x80270218: ori         $at, $at, 0x328
    ctx->r1 = ctx->r1 | 0X328;
    // 0x8027021C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80270220: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80270224: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x80270228: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8027022C: jal         0x8002F9EC
    // 0x80270230: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_8002F9EC(rdram, ctx);
        goto after_3;
    // 0x80270230: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_3:
    // 0x80270234: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x80270238: lh          $t5, 0x59BC($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X59BC);
    // 0x8027023C: lh          $t4, 0x32($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X32);
    // 0x80270240: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80270244: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80270248: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8027024C: subu        $a1, $t4, $t5
    ctx->r5 = SUB32(ctx->r12, ctx->r13);
    // 0x80270250: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80270254: ori         $at, $at, 0x508
    ctx->r1 = ctx->r1 | 0X508;
    // 0x80270258: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8027025C: lh          $a2, 0xE($v0)
    ctx->r6 = MEM_H(ctx->r2, 0XE);
    // 0x80270260: lb          $a3, 0x31($t8)
    ctx->r7 = MEM_B(ctx->r24, 0X31);
    // 0x80270264: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80270268: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x8027026C: jal         0x8002F9EC
    // 0x80270270: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    func_8002F9EC(rdram, ctx);
        goto after_4;
    // 0x80270270: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    after_4:
    // 0x80270274: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80270278: jal         0x8002BB50
    // 0x8027027C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8002BB50(rdram, ctx);
        goto after_5;
    // 0x8027027C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_5:
    // 0x80270280: b           L_80270298
    // 0x80270284: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
        goto L_80270298;
    // 0x80270284: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
L_80270288:
    // 0x80270288: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8027028C: jal         0x8002BB50
    // 0x80270290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_6;
    // 0x80270290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80270294: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
L_80270298:
    // 0x80270298: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8027029C: lh          $a0, 0x40($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X40);
    // 0x802702A0: lh          $a2, 0x3E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X3E);
    // 0x802702A4: lb          $a1, 0x31($t1)
    ctx->r5 = MEM_B(ctx->r9, 0X31);
    // 0x802702A8: lb          $a3, 0x31($t2)
    ctx->r7 = MEM_B(ctx->r10, 0X31);
    // 0x802702AC: jal         0x8003CF0C
    // 0x802702B0: nop

    func_8003CF0C(rdram, ctx);
        goto after_7;
    // 0x802702B0: nop

    after_7:
    // 0x802702B4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802702B8: beq         $at, $zero, L_8027030C
    if (ctx->r1 == 0) {
        // 0x802702BC: addiu       $t8, $zero, 0x5
        ctx->r24 = ADD32(0, 0X5);
            goto L_8027030C;
    }
    // 0x802702BC: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x802702C0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802702C4: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x802702C8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x802702CC: sb          $t3, -0x83($at)
    MEM_B(-0X83, ctx->r1) = ctx->r11;
    // 0x802702D0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802702D4: addu        $v0, $s1, $at
    ctx->r2 = ADD32(ctx->r17, ctx->r1);
    // 0x802702D8: lh          $t7, 0x46($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X46);
    // 0x802702DC: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x802702E0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802702E4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x802702E8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x802702EC: sb          $t4, 0x15D($v0)
    MEM_B(0X15D, ctx->r2) = ctx->r12;
    // 0x802702F0: sb          $t5, 0x33D($v0)
    MEM_B(0X33D, ctx->r2) = ctx->r13;
    // 0x802702F4: beq         $t7, $at, L_80270304
    if (ctx->r15 == ctx->r1) {
        // 0x802702F8: sb          $t6, 0x51D($v0)
        MEM_B(0X51D, ctx->r2) = ctx->r14;
            goto L_80270304;
    }
    // 0x802702F8: sb          $t6, 0x51D($v0)
    MEM_B(0X51D, ctx->r2) = ctx->r14;
    // 0x802702FC: b           L_80270360
    // 0x80270300: addiu       $s1, $zero, 0x3D6
    ctx->r17 = ADD32(0, 0X3D6);
        goto L_80270360;
    // 0x80270300: addiu       $s1, $zero, 0x3D6
    ctx->r17 = ADD32(0, 0X3D6);
L_80270304:
    // 0x80270304: b           L_80270360
    // 0x80270308: addiu       $s1, $zero, 0x3D8
    ctx->r17 = ADD32(0, 0X3D8);
        goto L_80270360;
    // 0x80270308: addiu       $s1, $zero, 0x3D8
    ctx->r17 = ADD32(0, 0X3D8);
L_8027030C:
    // 0x8027030C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80270310: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x80270314: sb          $t8, -0x83($at)
    MEM_B(-0X83, ctx->r1) = ctx->r24;
    // 0x80270318: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8027031C: addu        $v0, $s1, $at
    ctx->r2 = ADD32(ctx->r17, ctx->r1);
    // 0x80270320: lh          $t3, 0x46($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X46);
    // 0x80270324: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80270328: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8027032C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80270330: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80270334: sb          $t9, 0x15D($v0)
    MEM_B(0X15D, ctx->r2) = ctx->r25;
    // 0x80270338: sb          $t1, 0x33D($v0)
    MEM_B(0X33D, ctx->r2) = ctx->r9;
    // 0x8027033C: beq         $t3, $at, L_8027034C
    if (ctx->r11 == ctx->r1) {
        // 0x80270340: sb          $t2, 0x51D($v0)
        MEM_B(0X51D, ctx->r2) = ctx->r10;
            goto L_8027034C;
    }
    // 0x80270340: sb          $t2, 0x51D($v0)
    MEM_B(0X51D, ctx->r2) = ctx->r10;
    // 0x80270344: b           L_80270360
    // 0x80270348: addiu       $s1, $zero, 0x3D7
    ctx->r17 = ADD32(0, 0X3D7);
        goto L_80270360;
    // 0x80270348: addiu       $s1, $zero, 0x3D7
    ctx->r17 = ADD32(0, 0X3D7);
L_8027034C:
    // 0x8027034C: b           L_80270360
    // 0x80270350: addiu       $s1, $zero, 0x3D9
    ctx->r17 = ADD32(0, 0X3D9);
        goto L_80270360;
    // 0x80270350: addiu       $s1, $zero, 0x3D9
    ctx->r17 = ADD32(0, 0X3D9);
L_80270354:
    // 0x80270354: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80270358: jal         0x8002BB50
    // 0x8027035C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_8;
    // 0x8027035C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
L_80270360:
    // 0x80270360: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80270364: jal         0x8002F020
    // 0x80270368: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002F020(rdram, ctx);
        goto after_9;
    // 0x80270368: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x8027036C: lh          $t4, 0x46($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X46);
    // 0x80270370: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x80270374: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80270378: addu        $a3, $a3, $t5
    ctx->r7 = ADD32(ctx->r7, ctx->r13);
    // 0x8027037C: lw          $a3, 0x3AF0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3AF0);
    // 0x80270380: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80270384: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    // 0x80270388: jal         0x8004CD24
    // 0x8027038C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8004CD24(rdram, ctx);
        goto after_10;
    // 0x8027038C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_10:
    // 0x80270390: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80270394: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80270398: jal         0x8002135C
    // 0x8027039C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_11;
    // 0x8027039C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x802703A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802703A4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802703A8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802703AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802703B0: jr          $ra
    // 0x802703B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802703B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_802700FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802700FC: lw          $s0, 0x4($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X4);
    // 0x80270100: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x80270104: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x80270108: sh          $t0, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r8;
    // 0x8027010C: jal         0x8002A008
    // 0x80270110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002A008(rdram, ctx);
        goto after_0;
    // 0x80270110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80270114: lh          $a3, 0x40($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X40);
    // 0x80270118: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8027011C: bltz        $a3, L_80270354
    if (SIGNED(ctx->r7) < 0) {
        // 0x80270120: addiu       $s1, $zero, 0x3D5
        ctx->r17 = ADD32(0, 0X3D5);
            goto L_80270354;
    }
    // 0x80270120: addiu       $s1, $zero, 0x3D5
    ctx->r17 = ADD32(0, 0X3D5);
    // 0x80270124: lh          $t4, 0x3E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X3E);
    // 0x80270128: lh          $v1, 0x46($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X46);
    // 0x8027012C: bltz        $t4, L_80270354
    if (SIGNED(ctx->r12) < 0) {
        // 0x80270130: sll         $t5, $v1, 4
        ctx->r13 = S32(ctx->r3 << 4);
            goto L_80270354;
    }
    // 0x80270130: sll         $t5, $v1, 4
    ctx->r13 = S32(ctx->r3 << 4);
    // 0x80270134: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80270138: addiu       $t6, $t6, 0x3DC8
    ctx->r14 = ADD32(ctx->r14, 0X3DC8);
    // 0x8027013C: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x80270140: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x80270144: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x80270148: sh          $t7, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r15;
    // 0x8027014C: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x80270150: lh          $t2, 0x2C($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2C);
    // 0x80270154: sh          $t8, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r24;
    // 0x80270158: lh          $t3, 0x59BC($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X59BC);
    // 0x8027015C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80270160: addiu       $t1, $t1, -0x3770
    ctx->r9 = ADD32(ctx->r9, -0X3770);
    // 0x80270164: sll         $t9, $v1, 5
    ctx->r25 = S32(ctx->r3 << 5);
    // 0x80270168: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8027016C: subu        $a1, $t2, $t3
    ctx->r5 = SUB32(ctx->r10, ctx->r11);
    // 0x80270170: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x80270174: ori         $at, $at, 0xFF68
    ctx->r1 = ctx->r1 | 0XFF68;
    // 0x80270178: addu        $s1, $t9, $t1
    ctx->r17 = ADD32(ctx->r25, ctx->r9);
    // 0x8027017C: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x80270180: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80270184: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80270188: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x8027018C: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80270190: jal         0x8002F914
    // 0x80270194: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_8002F914(rdram, ctx);
        goto after_1;
    // 0x80270194: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_1:
    // 0x80270198: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x8027019C: lh          $t8, 0x59BC($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X59BC);
    // 0x802701A0: lh          $t7, 0x2E($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2E);
    // 0x802701A4: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x802701A8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802701AC: subu        $a1, $t7, $t8
    ctx->r5 = SUB32(ctx->r15, ctx->r24);
    // 0x802701B0: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x802701B4: ori         $at, $at, 0x148
    ctx->r1 = ctx->r1 | 0X148;
    // 0x802701B8: lh          $a3, 0x3E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X3E);
    // 0x802701BC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x802701C0: lh          $a2, 0x6($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X6);
    // 0x802701C4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802701C8: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x802701CC: jal         0x8002F914
    // 0x802701D0: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    func_8002F914(rdram, ctx);
        goto after_2;
    // 0x802701D0: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    after_2:
    // 0x802701D4: lh          $t3, 0x40($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X40);
    // 0x802701D8: lh          $t4, 0x3E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X3E);
    // 0x802701DC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x802701E0: bne         $t3, $t4, L_80270288
    if (ctx->r11 != ctx->r12) {
        // 0x802701E4: lui         $at, 0x3
        ctx->r1 = S32(0X3 << 16);
            goto L_80270288;
    }
    // 0x802701E4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802701E8: lh          $t5, 0x8($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X8);
    // 0x802701EC: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x802701F0: sh          $t5, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r13;
    // 0x802701F4: lh          $t6, 0xC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XC);
    // 0x802701F8: lh          $t7, 0x30($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X30);
    // 0x802701FC: sh          $t6, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r14;
    // 0x80270200: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80270204: lh          $t8, 0x59BC($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X59BC);
    // 0x80270208: lb          $a3, 0x31($t2)
    ctx->r7 = MEM_B(ctx->r10, 0X31);
    // 0x8027020C: subu        $a1, $t7, $t8
    ctx->r5 = SUB32(ctx->r15, ctx->r24);
    // 0x80270210: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x80270214: lh          $a2, 0xA($v0)
    ctx->r6 = MEM_H(ctx->r2, 0XA);
    // 0x80270218: ori         $at, $at, 0x328
    ctx->r1 = ctx->r1 | 0X328;
    // 0x8027021C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80270220: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80270224: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x80270228: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8027022C: jal         0x8002F9EC
    // 0x80270230: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_8002F9EC(rdram, ctx);
        goto after_3;
    // 0x80270230: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_3:
    // 0x80270234: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x80270238: lh          $t5, 0x59BC($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X59BC);
    // 0x8027023C: lh          $t4, 0x32($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X32);
    // 0x80270240: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80270244: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80270248: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8027024C: subu        $a1, $t4, $t5
    ctx->r5 = SUB32(ctx->r12, ctx->r13);
    // 0x80270250: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80270254: ori         $at, $at, 0x508
    ctx->r1 = ctx->r1 | 0X508;
    // 0x80270258: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8027025C: lh          $a2, 0xE($v0)
    ctx->r6 = MEM_H(ctx->r2, 0XE);
    // 0x80270260: lb          $a3, 0x31($t8)
    ctx->r7 = MEM_B(ctx->r24, 0X31);
    // 0x80270264: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80270268: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x8027026C: jal         0x8002F9EC
    // 0x80270270: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    func_8002F9EC(rdram, ctx);
        goto after_4;
    // 0x80270270: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    after_4:
    // 0x80270274: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80270278: jal         0x8002BB50
    // 0x8027027C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8002BB50(rdram, ctx);
        goto after_5;
    // 0x8027027C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_5:
    // 0x80270280: b           L_80270298
    // 0x80270284: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
        goto L_80270298;
    // 0x80270284: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
L_80270288:
    // 0x80270288: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8027028C: jal         0x8002BB50
    // 0x80270290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_6;
    // 0x80270290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80270294: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
L_80270298:
    // 0x80270298: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8027029C: lh          $a0, 0x40($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X40);
    // 0x802702A0: lh          $a2, 0x3E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X3E);
    // 0x802702A4: lb          $a1, 0x31($t1)
    ctx->r5 = MEM_B(ctx->r9, 0X31);
    // 0x802702A8: lb          $a3, 0x31($t2)
    ctx->r7 = MEM_B(ctx->r10, 0X31);
    // 0x802702AC: jal         0x8003CF0C
    // 0x802702B0: nop

    func_8003CF0C(rdram, ctx);
        goto after_7;
    // 0x802702B0: nop

    after_7:
    // 0x802702B4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802702B8: beq         $at, $zero, L_8027030C
    if (ctx->r1 == 0) {
        // 0x802702BC: addiu       $t8, $zero, 0x5
        ctx->r24 = ADD32(0, 0X5);
            goto L_8027030C;
    }
    // 0x802702BC: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x802702C0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802702C4: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x802702C8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x802702CC: sb          $t3, -0x83($at)
    MEM_B(-0X83, ctx->r1) = ctx->r11;
    // 0x802702D0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802702D4: addu        $v0, $s1, $at
    ctx->r2 = ADD32(ctx->r17, ctx->r1);
    // 0x802702D8: lh          $t7, 0x46($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X46);
    // 0x802702DC: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x802702E0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802702E4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x802702E8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x802702EC: sb          $t4, 0x15D($v0)
    MEM_B(0X15D, ctx->r2) = ctx->r12;
    // 0x802702F0: sb          $t5, 0x33D($v0)
    MEM_B(0X33D, ctx->r2) = ctx->r13;
    // 0x802702F4: beq         $t7, $at, L_80270304
    if (ctx->r15 == ctx->r1) {
        // 0x802702F8: sb          $t6, 0x51D($v0)
        MEM_B(0X51D, ctx->r2) = ctx->r14;
            goto L_80270304;
    }
    // 0x802702F8: sb          $t6, 0x51D($v0)
    MEM_B(0X51D, ctx->r2) = ctx->r14;
    // 0x802702FC: b           L_80270360
    // 0x80270300: addiu       $s1, $zero, 0x3D6
    ctx->r17 = ADD32(0, 0X3D6);
        goto L_80270360;
    // 0x80270300: addiu       $s1, $zero, 0x3D6
    ctx->r17 = ADD32(0, 0X3D6);
L_80270304:
    // 0x80270304: b           L_80270360
    // 0x80270308: addiu       $s1, $zero, 0x3D8
    ctx->r17 = ADD32(0, 0X3D8);
        goto L_80270360;
    // 0x80270308: addiu       $s1, $zero, 0x3D8
    ctx->r17 = ADD32(0, 0X3D8);
L_8027030C:
    // 0x8027030C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80270310: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x80270314: sb          $t8, -0x83($at)
    MEM_B(-0X83, ctx->r1) = ctx->r24;
    // 0x80270318: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8027031C: addu        $v0, $s1, $at
    ctx->r2 = ADD32(ctx->r17, ctx->r1);
    // 0x80270320: lh          $t3, 0x46($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X46);
    // 0x80270324: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80270328: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8027032C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80270330: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80270334: sb          $t9, 0x15D($v0)
    MEM_B(0X15D, ctx->r2) = ctx->r25;
    // 0x80270338: sb          $t1, 0x33D($v0)
    MEM_B(0X33D, ctx->r2) = ctx->r9;
    // 0x8027033C: beq         $t3, $at, L_8027034C
    if (ctx->r11 == ctx->r1) {
        // 0x80270340: sb          $t2, 0x51D($v0)
        MEM_B(0X51D, ctx->r2) = ctx->r10;
            goto L_8027034C;
    }
    // 0x80270340: sb          $t2, 0x51D($v0)
    MEM_B(0X51D, ctx->r2) = ctx->r10;
    // 0x80270344: b           L_80270360
    // 0x80270348: addiu       $s1, $zero, 0x3D7
    ctx->r17 = ADD32(0, 0X3D7);
        goto L_80270360;
    // 0x80270348: addiu       $s1, $zero, 0x3D7
    ctx->r17 = ADD32(0, 0X3D7);
L_8027034C:
    // 0x8027034C: b           L_80270360
    // 0x80270350: addiu       $s1, $zero, 0x3D9
    ctx->r17 = ADD32(0, 0X3D9);
        goto L_80270360;
    // 0x80270350: addiu       $s1, $zero, 0x3D9
    ctx->r17 = ADD32(0, 0X3D9);
L_80270354:
    // 0x80270354: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80270358: jal         0x8002BB50
    // 0x8027035C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_8;
    // 0x8027035C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
L_80270360:
    // 0x80270360: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80270364: jal         0x8002F020
    // 0x80270368: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002F020(rdram, ctx);
        goto after_9;
    // 0x80270368: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x8027036C: lh          $t4, 0x46($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X46);
    // 0x80270370: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x80270374: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80270378: addu        $a3, $a3, $t5
    ctx->r7 = ADD32(ctx->r7, ctx->r13);
    // 0x8027037C: lw          $a3, 0x3AF0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3AF0);
    // 0x80270380: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80270384: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    // 0x80270388: jal         0x8004CD24
    // 0x8027038C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8004CD24(rdram, ctx);
        goto after_10;
    // 0x8027038C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_10:
    // 0x80270390: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80270394: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80270398: jal         0x8002135C
    // 0x8027039C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_11;
    // 0x8027039C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x802703A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802703A4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802703A8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802703AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802703B0: jr          $ra
    // 0x802703B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802703B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_80270144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270144: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x80270148: sh          $t7, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r15;
    // 0x8027014C: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x80270150: lh          $t2, 0x2C($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2C);
    // 0x80270154: sh          $t8, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r24;
    // 0x80270158: lh          $t3, 0x59BC($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X59BC);
    // 0x8027015C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80270160: addiu       $t1, $t1, -0x3770
    ctx->r9 = ADD32(ctx->r9, -0X3770);
    // 0x80270164: sll         $t9, $v1, 5
    ctx->r25 = S32(ctx->r3 << 5);
    // 0x80270168: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8027016C: subu        $a1, $t2, $t3
    ctx->r5 = SUB32(ctx->r10, ctx->r11);
    // 0x80270170: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x80270174: ori         $at, $at, 0xFF68
    ctx->r1 = ctx->r1 | 0XFF68;
    // 0x80270178: addu        $s1, $t9, $t1
    ctx->r17 = ADD32(ctx->r25, ctx->r9);
    // 0x8027017C: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x80270180: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80270184: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80270188: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x8027018C: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80270190: jal         0x8002F914
    // 0x80270194: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_8002F914(rdram, ctx);
        goto after_0;
    // 0x80270194: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_0:
    // 0x80270198: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x8027019C: lh          $t8, 0x59BC($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X59BC);
    // 0x802701A0: lh          $t7, 0x2E($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2E);
    // 0x802701A4: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x802701A8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802701AC: subu        $a1, $t7, $t8
    ctx->r5 = SUB32(ctx->r15, ctx->r24);
    // 0x802701B0: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x802701B4: ori         $at, $at, 0x148
    ctx->r1 = ctx->r1 | 0X148;
    // 0x802701B8: lh          $a3, 0x3E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X3E);
    // 0x802701BC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x802701C0: lh          $a2, 0x6($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X6);
    // 0x802701C4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802701C8: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x802701CC: jal         0x8002F914
    // 0x802701D0: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    func_8002F914(rdram, ctx);
        goto after_1;
    // 0x802701D0: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    after_1:
    // 0x802701D4: lh          $t3, 0x40($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X40);
    // 0x802701D8: lh          $t4, 0x3E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X3E);
    // 0x802701DC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x802701E0: bne         $t3, $t4, L_80270288
    if (ctx->r11 != ctx->r12) {
        // 0x802701E4: lui         $at, 0x3
        ctx->r1 = S32(0X3 << 16);
            goto L_80270288;
    }
    // 0x802701E4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802701E8: lh          $t5, 0x8($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X8);
    // 0x802701EC: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x802701F0: sh          $t5, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r13;
    // 0x802701F4: lh          $t6, 0xC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XC);
    // 0x802701F8: lh          $t7, 0x30($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X30);
    // 0x802701FC: sh          $t6, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r14;
    // 0x80270200: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80270204: lh          $t8, 0x59BC($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X59BC);
    // 0x80270208: lb          $a3, 0x31($t2)
    ctx->r7 = MEM_B(ctx->r10, 0X31);
    // 0x8027020C: subu        $a1, $t7, $t8
    ctx->r5 = SUB32(ctx->r15, ctx->r24);
    // 0x80270210: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x80270214: lh          $a2, 0xA($v0)
    ctx->r6 = MEM_H(ctx->r2, 0XA);
    // 0x80270218: ori         $at, $at, 0x328
    ctx->r1 = ctx->r1 | 0X328;
    // 0x8027021C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80270220: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80270224: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x80270228: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8027022C: jal         0x8002F9EC
    // 0x80270230: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_8002F9EC(rdram, ctx);
        goto after_2;
    // 0x80270230: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_2:
    // 0x80270234: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x80270238: lh          $t5, 0x59BC($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X59BC);
    // 0x8027023C: lh          $t4, 0x32($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X32);
    // 0x80270240: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80270244: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80270248: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8027024C: subu        $a1, $t4, $t5
    ctx->r5 = SUB32(ctx->r12, ctx->r13);
    // 0x80270250: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80270254: ori         $at, $at, 0x508
    ctx->r1 = ctx->r1 | 0X508;
    // 0x80270258: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8027025C: lh          $a2, 0xE($v0)
    ctx->r6 = MEM_H(ctx->r2, 0XE);
    // 0x80270260: lb          $a3, 0x31($t8)
    ctx->r7 = MEM_B(ctx->r24, 0X31);
    // 0x80270264: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80270268: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x8027026C: jal         0x8002F9EC
    // 0x80270270: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    func_8002F9EC(rdram, ctx);
        goto after_3;
    // 0x80270270: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    after_3:
    // 0x80270274: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80270278: jal         0x8002BB50
    // 0x8027027C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8002BB50(rdram, ctx);
        goto after_4;
    // 0x8027027C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_4:
    // 0x80270280: b           L_80270298
    // 0x80270284: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
        goto L_80270298;
    // 0x80270284: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
L_80270288:
    // 0x80270288: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8027028C: jal         0x8002BB50
    // 0x80270290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_5;
    // 0x80270290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80270294: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
L_80270298:
    // 0x80270298: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8027029C: lh          $a0, 0x40($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X40);
    // 0x802702A0: lh          $a2, 0x3E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X3E);
    // 0x802702A4: lb          $a1, 0x31($t1)
    ctx->r5 = MEM_B(ctx->r9, 0X31);
    // 0x802702A8: lb          $a3, 0x31($t2)
    ctx->r7 = MEM_B(ctx->r10, 0X31);
    // 0x802702AC: jal         0x8003CF0C
    // 0x802702B0: nop

    func_8003CF0C(rdram, ctx);
        goto after_6;
    // 0x802702B0: nop

    after_6:
    // 0x802702B4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802702B8: beq         $at, $zero, L_8027030C
    if (ctx->r1 == 0) {
        // 0x802702BC: addiu       $t8, $zero, 0x5
        ctx->r24 = ADD32(0, 0X5);
            goto L_8027030C;
    }
    // 0x802702BC: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x802702C0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802702C4: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x802702C8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x802702CC: sb          $t3, -0x83($at)
    MEM_B(-0X83, ctx->r1) = ctx->r11;
    // 0x802702D0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802702D4: addu        $v0, $s1, $at
    ctx->r2 = ADD32(ctx->r17, ctx->r1);
    // 0x802702D8: lh          $t7, 0x46($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X46);
    // 0x802702DC: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x802702E0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802702E4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x802702E8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x802702EC: sb          $t4, 0x15D($v0)
    MEM_B(0X15D, ctx->r2) = ctx->r12;
    // 0x802702F0: sb          $t5, 0x33D($v0)
    MEM_B(0X33D, ctx->r2) = ctx->r13;
    // 0x802702F4: beq         $t7, $at, L_80270304
    if (ctx->r15 == ctx->r1) {
        // 0x802702F8: sb          $t6, 0x51D($v0)
        MEM_B(0X51D, ctx->r2) = ctx->r14;
            goto L_80270304;
    }
    // 0x802702F8: sb          $t6, 0x51D($v0)
    MEM_B(0X51D, ctx->r2) = ctx->r14;
    // 0x802702FC: b           L_80270360
    // 0x80270300: addiu       $s1, $zero, 0x3D6
    ctx->r17 = ADD32(0, 0X3D6);
        goto L_80270360;
    // 0x80270300: addiu       $s1, $zero, 0x3D6
    ctx->r17 = ADD32(0, 0X3D6);
L_80270304:
    // 0x80270304: b           L_80270360
    // 0x80270308: addiu       $s1, $zero, 0x3D8
    ctx->r17 = ADD32(0, 0X3D8);
        goto L_80270360;
    // 0x80270308: addiu       $s1, $zero, 0x3D8
    ctx->r17 = ADD32(0, 0X3D8);
L_8027030C:
    // 0x8027030C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80270310: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x80270314: sb          $t8, -0x83($at)
    MEM_B(-0X83, ctx->r1) = ctx->r24;
    // 0x80270318: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8027031C: addu        $v0, $s1, $at
    ctx->r2 = ADD32(ctx->r17, ctx->r1);
    // 0x80270320: lh          $t3, 0x46($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X46);
    // 0x80270324: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80270328: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8027032C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80270330: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80270334: sb          $t9, 0x15D($v0)
    MEM_B(0X15D, ctx->r2) = ctx->r25;
    // 0x80270338: sb          $t1, 0x33D($v0)
    MEM_B(0X33D, ctx->r2) = ctx->r9;
    // 0x8027033C: beq         $t3, $at, L_8027034C
    if (ctx->r11 == ctx->r1) {
        // 0x80270340: sb          $t2, 0x51D($v0)
        MEM_B(0X51D, ctx->r2) = ctx->r10;
            goto L_8027034C;
    }
    // 0x80270340: sb          $t2, 0x51D($v0)
    MEM_B(0X51D, ctx->r2) = ctx->r10;
    // 0x80270344: b           L_80270360
    // 0x80270348: addiu       $s1, $zero, 0x3D7
    ctx->r17 = ADD32(0, 0X3D7);
        goto L_80270360;
    // 0x80270348: addiu       $s1, $zero, 0x3D7
    ctx->r17 = ADD32(0, 0X3D7);
L_8027034C:
    // 0x8027034C: b           L_80270360
    // 0x80270350: addiu       $s1, $zero, 0x3D9
    ctx->r17 = ADD32(0, 0X3D9);
        goto L_80270360;
    // 0x80270350: addiu       $s1, $zero, 0x3D9
    ctx->r17 = ADD32(0, 0X3D9);
    // 0x80270354: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80270358: jal         0x8002BB50
    // 0x8027035C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_7;
    // 0x8027035C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_80270360:
    // 0x80270360: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80270364: jal         0x8002F020
    // 0x80270368: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002F020(rdram, ctx);
        goto after_8;
    // 0x80270368: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x8027036C: lh          $t4, 0x46($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X46);
    // 0x80270370: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x80270374: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80270378: addu        $a3, $a3, $t5
    ctx->r7 = ADD32(ctx->r7, ctx->r13);
    // 0x8027037C: lw          $a3, 0x3AF0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3AF0);
    // 0x80270380: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80270384: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    // 0x80270388: jal         0x8004CD24
    // 0x8027038C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8004CD24(rdram, ctx);
        goto after_9;
    // 0x8027038C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_9:
    // 0x80270390: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80270394: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80270398: jal         0x8002135C
    // 0x8027039C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_10;
    // 0x8027039C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x802703A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802703A4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802703A8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802703AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802703B0: jr          $ra
    // 0x802703B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802703B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_80270234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270234: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x80270238: lh          $t5, 0x59BC($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X59BC);
    // 0x8027023C: lh          $t4, 0x32($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X32);
    // 0x80270240: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80270244: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80270248: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8027024C: subu        $a1, $t4, $t5
    ctx->r5 = SUB32(ctx->r12, ctx->r13);
    // 0x80270250: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80270254: ori         $at, $at, 0x508
    ctx->r1 = ctx->r1 | 0X508;
    // 0x80270258: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8027025C: lh          $a2, 0xE($v0)
    ctx->r6 = MEM_H(ctx->r2, 0XE);
    // 0x80270260: lb          $a3, 0x31($t8)
    ctx->r7 = MEM_B(ctx->r24, 0X31);
    // 0x80270264: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80270268: addu        $a0, $s1, $at
    ctx->r4 = ADD32(ctx->r17, ctx->r1);
    // 0x8027026C: jal         0x8002F9EC
    // 0x80270270: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    func_8002F9EC(rdram, ctx);
        goto after_0;
    // 0x80270270: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x80270274: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80270278: jal         0x8002BB50
    // 0x8027027C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8002BB50(rdram, ctx);
        goto after_1;
    // 0x8027027C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_1:
    // 0x80270280: b           L_80270298
    // 0x80270284: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
        goto L_80270298;
    // 0x80270284: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80270288: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8027028C: jal         0x8002BB50
    // 0x80270290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x80270290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80270294: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
L_80270298:
    // 0x80270298: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8027029C: lh          $a0, 0x40($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X40);
    // 0x802702A0: lh          $a2, 0x3E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X3E);
    // 0x802702A4: lb          $a1, 0x31($t1)
    ctx->r5 = MEM_B(ctx->r9, 0X31);
    // 0x802702A8: lb          $a3, 0x31($t2)
    ctx->r7 = MEM_B(ctx->r10, 0X31);
    // 0x802702AC: jal         0x8003CF0C
    // 0x802702B0: nop

    func_8003CF0C(rdram, ctx);
        goto after_3;
    // 0x802702B0: nop

    after_3:
    // 0x802702B4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802702B8: beq         $at, $zero, L_8027030C
    if (ctx->r1 == 0) {
        // 0x802702BC: addiu       $t8, $zero, 0x5
        ctx->r24 = ADD32(0, 0X5);
            goto L_8027030C;
    }
    // 0x802702BC: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x802702C0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802702C4: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x802702C8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x802702CC: sb          $t3, -0x83($at)
    MEM_B(-0X83, ctx->r1) = ctx->r11;
    // 0x802702D0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802702D4: addu        $v0, $s1, $at
    ctx->r2 = ADD32(ctx->r17, ctx->r1);
    // 0x802702D8: lh          $t7, 0x46($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X46);
    // 0x802702DC: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x802702E0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802702E4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x802702E8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x802702EC: sb          $t4, 0x15D($v0)
    MEM_B(0X15D, ctx->r2) = ctx->r12;
    // 0x802702F0: sb          $t5, 0x33D($v0)
    MEM_B(0X33D, ctx->r2) = ctx->r13;
    // 0x802702F4: beq         $t7, $at, L_80270304
    if (ctx->r15 == ctx->r1) {
        // 0x802702F8: sb          $t6, 0x51D($v0)
        MEM_B(0X51D, ctx->r2) = ctx->r14;
            goto L_80270304;
    }
    // 0x802702F8: sb          $t6, 0x51D($v0)
    MEM_B(0X51D, ctx->r2) = ctx->r14;
    // 0x802702FC: b           L_80270360
    // 0x80270300: addiu       $s1, $zero, 0x3D6
    ctx->r17 = ADD32(0, 0X3D6);
        goto L_80270360;
    // 0x80270300: addiu       $s1, $zero, 0x3D6
    ctx->r17 = ADD32(0, 0X3D6);
L_80270304:
    // 0x80270304: b           L_80270360
    // 0x80270308: addiu       $s1, $zero, 0x3D8
    ctx->r17 = ADD32(0, 0X3D8);
        goto L_80270360;
    // 0x80270308: addiu       $s1, $zero, 0x3D8
    ctx->r17 = ADD32(0, 0X3D8);
L_8027030C:
    // 0x8027030C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80270310: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x80270314: sb          $t8, -0x83($at)
    MEM_B(-0X83, ctx->r1) = ctx->r24;
    // 0x80270318: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8027031C: addu        $v0, $s1, $at
    ctx->r2 = ADD32(ctx->r17, ctx->r1);
    // 0x80270320: lh          $t3, 0x46($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X46);
    // 0x80270324: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80270328: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8027032C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80270330: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80270334: sb          $t9, 0x15D($v0)
    MEM_B(0X15D, ctx->r2) = ctx->r25;
    // 0x80270338: sb          $t1, 0x33D($v0)
    MEM_B(0X33D, ctx->r2) = ctx->r9;
    // 0x8027033C: beq         $t3, $at, L_8027034C
    if (ctx->r11 == ctx->r1) {
        // 0x80270340: sb          $t2, 0x51D($v0)
        MEM_B(0X51D, ctx->r2) = ctx->r10;
            goto L_8027034C;
    }
    // 0x80270340: sb          $t2, 0x51D($v0)
    MEM_B(0X51D, ctx->r2) = ctx->r10;
    // 0x80270344: b           L_80270360
    // 0x80270348: addiu       $s1, $zero, 0x3D7
    ctx->r17 = ADD32(0, 0X3D7);
        goto L_80270360;
    // 0x80270348: addiu       $s1, $zero, 0x3D7
    ctx->r17 = ADD32(0, 0X3D7);
L_8027034C:
    // 0x8027034C: b           L_80270360
    // 0x80270350: addiu       $s1, $zero, 0x3D9
    ctx->r17 = ADD32(0, 0X3D9);
        goto L_80270360;
    // 0x80270350: addiu       $s1, $zero, 0x3D9
    ctx->r17 = ADD32(0, 0X3D9);
    // 0x80270354: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80270358: jal         0x8002BB50
    // 0x8027035C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_4;
    // 0x8027035C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_80270360:
    // 0x80270360: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80270364: jal         0x8002F020
    // 0x80270368: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002F020(rdram, ctx);
        goto after_5;
    // 0x80270368: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8027036C: lh          $t4, 0x46($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X46);
    // 0x80270370: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x80270374: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80270378: addu        $a3, $a3, $t5
    ctx->r7 = ADD32(ctx->r7, ctx->r13);
    // 0x8027037C: lw          $a3, 0x3AF0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3AF0);
    // 0x80270380: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80270384: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    // 0x80270388: jal         0x8004CD24
    // 0x8027038C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8004CD24(rdram, ctx);
        goto after_6;
    // 0x8027038C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_6:
    // 0x80270390: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80270394: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80270398: jal         0x8002135C
    // 0x8027039C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_7;
    // 0x8027039C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x802703A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802703A4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802703A8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802703AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802703B0: jr          $ra
    // 0x802703B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802703B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_802702E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802702E4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x802702E8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x802702EC: sb          $t4, 0x15D($v0)
    MEM_B(0X15D, ctx->r2) = ctx->r12;
    // 0x802702F0: sb          $t5, 0x33D($v0)
    MEM_B(0X33D, ctx->r2) = ctx->r13;
    // 0x802702F4: beq         $t7, $at, L_80270304
    if (ctx->r15 == ctx->r1) {
        // 0x802702F8: sb          $t6, 0x51D($v0)
        MEM_B(0X51D, ctx->r2) = ctx->r14;
            goto L_80270304;
    }
    // 0x802702F8: sb          $t6, 0x51D($v0)
    MEM_B(0X51D, ctx->r2) = ctx->r14;
    // 0x802702FC: b           L_80270360
    // 0x80270300: addiu       $s1, $zero, 0x3D6
    ctx->r17 = ADD32(0, 0X3D6);
        goto L_80270360;
    // 0x80270300: addiu       $s1, $zero, 0x3D6
    ctx->r17 = ADD32(0, 0X3D6);
L_80270304:
    // 0x80270304: b           L_80270360
    // 0x80270308: addiu       $s1, $zero, 0x3D8
    ctx->r17 = ADD32(0, 0X3D8);
        goto L_80270360;
    // 0x80270308: addiu       $s1, $zero, 0x3D8
    ctx->r17 = ADD32(0, 0X3D8);
    // 0x8027030C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80270310: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x80270314: sb          $t8, -0x83($at)
    MEM_B(-0X83, ctx->r1) = ctx->r24;
    // 0x80270318: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8027031C: addu        $v0, $s1, $at
    ctx->r2 = ADD32(ctx->r17, ctx->r1);
    // 0x80270320: lh          $t3, 0x46($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X46);
    // 0x80270324: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80270328: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8027032C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80270330: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80270334: sb          $t9, 0x15D($v0)
    MEM_B(0X15D, ctx->r2) = ctx->r25;
    // 0x80270338: sb          $t1, 0x33D($v0)
    MEM_B(0X33D, ctx->r2) = ctx->r9;
    // 0x8027033C: beq         $t3, $at, L_8027034C
    if (ctx->r11 == ctx->r1) {
        // 0x80270340: sb          $t2, 0x51D($v0)
        MEM_B(0X51D, ctx->r2) = ctx->r10;
            goto L_8027034C;
    }
    // 0x80270340: sb          $t2, 0x51D($v0)
    MEM_B(0X51D, ctx->r2) = ctx->r10;
    // 0x80270344: b           L_80270360
    // 0x80270348: addiu       $s1, $zero, 0x3D7
    ctx->r17 = ADD32(0, 0X3D7);
        goto L_80270360;
    // 0x80270348: addiu       $s1, $zero, 0x3D7
    ctx->r17 = ADD32(0, 0X3D7);
L_8027034C:
    // 0x8027034C: b           L_80270360
    // 0x80270350: addiu       $s1, $zero, 0x3D9
    ctx->r17 = ADD32(0, 0X3D9);
        goto L_80270360;
    // 0x80270350: addiu       $s1, $zero, 0x3D9
    ctx->r17 = ADD32(0, 0X3D9);
    // 0x80270354: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80270358: jal         0x8002BB50
    // 0x8027035C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x8027035C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_80270360:
    // 0x80270360: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80270364: jal         0x8002F020
    // 0x80270368: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002F020(rdram, ctx);
        goto after_1;
    // 0x80270368: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8027036C: lh          $t4, 0x46($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X46);
    // 0x80270370: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x80270374: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80270378: addu        $a3, $a3, $t5
    ctx->r7 = ADD32(ctx->r7, ctx->r13);
    // 0x8027037C: lw          $a3, 0x3AF0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3AF0);
    // 0x80270380: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80270384: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    // 0x80270388: jal         0x8004CD24
    // 0x8027038C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x8027038C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_2:
    // 0x80270390: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80270394: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80270398: jal         0x8002135C
    // 0x8027039C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x8027039C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x802703A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802703A4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802703A8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802703AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802703B0: jr          $ra
    // 0x802703B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802703B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_802703B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802703B8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802703BC: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x802703C0: lhu         $t9, 0x1E($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X1E);
    // 0x802703C4: lui         $a2, 0x8010
    ctx->r6 = S32(0X8010 << 16);
    // 0x802703C8: addiu       $a2, $a2, 0x4890
    ctx->r6 = ADD32(ctx->r6, 0X4890);
    // 0x802703CC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x802703D0: lh          $t7, 0x112C($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X112C);
    // 0x802703D4: lh          $t6, 0x2C($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X2C);
    // 0x802703D8: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x802703DC: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x802703E0: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x802703E4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802703E8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x802703EC: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x802703F0: sh          $t8, -0x8E($at)
    MEM_H(-0X8E, ctx->r1) = ctx->r24;
    // 0x802703F4: lhu         $t5, 0x1E($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X1E);
    // 0x802703F8: lh          $t3, 0x112C($a2)
    ctx->r11 = MEM_H(ctx->r6, 0X112C);
    // 0x802703FC: lh          $t2, 0x2E($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X2E);
    // 0x80270400: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x80270404: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x80270408: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8027040C: addu        $t9, $t7, $a3
    ctx->r25 = ADD32(ctx->r15, ctx->r7);
    // 0x80270410: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x80270414: sh          $t4, 0x152($t9)
    MEM_H(0X152, ctx->r25) = ctx->r12;
    // 0x80270418: lhu         $t2, 0x1E($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X1E);
    // 0x8027041C: lh          $t8, 0x112C($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X112C);
    // 0x80270420: lh          $t0, 0x30($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X30);
    // 0x80270424: sll         $t3, $t2, 5
    ctx->r11 = S32(ctx->r10 << 5);
    // 0x80270428: addu        $t5, $a0, $t3
    ctx->r13 = ADD32(ctx->r4, ctx->r11);
    // 0x8027042C: addu        $t6, $t5, $a3
    ctx->r14 = ADD32(ctx->r13, ctx->r7);
    // 0x80270430: subu        $t1, $t0, $t8
    ctx->r9 = SUB32(ctx->r8, ctx->r24);
    // 0x80270434: sh          $t1, 0x332($t6)
    MEM_H(0X332, ctx->r14) = ctx->r9;
    // 0x80270438: lhu         $t0, 0x1E($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X1E);
    // 0x8027043C: lh          $t4, 0x112C($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X112C);
    // 0x80270440: lh          $t7, 0x32($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X32);
    // 0x80270444: sll         $t8, $t0, 5
    ctx->r24 = S32(ctx->r8 << 5);
    // 0x80270448: addu        $t2, $a0, $t8
    ctx->r10 = ADD32(ctx->r4, ctx->r24);
    // 0x8027044C: addu        $t3, $t2, $a3
    ctx->r11 = ADD32(ctx->r10, ctx->r7);
    // 0x80270450: subu        $t9, $t7, $t4
    ctx->r25 = SUB32(ctx->r15, ctx->r12);
    // 0x80270454: sh          $t9, 0x512($t3)
    MEM_H(0X512, ctx->r11) = ctx->r25;
    // 0x80270458: jr          $ra
    // 0x8027045C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8027045C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_80270460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270460: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80270464: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80270468: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8027046C: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80270470: addiu       $v1, $v1, -0x3110
    ctx->r3 = ADD32(ctx->r3, -0X3110);
    // 0x80270474: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80270478: addu        $t8, $v1, $v0
    ctx->r24 = ADD32(ctx->r3, ctx->r2);
L_8027047C:
    // 0x8027047C: lb          $t9, 0x1($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X1);
    // 0x80270480: nop

    // 0x80270484: beq         $a0, $t9, L_802704A8
    if (ctx->r4 == ctx->r25) {
        // 0x80270488: slti        $at, $v0, 0x8
        ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
            goto L_802704A8;
    }
    // 0x80270488: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x8027048C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80270490: sll         $t0, $v0, 16
    ctx->r8 = S32(ctx->r2 << 16);
    // 0x80270494: sra         $v0, $t0, 16
    ctx->r2 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80270498: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8027049C: bne         $at, $zero, L_8027047C
    if (ctx->r1 != 0) {
        // 0x802704A0: addu        $t8, $v1, $v0
        ctx->r24 = ADD32(ctx->r3, ctx->r2);
            goto L_8027047C;
    }
    // 0x802704A0: addu        $t8, $v1, $v0
    ctx->r24 = ADD32(ctx->r3, ctx->r2);
    // 0x802704A4: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
L_802704A8:
    // 0x802704A8: beq         $at, $zero, L_802704B8
    if (ctx->r1 == 0) {
        // 0x802704AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802704B8;
    }
    // 0x802704AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802704B0: jr          $ra
    // 0x802704B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802704B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802704B8:
    // 0x802704B8: jr          $ra
    // 0x802704BC: nop

    return;
    // 0x802704BC: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802704C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802704C0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802704C4: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x802704C8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802704CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802704D0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802704D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802704D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802704DC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802704E0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802704E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802704E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802704EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802704F0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802704F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802704F8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802704FC: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x80270500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80270504: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80270508: lb          $a0, 0xC($v0)
    ctx->r4 = MEM_B(ctx->r2, 0XC);
    // 0x8027050C: jal         0x80270460
    // 0x80270510: nop

    ovl_8026F480_func_80270460(rdram, ctx);
        goto after_0;
    // 0x80270510: nop

    after_0:
    // 0x80270514: bne         $v0, $zero, L_80270538
    if (ctx->r2 != 0) {
        // 0x80270518: lui         $t1, 0x238
        ctx->r9 = S32(0X238 << 16);
            goto L_80270538;
    }
    // 0x80270518: lui         $t1, 0x238
    ctx->r9 = S32(0X238 << 16);
    // 0x8027051C: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x80270520: lw          $t0, 0x1CF0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1CF0);
    // 0x80270524: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80270528: sw          $zero, 0x59BC($at)
    MEM_W(0X59BC, ctx->r1) = 0;
    // 0x8027052C: lui         $t9, 0x2
    ctx->r25 = S32(0X2 << 16);
    // 0x80270530: b           L_80270550
    // 0x80270534: sw          $t9, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->r25;
        goto L_80270550;
    // 0x80270534: sw          $t9, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->r25;
L_80270538:
    // 0x80270538: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x8027053C: lw          $t3, 0x1CF0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1CF0);
    // 0x80270540: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80270544: sw          $t1, 0x59BC($at)
    MEM_W(0X59BC, ctx->r1) = ctx->r9;
    // 0x80270548: lui         $t2, 0xFFFE
    ctx->r10 = S32(0XFFFE << 16);
    // 0x8027054C: sw          $t2, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->r10;
L_80270550:
    // 0x80270550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80270554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80270558: jr          $ra
    // 0x8027055C: nop

    return;
    // 0x8027055C: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80270560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270560: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80270564: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80270568: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027056C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80270570: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80270574: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80270578: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027057C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80270580: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80270584: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x80270588: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027058C: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x80270590: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80270594: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80270598: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027059C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802705A0: lw          $t1, 0x28($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X28);
    // 0x802705A4: lw          $t9, 0x112C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X112C);
    // 0x802705A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802705AC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802705B0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802705B4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802705B8: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x802705BC: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x802705C0: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x802705C4: sw          $t2, 0x112C($v1)
    MEM_W(0X112C, ctx->r3) = ctx->r10;
    // 0x802705C8: lb          $a0, 0xC($v0)
    ctx->r4 = MEM_B(ctx->r2, 0XC);
    // 0x802705CC: jal         0x80270460
    // 0x802705D0: nop

    ovl_8026F480_func_80270460(rdram, ctx);
        goto after_0;
    // 0x802705D0: nop

    after_0:
    // 0x802705D4: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x802705D8: bne         $v0, $zero, L_80270608
    if (ctx->r2 != 0) {
        // 0x802705DC: addiu       $v1, $v1, 0x4890
        ctx->r3 = ADD32(ctx->r3, 0X4890);
            goto L_80270608;
    }
    // 0x802705DC: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x802705E0: lw          $t3, 0x112C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X112C);
    // 0x802705E4: lui         $at, 0x238
    ctx->r1 = S32(0X238 << 16);
    // 0x802705E8: slt         $at, $t3, $at
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x802705EC: bne         $at, $zero, L_80270620
    if (ctx->r1 != 0) {
        // 0x802705F0: lui         $a0, 0x8027
        ctx->r4 = S32(0X8027 << 16);
            goto L_80270620;
    }
    // 0x802705F0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802705F4: addiu       $a0, $a0, 0x640
    ctx->r4 = ADD32(ctx->r4, 0X640);
    // 0x802705F8: jal         0x8002989C
    // 0x802705FC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x802705FC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_1:
    // 0x80270600: b           L_80270624
    // 0x80270604: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
        goto L_80270624;
    // 0x80270604: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_80270608:
    // 0x80270608: lw          $t4, 0x112C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X112C);
    // 0x8027060C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80270610: bgtz        $t4, L_80270620
    if (SIGNED(ctx->r12) > 0) {
        // 0x80270614: addiu       $a0, $a0, 0x640
        ctx->r4 = ADD32(ctx->r4, 0X640);
            goto L_80270620;
    }
    // 0x80270614: addiu       $a0, $a0, 0x640
    ctx->r4 = ADD32(ctx->r4, 0X640);
    // 0x80270618: jal         0x8002989C
    // 0x8027061C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_8002989C(rdram, ctx);
        goto after_2;
    // 0x8027061C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_2:
L_80270620:
    // 0x80270620: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_80270624:
    // 0x80270624: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80270628: jal         0x80270720
    // 0x8027062C: nop

    ovl_8026F480_func_80270720(rdram, ctx);
        goto after_3;
    // 0x8027062C: nop

    after_3:
    // 0x80270630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80270634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80270638: jr          $ra
    // 0x8027063C: nop

    return;
    // 0x8027063C: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80270640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270640: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80270644: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80270648: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027064C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80270650: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80270654: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80270658: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027065C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80270660: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80270664: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x80270668: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027066C: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x80270670: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80270674: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80270678: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027067C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80270680: lw          $t1, 0x28($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X28);
    // 0x80270684: lw          $t9, 0x112C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X112C);
    // 0x80270688: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027068C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80270690: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80270694: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80270698: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027069C: subu        $t2, $t9, $t1
    ctx->r10 = SUB32(ctx->r25, ctx->r9);
    // 0x802706A0: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x802706A4: sw          $t2, 0x112C($v1)
    MEM_W(0X112C, ctx->r3) = ctx->r10;
    // 0x802706A8: lb          $a0, 0xC($v0)
    ctx->r4 = MEM_B(ctx->r2, 0XC);
    // 0x802706AC: jal         0x80270460
    // 0x802706B0: nop

    ovl_8026F480_func_80270460(rdram, ctx);
        goto after_0;
    // 0x802706B0: nop

    after_0:
    // 0x802706B4: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x802706B8: beq         $v0, $zero, L_802706E8
    if (ctx->r2 == 0) {
        // 0x802706BC: addiu       $v1, $v1, 0x4890
        ctx->r3 = ADD32(ctx->r3, 0X4890);
            goto L_802706E8;
    }
    // 0x802706BC: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x802706C0: lw          $t3, 0x112C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X112C);
    // 0x802706C4: lui         $at, 0x238
    ctx->r1 = S32(0X238 << 16);
    // 0x802706C8: slt         $at, $t3, $at
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x802706CC: bne         $at, $zero, L_80270700
    if (ctx->r1 != 0) {
        // 0x802706D0: lui         $a0, 0x8027
        ctx->r4 = S32(0X8027 << 16);
            goto L_80270700;
    }
    // 0x802706D0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802706D4: addiu       $a0, $a0, -0x3CC
    ctx->r4 = ADD32(ctx->r4, -0X3CC);
    // 0x802706D8: jal         0x8002989C
    // 0x802706DC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x802706DC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_1:
    // 0x802706E0: b           L_80270704
    // 0x802706E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
        goto L_80270704;
    // 0x802706E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802706E8:
    // 0x802706E8: lw          $t4, 0x112C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X112C);
    // 0x802706EC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802706F0: bgtz        $t4, L_80270700
    if (SIGNED(ctx->r12) > 0) {
        // 0x802706F4: addiu       $a0, $a0, -0x3CC
        ctx->r4 = ADD32(ctx->r4, -0X3CC);
            goto L_80270700;
    }
    // 0x802706F4: addiu       $a0, $a0, -0x3CC
    ctx->r4 = ADD32(ctx->r4, -0X3CC);
    // 0x802706F8: jal         0x8002989C
    // 0x802706FC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8002989C(rdram, ctx);
        goto after_2;
    // 0x802706FC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_2:
L_80270700:
    // 0x80270700: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_80270704:
    // 0x80270704: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80270708: jal         0x80270720
    // 0x8027070C: nop

    ovl_8026F480_func_80270720(rdram, ctx);
        goto after_3;
    // 0x8027070C: nop

    after_3:
    // 0x80270710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80270714: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80270718: jr          $ra
    // 0x8027071C: nop

    return;
    // 0x8027071C: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80270720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270720: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80270724: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80270728: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x8027072C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80270730: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80270734: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80270738: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x8027073C: jal         0x80035C24
    // 0x80270740: nop

    func_80035C24(rdram, ctx);
        goto after_0;
    // 0x80270740: nop

    after_0:
    // 0x80270744: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80270748: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x8027074C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80270750: lw          $t9, 0x3CF4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3CF4);
    // 0x80270754: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80270758: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8027075C: jalr        $t9
    // 0x80270760: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80270760: nop

    after_1:
    // 0x80270764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80270768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027076C: jr          $ra
    // 0x80270770: nop

    return;
    // 0x80270770: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80270774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270774: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80270778: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027077C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80270780: jal         0x80061A10
    // 0x80270784: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80061A10(rdram, ctx);
        goto after_0;
    // 0x80270784: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80270788: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8027078C: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x80270790: sw          $v0, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->r2;
    // 0x80270794: lh          $t7, -0x6B8($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6B8);
    // 0x80270798: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027079C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802707A0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x802707A4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x802707A8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802707AC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x802707B0: addiu       $t9, $t8, -0x866
    ctx->r25 = ADD32(ctx->r24, -0X866);
    // 0x802707B4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x802707B8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802707BC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802707C0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802707C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802707C8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x802707CC: jal         0x80062B1C
    // 0x802707D0: nop

    func_80062B1C(rdram, ctx);
        goto after_1;
    // 0x802707D0: nop

    after_1:
    // 0x802707D4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802707D8: jal         0x800297B4
    // 0x802707DC: addiu       $a0, $a0, 0x7F0
    ctx->r4 = ADD32(ctx->r4, 0X7F0);
    func_800297B4(rdram, ctx);
        goto after_2;
    // 0x802707DC: addiu       $a0, $a0, 0x7F0
    ctx->r4 = ADD32(ctx->r4, 0X7F0);
    after_2:
    // 0x802707E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802707E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802707E8: jr          $ra
    // 0x802707EC: nop

    return;
    // 0x802707EC: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802707F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802707F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802707F4: jr          $ra
    // 0x802707F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802707F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802707FC: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80270800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270800: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80270804: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x80270808: lh          $t6, 0x9A($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X9A);
    // 0x8027080C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80270810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80270814: bgtz        $t6, L_8027082C
    if (SIGNED(ctx->r14) > 0) {
        // 0x80270818: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8027082C;
    }
    // 0x80270818: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027081C: jal         0x8002BB50
    // 0x80270820: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x80270820: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_0:
    // 0x80270824: b           L_80270874
    // 0x80270828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80270874;
    // 0x80270828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027082C:
    // 0x8027082C: jal         0x8003EAD8
    // 0x80270830: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8003EAD8(rdram, ctx);
        goto after_1;
    // 0x80270830: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80270834: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80270838: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x8027083C: lh          $t8, 0xA8($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XA8);
    // 0x80270840: lh          $t7, 0x9A($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X9A);
    // 0x80270844: subu        $t9, $v0, $t8
    ctx->r25 = SUB32(ctx->r2, ctx->r24);
    // 0x80270848: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8027084C: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80270850: bne         $at, $zero, L_80270868
    if (ctx->r1 != 0) {
        // 0x80270854: nop
    
            goto L_80270868;
    }
    // 0x80270854: nop

    // 0x80270858: jal         0x8002BB50
    // 0x8027085C: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x8027085C: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_2:
    // 0x80270860: b           L_80270874
    // 0x80270864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80270874;
    // 0x80270864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80270868:
    // 0x80270868: jal         0x8002BB50
    // 0x8027086C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_8002BB50(rdram, ctx);
        goto after_3;
    // 0x8027086C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_3:
    // 0x80270870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80270874:
    // 0x80270874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80270878: jr          $ra
    // 0x8027087C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8027087C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_80270880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270880: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80270884: lhu         $t6, 0x1E($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1E);
    // 0x80270888: sh          $zero, 0x20($a1)
    MEM_H(0X20, ctx->r5) = 0;
    // 0x8027088C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80270890: beq         $t7, $zero, L_802708A0
    if (ctx->r15 == 0) {
        // 0x80270894: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802708A0;
    }
    // 0x80270894: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80270898: b           L_802708A4
    // 0x8027089C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_802708A4;
    // 0x8027089C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802708A0:
    // 0x802708A0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_802708A4:
    // 0x802708A4: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x802708A8: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x802708AC: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x802708B0: jr          $ra
    // 0x802708B4: sh          $t8, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r24;
    return;
    // 0x802708B4: sh          $t8, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r24;
;}
RECOMP_FUNC void ovl_8026F480_func_802708B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802708B8: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x802708BC: lh          $t6, -0x6B6($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6B6);
    // 0x802708C0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x802708C4: lhu         $t8, 0x1E($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X1E);
    // 0x802708C8: addiu       $a3, $a3, -0x32B0
    ctx->r7 = ADD32(ctx->r7, -0X32B0);
    // 0x802708CC: lb          $t0, 0xF($a3)
    ctx->r8 = MEM_B(ctx->r7, 0XF);
    // 0x802708D0: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x802708D4: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x802708D8: andi        $t9, $v1, 0xFFFF
    ctx->r25 = ctx->r3 & 0XFFFF;
    // 0x802708DC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802708E0: addu        $t2, $a3, $t9
    ctx->r10 = ADD32(ctx->r7, ctx->r25);
    // 0x802708E4: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x802708E8: lb          $t3, 0xE0($t2)
    ctx->r11 = MEM_B(ctx->r10, 0XE0);
    // 0x802708EC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x802708F0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802708F4: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x802708F8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x802708FC: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80270900: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80270904: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80270908: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8027090C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80270910: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80270914: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80270918: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8027091C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80270920: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80270924: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80270928: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8027092C: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x80270930: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x80270934: addu        $a2, $a2, $t5
    ctx->r6 = ADD32(ctx->r6, ctx->r13);
    // 0x80270938: lbu         $a2, -0x2AD4($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X2AD4);
    // 0x8027093C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80270940: sll         $t6, $a2, 1
    ctx->r14 = S32(ctx->r6 << 1);
    // 0x80270944: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80270948: lhu         $t7, -0x6B68($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X6B68);
    // 0x8027094C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80270950: jr          $ra
    // 0x80270954: sh          $t7, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r15;
    return;
    // 0x80270954: sh          $t7, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_8026F480_func_80270958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270958: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027095C: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x80270960: lh          $t7, -0x6B6($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6B6);
    // 0x80270964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80270968: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027096C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80270970: lhu         $v0, 0x1E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1E);
    // 0x80270974: addiu       $t0, $t0, -0x32B0
    ctx->r8 = ADD32(ctx->r8, -0X32B0);
    // 0x80270978: lb          $t1, 0xF($t0)
    ctx->r9 = MEM_B(ctx->r8, 0XF);
    // 0x8027097C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80270980: addu        $v1, $t8, $v0
    ctx->r3 = ADD32(ctx->r24, ctx->r2);
    // 0x80270984: andi        $t9, $v1, 0xFFFF
    ctx->r25 = ctx->r3 & 0XFFFF;
    // 0x80270988: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8027098C: addu        $t3, $t0, $t9
    ctx->r11 = ADD32(ctx->r8, ctx->r25);
    // 0x80270990: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80270994: lb          $t4, 0xE0($t3)
    ctx->r12 = MEM_B(ctx->r11, 0XE0);
    // 0x80270998: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8027099C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x802709A0: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x802709A4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802709A8: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x802709AC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x802709B0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x802709B4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x802709B8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x802709BC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x802709C0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x802709C4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x802709C8: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x802709CC: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802709D0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x802709D4: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x802709D8: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x802709DC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x802709E0: addu        $a3, $a3, $t6
    ctx->r7 = ADD32(ctx->r7, ctx->r14);
    // 0x802709E4: lbu         $a3, -0x2AD4($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X2AD4);
    // 0x802709E8: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x802709EC: sll         $a1, $a3, 16
    ctx->r5 = S32(ctx->r7 << 16);
    // 0x802709F0: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802709F4: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802709F8: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x802709FC: jal         0x80039E94
    // 0x80270A00: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80039E94(rdram, ctx);
        goto after_0;
    // 0x80270A00: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_0:
    // 0x80270A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80270A08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80270A0C: jr          $ra
    // 0x80270A10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80270A10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_80270A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270A14: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80270A18: lh          $t6, -0x6B8($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6B8);
    // 0x80270A1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80270A20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80270A24: bgtz        $t6, L_80270A3C
    if (SIGNED(ctx->r14) > 0) {
        // 0x80270A28: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80270A3C;
    }
    // 0x80270A28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80270A2C: jal         0x8002BB50
    // 0x80270A30: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x80270A30: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x80270A34: b           L_80270A7C
    // 0x80270A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80270A7C;
    // 0x80270A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80270A3C:
    // 0x80270A3C: jal         0x8003EE98
    // 0x80270A40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8003EE98(rdram, ctx);
        goto after_1;
    // 0x80270A40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80270A44: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x80270A48: lh          $t7, -0x6B8($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6B8);
    // 0x80270A4C: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x80270A50: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80270A54: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80270A58: bne         $at, $zero, L_80270A70
    if (ctx->r1 != 0) {
        // 0x80270A5C: nop
    
            goto L_80270A70;
    }
    // 0x80270A5C: nop

    // 0x80270A60: jal         0x8002BB50
    // 0x80270A64: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x80270A64: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x80270A68: b           L_80270A7C
    // 0x80270A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80270A7C;
    // 0x80270A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80270A70:
    // 0x80270A70: jal         0x8002BB50
    // 0x80270A74: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8002BB50(rdram, ctx);
        goto after_3;
    // 0x80270A74: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_3:
    // 0x80270A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80270A7C:
    // 0x80270A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80270A80: jr          $ra
    // 0x80270A84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80270A84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_80270A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270A88: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80270A8C: lh          $t6, -0x6B8($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6B8);
    // 0x80270A90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80270A94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80270A98: bgtz        $t6, L_80270AB0
    if (SIGNED(ctx->r14) > 0) {
        // 0x80270A9C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80270AB0;
    }
    // 0x80270A9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80270AA0: jal         0x8002BB50
    // 0x80270AA4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x80270AA4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x80270AA8: b           L_80270AF0
    // 0x80270AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80270AF0;
    // 0x80270AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80270AB0:
    // 0x80270AB0: jal         0x8003EE98
    // 0x80270AB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8003EE98(rdram, ctx);
        goto after_1;
    // 0x80270AB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80270AB8: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x80270ABC: lh          $t7, -0x6B8($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6B8);
    // 0x80270AC0: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x80270AC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80270AC8: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80270ACC: bne         $at, $zero, L_80270AE4
    if (ctx->r1 != 0) {
        // 0x80270AD0: nop
    
            goto L_80270AE4;
    }
    // 0x80270AD0: nop

    // 0x80270AD4: jal         0x8002BB50
    // 0x80270AD8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x80270AD8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x80270ADC: b           L_80270AF0
    // 0x80270AE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80270AF0;
    // 0x80270AE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80270AE4:
    // 0x80270AE4: jal         0x8002BB50
    // 0x80270AE8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_8002BB50(rdram, ctx);
        goto after_3;
    // 0x80270AE8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_3:
    // 0x80270AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80270AF0:
    // 0x80270AF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80270AF4: jr          $ra
    // 0x80270AF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80270AF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_80270AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270AFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80270B00: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80270B04: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80270B08: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80270B0C: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x80270B10: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80270B14: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80270B18: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80270B1C: jal         0x8003C16C
    // 0x80270B20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_8003C16C(rdram, ctx);
        goto after_0;
    // 0x80270B20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x80270B24: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x80270B28: blez        $t6, L_80270BD4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80270B2C: lui         $s2, 0x801B
        ctx->r18 = S32(0X801B << 16);
            goto L_80270BD4;
    }
    // 0x80270B2C: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x80270B30: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x80270B34: addiu       $s1, $s1, -0x32B0
    ctx->r17 = ADD32(ctx->r17, -0X32B0);
    // 0x80270B38: addiu       $s2, $s2, -0x750
    ctx->r18 = ADD32(ctx->r18, -0X750);
L_80270B3C:
    // 0x80270B3C: lh          $t7, 0x9A($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X9A);
    // 0x80270B40: nop

    // 0x80270B44: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80270B48: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x80270B4C: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x80270B50: lb          $a0, 0xE0($t0)
    ctx->r4 = MEM_B(ctx->r8, 0XE0);
    // 0x80270B54: jal         0x8003CB98
    // 0x80270B58: nop

    func_8003CB98(rdram, ctx);
        goto after_1;
    // 0x80270B58: nop

    after_1:
    // 0x80270B5C: bltz        $v0, L_80270BB4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80270B60: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_80270BB4;
    }
    // 0x80270B60: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80270B64: sb          $t1, 0x4($s3)
    MEM_B(0X4, ctx->r19) = ctx->r9;
    // 0x80270B68: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80270B6C: jal         0x8002BB50
    // 0x80270B70: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x80270B70: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_2:
    // 0x80270B74: lh          $v0, 0xAA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XAA);
    // 0x80270B78: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x80270B7C: bne         $v0, $zero, L_80270B9C
    if (ctx->r2 != 0) {
        // 0x80270B80: sll         $t2, $v0, 5
        ctx->r10 = S32(ctx->r2 << 5);
            goto L_80270B9C;
    }
    // 0x80270B80: sll         $t2, $v0, 5
    ctx->r10 = S32(ctx->r2 << 5);
    // 0x80270B84: beq         $s0, $zero, L_80270BE4
    if (ctx->r16 == 0) {
        // 0x80270B88: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80270BE4;
    }
    // 0x80270B88: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80270B8C: jal         0x8002BB50
    // 0x80270B90: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_8002BB50(rdram, ctx);
        goto after_3;
    // 0x80270B90: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_3:
    // 0x80270B94: b           L_80270BE8
    // 0x80270B98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80270BE8;
    // 0x80270B98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80270B9C:
    // 0x80270B9C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80270BA0: lui         $t5, 0x8027
    ctx->r13 = S32(0X8027 << 16);
    // 0x80270BA4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80270BA8: lw          $t5, 0x43D8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X43D8);
    // 0x80270BAC: b           L_80270BE4
    // 0x80270BB0: sw          $t5, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->r13;
        goto L_80270BE4;
    // 0x80270BB0: sw          $t5, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->r13;
L_80270BB4:
    // 0x80270BB4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80270BB8: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x80270BBC: jal         0x8003C16C
    // 0x80270BC0: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
    func_8003C16C(rdram, ctx);
        goto after_4;
    // 0x80270BC0: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
    after_4:
    // 0x80270BC4: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x80270BC8: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80270BCC: bne         $at, $zero, L_80270B3C
    if (ctx->r1 != 0) {
        // 0x80270BD0: nop
    
            goto L_80270B3C;
    }
    // 0x80270BD0: nop

L_80270BD4:
    // 0x80270BD4: sb          $zero, 0x4($s3)
    MEM_B(0X4, ctx->r19) = 0;
    // 0x80270BD8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80270BDC: jal         0x8002BB50
    // 0x80270BE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_5;
    // 0x80270BE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_80270BE4:
    // 0x80270BE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80270BE8:
    // 0x80270BE8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80270BEC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80270BF0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80270BF4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80270BF8: jr          $ra
    // 0x80270BFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80270BFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8026F480_func_80270C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270C00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80270C04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80270C08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80270C0C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80270C10: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80270C14: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80270C18: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80270C1C: jal         0x8003C16C
    // 0x80270C20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_8003C16C(rdram, ctx);
        goto after_0;
    // 0x80270C20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x80270C24: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x80270C28: blez        $t6, L_80270CE8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80270C2C: lui         $s2, 0x801B
        ctx->r18 = S32(0X801B << 16);
            goto L_80270CE8;
    }
    // 0x80270C2C: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x80270C30: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x80270C34: addiu       $s1, $s1, -0x32B0
    ctx->r17 = ADD32(ctx->r17, -0X32B0);
    // 0x80270C38: addiu       $s2, $s2, -0x750
    ctx->r18 = ADD32(ctx->r18, -0X750);
L_80270C3C:
    // 0x80270C3C: lh          $t7, 0x9A($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X9A);
    // 0x80270C40: nop

    // 0x80270C44: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80270C48: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x80270C4C: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x80270C50: lb          $a0, 0xE0($t0)
    ctx->r4 = MEM_B(ctx->r8, 0XE0);
    // 0x80270C54: jal         0x8003CB98
    // 0x80270C58: nop

    func_8003CB98(rdram, ctx);
        goto after_1;
    // 0x80270C58: nop

    after_1:
    // 0x80270C5C: bltz        $v0, L_80270CC8
    if (SIGNED(ctx->r2) < 0) {
        // 0x80270C60: nop
    
            goto L_80270CC8;
    }
    // 0x80270C60: nop

    // 0x80270C64: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80270C68: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80270C6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80270C70: jal         0x8002BB50
    // 0x80270C74: sb          $t1, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r9;
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x80270C74: sb          $t1, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r9;
    after_2:
    // 0x80270C78: lh          $v0, 0xAA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XAA);
    // 0x80270C7C: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x80270C80: bne         $v0, $zero, L_80270CA4
    if (ctx->r2 != 0) {
        // 0x80270C84: sll         $t2, $v0, 5
        ctx->r10 = S32(ctx->r2 << 5);
            goto L_80270CA4;
    }
    // 0x80270C84: sll         $t2, $v0, 5
    ctx->r10 = S32(ctx->r2 << 5);
    // 0x80270C88: beq         $s0, $zero, L_80270CC0
    if (ctx->r16 == 0) {
        // 0x80270C8C: nop
    
            goto L_80270CC0;
    }
    // 0x80270C8C: nop

    // 0x80270C90: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80270C94: jal         0x8002BB50
    // 0x80270C98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002BB50(rdram, ctx);
        goto after_3;
    // 0x80270C98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80270C9C: b           L_80270CEC
    // 0x80270CA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80270CEC;
    // 0x80270CA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80270CA4:
    // 0x80270CA4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80270CA8: lui         $t5, 0x8027
    ctx->r13 = S32(0X8027 << 16);
    // 0x80270CAC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80270CB0: lw          $t5, 0x4418($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4418);
    // 0x80270CB4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80270CB8: nop

    // 0x80270CBC: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
L_80270CC0:
    // 0x80270CC0: b           L_80270CEC
    // 0x80270CC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80270CEC;
    // 0x80270CC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80270CC8:
    // 0x80270CC8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80270CCC: sll         $t7, $s0, 16
    ctx->r15 = S32(ctx->r16 << 16);
    // 0x80270CD0: jal         0x8003C16C
    // 0x80270CD4: sra         $s0, $t7, 16
    ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
    func_8003C16C(rdram, ctx);
        goto after_4;
    // 0x80270CD4: sra         $s0, $t7, 16
    ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
    after_4:
    // 0x80270CD8: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x80270CDC: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80270CE0: bne         $at, $zero, L_80270C3C
    if (ctx->r1 != 0) {
        // 0x80270CE4: nop
    
            goto L_80270C3C;
    }
    // 0x80270CE4: nop

L_80270CE8:
    // 0x80270CE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80270CEC:
    // 0x80270CEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80270CF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80270CF4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80270CF8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80270CFC: jr          $ra
    // 0x80270D00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80270D00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8026F480_func_80270D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270D04: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80270D08: lh          $t6, -0x6A6($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6A6);
    // 0x80270D0C: lhu         $t8, 0x1E($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X1E);
    // 0x80270D10: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x80270D14: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80270D18: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80270D1C: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x80270D20: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80270D24: lw          $t1, 0x4338($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4338);
    // 0x80270D28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80270D2C: jr          $ra
    // 0x80270D30: sw          $t1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r9;
    return;
    // 0x80270D30: sw          $t1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void ovl_8026F480_func_80270D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270D34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80270D38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80270D3C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80270D40: lh          $t6, -0x6A6($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6A6);
    // 0x80270D44: lhu         $t8, 0x1E($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X1E);
    // 0x80270D48: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x80270D4C: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x80270D50: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80270D54: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80270D58: addiu       $t1, $t1, 0x46A0
    ctx->r9 = ADD32(ctx->r9, 0X46A0);
    // 0x80270D5C: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x80270D60: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x80270D64: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    // 0x80270D68: jal         0x8002AB30
    // 0x80270D6C: nop

    func_8002AB30(rdram, ctx);
        goto after_0;
    // 0x80270D6C: nop

    after_0:
    // 0x80270D70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80270D74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80270D78: jr          $ra
    // 0x80270D7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80270D7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_80270D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270D80: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80270D84: lh          $t6, -0x6A6($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6A6);
    // 0x80270D88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80270D8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80270D90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80270D94: bne         $t6, $zero, L_80270DAC
    if (ctx->r14 != 0) {
        // 0x80270D98: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80270DAC;
    }
    // 0x80270D98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80270D9C: jal         0x80029548
    // 0x80270DA0: nop

    func_80029548(rdram, ctx);
        goto after_0;
    // 0x80270DA0: nop

    after_0:
    // 0x80270DA4: b           L_80270E00
    // 0x80270DA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80270E00;
    // 0x80270DA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80270DAC:
    // 0x80270DAC: jal         0x8003C16C
    // 0x80270DB0: nop

    func_8003C16C(rdram, ctx);
        goto after_1;
    // 0x80270DB0: nop

    after_1:
    // 0x80270DB4: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x80270DB8: lh          $t7, -0x6B6($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6B6);
    // 0x80270DBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80270DC0: div         $zero, $t7, $v0
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r2)));
    // 0x80270DC4: bne         $v0, $zero, L_80270DD0
    if (ctx->r2 != 0) {
        // 0x80270DC8: nop
    
            goto L_80270DD0;
    }
    // 0x80270DC8: nop

    // 0x80270DCC: break       7
    do_break(2150043084);
L_80270DD0:
    // 0x80270DD0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80270DD4: bne         $v0, $at, L_80270DE8
    if (ctx->r2 != ctx->r1) {
        // 0x80270DD8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80270DE8;
    }
    // 0x80270DD8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80270DDC: bne         $t7, $at, L_80270DE8
    if (ctx->r15 != ctx->r1) {
        // 0x80270DE0: nop
    
            goto L_80270DE8;
    }
    // 0x80270DE0: nop

    // 0x80270DE4: break       6
    do_break(2150043108);
L_80270DE8:
    // 0x80270DE8: mflo        $a1
    ctx->r5 = lo;
    // 0x80270DEC: addiu       $a1, $a1, 0x12
    ctx->r5 = ADD32(ctx->r5, 0X12);
    // 0x80270DF0: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x80270DF4: jal         0x8002BB50
    // 0x80270DF8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x80270DF8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_2:
    // 0x80270DFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80270E00:
    // 0x80270E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80270E04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80270E08: jr          $ra
    // 0x80270E0C: nop

    return;
    // 0x80270E0C: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80270E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270E10: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80270E14: lh          $t6, -0x6A6($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6A6);
    // 0x80270E18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80270E1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80270E20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80270E24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80270E28: beq         $t6, $at, L_80270E40
    if (ctx->r14 == ctx->r1) {
        // 0x80270E2C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80270E40;
    }
    // 0x80270E2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80270E30: jal         0x80029548
    // 0x80270E34: nop

    func_80029548(rdram, ctx);
        goto after_0;
    // 0x80270E34: nop

    after_0:
    // 0x80270E38: b           L_80270EA0
    // 0x80270E3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80270EA0;
    // 0x80270E3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80270E40:
    // 0x80270E40: jal         0x8003C16C
    // 0x80270E44: nop

    func_8003C16C(rdram, ctx);
        goto after_1;
    // 0x80270E44: nop

    after_1:
    // 0x80270E48: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x80270E4C: lh          $t7, -0x6B6($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6B6);
    // 0x80270E50: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80270E54: div         $zero, $t7, $v0
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r2)));
    // 0x80270E58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80270E5C: bne         $v0, $zero, L_80270E68
    if (ctx->r2 != 0) {
        // 0x80270E60: nop
    
            goto L_80270E68;
    }
    // 0x80270E60: nop

    // 0x80270E64: break       7
    do_break(2150043236);
L_80270E68:
    // 0x80270E68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80270E6C: bne         $v0, $at, L_80270E80
    if (ctx->r2 != ctx->r1) {
        // 0x80270E70: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80270E80;
    }
    // 0x80270E70: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80270E74: bne         $t7, $at, L_80270E80
    if (ctx->r15 != ctx->r1) {
        // 0x80270E78: nop
    
            goto L_80270E80;
    }
    // 0x80270E78: nop

    // 0x80270E7C: break       6
    do_break(2150043260);
L_80270E80:
    // 0x80270E80: mflo        $t8
    ctx->r24 = lo;
    // 0x80270E84: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x80270E88: lb          $a1, 0x47BC($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47BC);
    // 0x80270E8C: nop

    // 0x80270E90: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x80270E94: jal         0x8002BB50
    // 0x80270E98: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x80270E98: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_2:
    // 0x80270E9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80270EA0:
    // 0x80270EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80270EA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80270EA8: jr          $ra
    // 0x80270EAC: nop

    return;
    // 0x80270EAC: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80270E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270E4C: lh          $t7, -0x6B6($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6B6);
    // 0x80270E50: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80270E54: div         $zero, $t7, $v0
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r2)));
    // 0x80270E58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80270E5C: bne         $v0, $zero, L_80270E68
    if (ctx->r2 != 0) {
        // 0x80270E60: nop
    
            goto L_80270E68;
    }
    // 0x80270E60: nop

    // 0x80270E64: break       7
    do_break(2150043236);
L_80270E68:
    // 0x80270E68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80270E6C: bne         $v0, $at, L_80270E80
    if (ctx->r2 != ctx->r1) {
        // 0x80270E70: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80270E80;
    }
    // 0x80270E70: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80270E74: bne         $t7, $at, L_80270E80
    if (ctx->r15 != ctx->r1) {
        // 0x80270E78: nop
    
            goto L_80270E80;
    }
    // 0x80270E78: nop

    // 0x80270E7C: break       6
    do_break(2150043260);
L_80270E80:
    // 0x80270E80: mflo        $t8
    ctx->r24 = lo;
    // 0x80270E84: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x80270E88: lb          $a1, 0x47BC($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47BC);
    // 0x80270E8C: nop

    // 0x80270E90: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x80270E94: jal         0x8002BB50
    // 0x80270E98: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x80270E98: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_0:
    // 0x80270E9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80270EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80270EA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80270EA8: jr          $ra
    // 0x80270EAC: nop

    return;
    // 0x80270EAC: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80270EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270EB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80270EB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80270EB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80270EBC: lhu         $t6, 0x1E($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1E);
    // 0x80270EC0: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x80270EC4: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x80270EC8: bne         $at, $zero, L_80270EF0
    if (ctx->r1 != 0) {
        // 0x80270ECC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80270EF0;
    }
    // 0x80270ECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80270ED0: lh          $t7, -0x6A6($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6A6);
    // 0x80270ED4: nop

    // 0x80270ED8: beq         $t7, $zero, L_80270EF0
    if (ctx->r15 == 0) {
        // 0x80270EDC: nop
    
            goto L_80270EF0;
    }
    // 0x80270EDC: nop

    // 0x80270EE0: jal         0x80029548
    // 0x80270EE4: nop

    func_80029548(rdram, ctx);
        goto after_0;
    // 0x80270EE4: nop

    after_0:
    // 0x80270EE8: b           L_80270EF0
    // 0x80270EEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80270EF0;
    // 0x80270EEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80270EF0:
    // 0x80270EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80270EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80270EF8: jr          $ra
    // 0x80270EFC: nop

    return;
    // 0x80270EFC: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80270F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270F00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80270F04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80270F08: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80270F0C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80270F10: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80270F14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80270F18: jal         0x80036234
    // 0x80270F1C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x80270F1C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80270F20: jal         0x8004974C
    // 0x80270F24: nop

    func_8004974C(rdram, ctx);
        goto after_1;
    // 0x80270F24: nop

    after_1:
    // 0x80270F28: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80270F2C: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80270F30: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80270F34: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80270F38: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80270F3C: addiu       $t7, $t7, 0x40E0
    ctx->r15 = ADD32(ctx->r15, 0X40E0);
    // 0x80270F40: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80270F44: jal         0x80035FF0
    // 0x80270F48: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_80035FF0(rdram, ctx);
        goto after_2;
    // 0x80270F48: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_2:
    // 0x80270F4C: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x80270F50: addiu       $s1, $s1, -0x32B0
    ctx->r17 = ADD32(ctx->r17, -0X32B0);
    // 0x80270F54: lb          $t8, 0xF($s1)
    ctx->r24 = MEM_B(ctx->r17, 0XF);
    // 0x80270F58: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80270F5C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80270F60: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80270F64: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80270F68: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80270F6C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80270F70: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80270F74: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80270F78: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80270F7C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80270F80: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80270F84: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80270F88: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80270F8C: lb          $t0, -0x2F7F($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X2F7F);
    // 0x80270F90: nop

    // 0x80270F94: sh          $t0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r8;
    // 0x80270F98: lh          $a0, 0x24($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X24);
    // 0x80270F9C: jal         0x8003C138
    // 0x80270FA0: nop

    func_8003C138(rdram, ctx);
        goto after_3;
    // 0x80270FA0: nop

    after_3:
    // 0x80270FA4: jal         0x8004974C
    // 0x80270FA8: nop

    func_8004974C(rdram, ctx);
        goto after_4;
    // 0x80270FA8: nop

    after_4:
    // 0x80270FAC: sh          $v0, 0x36($s2)
    MEM_H(0X36, ctx->r18) = ctx->r2;
    // 0x80270FB0: lh          $t1, 0x36($s2)
    ctx->r9 = MEM_H(ctx->r18, 0X36);
    // 0x80270FB4: nop

    // 0x80270FB8: bne         $t1, $zero, L_80270FC8
    if (ctx->r9 != 0) {
        // 0x80270FBC: addiu       $t2, $zero, 0x8
        ctx->r10 = ADD32(0, 0X8);
            goto L_80270FC8;
    }
    // 0x80270FBC: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80270FC0: b           L_80270FD0
    // 0x80270FC4: sh          $t2, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r10;
        goto L_80270FD0;
    // 0x80270FC4: sh          $t2, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r10;
L_80270FC8:
    // 0x80270FC8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x80270FCC: sh          $t3, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r11;
L_80270FD0:
    // 0x80270FD0: jal         0x8003EAD8
    // 0x80270FD4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_8003EAD8(rdram, ctx);
        goto after_5;
    // 0x80270FD4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_5:
    // 0x80270FD8: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x80270FDC: blez        $t4, L_80271088
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80270FE0: addu        $t5, $s1, $s0
        ctx->r13 = ADD32(ctx->r17, ctx->r16);
            goto L_80271088;
    }
    // 0x80270FE0: addu        $t5, $s1, $s0
    ctx->r13 = ADD32(ctx->r17, ctx->r16);
L_80270FE4:
    // 0x80270FE4: lb          $a0, 0xE0($t5)
    ctx->r4 = MEM_B(ctx->r13, 0XE0);
    // 0x80270FE8: jal         0x8003CB98
    // 0x80270FEC: nop

    func_8003CB98(rdram, ctx);
        goto after_6;
    // 0x80270FEC: nop

    after_6:
    // 0x80270FF0: bltz        $v0, L_80271068
    if (SIGNED(ctx->r2) < 0) {
        // 0x80270FF4: nop
    
            goto L_80271068;
    }
    // 0x80270FF4: nop

    // 0x80270FF8: jal         0x8003C16C
    // 0x80270FFC: nop

    func_8003C16C(rdram, ctx);
        goto after_7;
    // 0x80270FFC: nop

    after_7:
    // 0x80271000: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x80271004: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80271008: jal         0x8003C16C
    // 0x8027100C: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    func_8003C16C(rdram, ctx);
        goto after_8;
    // 0x8027100C: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    after_8:
    // 0x80271010: bgez        $s0, L_80271020
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80271014: sra         $t7, $s0, 1
        ctx->r15 = S32(SIGNED(ctx->r16) >> 1);
            goto L_80271020;
    }
    // 0x80271014: sra         $t7, $s0, 1
    ctx->r15 = S32(SIGNED(ctx->r16) >> 1);
    // 0x80271018: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x8027101C: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_80271020:
    // 0x80271020: div         $zero, $t7, $s1
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r17)));
    // 0x80271024: bne         $s1, $zero, L_80271030
    if (ctx->r17 != 0) {
        // 0x80271028: nop
    
            goto L_80271030;
    }
    // 0x80271028: nop

    // 0x8027102C: break       7
    do_break(2150043692);
L_80271030:
    // 0x80271030: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80271034: bne         $s1, $at, L_80271048
    if (ctx->r17 != ctx->r1) {
        // 0x80271038: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80271048;
    }
    // 0x80271038: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8027103C: bne         $t7, $at, L_80271048
    if (ctx->r15 != ctx->r1) {
        // 0x80271040: nop
    
            goto L_80271048;
    }
    // 0x80271040: nop

    // 0x80271044: break       6
    do_break(2150043716);
L_80271048:
    // 0x80271048: mflo        $t8
    ctx->r24 = lo;
    // 0x8027104C: nop

    // 0x80271050: nop

    // 0x80271054: multu       $v0, $t8
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80271058: mflo        $t9
    ctx->r25 = lo;
    // 0x8027105C: sh          $t9, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r25;
    // 0x80271060: b           L_80271088
    // 0x80271064: nop

        goto L_80271088;
    // 0x80271064: nop

L_80271068:
    // 0x80271068: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027106C: sll         $t0, $s0, 16
    ctx->r8 = S32(ctx->r16 << 16);
    // 0x80271070: jal         0x8003EAD8
    // 0x80271074: sra         $s0, $t0, 16
    ctx->r16 = S32(SIGNED(ctx->r8) >> 16);
    func_8003EAD8(rdram, ctx);
        goto after_9;
    // 0x80271074: sra         $s0, $t0, 16
    ctx->r16 = S32(SIGNED(ctx->r8) >> 16);
    after_9:
    // 0x80271078: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x8027107C: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80271080: bne         $at, $zero, L_80270FE4
    if (ctx->r1 != 0) {
        // 0x80271084: addu        $t5, $s1, $s0
        ctx->r13 = ADD32(ctx->r17, ctx->r16);
            goto L_80270FE4;
    }
    // 0x80271084: addu        $t5, $s1, $s0
    ctx->r13 = ADD32(ctx->r17, ctx->r16);
L_80271088:
    // 0x80271088: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027108C: jal         0x8002AAC0
    // 0x80271090: addiu       $a0, $a0, 0x45D8
    ctx->r4 = ADD32(ctx->r4, 0X45D8);
    func_8002AAC0(rdram, ctx);
        goto after_10;
    // 0x80271090: addiu       $a0, $a0, 0x45D8
    ctx->r4 = ADD32(ctx->r4, 0X45D8);
    after_10:
    // 0x80271094: jal         0x80039DF0
    // 0x80271098: nop

    func_80039DF0(rdram, ctx);
        goto after_11;
    // 0x80271098: nop

    after_11:
    // 0x8027109C: jal         0x8006FB58
    // 0x802710A0: nop

    func_8006FB58(rdram, ctx);
        goto after_12;
    // 0x802710A0: nop

    after_12:
    // 0x802710A4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802710A8: jal         0x80029354
    // 0x802710AC: addiu       $a0, $a0, 0x12F4
    ctx->r4 = ADD32(ctx->r4, 0X12F4);
    func_80029354(rdram, ctx);
        goto after_13;
    // 0x802710AC: addiu       $a0, $a0, 0x12F4
    ctx->r4 = ADD32(ctx->r4, 0X12F4);
    after_13:
    // 0x802710B0: jal         0x8003EAD8
    // 0x802710B4: nop

    func_8003EAD8(rdram, ctx);
        goto after_14;
    // 0x802710B4: nop

    after_14:
    // 0x802710B8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802710BC: addiu       $a0, $a0, 0x10E0
    ctx->r4 = ADD32(ctx->r4, 0X10E0);
    // 0x802710C0: jal         0x8004A9B4
    // 0x802710C4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_15;
    // 0x802710C4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_15:
    // 0x802710C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802710CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802710D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802710D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802710D8: jr          $ra
    // 0x802710DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802710DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8026F480_func_80270F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80270F30: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80270F34: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80270F38: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80270F3C: addiu       $t7, $t7, 0x40E0
    ctx->r15 = ADD32(ctx->r15, 0X40E0);
    // 0x80270F40: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80270F44: jal         0x80035FF0
    // 0x80270F48: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_80035FF0(rdram, ctx);
        goto after_0;
    // 0x80270F48: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x80270F4C: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x80270F50: addiu       $s1, $s1, -0x32B0
    ctx->r17 = ADD32(ctx->r17, -0X32B0);
    // 0x80270F54: lb          $t8, 0xF($s1)
    ctx->r24 = MEM_B(ctx->r17, 0XF);
    // 0x80270F58: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80270F5C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80270F60: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80270F64: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80270F68: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80270F6C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80270F70: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80270F74: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80270F78: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80270F7C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80270F80: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80270F84: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80270F88: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80270F8C: lb          $t0, -0x2F7F($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X2F7F);
    // 0x80270F90: nop

    // 0x80270F94: sh          $t0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r8;
    // 0x80270F98: lh          $a0, 0x24($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X24);
    // 0x80270F9C: jal         0x8003C138
    // 0x80270FA0: nop

    func_8003C138(rdram, ctx);
        goto after_1;
    // 0x80270FA0: nop

    after_1:
    // 0x80270FA4: jal         0x8004974C
    // 0x80270FA8: nop

    func_8004974C(rdram, ctx);
        goto after_2;
    // 0x80270FA8: nop

    after_2:
    // 0x80270FAC: sh          $v0, 0x36($s2)
    MEM_H(0X36, ctx->r18) = ctx->r2;
    // 0x80270FB0: lh          $t1, 0x36($s2)
    ctx->r9 = MEM_H(ctx->r18, 0X36);
    // 0x80270FB4: nop

    // 0x80270FB8: bne         $t1, $zero, L_80270FC8
    if (ctx->r9 != 0) {
        // 0x80270FBC: addiu       $t2, $zero, 0x8
        ctx->r10 = ADD32(0, 0X8);
            goto L_80270FC8;
    }
    // 0x80270FBC: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80270FC0: b           L_80270FD0
    // 0x80270FC4: sh          $t2, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r10;
        goto L_80270FD0;
    // 0x80270FC4: sh          $t2, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r10;
L_80270FC8:
    // 0x80270FC8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x80270FCC: sh          $t3, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r11;
L_80270FD0:
    // 0x80270FD0: jal         0x8003EAD8
    // 0x80270FD4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_8003EAD8(rdram, ctx);
        goto after_3;
    // 0x80270FD4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_3:
    // 0x80270FD8: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x80270FDC: blez        $t4, L_80271088
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80270FE0: addu        $t5, $s1, $s0
        ctx->r13 = ADD32(ctx->r17, ctx->r16);
            goto L_80271088;
    }
    // 0x80270FE0: addu        $t5, $s1, $s0
    ctx->r13 = ADD32(ctx->r17, ctx->r16);
L_80270FE4:
    // 0x80270FE4: lb          $a0, 0xE0($t5)
    ctx->r4 = MEM_B(ctx->r13, 0XE0);
    // 0x80270FE8: jal         0x8003CB98
    // 0x80270FEC: nop

    func_8003CB98(rdram, ctx);
        goto after_4;
    // 0x80270FEC: nop

    after_4:
    // 0x80270FF0: bltz        $v0, L_80271068
    if (SIGNED(ctx->r2) < 0) {
        // 0x80270FF4: nop
    
            goto L_80271068;
    }
    // 0x80270FF4: nop

    // 0x80270FF8: jal         0x8003C16C
    // 0x80270FFC: nop

    func_8003C16C(rdram, ctx);
        goto after_5;
    // 0x80270FFC: nop

    after_5:
    // 0x80271000: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x80271004: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80271008: jal         0x8003C16C
    // 0x8027100C: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    func_8003C16C(rdram, ctx);
        goto after_6;
    // 0x8027100C: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    after_6:
    // 0x80271010: bgez        $s0, L_80271020
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80271014: sra         $t7, $s0, 1
        ctx->r15 = S32(SIGNED(ctx->r16) >> 1);
            goto L_80271020;
    }
    // 0x80271014: sra         $t7, $s0, 1
    ctx->r15 = S32(SIGNED(ctx->r16) >> 1);
    // 0x80271018: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x8027101C: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_80271020:
    // 0x80271020: div         $zero, $t7, $s1
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r17)));
    // 0x80271024: bne         $s1, $zero, L_80271030
    if (ctx->r17 != 0) {
        // 0x80271028: nop
    
            goto L_80271030;
    }
    // 0x80271028: nop

    // 0x8027102C: break       7
    do_break(2150043692);
L_80271030:
    // 0x80271030: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80271034: bne         $s1, $at, L_80271048
    if (ctx->r17 != ctx->r1) {
        // 0x80271038: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80271048;
    }
    // 0x80271038: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8027103C: bne         $t7, $at, L_80271048
    if (ctx->r15 != ctx->r1) {
        // 0x80271040: nop
    
            goto L_80271048;
    }
    // 0x80271040: nop

    // 0x80271044: break       6
    do_break(2150043716);
L_80271048:
    // 0x80271048: mflo        $t8
    ctx->r24 = lo;
    // 0x8027104C: nop

    // 0x80271050: nop

    // 0x80271054: multu       $v0, $t8
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80271058: mflo        $t9
    ctx->r25 = lo;
    // 0x8027105C: sh          $t9, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r25;
    // 0x80271060: b           L_80271088
    // 0x80271064: nop

        goto L_80271088;
    // 0x80271064: nop

L_80271068:
    // 0x80271068: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027106C: sll         $t0, $s0, 16
    ctx->r8 = S32(ctx->r16 << 16);
    // 0x80271070: jal         0x8003EAD8
    // 0x80271074: sra         $s0, $t0, 16
    ctx->r16 = S32(SIGNED(ctx->r8) >> 16);
    func_8003EAD8(rdram, ctx);
        goto after_7;
    // 0x80271074: sra         $s0, $t0, 16
    ctx->r16 = S32(SIGNED(ctx->r8) >> 16);
    after_7:
    // 0x80271078: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x8027107C: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80271080: bne         $at, $zero, L_80270FE4
    if (ctx->r1 != 0) {
        // 0x80271084: addu        $t5, $s1, $s0
        ctx->r13 = ADD32(ctx->r17, ctx->r16);
            goto L_80270FE4;
    }
    // 0x80271084: addu        $t5, $s1, $s0
    ctx->r13 = ADD32(ctx->r17, ctx->r16);
L_80271088:
    // 0x80271088: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027108C: jal         0x8002AAC0
    // 0x80271090: addiu       $a0, $a0, 0x45D8
    ctx->r4 = ADD32(ctx->r4, 0X45D8);
    func_8002AAC0(rdram, ctx);
        goto after_8;
    // 0x80271090: addiu       $a0, $a0, 0x45D8
    ctx->r4 = ADD32(ctx->r4, 0X45D8);
    after_8:
    // 0x80271094: jal         0x80039DF0
    // 0x80271098: nop

    func_80039DF0(rdram, ctx);
        goto after_9;
    // 0x80271098: nop

    after_9:
    // 0x8027109C: jal         0x8006FB58
    // 0x802710A0: nop

    func_8006FB58(rdram, ctx);
        goto after_10;
    // 0x802710A0: nop

    after_10:
    // 0x802710A4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802710A8: jal         0x80029354
    // 0x802710AC: addiu       $a0, $a0, 0x12F4
    ctx->r4 = ADD32(ctx->r4, 0X12F4);
    func_80029354(rdram, ctx);
        goto after_11;
    // 0x802710AC: addiu       $a0, $a0, 0x12F4
    ctx->r4 = ADD32(ctx->r4, 0X12F4);
    after_11:
    // 0x802710B0: jal         0x8003EAD8
    // 0x802710B4: nop

    func_8003EAD8(rdram, ctx);
        goto after_12;
    // 0x802710B4: nop

    after_12:
    // 0x802710B8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802710BC: addiu       $a0, $a0, 0x10E0
    ctx->r4 = ADD32(ctx->r4, 0X10E0);
    // 0x802710C0: jal         0x8004A9B4
    // 0x802710C4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_13;
    // 0x802710C4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_13:
    // 0x802710C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802710CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802710D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802710D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802710D8: jr          $ra
    // 0x802710DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802710DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8026F480_func_80270FE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80270FE4:
    // 0x80270FE4: lb          $a0, 0xE0($t5)
    ctx->r4 = MEM_B(ctx->r13, 0XE0);
    // 0x80270FE8: jal         0x8003CB98
    // 0x80270FEC: nop

    func_8003CB98(rdram, ctx);
        goto after_0;
    // 0x80270FEC: nop

    after_0:
    // 0x80270FF0: bltz        $v0, L_80271068
    if (SIGNED(ctx->r2) < 0) {
        // 0x80270FF4: nop
    
            goto L_80271068;
    }
    // 0x80270FF4: nop

    // 0x80270FF8: jal         0x8003C16C
    // 0x80270FFC: nop

    func_8003C16C(rdram, ctx);
        goto after_1;
    // 0x80270FFC: nop

    after_1:
    // 0x80271000: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x80271004: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80271008: jal         0x8003C16C
    // 0x8027100C: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    func_8003C16C(rdram, ctx);
        goto after_2;
    // 0x8027100C: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    after_2:
    // 0x80271010: bgez        $s0, L_80271020
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80271014: sra         $t7, $s0, 1
        ctx->r15 = S32(SIGNED(ctx->r16) >> 1);
            goto L_80271020;
    }
    // 0x80271014: sra         $t7, $s0, 1
    ctx->r15 = S32(SIGNED(ctx->r16) >> 1);
    // 0x80271018: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x8027101C: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_80271020:
    // 0x80271020: div         $zero, $t7, $s1
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r17)));
    // 0x80271024: bne         $s1, $zero, L_80271030
    if (ctx->r17 != 0) {
        // 0x80271028: nop
    
            goto L_80271030;
    }
    // 0x80271028: nop

    // 0x8027102C: break       7
    do_break(2150043692);
L_80271030:
    // 0x80271030: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80271034: bne         $s1, $at, L_80271048
    if (ctx->r17 != ctx->r1) {
        // 0x80271038: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80271048;
    }
    // 0x80271038: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8027103C: bne         $t7, $at, L_80271048
    if (ctx->r15 != ctx->r1) {
        // 0x80271040: nop
    
            goto L_80271048;
    }
    // 0x80271040: nop

    // 0x80271044: break       6
    do_break(2150043716);
L_80271048:
    // 0x80271048: mflo        $t8
    ctx->r24 = lo;
    // 0x8027104C: nop

    // 0x80271050: nop

    // 0x80271054: multu       $v0, $t8
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80271058: mflo        $t9
    ctx->r25 = lo;
    // 0x8027105C: sh          $t9, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r25;
    // 0x80271060: b           L_80271088
    // 0x80271064: nop

        goto L_80271088;
    // 0x80271064: nop

L_80271068:
    // 0x80271068: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027106C: sll         $t0, $s0, 16
    ctx->r8 = S32(ctx->r16 << 16);
    // 0x80271070: jal         0x8003EAD8
    // 0x80271074: sra         $s0, $t0, 16
    ctx->r16 = S32(SIGNED(ctx->r8) >> 16);
    func_8003EAD8(rdram, ctx);
        goto after_3;
    // 0x80271074: sra         $s0, $t0, 16
    ctx->r16 = S32(SIGNED(ctx->r8) >> 16);
    after_3:
    // 0x80271078: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x8027107C: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80271080: bne         $at, $zero, L_80270FE4
    if (ctx->r1 != 0) {
        // 0x80271084: addu        $t5, $s1, $s0
        ctx->r13 = ADD32(ctx->r17, ctx->r16);
            goto L_80270FE4;
    }
    // 0x80271084: addu        $t5, $s1, $s0
    ctx->r13 = ADD32(ctx->r17, ctx->r16);
L_80271088:
    // 0x80271088: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027108C: jal         0x8002AAC0
    // 0x80271090: addiu       $a0, $a0, 0x45D8
    ctx->r4 = ADD32(ctx->r4, 0X45D8);
    func_8002AAC0(rdram, ctx);
        goto after_4;
    // 0x80271090: addiu       $a0, $a0, 0x45D8
    ctx->r4 = ADD32(ctx->r4, 0X45D8);
    after_4:
    // 0x80271094: jal         0x80039DF0
    // 0x80271098: nop

    func_80039DF0(rdram, ctx);
        goto after_5;
    // 0x80271098: nop

    after_5:
    // 0x8027109C: jal         0x8006FB58
    // 0x802710A0: nop

    func_8006FB58(rdram, ctx);
        goto after_6;
    // 0x802710A0: nop

    after_6:
    // 0x802710A4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802710A8: jal         0x80029354
    // 0x802710AC: addiu       $a0, $a0, 0x12F4
    ctx->r4 = ADD32(ctx->r4, 0X12F4);
    func_80029354(rdram, ctx);
        goto after_7;
    // 0x802710AC: addiu       $a0, $a0, 0x12F4
    ctx->r4 = ADD32(ctx->r4, 0X12F4);
    after_7:
    // 0x802710B0: jal         0x8003EAD8
    // 0x802710B4: nop

    func_8003EAD8(rdram, ctx);
        goto after_8;
    // 0x802710B4: nop

    after_8:
    // 0x802710B8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802710BC: addiu       $a0, $a0, 0x10E0
    ctx->r4 = ADD32(ctx->r4, 0X10E0);
    // 0x802710C0: jal         0x8004A9B4
    // 0x802710C4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_9;
    // 0x802710C4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_9:
    // 0x802710C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802710CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802710D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802710D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802710D8: jr          $ra
    // 0x802710DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802710DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8026F480_func_80270FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80270FE4:
    // 0x80270FE8: jal         0x8003CB98
    // 0x80270FEC: nop

    func_8003CB98(rdram, ctx);
        goto after_0;
    // 0x80270FEC: nop

    after_0:
    // 0x80270FF0: bltz        $v0, L_80271068
    if (SIGNED(ctx->r2) < 0) {
        // 0x80270FF4: nop
    
            goto L_80271068;
    }
    // 0x80270FF4: nop

    // 0x80270FF8: jal         0x8003C16C
    // 0x80270FFC: nop

    func_8003C16C(rdram, ctx);
        goto after_1;
    // 0x80270FFC: nop

    after_1:
    // 0x80271000: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x80271004: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80271008: jal         0x8003C16C
    // 0x8027100C: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    func_8003C16C(rdram, ctx);
        goto after_2;
    // 0x8027100C: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    after_2:
    // 0x80271010: bgez        $s0, L_80271020
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80271014: sra         $t7, $s0, 1
        ctx->r15 = S32(SIGNED(ctx->r16) >> 1);
            goto L_80271020;
    }
    // 0x80271014: sra         $t7, $s0, 1
    ctx->r15 = S32(SIGNED(ctx->r16) >> 1);
    // 0x80271018: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x8027101C: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_80271020:
    // 0x80271020: div         $zero, $t7, $s1
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r17)));
    // 0x80271024: bne         $s1, $zero, L_80271030
    if (ctx->r17 != 0) {
        // 0x80271028: nop
    
            goto L_80271030;
    }
    // 0x80271028: nop

    // 0x8027102C: break       7
    do_break(2150043692);
L_80271030:
    // 0x80271030: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80271034: bne         $s1, $at, L_80271048
    if (ctx->r17 != ctx->r1) {
        // 0x80271038: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80271048;
    }
    // 0x80271038: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8027103C: bne         $t7, $at, L_80271048
    if (ctx->r15 != ctx->r1) {
        // 0x80271040: nop
    
            goto L_80271048;
    }
    // 0x80271040: nop

    // 0x80271044: break       6
    do_break(2150043716);
L_80271048:
    // 0x80271048: mflo        $t8
    ctx->r24 = lo;
    // 0x8027104C: nop

    // 0x80271050: nop

    // 0x80271054: multu       $v0, $t8
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80271058: mflo        $t9
    ctx->r25 = lo;
    // 0x8027105C: sh          $t9, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r25;
    // 0x80271060: b           L_80271088
    // 0x80271064: nop

        goto L_80271088;
    // 0x80271064: nop

L_80271068:
    // 0x80271068: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027106C: sll         $t0, $s0, 16
    ctx->r8 = S32(ctx->r16 << 16);
    // 0x80271070: jal         0x8003EAD8
    // 0x80271074: sra         $s0, $t0, 16
    ctx->r16 = S32(SIGNED(ctx->r8) >> 16);
    func_8003EAD8(rdram, ctx);
        goto after_3;
    // 0x80271074: sra         $s0, $t0, 16
    ctx->r16 = S32(SIGNED(ctx->r8) >> 16);
    after_3:
    // 0x80271078: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x8027107C: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80271080: bne         $at, $zero, L_80270FE4
    if (ctx->r1 != 0) {
            // 0x80271084: addu        $t5, $s1, $s0
    ctx->r13 = ADD32(ctx->r17, ctx->r16);
    ovl_8026F480_func_80270FE4(rdram, ctx);
    return;
    }
    // 0x80271084: addu        $t5, $s1, $s0
    ctx->r13 = ADD32(ctx->r17, ctx->r16);
L_80271088:
    // 0x80271088: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027108C: jal         0x8002AAC0
    // 0x80271090: addiu       $a0, $a0, 0x45D8
    ctx->r4 = ADD32(ctx->r4, 0X45D8);
    func_8002AAC0(rdram, ctx);
        goto after_4;
    // 0x80271090: addiu       $a0, $a0, 0x45D8
    ctx->r4 = ADD32(ctx->r4, 0X45D8);
    after_4:
    // 0x80271094: jal         0x80039DF0
    // 0x80271098: nop

    func_80039DF0(rdram, ctx);
        goto after_5;
    // 0x80271098: nop

    after_5:
    // 0x8027109C: jal         0x8006FB58
    // 0x802710A0: nop

    func_8006FB58(rdram, ctx);
        goto after_6;
    // 0x802710A0: nop

    after_6:
    // 0x802710A4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802710A8: jal         0x80029354
    // 0x802710AC: addiu       $a0, $a0, 0x12F4
    ctx->r4 = ADD32(ctx->r4, 0X12F4);
    func_80029354(rdram, ctx);
        goto after_7;
    // 0x802710AC: addiu       $a0, $a0, 0x12F4
    ctx->r4 = ADD32(ctx->r4, 0X12F4);
    after_7:
    // 0x802710B0: jal         0x8003EAD8
    // 0x802710B4: nop

    func_8003EAD8(rdram, ctx);
        goto after_8;
    // 0x802710B4: nop

    after_8:
    // 0x802710B8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802710BC: addiu       $a0, $a0, 0x10E0
    ctx->r4 = ADD32(ctx->r4, 0X10E0);
    // 0x802710C0: jal         0x8004A9B4
    // 0x802710C4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_9;
    // 0x802710C4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_9:
    // 0x802710C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802710CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802710D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802710D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802710D8: jr          $ra
    // 0x802710DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802710DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8026F480_func_802710B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802710B4: nop

    // 0x802710B8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802710BC: addiu       $a0, $a0, 0x10E0
    ctx->r4 = ADD32(ctx->r4, 0X10E0);
    // 0x802710C0: jal         0x8004A9B4
    // 0x802710C4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_0;
    // 0x802710C4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x802710C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802710CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802710D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802710D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802710D8: jr          $ra
    // 0x802710DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802710DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8026F480_func_802710E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802710E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802710E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802710E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802710EC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802710F0: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x802710F4: lh          $t7, 0x24($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X24);
    // 0x802710F8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x802710FC: sb          $t6, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r14;
    // 0x80271100: sb          $t7, 0x5A($a0)
    MEM_B(0X5A, ctx->r4) = ctx->r15;
    // 0x80271104: lw          $t8, -0x3250($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3250);
    // 0x80271108: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8027110C: lhu         $a0, 0x0($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X0);
    // 0x80271110: jal         0x80035D2C
    // 0x80271114: nop

    func_80035D2C(rdram, ctx);
        goto after_0;
    // 0x80271114: nop

    after_0:
    // 0x80271118: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8027111C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80271120: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80271124: lw          $t9, 0x467C($at)
    ctx->r25 = MEM_W(ctx->r1, 0X467C);
    // 0x80271128: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8027112C: jalr        $t9
    // 0x80271130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80271130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80271134: jal         0x8003EAD8
    // 0x80271138: nop

    func_8003EAD8(rdram, ctx);
        goto after_2;
    // 0x80271138: nop

    after_2:
    // 0x8027113C: lh          $t0, 0x34($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X34);
    // 0x80271140: lh          $a0, 0x26($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X26);
    // 0x80271144: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80271148: jal         0x8001D4C0
    // 0x8027114C: subu        $a2, $v0, $t0
    ctx->r6 = SUB32(ctx->r2, ctx->r8);
    func_8001D4C0(rdram, ctx);
        goto after_3;
    // 0x8027114C: subu        $a2, $v0, $t0
    ctx->r6 = SUB32(ctx->r2, ctx->r8);
    after_3:
    // 0x80271150: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x80271154: lh          $t2, 0x26($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X26);
    // 0x80271158: lb          $t1, 0x30($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X30);
    // 0x8027115C: nop

    // 0x80271160: bne         $t1, $t2, L_8027117C
    if (ctx->r9 != ctx->r10) {
        // 0x80271164: nop
    
            goto L_8027117C;
    }
    // 0x80271164: nop

    // 0x80271168: lb          $t3, 0x5A($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X5A);
    // 0x8027116C: lh          $t4, 0x24($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X24);
    // 0x80271170: nop

    // 0x80271174: beq         $t3, $t4, L_80271188
    if (ctx->r11 == ctx->r12) {
        // 0x80271178: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80271188;
    }
    // 0x80271178: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8027117C:
    // 0x8027117C: jal         0x80035734
    // 0x80271180: nop

    func_80035734(rdram, ctx);
        goto after_4;
    // 0x80271180: nop

    after_4:
    // 0x80271184: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80271188:
    // 0x80271188: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027118C: jr          $ra
    // 0x80271190: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80271190: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8026F480_func_80271194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271194: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80271198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027119C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802711A0: jal         0x80035770
    // 0x802711A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x802711A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802711A8: jal         0x80037AB8
    // 0x802711AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037AB8(rdram, ctx);
        goto after_1;
    // 0x802711AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x802711B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802711B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802711B8: jr          $ra
    // 0x802711BC: nop

    return;
    // 0x802711BC: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802711C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802711C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802711C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802711C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802711CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802711D0: jal         0x80037908
    // 0x802711D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x802711D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802711D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802711DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802711E0: jr          $ra
    // 0x802711E4: nop

    return;
    // 0x802711E4: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802711E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802711E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802711EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802711F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802711F4: jal         0x8003C16C
    // 0x802711F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003C16C(rdram, ctx);
        goto after_0;
    // 0x802711F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802711FC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80271200: nop

    // 0x80271204: lh          $t6, 0x26($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X26);
    // 0x80271208: nop

    // 0x8027120C: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x80271210: sh          $t7, 0x26($v1)
    MEM_H(0X26, ctx->r3) = ctx->r15;
    // 0x80271214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80271218: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027121C: jr          $ra
    // 0x80271220: nop

    return;
    // 0x80271220: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80271224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271224: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80271228: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027122C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80271230: jal         0x8003C16C
    // 0x80271234: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003C16C(rdram, ctx);
        goto after_0;
    // 0x80271234: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80271238: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8027123C: nop

    // 0x80271240: lh          $t6, 0x26($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X26);
    // 0x80271244: nop

    // 0x80271248: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8027124C: sh          $t7, 0x26($v1)
    MEM_H(0X26, ctx->r3) = ctx->r15;
    // 0x80271250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80271254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80271258: jr          $ra
    // 0x8027125C: nop

    return;
    // 0x8027125C: nop

;}
RECOMP_FUNC void ovl_8026F480_func_80271260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271260: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80271264: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80271268: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027126C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80271270: lh          $v0, 0x24($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X24);
    // 0x80271274: nop

    // 0x80271278: blez        $v0, L_80271290
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8027127C: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_80271290;
    }
    // 0x8027127C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80271280: sh          $t6, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r14;
    // 0x80271284: lh          $a0, 0x24($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X24);
    // 0x80271288: jal         0x8003C138
    // 0x8027128C: nop

    func_8003C138(rdram, ctx);
        goto after_0;
    // 0x8027128C: nop

    after_0:
L_80271290:
    // 0x80271290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80271294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80271298: jr          $ra
    // 0x8027129C: nop

    return;
    // 0x8027129C: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802712A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802712A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802712A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802712A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802712AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802712B0: jal         0x8003EE98
    // 0x802712B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8003EE98(rdram, ctx);
        goto after_0;
    // 0x802712B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802712B8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802712BC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x802712C0: lh          $v1, 0x24($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X24);
    // 0x802712C4: nop

    // 0x802712C8: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x802712CC: beq         $at, $zero, L_802712E4
    if (ctx->r1 == 0) {
        // 0x802712D0: addiu       $t7, $v1, 0x1
        ctx->r15 = ADD32(ctx->r3, 0X1);
            goto L_802712E4;
    }
    // 0x802712D0: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x802712D4: sh          $t7, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r15;
    // 0x802712D8: lh          $a0, 0x24($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X24);
    // 0x802712DC: jal         0x8003C138
    // 0x802712E0: nop

    func_8003C138(rdram, ctx);
        goto after_1;
    // 0x802712E0: nop

    after_1:
L_802712E4:
    // 0x802712E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802712E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802712EC: jr          $ra
    // 0x802712F0: nop

    return;
    // 0x802712F0: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802712F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802712F4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802712F8: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x802712FC: lui         $s6, 0x801B
    ctx->r22 = S32(0X801B << 16);
    // 0x80271300: addiu       $s6, $s6, -0x750
    ctx->r22 = ADD32(ctx->r22, -0X750);
    // 0x80271304: lh          $t6, 0xAA($s6)
    ctx->r14 = MEM_H(ctx->r22, 0XAA);
    // 0x80271308: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8027130C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80271310: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80271314: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80271318: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8027131C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80271320: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80271324: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80271328: bne         $t6, $zero, L_80271338
    if (ctx->r14 != 0) {
        // 0x8027132C: sw          $a1, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r5;
            goto L_80271338;
    }
    // 0x8027132C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80271330: b           L_8027133C
    // 0x80271334: addiu       $s5, $zero, 0x8
    ctx->r21 = ADD32(0, 0X8);
        goto L_8027133C;
    // 0x80271334: addiu       $s5, $zero, 0x8
    ctx->r21 = ADD32(0, 0X8);
L_80271338:
    // 0x80271338: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
L_8027133C:
    // 0x8027133C: blez        $s5, L_802713D8
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80271340: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_802713D8;
    }
    // 0x80271340: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80271344: lui         $s4, 0x8028
    ctx->r20 = S32(0X8028 << 16);
    // 0x80271348: lui         $s3, 0x8027
    ctx->r19 = S32(0X8027 << 16);
    // 0x8027134C: lui         $s2, 0x2
    ctx->r18 = S32(0X2 << 16);
    // 0x80271350: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x80271354: addiu       $s1, $s1, -0x3770
    ctx->r17 = ADD32(ctx->r17, -0X3770);
    // 0x80271358: ori         $s2, $s2, 0xFF88
    ctx->r18 = ctx->r18 | 0XFF88;
    // 0x8027135C: addiu       $s3, $s3, 0x46A0
    ctx->r19 = ADD32(ctx->r19, 0X46A0);
    // 0x80271360: addiu       $s4, $s4, 0x61E8
    ctx->r20 = ADD32(ctx->r20, 0X61E8);
L_80271364:
    // 0x80271364: lh          $t9, 0xAA($s6)
    ctx->r25 = MEM_H(ctx->r22, 0XAA);
    // 0x80271368: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x8027136C: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x80271370: addu        $t1, $s3, $t0
    ctx->r9 = ADD32(ctx->r19, ctx->r8);
    // 0x80271374: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80271378: lbu         $a2, 0x1($t3)
    ctx->r6 = MEM_BU(ctx->r11, 0X1);
    // 0x8027137C: sll         $t7, $s0, 5
    ctx->r15 = S32(ctx->r16 << 5);
    // 0x80271380: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x80271384: addu        $a0, $t8, $s2
    ctx->r4 = ADD32(ctx->r24, ctx->r18);
    // 0x80271388: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8027138C: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x80271390: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80271394: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80271398: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8027139C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802713A0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802713A4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x802713A8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802713AC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802713B0: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802713B4: addiu       $a1, $zero, 0x9A
    ctx->r5 = ADD32(0, 0X9A);
    // 0x802713B8: jal         0x8002F528
    // 0x802713BC: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_8002F528(rdram, ctx);
        goto after_0;
    // 0x802713BC: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_0:
    // 0x802713C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802713C4: sll         $t0, $s0, 16
    ctx->r8 = S32(ctx->r16 << 16);
    // 0x802713C8: sra         $s0, $t0, 16
    ctx->r16 = S32(SIGNED(ctx->r8) >> 16);
    // 0x802713CC: slt         $at, $s0, $s5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x802713D0: bne         $at, $zero, L_80271364
    if (ctx->r1 != 0) {
        // 0x802713D4: nop
    
            goto L_80271364;
    }
    // 0x802713D4: nop

L_802713D8:
    // 0x802713D8: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x802713DC: addiu       $t2, $zero, 0xB0
    ctx->r10 = ADD32(0, 0XB0);
    // 0x802713E0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802713E4: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x802713E8: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
    // 0x802713EC: jal         0x8004A55C
    // 0x802713F0: addiu       $a3, $zero, 0xF8
    ctx->r7 = ADD32(0, 0XF8);
    func_8004A55C(rdram, ctx);
        goto after_1;
    // 0x802713F0: addiu       $a3, $zero, 0xF8
    ctx->r7 = ADD32(0, 0XF8);
    after_1:
    // 0x802713F4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802713F8: jal         0x800296E0
    // 0x802713FC: addiu       $a0, $a0, 0x1428
    ctx->r4 = ADD32(ctx->r4, 0X1428);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x802713FC: addiu       $a0, $a0, 0x1428
    ctx->r4 = ADD32(ctx->r4, 0X1428);
    after_2:
    // 0x80271400: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80271404: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80271408: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8027140C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80271410: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80271414: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80271418: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8027141C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80271420: jr          $ra
    // 0x80271424: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80271424: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_8026F480_func_80271428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80271428: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027142C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80271430: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80271434: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80271438: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8027143C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80271440: jal         0x8003BEC4
    // 0x80271444: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003BEC4(rdram, ctx);
        goto after_0;
    // 0x80271444: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80271448: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8027144C: jal         0x8003BFB4
    // 0x80271450: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8003BFB4(rdram, ctx);
        goto after_1;
    // 0x80271450: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80271454: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80271458: lb          $t7, -0x32A1($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X32A1);
    // 0x8027145C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80271460: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80271464: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80271468: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8027146C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80271470: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80271474: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80271478: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8027147C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80271480: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80271484: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80271488: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8027148C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80271490: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80271494: lh          $t6, -0x6B8($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6B8);
    // 0x80271498: lb          $t9, -0x2F7F($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X2F7F);
    // 0x8027149C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802714A0: slt         $at, $t6, $t9
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x802714A4: bne         $at, $zero, L_802714B8
    if (ctx->r1 != 0) {
        // 0x802714A8: addiu       $t1, $zero, 0xB
        ctx->r9 = ADD32(0, 0XB);
            goto L_802714B8;
    }
    // 0x802714A8: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x802714AC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802714B0: b           L_802714BC
    // 0x802714B4: sb          $t0, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r8;
        goto L_802714BC;
    // 0x802714B4: sb          $t0, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r8;
L_802714B8:
    // 0x802714B8: sb          $t1, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r9;
L_802714BC:
    // 0x802714BC: lbu         $t2, 0x8($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X8);
    // 0x802714C0: nop

    // 0x802714C4: andi        $t3, $t2, 0xFF01
    ctx->r11 = ctx->r10 & 0XFF01;
    // 0x802714C8: ori         $t4, $t3, 0xE
    ctx->r12 = ctx->r11 | 0XE;
    // 0x802714CC: sb          $t4, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r12;
    // 0x802714D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802714D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802714D8: jr          $ra
    // 0x802714DC: nop

    return;
    // 0x802714DC: nop

;}
RECOMP_FUNC void ovl_8026F480_func_802714E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802714E0: jr          $ra
    // 0x802714E4: nop

    return;
    // 0x802714E4: nop

    // 0x802714E8: nop

    // 0x802714EC: nop

;}
