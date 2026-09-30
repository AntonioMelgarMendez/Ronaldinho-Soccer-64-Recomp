#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80021E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021E1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80021E20: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80021E24: lbu         $t6, 0x2B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2B);
    // 0x80021E28: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80021E2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80021E30: lbu         $t7, 0xE30($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0XE30);
    // 0x80021E34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80021E38: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80021E3C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80021E40: bne         $t7, $zero, L_80021E9C
    if (ctx->r15 != 0) {
        // 0x80021E44: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_80021E9C;
    }
    // 0x80021E44: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80021E48: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80021E4C: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80021E50: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80021E54: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80021E58: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x80021E5C: lhu         $a1, 0x8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X8);
    // 0x80021E60: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80021E64: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80021E68: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80021E6C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80021E70: addiu       $t9, $t9, 0xC90
    ctx->r25 = ADD32(ctx->r25, 0XC90);
    // 0x80021E74: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80021E78: addiu       $t1, $t0, 0xA
    ctx->r9 = ADD32(ctx->r8, 0XA);
    // 0x80021E7C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80021E80: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x80021E84: addiu       $a3, $t0, 0xE
    ctx->r7 = ADD32(ctx->r8, 0XE);
    // 0x80021E88: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80021E8C: jal         0x80085150
    // 0x80021E90: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    osPfsAllocateFile_recomp(rdram, ctx);
        goto after_0;
    // 0x80021E90: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_0:
    // 0x80021E94: b           L_80021EAC
    // 0x80021E98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80021EAC;
    // 0x80021E98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80021E9C:
    // 0x80021E9C: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x80021EA0: jal         0x800222C0
    // 0x80021EA4: nop

    func_800222C0(rdram, ctx);
        goto after_1;
    // 0x80021EA4: nop

    after_1:
    // 0x80021EA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80021EAC:
    // 0x80021EAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80021EB0: jr          $ra
    // 0x80021EB4: nop

    return;
    // 0x80021EB4: nop

;}
RECOMP_FUNC void func_80021EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021EB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80021EBC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80021EC0: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x80021EC4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80021EC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80021ECC: lbu         $t7, 0xE30($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0XE30);
    // 0x80021ED0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80021ED4: bne         $t7, $zero, L_80021F20
    if (ctx->r15 != 0) {
        // 0x80021ED8: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_80021F20;
    }
    // 0x80021ED8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80021EDC: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80021EE0: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80021EE4: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80021EE8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80021EEC: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80021EF0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80021EF4: addiu       $t9, $t9, 0xC90
    ctx->r25 = ADD32(ctx->r25, 0XC90);
    // 0x80021EF8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80021EFC: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x80021F00: addiu       $t1, $t0, 0xA
    ctx->r9 = ADD32(ctx->r8, 0XA);
    // 0x80021F04: lhu         $a1, 0x8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X8);
    // 0x80021F08: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80021F0C: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x80021F10: jal         0x80085900
    // 0x80021F14: addiu       $a3, $t0, 0xE
    ctx->r7 = ADD32(ctx->r8, 0XE);
    osPfsDeleteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x80021F14: addiu       $a3, $t0, 0xE
    ctx->r7 = ADD32(ctx->r8, 0XE);
    after_0:
    // 0x80021F18: b           L_80021F30
    // 0x80021F1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80021F30;
    // 0x80021F1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80021F20:
    // 0x80021F20: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x80021F24: jal         0x800222C0
    // 0x80021F28: nop

    func_800222C0(rdram, ctx);
        goto after_1;
    // 0x80021F28: nop

    after_1:
    // 0x80021F2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80021F30:
    // 0x80021F30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80021F34: jr          $ra
    // 0x80021F38: nop

    return;
    // 0x80021F38: nop

;}
RECOMP_FUNC void func_80021F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021F3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80021F40: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80021F44: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x80021F48: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80021F4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80021F50: lbu         $t7, 0xE30($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0XE30);
    // 0x80021F54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80021F58: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80021F5C: bne         $t7, $zero, L_80021FB0
    if (ctx->r15 != 0) {
        // 0x80021F60: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_80021FB0;
    }
    // 0x80021F60: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80021F64: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80021F68: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80021F6C: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80021F70: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80021F74: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80021F78: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80021F7C: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x80021F80: lhu         $a1, 0x8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X8);
    // 0x80021F84: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80021F88: addiu       $t9, $t9, 0xC90
    ctx->r25 = ADD32(ctx->r25, 0XC90);
    // 0x80021F8C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80021F90: addiu       $t1, $t0, 0xA
    ctx->r9 = ADD32(ctx->r8, 0XA);
    // 0x80021F94: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80021F98: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x80021F9C: addiu       $a3, $t0, 0xE
    ctx->r7 = ADD32(ctx->r8, 0XE);
    // 0x80021FA0: jal         0x80085F10
    // 0x80021FA4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    osPfsFindFile_recomp(rdram, ctx);
        goto after_0;
    // 0x80021FA4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_0:
    // 0x80021FA8: b           L_80021FC0
    // 0x80021FAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80021FC0;
    // 0x80021FAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80021FB0:
    // 0x80021FB0: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x80021FB4: jal         0x800222C0
    // 0x80021FB8: nop

    func_800222C0(rdram, ctx);
        goto after_1;
    // 0x80021FB8: nop

    after_1:
    // 0x80021FBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80021FC0:
    // 0x80021FC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80021FC4: jr          $ra
    // 0x80021FC8: nop

    return;
    // 0x80021FC8: nop

;}
RECOMP_FUNC void func_80021FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021FCC: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x80021FD0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80021FD4: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x80021FD8: lbu         $t6, 0xE30($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XE30);
    // 0x80021FDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80021FE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80021FE4: bne         $t6, $zero, L_80022018
    if (ctx->r14 != 0) {
        // 0x80021FE8: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80022018;
    }
    // 0x80021FE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80021FEC: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x80021FF0: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x80021FF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80021FF8: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x80021FFC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80022000: addiu       $t8, $t8, 0xC90
    ctx->r24 = ADD32(ctx->r24, 0XC90);
    // 0x80022004: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80022008: jal         0x800860D0
    // 0x8002200C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    osPfsFileState_recomp(rdram, ctx);
        goto after_0;
    // 0x8002200C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x80022010: b           L_80022024
    // 0x80022014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80022024;
    // 0x80022014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80022018:
    // 0x80022018: jal         0x800222C0
    // 0x8002201C: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    func_800222C0(rdram, ctx);
        goto after_1;
    // 0x8002201C: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    after_1:
    // 0x80022020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80022024:
    // 0x80022024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80022028: jr          $ra
    // 0x8002202C: nop

    return;
    // 0x8002202C: nop

;}
RECOMP_FUNC void func_80022030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80022030: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x80022034: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80022038: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x8002203C: lbu         $t6, 0xE30($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XE30);
    // 0x80022040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80022044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80022048: bne         $t6, $zero, L_8002207C
    if (ctx->r14 != 0) {
        // 0x8002204C: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8002207C;
    }
    // 0x8002204C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80022050: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x80022054: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x80022058: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002205C: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x80022060: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80022064: addiu       $t8, $t8, 0xC90
    ctx->r24 = ADD32(ctx->r24, 0XC90);
    // 0x80022068: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8002206C: jal         0x800863C0
    // 0x80022070: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    osPfsChecker_recomp(rdram, ctx);
        goto after_0;
    // 0x80022070: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x80022074: b           L_80022088
    // 0x80022078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80022088;
    // 0x80022078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002207C:
    // 0x8002207C: jal         0x800222C0
    // 0x80022080: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    func_800222C0(rdram, ctx);
        goto after_1;
    // 0x80022080: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    after_1:
    // 0x80022084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80022088:
    // 0x80022088: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002208C: jr          $ra
    // 0x80022090: nop

    return;
    // 0x80022090: nop

;}
RECOMP_FUNC void func_80022094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80022094: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x80022098: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8002209C: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x800220A0: lbu         $t6, 0xE30($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XE30);
    // 0x800220A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800220A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800220AC: bne         $t6, $zero, L_800220E0
    if (ctx->r14 != 0) {
        // 0x800220B0: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_800220E0;
    }
    // 0x800220B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800220B4: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x800220B8: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x800220BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800220C0: addu        $t7, $t7, $a2
    ctx->r15 = ADD32(ctx->r15, ctx->r6);
    // 0x800220C4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800220C8: addiu       $t8, $t8, 0xC90
    ctx->r24 = ADD32(ctx->r24, 0XC90);
    // 0x800220CC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800220D0: jal         0x80086510
    // 0x800220D4: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    osPfsFreeBlocks_recomp(rdram, ctx);
        goto after_0;
    // 0x800220D4: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x800220D8: b           L_800220EC
    // 0x800220DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800220EC;
    // 0x800220DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800220E0:
    // 0x800220E0: jal         0x800222C0
    // 0x800220E4: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    func_800222C0(rdram, ctx);
        goto after_1;
    // 0x800220E4: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    after_1:
    // 0x800220E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800220EC:
    // 0x800220EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800220F0: jr          $ra
    // 0x800220F4: nop

    return;
    // 0x800220F4: nop

;}
RECOMP_FUNC void func_80022120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80022120: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80022124: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80022128: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x8002212C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80022130: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80022134: lbu         $t7, 0xE30($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0XE30);
    // 0x80022138: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002213C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80022140: bne         $t7, $zero, L_8002218C
    if (ctx->r15 != 0) {
        // 0x80022144: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_8002218C;
    }
    // 0x80022144: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80022148: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8002214C: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80022150: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80022154: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80022158: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8002215C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80022160: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80022164: addiu       $t9, $t9, 0xC90
    ctx->r25 = ADD32(ctx->r25, 0XC90);
    // 0x80022168: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8002216C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80022170: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x80022174: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80022178: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8002217C: jal         0x80086ACC
    // 0x80022180: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    osPfsReadWriteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x80022180: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_0:
    // 0x80022184: b           L_8002219C
    // 0x80022188: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8002219C;
    // 0x80022188: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8002218C:
    // 0x8002218C: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x80022190: jal         0x800222C0
    // 0x80022194: nop

    func_800222C0(rdram, ctx);
        goto after_1;
    // 0x80022194: nop

    after_1:
    // 0x80022198: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8002219C:
    // 0x8002219C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800221A0: jr          $ra
    // 0x800221A4: nop

    return;
    // 0x800221A4: nop

;}
RECOMP_FUNC void func_800221A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800221A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800221AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800221B0: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x800221B4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800221B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800221BC: lbu         $t7, 0xE30($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0XE30);
    // 0x800221C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800221C4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800221C8: bne         $t7, $zero, L_80022214
    if (ctx->r15 != 0) {
        // 0x800221CC: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_80022214;
    }
    // 0x800221CC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800221D0: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800221D4: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x800221D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800221DC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800221E0: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800221E4: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x800221E8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800221EC: addiu       $t9, $t9, 0xC90
    ctx->r25 = ADD32(ctx->r25, 0XC90);
    // 0x800221F0: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800221F4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800221F8: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x800221FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80022200: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80022204: jal         0x80086ACC
    // 0x80022208: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    osPfsReadWriteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x80022208: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_0:
    // 0x8002220C: b           L_80022224
    // 0x80022210: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80022224;
    // 0x80022210: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80022214:
    // 0x80022214: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x80022218: jal         0x800222C0
    // 0x8002221C: nop

    func_800222C0(rdram, ctx);
        goto after_1;
    // 0x8002221C: nop

    after_1:
    // 0x80022220: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80022224:
    // 0x80022224: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80022228: jr          $ra
    // 0x8002222C: nop

    return;
    // 0x8002222C: nop

;}
RECOMP_FUNC void func_800222C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800222C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800222C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800222C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800222CC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800222D0: jal         0x80021C00
    // 0x800222D4: addiu       $a0, $a0, -0x3EA0
    ctx->r4 = ADD32(ctx->r4, -0X3EA0);
    func_80021C00(rdram, ctx);
        goto after_0;
    // 0x800222D4: addiu       $a0, $a0, -0x3EA0
    ctx->r4 = ADD32(ctx->r4, -0X3EA0);
    after_0:
    // 0x800222D8: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x800222DC: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x800222E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800222E4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800222E8: lbu         $t8, -0x3E9E($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X3E9E);
    // 0x800222EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800222F0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x800222F4: beq         $t9, $zero, L_80022304
    if (ctx->r25 == 0) {
        // 0x800222F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80022304;
    }
    // 0x800222F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800222FC: b           L_80022304
    // 0x80022300: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80022304;
    // 0x80022300: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80022304:
    // 0x80022304: jr          $ra
    // 0x80022308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80022308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002230C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002230C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022310: sh          $zero, -0x3AEE($at)
    MEM_H(-0X3AEE, ctx->r1) = 0;
    // 0x80022314: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022318: sh          $zero, -0x3AEC($at)
    MEM_H(-0X3AEC, ctx->r1) = 0;
    // 0x8002231C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022320: sb          $zero, -0x3AF0($at)
    MEM_B(-0X3AF0, ctx->r1) = 0;
    // 0x80022324: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022328: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x8002232C: sb          $t6, -0x3AEF($at)
    MEM_B(-0X3AEF, ctx->r1) = ctx->r14;
    // 0x80022330: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022334: addiu       $t7, $zero, 0x12
    ctx->r15 = ADD32(0, 0X12);
    // 0x80022338: sb          $t7, -0x3AEA($at)
    MEM_B(-0X3AEA, ctx->r1) = ctx->r15;
    // 0x8002233C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022340: sh          $zero, -0x3AE8($at)
    MEM_H(-0X3AE8, ctx->r1) = 0;
    // 0x80022344: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022348: sh          $zero, -0x3AE6($at)
    MEM_H(-0X3AE6, ctx->r1) = 0;
    // 0x8002234C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022350: sb          $zero, -0x3AE4($at)
    MEM_B(-0X3AE4, ctx->r1) = 0;
    // 0x80022354: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80022358: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002235C: sb          $v0, -0x3AE3($at)
    MEM_B(-0X3AE3, ctx->r1) = ctx->r2;
    // 0x80022360: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022364: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80022368: sh          $t8, -0x3AE2($at)
    MEM_H(-0X3AE2, ctx->r1) = ctx->r24;
    // 0x8002236C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022370: sb          $v0, -0x3AE0($at)
    MEM_B(-0X3AE0, ctx->r1) = ctx->r2;
    // 0x80022374: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022378: sb          $zero, -0x3ADF($at)
    MEM_B(-0X3ADF, ctx->r1) = 0;
    // 0x8002237C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80022384: sb          $zero, -0x3ADE($at)
    MEM_B(-0X3ADE, ctx->r1) = 0;
    // 0x80022388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002238C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022390: jal         0x80024834
    // 0x80022394: sb          $zero, -0x3ADD($at)
    MEM_B(-0X3ADD, ctx->r1) = 0;
    func_80024834(rdram, ctx);
        goto after_0;
    // 0x80022394: sb          $zero, -0x3ADD($at)
    MEM_B(-0X3ADD, ctx->r1) = 0;
    after_0:
    // 0x80022398: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8002239C: jal         0x80025A10
    // 0x800223A0: addiu       $a0, $a0, 0x3CB0
    ctx->r4 = ADD32(ctx->r4, 0X3CB0);
    func_80025A10(rdram, ctx);
        goto after_1;
    // 0x800223A0: addiu       $a0, $a0, 0x3CB0
    ctx->r4 = ADD32(ctx->r4, 0X3CB0);
    after_1:
    // 0x800223A4: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800223A8: jal         0x80021C00
    // 0x800223AC: addiu       $a0, $a0, -0x3EA0
    ctx->r4 = ADD32(ctx->r4, -0X3EA0);
    func_80021C00(rdram, ctx);
        goto after_2;
    // 0x800223AC: addiu       $a0, $a0, -0x3EA0
    ctx->r4 = ADD32(ctx->r4, -0X3EA0);
    after_2:
    // 0x800223B0: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x800223B4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800223B8: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800223BC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800223C0: addiu       $a0, $a0, -0x3C90
    ctx->r4 = ADD32(ctx->r4, -0X3C90);
    // 0x800223C4: addiu       $a2, $a2, 0xC90
    ctx->r6 = ADD32(ctx->r6, 0XC90);
    // 0x800223C8: addiu       $a3, $a3, 0xE30
    ctx->r7 = ADD32(ctx->r7, 0XE30);
    // 0x800223CC: addiu       $t0, $t0, -0x3ACC
    ctx->r8 = ADD32(ctx->r8, -0X3ACC);
    // 0x800223D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800223D4: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
L_800223D8:
    // 0x800223D8: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800223DC: addu        $t5, $a3, $v0
    ctx->r13 = ADD32(ctx->r7, ctx->r2);
    // 0x800223E0: addu        $t7, $t0, $v0
    ctx->r15 = ADD32(ctx->r8, ctx->r2);
    // 0x800223E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800223E8: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x800223EC: mflo        $v1
    ctx->r3 = lo;
    // 0x800223F0: addu        $t1, $a2, $v1
    ctx->r9 = ADD32(ctx->r6, ctx->r3);
    // 0x800223F4: addiu       $t4, $t1, 0x60
    ctx->r12 = ADD32(ctx->r9, 0X60);
    // 0x800223F8: addu        $t9, $a0, $v1
    ctx->r25 = ADD32(ctx->r4, ctx->r3);
L_800223FC:
    // 0x800223FC: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x80022400: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80022404: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x80022408: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x8002240C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80022410: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x80022414: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x80022418: bne         $t1, $t4, L_800223FC
    if (ctx->r9 != ctx->r12) {
        // 0x8002241C: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_800223FC;
    }
    // 0x8002241C: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x80022420: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x80022424: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x80022428: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x8002242C: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x80022430: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x80022434: sw          $t4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r12;
    // 0x80022438: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x8002243C: bne         $at, $zero, L_800223D8
    if (ctx->r1 != 0) {
        // 0x80022440: sb          $t6, 0x0($t7)
        MEM_B(0X0, ctx->r15) = ctx->r14;
            goto L_800223D8;
    }
    // 0x80022440: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x80022444: lbu         $t3, 0x0($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X0);
    // 0x80022448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002244C: beq         $t3, $zero, L_8002248C
    if (ctx->r11 == 0) {
        // 0x80022450: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8002248C;
    }
    // 0x80022450: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80022454: lbu         $t2, 0x1($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X1);
    // 0x80022458: nop

    // 0x8002245C: beq         $t2, $zero, L_8002248C
    if (ctx->r10 == 0) {
        // 0x80022460: nop
    
            goto L_8002248C;
    }
    // 0x80022460: nop

    // 0x80022464: lbu         $t4, 0x2($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X2);
    // 0x80022468: nop

    // 0x8002246C: beq         $t4, $zero, L_8002248C
    if (ctx->r12 == 0) {
        // 0x80022470: nop
    
            goto L_8002248C;
    }
    // 0x80022470: nop

    // 0x80022474: lbu         $t1, 0x3($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X3);
    // 0x80022478: nop

    // 0x8002247C: beq         $t1, $zero, L_8002248C
    if (ctx->r9 == 0) {
        // 0x80022480: nop
    
            goto L_8002248C;
    }
    // 0x80022480: nop

    // 0x80022484: b           L_8002248C
    // 0x80022488: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002248C;
    // 0x80022488: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002248C:
    // 0x8002248C: jr          $ra
    // 0x80022490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80022490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80022494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80022494: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x80022498: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8002249C: lbu         $t7, -0x3AE4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3AE4);
    // 0x800224A0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800224A4: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x800224A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800224AC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800224B0: addiu       $s0, $s0, -0x2F98
    ctx->r16 = ADD32(ctx->r16, -0X2F98);
    // 0x800224B4: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x800224B8: sb          $t8, -0x3AE4($at)
    MEM_B(-0X3AE4, ctx->r1) = ctx->r24;
    // 0x800224BC: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x800224C0: lui         $s2, 0x2
    ctx->r18 = S32(0X2 << 16);
    // 0x800224C4: ori         $s2, $s2, 0x8000
    ctx->r18 = ctx->r18 | 0X8000;
    // 0x800224C8: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800224CC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800224D0: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x800224D4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x800224D8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x800224DC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x800224E0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x800224E4: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x800224E8: sb          $t6, 0xCF($sp)
    MEM_B(0XCF, ctx->r29) = ctx->r14;
    // 0x800224EC: addu        $t3, $t9, $s2
    ctx->r11 = ADD32(ctx->r25, ctx->r18);
    // 0x800224F0: lhu         $t4, 0x9AC($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X9AC);
    // 0x800224F4: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x800224F8: bne         $t4, $at, L_80022624
    if (ctx->r12 != ctx->r1) {
        // 0x800224FC: or          $s5, $a0, $zero
        ctx->r21 = ctx->r4 | 0;
            goto L_80022624;
    }
    // 0x800224FC: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80022500: lui         $t5, 0x801B
    ctx->r13 = S32(0X801B << 16);
    // 0x80022504: lbu         $t5, -0x3AE3($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X3AE3);
    // 0x80022508: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002250C: bne         $t5, $zero, L_80022624
    if (ctx->r13 != 0) {
        // 0x80022510: nop
    
            goto L_80022624;
    }
    // 0x80022510: nop

    // 0x80022514: lbu         $t6, -0x3ADE($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3ADE);
    // 0x80022518: nop

    // 0x8002251C: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x80022520: beq         $at, $zero, L_80022624
    if (ctx->r1 == 0) {
        // 0x80022524: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80022624;
    }
    // 0x80022524: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80022528: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002252C: addu        $at, $at, $t6
    gpr jr_addend_80022538 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80022530: lw          $t6, 0x3A60($at)
    ctx->r14 = ADD32(ctx->r1, 0X3A60);
    // 0x80022534: nop

    // 0x80022538: jr          $t6
    // 0x8002253C: nop

    switch (jr_addend_80022538 >> 2) {
        case 0: goto L_80022540; break;
        case 1: goto L_8002257C; break;
        case 2: goto L_8002261C; break;
        case 3: goto L_80022540; break;
        case 4: goto L_8002261C; break;
        default: switch_error(__func__, 0x80022538, 0x800D3A60);
    }
    // 0x8002253C: nop

L_80022540:
    // 0x80022540: lui         $s6, 0x801B
    ctx->r22 = S32(0X801B << 16);
    // 0x80022544: addiu       $s6, $s6, -0x3AEF
    ctx->r22 = ADD32(ctx->r22, -0X3AEF);
    // 0x80022548: lb          $t7, 0x0($s6)
    ctx->r15 = MEM_B(ctx->r22, 0X0);
    // 0x8002254C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80022550: bne         $t7, $at, L_80022568
    if (ctx->r15 != ctx->r1) {
        // 0x80022554: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_80022568;
    }
    // 0x80022554: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80022558: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8002255C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022560: b           L_80022624
    // 0x80022564: sb          $t8, -0x3AE3($at)
    MEM_B(-0X3AE3, ctx->r1) = ctx->r24;
        goto L_80022624;
    // 0x80022564: sb          $t8, -0x3AE3($at)
    MEM_B(-0X3AE3, ctx->r1) = ctx->r24;
L_80022568:
    // 0x80022568: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002256C: sb          $s1, -0x3ADE($at)
    MEM_B(-0X3ADE, ctx->r1) = ctx->r17;
    // 0x80022570: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022574: b           L_80022624
    // 0x80022578: sb          $s1, -0x3ADC($at)
    MEM_B(-0X3ADC, ctx->r1) = ctx->r17;
        goto L_80022624;
    // 0x80022578: sb          $s1, -0x3ADC($at)
    MEM_B(-0X3ADC, ctx->r1) = ctx->r17;
L_8002257C:
    // 0x8002257C: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x80022580: lbu         $t9, -0x3ADC($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3ADC);
    // 0x80022584: nop

    // 0x80022588: bne         $t9, $zero, L_80022610
    if (ctx->r25 != 0) {
        // 0x8002258C: lui         $t3, 0x801B
        ctx->r11 = S32(0X801B << 16);
            goto L_80022610;
    }
    // 0x8002258C: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80022590: lb          $t3, -0x3AF0($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X3AF0);
    // 0x80022594: addiu       $s4, $zero, 0x68
    ctx->r20 = ADD32(0, 0X68);
    // 0x80022598: multu       $t3, $s4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002259C: lui         $s6, 0x801B
    ctx->r22 = S32(0X801B << 16);
    // 0x800225A0: addiu       $s6, $s6, -0x3AEF
    ctx->r22 = ADD32(ctx->r22, -0X3AEF);
    // 0x800225A4: lb          $t5, 0x0($s6)
    ctx->r13 = MEM_B(ctx->r22, 0X0);
    // 0x800225A8: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x800225AC: addiu       $t7, $t7, -0x3E90
    ctx->r15 = ADD32(ctx->r15, -0X3E90);
    // 0x800225B0: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x800225B4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800225B8: lui         $s3, 0x801B
    ctx->r19 = S32(0X801B << 16);
    // 0x800225BC: addiu       $s3, $s3, -0x3C90
    ctx->r19 = ADD32(ctx->r19, -0X3C90);
    // 0x800225C0: lhu         $a1, 0x8($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X8);
    // 0x800225C4: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x800225C8: addiu       $t8, $v0, 0xA
    ctx->r24 = ADD32(ctx->r2, 0XA);
    // 0x800225CC: mflo        $t4
    ctx->r12 = lo;
    // 0x800225D0: addu        $a0, $s3, $t4
    ctx->r4 = ADD32(ctx->r19, ctx->r12);
    // 0x800225D4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800225D8: jal         0x80085900
    // 0x800225DC: addiu       $a3, $v0, 0xE
    ctx->r7 = ADD32(ctx->r2, 0XE);
    osPfsDeleteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x800225DC: addiu       $a3, $v0, 0xE
    ctx->r7 = ADD32(ctx->r2, 0XE);
    after_0:
    // 0x800225E0: beq         $v0, $zero, L_800225F4
    if (ctx->r2 == 0) {
        // 0x800225E4: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_800225F4;
    }
    // 0x800225E4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x800225E8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800225EC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800225F0: sb          $t9, -0x3ADE($at)
    MEM_B(-0X3ADE, ctx->r1) = ctx->r25;
L_800225F4:
    // 0x800225F4: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x800225F8: sb          $t3, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r11;
    // 0x800225FC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022600: sb          $s1, -0x3AE0($at)
    MEM_B(-0X3AE0, ctx->r1) = ctx->r17;
    // 0x80022604: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022608: b           L_80022624
    // 0x8002260C: sb          $zero, -0x3ADE($at)
    MEM_B(-0X3ADE, ctx->r1) = 0;
        goto L_80022624;
    // 0x8002260C: sb          $zero, -0x3ADE($at)
    MEM_B(-0X3ADE, ctx->r1) = 0;
L_80022610:
    // 0x80022610: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022614: b           L_80022624
    // 0x80022618: sb          $zero, -0x3ADE($at)
    MEM_B(-0X3ADE, ctx->r1) = 0;
        goto L_80022624;
    // 0x80022618: sb          $zero, -0x3ADE($at)
    MEM_B(-0X3ADE, ctx->r1) = 0;
L_8002261C:
    // 0x8002261C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022620: sb          $zero, -0x3ADE($at)
    MEM_B(-0X3ADE, ctx->r1) = 0;
L_80022624:
    // 0x80022624: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x80022628: lbu         $t4, -0x3AE3($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X3AE3);
    // 0x8002262C: lui         $s3, 0x801B
    ctx->r19 = S32(0X801B << 16);
    // 0x80022630: lui         $s6, 0x801B
    ctx->r22 = S32(0X801B << 16);
    // 0x80022634: addiu       $s6, $s6, -0x3AEF
    ctx->r22 = ADD32(ctx->r22, -0X3AEF);
    // 0x80022638: addiu       $s3, $s3, -0x3C90
    ctx->r19 = ADD32(ctx->r19, -0X3C90);
    // 0x8002263C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80022640: bne         $t4, $zero, L_8002275C
    if (ctx->r12 != 0) {
        // 0x80022644: addiu       $s4, $zero, 0x68
        ctx->r20 = ADD32(0, 0X68);
            goto L_8002275C;
    }
    // 0x80022644: addiu       $s4, $zero, 0x68
    ctx->r20 = ADD32(0, 0X68);
    // 0x80022648: jal         0x80024834
    // 0x8002264C: nop

    func_80024834(rdram, ctx);
        goto after_1;
    // 0x8002264C: nop

    after_1:
    // 0x80022650: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80022654: addiu       $a2, $a2, -0x3ADE
    ctx->r6 = ADD32(ctx->r6, -0X3ADE);
    // 0x80022658: lbu         $t5, 0x0($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X0);
    // 0x8002265C: nop

    // 0x80022660: sltiu       $at, $t5, 0x5
    ctx->r1 = ctx->r13 < 0X5 ? 1 : 0;
    // 0x80022664: beq         $at, $zero, L_8002275C
    if (ctx->r1 == 0) {
        // 0x80022668: sll         $t5, $t5, 2
        ctx->r13 = S32(ctx->r13 << 2);
            goto L_8002275C;
    }
    // 0x80022668: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8002266C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80022670: addu        $at, $at, $t5
    gpr jr_addend_8002267C = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80022674: lw          $t5, 0x3A74($at)
    ctx->r13 = ADD32(ctx->r1, 0X3A74);
    // 0x80022678: nop

    // 0x8002267C: jr          $t5
    // 0x80022680: nop

    switch (jr_addend_8002267C >> 2) {
        case 0: goto L_80022684; break;
        case 1: goto L_80022724; break;
        case 2: goto L_8002275C; break;
        case 3: goto L_80022684; break;
        case 4: goto L_8002275C; break;
        default: switch_error(__func__, 0x8002267C, 0x800D3A74);
    }
    // 0x80022680: nop

L_80022684:
    // 0x80022684: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80022688: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8002268C: addu        $v1, $t6, $s2
    ctx->r3 = ADD32(ctx->r14, ctx->r18);
    // 0x80022690: lhu         $t7, 0x9AC($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X9AC);
    // 0x80022694: lhu         $a0, -0x3AEC($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X3AEC);
    // 0x80022698: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8002269C: or          $v0, $t7, $a0
    ctx->r2 = ctx->r15 | ctx->r4;
    // 0x800226A0: andi        $t8, $v0, 0x200
    ctx->r24 = ctx->r2 & 0X200;
    // 0x800226A4: beq         $t8, $zero, L_800226E4
    if (ctx->r24 == 0) {
        // 0x800226A8: addiu       $a1, $a1, -0x3AF0
        ctx->r5 = ADD32(ctx->r5, -0X3AF0);
            goto L_800226E4;
    }
    // 0x800226A8: addiu       $a1, $a1, -0x3AF0
    ctx->r5 = ADD32(ctx->r5, -0X3AF0);
    // 0x800226AC: lb          $t9, 0x0($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X0);
    // 0x800226B0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800226B4: addiu       $t3, $t9, -0x1
    ctx->r11 = ADD32(ctx->r25, -0X1);
    // 0x800226B8: sb          $t3, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r11;
    // 0x800226BC: sb          $s1, -0x3AE0($at)
    MEM_B(-0X3AE0, ctx->r1) = ctx->r17;
    // 0x800226C0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800226C4: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x800226C8: sb          $zero, -0x3ADF($at)
    MEM_B(-0X3ADF, ctx->r1) = 0;
    // 0x800226CC: addiu       $s2, $s2, -0x3ADD
    ctx->r18 = ADD32(ctx->r18, -0X3ADD);
    // 0x800226D0: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x800226D4: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    // 0x800226D8: lhu         $t4, 0x9AC($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X9AC);
    // 0x800226DC: nop

    // 0x800226E0: or          $v0, $t4, $a0
    ctx->r2 = ctx->r12 | ctx->r4;
L_800226E4:
    // 0x800226E4: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800226E8: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x800226EC: andi        $t5, $v0, 0x100
    ctx->r13 = ctx->r2 & 0X100;
    // 0x800226F0: addiu       $s2, $s2, -0x3ADD
    ctx->r18 = ADD32(ctx->r18, -0X3ADD);
    // 0x800226F4: beq         $t5, $zero, L_8002275C
    if (ctx->r13 == 0) {
        // 0x800226F8: addiu       $a1, $a1, -0x3AF0
        ctx->r5 = ADD32(ctx->r5, -0X3AF0);
            goto L_8002275C;
    }
    // 0x800226F8: addiu       $a1, $a1, -0x3AF0
    ctx->r5 = ADD32(ctx->r5, -0X3AF0);
    // 0x800226FC: lb          $t6, 0x0($a1)
    ctx->r14 = MEM_B(ctx->r5, 0X0);
    // 0x80022700: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022704: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80022708: sb          $t7, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r15;
    // 0x8002270C: sb          $s1, -0x3AE0($at)
    MEM_B(-0X3AE0, ctx->r1) = ctx->r17;
    // 0x80022710: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022714: sb          $zero, -0x3ADF($at)
    MEM_B(-0X3ADF, ctx->r1) = 0;
    // 0x80022718: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x8002271C: b           L_8002275C
    // 0x80022720: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
        goto L_8002275C;
    // 0x80022720: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
L_80022724:
    // 0x80022724: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80022728: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x8002272C: addu        $t9, $t8, $s2
    ctx->r25 = ADD32(ctx->r24, ctx->r18);
    // 0x80022730: lhu         $t3, 0x9AC($t9)
    ctx->r11 = MEM_HU(ctx->r25, 0X9AC);
    // 0x80022734: lhu         $t4, -0x3AEC($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X3AEC);
    // 0x80022738: nop

    // 0x8002273C: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x80022740: andi        $t6, $t5, 0x300
    ctx->r14 = ctx->r13 & 0X300;
    // 0x80022744: beq         $t6, $zero, L_8002275C
    if (ctx->r14 == 0) {
        // 0x80022748: lui         $t7, 0x801B
        ctx->r15 = S32(0X801B << 16);
            goto L_8002275C;
    }
    // 0x80022748: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8002274C: lbu         $t7, -0x3ADC($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3ADC);
    // 0x80022750: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022754: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x80022758: sb          $t8, -0x3ADC($at)
    MEM_B(-0X3ADC, ctx->r1) = ctx->r24;
L_8002275C:
    // 0x8002275C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80022760: addiu       $a1, $a1, -0x3AF0
    ctx->r5 = ADD32(ctx->r5, -0X3AF0);
    // 0x80022764: lb          $v0, 0x0($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X0);
    // 0x80022768: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x8002276C: bgez        $v0, L_80022784
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80022770: addiu       $s2, $s2, -0x3ADD
        ctx->r18 = ADD32(ctx->r18, -0X3ADD);
            goto L_80022784;
    }
    // 0x80022770: addiu       $s2, $s2, -0x3ADD
    ctx->r18 = ADD32(ctx->r18, -0X3ADD);
    // 0x80022774: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80022778: sb          $t9, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r25;
    // 0x8002277C: lb          $v0, 0x0($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X0);
    // 0x80022780: nop

L_80022784:
    // 0x80022784: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80022788: bne         $at, $zero, L_80022794
    if (ctx->r1 != 0) {
        // 0x8002278C: lui         $a0, 0x801B
        ctx->r4 = S32(0X801B << 16);
            goto L_80022794;
    }
    // 0x8002278C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80022790: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_80022794:
    // 0x80022794: jal         0x80021C00
    // 0x80022798: addiu       $a0, $a0, -0x3EA0
    ctx->r4 = ADD32(ctx->r4, -0X3EA0);
    func_80021C00(rdram, ctx);
        goto after_2;
    // 0x80022798: addiu       $a0, $a0, -0x3EA0
    ctx->r4 = ADD32(ctx->r4, -0X3EA0);
    after_2:
    // 0x8002279C: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x800227A0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800227A4: addiu       $v1, $v1, -0x3ACC
    ctx->r3 = ADD32(ctx->r3, -0X3ACC);
    // 0x800227A8: addiu       $a3, $a3, -0x3EA0
    ctx->r7 = ADD32(ctx->r7, -0X3EA0);
    // 0x800227AC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800227B0:
    // 0x800227B0: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x800227B4: addu        $t4, $a3, $t3
    ctx->r12 = ADD32(ctx->r7, ctx->r11);
    // 0x800227B8: lbu         $t5, 0x2($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X2);
    // 0x800227BC: addu        $t7, $v1, $s0
    ctx->r15 = ADD32(ctx->r3, ctx->r16);
    // 0x800227C0: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x800227C4: beq         $t6, $zero, L_800227D0
    if (ctx->r14 == 0) {
        // 0x800227C8: nop
    
            goto L_800227D0;
    }
    // 0x800227C8: nop

    // 0x800227CC: sb          $s1, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r17;
L_800227D0:
    // 0x800227D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800227D4: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x800227D8: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x800227DC: bne         $at, $zero, L_800227B0
    if (ctx->r1 != 0) {
        // 0x800227E0: or          $s0, $t8, $zero
        ctx->r16 = ctx->r24 | 0;
            goto L_800227B0;
    }
    // 0x800227E0: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x800227E4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800227E8: lb          $v0, -0x3AF0($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3AF0);
    // 0x800227EC: nop

    // 0x800227F0: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x800227F4: addu        $t3, $a3, $t9
    ctx->r11 = ADD32(ctx->r7, ctx->r25);
    // 0x800227F8: lbu         $t4, 0x2($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X2);
    // 0x800227FC: nop

    // 0x80022800: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80022804: beq         $t5, $zero, L_800228DC
    if (ctx->r13 == 0) {
        // 0x80022808: nop
    
            goto L_800228DC;
    }
    // 0x80022808: nop

    // 0x8002280C: multu       $v0, $s4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80022810: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022814: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80022818: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8002281C: sb          $zero, -0x3ADF($at)
    MEM_B(-0X3ADF, ctx->r1) = 0;
    // 0x80022820: addiu       $a2, $a2, -0x3AD0
    ctx->r6 = ADD32(ctx->r6, -0X3AD0);
    // 0x80022824: addiu       $a1, $a1, -0x3AD4
    ctx->r5 = ADD32(ctx->r5, -0X3AD4);
    // 0x80022828: mflo        $t6
    ctx->r14 = lo;
    // 0x8002282C: addu        $a0, $s3, $t6
    ctx->r4 = ADD32(ctx->r19, ctx->r14);
    // 0x80022830: jal         0x800863C0
    // 0x80022834: nop

    osPfsChecker_recomp(rdram, ctx);
        goto after_3;
    // 0x80022834: nop

    after_3:
    // 0x80022838: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8002283C: beq         $v0, $at, L_80022850
    if (ctx->r2 == ctx->r1) {
        // 0x80022840: lui         $t3, 0x801B
        ctx->r11 = S32(0X801B << 16);
            goto L_80022850;
    }
    // 0x80022840: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80022844: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80022848: bne         $v0, $at, L_80022884
    if (ctx->r2 != ctx->r1) {
        // 0x8002284C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80022884;
    }
    // 0x8002284C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_80022850:
    // 0x80022850: lbu         $t7, 0x0($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X0);
    // 0x80022854: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80022858: bne         $t7, $zero, L_80022880
    if (ctx->r15 != 0) {
        // 0x8002285C: lui         $at, 0x801B
        ctx->r1 = S32(0X801B << 16);
            goto L_80022880;
    }
    // 0x8002285C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022860: sb          $s1, -0x3AE0($at)
    MEM_B(-0X3AE0, ctx->r1) = ctx->r17;
    // 0x80022864: sb          $a0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r4;
    // 0x80022868: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002286C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80022870: sb          $t8, -0x3ADE($at)
    MEM_B(-0X3ADE, ctx->r1) = ctx->r24;
    // 0x80022874: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022878: sb          $s1, -0x3ADF($at)
    MEM_B(-0X3ADF, ctx->r1) = ctx->r17;
    // 0x8002287C: sb          $s1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r17;
L_80022880:
    // 0x80022880: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_80022884:
    // 0x80022884: bne         $v0, $at, L_800228A0
    if (ctx->r2 != ctx->r1) {
        // 0x80022888: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_800228A0;
    }
    // 0x80022888: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8002288C: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x80022890: lb          $t9, -0x3AF0($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X3AF0);
    // 0x80022894: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022898: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8002289C: sb          $s1, -0x3ACC($at)
    MEM_B(-0X3ACC, ctx->r1) = ctx->r17;
L_800228A0:
    // 0x800228A0: lb          $t3, -0x3AF0($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X3AF0);
    // 0x800228A4: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x800228A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800228AC: lbu         $t4, -0x3ACC($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X3ACC);
    // 0x800228B0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800228B4: beq         $t4, $zero, L_800228D4
    if (ctx->r12 == 0) {
        // 0x800228B8: addiu       $t5, $zero, 0x3
        ctx->r13 = ADD32(0, 0X3);
            goto L_800228D4;
    }
    // 0x800228B8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800228BC: sb          $s1, -0x3AE0($at)
    MEM_B(-0X3AE0, ctx->r1) = ctx->r17;
    // 0x800228C0: sb          $a0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r4;
    // 0x800228C4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800228C8: sb          $t5, -0x3ADE($at)
    MEM_B(-0X3ADE, ctx->r1) = ctx->r13;
    // 0x800228CC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800228D0: sb          $s1, -0x3ADF($at)
    MEM_B(-0X3ADF, ctx->r1) = ctx->r17;
L_800228D4:
    // 0x800228D4: b           L_800228FC
    // 0x800228D8: nop

        goto L_800228FC;
    // 0x800228D8: nop

L_800228DC:
    // 0x800228DC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800228E0: sb          $s1, -0x3AE0($at)
    MEM_B(-0X3AE0, ctx->r1) = ctx->r17;
    // 0x800228E4: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x800228E8: sb          $t6, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r14;
    // 0x800228EC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800228F0: sb          $zero, -0x3ADE($at)
    MEM_B(-0X3ADE, ctx->r1) = 0;
    // 0x800228F4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800228F8: sb          $s1, -0x3ADF($at)
    MEM_B(-0X3ADF, ctx->r1) = ctx->r17;
L_800228FC:
    // 0x800228FC: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x80022900: lbu         $t7, -0x3ADF($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3ADF);
    // 0x80022904: nop

    // 0x80022908: bne         $t7, $zero, L_80022B0C
    if (ctx->r15 != 0) {
        // 0x8002290C: lui         $t8, 0x801B
        ctx->r24 = S32(0X801B << 16);
            goto L_80022B0C;
    }
    // 0x8002290C: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x80022910: lbu         $t8, -0x3AE0($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X3AE0);
    // 0x80022914: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80022918: beq         $t8, $zero, L_800229D4
    if (ctx->r24 == 0) {
        // 0x8002291C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_800229D4;
    }
    // 0x8002291C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80022920: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x80022924: addiu       $s2, $s2, -0x3AC8
    ctx->r18 = ADD32(ctx->r18, -0X3AC8);
L_80022928:
    // 0x80022928: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x8002292C: lb          $t9, -0x3AF0($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X3AF0);
    // 0x80022930: lui         $t5, 0x801B
    ctx->r13 = S32(0X801B << 16);
    // 0x80022934: multu       $t9, $s4
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80022938: addiu       $t5, $t5, -0x3E90
    ctx->r13 = ADD32(ctx->r13, -0X3E90);
    // 0x8002293C: sll         $t4, $s0, 5
    ctx->r12 = S32(ctx->r16 << 5);
    // 0x80022940: addu        $a2, $t4, $t5
    ctx->r6 = ADD32(ctx->r12, ctx->r13);
    // 0x80022944: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80022948: mflo        $t3
    ctx->r11 = lo;
    // 0x8002294C: addu        $a0, $s3, $t3
    ctx->r4 = ADD32(ctx->r19, ctx->r11);
    // 0x80022950: jal         0x800860D0
    // 0x80022954: nop

    osPfsFileState_recomp(rdram, ctx);
        goto after_4;
    // 0x80022954: nop

    after_4:
    // 0x80022958: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x8002295C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80022960: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x80022964: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x80022968: addu        $t7, $s2, $t6
    ctx->r15 = ADD32(ctx->r18, ctx->r14);
    // 0x8002296C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80022970: bne         $at, $zero, L_80022928
    if (ctx->r1 != 0) {
        // 0x80022974: sw          $v0, 0x0($t7)
        MEM_W(0X0, ctx->r15) = ctx->r2;
            goto L_80022928;
    }
    // 0x80022974: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x80022978: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x8002297C: lb          $t9, -0x3AF0($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X3AF0);
    // 0x80022980: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80022984: multu       $t9, $s4
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80022988: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8002298C: sb          $zero, -0x3AE0($at)
    MEM_B(-0X3AE0, ctx->r1) = 0;
    // 0x80022990: addiu       $a1, $a1, -0x3AD8
    ctx->r5 = ADD32(ctx->r5, -0X3AD8);
    // 0x80022994: mflo        $t3
    ctx->r11 = lo;
    // 0x80022998: addu        $a0, $s3, $t3
    ctx->r4 = ADD32(ctx->r19, ctx->r11);
    // 0x8002299C: jal         0x80086510
    // 0x800229A0: nop

    osPfsFreeBlocks_recomp(rdram, ctx);
        goto after_5;
    // 0x800229A0: nop

    after_5:
    // 0x800229A4: lb          $v1, 0x0($s6)
    ctx->r3 = MEM_B(ctx->r22, 0X0);
    // 0x800229A8: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800229AC: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x800229B0: beq         $at, $zero, L_800229D4
    if (ctx->r1 == 0) {
        // 0x800229B4: addiu       $a1, $a1, -0x3AC8
        ctx->r5 = ADD32(ctx->r5, -0X3AC8);
            goto L_800229D4;
    }
    // 0x800229B4: addiu       $a1, $a1, -0x3AC8
    ctx->r5 = ADD32(ctx->r5, -0X3AC8);
    // 0x800229B8: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x800229BC: addu        $t5, $a1, $t4
    ctx->r13 = ADD32(ctx->r5, ctx->r12);
    // 0x800229C0: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x800229C4: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x800229C8: beq         $t6, $zero, L_800229D4
    if (ctx->r14 == 0) {
        // 0x800229CC: nop
    
            goto L_800229D4;
    }
    // 0x800229CC: nop

    // 0x800229D0: sb          $t7, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r15;
L_800229D4:
    // 0x800229D4: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x800229D8: lbu         $t8, -0x3AE3($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X3AE3);
    // 0x800229DC: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800229E0: addiu       $a1, $a1, -0x3AC8
    ctx->r5 = ADD32(ctx->r5, -0X3AC8);
    // 0x800229E4: bne         $t8, $zero, L_80022B0C
    if (ctx->r24 != 0) {
        // 0x800229E8: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_80022B0C;
    }
    // 0x800229E8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x800229EC: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x800229F0: lbu         $t9, -0x3ADE($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3ADE);
    // 0x800229F4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800229F8: bne         $t9, $zero, L_80022B0C
    if (ctx->r25 != 0) {
        // 0x800229FC: nop
    
            goto L_80022B0C;
    }
    // 0x800229FC: nop

    // 0x80022A00: lhu         $v0, -0x3AE8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3AE8);
    // 0x80022A04: nop

    // 0x80022A08: andi        $t3, $v0, 0x800
    ctx->r11 = ctx->r2 & 0X800;
    // 0x80022A0C: beq         $t3, $zero, L_80022A84
    if (ctx->r11 == 0) {
        // 0x80022A10: andi        $t6, $v0, 0x400
        ctx->r14 = ctx->r2 & 0X400;
            goto L_80022A84;
    }
    // 0x80022A10: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x80022A14: lb          $t4, 0x0($s6)
    ctx->r12 = MEM_B(ctx->r22, 0X0);
    // 0x80022A18: nop

    // 0x80022A1C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80022A20: sb          $t5, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r13;
    // 0x80022A24: lb          $v1, 0x0($s6)
    ctx->r3 = MEM_B(ctx->r22, 0X0);
    // 0x80022A28: nop

    // 0x80022A2C: bgez        $v1, L_80022A3C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80022A30: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_80022A3C;
    }
    // 0x80022A30: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x80022A34: b           L_80022A80
    // 0x80022A38: sb          $a0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r4;
        goto L_80022A80;
    // 0x80022A38: sb          $a0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r4;
L_80022A3C:
    // 0x80022A3C: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x80022A40: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80022A44: nop

    // 0x80022A48: beq         $t8, $zero, L_80022A80
    if (ctx->r24 == 0) {
        // 0x80022A4C: addiu       $t9, $v1, -0x1
        ctx->r25 = ADD32(ctx->r3, -0X1);
            goto L_80022A80;
    }
    // 0x80022A4C: addiu       $t9, $v1, -0x1
    ctx->r25 = ADD32(ctx->r3, -0X1);
L_80022A50:
    // 0x80022A50: sb          $t9, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r25;
    // 0x80022A54: lb          $v1, 0x0($s6)
    ctx->r3 = MEM_B(ctx->r22, 0X0);
    // 0x80022A58: nop

    // 0x80022A5C: bgez        $v1, L_80022A6C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80022A60: sll         $t3, $v1, 2
        ctx->r11 = S32(ctx->r3 << 2);
            goto L_80022A6C;
    }
    // 0x80022A60: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x80022A64: b           L_80022A80
    // 0x80022A68: sb          $a0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r4;
        goto L_80022A80;
    // 0x80022A68: sb          $a0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r4;
L_80022A6C:
    // 0x80022A6C: addu        $t4, $a1, $t3
    ctx->r12 = ADD32(ctx->r5, ctx->r11);
    // 0x80022A70: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80022A74: nop

    // 0x80022A78: bne         $t5, $zero, L_80022A50
    if (ctx->r13 != 0) {
        // 0x80022A7C: addiu       $t9, $v1, -0x1
        ctx->r25 = ADD32(ctx->r3, -0X1);
            goto L_80022A50;
    }
    // 0x80022A7C: addiu       $t9, $v1, -0x1
    ctx->r25 = ADD32(ctx->r3, -0X1);
L_80022A80:
    // 0x80022A80: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
L_80022A84:
    // 0x80022A84: beq         $t6, $zero, L_80022B0C
    if (ctx->r14 == 0) {
        // 0x80022A88: nop
    
            goto L_80022B0C;
    }
    // 0x80022A88: nop

    // 0x80022A8C: lb          $t7, 0x0($s6)
    ctx->r15 = MEM_B(ctx->r22, 0X0);
    // 0x80022A90: nop

    // 0x80022A94: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80022A98: sb          $t8, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r24;
    // 0x80022A9C: lb          $v1, 0x0($s6)
    ctx->r3 = MEM_B(ctx->r22, 0X0);
    // 0x80022AA0: nop

    // 0x80022AA4: slti        $at, $v1, 0x11
    ctx->r1 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x80022AA8: bne         $at, $zero, L_80022ABC
    if (ctx->r1 != 0) {
        // 0x80022AAC: nop
    
            goto L_80022ABC;
    }
    // 0x80022AAC: nop

    // 0x80022AB0: sb          $zero, 0x0($s6)
    MEM_B(0X0, ctx->r22) = 0;
    // 0x80022AB4: lb          $v1, 0x0($s6)
    ctx->r3 = MEM_B(ctx->r22, 0X0);
    // 0x80022AB8: nop

L_80022ABC:
    // 0x80022ABC: beq         $a0, $v1, L_80022B0C
    if (ctx->r4 == ctx->r3) {
        // 0x80022AC0: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_80022B0C;
    }
    // 0x80022AC0: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x80022AC4: addu        $t3, $a1, $t9
    ctx->r11 = ADD32(ctx->r5, ctx->r25);
    // 0x80022AC8: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80022ACC: nop

    // 0x80022AD0: beq         $t4, $zero, L_80022B0C
    if (ctx->r12 == 0) {
        // 0x80022AD4: addiu       $t5, $v1, 0x1
        ctx->r13 = ADD32(ctx->r3, 0X1);
            goto L_80022B0C;
    }
    // 0x80022AD4: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
L_80022AD8:
    // 0x80022AD8: sb          $t5, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r13;
    // 0x80022ADC: lb          $v1, 0x0($s6)
    ctx->r3 = MEM_B(ctx->r22, 0X0);
    // 0x80022AE0: nop

    // 0x80022AE4: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80022AE8: bne         $at, $zero, L_80022AF8
    if (ctx->r1 != 0) {
        // 0x80022AEC: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_80022AF8;
    }
    // 0x80022AEC: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x80022AF0: b           L_80022B0C
    // 0x80022AF4: sb          $a0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r4;
        goto L_80022B0C;
    // 0x80022AF4: sb          $a0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r4;
L_80022AF8:
    // 0x80022AF8: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x80022AFC: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80022B00: nop

    // 0x80022B04: bne         $t8, $zero, L_80022AD8
    if (ctx->r24 != 0) {
        // 0x80022B08: addiu       $t5, $v1, 0x1
        ctx->r13 = ADD32(ctx->r3, 0X1);
            goto L_80022AD8;
    }
    // 0x80022B08: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
L_80022B0C:
    // 0x80022B0C: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x80022B10: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x80022B14: addiu       $t9, $s0, 0x8
    ctx->r25 = ADD32(ctx->r16, 0X8);
    // 0x80022B18: sw          $t9, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r25;
    // 0x80022B1C: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x80022B20: addiu       $t3, $t3, 0x6B10
    ctx->r11 = ADD32(ctx->r11, 0X6B10);
    // 0x80022B24: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x80022B28: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x80022B2C: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x80022B30: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x80022B34: addiu       $t4, $s0, 0x8
    ctx->r12 = ADD32(ctx->r16, 0X8);
    // 0x80022B38: sw          $t4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r12;
    // 0x80022B3C: addiu       $t2, $t2, 0x6B78
    ctx->r10 = ADD32(ctx->r10, 0X6B78);
    // 0x80022B40: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x80022B44: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x80022B48: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x80022B4C: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x80022B50: addiu       $t5, $s0, 0x8
    ctx->r13 = ADD32(ctx->r16, 0X8);
    // 0x80022B54: sw          $t5, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r13;
    // 0x80022B58: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80022B5C: lw          $t7, 0xD4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD4);
    // 0x80022B60: lui         $t9, 0xE800
    ctx->r25 = S32(0XE800 << 16);
    // 0x80022B64: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x80022B68: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x80022B6C: lui         $t4, 0xF500
    ctx->r12 = S32(0XF500 << 16);
    // 0x80022B70: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x80022B74: sw          $t8, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r24;
    // 0x80022B78: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80022B7C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80022B80: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x80022B84: ori         $t4, $t4, 0x100
    ctx->r12 = ctx->r12 | 0X100;
    // 0x80022B88: addiu       $t3, $s0, 0x8
    ctx->r11 = ADD32(ctx->r16, 0X8);
    // 0x80022B8C: sw          $t3, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r11;
    // 0x80022B90: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x80022B94: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x80022B98: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x80022B9C: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x80022BA0: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x80022BA4: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x80022BA8: sw          $t6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r14;
    // 0x80022BAC: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80022BB0: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80022BB4: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x80022BB8: lui         $t3, 0x73F
    ctx->r11 = S32(0X73F << 16);
    // 0x80022BBC: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x80022BC0: sw          $t8, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r24;
    // 0x80022BC4: ori         $t3, $t3, 0xC000
    ctx->r11 = ctx->r11 | 0XC000;
    // 0x80022BC8: lui         $t9, 0xF000
    ctx->r25 = S32(0XF000 << 16);
    // 0x80022BCC: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80022BD0: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x80022BD4: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x80022BD8: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x80022BDC: addiu       $t4, $s0, 0x8
    ctx->r12 = ADD32(ctx->r16, 0X8);
    // 0x80022BE0: sw          $t4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r12;
    // 0x80022BE4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80022BE8: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x80022BEC: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x80022BF0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80022BF4: addiu       $t7, $zero, 0xEF
    ctx->r15 = ADD32(0, 0XEF);
    // 0x80022BF8: addiu       $t6, $zero, 0x13F
    ctx->r14 = ADD32(0, 0X13F);
    // 0x80022BFC: addiu       $a1, $a1, 0x6600
    ctx->r5 = ADD32(ctx->r5, 0X6600);
    // 0x80022C00: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80022C04: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80022C08: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80022C0C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80022C10: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x80022C14: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80022C18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80022C1C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80022C20: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x80022C24: jal         0x800242BC
    // 0x80022C28: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_800242BC(rdram, ctx);
        goto after_6;
    // 0x80022C28: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_6:
    // 0x80022C2C: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x80022C30: addiu       $t9, $zero, 0x16
    ctx->r25 = ADD32(0, 0X16);
    // 0x80022C34: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x80022C38: addiu       $t4, $zero, 0x35
    ctx->r12 = ADD32(0, 0X35);
    // 0x80022C3C: addiu       $t5, $zero, 0x2D
    ctx->r13 = ADD32(0, 0X2D);
    // 0x80022C40: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x80022C44: addiu       $a1, $a1, 0x4600
    ctx->r5 = ADD32(ctx->r5, 0X4600);
    // 0x80022C48: sw          $a1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r5;
    // 0x80022C4C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80022C50: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80022C54: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80022C58: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80022C5C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80022C60: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80022C64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80022C68: jal         0x800242BC
    // 0x80022C6C: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_800242BC(rdram, ctx);
        goto after_7;
    // 0x80022C6C: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_7:
    // 0x80022C70: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x80022C74: ori         $at, $zero, 0x8600
    ctx->r1 = 0 | 0X8600;
    // 0x80022C78: addiu       $t7, $zero, 0x66
    ctx->r15 = ADD32(0, 0X66);
    // 0x80022C7C: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x80022C80: addiu       $t9, $zero, 0x9D
    ctx->r25 = ADD32(0, 0X9D);
    // 0x80022C84: addiu       $t3, $zero, 0x2C
    ctx->r11 = ADD32(0, 0X2C);
    // 0x80022C88: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80022C8C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80022C90: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80022C94: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80022C98: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80022C9C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80022CA0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80022CA4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80022CA8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80022CAC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80022CB0: jal         0x80024544
    // 0x80022CB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80024544(rdram, ctx);
        goto after_8;
    // 0x80022CB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x80022CB8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80022CBC: addiu       $t5, $zero, 0xA7
    ctx->r13 = ADD32(0, 0XA7);
    // 0x80022CC0: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80022CC4: addiu       $t7, $zero, 0xEE
    ctx->r15 = ADD32(0, 0XEE);
    // 0x80022CC8: addiu       $t8, $zero, 0x33
    ctx->r24 = ADD32(0, 0X33);
    // 0x80022CCC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80022CD0: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80022CD4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80022CD8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80022CDC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80022CE0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80022CE4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80022CE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80022CEC: jal         0x80024544
    // 0x80022CF0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80024544(rdram, ctx);
        goto after_9;
    // 0x80022CF0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_9:
    // 0x80022CF4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80022CF8: addiu       $t3, $zero, 0xC6
    ctx->r11 = ADD32(0, 0XC6);
    // 0x80022CFC: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x80022D00: addiu       $t5, $zero, 0xE5
    ctx->r13 = ADD32(0, 0XE5);
    // 0x80022D04: addiu       $t6, $zero, 0x2F
    ctx->r14 = ADD32(0, 0X2F);
    // 0x80022D08: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80022D0C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80022D10: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80022D14: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80022D18: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80022D1C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80022D20: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80022D24: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80022D28: jal         0x800242BC
    // 0x80022D2C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_800242BC(rdram, ctx);
        goto after_10;
    // 0x80022D2C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_10:
    // 0x80022D30: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80022D34: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x80022D38: addiu       $t9, $zero, 0x2D
    ctx->r25 = ADD32(0, 0X2D);
    // 0x80022D3C: addiu       $t3, $zero, 0x7B
    ctx->r11 = ADD32(0, 0X7B);
    // 0x80022D40: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x80022D44: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80022D48: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80022D4C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80022D50: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80022D54: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80022D58: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80022D5C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x80022D60: jal         0x80024544
    // 0x80022D64: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_80024544(rdram, ctx);
        goto after_11;
    // 0x80022D64: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_11:
    // 0x80022D68: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80022D6C: addiu       $t5, $zero, 0xFC
    ctx->r13 = ADD32(0, 0XFC);
    // 0x80022D70: addiu       $t6, $zero, 0x2D
    ctx->r14 = ADD32(0, 0X2D);
    // 0x80022D74: addiu       $t7, $zero, 0x13B
    ctx->r15 = ADD32(0, 0X13B);
    // 0x80022D78: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x80022D7C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80022D80: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80022D84: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80022D88: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80022D8C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80022D90: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80022D94: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x80022D98: jal         0x80024544
    // 0x80022D9C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_80024544(rdram, ctx);
        goto after_12;
    // 0x80022D9C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_12:
    // 0x80022DA0: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80022DA4: addiu       $t9, $zero, 0xE2
    ctx->r25 = ADD32(0, 0XE2);
    // 0x80022DA8: addiu       $t3, $zero, 0xDA
    ctx->r11 = ADD32(0, 0XDA);
    // 0x80022DAC: addiu       $t4, $zero, 0x101
    ctx->r12 = ADD32(0, 0X101);
    // 0x80022DB0: addiu       $t5, $zero, 0xE9
    ctx->r13 = ADD32(0, 0XE9);
    // 0x80022DB4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80022DB8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80022DBC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80022DC0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80022DC4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80022DC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80022DCC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x80022DD0: jal         0x800242BC
    // 0x80022DD4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_800242BC(rdram, ctx);
        goto after_13;
    // 0x80022DD4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_13:
    // 0x80022DD8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80022DDC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80022DE0:
    // 0x80022DE0: lb          $t6, 0x0($s6)
    ctx->r14 = MEM_B(ctx->r22, 0X0);
    // 0x80022DE4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80022DE8: bne         $s1, $t6, L_80022DF8
    if (ctx->r17 != ctx->r14) {
        // 0x80022DEC: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80022DF8;
    }
    // 0x80022DEC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80022DF0: b           L_80022DFC
    // 0x80022DF4: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
        goto L_80022DFC;
    // 0x80022DF4: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_80022DF8:
    // 0x80022DF8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80022DFC:
    // 0x80022DFC: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x80022E00: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80022E04: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80022E08: sll         $a2, $s1, 4
    ctx->r6 = S32(ctx->r17 << 4);
    // 0x80022E0C: andi        $a3, $s1, 0x8
    ctx->r7 = ctx->r17 & 0X8;
    // 0x80022E10: sll         $t8, $a3, 1
    ctx->r24 = S32(ctx->r7 << 1);
    // 0x80022E14: andi        $t7, $a2, 0x7F
    ctx->r15 = ctx->r6 & 0X7F;
    // 0x80022E18: addiu       $t3, $v0, 0x3A
    ctx->r11 = ADD32(ctx->r2, 0X3A);
    // 0x80022E1C: addiu       $t5, $v0, 0x43
    ctx->r13 = ADD32(ctx->r2, 0X43);
    // 0x80022E20: addiu       $t9, $zero, 0x1F
    ctx->r25 = ADD32(0, 0X1F);
    // 0x80022E24: addiu       $t4, $zero, 0x2E
    ctx->r12 = ADD32(0, 0X2E);
    // 0x80022E28: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80022E2C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80022E30: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80022E34: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80022E38: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80022E3C: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80022E40: jal         0x80024038
    // 0x80022E44: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    func_80024038(rdram, ctx);
        goto after_14;
    // 0x80022E44: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    after_14:
    // 0x80022E48: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80022E4C: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x80022E50: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x80022E54: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80022E58: bne         $at, $zero, L_80022DE0
    if (ctx->r1 != 0) {
        // 0x80022E5C: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_80022DE0;
    }
    // 0x80022E5C: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x80022E60: lb          $t7, 0x0($s6)
    ctx->r15 = MEM_B(ctx->r22, 0X0);
    // 0x80022E64: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80022E68: bne         $t6, $t7, L_80022E78
    if (ctx->r14 != ctx->r15) {
        // 0x80022E6C: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80022E78;
    }
    // 0x80022E6C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80022E70: b           L_80022E7C
    // 0x80022E74: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
        goto L_80022E7C;
    // 0x80022E74: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_80022E78:
    // 0x80022E78: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80022E7C:
    // 0x80022E7C: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x80022E80: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80022E84: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80022E88: addiu       $t9, $v0, 0x3A
    ctx->r25 = ADD32(ctx->r2, 0X3A);
    // 0x80022E8C: addiu       $t4, $v0, 0x49
    ctx->r12 = ADD32(ctx->r2, 0X49);
    // 0x80022E90: addiu       $t8, $zero, 0x1F
    ctx->r24 = ADD32(0, 0X1F);
    // 0x80022E94: addiu       $t3, $zero, 0x3E
    ctx->r11 = ADD32(0, 0X3E);
    // 0x80022E98: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80022E9C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80022EA0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80022EA4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80022EA8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80022EAC: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x80022EB0: jal         0x800242BC
    // 0x80022EB4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    func_800242BC(rdram, ctx);
        goto after_15;
    // 0x80022EB4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    after_15:
    // 0x80022EB8: lui         $t5, 0x801B
    ctx->r13 = S32(0X801B << 16);
    // 0x80022EBC: lbu         $t5, -0x3ADF($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X3ADF);
    // 0x80022EC0: nop

    // 0x80022EC4: bne         $t5, $zero, L_80023024
    if (ctx->r13 != 0) {
        // 0x80022EC8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80023024;
    }
    // 0x80022EC8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80022ECC:
    // 0x80022ECC: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x80022ED0: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x80022ED4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80022ED8: lw          $t7, -0x3AC8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3AC8);
    // 0x80022EDC: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x80022EE0: bne         $t7, $zero, L_80022FE4
    if (ctx->r15 != 0) {
        // 0x80022EE4: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80022FE4;
    }
    // 0x80022EE4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80022EE8: lb          $t8, 0x0($s6)
    ctx->r24 = MEM_B(ctx->r22, 0X0);
    // 0x80022EEC: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x80022EF0: bne         $s0, $t8, L_80022F00
    if (ctx->r16 != ctx->r24) {
        // 0x80022EF4: sll         $t9, $s0, 5
        ctx->r25 = S32(ctx->r16 << 5);
            goto L_80022F00;
    }
    // 0x80022EF4: sll         $t9, $s0, 5
    ctx->r25 = S32(ctx->r16 << 5);
    // 0x80022EF8: b           L_80022F04
    // 0x80022EFC: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
        goto L_80022F04;
    // 0x80022EFC: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_80022F00:
    // 0x80022F00: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80022F04:
    // 0x80022F04: sll         $s4, $s1, 2
    ctx->r20 = S32(ctx->r17 << 2);
    // 0x80022F08: addu        $s4, $s4, $s1
    ctx->r20 = ADD32(ctx->r20, ctx->r17);
    // 0x80022F0C: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80022F10: addiu       $t3, $t3, -0x3E90
    ctx->r11 = ADD32(ctx->r11, -0X3E90);
    // 0x80022F14: sll         $s4, $s4, 1
    ctx->r20 = S32(ctx->r20 << 1);
    // 0x80022F18: addiu       $s4, $s4, 0x3A
    ctx->r20 = ADD32(ctx->r20, 0X3A);
    // 0x80022F1C: addu        $s2, $t9, $t3
    ctx->r18 = ADD32(ctx->r25, ctx->r11);
    // 0x80022F20: addiu       $t4, $zero, 0x2C
    ctx->r12 = ADD32(0, 0X2C);
    // 0x80022F24: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80022F28: addiu       $a2, $s2, 0xE
    ctx->r6 = ADD32(ctx->r18, 0XE);
    // 0x80022F2C: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x80022F30: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80022F34: jal         0x80023890
    // 0x80022F38: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    func_80023890(rdram, ctx);
        goto after_16;
    // 0x80022F38: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    after_16:
    // 0x80022F3C: lbu         $t5, 0xA($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0XA);
    // 0x80022F40: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x80022F44: bne         $t5, $zero, L_80022F78
    if (ctx->r13 != 0) {
        // 0x80022F48: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80022F78;
    }
    // 0x80022F48: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80022F4C: lbu         $t6, 0xB($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0XB);
    // 0x80022F50: nop

    // 0x80022F54: bne         $t6, $zero, L_80022F7C
    if (ctx->r14 != 0) {
        // 0x80022F58: addiu       $t9, $zero, 0xCC
        ctx->r25 = ADD32(0, 0XCC);
            goto L_80022F7C;
    }
    // 0x80022F58: addiu       $t9, $zero, 0xCC
    ctx->r25 = ADD32(0, 0XCC);
    // 0x80022F5C: lbu         $t7, 0xC($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0XC);
    // 0x80022F60: nop

    // 0x80022F64: bne         $t7, $zero, L_80022F7C
    if (ctx->r15 != 0) {
        // 0x80022F68: addiu       $t9, $zero, 0xCC
        ctx->r25 = ADD32(0, 0XCC);
            goto L_80022F7C;
    }
    // 0x80022F68: addiu       $t9, $zero, 0xCC
    ctx->r25 = ADD32(0, 0XCC);
    // 0x80022F6C: lbu         $t8, 0xD($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0XD);
    // 0x80022F70: nop

    // 0x80022F74: beq         $t8, $zero, L_80022F94
    if (ctx->r24 == 0) {
        // 0x80022F78: addiu       $t9, $zero, 0xCC
        ctx->r25 = ADD32(0, 0XCC);
            goto L_80022F94;
    }
L_80022F78:
    // 0x80022F78: addiu       $t9, $zero, 0xCC
    ctx->r25 = ADD32(0, 0XCC);
L_80022F7C:
    // 0x80022F7C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80022F80: addiu       $a2, $sp, 0xCF
    ctx->r6 = ADD32(ctx->r29, 0XCF);
    // 0x80022F84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80022F88: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x80022F8C: jal         0x80023890
    // 0x80022F90: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    func_80023890(rdram, ctx);
        goto after_17;
    // 0x80022F90: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    after_17:
L_80022F94:
    // 0x80022F94: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x80022F98: addiu       $t3, $zero, 0xD6
    ctx->r11 = ADD32(0, 0XD6);
    // 0x80022F9C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80022FA0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80022FA4: addiu       $a2, $s2, 0xA
    ctx->r6 = ADD32(ctx->r18, 0XA);
    // 0x80022FA8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x80022FAC: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x80022FB0: jal         0x80023890
    // 0x80022FB4: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    func_80023890(rdram, ctx);
        goto after_18;
    // 0x80022FB4: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    after_18:
    // 0x80022FB8: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x80022FBC: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x80022FC0: addiu       $a2, $a2, 0xFF
    ctx->r6 = ADD32(ctx->r6, 0XFF);
    // 0x80022FC4: andi        $t4, $a2, 0xFFFF
    ctx->r12 = ctx->r6 & 0XFFFF;
    // 0x80022FC8: sra         $t5, $t4, 8
    ctx->r13 = S32(SIGNED(ctx->r12) >> 8);
    // 0x80022FCC: andi        $a2, $t5, 0xFFFF
    ctx->r6 = ctx->r13 & 0XFFFF;
    // 0x80022FD0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80022FD4: addiu       $a3, $zero, 0x108
    ctx->r7 = ADD32(0, 0X108);
    // 0x80022FD8: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x80022FDC: jal         0x80023BF8
    // 0x80022FE0: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    func_80023BF8(rdram, ctx);
        goto after_19;
    // 0x80022FE0: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    after_19:
L_80022FE4:
    // 0x80022FE4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80022FE8: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x80022FEC: slti        $at, $t7, 0x10
    ctx->r1 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x80022FF0: bne         $at, $zero, L_80022ECC
    if (ctx->r1 != 0) {
        // 0x80022FF4: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_80022ECC;
    }
    // 0x80022FF4: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80022FF8: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80022FFC: lhu         $a2, -0x3AD6($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X3AD6);
    // 0x80023000: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x80023004: addiu       $t3, $zero, 0xDA
    ctx->r11 = ADD32(0, 0XDA);
    // 0x80023008: sra         $t8, $a2, 8
    ctx->r24 = S32(SIGNED(ctx->r6) >> 8);
    // 0x8002300C: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    // 0x80023010: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80023014: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80023018: addiu       $a3, $zero, 0x104
    ctx->r7 = ADD32(0, 0X104);
    // 0x8002301C: jal         0x80023BF8
    // 0x80023020: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80023BF8(rdram, ctx);
        goto after_20;
    // 0x80023020: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_20:
L_80023024:
    // 0x80023024: lb          $v0, 0x0($s6)
    ctx->r2 = MEM_B(ctx->r22, 0X0);
    // 0x80023028: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x8002302C: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x80023030: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x80023034: sll         $v0, $t5, 1
    ctx->r2 = S32(ctx->r13 << 1);
    // 0x80023038: addiu       $t6, $v0, 0x3C
    ctx->r14 = ADD32(ctx->r2, 0X3C);
    // 0x8002303C: addiu       $t8, $v0, 0x45
    ctx->r24 = ADD32(ctx->r2, 0X45);
    // 0x80023040: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x80023044: addiu       $t7, $zero, 0x23
    ctx->r15 = ADD32(0, 0X23);
    // 0x80023048: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8002304C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80023050: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80023054: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80023058: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8002305C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80023060: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80023064: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80023068: jal         0x80024038
    // 0x8002306C: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_80024038(rdram, ctx);
        goto after_21;
    // 0x8002306C: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_21:
    // 0x80023070: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80023074: lbu         $t3, -0x3AE4($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X3AE4);
    // 0x80023078: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8002307C: andi        $t4, $t3, 0x4
    ctx->r12 = ctx->r11 & 0X4;
    // 0x80023080: beq         $t4, $zero, L_800230F0
    if (ctx->r12 == 0) {
        // 0x80023084: nop
    
            goto L_800230F0;
    }
    // 0x80023084: nop

    // 0x80023088: lb          $v0, -0x3AF0($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3AF0);
    // 0x8002308C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80023090: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x80023094: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x80023098: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x8002309C: addiu       $s0, $s0, 0x71
    ctx->r16 = ADD32(ctx->r16, 0X71);
    // 0x800230A0: andi        $t5, $s0, 0xFF
    ctx->r13 = ctx->r16 & 0XFF;
    // 0x800230A4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x800230A8: bne         $at, $zero, L_800230BC
    if (ctx->r1 != 0) {
        // 0x800230AC: or          $s0, $t5, $zero
        ctx->r16 = ctx->r13 | 0;
            goto L_800230BC;
    }
    // 0x800230AC: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x800230B0: addiu       $s0, $t5, 0x8
    ctx->r16 = ADD32(ctx->r13, 0X8);
    // 0x800230B4: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x800230B8: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
L_800230BC:
    // 0x800230BC: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x800230C0: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x800230C4: addiu       $t8, $s0, 0xF
    ctx->r24 = ADD32(ctx->r16, 0XF);
    // 0x800230C8: addiu       $t9, $zero, 0x2F
    ctx->r25 = ADD32(0, 0X2F);
    // 0x800230CC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800230D0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x800230D4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800230D8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800230DC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800230E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800230E4: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    // 0x800230E8: jal         0x80024038
    // 0x800230EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80024038(rdram, ctx);
        goto after_22;
    // 0x800230EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_22:
L_800230F0:
    // 0x800230F0: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x800230F4: lb          $a2, -0x3AF0($a2)
    ctx->r6 = MEM_B(ctx->r6, -0X3AF0);
    // 0x800230F8: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x800230FC: addiu       $t5, $zero, 0xB4
    ctx->r13 = ADD32(0, 0XB4);
    // 0x80023100: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x80023104: addiu       $t7, $zero, 0xC3
    ctx->r15 = ADD32(0, 0XC3);
    // 0x80023108: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x8002310C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80023110: sll         $t4, $a2, 4
    ctx->r12 = S32(ctx->r6 << 4);
    // 0x80023114: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x80023118: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8002311C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80023120: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80023124: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80023128: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8002312C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80023130: jal         0x80024038
    // 0x80023134: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80024038(rdram, ctx);
        goto after_23;
    // 0x80023134: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_23:
    // 0x80023138: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8002313C: lb          $a2, -0x3AF0($a2)
    ctx->r6 = MEM_B(ctx->r6, -0X3AF0);
    // 0x80023140: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80023144: addiu       $t4, $zero, 0xB4
    ctx->r12 = ADD32(0, 0XB4);
    // 0x80023148: addiu       $t5, $zero, 0x21
    ctx->r13 = ADD32(0, 0X21);
    // 0x8002314C: addiu       $t6, $zero, 0xC3
    ctx->r14 = ADD32(0, 0XC3);
    // 0x80023150: addiu       $t7, $zero, 0x30
    ctx->r15 = ADD32(0, 0X30);
    // 0x80023154: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80023158: sll         $t3, $a2, 4
    ctx->r11 = S32(ctx->r6 << 4);
    // 0x8002315C: addiu       $a2, $t3, 0x40
    ctx->r6 = ADD32(ctx->r11, 0X40);
    // 0x80023160: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80023164: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80023168: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8002316C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80023170: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80023174: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80023178: jal         0x80024038
    // 0x8002317C: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_80024038(rdram, ctx);
        goto after_24;
    // 0x8002317C: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_24:
    // 0x80023180: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80023184: lb          $v0, -0x3AF0($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3AF0);
    // 0x80023188: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x8002318C: addiu       $t3, $t3, -0x3EA0
    ctx->r11 = ADD32(ctx->r11, -0X3EA0);
    // 0x80023190: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80023194: addu        $v1, $t9, $t3
    ctx->r3 = ADD32(ctx->r25, ctx->r11);
    // 0x80023198: lbu         $t4, 0x3($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X3);
    // 0x8002319C: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x800231A0: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x800231A4: beq         $t5, $zero, L_800231E8
    if (ctx->r13 == 0) {
        // 0x800231A8: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_800231E8;
    }
    // 0x800231A8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800231AC: addiu       $t6, $zero, 0xCA
    ctx->r14 = ADD32(0, 0XCA);
    // 0x800231B0: addiu       $t7, $zero, 0x15
    ctx->r15 = ADD32(0, 0X15);
    // 0x800231B4: addiu       $t8, $zero, 0xD9
    ctx->r24 = ADD32(0, 0XD9);
    // 0x800231B8: addiu       $t9, $zero, 0x24
    ctx->r25 = ADD32(0, 0X24);
    // 0x800231BC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800231C0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x800231C4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800231C8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800231CC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800231D0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800231D4: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    // 0x800231D8: jal         0x80024038
    // 0x800231DC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80024038(rdram, ctx);
        goto after_25;
    // 0x800231DC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_25:
    // 0x800231E0: b           L_80023248
    // 0x800231E4: nop

        goto L_80023248;
    // 0x800231E4: nop

L_800231E8:
    // 0x800231E8: lbu         $t4, 0x2($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2);
    // 0x800231EC: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x800231F0: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x800231F4: beq         $t5, $zero, L_8002320C
    if (ctx->r13 == 0) {
        // 0x800231F8: addu        $t6, $t6, $v0
        ctx->r14 = ADD32(ctx->r14, ctx->r2);
            goto L_8002320C;
    }
    // 0x800231F8: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x800231FC: lbu         $t6, -0x3ACC($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3ACC);
    // 0x80023200: nop

    // 0x80023204: beq         $t6, $zero, L_80023248
    if (ctx->r14 == 0) {
        // 0x80023208: nop
    
            goto L_80023248;
    }
    // 0x80023208: nop

L_8002320C:
    // 0x8002320C: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80023210: addiu       $t7, $zero, 0xCB
    ctx->r15 = ADD32(0, 0XCB);
    // 0x80023214: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x80023218: addiu       $t9, $zero, 0xDA
    ctx->r25 = ADD32(0, 0XDA);
    // 0x8002321C: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x80023220: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80023224: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80023228: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8002322C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80023230: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80023234: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80023238: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8002323C: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x80023240: jal         0x80024038
    // 0x80023244: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80024038(rdram, ctx);
        goto after_26;
    // 0x80023244: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_26:
L_80023248:
    // 0x80023248: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8002324C: lbu         $v0, -0x3ADE($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3ADE);
    // 0x80023250: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80023254: bne         $v0, $at, L_80023420
    if (ctx->r2 != ctx->r1) {
        // 0x80023258: lui         $s3, 0x8011
        ctx->r19 = S32(0X8011 << 16);
            goto L_80023420;
    }
    // 0x80023258: lui         $s3, 0x8011
    ctx->r19 = S32(0X8011 << 16);
    // 0x8002325C: lb          $v1, 0x0($s6)
    ctx->r3 = MEM_B(ctx->r22, 0X0);
    // 0x80023260: addiu       $s3, $s3, -0x2F94
    ctx->r19 = ADD32(ctx->r19, -0X2F94);
    // 0x80023264: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x80023268: bne         $at, $zero, L_8002327C
    if (ctx->r1 != 0) {
        // 0x8002326C: lui         $s4, 0x800A
        ctx->r20 = S32(0X800A << 16);
            goto L_8002327C;
    }
    // 0x8002326C: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x80023270: slti        $at, $v1, 0xD
    ctx->r1 = SIGNED(ctx->r3) < 0XD ? 1 : 0;
    // 0x80023274: bne         $at, $zero, L_80023288
    if (ctx->r1 != 0) {
        // 0x80023278: slti        $at, $v1, 0x9
        ctx->r1 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
            goto L_80023288;
    }
    // 0x80023278: slti        $at, $v1, 0x9
    ctx->r1 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
L_8002327C:
    // 0x8002327C: b           L_80023298
    // 0x80023280: addiu       $s1, $zero, 0x6A
    ctx->r17 = ADD32(0, 0X6A);
        goto L_80023298;
    // 0x80023280: addiu       $s1, $zero, 0x6A
    ctx->r17 = ADD32(0, 0X6A);
    // 0x80023284: slti        $at, $v1, 0x9
    ctx->r1 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
L_80023288:
    // 0x80023288: bne         $at, $zero, L_80023298
    if (ctx->r1 != 0) {
        // 0x8002328C: addiu       $s1, $zero, 0x90
        ctx->r17 = ADD32(0, 0X90);
            goto L_80023298;
    }
    // 0x8002328C: addiu       $s1, $zero, 0x90
    ctx->r17 = ADD32(0, 0X90);
    // 0x80023290: b           L_80023298
    // 0x80023294: addiu       $s1, $zero, 0x44
    ctx->r17 = ADD32(0, 0X44);
        goto L_80023298;
    // 0x80023294: addiu       $s1, $zero, 0x44
    ctx->r17 = ADD32(0, 0X44);
L_80023298:
    // 0x80023298: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x8002329C: addiu       $s4, $s4, 0x6BA0
    ctx->r20 = ADD32(ctx->r20, 0X6BA0);
    // 0x800232A0: addiu       $t5, $s0, 0x8
    ctx->r13 = ADD32(ctx->r16, 0X8);
    // 0x800232A4: sw          $t5, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r13;
    // 0x800232A8: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x800232AC: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800232B0: sw          $s4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r20;
    // 0x800232B4: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x800232B8: lui         $s6, 0xFA00
    ctx->r22 = S32(0XFA00 << 16);
    // 0x800232BC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800232C0: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    // 0x800232C4: addiu       $t8, $zero, -0x20
    ctx->r24 = ADD32(0, -0X20);
    // 0x800232C8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800232CC: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x800232D0: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x800232D4: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x800232D8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800232DC: addiu       $s2, $s1, 0x3F
    ctx->r18 = ADD32(ctx->r17, 0X3F);
    // 0x800232E0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800232E4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x800232E8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800232EC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x800232F0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800232F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800232F8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800232FC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80023300: jal         0x80024038
    // 0x80023304: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80024038(rdram, ctx);
        goto after_27;
    // 0x80023304: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_27:
    // 0x80023308: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x8002330C: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x80023310: addiu       $t5, $s0, 0x8
    ctx->r13 = ADD32(ctx->r16, 0X8);
    // 0x80023314: sw          $t5, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r13;
    // 0x80023318: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x8002331C: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x80023320: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x80023324: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x80023328: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x8002332C: addiu       $t8, $zero, 0x88
    ctx->r24 = ADD32(0, 0X88);
    // 0x80023330: addiu       $t9, $s1, 0x8
    ctx->r25 = ADD32(ctx->r17, 0X8);
    // 0x80023334: addiu       $t3, $zero, 0xB7
    ctx->r11 = ADD32(0, 0XB7);
    // 0x80023338: addiu       $t4, $s1, 0x17
    ctx->r12 = ADD32(ctx->r17, 0X17);
    // 0x8002333C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80023340: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80023344: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80023348: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8002334C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80023350: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80023354: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80023358: jal         0x80024544
    // 0x8002335C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80024544(rdram, ctx);
        goto after_28;
    // 0x8002335C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_28:
    // 0x80023360: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80023364: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x80023368: addiu       $t7, $zero, 0xBF
    ctx->r15 = ADD32(0, 0XBF);
    // 0x8002336C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80023370: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80023374: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80023378: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8002337C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80023380: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80023384: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80023388: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8002338C: jal         0x80024544
    // 0x80023390: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_80024544(rdram, ctx);
        goto after_29;
    // 0x80023390: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_29:
    // 0x80023394: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80023398: addiu       $t9, $zero, 0xC0
    ctx->r25 = ADD32(0, 0XC0);
    // 0x8002339C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800233A0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800233A4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x800233A8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x800233AC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800233B0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800233B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800233B8: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x800233BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800233C0: jal         0x80024544
    // 0x800233C4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_80024544(rdram, ctx);
        goto after_30;
    // 0x800233C4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_30:
    // 0x800233C8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800233CC: lbu         $v0, -0x3ADC($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3ADC);
    // 0x800233D0: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x800233D4: sll         $t5, $v0, 6
    ctx->r13 = S32(ctx->r2 << 6);
    // 0x800233D8: addiu       $t6, $t5, 0x60
    ctx->r14 = ADD32(ctx->r13, 0X60);
    // 0x800233DC: addiu       $t8, $t5, 0x6F
    ctx->r24 = ADD32(ctx->r13, 0X6F);
    // 0x800233E0: addiu       $t7, $s1, 0x28
    ctx->r15 = ADD32(ctx->r17, 0X28);
    // 0x800233E4: addiu       $t9, $s1, 0x37
    ctx->r25 = ADD32(ctx->r17, 0X37);
    // 0x800233E8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800233EC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x800233F0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800233F4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800233F8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800233FC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80023400: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x80023404: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80023408: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8002340C: jal         0x80024038
    // 0x80023410: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_80024038(rdram, ctx);
        goto after_31;
    // 0x80023410: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_31:
    // 0x80023414: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80023418: lbu         $v0, -0x3ADE($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3ADE);
    // 0x8002341C: nop

L_80023420:
    // 0x80023420: lui         $s3, 0x8011
    ctx->r19 = S32(0X8011 << 16);
    // 0x80023424: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x80023428: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002342C: addiu       $s4, $s4, 0x6BA0
    ctx->r20 = ADD32(ctx->r20, 0X6BA0);
    // 0x80023430: addiu       $s3, $s3, -0x2F94
    ctx->r19 = ADD32(ctx->r19, -0X2F94);
    // 0x80023434: bne         $v0, $at, L_80023554
    if (ctx->r2 != ctx->r1) {
        // 0x80023438: lui         $s6, 0xFA00
        ctx->r22 = S32(0XFA00 << 16);
            goto L_80023554;
    }
    // 0x80023438: lui         $s6, 0xFA00
    ctx->r22 = S32(0XFA00 << 16);
    // 0x8002343C: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x80023440: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x80023444: addiu       $t4, $s0, 0x8
    ctx->r12 = ADD32(ctx->r16, 0X8);
    // 0x80023448: sw          $t4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r12;
    // 0x8002344C: sw          $s4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r20;
    // 0x80023450: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x80023454: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80023458: addiu       $t7, $zero, -0x20
    ctx->r15 = ADD32(0, -0X20);
    // 0x8002345C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80023460: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
    // 0x80023464: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80023468: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x8002346C: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80023470: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80023474: addiu       $t4, $zero, 0x97
    ctx->r12 = ADD32(0, 0X97);
    // 0x80023478: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x8002347C: addiu       $t9, $zero, 0x70
    ctx->r25 = ADD32(0, 0X70);
    // 0x80023480: addiu       $t3, $zero, 0x10F
    ctx->r11 = ADD32(0, 0X10F);
    // 0x80023484: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80023488: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8002348C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80023490: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80023494: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80023498: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8002349C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x800234A0: jal         0x80024038
    // 0x800234A4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80024038(rdram, ctx);
        goto after_32;
    // 0x800234A4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_32:
    // 0x800234A8: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x800234AC: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x800234B0: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x800234B4: sw          $t6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r14;
    // 0x800234B8: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x800234BC: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x800234C0: ori         $at, $zero, 0x9800
    ctx->r1 = 0 | 0X9800;
    // 0x800234C4: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x800234C8: lw          $s1, 0xD4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XD4);
    // 0x800234CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800234D0: addiu       $t9, $zero, 0x30
    ctx->r25 = ADD32(0, 0X30);
    // 0x800234D4: addiu       $t3, $zero, 0x70
    ctx->r11 = ADD32(0, 0X70);
    // 0x800234D8: addiu       $t4, $zero, 0xAF
    ctx->r12 = ADD32(0, 0XAF);
    // 0x800234DC: addiu       $t5, $zero, 0x97
    ctx->r13 = ADD32(0, 0X97);
    // 0x800234E0: addu        $s1, $s1, $at
    ctx->r17 = ADD32(ctx->r17, ctx->r1);
    // 0x800234E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800234E8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x800234EC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800234F0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x800234F4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800234F8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800234FC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80023500: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80023504: jal         0x80024544
    // 0x80023508: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80024544(rdram, ctx);
        goto after_33;
    // 0x80023508: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_33:
    // 0x8002350C: addiu       $t7, $zero, 0xB0
    ctx->r15 = ADD32(0, 0XB0);
    // 0x80023510: addiu       $t8, $zero, 0x70
    ctx->r24 = ADD32(0, 0X70);
    // 0x80023514: addiu       $t9, $zero, 0x10F
    ctx->r25 = ADD32(0, 0X10F);
    // 0x80023518: addiu       $t3, $zero, 0x97
    ctx->r11 = ADD32(0, 0X97);
    // 0x8002351C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80023520: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80023524: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80023528: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8002352C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80023530: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80023534: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80023538: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8002353C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80023540: jal         0x80024544
    // 0x80023544: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80024544(rdram, ctx);
        goto after_34;
    // 0x80023544: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_34:
    // 0x80023548: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8002354C: lbu         $v0, -0x3ADE($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3ADE);
    // 0x80023550: nop

L_80023554:
    // 0x80023554: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80023558: bne         $v0, $at, L_800235EC
    if (ctx->r2 != ctx->r1) {
        // 0x8002355C: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_800235EC;
    }
    // 0x8002355C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80023560: lw          $s0, 0xD4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD4);
    // 0x80023564: ori         $at, $zero, 0xB200
    ctx->r1 = 0 | 0XB200;
    // 0x80023568: addiu       $t5, $zero, 0x38
    ctx->r13 = ADD32(0, 0X38);
    // 0x8002356C: addiu       $t6, $zero, 0x70
    ctx->r14 = ADD32(0, 0X70);
    // 0x80023570: addiu       $t7, $zero, 0xB7
    ctx->r15 = ADD32(0, 0XB7);
    // 0x80023574: addiu       $t8, $zero, 0x97
    ctx->r24 = ADD32(0, 0X97);
    // 0x80023578: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8002357C: addu        $s0, $s0, $at
    ctx->r16 = ADD32(ctx->r16, ctx->r1);
    // 0x80023580: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80023584: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80023588: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8002358C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80023590: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80023594: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80023598: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002359C: jal         0x80024544
    // 0x800235A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80024544(rdram, ctx);
        goto after_35;
    // 0x800235A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_35:
    // 0x800235A4: addiu       $t3, $zero, 0xB8
    ctx->r11 = ADD32(0, 0XB8);
    // 0x800235A8: addiu       $t4, $zero, 0x70
    ctx->r12 = ADD32(0, 0X70);
    // 0x800235AC: addiu       $t5, $zero, 0x107
    ctx->r13 = ADD32(0, 0X107);
    // 0x800235B0: addiu       $t6, $zero, 0x97
    ctx->r14 = ADD32(0, 0X97);
    // 0x800235B4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800235B8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x800235BC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800235C0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x800235C4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800235C8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800235CC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800235D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800235D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800235D8: jal         0x80024544
    // 0x800235DC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80024544(rdram, ctx);
        goto after_36;
    // 0x800235DC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_36:
    // 0x800235E0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800235E4: lbu         $v0, -0x3ADE($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3ADE);
    // 0x800235E8: nop

L_800235EC:
    // 0x800235EC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800235F0: bne         $v0, $at, L_80023700
    if (ctx->r2 != ctx->r1) {
        // 0x800235F4: lui         $t9, 0x600
        ctx->r25 = S32(0X600 << 16);
            goto L_80023700;
    }
    // 0x800235F4: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x800235F8: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x800235FC: addiu       $t4, $zero, -0x20
    ctx->r12 = ADD32(0, -0X20);
    // 0x80023600: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x80023604: sw          $t8, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r24;
    // 0x80023608: sw          $s4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r20;
    // 0x8002360C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80023610: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80023614: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80023618: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x8002361C: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
    // 0x80023620: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80023624: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x80023628: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x8002362C: addiu       $t8, $zero, 0x97
    ctx->r24 = ADD32(0, 0X97);
    // 0x80023630: addiu       $t5, $zero, 0x34
    ctx->r13 = ADD32(0, 0X34);
    // 0x80023634: addiu       $t6, $zero, 0x70
    ctx->r14 = ADD32(0, 0X70);
    // 0x80023638: addiu       $t7, $zero, 0x10B
    ctx->r15 = ADD32(0, 0X10B);
    // 0x8002363C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80023640: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80023644: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80023648: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8002364C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80023650: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80023654: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80023658: jal         0x80024038
    // 0x8002365C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80024038(rdram, ctx);
        goto after_37;
    // 0x8002365C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_37:
    // 0x80023660: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x80023664: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x80023668: addiu       $t3, $s0, 0x8
    ctx->r11 = ADD32(ctx->r16, 0X8);
    // 0x8002366C: sw          $t3, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r11;
    // 0x80023670: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x80023674: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x80023678: ori         $at, $zero, 0xCC00
    ctx->r1 = 0 | 0XCC00;
    // 0x8002367C: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x80023680: lw          $s1, 0xD4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XD4);
    // 0x80023684: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80023688: addiu       $t6, $zero, 0x34
    ctx->r14 = ADD32(0, 0X34);
    // 0x8002368C: addiu       $t7, $zero, 0x70
    ctx->r15 = ADD32(0, 0X70);
    // 0x80023690: addiu       $t8, $zero, 0xB3
    ctx->r24 = ADD32(0, 0XB3);
    // 0x80023694: addiu       $t9, $zero, 0x97
    ctx->r25 = ADD32(0, 0X97);
    // 0x80023698: addu        $s1, $s1, $at
    ctx->r17 = ADD32(ctx->r17, ctx->r1);
    // 0x8002369C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800236A0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800236A4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800236A8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800236AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800236B0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x800236B4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800236B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800236BC: jal         0x80024544
    // 0x800236C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80024544(rdram, ctx);
        goto after_38;
    // 0x800236C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_38:
    // 0x800236C4: addiu       $t4, $zero, 0xB4
    ctx->r12 = ADD32(0, 0XB4);
    // 0x800236C8: addiu       $t5, $zero, 0x70
    ctx->r13 = ADD32(0, 0X70);
    // 0x800236CC: addiu       $t6, $zero, 0x10B
    ctx->r14 = ADD32(0, 0X10B);
    // 0x800236D0: addiu       $t7, $zero, 0x97
    ctx->r15 = ADD32(0, 0X97);
    // 0x800236D4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800236D8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x800236DC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800236E0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800236E4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x800236E8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800236EC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800236F0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800236F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800236F8: jal         0x80024544
    // 0x800236FC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80024544(rdram, ctx);
        goto after_39;
    // 0x800236FC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_39:
L_80023700:
    // 0x80023700: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x80023704: lbu         $t9, -0x3AE3($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3AE3);
    // 0x80023708: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002370C: bne         $t9, $at, L_800237AC
    if (ctx->r25 != ctx->r1) {
        // 0x80023710: lui         $s1, 0x801B
        ctx->r17 = S32(0X801B << 16);
            goto L_800237AC;
    }
    // 0x80023710: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x80023714: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x80023718: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8002371C: addiu       $t3, $s0, 0x8
    ctx->r11 = ADD32(ctx->r16, 0X8);
    // 0x80023720: sw          $t3, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r11;
    // 0x80023724: sw          $s4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r20;
    // 0x80023728: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x8002372C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80023730: addiu       $s1, $s1, -0x3AE2
    ctx->r17 = ADD32(ctx->r17, -0X3AE2);
    // 0x80023734: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x80023738: sw          $t5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r13;
    // 0x8002373C: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x80023740: lh          $t6, 0x0($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X0);
    // 0x80023744: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x80023748: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8002374C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80023750: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80023754: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80023758: addiu       $t3, $zero, 0xEF
    ctx->r11 = ADD32(0, 0XEF);
    // 0x8002375C: addiu       $t9, $zero, 0x13F
    ctx->r25 = ADD32(0, 0X13F);
    // 0x80023760: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80023764: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80023768: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8002376C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80023770: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80023774: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80023778: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x8002377C: jal         0x80024038
    // 0x80023780: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_80024038(rdram, ctx);
        goto after_40;
    // 0x80023780: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_40:
    // 0x80023784: lh          $t4, 0x0($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X0);
    // 0x80023788: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002378C: addiu       $t5, $t4, -0x8
    ctx->r13 = ADD32(ctx->r12, -0X8);
    // 0x80023790: sh          $t5, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r13;
    // 0x80023794: lh          $t6, 0x0($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X0);
    // 0x80023798: nop

    // 0x8002379C: bgtz        $t6, L_800237AC
    if (SIGNED(ctx->r14) > 0) {
        // 0x800237A0: nop
    
            goto L_800237AC;
    }
    // 0x800237A0: nop

    // 0x800237A4: sb          $zero, -0x3AE3($at)
    MEM_B(-0X3AE3, ctx->r1) = 0;
    // 0x800237A8: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_800237AC:
    // 0x800237AC: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x800237B0: lbu         $t7, -0x3AE3($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3AE3);
    // 0x800237B4: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x800237B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800237BC: bne         $t7, $at, L_80023864
    if (ctx->r15 != ctx->r1) {
        // 0x800237C0: addiu       $s1, $s1, -0x3AE2
        ctx->r17 = ADD32(ctx->r17, -0X3AE2);
            goto L_80023864;
    }
    // 0x800237C0: addiu       $s1, $s1, -0x3AE2
    ctx->r17 = ADD32(ctx->r17, -0X3AE2);
    // 0x800237C4: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x800237C8: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x800237CC: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x800237D0: sw          $t8, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r24;
    // 0x800237D4: sw          $s4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r20;
    // 0x800237D8: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x800237DC: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x800237E0: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x800237E4: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x800237E8: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
    // 0x800237EC: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x800237F0: lh          $t4, 0x0($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X0);
    // 0x800237F4: addiu       $t8, $zero, 0xEF
    ctx->r24 = ADD32(0, 0XEF);
    // 0x800237F8: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x800237FC: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80023800: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80023804: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80023808: addiu       $t7, $zero, 0x13F
    ctx->r15 = ADD32(0, 0X13F);
    // 0x8002380C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80023810: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80023814: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80023818: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8002381C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80023820: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80023824: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x80023828: jal         0x80024038
    // 0x8002382C: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_80024038(rdram, ctx);
        goto after_41;
    // 0x8002382C: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_41:
    // 0x80023830: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x80023834: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80023838: bne         $v1, $v0, L_80023848
    if (ctx->r3 != ctx->r2) {
        // 0x8002383C: addiu       $t9, $v0, 0x8
        ctx->r25 = ADD32(ctx->r2, 0X8);
            goto L_80023848;
    }
    // 0x8002383C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80023840: b           L_80023868
    // 0x80023844: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80023868;
    // 0x80023844: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80023848:
    // 0x80023848: sh          $t9, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r25;
    // 0x8002384C: lh          $t3, 0x0($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X0);
    // 0x80023850: nop

    // 0x80023854: slti        $at, $t3, 0xFF
    ctx->r1 = SIGNED(ctx->r11) < 0XFF ? 1 : 0;
    // 0x80023858: bne         $at, $zero, L_80023868
    if (ctx->r1 != 0) {
        // 0x8002385C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80023868;
    }
    // 0x8002385C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80023860: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_80023864:
    // 0x80023864: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80023868:
    // 0x80023868: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8002386C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80023870: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80023874: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80023878: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8002387C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80023880: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80023884: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80023888: jr          $ra
    // 0x8002388C: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x8002388C: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_80023890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80023890: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80023894: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80023898: andi        $ra, $a3, 0xFF
    ctx->r31 = ctx->r7 & 0XFF;
    // 0x8002389C: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x800238A0: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x800238A4: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x800238A8: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x800238AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800238B0: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x800238B4: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x800238B8: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x800238BC: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x800238C0: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x800238C4: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x800238C8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800238CC: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x800238D0: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x800238D4: blez        $ra, L_80023BC8
    if (SIGNED(ctx->r31) <= 0) {
        // 0x800238D8: or          $s6, $zero, $zero
        ctx->r22 = 0 | 0;
            goto L_80023BC8;
    }
    // 0x800238D8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x800238DC: lw          $fp, 0x44($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X44);
    // 0x800238E0: nop

L_800238E4:
    // 0x800238E4: lbu         $t0, 0x0($s7)
    ctx->r8 = MEM_BU(ctx->r23, 0X0);
    // 0x800238E8: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x800238EC: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x800238F0: bne         $at, $zero, L_80023BB4
    if (ctx->r1 != 0) {
        // 0x800238F4: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_80023BB4;
    }
    // 0x800238F4: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x800238F8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800238FC: addiu       $a0, $t0, -0x10
    ctx->r4 = ADD32(ctx->r8, -0X10);
    // 0x80023900: andi        $v1, $a0, 0x7
    ctx->r3 = ctx->r4 & 0X7;
    // 0x80023904: lui         $t6, 0xFD48
    ctx->r14 = S32(0XFD48 << 16);
    // 0x80023908: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8002390C: sll         $t7, $v1, 4
    ctx->r15 = S32(ctx->r3 << 4);
    // 0x80023910: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80023914: ori         $t6, $t6, 0x3F
    ctx->r14 = ctx->r14 | 0X3F;
    // 0x80023918: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x8002391C: bgez        $a0, L_8002392C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80023920: sra         $t1, $a0, 3
        ctx->r9 = S32(SIGNED(ctx->r4) >> 3);
            goto L_8002392C;
    }
    // 0x80023920: sra         $t1, $a0, 3
    ctx->r9 = S32(SIGNED(ctx->r4) >> 3);
    // 0x80023924: addiu       $at, $a0, 0x7
    ctx->r1 = ADD32(ctx->r4, 0X7);
    // 0x80023928: sra         $t1, $at, 3
    ctx->r9 = S32(SIGNED(ctx->r1) >> 3);
L_8002392C:
    // 0x8002392C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80023930: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80023934: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x80023938: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x8002393C: subu        $t2, $v1, $v1
    ctx->r10 = SUB32(ctx->r3, ctx->r3);
    // 0x80023940: addiu       $t2, $t2, 0xA
    ctx->r10 = ADD32(ctx->r10, 0XA);
    // 0x80023944: addiu       $t8, $t7, 0x200
    ctx->r24 = ADD32(ctx->r15, 0X200);
    // 0x80023948: srl         $t6, $t2, 1
    ctx->r14 = S32(U32(ctx->r10) >> 1);
    // 0x8002394C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80023950: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80023954: addiu       $t2, $t6, 0x7
    ctx->r10 = ADD32(ctx->r14, 0X7);
    // 0x80023958: srl         $t7, $t2, 3
    ctx->r15 = S32(U32(ctx->r10) >> 3);
    // 0x8002395C: andi        $t8, $t7, 0x1FF
    ctx->r24 = ctx->r15 & 0X1FF;
    // 0x80023960: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80023964: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80023968: sll         $t9, $t8, 9
    ctx->r25 = S32(ctx->r24 << 9);
    // 0x8002396C: lui         $t7, 0x701
    ctx->r15 = S32(0X701 << 16);
    // 0x80023970: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x80023974: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x80023978: ori         $t7, $t7, 0x40
    ctx->r15 = ctx->r15 | 0X40;
    // 0x8002397C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80023980: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80023984: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80023988: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
    // 0x8002398C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80023990: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80023994: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x80023998: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8002399C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800239A0: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x800239A4: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x800239A8: andi        $t6, $t4, 0xF
    ctx->r14 = ctx->r12 & 0XF;
    // 0x800239AC: sll         $t7, $t6, 20
    ctx->r15 = S32(ctx->r14 << 20);
    // 0x800239B0: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x800239B4: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800239B8: ori         $t4, $t8, 0x40
    ctx->r12 = ctx->r24 | 0X40;
    // 0x800239BC: addiu       $t7, $fp, 0x9
    ctx->r15 = ADD32(ctx->r30, 0X9);
    // 0x800239C0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800239C4: sll         $t8, $t7, 18
    ctx->r24 = S32(ctx->r15 << 18);
    // 0x800239C8: sll         $s3, $fp, 18
    ctx->r19 = S32(ctx->r30 << 18);
    // 0x800239CC: addu        $t5, $t6, $s5
    ctx->r13 = ADD32(ctx->r14, ctx->r21);
    // 0x800239D0: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x800239D4: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x800239D8: sra         $s2, $t8, 16
    ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800239DC: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x800239E0: sll         $a2, $t1, 2
    ctx->r6 = S32(ctx->r9 << 2);
    // 0x800239E4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800239E8: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x800239EC: andi        $t8, $a2, 0xFFF
    ctx->r24 = ctx->r6 & 0XFFF;
    // 0x800239F0: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x800239F4: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x800239F8: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x800239FC: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80023A00: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80023A04: or          $t9, $t8, $a2
    ctx->r25 = ctx->r24 | ctx->r6;
    // 0x80023A08: addiu       $t0, $t1, 0x9
    ctx->r8 = ADD32(ctx->r9, 0X9);
    // 0x80023A0C: addiu       $a3, $v1, 0x9
    ctx->r7 = ADD32(ctx->r3, 0X9);
    // 0x80023A10: sll         $t8, $a3, 1
    ctx->r24 = S32(ctx->r7 << 1);
    // 0x80023A14: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x80023A18: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80023A1C: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x80023A20: andi        $t0, $t6, 0xFFF
    ctx->r8 = ctx->r14 & 0XFFF;
    // 0x80023A24: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x80023A28: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80023A2C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80023A30: or          $t8, $t7, $t0
    ctx->r24 = ctx->r15 | ctx->r8;
    // 0x80023A34: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80023A38: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80023A3C: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x80023A40: addiu       $t9, $a1, 0x8
    ctx->r25 = ADD32(ctx->r5, 0X8);
    // 0x80023A44: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80023A48: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x80023A4C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80023A50: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80023A54: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x80023A58: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80023A5C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80023A60: or          $t8, $t2, $at
    ctx->r24 = ctx->r10 | ctx->r1;
    // 0x80023A64: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80023A68: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80023A6C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80023A70: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x80023A74: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x80023A78: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80023A7C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80023A80: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x80023A84: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80023A88: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80023A8C: or          $t6, $t9, $a2
    ctx->r14 = ctx->r25 | ctx->r6;
    // 0x80023A90: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x80023A94: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80023A98: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x80023A9C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80023AA0: or          $t6, $t9, $t0
    ctx->r14 = ctx->r25 | ctx->r8;
    // 0x80023AA4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80023AA8: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x80023AAC: addiu       $s1, $t5, 0x9
    ctx->r17 = ADD32(ctx->r13, 0X9);
    // 0x80023AB0: sll         $t8, $s1, 18
    ctx->r24 = S32(ctx->r17 << 18);
    // 0x80023AB4: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80023AB8: addiu       $t7, $t1, 0x8
    ctx->r15 = ADD32(ctx->r9, 0X8);
    // 0x80023ABC: blez        $t9, L_80023ACC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80023AC0: sw          $t7, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r15;
            goto L_80023ACC;
    }
    // 0x80023AC0: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80023AC4: b           L_80023AD0
    // 0x80023AC8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
        goto L_80023AD0;
    // 0x80023AC8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
L_80023ACC:
    // 0x80023ACC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80023AD0:
    // 0x80023AD0: blez        $s2, L_80023AE0
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80023AD4: lui         $at, 0xE400
        ctx->r1 = S32(0XE400 << 16);
            goto L_80023AE0;
    }
    // 0x80023AD4: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80023AD8: b           L_80023AE4
    // 0x80023ADC: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
        goto L_80023AE4;
    // 0x80023ADC: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
L_80023AE0:
    // 0x80023AE0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80023AE4:
    // 0x80023AE4: andi        $t8, $a0, 0xFFF
    ctx->r24 = ctx->r4 & 0XFFF;
    // 0x80023AE8: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x80023AEC: andi        $t6, $v1, 0xFFF
    ctx->r14 = ctx->r3 & 0XFFF;
    // 0x80023AF0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80023AF4: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x80023AF8: sll         $t8, $a1, 18
    ctx->r24 = S32(ctx->r5 << 18);
    // 0x80023AFC: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x80023B00: sra         $t7, $t8, 16
    ctx->r15 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80023B04: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80023B08: blez        $t7, L_80023B18
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80023B0C: sw          $t6, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r14;
            goto L_80023B18;
    }
    // 0x80023B0C: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x80023B10: b           L_80023B1C
    // 0x80023B14: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
        goto L_80023B1C;
    // 0x80023B14: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_80023B18:
    // 0x80023B18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80023B1C:
    // 0x80023B1C: blez        $s3, L_80023B2C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80023B20: andi        $t6, $a0, 0xFFF
        ctx->r14 = ctx->r4 & 0XFFF;
            goto L_80023B2C;
    }
    // 0x80023B20: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x80023B24: b           L_80023B30
    // 0x80023B28: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
        goto L_80023B30;
    // 0x80023B28: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
L_80023B2C:
    // 0x80023B2C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80023B30:
    // 0x80023B30: andi        $t9, $v1, 0xFFF
    ctx->r25 = ctx->r3 & 0XFFF;
    // 0x80023B34: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x80023B38: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x80023B3C: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x80023B40: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x80023B44: lui         $t9, 0xB400
    ctx->r25 = S32(0XB400 << 16);
    // 0x80023B48: addiu       $t6, $a2, 0x8
    ctx->r14 = ADD32(ctx->r6, 0X8);
    // 0x80023B4C: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80023B50: bgez        $a1, L_80023B78
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80023B54: sw          $t9, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r25;
            goto L_80023B78;
    }
    // 0x80023B54: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80023B58: sll         $v0, $a1, 12
    ctx->r2 = S32(ctx->r5 << 12);
    // 0x80023B5C: sra         $t8, $v0, 7
    ctx->r24 = S32(SIGNED(ctx->r2) >> 7);
    // 0x80023B60: bgez        $t8, L_80023B70
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80023B64: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80023B70;
    }
    // 0x80023B64: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80023B68: b           L_80023B7C
    // 0x80023B6C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
        goto L_80023B7C;
    // 0x80023B6C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
L_80023B70:
    // 0x80023B70: b           L_80023B7C
    // 0x80023B74: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
        goto L_80023B7C;
    // 0x80023B74: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_80023B78:
    // 0x80023B78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80023B7C:
    // 0x80023B7C: negu        $t7, $zero
    ctx->r15 = SUB32(0, 0);
    // 0x80023B80: andi        $t6, $t7, 0xFFFF
    ctx->r14 = ctx->r15 & 0XFFFF;
    // 0x80023B84: negu        $t8, $a1
    ctx->r24 = SUB32(0, ctx->r5);
    // 0x80023B88: sll         $t7, $t8, 16
    ctx->r15 = S32(ctx->r24 << 16);
    // 0x80023B8C: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x80023B90: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x80023B94: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80023B98: lui         $t7, 0x1000
    ctx->r15 = S32(0X1000 << 16);
    // 0x80023B9C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80023BA0: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80023BA4: ori         $t7, $t7, 0x400
    ctx->r15 = ctx->r15 | 0X400;
    // 0x80023BA8: lui         $t6, 0xB300
    ctx->r14 = S32(0XB300 << 16);
    // 0x80023BAC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80023BB0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
L_80023BB4:
    // 0x80023BB4: andi        $t9, $s6, 0xFF
    ctx->r25 = ctx->r22 & 0XFF;
    // 0x80023BB8: slt         $at, $t9, $ra
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r31) ? 1 : 0;
    // 0x80023BBC: or          $s6, $t9, $zero
    ctx->r22 = ctx->r25 | 0;
    // 0x80023BC0: bne         $at, $zero, L_800238E4
    if (ctx->r1 != 0) {
        // 0x80023BC4: addiu       $s5, $s5, 0xA
        ctx->r21 = ADD32(ctx->r21, 0XA);
            goto L_800238E4;
    }
    // 0x80023BC4: addiu       $s5, $s5, 0xA
    ctx->r21 = ADD32(ctx->r21, 0XA);
L_80023BC8:
    // 0x80023BC8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80023BCC: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x80023BD0: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x80023BD4: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x80023BD8: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x80023BDC: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x80023BE0: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x80023BE4: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x80023BE8: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x80023BEC: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x80023BF0: jr          $ra
    // 0x80023BF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80023BF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80023BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80023BF8: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x80023BFC: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x80023C00: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x80023C04: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x80023C08: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x80023C0C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80023C10: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x80023C14: lw          $s5, 0xBC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XBC);
    // 0x80023C18: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x80023C1C: lw          $s3, 0xB8($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XB8);
    // 0x80023C20: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x80023C24: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80023C28: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80023C2C: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x80023C30: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x80023C34: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x80023C38: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x80023C3C: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x80023C40: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x80023C44: lui         $s7, 0xFD48
    ctx->r23 = S32(0XFD48 << 16);
    // 0x80023C48: lui         $ra, 0x701
    ctx->r31 = S32(0X701 << 16);
    // 0x80023C4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80023C50: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x80023C54: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x80023C58: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x80023C5C: ori         $ra, $ra, 0x40
    ctx->r31 = ctx->r31 | 0X40;
    // 0x80023C60: ori         $s7, $s7, 0x3F
    ctx->r23 = ctx->r23 | 0X3F;
    // 0x80023C64: addiu       $s4, $a1, 0x200
    ctx->r20 = ADD32(ctx->r5, 0X200);
    // 0x80023C68: addiu       $s6, $sp, 0xA0
    ctx->r22 = ADD32(ctx->r29, 0XA0);
    // 0x80023C6C: lui         $fp, 0xF548
    ctx->r30 = S32(0XF548 << 16);
    // 0x80023C70: sll         $s1, $s3, 18
    ctx->r17 = S32(ctx->r19 << 18);
    // 0x80023C74: mflo        $v0
    ctx->r2 = lo;
    // 0x80023C78: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x80023C7C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80023C80: div         $zero, $t6, $t1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r9)));
    // 0x80023C84: bne         $t1, $zero, L_80023C90
    if (ctx->r9 != 0) {
        // 0x80023C88: nop
    
            goto L_80023C90;
    }
    // 0x80023C88: nop

    // 0x80023C8C: break       7
    do_break(2147630220);
L_80023C90:
    // 0x80023C90: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80023C94: bne         $t1, $at, L_80023CA8
    if (ctx->r9 != ctx->r1) {
        // 0x80023C98: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80023CA8;
    }
    // 0x80023C98: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80023C9C: bne         $v1, $at, L_80023CA8
    if (ctx->r3 != ctx->r1) {
        // 0x80023CA0: nop
    
            goto L_80023CA8;
    }
    // 0x80023CA0: nop

    // 0x80023CA4: break       6
    do_break(2147630244);
L_80023CA8:
    // 0x80023CA8: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x80023CAC: sh          $v0, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r2;
    // 0x80023CB0: mflo        $t8
    ctx->r24 = lo;
    // 0x80023CB4: nop

    // 0x80023CB8: nop

    // 0x80023CBC: div         $zero, $t8, $t1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r9)));
    // 0x80023CC0: bne         $t1, $zero, L_80023CCC
    if (ctx->r9 != 0) {
        // 0x80023CC4: nop
    
            goto L_80023CCC;
    }
    // 0x80023CC4: nop

    // 0x80023CC8: break       7
    do_break(2147630280);
L_80023CCC:
    // 0x80023CCC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80023CD0: bne         $t1, $at, L_80023CE4
    if (ctx->r9 != ctx->r1) {
        // 0x80023CD4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80023CE4;
    }
    // 0x80023CD4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80023CD8: bne         $t8, $at, L_80023CE4
    if (ctx->r24 != ctx->r1) {
        // 0x80023CDC: nop
    
            goto L_80023CE4;
    }
    // 0x80023CDC: nop

    // 0x80023CE0: break       6
    do_break(2147630304);
L_80023CE4:
    // 0x80023CE4: andi        $t8, $s5, 0xF
    ctx->r24 = ctx->r21 & 0XF;
    // 0x80023CE8: mfhi        $t9
    ctx->r25 = hi;
    // 0x80023CEC: sh          $t9, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r25;
    // 0x80023CF0: lhu         $t7, 0xA2($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0XA2);
    // 0x80023CF4: div         $zero, $v1, $t1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r9)));
    // 0x80023CF8: bne         $t1, $zero, L_80023D04
    if (ctx->r9 != 0) {
        // 0x80023CFC: nop
    
            goto L_80023D04;
    }
    // 0x80023CFC: nop

    // 0x80023D00: break       7
    do_break(2147630336);
L_80023D04:
    // 0x80023D04: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80023D08: bne         $t1, $at, L_80023D1C
    if (ctx->r9 != ctx->r1) {
        // 0x80023D0C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80023D1C;
    }
    // 0x80023D0C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80023D10: bne         $v1, $at, L_80023D1C
    if (ctx->r3 != ctx->r1) {
        // 0x80023D14: nop
    
            goto L_80023D1C;
    }
    // 0x80023D14: nop

    // 0x80023D18: break       6
    do_break(2147630360);
L_80023D1C:
    // 0x80023D1C: sll         $t9, $t8, 20
    ctx->r25 = S32(ctx->r24 << 20);
    // 0x80023D20: addiu       $t8, $s3, 0x9
    ctx->r24 = ADD32(ctx->r19, 0X9);
    // 0x80023D24: mfhi        $t6
    ctx->r14 = hi;
    // 0x80023D28: sh          $t6, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r14;
    // 0x80023D2C: bne         $v0, $zero, L_80023D38
    if (ctx->r2 != 0) {
        // 0x80023D30: nop
    
            goto L_80023D38;
    }
    // 0x80023D30: nop

    // 0x80023D34: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
L_80023D38:
    // 0x80023D38: bne         $t0, $zero, L_80023D50
    if (ctx->r8 != 0) {
        // 0x80023D3C: slti        $at, $t5, 0x3
        ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
            goto L_80023D50;
    }
    // 0x80023D3C: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x80023D40: bne         $t7, $zero, L_80023D50
    if (ctx->r15 != 0) {
        // 0x80023D44: slti        $at, $t5, 0x3
        ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
            goto L_80023D50;
    }
    // 0x80023D44: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x80023D48: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80023D4C: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
L_80023D50:
    // 0x80023D50: beq         $at, $zero, L_80024008
    if (ctx->r1 == 0) {
        // 0x80023D54: or          $t4, $t5, $zero
        ctx->r12 = ctx->r13 | 0;
            goto L_80024008;
    }
    // 0x80023D54: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
    // 0x80023D58: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80023D5C: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x80023D60: sll         $t9, $t8, 18
    ctx->r25 = S32(ctx->r24 << 18);
    // 0x80023D64: sra         $t7, $s1, 16
    ctx->r15 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80023D68: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x80023D6C: sra         $s2, $t9, 16
    ctx->r18 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80023D70: ori         $s5, $t6, 0x40
    ctx->r21 = ctx->r14 | 0X40;
L_80023D74:
    // 0x80023D74: sll         $t8, $t5, 1
    ctx->r24 = S32(ctx->r13 << 1);
    // 0x80023D78: addu        $t9, $s6, $t8
    ctx->r25 = ADD32(ctx->r22, ctx->r24);
    // 0x80023D7C: lhu         $a0, 0x0($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X0);
    // 0x80023D80: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80023D84: andi        $v1, $a0, 0x7
    ctx->r3 = ctx->r4 & 0X7;
    // 0x80023D88: sll         $t6, $v1, 4
    ctx->r14 = S32(ctx->r3 << 4);
    // 0x80023D8C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x80023D90: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80023D94: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80023D98: subu        $t1, $v1, $v1
    ctx->r9 = SUB32(ctx->r3, ctx->r3);
    // 0x80023D9C: bgez        $a0, L_80023DAC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80023DA0: sra         $t0, $a0, 3
        ctx->r8 = S32(SIGNED(ctx->r4) >> 3);
            goto L_80023DAC;
    }
    // 0x80023DA0: sra         $t0, $a0, 3
    ctx->r8 = S32(SIGNED(ctx->r4) >> 3);
    // 0x80023DA4: addiu       $at, $a0, 0x7
    ctx->r1 = ADD32(ctx->r4, 0X7);
    // 0x80023DA8: sra         $t0, $at, 3
    ctx->r8 = S32(SIGNED(ctx->r1) >> 3);
L_80023DAC:
    // 0x80023DAC: addiu       $t1, $t1, 0xA
    ctx->r9 = ADD32(ctx->r9, 0XA);
    // 0x80023DB0: sll         $t7, $t0, 4
    ctx->r15 = S32(ctx->r8 << 4);
    // 0x80023DB4: srl         $t6, $t1, 1
    ctx->r14 = S32(U32(ctx->r9) >> 1);
    // 0x80023DB8: sw          $s4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r20;
    // 0x80023DBC: sw          $s7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r23;
    // 0x80023DC0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80023DC4: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x80023DC8: addiu       $t1, $t6, 0x7
    ctx->r9 = ADD32(ctx->r14, 0X7);
    // 0x80023DCC: srl         $t7, $t1, 3
    ctx->r15 = S32(U32(ctx->r9) >> 3);
    // 0x80023DD0: andi        $t8, $t7, 0x1FF
    ctx->r24 = ctx->r15 & 0X1FF;
    // 0x80023DD4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80023DD8: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80023DDC: sll         $t1, $t8, 9
    ctx->r9 = S32(ctx->r24 << 9);
    // 0x80023DE0: or          $t6, $t1, $fp
    ctx->r14 = ctx->r9 | ctx->r30;
    // 0x80023DE4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80023DE8: sw          $ra, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r31;
    // 0x80023DEC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80023DF0: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x80023DF4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80023DF8: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80023DFC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80023E00: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80023E04: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80023E08: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x80023E0C: sll         $a2, $t0, 2
    ctx->r6 = S32(ctx->r8 << 2);
    // 0x80023E10: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80023E14: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80023E18: andi        $t6, $a2, 0xFFF
    ctx->r14 = ctx->r6 & 0XFFF;
    // 0x80023E1C: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80023E20: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x80023E24: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80023E28: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80023E2C: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x80023E30: or          $t7, $t6, $a2
    ctx->r15 = ctx->r14 | ctx->r6;
    // 0x80023E34: addiu       $t2, $t0, 0x9
    ctx->r10 = ADD32(ctx->r8, 0X9);
    // 0x80023E38: addiu       $a3, $v1, 0x9
    ctx->r7 = ADD32(ctx->r3, 0X9);
    // 0x80023E3C: sll         $t6, $a3, 1
    ctx->r14 = S32(ctx->r7 << 1);
    // 0x80023E40: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x80023E44: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80023E48: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x80023E4C: andi        $t2, $t8, 0xFFF
    ctx->r10 = ctx->r24 & 0XFFF;
    // 0x80023E50: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x80023E54: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80023E58: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80023E5C: or          $t6, $t9, $t2
    ctx->r14 = ctx->r25 | ctx->r10;
    // 0x80023E60: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80023E64: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80023E68: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80023E6C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80023E70: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80023E74: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80023E78: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80023E7C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80023E80: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x80023E84: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80023E88: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80023E8C: or          $t6, $t1, $at
    ctx->r14 = ctx->r9 | ctx->r1;
    // 0x80023E90: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80023E94: sw          $s5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r21;
    // 0x80023E98: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80023E9C: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x80023EA0: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x80023EA4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80023EA8: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80023EAC: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x80023EB0: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80023EB4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80023EB8: or          $t8, $t7, $a2
    ctx->r24 = ctx->r15 | ctx->r6;
    // 0x80023EBC: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x80023EC0: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x80023EC4: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x80023EC8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80023ECC: or          $t8, $t7, $t2
    ctx->r24 = ctx->r15 | ctx->r10;
    // 0x80023ED0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80023ED4: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x80023ED8: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80023EDC: addiu       $t9, $t1, 0x8
    ctx->r25 = ADD32(ctx->r9, 0X8);
    // 0x80023EE0: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80023EE4: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x80023EE8: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80023EEC: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x80023EF0: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
    // 0x80023EF4: addiu       $t8, $t0, 0x9
    ctx->r24 = ADD32(ctx->r8, 0X9);
    // 0x80023EF8: sll         $t9, $t8, 18
    ctx->r25 = S32(ctx->r24 << 18);
    // 0x80023EFC: sra         $t6, $t9, 16
    ctx->r14 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80023F00: blez        $t6, L_80023F10
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80023F04: lui         $at, 0xE400
        ctx->r1 = S32(0XE400 << 16);
            goto L_80023F10;
    }
    // 0x80023F04: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80023F08: b           L_80023F14
    // 0x80023F0C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
        goto L_80023F14;
    // 0x80023F0C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_80023F10:
    // 0x80023F10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80023F14:
    // 0x80023F14: blez        $s2, L_80023F24
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80023F18: andi        $t9, $a0, 0xFFF
        ctx->r25 = ctx->r4 & 0XFFF;
            goto L_80023F24;
    }
    // 0x80023F18: andi        $t9, $a0, 0xFFF
    ctx->r25 = ctx->r4 & 0XFFF;
    // 0x80023F1C: b           L_80023F28
    // 0x80023F20: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
        goto L_80023F28;
    // 0x80023F20: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
L_80023F24:
    // 0x80023F24: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80023F28:
    // 0x80023F28: andi        $t7, $v1, 0xFFF
    ctx->r15 = ctx->r3 & 0XFFF;
    // 0x80023F2C: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x80023F30: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80023F34: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80023F38: sll         $t9, $a1, 18
    ctx->r25 = S32(ctx->r5 << 18);
    // 0x80023F3C: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x80023F40: sra         $t8, $t9, 16
    ctx->r24 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80023F44: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80023F48: blez        $t8, L_80023F58
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80023F4C: sw          $t7, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r15;
            goto L_80023F58;
    }
    // 0x80023F4C: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x80023F50: b           L_80023F5C
    // 0x80023F54: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
        goto L_80023F5C;
    // 0x80023F54: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_80023F58:
    // 0x80023F58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80023F5C:
    // 0x80023F5C: blez        $s1, L_80023F6C
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80023F60: andi        $t7, $a0, 0xFFF
        ctx->r15 = ctx->r4 & 0XFFF;
            goto L_80023F6C;
    }
    // 0x80023F60: andi        $t7, $a0, 0xFFF
    ctx->r15 = ctx->r4 & 0XFFF;
    // 0x80023F64: b           L_80023F70
    // 0x80023F68: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
        goto L_80023F70;
    // 0x80023F68: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
L_80023F6C:
    // 0x80023F6C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80023F70:
    // 0x80023F70: andi        $t6, $v1, 0xFFF
    ctx->r14 = ctx->r3 & 0XFFF;
    // 0x80023F74: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x80023F78: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x80023F7C: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x80023F80: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x80023F84: lui         $t6, 0xB400
    ctx->r14 = S32(0XB400 << 16);
    // 0x80023F88: addiu       $t7, $a2, 0x8
    ctx->r15 = ADD32(ctx->r6, 0X8);
    // 0x80023F8C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80023F90: bgez        $a1, L_80023FB8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80023F94: sw          $t6, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r14;
            goto L_80023FB8;
    }
    // 0x80023F94: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80023F98: sll         $v0, $a1, 12
    ctx->r2 = S32(ctx->r5 << 12);
    // 0x80023F9C: sra         $t9, $v0, 7
    ctx->r25 = S32(SIGNED(ctx->r2) >> 7);
    // 0x80023FA0: bgez        $t9, L_80023FB0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80023FA4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80023FB0;
    }
    // 0x80023FA4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80023FA8: b           L_80023FBC
    // 0x80023FAC: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
        goto L_80023FBC;
    // 0x80023FAC: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_80023FB0:
    // 0x80023FB0: b           L_80023FBC
    // 0x80023FB4: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
        goto L_80023FBC;
    // 0x80023FB4: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_80023FB8:
    // 0x80023FB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80023FBC:
    // 0x80023FBC: negu        $t8, $zero
    ctx->r24 = SUB32(0, 0);
    // 0x80023FC0: andi        $t7, $t8, 0xFFFF
    ctx->r15 = ctx->r24 & 0XFFFF;
    // 0x80023FC4: negu        $t9, $a1
    ctx->r25 = SUB32(0, ctx->r5);
    // 0x80023FC8: sll         $t8, $t9, 16
    ctx->r24 = S32(ctx->r25 << 16);
    // 0x80023FCC: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x80023FD0: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x80023FD4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80023FD8: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x80023FDC: andi        $t4, $t5, 0xFF
    ctx->r12 = ctx->r13 & 0XFF;
    // 0x80023FE0: lui         $t8, 0x1000
    ctx->r24 = S32(0X1000 << 16);
    // 0x80023FE4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80023FE8: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x80023FEC: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80023FF0: ori         $t8, $t8, 0x400
    ctx->r24 = ctx->r24 | 0X400;
    // 0x80023FF4: lui         $t7, 0xB300
    ctx->r15 = S32(0XB300 << 16);
    // 0x80023FF8: or          $t5, $t4, $zero
    ctx->r13 = ctx->r12 | 0;
    // 0x80023FFC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80024000: bne         $at, $zero, L_80023D74
    if (ctx->r1 != 0) {
        // 0x80024004: sw          $t8, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r24;
            goto L_80023D74;
    }
    // 0x80024004: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_80024008:
    // 0x80024008: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8002400C: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x80024010: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x80024014: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x80024018: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x8002401C: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x80024020: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x80024024: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x80024028: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x8002402C: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x80024030: jr          $ra
    // 0x80024034: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x80024034: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_80024038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024038: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8002403C: subu        $v1, $a2, $a2
    ctx->r3 = SUB32(ctx->r6, ctx->r6);
    // 0x80024040: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80024044: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80024048: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8002404C: lui         $t7, 0xFD48
    ctx->r15 = S32(0XFD48 << 16);
    // 0x80024050: ori         $t7, $t7, 0x3F
    ctx->r15 = ctx->r15 | 0X3F;
    // 0x80024054: srl         $t9, $v1, 1
    ctx->r25 = S32(U32(ctx->r3) >> 1);
    // 0x80024058: addiu       $v1, $t9, 0x7
    ctx->r3 = ADD32(ctx->r25, 0X7);
    // 0x8002405C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80024060: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x80024064: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80024068: srl         $t6, $v1, 3
    ctx->r14 = S32(U32(ctx->r3) >> 3);
    // 0x8002406C: andi        $t7, $t6, 0x1FF
    ctx->r15 = ctx->r14 & 0X1FF;
    // 0x80024070: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80024074: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80024078: sll         $v1, $t7, 9
    ctx->r3 = S32(ctx->r15 << 9);
    // 0x8002407C: lui         $t6, 0x701
    ctx->r14 = S32(0X701 << 16);
    // 0x80024080: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x80024084: or          $t9, $v1, $at
    ctx->r25 = ctx->r3 | ctx->r1;
    // 0x80024088: ori         $t6, $t6, 0x40
    ctx->r14 = ctx->r14 | 0X40;
    // 0x8002408C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80024090: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80024094: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80024098: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x8002409C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800240A0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800240A4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800240A8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800240AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800240B0: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x800240B4: sll         $a1, $a3, 2
    ctx->r5 = S32(ctx->r7 << 2);
    // 0x800240B8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800240BC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800240C0: andi        $t6, $a1, 0xFFF
    ctx->r14 = ctx->r5 & 0XFFF;
    // 0x800240C4: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x800240C8: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x800240CC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800240D0: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x800240D4: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x800240D8: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x800240DC: addiu       $t1, $a2, 0xF
    ctx->r9 = ADD32(ctx->r6, 0XF);
    // 0x800240E0: addiu       $t2, $a3, 0xF
    ctx->r10 = ADD32(ctx->r7, 0XF);
    // 0x800240E4: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x800240E8: sll         $t6, $t1, 1
    ctx->r14 = S32(ctx->r9 << 1);
    // 0x800240EC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800240F0: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x800240F4: andi        $t2, $t8, 0xFFF
    ctx->r10 = ctx->r24 & 0XFFF;
    // 0x800240F8: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x800240FC: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80024100: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80024104: or          $t6, $t9, $t2
    ctx->r14 = ctx->r25 | ctx->r10;
    // 0x80024108: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8002410C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80024110: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80024114: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80024118: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8002411C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80024120: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80024124: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80024128: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x8002412C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80024130: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80024134: or          $t6, $v1, $at
    ctx->r14 = ctx->r3 | ctx->r1;
    // 0x80024138: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8002413C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80024140: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80024144: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x80024148: sll         $t9, $t8, 20
    ctx->r25 = S32(ctx->r24 << 20);
    // 0x8002414C: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x80024150: ori         $t7, $t6, 0x40
    ctx->r15 = ctx->r14 | 0X40;
    // 0x80024154: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80024158: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8002415C: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x80024160: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x80024164: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80024168: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8002416C: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x80024170: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80024174: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80024178: or          $t9, $t8, $a1
    ctx->r25 = ctx->r24 | ctx->r5;
    // 0x8002417C: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x80024180: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x80024184: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x80024188: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8002418C: or          $t9, $t8, $t2
    ctx->r25 = ctx->r24 | ctx->r10;
    // 0x80024190: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80024194: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80024198: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8002419C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800241A0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800241A4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800241A8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800241AC: sll         $t8, $t7, 18
    ctx->r24 = S32(ctx->r15 << 18);
    // 0x800241B0: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800241B4: blez        $t9, L_800241C4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x800241B8: sll         $t7, $t6, 18
        ctx->r15 = S32(ctx->r14 << 18);
            goto L_800241C4;
    }
    // 0x800241B8: sll         $t7, $t6, 18
    ctx->r15 = S32(ctx->r14 << 18);
    // 0x800241BC: b           L_800241C8
    // 0x800241C0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
        goto L_800241C8;
    // 0x800241C0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_800241C4:
    // 0x800241C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800241C8:
    // 0x800241C8: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800241CC: blez        $t8, L_800241DC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x800241D0: andi        $t7, $a1, 0xFFF
        ctx->r15 = ctx->r5 & 0XFFF;
            goto L_800241DC;
    }
    // 0x800241D0: andi        $t7, $a1, 0xFFF
    ctx->r15 = ctx->r5 & 0XFFF;
    // 0x800241D4: b           L_800241E0
    // 0x800241D8: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
        goto L_800241E0;
    // 0x800241D8: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
L_800241DC:
    // 0x800241DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_800241E0:
    // 0x800241E0: andi        $t9, $a2, 0xFFF
    ctx->r25 = ctx->r6 & 0XFFF;
    // 0x800241E4: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x800241E8: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x800241EC: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x800241F0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800241F4: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x800241F8: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x800241FC: sll         $t6, $t7, 18
    ctx->r14 = S32(ctx->r15 << 18);
    // 0x80024200: sra         $t8, $t6, 16
    ctx->r24 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80024204: blez        $t8, L_80024214
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80024208: or          $a3, $t8, $zero
        ctx->r7 = ctx->r24 | 0;
            goto L_80024214;
    }
    // 0x80024208: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8002420C: b           L_80024218
    // 0x80024210: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
        goto L_80024218;
    // 0x80024210: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
L_80024214:
    // 0x80024214: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80024218:
    // 0x80024218: sll         $t1, $t9, 18
    ctx->r9 = S32(ctx->r25 << 18);
    // 0x8002421C: sra         $t7, $t1, 16
    ctx->r15 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80024220: blez        $t7, L_80024230
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80024224: andi        $t8, $a1, 0xFFF
        ctx->r24 = ctx->r5 & 0XFFF;
            goto L_80024230;
    }
    // 0x80024224: andi        $t8, $a1, 0xFFF
    ctx->r24 = ctx->r5 & 0XFFF;
    // 0x80024228: b           L_80024234
    // 0x8002422C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
        goto L_80024234;
    // 0x8002422C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
L_80024230:
    // 0x80024230: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80024234:
    // 0x80024234: andi        $t6, $a2, 0xFFF
    ctx->r14 = ctx->r6 & 0XFFF;
    // 0x80024238: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x8002423C: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x80024240: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80024244: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80024248: lui         $t6, 0xB400
    ctx->r14 = S32(0XB400 << 16);
    // 0x8002424C: addiu       $t8, $t2, 0x8
    ctx->r24 = ADD32(ctx->r10, 0X8);
    // 0x80024250: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80024254: bgez        $a3, L_8002427C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80024258: sw          $t6, 0x0($t2)
        MEM_W(0X0, ctx->r10) = ctx->r14;
            goto L_8002427C;
    }
    // 0x80024258: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x8002425C: sll         $v0, $a3, 12
    ctx->r2 = S32(ctx->r7 << 12);
    // 0x80024260: sra         $t9, $v0, 7
    ctx->r25 = S32(SIGNED(ctx->r2) >> 7);
    // 0x80024264: bgez        $t9, L_80024274
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80024268: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80024274;
    }
    // 0x80024268: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8002426C: b           L_80024280
    // 0x80024270: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
        goto L_80024280;
    // 0x80024270: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
L_80024274:
    // 0x80024274: b           L_80024280
    // 0x80024278: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
        goto L_80024280;
    // 0x80024278: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_8002427C:
    // 0x8002427C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_80024280:
    // 0x80024280: negu        $t7, $zero
    ctx->r15 = SUB32(0, 0);
    // 0x80024284: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80024288: negu        $t9, $a3
    ctx->r25 = SUB32(0, ctx->r7);
    // 0x8002428C: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x80024290: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x80024294: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x80024298: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8002429C: lui         $t7, 0x1000
    ctx->r15 = S32(0X1000 << 16);
    // 0x800242A0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800242A4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800242A8: ori         $t7, $t7, 0x400
    ctx->r15 = ctx->r15 | 0X400;
    // 0x800242AC: lui         $t8, 0xB300
    ctx->r24 = S32(0XB300 << 16);
    // 0x800242B0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800242B4: jr          $ra
    // 0x800242B8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    return;
    // 0x800242B8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_800242BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800242BC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800242C0: subu        $v1, $a2, $a2
    ctx->r3 = SUB32(ctx->r6, ctx->r6);
    // 0x800242C4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800242C8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800242CC: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x800242D0: lui         $t7, 0xFD48
    ctx->r15 = S32(0XFD48 << 16);
    // 0x800242D4: ori         $t7, $t7, 0x3F
    ctx->r15 = ctx->r15 | 0X3F;
    // 0x800242D8: srl         $t9, $v1, 1
    ctx->r25 = S32(U32(ctx->r3) >> 1);
    // 0x800242DC: addiu       $v1, $t9, 0x7
    ctx->r3 = ADD32(ctx->r25, 0X7);
    // 0x800242E0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800242E4: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x800242E8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800242EC: srl         $t6, $v1, 3
    ctx->r14 = S32(U32(ctx->r3) >> 3);
    // 0x800242F0: andi        $t7, $t6, 0x1FF
    ctx->r15 = ctx->r14 & 0X1FF;
    // 0x800242F4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800242F8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800242FC: sll         $v1, $t7, 9
    ctx->r3 = S32(ctx->r15 << 9);
    // 0x80024300: lui         $t6, 0x701
    ctx->r14 = S32(0X701 << 16);
    // 0x80024304: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x80024308: or          $t9, $v1, $at
    ctx->r25 = ctx->r3 | ctx->r1;
    // 0x8002430C: ori         $t6, $t6, 0x4050
    ctx->r14 = ctx->r14 | 0X4050;
    // 0x80024310: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80024314: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80024318: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8002431C: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x80024320: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80024324: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80024328: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8002432C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80024330: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80024334: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x80024338: sll         $a1, $a3, 2
    ctx->r5 = S32(ctx->r7 << 2);
    // 0x8002433C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80024340: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80024344: andi        $t6, $a1, 0xFFF
    ctx->r14 = ctx->r5 & 0XFFF;
    // 0x80024348: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8002434C: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x80024350: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80024354: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80024358: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x8002435C: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x80024360: addiu       $t1, $a2, 0x1F
    ctx->r9 = ADD32(ctx->r6, 0X1F);
    // 0x80024364: addiu       $t2, $a3, 0x1F
    ctx->r10 = ADD32(ctx->r7, 0X1F);
    // 0x80024368: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x8002436C: sll         $t6, $t1, 1
    ctx->r14 = S32(ctx->r9 << 1);
    // 0x80024370: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80024374: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x80024378: andi        $t2, $t8, 0xFFF
    ctx->r10 = ctx->r24 & 0XFFF;
    // 0x8002437C: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x80024380: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80024384: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80024388: or          $t6, $t9, $t2
    ctx->r14 = ctx->r25 | ctx->r10;
    // 0x8002438C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80024390: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80024394: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80024398: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8002439C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800243A0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800243A4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800243A8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800243AC: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x800243B0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800243B4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800243B8: or          $t6, $v1, $at
    ctx->r14 = ctx->r3 | ctx->r1;
    // 0x800243BC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800243C0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800243C4: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x800243C8: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x800243CC: sll         $t9, $t8, 20
    ctx->r25 = S32(ctx->r24 << 20);
    // 0x800243D0: ori         $at, $at, 0x4000
    ctx->r1 = ctx->r1 | 0X4000;
    // 0x800243D4: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x800243D8: ori         $t7, $t6, 0x50
    ctx->r15 = ctx->r14 | 0X50;
    // 0x800243DC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800243E0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800243E4: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x800243E8: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x800243EC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800243F0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800243F4: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x800243F8: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x800243FC: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80024400: or          $t9, $t8, $a1
    ctx->r25 = ctx->r24 | ctx->r5;
    // 0x80024404: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x80024408: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8002440C: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x80024410: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80024414: or          $t9, $t8, $t2
    ctx->r25 = ctx->r24 | ctx->r10;
    // 0x80024418: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8002441C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80024420: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80024424: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80024428: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8002442C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80024430: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80024434: sll         $t8, $t7, 18
    ctx->r24 = S32(ctx->r15 << 18);
    // 0x80024438: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8002443C: blez        $t9, L_8002444C
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80024440: sll         $t7, $t6, 18
        ctx->r15 = S32(ctx->r14 << 18);
            goto L_8002444C;
    }
    // 0x80024440: sll         $t7, $t6, 18
    ctx->r15 = S32(ctx->r14 << 18);
    // 0x80024444: b           L_80024450
    // 0x80024448: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
        goto L_80024450;
    // 0x80024448: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_8002444C:
    // 0x8002444C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80024450:
    // 0x80024450: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80024454: blez        $t8, L_80024464
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80024458: andi        $t7, $a1, 0xFFF
        ctx->r15 = ctx->r5 & 0XFFF;
            goto L_80024464;
    }
    // 0x80024458: andi        $t7, $a1, 0xFFF
    ctx->r15 = ctx->r5 & 0XFFF;
    // 0x8002445C: b           L_80024468
    // 0x80024460: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
        goto L_80024468;
    // 0x80024460: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
L_80024464:
    // 0x80024464: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80024468:
    // 0x80024468: andi        $t9, $a2, 0xFFF
    ctx->r25 = ctx->r6 & 0XFFF;
    // 0x8002446C: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x80024470: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x80024474: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80024478: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8002447C: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x80024480: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80024484: sll         $t6, $t7, 18
    ctx->r14 = S32(ctx->r15 << 18);
    // 0x80024488: sra         $t8, $t6, 16
    ctx->r24 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8002448C: blez        $t8, L_8002449C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80024490: or          $a3, $t8, $zero
        ctx->r7 = ctx->r24 | 0;
            goto L_8002449C;
    }
    // 0x80024490: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80024494: b           L_800244A0
    // 0x80024498: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
        goto L_800244A0;
    // 0x80024498: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
L_8002449C:
    // 0x8002449C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800244A0:
    // 0x800244A0: sll         $t1, $t9, 18
    ctx->r9 = S32(ctx->r25 << 18);
    // 0x800244A4: sra         $t7, $t1, 16
    ctx->r15 = S32(SIGNED(ctx->r9) >> 16);
    // 0x800244A8: blez        $t7, L_800244B8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800244AC: andi        $t8, $a1, 0xFFF
        ctx->r24 = ctx->r5 & 0XFFF;
            goto L_800244B8;
    }
    // 0x800244AC: andi        $t8, $a1, 0xFFF
    ctx->r24 = ctx->r5 & 0XFFF;
    // 0x800244B0: b           L_800244BC
    // 0x800244B4: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
        goto L_800244BC;
    // 0x800244B4: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
L_800244B8:
    // 0x800244B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_800244BC:
    // 0x800244BC: andi        $t6, $a2, 0xFFF
    ctx->r14 = ctx->r6 & 0XFFF;
    // 0x800244C0: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x800244C4: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x800244C8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x800244CC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x800244D0: lui         $t6, 0xB400
    ctx->r14 = S32(0XB400 << 16);
    // 0x800244D4: addiu       $t8, $t2, 0x8
    ctx->r24 = ADD32(ctx->r10, 0X8);
    // 0x800244D8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800244DC: bgez        $a3, L_80024504
    if (SIGNED(ctx->r7) >= 0) {
        // 0x800244E0: sw          $t6, 0x0($t2)
        MEM_W(0X0, ctx->r10) = ctx->r14;
            goto L_80024504;
    }
    // 0x800244E0: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x800244E4: sll         $v0, $a3, 12
    ctx->r2 = S32(ctx->r7 << 12);
    // 0x800244E8: sra         $t9, $v0, 7
    ctx->r25 = S32(SIGNED(ctx->r2) >> 7);
    // 0x800244EC: bgez        $t9, L_800244FC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800244F0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800244FC;
    }
    // 0x800244F0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800244F4: b           L_80024508
    // 0x800244F8: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
        goto L_80024508;
    // 0x800244F8: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
L_800244FC:
    // 0x800244FC: b           L_80024508
    // 0x80024500: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
        goto L_80024508;
    // 0x80024500: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_80024504:
    // 0x80024504: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_80024508:
    // 0x80024508: negu        $t7, $zero
    ctx->r15 = SUB32(0, 0);
    // 0x8002450C: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80024510: negu        $t9, $a3
    ctx->r25 = SUB32(0, ctx->r7);
    // 0x80024514: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x80024518: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x8002451C: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x80024520: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80024524: lui         $t7, 0x1000
    ctx->r15 = S32(0X1000 << 16);
    // 0x80024528: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8002452C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80024530: ori         $t7, $t7, 0x400
    ctx->r15 = ctx->r15 | 0X400;
    // 0x80024534: lui         $t8, 0xB300
    ctx->r24 = S32(0XB300 << 16);
    // 0x80024538: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8002453C: jr          $ra
    // 0x80024540: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    return;
    // 0x80024540: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_80024544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024544: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80024548: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x8002454C: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x80024550: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x80024554: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x80024558: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x8002455C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80024560: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x80024564: srl         $t0, $t9, 5
    ctx->r8 = S32(U32(ctx->r25) >> 5);
    // 0x80024568: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8002456C: srl         $t5, $t4, 5
    ctx->r13 = S32(U32(ctx->r12) >> 5);
    // 0x80024570: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80024574: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80024578: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8002457C: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80024580: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80024584: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80024588: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8002458C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80024590: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80024594: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80024598: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x8002459C: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x800245A0: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x800245A4: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x800245A8: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    // 0x800245AC: sw          $t0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r8;
    // 0x800245B0: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x800245B4: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    // 0x800245B8: sw          $t5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r13;
    // 0x800245BC: beq         $t0, $zero, L_8002465C
    if (ctx->r8 == 0) {
        // 0x800245C0: sw          $t4, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r12;
            goto L_8002465C;
    }
    // 0x800245C0: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
    // 0x800245C4: beq         $t5, $zero, L_80024660
    if (ctx->r13 == 0) {
        // 0x800245C8: lw          $t2, 0x6C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X6C);
            goto L_80024660;
    }
    // 0x800245C8: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x800245CC: beq         $t5, $zero, L_8002465C
    if (ctx->r13 == 0) {
        // 0x800245D0: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_8002465C;
    }
    // 0x800245D0: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x800245D4: lw          $fp, 0xA8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA8);
    // 0x800245D8: nop

    // 0x800245DC: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
L_800245E0:
    // 0x800245E0: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x800245E4: beq         $t6, $zero, L_8002464C
    if (ctx->r14 == 0) {
        // 0x800245E8: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8002464C;
    }
    // 0x800245E8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800245EC: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x800245F0: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x800245F4: lw          $s0, 0x98($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X98);
    // 0x800245F8: sll         $v0, $s7, 5
    ctx->r2 = S32(ctx->r23 << 5);
    // 0x800245FC: addu        $s4, $v0, $t8
    ctx->r20 = ADD32(ctx->r2, ctx->r24);
    // 0x80024600: addiu       $s6, $s4, 0x1F
    ctx->r22 = ADD32(ctx->r20, 0X1F);
    // 0x80024604: addu        $s5, $v0, $t7
    ctx->r21 = ADD32(ctx->r2, ctx->r15);
    // 0x80024608: addiu       $s3, $s0, 0x1F
    ctx->r19 = ADD32(ctx->r16, 0X1F);
L_8002460C:
    // 0x8002460C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80024610: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x80024614: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80024618: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x8002461C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80024620: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x80024624: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x80024628: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x8002462C: jal         0x800242BC
    // 0x80024630: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    func_800242BC(rdram, ctx);
        goto after_0;
    // 0x80024630: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    after_0:
    // 0x80024634: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x80024638: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8002463C: addiu       $s2, $s2, 0x20
    ctx->r18 = ADD32(ctx->r18, 0X20);
    // 0x80024640: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80024644: bne         $s1, $t9, L_8002460C
    if (ctx->r17 != ctx->r25) {
        // 0x80024648: addiu       $s3, $s3, 0x20
        ctx->r19 = ADD32(ctx->r19, 0X20);
            goto L_8002460C;
    }
    // 0x80024648: addiu       $s3, $s3, 0x20
    ctx->r19 = ADD32(ctx->r19, 0X20);
L_8002464C:
    // 0x8002464C: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x80024650: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80024654: bne         $s7, $t1, L_800245E0
    if (ctx->r23 != ctx->r9) {
        // 0x80024658: lw          $t6, 0x68($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X68);
            goto L_800245E0;
    }
    // 0x80024658: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
L_8002465C:
    // 0x8002465C: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
L_80024660:
    // 0x80024660: lw          $fp, 0xA8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA8);
    // 0x80024664: andi        $t3, $t2, 0x1F
    ctx->r11 = ctx->r10 & 0X1F;
    // 0x80024668: beq         $t3, $zero, L_800246F4
    if (ctx->r11 == 0) {
        // 0x8002466C: sw          $t3, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r11;
            goto L_800246F4;
    }
    // 0x8002466C: sw          $t3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r11;
    // 0x80024670: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x80024674: nop

    // 0x80024678: beq         $t4, $zero, L_800246F8
    if (ctx->r12 == 0) {
        // 0x8002467C: lw          $s7, 0x64($sp)
        ctx->r23 = MEM_W(ctx->r29, 0X64);
            goto L_800246F8;
    }
    // 0x8002467C: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80024680: beq         $t4, $zero, L_800246F4
    if (ctx->r12 == 0) {
        // 0x80024684: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_800246F4;
    }
    // 0x80024684: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80024688: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x8002468C: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x80024690: sll         $t0, $v0, 5
    ctx->r8 = S32(ctx->r2 << 5);
    // 0x80024694: lw          $s4, 0x9C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X9C);
    // 0x80024698: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
    // 0x8002469C: addu        $s0, $t0, $t6
    ctx->r16 = ADD32(ctx->r8, ctx->r14);
    // 0x800246A0: addu        $s2, $s0, $t3
    ctx->r18 = ADD32(ctx->r16, ctx->r11);
    // 0x800246A4: lw          $s5, 0x94($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X94);
    // 0x800246A8: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x800246AC: addiu       $s6, $s4, 0x1F
    ctx->r22 = ADD32(ctx->r20, 0X1F);
    // 0x800246B0: addu        $s1, $t0, $t5
    ctx->r17 = ADD32(ctx->r8, ctx->r13);
L_800246B4:
    // 0x800246B4: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x800246B8: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x800246BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x800246C0: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x800246C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800246C8: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x800246CC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800246D0: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x800246D4: jal         0x800242BC
    // 0x800246D8: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    func_800242BC(rdram, ctx);
        goto after_1;
    // 0x800246D8: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    after_1:
    // 0x800246DC: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x800246E0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x800246E4: addiu       $s5, $s5, 0x20
    ctx->r21 = ADD32(ctx->r21, 0X20);
    // 0x800246E8: addiu       $s4, $s4, 0x20
    ctx->r20 = ADD32(ctx->r20, 0X20);
    // 0x800246EC: bne         $s7, $t7, L_800246B4
    if (ctx->r23 != ctx->r15) {
        // 0x800246F0: addiu       $s6, $s6, 0x20
        ctx->r22 = ADD32(ctx->r22, 0X20);
            goto L_800246B4;
    }
    // 0x800246F0: addiu       $s6, $s6, 0x20
    ctx->r22 = ADD32(ctx->r22, 0X20);
L_800246F4:
    // 0x800246F4: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
L_800246F8:
    // 0x800246F8: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x800246FC: andi        $t8, $s7, 0x1F
    ctx->r24 = ctx->r23 & 0X1F;
    // 0x80024700: beq         $t8, $zero, L_80024784
    if (ctx->r24 == 0) {
        // 0x80024704: or          $s7, $t8, $zero
        ctx->r23 = ctx->r24 | 0;
            goto L_80024784;
    }
    // 0x80024704: or          $s7, $t8, $zero
    ctx->r23 = ctx->r24 | 0;
    // 0x80024708: beq         $t9, $zero, L_80024788
    if (ctx->r25 == 0) {
        // 0x8002470C: lw          $t5, 0x58($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X58);
            goto L_80024788;
    }
    // 0x8002470C: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x80024710: beq         $t9, $zero, L_80024784
    if (ctx->r25 == 0) {
        // 0x80024714: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80024784;
    }
    // 0x80024714: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80024718: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x8002471C: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x80024720: sll         $t1, $v1, 5
    ctx->r9 = S32(ctx->r3 << 5);
    // 0x80024724: lw          $s0, 0x98($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X98);
    // 0x80024728: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    // 0x8002472C: addu        $s4, $t1, $t4
    ctx->r20 = ADD32(ctx->r9, ctx->r12);
    // 0x80024730: addu        $s6, $s4, $t8
    ctx->r22 = ADD32(ctx->r20, ctx->r24);
    // 0x80024734: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x80024738: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x8002473C: addiu       $s3, $s0, 0x1F
    ctx->r19 = ADD32(ctx->r16, 0X1F);
    // 0x80024740: addu        $s5, $t1, $t2
    ctx->r21 = ADD32(ctx->r9, ctx->r10);
L_80024744:
    // 0x80024744: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80024748: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x8002474C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80024750: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x80024754: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80024758: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x8002475C: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x80024760: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x80024764: jal         0x800242BC
    // 0x80024768: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    func_800242BC(rdram, ctx);
        goto after_2;
    // 0x80024768: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    after_2:
    // 0x8002476C: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80024770: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80024774: addiu       $s2, $s2, 0x20
    ctx->r18 = ADD32(ctx->r18, 0X20);
    // 0x80024778: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x8002477C: bne         $s1, $t0, L_80024744
    if (ctx->r17 != ctx->r8) {
        // 0x80024780: addiu       $s3, $s3, 0x20
        ctx->r19 = ADD32(ctx->r19, 0X20);
            goto L_80024744;
    }
    // 0x80024780: addiu       $s3, $s3, 0x20
    ctx->r19 = ADD32(ctx->r19, 0X20);
L_80024784:
    // 0x80024784: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
L_80024788:
    // 0x80024788: nop

    // 0x8002478C: beq         $t5, $zero, L_80024808
    if (ctx->r13 == 0) {
        // 0x80024790: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_80024808;
    }
    // 0x80024790: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80024794: beq         $s7, $zero, L_80024808
    if (ctx->r23 == 0) {
        // 0x80024798: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_80024808;
    }
    // 0x80024798: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8002479C: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x800247A0: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x800247A4: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x800247A8: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x800247AC: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x800247B0: lw          $t3, 0x90($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X90);
    // 0x800247B4: sll         $t7, $v1, 5
    ctx->r15 = S32(ctx->r3 << 5);
    // 0x800247B8: addu        $s0, $t6, $t9
    ctx->r16 = ADD32(ctx->r14, ctx->r25);
    // 0x800247BC: addu        $s4, $t7, $t1
    ctx->r20 = ADD32(ctx->r15, ctx->r9);
    // 0x800247C0: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x800247C4: addu        $t0, $s4, $s7
    ctx->r8 = ADD32(ctx->r20, ctx->r23);
    // 0x800247C8: addu        $t2, $s0, $t5
    ctx->r10 = ADD32(ctx->r16, ctx->r13);
    // 0x800247CC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800247D0: addu        $a2, $t6, $t3
    ctx->r6 = ADD32(ctx->r14, ctx->r11);
    // 0x800247D4: addiu       $t6, $t0, -0x1
    ctx->r14 = ADD32(ctx->r8, -0X1);
    // 0x800247D8: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x800247DC: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x800247E0: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x800247E4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800247E8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800247EC: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x800247F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800247F4: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x800247F8: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    // 0x800247FC: jal         0x800242BC
    // 0x80024800: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    func_800242BC(rdram, ctx);
        goto after_3;
    // 0x80024800: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    after_3:
    // 0x80024804: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_80024808:
    // 0x80024808: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8002480C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80024810: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80024814: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80024818: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8002481C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80024820: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80024824: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80024828: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8002482C: jr          $ra
    // 0x80024830: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80024830: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80024834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024834: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80024838: lw          $v1, -0x2F98($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2F98);
    // 0x8002483C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80024840: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80024844: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x80024848: lh          $a0, 0x9AE($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X9AE);
    // 0x8002484C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80024850: slti        $at, $a0, -0x28
    ctx->r1 = SIGNED(ctx->r4) < -0X28 ? 1 : 0;
    // 0x80024854: beq         $at, $zero, L_80024860
    if (ctx->r1 == 0) {
        // 0x80024858: lui         $a3, 0x801B
        ctx->r7 = S32(0X801B << 16);
            goto L_80024860;
    }
    // 0x80024858: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x8002485C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_80024860:
    // 0x80024860: slti        $at, $a0, 0x29
    ctx->r1 = SIGNED(ctx->r4) < 0X29 ? 1 : 0;
    // 0x80024864: bne         $at, $zero, L_80024874
    if (ctx->r1 != 0) {
        // 0x80024868: addiu       $a3, $a3, -0x3AEC
        ctx->r7 = ADD32(ctx->r7, -0X3AEC);
            goto L_80024874;
    }
    // 0x80024868: addiu       $a3, $a3, -0x3AEC
    ctx->r7 = ADD32(ctx->r7, -0X3AEC);
    // 0x8002486C: ori         $t6, $v0, 0x100
    ctx->r14 = ctx->r2 | 0X100;
    // 0x80024870: andi        $v0, $t6, 0xFFFF
    ctx->r2 = ctx->r14 & 0XFFFF;
L_80024874:
    // 0x80024874: lh          $a0, 0x9B0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X9B0);
    // 0x80024878: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x8002487C: slti        $at, $a0, 0x29
    ctx->r1 = SIGNED(ctx->r4) < 0X29 ? 1 : 0;
    // 0x80024880: bne         $at, $zero, L_80024890
    if (ctx->r1 != 0) {
        // 0x80024884: addiu       $t0, $t0, -0x3AEE
        ctx->r8 = ADD32(ctx->r8, -0X3AEE);
            goto L_80024890;
    }
    // 0x80024884: addiu       $t0, $t0, -0x3AEE
    ctx->r8 = ADD32(ctx->r8, -0X3AEE);
    // 0x80024888: ori         $t8, $v0, 0x800
    ctx->r24 = ctx->r2 | 0X800;
    // 0x8002488C: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
L_80024890:
    // 0x80024890: slti        $at, $a0, -0x28
    ctx->r1 = SIGNED(ctx->r4) < -0X28 ? 1 : 0;
    // 0x80024894: beq         $at, $zero, L_800248A0
    if (ctx->r1 == 0) {
        // 0x80024898: ori         $t1, $v0, 0x400
        ctx->r9 = ctx->r2 | 0X400;
            goto L_800248A0;
    }
    // 0x80024898: ori         $t1, $v0, 0x400
    ctx->r9 = ctx->r2 | 0X400;
    // 0x8002489C: andi        $v0, $t1, 0xFFFF
    ctx->r2 = ctx->r9 & 0XFFFF;
L_800248A0:
    // 0x800248A0: lhu         $t3, 0x0($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X0);
    // 0x800248A4: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x800248A8: xor         $t4, $t3, $v0
    ctx->r12 = ctx->r11 ^ ctx->r2;
    // 0x800248AC: and         $t6, $t4, $v0
    ctx->r14 = ctx->r12 & ctx->r2;
    // 0x800248B0: sh          $t6, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r14;
    // 0x800248B4: lhu         $a1, 0x9AC($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X9AC);
    // 0x800248B8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800248BC: or          $a2, $a1, $t6
    ctx->r6 = ctx->r5 | ctx->r14;
    // 0x800248C0: andi        $t7, $a2, 0xF00
    ctx->r15 = ctx->r6 & 0XF00;
    // 0x800248C4: bne         $t7, $zero, L_800248D4
    if (ctx->r15 != 0) {
        // 0x800248C8: or          $a2, $t7, $zero
        ctx->r6 = ctx->r15 | 0;
            goto L_800248D4;
    }
    // 0x800248C8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x800248CC: andi        $t8, $a1, 0xC000
    ctx->r24 = ctx->r5 & 0XC000;
    // 0x800248D0: beq         $t8, $zero, L_800248FC
    if (ctx->r24 == 0) {
        // 0x800248D4: lui         $a1, 0x801B
        ctx->r5 = S32(0X801B << 16);
            goto L_800248FC;
    }
L_800248D4:
    // 0x800248D4: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800248D8: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x800248DC: addiu       $a3, $a3, -0x3AEA
    ctx->r7 = ADD32(ctx->r7, -0X3AEA);
    // 0x800248E0: addiu       $a1, $a1, -0x3AE8
    ctx->r5 = ADD32(ctx->r5, -0X3AE8);
    // 0x800248E4: addiu       $a0, $a0, -0x3AE6
    ctx->r4 = ADD32(ctx->r4, -0X3AE6);
    // 0x800248E8: addiu       $t1, $zero, 0x12
    ctx->r9 = ADD32(0, 0X12);
    // 0x800248EC: sh          $a2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r6;
    // 0x800248F0: sh          $a2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r6;
    // 0x800248F4: b           L_80024918
    // 0x800248F8: sb          $t1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r9;
        goto L_80024918;
    // 0x800248F8: sb          $t1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r9;
L_800248FC:
    // 0x800248FC: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80024900: addiu       $a1, $a1, -0x3AE8
    ctx->r5 = ADD32(ctx->r5, -0X3AE8);
    // 0x80024904: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80024908: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8002490C: addiu       $a0, $a0, -0x3AE6
    ctx->r4 = ADD32(ctx->r4, -0X3AE6);
    // 0x80024910: addiu       $a3, $a3, -0x3AEA
    ctx->r7 = ADD32(ctx->r7, -0X3AEA);
    // 0x80024914: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
L_80024918:
    // 0x80024918: lb          $v0, 0x0($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X0);
    // 0x8002491C: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80024920: bne         $v0, $zero, L_8002494C
    if (ctx->r2 != 0) {
        // 0x80024924: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_8002494C;
    }
    // 0x80024924: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x80024928: lhu         $t2, 0x9AA($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X9AA);
    // 0x8002492C: lhu         $t3, 0x0($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X0);
    // 0x80024930: lhu         $t5, 0x0($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X0);
    // 0x80024934: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x80024938: and         $t6, $t4, $t5
    ctx->r14 = ctx->r12 & ctx->r13;
    // 0x8002493C: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    // 0x80024940: jr          $ra
    // 0x80024944: sb          $t7, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r15;
    return;
    // 0x80024944: sb          $t7, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r15;
    // 0x80024948: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
L_8002494C:
    // 0x8002494C: sb          $t8, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r24;
    // 0x80024950: jr          $ra
    // 0x80024954: nop

    return;
    // 0x80024954: nop

    // 0x80024958: nop

    // 0x8002495C: nop

;}
RECOMP_FUNC void func_80024960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024960: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80024964: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80024968: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8002496C: ori         $at, $at, 0x89D0
    ctx->r1 = ctx->r1 | 0X89D0;
    // 0x80024970: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80024974: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
L_80024978:
    // 0x80024978: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8002497C: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x80024980: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80024984: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80024988: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8002498C: bne         $at, $zero, L_80024978
    if (ctx->r1 != 0) {
        // 0x80024990: sb          $zero, -0x10($v0)
        MEM_B(-0X10, ctx->r2) = 0;
            goto L_80024978;
    }
    // 0x80024990: sb          $zero, -0x10($v0)
    MEM_B(-0X10, ctx->r2) = 0;
    // 0x80024994: jr          $ra
    // 0x80024998: nop

    return;
    // 0x80024998: nop

;}
RECOMP_FUNC void func_8002499C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002499C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x800249A0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800249A4: lw          $t8, -0x2F98($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2F98);
    // 0x800249A8: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800249AC: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x800249B0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800249B4: ori         $at, $at, 0x89D0
    ctx->r1 = ctx->r1 | 0X89D0;
    // 0x800249B8: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x800249BC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800249C0: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x800249C4: jr          $ra
    // 0x800249C8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    return;
    // 0x800249C8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
;}
RECOMP_FUNC void func_800249CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800249CC: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x800249D0: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800249D4: lw          $t2, -0x2F98($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X2F98);
    // 0x800249D8: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800249DC: sll         $t3, $t7, 4
    ctx->r11 = S32(ctx->r15 << 4);
    // 0x800249E0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800249E4: ori         $at, $at, 0x89D0
    ctx->r1 = ctx->r1 | 0X89D0;
    // 0x800249E8: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x800249EC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800249F0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x800249F4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x800249F8: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x800249FC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80024A00: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x80024A04: sh          $a2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r6;
    // 0x80024A08: sh          $a3, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r7;
    // 0x80024A0C: jr          $ra
    // 0x80024A10: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    return;
    // 0x80024A10: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_80024A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024A5C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80024A60: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80024A64: addiu       $t3, $t3, -0x2F94
    ctx->r11 = ADD32(ctx->r11, -0X2F94);
    // 0x80024A68: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80024A6C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80024A70: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80024A74: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x80024A78: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x80024A7C: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x80024A80: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x80024A84: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x80024A88: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x80024A8C: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x80024A90: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x80024A94: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x80024A98: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x80024A9C: lui         $t8, 0x300
    ctx->r24 = S32(0X300 << 16);
    // 0x80024AA0: addiu       $t8, $t8, 0x38
    ctx->r24 = ADD32(ctx->r24, 0X38);
    // 0x80024AA4: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x80024AA8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80024AAC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80024AB0: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80024AB4: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x80024AB8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80024ABC: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x80024AC0: addiu       $t7, $t7, 0x60B8
    ctx->r15 = ADD32(ctx->r15, 0X60B8);
    // 0x80024AC4: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x80024AC8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80024ACC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80024AD0: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80024AD4: lui         $t9, 0xE800
    ctx->r25 = S32(0XE800 << 16);
    // 0x80024AD8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80024ADC: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x80024AE0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80024AE4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80024AE8: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80024AEC: lui         $t7, 0xF500
    ctx->r15 = S32(0XF500 << 16);
    // 0x80024AF0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80024AF4: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x80024AF8: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x80024AFC: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x80024B00: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80024B04: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80024B08: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80024B0C: lui         $s0, 0xE600
    ctx->r16 = S32(0XE600 << 16);
    // 0x80024B10: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80024B14: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x80024B18: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80024B1C: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x80024B20: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80024B24: lui         $t8, 0x703
    ctx->r24 = S32(0X703 << 16);
    // 0x80024B28: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80024B2C: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x80024B30: ori         $t8, $t8, 0xC000
    ctx->r24 = ctx->r24 | 0XC000;
    // 0x80024B34: lui         $t7, 0xF000
    ctx->r15 = S32(0XF000 << 16);
    // 0x80024B38: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80024B3C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80024B40: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80024B44: lui         $s1, 0xE700
    ctx->r17 = S32(0XE700 << 16);
    // 0x80024B48: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80024B4C: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x80024B50: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80024B54: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x80024B58: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80024B5C: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x80024B60: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80024B64: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x80024B68: addiu       $t8, $t8, -0x5000
    ctx->r24 = ADD32(ctx->r24, -0X5000);
    // 0x80024B6C: lui         $t7, 0xFD50
    ctx->r15 = S32(0XFD50 << 16);
    // 0x80024B70: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80024B74: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80024B78: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80024B7C: lui         $t7, 0x704
    ctx->r15 = S32(0X704 << 16);
    // 0x80024B80: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80024B84: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x80024B88: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x80024B8C: lui         $t6, 0xF550
    ctx->r14 = S32(0XF550 << 16);
    // 0x80024B90: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80024B94: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80024B98: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80024B9C: lui         $t7, 0x73F
    ctx->r15 = S32(0X73F << 16);
    // 0x80024BA0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80024BA4: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x80024BA8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80024BAC: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x80024BB0: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80024BB4: ori         $t7, $t7, 0xF100
    ctx->r15 = ctx->r15 | 0XF100;
    // 0x80024BB8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80024BBC: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x80024BC0: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x80024BC4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80024BC8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80024BCC: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80024BD0: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x80024BD4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80024BD8: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x80024BDC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80024BE0: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x80024BE4: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80024BE8: lui         $t6, 0xF540
    ctx->r14 = S32(0XF540 << 16);
    // 0x80024BEC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80024BF0: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x80024BF4: ori         $t6, $t6, 0x1000
    ctx->r14 = ctx->r14 | 0X1000;
    // 0x80024BF8: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x80024BFC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80024C00: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80024C04: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80024C08: lui         $t6, 0x1F
    ctx->r14 = S32(0X1F << 16);
    // 0x80024C0C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80024C10: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x80024C14: ori         $t6, $t6, 0xC07C
    ctx->r14 = ctx->r14 | 0XC07C;
    // 0x80024C18: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x80024C1C: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x80024C20: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80024C24: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80024C28: lw          $s0, -0x2F98($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X2F98);
    // 0x80024C2C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80024C30: ori         $at, $at, 0x89D0
    ctx->r1 = ctx->r1 | 0X89D0;
    // 0x80024C34: lui         $s7, 0x1000
    ctx->r23 = S32(0X1000 << 16);
    // 0x80024C38: lui         $ra, 0x800A
    ctx->r31 = S32(0X800A << 16);
    // 0x80024C3C: addiu       $ra, $ra, 0x620C
    ctx->r31 = ADD32(ctx->r31, 0X620C);
    // 0x80024C40: ori         $s7, $s7, 0x400
    ctx->r23 = ctx->r23 | 0X400;
    // 0x80024C44: sh          $zero, 0x32($sp)
    MEM_H(0X32, ctx->r29) = 0;
    // 0x80024C48: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80024C4C: lui         $s4, 0xE400
    ctx->r20 = S32(0XE400 << 16);
    // 0x80024C50: lui         $s5, 0xB400
    ctx->r21 = S32(0XB400 << 16);
    // 0x80024C54: lui         $s6, 0xB300
    ctx->r22 = S32(0XB300 << 16);
    // 0x80024C58: addiu       $fp, $zero, 0x7
    ctx->r30 = ADD32(0, 0X7);
    // 0x80024C5C: addu        $s0, $s0, $at
    ctx->r16 = ADD32(ctx->r16, ctx->r1);
L_80024C60:
    // 0x80024C60: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80024C64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80024C68: beq         $v1, $zero, L_80024FE4
    if (ctx->r3 == 0) {
        // 0x80024C6C: lh          $t6, 0x32($sp)
        ctx->r14 = MEM_H(ctx->r29, 0X32);
            goto L_80024FE4;
    }
    // 0x80024C6C: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
    // 0x80024C70: beq         $v1, $at, L_80024C88
    if (ctx->r3 == ctx->r1) {
        // 0x80024C74: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80024C88;
    }
    // 0x80024C74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80024C78: beq         $v1, $at, L_80024E3C
    if (ctx->r3 == ctx->r1) {
        // 0x80024C7C: or          $t5, $zero, $zero
        ctx->r13 = 0 | 0;
            goto L_80024E3C;
    }
    // 0x80024C7C: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x80024C80: b           L_80024FE4
    // 0x80024C84: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
        goto L_80024FE4;
    // 0x80024C84: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
L_80024C88:
    // 0x80024C88: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x80024C8C: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x80024C90: lbu         $a1, 0x0($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X0);
    // 0x80024C94: nop

    // 0x80024C98: beq         $a1, $zero, L_80024FE0
    if (ctx->r5 == 0) {
        // 0x80024C9C: addiu       $at, $zero, 0x20
        ctx->r1 = ADD32(0, 0X20);
            goto L_80024FE0;
    }
L_80024C9C:
    // 0x80024C9C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x80024CA0: beq         $a1, $at, L_80024E20
    if (ctx->r5 == ctx->r1) {
        // 0x80024CA4: addiu       $t4, $t4, 0x1
        ctx->r12 = ADD32(ctx->r12, 0X1);
            goto L_80024E20;
    }
    // 0x80024CA4: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x80024CA8: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    // 0x80024CAC: lw          $t1, 0x0($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X0);
    // 0x80024CB0: addu        $a2, $t7, $t5
    ctx->r6 = ADD32(ctx->r15, ctx->r13);
    // 0x80024CB4: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x80024CB8: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80024CBC: addiu       $t7, $a1, -0x30
    ctx->r15 = ADD32(ctx->r5, -0X30);
    // 0x80024CC0: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80024CC4: addiu       $t9, $t9, 0x60E0
    ctx->r25 = ADD32(ctx->r25, 0X60E0);
    // 0x80024CC8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80024CCC: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x80024CD0: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80024CD4: addiu       $t6, $t1, 0x8
    ctx->r14 = ADD32(ctx->r9, 0X8);
    // 0x80024CD8: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x80024CDC: addiu       $t9, $a2, 0x7
    ctx->r25 = ADD32(ctx->r6, 0X7);
    // 0x80024CE0: sll         $t6, $t9, 18
    ctx->r14 = S32(ctx->r25 << 18);
    // 0x80024CE4: lh          $s1, 0x0($v1)
    ctx->r17 = MEM_H(ctx->r3, 0X0);
    // 0x80024CE8: lh          $s2, 0x2($v1)
    ctx->r18 = MEM_H(ctx->r3, 0X2);
    // 0x80024CEC: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80024CF0: blez        $t7, L_80024D00
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80024CF4: addiu       $t6, $a3, 0x7
        ctx->r14 = ADD32(ctx->r7, 0X7);
            goto L_80024D00;
    }
    // 0x80024CF4: addiu       $t6, $a3, 0x7
    ctx->r14 = ADD32(ctx->r7, 0X7);
    // 0x80024CF8: b           L_80024D04
    // 0x80024CFC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
        goto L_80024D04;
    // 0x80024CFC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
L_80024D00:
    // 0x80024D00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80024D04:
    // 0x80024D04: sll         $t7, $t6, 18
    ctx->r15 = S32(ctx->r14 << 18);
    // 0x80024D08: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80024D0C: blez        $t8, L_80024D1C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80024D10: andi        $t7, $a1, 0xFFF
        ctx->r15 = ctx->r5 & 0XFFF;
            goto L_80024D1C;
    }
    // 0x80024D10: andi        $t7, $a1, 0xFFF
    ctx->r15 = ctx->r5 & 0XFFF;
    // 0x80024D14: b           L_80024D20
    // 0x80024D18: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_80024D20;
    // 0x80024D18: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_80024D1C:
    // 0x80024D1C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80024D20:
    // 0x80024D20: andi        $t9, $v1, 0xFFF
    ctx->r25 = ctx->r3 & 0XFFF;
    // 0x80024D24: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x80024D28: or          $t6, $t9, $s4
    ctx->r14 = ctx->r25 | ctx->r20;
    // 0x80024D2C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80024D30: sll         $t7, $a0, 18
    ctx->r15 = S32(ctx->r4 << 18);
    // 0x80024D34: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80024D38: sra         $t6, $t7, 16
    ctx->r14 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80024D3C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80024D40: blez        $t6, L_80024D50
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80024D44: sw          $t9, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r25;
            goto L_80024D50;
    }
    // 0x80024D44: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x80024D48: b           L_80024D54
    // 0x80024D4C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
        goto L_80024D54;
    // 0x80024D4C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
L_80024D50:
    // 0x80024D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80024D54:
    // 0x80024D54: sll         $t0, $a3, 2
    ctx->r8 = S32(ctx->r7 << 2);
    // 0x80024D58: sll         $a2, $t0, 16
    ctx->r6 = S32(ctx->r8 << 16);
    // 0x80024D5C: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80024D60: blez        $t8, L_80024D70
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80024D64: or          $a2, $t8, $zero
        ctx->r6 = ctx->r24 | 0;
            goto L_80024D70;
    }
    // 0x80024D64: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80024D68: b           L_80024D74
    // 0x80024D6C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_80024D74;
    // 0x80024D6C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_80024D70:
    // 0x80024D70: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80024D74:
    // 0x80024D74: andi        $t7, $a1, 0xFFF
    ctx->r15 = ctx->r5 & 0XFFF;
    // 0x80024D78: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x80024D7C: andi        $t9, $v1, 0xFFF
    ctx->r25 = ctx->r3 & 0XFFF;
    // 0x80024D80: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x80024D84: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x80024D88: lw          $t2, 0x0($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X0);
    // 0x80024D8C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80024D90: addiu       $t7, $t2, 0x8
    ctx->r15 = ADD32(ctx->r10, 0X8);
    // 0x80024D94: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x80024D98: bgez        $a0, L_80024DC0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80024D9C: sw          $s5, 0x0($t2)
        MEM_W(0X0, ctx->r10) = ctx->r21;
            goto L_80024DC0;
    }
    // 0x80024D9C: sw          $s5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r21;
    // 0x80024DA0: sll         $v0, $a0, 12
    ctx->r2 = S32(ctx->r4 << 12);
    // 0x80024DA4: sra         $t9, $v0, 7
    ctx->r25 = S32(SIGNED(ctx->r2) >> 7);
    // 0x80024DA8: bgez        $t9, L_80024DB8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80024DAC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80024DB8;
    }
    // 0x80024DAC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80024DB0: b           L_80024DC4
    // 0x80024DB4: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
        goto L_80024DC4;
    // 0x80024DB4: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
L_80024DB8:
    // 0x80024DB8: b           L_80024DC4
    // 0x80024DBC: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
        goto L_80024DC4;
    // 0x80024DBC: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_80024DC0:
    // 0x80024DC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_80024DC4:
    // 0x80024DC4: bgez        $t0, L_80024DEC
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80024DC8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80024DEC;
    }
    // 0x80024DC8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80024DCC: sll         $v0, $a2, 10
    ctx->r2 = S32(ctx->r6 << 10);
    // 0x80024DD0: sra         $t6, $v0, 7
    ctx->r14 = S32(SIGNED(ctx->r2) >> 7);
    // 0x80024DD4: bgez        $t6, L_80024DE4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80024DD8: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80024DE4;
    }
    // 0x80024DD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80024DDC: b           L_80024DEC
    // 0x80024DE0: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
        goto L_80024DEC;
    // 0x80024DE0: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_80024DE4:
    // 0x80024DE4: b           L_80024DEC
    // 0x80024DE8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
        goto L_80024DEC;
    // 0x80024DE8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_80024DEC:
    // 0x80024DEC: subu        $t8, $s2, $v1
    ctx->r24 = SUB32(ctx->r18, ctx->r3);
    // 0x80024DF0: andi        $t7, $t8, 0xFFFF
    ctx->r15 = ctx->r24 & 0XFFFF;
    // 0x80024DF4: subu        $t6, $s1, $a3
    ctx->r14 = SUB32(ctx->r17, ctx->r7);
    // 0x80024DF8: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x80024DFC: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x80024E00: sw          $t9, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r25;
    // 0x80024E04: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80024E08: sll         $t7, $s3, 16
    ctx->r15 = S32(ctx->r19 << 16);
    // 0x80024E0C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80024E10: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x80024E14: sra         $s3, $t7, 16
    ctx->r19 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80024E18: sw          $s7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r23;
    // 0x80024E1C: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
L_80024E20:
    // 0x80024E20: lbu         $a1, 0x0($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X0);
    // 0x80024E24: addiu       $t5, $t5, 0x8
    ctx->r13 = ADD32(ctx->r13, 0X8);
    // 0x80024E28: sll         $t9, $t5, 16
    ctx->r25 = S32(ctx->r13 << 16);
    // 0x80024E2C: bne         $a1, $zero, L_80024C9C
    if (ctx->r5 != 0) {
        // 0x80024E30: sra         $t5, $t9, 16
        ctx->r13 = S32(SIGNED(ctx->r25) >> 16);
            goto L_80024C9C;
    }
    // 0x80024E30: sra         $t5, $t9, 16
    ctx->r13 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80024E34: b           L_80024FE4
    // 0x80024E38: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
        goto L_80024FE4;
    // 0x80024E38: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
L_80024E3C:
    // 0x80024E3C: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
L_80024E40:
    // 0x80024E40: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    // 0x80024E44: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80024E48: subu        $t6, $fp, $t4
    ctx->r14 = SUB32(ctx->r30, ctx->r12);
    // 0x80024E4C: addu        $a2, $t7, $t5
    ctx->r6 = ADD32(ctx->r15, ctx->r13);
    // 0x80024E50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80024E54: srlv        $v1, $v1, $t7
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r15 & 31));
    // 0x80024E58: lw          $t1, 0x0($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X0);
    // 0x80024E5C: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x80024E60: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x80024E64: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80024E68: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x80024E6C: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80024E70: addu        $a1, $ra, $t6
    ctx->r5 = ADD32(ctx->r31, ctx->r14);
    // 0x80024E74: addiu       $t7, $t1, 0x8
    ctx->r15 = ADD32(ctx->r9, 0X8);
    // 0x80024E78: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x80024E7C: addiu       $t6, $a2, 0x7
    ctx->r14 = ADD32(ctx->r6, 0X7);
    // 0x80024E80: sll         $t7, $t6, 18
    ctx->r15 = S32(ctx->r14 << 18);
    // 0x80024E84: lh          $s1, 0x0($a1)
    ctx->r17 = MEM_H(ctx->r5, 0X0);
    // 0x80024E88: lh          $s2, 0x2($a1)
    ctx->r18 = MEM_H(ctx->r5, 0X2);
    // 0x80024E8C: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80024E90: blez        $t8, L_80024EA0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80024E94: addiu       $t7, $a3, 0x7
        ctx->r15 = ADD32(ctx->r7, 0X7);
            goto L_80024EA0;
    }
    // 0x80024E94: addiu       $t7, $a3, 0x7
    ctx->r15 = ADD32(ctx->r7, 0X7);
    // 0x80024E98: b           L_80024EA4
    // 0x80024E9C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
        goto L_80024EA4;
    // 0x80024E9C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
L_80024EA0:
    // 0x80024EA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80024EA4:
    // 0x80024EA4: sll         $t8, $t7, 18
    ctx->r24 = S32(ctx->r15 << 18);
    // 0x80024EA8: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80024EAC: blez        $t9, L_80024EBC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80024EB0: andi        $t8, $a1, 0xFFF
        ctx->r24 = ctx->r5 & 0XFFF;
            goto L_80024EBC;
    }
    // 0x80024EB0: andi        $t8, $a1, 0xFFF
    ctx->r24 = ctx->r5 & 0XFFF;
    // 0x80024EB4: b           L_80024EC0
    // 0x80024EB8: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_80024EC0;
    // 0x80024EB8: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_80024EBC:
    // 0x80024EBC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80024EC0:
    // 0x80024EC0: andi        $t6, $v1, 0xFFF
    ctx->r14 = ctx->r3 & 0XFFF;
    // 0x80024EC4: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x80024EC8: or          $t7, $t6, $s4
    ctx->r15 = ctx->r14 | ctx->r20;
    // 0x80024ECC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80024ED0: sll         $t8, $a0, 18
    ctx->r24 = S32(ctx->r4 << 18);
    // 0x80024ED4: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x80024ED8: sra         $t7, $t8, 16
    ctx->r15 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80024EDC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80024EE0: blez        $t7, L_80024EF0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80024EE4: sw          $t6, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r14;
            goto L_80024EF0;
    }
    // 0x80024EE4: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x80024EE8: b           L_80024EF4
    // 0x80024EEC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
        goto L_80024EF4;
    // 0x80024EEC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
L_80024EF0:
    // 0x80024EF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80024EF4:
    // 0x80024EF4: sll         $t0, $a3, 2
    ctx->r8 = S32(ctx->r7 << 2);
    // 0x80024EF8: sll         $a2, $t0, 16
    ctx->r6 = S32(ctx->r8 << 16);
    // 0x80024EFC: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80024F00: blez        $t9, L_80024F10
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80024F04: or          $a2, $t9, $zero
        ctx->r6 = ctx->r25 | 0;
            goto L_80024F10;
    }
    // 0x80024F04: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80024F08: b           L_80024F14
    // 0x80024F0C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_80024F14;
    // 0x80024F0C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_80024F10:
    // 0x80024F10: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80024F14:
    // 0x80024F14: andi        $t8, $a1, 0xFFF
    ctx->r24 = ctx->r5 & 0XFFF;
    // 0x80024F18: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x80024F1C: andi        $t6, $v1, 0xFFF
    ctx->r14 = ctx->r3 & 0XFFF;
    // 0x80024F20: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x80024F24: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x80024F28: lw          $t2, 0x0($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X0);
    // 0x80024F2C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80024F30: addiu       $t8, $t2, 0x8
    ctx->r24 = ADD32(ctx->r10, 0X8);
    // 0x80024F34: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x80024F38: bgez        $a0, L_80024F60
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80024F3C: sw          $s5, 0x0($t2)
        MEM_W(0X0, ctx->r10) = ctx->r21;
            goto L_80024F60;
    }
    // 0x80024F3C: sw          $s5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r21;
    // 0x80024F40: sll         $v0, $a0, 12
    ctx->r2 = S32(ctx->r4 << 12);
    // 0x80024F44: sra         $t6, $v0, 7
    ctx->r14 = S32(SIGNED(ctx->r2) >> 7);
    // 0x80024F48: bgez        $t6, L_80024F58
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80024F4C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80024F58;
    }
    // 0x80024F4C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80024F50: b           L_80024F64
    // 0x80024F54: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
        goto L_80024F64;
    // 0x80024F54: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
L_80024F58:
    // 0x80024F58: b           L_80024F64
    // 0x80024F5C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
        goto L_80024F64;
    // 0x80024F5C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_80024F60:
    // 0x80024F60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_80024F64:
    // 0x80024F64: bgez        $t0, L_80024F8C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80024F68: addiu       $t5, $t5, 0x8
        ctx->r13 = ADD32(ctx->r13, 0X8);
            goto L_80024F8C;
    }
    // 0x80024F68: addiu       $t5, $t5, 0x8
    ctx->r13 = ADD32(ctx->r13, 0X8);
    // 0x80024F6C: sll         $v0, $a2, 10
    ctx->r2 = S32(ctx->r6 << 10);
    // 0x80024F70: sra         $t7, $v0, 7
    ctx->r15 = S32(SIGNED(ctx->r2) >> 7);
    // 0x80024F74: bgez        $t7, L_80024F84
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80024F78: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80024F84;
    }
    // 0x80024F78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80024F7C: b           L_80024F90
    // 0x80024F80: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
        goto L_80024F90;
    // 0x80024F80: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_80024F84:
    // 0x80024F84: b           L_80024F90
    // 0x80024F88: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
        goto L_80024F90;
    // 0x80024F88: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_80024F8C:
    // 0x80024F8C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80024F90:
    // 0x80024F90: subu        $t9, $s2, $v1
    ctx->r25 = SUB32(ctx->r18, ctx->r3);
    // 0x80024F94: andi        $t8, $t9, 0xFFFF
    ctx->r24 = ctx->r25 & 0XFFFF;
    // 0x80024F98: subu        $t7, $s1, $a3
    ctx->r15 = SUB32(ctx->r17, ctx->r7);
    // 0x80024F9C: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x80024FA0: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x80024FA4: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x80024FA8: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80024FAC: sll         $t8, $s3, 16
    ctx->r24 = S32(ctx->r19 << 16);
    // 0x80024FB0: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x80024FB4: sra         $s3, $t8, 16
    ctx->r19 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80024FB8: sll         $t8, $t4, 16
    ctx->r24 = S32(ctx->r12 << 16);
    // 0x80024FBC: sra         $t4, $t8, 16
    ctx->r12 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80024FC0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80024FC4: slti        $at, $t4, 0x8
    ctx->r1 = SIGNED(ctx->r12) < 0X8 ? 1 : 0;
    // 0x80024FC8: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x80024FCC: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x80024FD0: sra         $t5, $t6, 16
    ctx->r13 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80024FD4: sw          $s7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r23;
    // 0x80024FD8: bne         $at, $zero, L_80024E40
    if (ctx->r1 != 0) {
        // 0x80024FDC: sw          $s6, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r22;
            goto L_80024E40;
    }
    // 0x80024FDC: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
L_80024FE0:
    // 0x80024FE0: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
L_80024FE4:
    // 0x80024FE4: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80024FE8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80024FEC: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x80024FF0: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80024FF4: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x80024FF8: bne         $at, $zero, L_80024C60
    if (ctx->r1 != 0) {
        // 0x80024FFC: sh          $t7, 0x32($sp)
        MEM_H(0X32, ctx->r29) = ctx->r15;
            goto L_80024C60;
    }
    // 0x80024FFC: sh          $t7, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r15;
    // 0x80025000: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80025004: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x80025008: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x8002500C: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x80025010: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x80025014: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x80025018: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x8002501C: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x80025020: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x80025024: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x80025028: jr          $ra
    // 0x8002502C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8002502C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80025030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025030: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80025034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80025038: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8002503C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80025040: jal         0x80081C80
    // 0x80025044: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80025044: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80025048: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x8002504C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80025050: jal         0x80084530
    // 0x80025054: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80025054: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80025058: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x8002505C: addiu       $a2, $a3, -0x3A60
    ctx->r6 = ADD32(ctx->r7, -0X3A60);
    // 0x80025060: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80025064: jal         0x800878F0
    // 0x80025068: addiu       $a1, $sp, 0x19
    ctx->r5 = ADD32(ctx->r29, 0X19);
    osContInit_recomp(rdram, ctx);
        goto after_2;
    // 0x80025068: addiu       $a1, $sp, 0x19
    ctx->r5 = ADD32(ctx->r29, 0X19);
    after_2:
    // 0x8002506C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80025070: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80025074: addiu       $a1, $a1, -0x3A68
    ctx->r5 = ADD32(ctx->r5, -0X3A68);
    // 0x80025078: addiu       $a0, $a0, -0x3A80
    ctx->r4 = ADD32(ctx->r4, -0X3A80);
    // 0x8002507C: jal         0x80081C80
    // 0x80025080: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_3;
    // 0x80025080: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80025084: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80025088: addiu       $a1, $a1, -0x3A80
    ctx->r5 = ADD32(ctx->r5, -0X3A80);
    // 0x8002508C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80025090: jal         0x80084530
    // 0x80025094: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSetEventMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x80025094: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80025098: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x8002509C: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x800250A0: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x800250A4: addiu       $a3, $a3, -0x3A60
    ctx->r7 = ADD32(ctx->r7, -0X3A60);
    // 0x800250A8: addiu       $v1, $v1, -0x2F98
    ctx->r3 = ADD32(ctx->r3, -0X2F98);
    // 0x800250AC: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x800250B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800250B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800250B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x800250BC: lbu         $t6, 0x19($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X19);
L_800250C0:
    // 0x800250C0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800250C4: sllv        $t8, $t7, $v0
    ctx->r24 = S32(ctx->r15 << (ctx->r2 & 31));
    // 0x800250C8: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x800250CC: beq         $t9, $zero, L_80025108
    if (ctx->r25 == 0) {
        // 0x800250D0: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_80025108;
    }
    // 0x800250D0: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x800250D4: addu        $t1, $a3, $t0
    ctx->r9 = ADD32(ctx->r7, ctx->r8);
    // 0x800250D8: lbu         $t2, 0x3($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X3);
    // 0x800250DC: nop

    // 0x800250E0: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x800250E4: bne         $t3, $zero, L_80025108
    if (ctx->r11 != 0) {
        // 0x800250E8: nop
    
            goto L_80025108;
    }
    // 0x800250E8: nop

    // 0x800250EC: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800250F0: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x800250F4: mflo        $t5
    ctx->r13 = lo;
    // 0x800250F8: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x800250FC: addu        $t6, $t7, $a1
    ctx->r14 = ADD32(ctx->r15, ctx->r5);
    // 0x80025100: b           L_80025120
    // 0x80025104: sh          $a2, 0x9A8($t6)
    MEM_H(0X9A8, ctx->r14) = ctx->r6;
        goto L_80025120;
    // 0x80025104: sh          $a2, 0x9A8($t6)
    MEM_H(0X9A8, ctx->r14) = ctx->r6;
L_80025108:
    // 0x80025108: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002510C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80025110: mflo        $t9
    ctx->r25 = lo;
    // 0x80025114: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80025118: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x8002511C: sh          $zero, 0x9A8($t1)
    MEM_H(0X9A8, ctx->r9) = 0;
L_80025120:
    // 0x80025120: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80025124: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x80025128: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8002512C: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80025130: bne         $at, $zero, L_800250C0
    if (ctx->r1 != 0) {
        // 0x80025134: lbu         $t6, 0x19($sp)
        ctx->r14 = MEM_BU(ctx->r29, 0X19);
            goto L_800250C0;
    }
    // 0x80025134: lbu         $t6, 0x19($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X19);
    // 0x80025138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002513C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80025140: jr          $ra
    // 0x80025144: nop

    return;
    // 0x80025144: nop

;}
RECOMP_FUNC void func_80025148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025148: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002514C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80025150: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80025154: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80025158: addiu       $a0, $a0, -0x3A80
    ctx->r4 = ADD32(ctx->r4, -0X3A80);
    // 0x8002515C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80025160: jal         0x80081F50
    // 0x80025164: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80025164: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80025168: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x8002516C: addiu       $s0, $s0, -0x3A50
    ctx->r16 = ADD32(ctx->r16, -0X3A50);
    // 0x80025170: jal         0x80083D34
    // 0x80025174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osContGetReadData_recomp(rdram, ctx);
        goto after_1;
    // 0x80025174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80025178: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8002517C: lw          $v1, -0x2F98($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2F98);
    // 0x80025180: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80025184: ori         $at, $at, 0x89A8
    ctx->r1 = ctx->r1 | 0X89A8;
    // 0x80025188: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002518C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80025190: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x80025194: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
L_80025198:
    // 0x80025198: multu       $a2, $a3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002519C: lhu         $t7, 0x2($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X2);
    // 0x800251A0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800251A4: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x800251A8: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800251AC: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x800251B0: mflo        $t6
    ctx->r14 = lo;
    // 0x800251B4: addu        $v0, $s0, $t6
    ctx->r2 = ADD32(ctx->r16, ctx->r14);
    // 0x800251B8: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x800251BC: nop

    // 0x800251C0: xor         $t8, $t7, $a0
    ctx->r24 = ctx->r15 ^ ctx->r4;
    // 0x800251C4: and         $t9, $t8, $a0
    ctx->r25 = ctx->r24 & ctx->r4;
    // 0x800251C8: sh          $t9, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r25;
    // 0x800251CC: sh          $a0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r4;
    // 0x800251D0: lb          $t1, 0x2($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X2);
    // 0x800251D4: nop

    // 0x800251D8: sh          $t1, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r9;
    // 0x800251DC: lb          $t2, 0x3($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X3);
    // 0x800251E0: nop

    // 0x800251E4: sh          $t2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r10;
    // 0x800251E8: lbu         $t3, 0x4($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X4);
    // 0x800251EC: nop

    // 0x800251F0: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x800251F4: beq         $t4, $zero, L_80025204
    if (ctx->r12 == 0) {
        // 0x800251F8: nop
    
            goto L_80025204;
    }
    // 0x800251F8: nop

    // 0x800251FC: b           L_80025208
    // 0x80025200: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
        goto L_80025208;
    // 0x80025200: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
L_80025204:
    // 0x80025204: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
L_80025208:
    // 0x80025208: bne         $at, $zero, L_80025198
    if (ctx->r1 != 0) {
        // 0x8002520C: addiu       $v1, $v1, 0xA
        ctx->r3 = ADD32(ctx->r3, 0XA);
            goto L_80025198;
    }
    // 0x8002520C: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x80025210: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80025214: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80025218: jr          $ra
    // 0x8002521C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8002521C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80025394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025394: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80025398: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8002539C: lui         $fp, 0x801B
    ctx->r30 = S32(0X801B << 16);
    // 0x800253A0: addiu       $fp, $fp, -0x3A2C
    ctx->r30 = ADD32(ctx->r30, -0X3A2C);
    // 0x800253A4: sw          $a0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r4;
    // 0x800253A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800253AC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800253B0: sw          $a0, -0x3A30($at)
    MEM_W(-0X3A30, ctx->r1) = ctx->r4;
    // 0x800253B4: addiu       $v1, $v1, -0x3A24
    ctx->r3 = ADD32(ctx->r3, -0X3A24);
    // 0x800253B8: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x800253BC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800253C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800253C4: sw          $a2, -0x3A28($at)
    MEM_W(-0X3A28, ctx->r1) = ctx->r6;
    // 0x800253C8: addiu       $t7, $a2, -0x1
    ctx->r15 = ADD32(ctx->r6, -0X1);
    // 0x800253CC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800253D0: lui         $s2, 0x8011
    ctx->r18 = S32(0X8011 << 16);
    // 0x800253D4: lw          $s2, -0x2F98($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X2F98);
    // 0x800253D8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800253DC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800253E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800253E4: ori         $at, $at, 0xEED8
    ctx->r1 = ctx->r1 | 0XEED8;
    // 0x800253E8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800253EC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800253F0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800253F4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800253F8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800253FC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80025400: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80025404: jal         0x80025968
    // 0x80025408: addu        $s2, $s2, $at
    ctx->r18 = ADD32(ctx->r18, ctx->r1);
    func_80025968(rdram, ctx);
        goto after_0;
    // 0x80025408: addu        $s2, $s2, $at
    ctx->r18 = ADD32(ctx->r18, ctx->r1);
    after_0:
    // 0x8002540C: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x80025410: lw          $t8, -0x3A24($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A24);
    // 0x80025414: lui         $s5, 0x801B
    ctx->r21 = S32(0X801B << 16);
    // 0x80025418: blez        $t8, L_800258B0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8002541C: addiu       $s5, $s5, -0x3A1A
        ctx->r21 = ADD32(ctx->r21, -0X3A1A);
            goto L_800258B0;
    }
    // 0x8002541C: addiu       $s5, $s5, -0x3A1A
    ctx->r21 = ADD32(ctx->r21, -0X3A1A);
L_80025420:
    // 0x80025420: lbu         $s6, 0x0($s2)
    ctx->r22 = MEM_BU(ctx->r18, 0X0);
    // 0x80025424: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80025428: sll         $t9, $s6, 24
    ctx->r25 = S32(ctx->r22 << 24);
    // 0x8002542C: jal         0x800258E4
    // 0x80025430: or          $s6, $t9, $zero
    ctx->r22 = ctx->r25 | 0;
    func_800258E4(rdram, ctx);
        goto after_1;
    // 0x80025430: or          $s6, $t9, $zero
    ctx->r22 = ctx->r25 | 0;
    after_1:
    // 0x80025434: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x80025438: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8002543C: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x80025440: jal         0x800258E4
    // 0x80025444: addu        $s6, $s6, $t1
    ctx->r22 = ADD32(ctx->r22, ctx->r9);
    func_800258E4(rdram, ctx);
        goto after_2;
    // 0x80025444: addu        $s6, $s6, $t1
    ctx->r22 = ADD32(ctx->r22, ctx->r9);
    after_2:
    // 0x80025448: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x8002544C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80025450: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x80025454: jal         0x800258E4
    // 0x80025458: addu        $s6, $s6, $t3
    ctx->r22 = ADD32(ctx->r22, ctx->r11);
    func_800258E4(rdram, ctx);
        goto after_3;
    // 0x80025458: addu        $s6, $s6, $t3
    ctx->r22 = ADD32(ctx->r22, ctx->r11);
    after_3:
    // 0x8002545C: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x80025460: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80025464: jal         0x800258E4
    // 0x80025468: addu        $s6, $s6, $t4
    ctx->r22 = ADD32(ctx->r22, ctx->r12);
    func_800258E4(rdram, ctx);
        goto after_4;
    // 0x80025468: addu        $s6, $s6, $t4
    ctx->r22 = ADD32(ctx->r22, ctx->r12);
    after_4:
    // 0x8002546C: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
    // 0x80025470: lui         $at, 0xF000
    ctx->r1 = S32(0XF000 << 16);
    // 0x80025474: and         $a0, $s6, $at
    ctx->r4 = ctx->r22 & ctx->r1;
    // 0x80025478: addu        $s7, $v1, $s6
    ctx->r23 = ADD32(ctx->r3, ctx->r22);
    // 0x8002547C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80025480: bne         $a0, $zero, L_8002561C
    if (ctx->r4 != 0) {
        // 0x80025484: addiu       $s7, $s7, -0x4
        ctx->r23 = ADD32(ctx->r23, -0X4);
            goto L_8002561C;
    }
    // 0x80025484: addiu       $s7, $s7, -0x4
    ctx->r23 = ADD32(ctx->r23, -0X4);
    // 0x80025488: sltu        $at, $v1, $s7
    ctx->r1 = ctx->r3 < ctx->r23 ? 1 : 0;
    // 0x8002548C: beq         $at, $zero, L_80025614
    if (ctx->r1 == 0) {
        // 0x80025490: nop
    
            goto L_80025614;
    }
    // 0x80025490: nop

L_80025494:
    // 0x80025494: lbu         $s0, 0x0($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X0);
    // 0x80025498: jal         0x800258E4
    // 0x8002549C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800258E4(rdram, ctx);
        goto after_5;
    // 0x8002549C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_5:
    // 0x800254A0: slti        $at, $s0, 0x80
    ctx->r1 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x800254A4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800254A8: beq         $at, $zero, L_80025518
    if (ctx->r1 == 0) {
        // 0x800254AC: or          $s4, $s0, $zero
        ctx->r20 = ctx->r16 | 0;
            goto L_80025518;
    }
    // 0x800254AC: or          $s4, $s0, $zero
    ctx->r20 = ctx->r16 | 0;
    // 0x800254B0: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x800254B4: sll         $t6, $s0, 8
    ctx->r14 = S32(ctx->r16 << 8);
    // 0x800254B8: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800254BC: andi        $s3, $t7, 0x3FF
    ctx->r19 = ctx->r15 & 0X3FF;
    // 0x800254C0: jal         0x800258E4
    // 0x800254C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800258E4(rdram, ctx);
        goto after_6;
    // 0x800254C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x800254C8: sra         $a1, $s4, 2
    ctx->r5 = S32(SIGNED(ctx->r20) >> 2);
    // 0x800254CC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x800254D0: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x800254D4: addiu       $s0, $t9, -0x1
    ctx->r16 = ADD32(ctx->r25, -0X1);
    // 0x800254D8: andi        $t0, $s0, 0xFFFF
    ctx->r8 = ctx->r16 & 0XFFFF;
    // 0x800254DC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800254E0: subu        $a0, $s1, $s3
    ctx->r4 = SUB32(ctx->r17, ctx->r19);
    // 0x800254E4: beq         $t9, $zero, L_80025600
    if (ctx->r25 == 0) {
        // 0x800254E8: or          $s0, $t0, $zero
        ctx->r16 = ctx->r8 | 0;
            goto L_80025600;
    }
    // 0x800254E8: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
L_800254EC:
    // 0x800254EC: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800254F0: lbu         $t1, 0x0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X0);
    // 0x800254F4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800254F8: andi        $t2, $s0, 0xFFFF
    ctx->r10 = ctx->r16 & 0XFFFF;
    // 0x800254FC: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80025500: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80025504: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80025508: bne         $v1, $zero, L_800254EC
    if (ctx->r3 != 0) {
        // 0x8002550C: sb          $t1, -0x1($s1)
        MEM_B(-0X1, ctx->r17) = ctx->r9;
            goto L_800254EC;
    }
    // 0x8002550C: sb          $t1, -0x1($s1)
    MEM_B(-0X1, ctx->r17) = ctx->r9;
    // 0x80025510: b           L_80025604
    // 0x80025514: lw          $t2, 0x0($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X0);
        goto L_80025604;
    // 0x80025514: lw          $t2, 0x0($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X0);
L_80025518:
    // 0x80025518: slti        $at, $s4, 0xA0
    ctx->r1 = SIGNED(ctx->r20) < 0XA0 ? 1 : 0;
    // 0x8002551C: beq         $at, $zero, L_80025568
    if (ctx->r1 == 0) {
        // 0x80025520: andi        $t3, $s4, 0x1F
        ctx->r11 = ctx->r20 & 0X1F;
            goto L_80025568;
    }
    // 0x80025520: andi        $t3, $s4, 0x1F
    ctx->r11 = ctx->r20 & 0X1F;
    // 0x80025524: addiu       $s0, $t3, -0x1
    ctx->r16 = ADD32(ctx->r11, -0X1);
    // 0x80025528: andi        $t4, $s0, 0xFFFF
    ctx->r12 = ctx->r16 & 0XFFFF;
    // 0x8002552C: beq         $t3, $zero, L_80025600
    if (ctx->r11 == 0) {
        // 0x80025530: or          $s0, $t4, $zero
        ctx->r16 = ctx->r12 | 0;
            goto L_80025600;
    }
    // 0x80025530: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
L_80025534:
    // 0x80025534: lbu         $t5, 0x0($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X0);
    // 0x80025538: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8002553C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80025540: jal         0x800258E4
    // 0x80025544: sb          $t5, -0x1($s1)
    MEM_B(-0X1, ctx->r17) = ctx->r13;
    func_800258E4(rdram, ctx);
        goto after_7;
    // 0x80025544: sb          $t5, -0x1($s1)
    MEM_B(-0X1, ctx->r17) = ctx->r13;
    after_7:
    // 0x80025548: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8002554C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80025550: andi        $t6, $s0, 0xFFFF
    ctx->r14 = ctx->r16 & 0XFFFF;
    // 0x80025554: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80025558: bne         $v1, $zero, L_80025534
    if (ctx->r3 != 0) {
        // 0x8002555C: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_80025534;
    }
    // 0x8002555C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80025560: b           L_80025604
    // 0x80025564: lw          $t2, 0x0($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X0);
        goto L_80025604;
    // 0x80025564: lw          $t2, 0x0($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X0);
L_80025568:
    // 0x80025568: slti        $at, $s4, 0xE0
    ctx->r1 = SIGNED(ctx->r20) < 0XE0 ? 1 : 0;
    // 0x8002556C: beq         $at, $zero, L_80025594
    if (ctx->r1 == 0) {
        // 0x80025570: andi        $s0, $s4, 0x1F
        ctx->r16 = ctx->r20 & 0X1F;
            goto L_80025594;
    }
    // 0x80025570: andi        $s0, $s4, 0x1F
    ctx->r16 = ctx->r20 & 0X1F;
    // 0x80025574: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x80025578: andi        $t7, $s0, 0xFFFF
    ctx->r15 = ctx->r16 & 0XFFFF;
    // 0x8002557C: lbu         $s3, 0x0($s2)
    ctx->r19 = MEM_BU(ctx->r18, 0X0);
    // 0x80025580: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80025584: jal         0x800258E4
    // 0x80025588: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800258E4(rdram, ctx);
        goto after_8;
    // 0x80025588: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_8:
    // 0x8002558C: b           L_800255D0
    // 0x80025590: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_800255D0;
    // 0x80025590: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_80025594:
    // 0x80025594: slti        $at, $s4, 0xFF
    ctx->r1 = SIGNED(ctx->r20) < 0XFF ? 1 : 0;
    // 0x80025598: beq         $at, $zero, L_800255B4
    if (ctx->r1 == 0) {
        // 0x8002559C: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_800255B4;
    }
    // 0x8002559C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800255A0: andi        $s0, $s4, 0x1F
    ctx->r16 = ctx->r20 & 0X1F;
    // 0x800255A4: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800255A8: andi        $t8, $s0, 0xFFFF
    ctx->r24 = ctx->r16 & 0XFFFF;
    // 0x800255AC: b           L_800255D0
    // 0x800255B0: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
        goto L_800255D0;
    // 0x800255B0: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
L_800255B4:
    // 0x800255B4: lbu         $s0, 0x0($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X0);
    // 0x800255B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800255BC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800255C0: andi        $t9, $s0, 0xFFFF
    ctx->r25 = ctx->r16 & 0XFFFF;
    // 0x800255C4: jal         0x800258E4
    // 0x800255C8: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    func_800258E4(rdram, ctx);
        goto after_9;
    // 0x800255C8: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    after_9:
    // 0x800255CC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_800255D0:
    // 0x800255D0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800255D4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800255D8: andi        $t0, $s0, 0xFFFF
    ctx->r8 = ctx->r16 & 0XFFFF;
    // 0x800255DC: beq         $v1, $zero, L_80025600
    if (ctx->r3 == 0) {
        // 0x800255E0: or          $s0, $t0, $zero
        ctx->r16 = ctx->r8 | 0;
            goto L_80025600;
    }
    // 0x800255E0: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
L_800255E4:
    // 0x800255E4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800255E8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800255EC: andi        $t1, $s0, 0xFFFF
    ctx->r9 = ctx->r16 & 0XFFFF;
    // 0x800255F0: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x800255F4: sb          $s3, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r19;
    // 0x800255F8: bne         $v1, $zero, L_800255E4
    if (ctx->r3 != 0) {
        // 0x800255FC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800255E4;
    }
    // 0x800255FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80025600:
    // 0x80025600: lw          $t2, 0x0($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X0);
L_80025604:
    // 0x80025604: nop

    // 0x80025608: sltu        $at, $t2, $s7
    ctx->r1 = ctx->r10 < ctx->r23 ? 1 : 0;
    // 0x8002560C: bne         $at, $zero, L_80025494
    if (ctx->r1 != 0) {
        // 0x80025610: nop
    
            goto L_80025494;
    }
    // 0x80025610: nop

L_80025614:
    // 0x80025614: b           L_8002589C
    // 0x80025618: nop

        goto L_8002589C;
    // 0x80025618: nop

L_8002561C:
    // 0x8002561C: srl         $t4, $a0, 28
    ctx->r12 = S32(U32(ctx->r4) >> 28);
    // 0x80025620: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80025624: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80025628: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x8002562C: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
    // 0x80025630: addiu       $a1, $a1, -0x3A1C
    ctx->r5 = ADD32(ctx->r5, -0X3A1C);
    // 0x80025634: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80025638: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x8002563C: sh          $t5, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r13;
    // 0x80025640: beq         $at, $zero, L_8002589C
    if (ctx->r1 == 0) {
        // 0x80025644: sw          $s1, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r17;
            goto L_8002589C;
    }
    // 0x80025644: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
L_80025648:
    // 0x80025648: beq         $v0, $zero, L_800256BC
    if (ctx->r2 == 0) {
        // 0x8002564C: lui         $at, 0xFFF
        ctx->r1 = S32(0XFFF << 16);
            goto L_800256BC;
    }
    // 0x8002564C: lui         $at, 0xFFF
    ctx->r1 = S32(0XFFF << 16);
    // 0x80025650: lbu         $s6, 0x0($s2)
    ctx->r22 = MEM_BU(ctx->r18, 0X0);
    // 0x80025654: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80025658: sll         $t7, $s6, 24
    ctx->r15 = S32(ctx->r22 << 24);
    // 0x8002565C: jal         0x800258E4
    // 0x80025660: or          $s6, $t7, $zero
    ctx->r22 = ctx->r15 | 0;
    func_800258E4(rdram, ctx);
        goto after_10;
    // 0x80025660: or          $s6, $t7, $zero
    ctx->r22 = ctx->r15 | 0;
    after_10:
    // 0x80025664: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x80025668: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8002566C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80025670: jal         0x800258E4
    // 0x80025674: addu        $s6, $s6, $t9
    ctx->r22 = ADD32(ctx->r22, ctx->r25);
    func_800258E4(rdram, ctx);
        goto after_11;
    // 0x80025674: addu        $s6, $s6, $t9
    ctx->r22 = ADD32(ctx->r22, ctx->r25);
    after_11:
    // 0x80025678: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8002567C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80025680: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x80025684: jal         0x800258E4
    // 0x80025688: addu        $s6, $s6, $t1
    ctx->r22 = ADD32(ctx->r22, ctx->r9);
    func_800258E4(rdram, ctx);
        goto after_12;
    // 0x80025688: addu        $s6, $s6, $t1
    ctx->r22 = ADD32(ctx->r22, ctx->r9);
    after_12:
    // 0x8002568C: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x80025690: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80025694: jal         0x800258E4
    // 0x80025698: addu        $s6, $s6, $t2
    ctx->r22 = ADD32(ctx->r22, ctx->r10);
    func_800258E4(rdram, ctx);
        goto after_13;
    // 0x80025698: addu        $s6, $s6, $t2
    ctx->r22 = ADD32(ctx->r22, ctx->r10);
    after_13:
    // 0x8002569C: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
    // 0x800256A0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800256A4: addu        $s7, $v1, $s6
    ctx->r23 = ADD32(ctx->r3, ctx->r22);
    // 0x800256A8: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x800256AC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800256B0: addiu       $s7, $s7, -0x4
    ctx->r23 = ADD32(ctx->r23, -0X4);
    // 0x800256B4: addiu       $a1, $a1, -0x3A1C
    ctx->r5 = ADD32(ctx->r5, -0X3A1C);
    // 0x800256B8: lui         $at, 0xFFF
    ctx->r1 = S32(0XFFF << 16);
L_800256BC:
    // 0x800256BC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800256C0: and         $t3, $s6, $at
    ctx->r11 = ctx->r22 & ctx->r1;
    // 0x800256C4: sltu        $at, $v1, $s7
    ctx->r1 = ctx->r3 < ctx->r23 ? 1 : 0;
    // 0x800256C8: beq         $at, $zero, L_80025874
    if (ctx->r1 == 0) {
        // 0x800256CC: or          $s6, $t3, $zero
        ctx->r22 = ctx->r11 | 0;
            goto L_80025874;
    }
    // 0x800256CC: or          $s6, $t3, $zero
    ctx->r22 = ctx->r11 | 0;
L_800256D0:
    // 0x800256D0: lbu         $s0, 0x0($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X0);
    // 0x800256D4: jal         0x800258E4
    // 0x800256D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800258E4(rdram, ctx);
        goto after_14;
    // 0x800256D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_14:
    // 0x800256DC: slti        $at, $s0, 0x80
    ctx->r1 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x800256E0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800256E4: beq         $at, $zero, L_80025768
    if (ctx->r1 == 0) {
        // 0x800256E8: or          $s4, $s0, $zero
        ctx->r20 = ctx->r16 | 0;
            goto L_80025768;
    }
    // 0x800256E8: or          $s4, $s0, $zero
    ctx->r20 = ctx->r16 | 0;
    // 0x800256EC: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x800256F0: sll         $t5, $s0, 8
    ctx->r13 = S32(ctx->r16 << 8);
    // 0x800256F4: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800256F8: andi        $s3, $t6, 0x3FF
    ctx->r19 = ctx->r14 & 0X3FF;
    // 0x800256FC: jal         0x800258E4
    // 0x80025700: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800258E4(rdram, ctx);
        goto after_15;
    // 0x80025700: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_15:
    // 0x80025704: lhu         $t8, 0x0($s5)
    ctx->r24 = MEM_HU(ctx->r21, 0X0);
    // 0x80025708: sra         $a1, $s4, 2
    ctx->r5 = S32(SIGNED(ctx->r20) >> 2);
    // 0x8002570C: multu       $s3, $t8
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80025710: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80025714: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x80025718: addiu       $s0, $t0, -0x1
    ctx->r16 = ADD32(ctx->r8, -0X1);
    // 0x8002571C: andi        $t1, $s0, 0xFFFF
    ctx->r9 = ctx->r16 & 0XFFFF;
    // 0x80025720: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80025724: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x80025728: mflo        $t9
    ctx->r25 = lo;
    // 0x8002572C: subu        $a0, $s1, $t9
    ctx->r4 = SUB32(ctx->r17, ctx->r25);
    // 0x80025730: beq         $t0, $zero, L_80025858
    if (ctx->r8 == 0) {
        // 0x80025734: nop
    
            goto L_80025858;
    }
    // 0x80025734: nop

L_80025738:
    // 0x80025738: lbu         $t2, 0x0($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X0);
    // 0x8002573C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80025740: sb          $t2, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r10;
    // 0x80025744: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x80025748: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8002574C: andi        $t3, $s0, 0xFFFF
    ctx->r11 = ctx->r16 & 0XFFFF;
    // 0x80025750: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80025754: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80025758: bne         $v1, $zero, L_80025738
    if (ctx->r3 != 0) {
        // 0x8002575C: addu        $a0, $a0, $v0
        ctx->r4 = ADD32(ctx->r4, ctx->r2);
            goto L_80025738;
    }
    // 0x8002575C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80025760: b           L_8002585C
    // 0x80025764: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
        goto L_8002585C;
    // 0x80025764: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
L_80025768:
    // 0x80025768: slti        $at, $s4, 0xA0
    ctx->r1 = SIGNED(ctx->r20) < 0XA0 ? 1 : 0;
    // 0x8002576C: beq         $at, $zero, L_800257BC
    if (ctx->r1 == 0) {
        // 0x80025770: andi        $t4, $s4, 0x1F
        ctx->r12 = ctx->r20 & 0X1F;
            goto L_800257BC;
    }
    // 0x80025770: andi        $t4, $s4, 0x1F
    ctx->r12 = ctx->r20 & 0X1F;
    // 0x80025774: addiu       $s0, $t4, -0x1
    ctx->r16 = ADD32(ctx->r12, -0X1);
    // 0x80025778: andi        $t5, $s0, 0xFFFF
    ctx->r13 = ctx->r16 & 0XFFFF;
    // 0x8002577C: beq         $t4, $zero, L_80025858
    if (ctx->r12 == 0) {
        // 0x80025780: or          $s0, $t5, $zero
        ctx->r16 = ctx->r13 | 0;
            goto L_80025858;
    }
    // 0x80025780: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
L_80025784:
    // 0x80025784: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x80025788: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8002578C: sb          $t6, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r14;
    // 0x80025790: lhu         $t7, 0x0($s5)
    ctx->r15 = MEM_HU(ctx->r21, 0X0);
    // 0x80025794: jal         0x800258E4
    // 0x80025798: addu        $s1, $s1, $t7
    ctx->r17 = ADD32(ctx->r17, ctx->r15);
    func_800258E4(rdram, ctx);
        goto after_16;
    // 0x80025798: addu        $s1, $s1, $t7
    ctx->r17 = ADD32(ctx->r17, ctx->r15);
    after_16:
    // 0x8002579C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800257A0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800257A4: andi        $t8, $s0, 0xFFFF
    ctx->r24 = ctx->r16 & 0XFFFF;
    // 0x800257A8: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x800257AC: bne         $v1, $zero, L_80025784
    if (ctx->r3 != 0) {
        // 0x800257B0: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_80025784;
    }
    // 0x800257B0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800257B4: b           L_8002585C
    // 0x800257B8: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
        goto L_8002585C;
    // 0x800257B8: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
L_800257BC:
    // 0x800257BC: slti        $at, $s4, 0xE0
    ctx->r1 = SIGNED(ctx->r20) < 0XE0 ? 1 : 0;
    // 0x800257C0: beq         $at, $zero, L_800257E8
    if (ctx->r1 == 0) {
        // 0x800257C4: andi        $s0, $s4, 0x1F
        ctx->r16 = ctx->r20 & 0X1F;
            goto L_800257E8;
    }
    // 0x800257C4: andi        $s0, $s4, 0x1F
    ctx->r16 = ctx->r20 & 0X1F;
    // 0x800257C8: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800257CC: andi        $t9, $s0, 0xFFFF
    ctx->r25 = ctx->r16 & 0XFFFF;
    // 0x800257D0: lbu         $s3, 0x0($s2)
    ctx->r19 = MEM_BU(ctx->r18, 0X0);
    // 0x800257D4: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x800257D8: jal         0x800258E4
    // 0x800257DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800258E4(rdram, ctx);
        goto after_17;
    // 0x800257DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_17:
    // 0x800257E0: b           L_80025824
    // 0x800257E4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_80025824;
    // 0x800257E4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_800257E8:
    // 0x800257E8: slti        $at, $s4, 0xFF
    ctx->r1 = SIGNED(ctx->r20) < 0XFF ? 1 : 0;
    // 0x800257EC: beq         $at, $zero, L_80025808
    if (ctx->r1 == 0) {
        // 0x800257F0: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80025808;
    }
    // 0x800257F0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800257F4: andi        $s0, $s4, 0x1F
    ctx->r16 = ctx->r20 & 0X1F;
    // 0x800257F8: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800257FC: andi        $t0, $s0, 0xFFFF
    ctx->r8 = ctx->r16 & 0XFFFF;
    // 0x80025800: b           L_80025824
    // 0x80025804: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
        goto L_80025824;
    // 0x80025804: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
L_80025808:
    // 0x80025808: lbu         $s0, 0x0($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X0);
    // 0x8002580C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80025810: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x80025814: andi        $t1, $s0, 0xFFFF
    ctx->r9 = ctx->r16 & 0XFFFF;
    // 0x80025818: jal         0x800258E4
    // 0x8002581C: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    func_800258E4(rdram, ctx);
        goto after_18;
    // 0x8002581C: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    after_18:
    // 0x80025820: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_80025824:
    // 0x80025824: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80025828: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8002582C: andi        $t2, $s0, 0xFFFF
    ctx->r10 = ctx->r16 & 0XFFFF;
    // 0x80025830: beq         $v1, $zero, L_80025858
    if (ctx->r3 == 0) {
        // 0x80025834: or          $s0, $t2, $zero
        ctx->r16 = ctx->r10 | 0;
            goto L_80025858;
    }
    // 0x80025834: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
L_80025838:
    // 0x80025838: sb          $s3, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r19;
    // 0x8002583C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80025840: lhu         $t3, 0x0($s5)
    ctx->r11 = MEM_HU(ctx->r21, 0X0);
    // 0x80025844: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80025848: andi        $t4, $s0, 0xFFFF
    ctx->r12 = ctx->r16 & 0XFFFF;
    // 0x8002584C: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x80025850: bne         $v1, $zero, L_80025838
    if (ctx->r3 != 0) {
        // 0x80025854: addu        $s1, $s1, $t3
        ctx->r17 = ADD32(ctx->r17, ctx->r11);
            goto L_80025838;
    }
    // 0x80025854: addu        $s1, $s1, $t3
    ctx->r17 = ADD32(ctx->r17, ctx->r11);
L_80025858:
    // 0x80025858: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
L_8002585C:
    // 0x8002585C: nop

    // 0x80025860: sltu        $at, $v1, $s7
    ctx->r1 = ctx->r3 < ctx->r23 ? 1 : 0;
    // 0x80025864: bne         $at, $zero, L_800256D0
    if (ctx->r1 != 0) {
        // 0x80025868: nop
    
            goto L_800256D0;
    }
    // 0x80025868: nop

    // 0x8002586C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80025870: addiu       $a1, $a1, -0x3A1C
    ctx->r5 = ADD32(ctx->r5, -0X3A1C);
L_80025874:
    // 0x80025874: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80025878: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8002587C: lhu         $t9, 0x0($s5)
    ctx->r25 = MEM_HU(ctx->r21, 0X0);
    // 0x80025880: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80025884: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
    // 0x80025888: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8002588C: slt         $at, $v0, $t9
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80025890: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x80025894: bne         $at, $zero, L_80025648
    if (ctx->r1 != 0) {
        // 0x80025898: sh          $t8, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r24;
            goto L_80025648;
    }
    // 0x80025898: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
L_8002589C:
    // 0x8002589C: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x800258A0: lw          $t0, -0x3A24($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A24);
    // 0x800258A4: nop

    // 0x800258A8: bgtz        $t0, L_80025420
    if (SIGNED(ctx->r8) > 0) {
        // 0x800258AC: nop
    
            goto L_80025420;
    }
    // 0x800258AC: nop

L_800258B0:
    // 0x800258B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800258B4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x800258B8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800258BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800258C0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800258C4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800258C8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800258CC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800258D0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800258D4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800258D8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800258DC: jr          $ra
    // 0x800258E0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x800258E0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800258E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800258E4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800258E8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800258EC: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800258F0: addiu       $a1, $a1, -0x3A24
    ctx->r5 = ADD32(ctx->r5, -0X3A24);
    // 0x800258F4: addiu       $v1, $v1, -0x3A2C
    ctx->r3 = ADD32(ctx->r3, -0X3A2C);
    // 0x800258F8: addiu       $v0, $v0, -0x3A20
    ctx->r2 = ADD32(ctx->r2, -0X3A20);
    // 0x800258FC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80025900: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80025904: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x80025908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002590C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80025910: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80025914: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80025918: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002591C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80025920: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80025924: beq         $t9, $zero, L_80025934
    if (ctx->r25 == 0) {
        // 0x80025928: sw          $t1, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r9;
            goto L_80025934;
    }
    // 0x80025928: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x8002592C: b           L_80025958
    // 0x80025930: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
        goto L_80025958;
    // 0x80025930: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_80025934:
    // 0x80025934: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80025938: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x8002593C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80025940: ori         $at, $at, 0xEED8
    ctx->r1 = ctx->r1 | 0XEED8;
    // 0x80025944: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x80025948: jal         0x80025968
    // 0x8002594C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80025968(rdram, ctx);
        goto after_0;
    // 0x8002594C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80025950: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80025954: nop

L_80025958:
    // 0x80025958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002595C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80025960: jr          $ra
    // 0x80025964: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x80025964: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_80025968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025968: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002596C: addiu       $v1, $v1, -0x3A28
    ctx->r3 = ADD32(ctx->r3, -0X3A28);
    // 0x80025970: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80025974: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80025978: addiu       $t6, $zero, 0x1000
    ctx->r14 = ADD32(0, 0X1000);
    // 0x8002597C: addiu       $a0, $a0, -0x3A20
    ctx->r4 = ADD32(ctx->r4, -0X3A20);
    // 0x80025980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80025984: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x80025988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002598C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80025990: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80025994: bgez        $t8, L_800259B4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80025998: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_800259B4;
    }
    // 0x80025998: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8002599C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800259A0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x800259A4: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x800259A8: addu        $a2, $t6, $t0
    ctx->r6 = ADD32(ctx->r14, ctx->r8);
    // 0x800259AC: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x800259B0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_800259B4:
    // 0x800259B4: blez        $a2, L_800259E4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800259B8: lui         $a0, 0x801B
        ctx->r4 = S32(0X801B << 16);
            goto L_800259E4;
    }
    // 0x800259B8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800259BC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800259C0: lw          $a1, -0x2F98($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2F98);
    // 0x800259C4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800259C8: ori         $at, $at, 0xEED8
    ctx->r1 = ctx->r1 | 0XEED8;
    // 0x800259CC: lw          $a0, -0x3A30($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A30);
    // 0x800259D0: jal         0x8001B1B4
    // 0x800259D4: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x800259D4: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    after_0:
    // 0x800259D8: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x800259DC: lw          $a2, -0x3A20($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3A20);
    // 0x800259E0: nop

L_800259E4:
    // 0x800259E4: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x800259E8: lw          $t2, -0x3A30($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A30);
    // 0x800259EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800259F0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800259F4: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x800259F8: sw          $t3, -0x3A30($at)
    MEM_W(-0X3A30, ctx->r1) = ctx->r11;
    // 0x800259FC: jr          $ra
    // 0x80025A00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80025A00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80025A04: nop

    // 0x80025A08: nop

    // 0x80025A0C: nop

;}
RECOMP_FUNC void func_80025A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025A10: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80025A14: lw          $a1, -0x2F98($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2F98);
    // 0x80025A18: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x80025A1C: addu        $a2, $a2, $a1
    ctx->r6 = ADD32(ctx->r6, ctx->r5);
    // 0x80025A20: lbu         $a2, -0x765A($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X765A);
    // 0x80025A24: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80025A28: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x80025A2C: ori         $at, $at, 0xEEB0
    ctx->r1 = ctx->r1 | 0XEEB0;
    // 0x80025A30: addu        $v1, $a1, $t6
    ctx->r3 = ADD32(ctx->r5, ctx->r14);
    // 0x80025A34: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x80025A38: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80025A3C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80025A40: addiu       $t7, $a2, 0x1
    ctx->r15 = ADD32(ctx->r6, 0X1);
    // 0x80025A44: sb          $t7, -0x765A($at)
    MEM_B(-0X765A, ctx->r1) = ctx->r15;
    // 0x80025A48: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x80025A4C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80025A50: jr          $ra
    // 0x80025A54: nop

    return;
    // 0x80025A54: nop

;}
RECOMP_FUNC void func_80025A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025A58: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80025A5C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80025A60: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80025A64: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80025A68: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80025A6C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80025A70: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80025A74: lui         $s1, 0xFFF
    ctx->r17 = S32(0XFFF << 16);
    // 0x80025A78: lui         $s2, 0x2
    ctx->r18 = S32(0X2 << 16);
    // 0x80025A7C: lui         $s6, 0x2
    ctx->r22 = S32(0X2 << 16);
    // 0x80025A80: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80025A84: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80025A88: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80025A8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80025A90: ori         $s6, $s6, 0xEEB0
    ctx->r22 = ctx->r22 | 0XEEB0;
    // 0x80025A94: ori         $s2, $s2, 0x8000
    ctx->r18 = ctx->r18 | 0X8000;
    // 0x80025A98: ori         $s1, $s1, 0xFFFF
    ctx->r17 = ctx->r17 | 0XFFFF;
    // 0x80025A9C: lui         $s3, 0x4000
    ctx->r19 = S32(0X4000 << 16);
    // 0x80025AA0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80025AA4:
    // 0x80025AA4: sll         $t6, $s4, 2
    ctx->r14 = S32(ctx->r20 << 2);
    // 0x80025AA8: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x80025AAC: addu        $s5, $t7, $s6
    ctx->r21 = ADD32(ctx->r15, ctx->r22);
    // 0x80025AB0: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
    // 0x80025AB4: nop

    // 0x80025AB8: beq         $v1, $zero, L_80025B1C
    if (ctx->r3 == 0) {
        // 0x80025ABC: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_80025B1C;
    }
    // 0x80025ABC: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
L_80025AC0:
    // 0x80025AC0: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80025AC4: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x80025AC8: and         $t0, $t9, $s1
    ctx->r8 = ctx->r25 & ctx->r17;
    // 0x80025ACC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80025AD0: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x80025AD4: addu        $t3, $t2, $s2
    ctx->r11 = ADD32(ctx->r10, ctx->r18);
    // 0x80025AD8: sw          $t8, 0xAD0($t3)
    MEM_W(0XAD0, ctx->r11) = ctx->r24;
    // 0x80025ADC: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80025AE0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x80025AE4: jal         0x8001B120
    // 0x80025AE8: and         $a0, $t4, $s1
    ctx->r4 = ctx->r12 & ctx->r17;
    func_8001B120(rdram, ctx);
        goto after_0;
    // 0x80025AE8: and         $a0, $t4, $s1
    ctx->r4 = ctx->r12 & ctx->r17;
    after_0:
    // 0x80025AEC: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x80025AF0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80025AF4: and         $t6, $t5, $s3
    ctx->r14 = ctx->r13 & ctx->r19;
    // 0x80025AF8: bne         $t6, $zero, L_80025B0C
    if (ctx->r14 != 0) {
        // 0x80025AFC: nop
    
            goto L_80025B0C;
    }
    // 0x80025AFC: nop

    // 0x80025B00: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80025B04: b           L_80025AC0
    // 0x80025B08: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_80025AC0;
    // 0x80025B08: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80025B0C:
    // 0x80025B0C: sw          $zero, 0x0($s5)
    MEM_W(0X0, ctx->r21) = 0;
    // 0x80025B10: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80025B14: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80025B18: nop

L_80025B1C:
    // 0x80025B1C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80025B20: andi        $t7, $s4, 0xFF
    ctx->r15 = ctx->r20 & 0XFF;
    // 0x80025B24: slti        $at, $t7, 0xA
    ctx->r1 = SIGNED(ctx->r15) < 0XA ? 1 : 0;
    // 0x80025B28: bne         $at, $zero, L_80025AA4
    if (ctx->r1 != 0) {
        // 0x80025B2C: or          $s4, $t7, $zero
        ctx->r20 = ctx->r15 | 0;
            goto L_80025AA4;
    }
    // 0x80025B2C: or          $s4, $t7, $zero
    ctx->r20 = ctx->r15 | 0;
    // 0x80025B30: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80025B34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80025B38: sb          $zero, -0x765A($at)
    MEM_B(-0X765A, ctx->r1) = 0;
    // 0x80025B3C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80025B40: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80025B44: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80025B48: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80025B4C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80025B50: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80025B54: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80025B58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80025B5C: jr          $ra
    // 0x80025B60: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80025B60: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80025B64: nop

    // 0x80025B68: nop

    // 0x80025B6C: nop

;}
RECOMP_FUNC void func_80025BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025BB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80025BBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80025BC0: jal         0x80024960
    // 0x80025BC4: nop

    func_80024960(rdram, ctx);
        goto after_0;
    // 0x80025BC4: nop

    after_0:
    // 0x80025BC8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80025BCC: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x80025BD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80025BD4: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x80025BD8: jal         0x800249CC
    // 0x80025BDC: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    func_800249CC(rdram, ctx);
        goto after_1;
    // 0x80025BDC: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    after_1:
    // 0x80025BE0: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80025BE4: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x80025BE8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80025BEC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80025BF0: jal         0x8001BA08
    // 0x80025BF4: sh          $zero, -0x7666($at)
    MEM_H(-0X7666, ctx->r1) = 0;
    func_8001BA08(rdram, ctx);
        goto after_2;
    // 0x80025BF4: sh          $zero, -0x7666($at)
    MEM_H(-0X7666, ctx->r1) = 0;
    after_2:
    // 0x80025BF8: jal         0x802A1350
    // 0x80025BFC: nop

    LOOKUP_FUNC(0x802A1350)(rdram, ctx);
        goto after_3;
    // 0x80025BFC: nop

    after_3:
    // 0x80025C00: jal         0x802A1914
    // 0x80025C04: nop

    LOOKUP_FUNC(0x802A1914)(rdram, ctx);
        goto after_4;
    // 0x80025C04: nop

    after_4:
    // 0x80025C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80025C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80025C10: jr          $ra
    // 0x80025C14: nop

    return;
    // 0x80025C14: nop

;}
RECOMP_FUNC void func_80025C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025C18: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80025C1C: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x80025C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80025C24: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x80025C28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80025C2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80025C30: lhu         $t7, -0x7666($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X7666);
    // 0x80025C34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80025C38: andi        $t8, $t7, 0x10
    ctx->r24 = ctx->r15 & 0X10;
    // 0x80025C3C: beq         $t8, $zero, L_80025C5C
    if (ctx->r24 == 0) {
        // 0x80025C40: lui         $a1, 0x800D
        ctx->r5 = S32(0X800D << 16);
            goto L_80025C5C;
    }
    // 0x80025C40: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80025C44: addiu       $a1, $a1, 0x3AA0
    ctx->r5 = ADD32(ctx->r5, 0X3AA0);
    // 0x80025C48: addiu       $a2, $zero, 0x68
    ctx->r6 = ADD32(0, 0X68);
    // 0x80025C4C: jal         0x800249CC
    // 0x80025C50: addiu       $a3, $zero, 0x90
    ctx->r7 = ADD32(0, 0X90);
    func_800249CC(rdram, ctx);
        goto after_0;
    // 0x80025C50: addiu       $a3, $zero, 0x90
    ctx->r7 = ADD32(0, 0X90);
    after_0:
    // 0x80025C54: b           L_80025C64
    // 0x80025C58: nop

        goto L_80025C64;
    // 0x80025C58: nop

L_80025C5C:
    // 0x80025C5C: jal         0x8002499C
    // 0x80025C60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8002499C(rdram, ctx);
        goto after_1;
    // 0x80025C60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
L_80025C64:
    // 0x80025C64: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80025C68: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80025C6C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80025C70: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80025C74: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
    // 0x80025C78: lhu         $t9, 0x9AC($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X9AC);
    // 0x80025C7C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80025C80: andi        $t0, $t9, 0x1000
    ctx->r8 = ctx->r25 & 0X1000;
    // 0x80025C84: beq         $t0, $zero, L_80025CA8
    if (ctx->r8 == 0) {
        // 0x80025C88: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_80025CA8;
    }
    // 0x80025C88: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80025C8C: jal         0x8001BA88
    // 0x80025C90: sb          $zero, -0x2FA4($at)
    MEM_B(-0X2FA4, ctx->r1) = 0;
    func_8001BA88(rdram, ctx);
        goto after_2;
    // 0x80025C90: sb          $zero, -0x2FA4($at)
    MEM_B(-0X2FA4, ctx->r1) = 0;
    after_2:
    // 0x80025C94: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80025C98: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80025C9C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80025CA0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80025CA4: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
L_80025CA8:
    // 0x80025CA8: lhu         $a0, 0x99A($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X99A);
    // 0x80025CAC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80025CB0: slti        $at, $a0, 0x101
    ctx->r1 = SIGNED(ctx->r4) < 0X101 ? 1 : 0;
    // 0x80025CB4: bne         $at, $zero, L_80025CDC
    if (ctx->r1 != 0) {
        // 0x80025CB8: lui         $at, 0x3
        ctx->r1 = S32(0X3 << 16);
            goto L_80025CDC;
    }
    // 0x80025CB8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80025CBC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80025CC0: sb          $t1, -0x7663($at)
    MEM_B(-0X7663, ctx->r1) = ctx->r9;
    // 0x80025CC4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80025CC8: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80025CCC: lui         $a0, 0x3
    ctx->r4 = S32(0X3 << 16);
    // 0x80025CD0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80025CD4: lhu         $a0, -0x7666($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X7666);
    // 0x80025CD8: nop

L_80025CDC:
    // 0x80025CDC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80025CE0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80025CE4: addiu       $t2, $a0, 0x1
    ctx->r10 = ADD32(ctx->r4, 0X1);
    // 0x80025CE8: sh          $t2, -0x7666($at)
    MEM_H(-0X7666, ctx->r1) = ctx->r10;
    // 0x80025CEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80025CF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80025CF4: jr          $ra
    // 0x80025CF8: nop

    return;
    // 0x80025CF8: nop

    // 0x80025CFC: nop

;}
RECOMP_FUNC void func_80025D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025D00: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80025D04: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x80025D08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80025D0C: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x80025D10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80025D14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80025D18: lbu         $t7, -0x765E($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X765E);
    // 0x80025D1C: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80025D20: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80025D24: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80025D28: lw          $t9, 0x6BE0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6BE0);
    // 0x80025D2C: nop

    // 0x80025D30: jalr        $t9
    // 0x80025D34: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80025D34: nop

    after_0:
    // 0x80025D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80025D3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80025D40: jr          $ra
    // 0x80025D44: nop

    return;
    // 0x80025D44: nop

;}
RECOMP_FUNC void func_80025D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025D48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80025D4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80025D50: jal         0x80024960
    // 0x80025D54: nop

    func_80024960(rdram, ctx);
        goto after_0;
    // 0x80025D54: nop

    after_0:
    // 0x80025D58: jal         0x8005ACAC
    // 0x80025D5C: nop

    func_8005ACAC(rdram, ctx);
        goto after_1;
    // 0x80025D5C: nop

    after_1:
    // 0x80025D60: jal         0x800603F0
    // 0x80025D64: nop

    func_800603F0(rdram, ctx);
        goto after_2;
    // 0x80025D64: nop

    after_2:
    // 0x80025D68: jal         0x80298AB0
    // 0x80025D6C: nop

    LOOKUP_FUNC(0x80298AB0)(rdram, ctx);
        goto after_3;
    // 0x80025D6C: nop

    after_3:
    // 0x80025D70: jal         0x80027B60
    // 0x80025D74: nop

    func_80027B60(rdram, ctx);
        goto after_4;
    // 0x80025D74: nop

    after_4:
    // 0x80025D78: jal         0x80063B94
    // 0x80025D7C: nop

    func_80063B94(rdram, ctx);
        goto after_5;
    // 0x80025D7C: nop

    after_5:
    // 0x80025D80: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80025D84: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80025D88: lhu         $t8, 0x8($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X8);
    // 0x80025D8C: lhu         $t0, 0xA9C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0XA9C);
    // 0x80025D90: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80025D94: addiu       $v1, $v1, 0xB78
    ctx->r3 = ADD32(ctx->r3, 0XB78);
    // 0x80025D98: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x80025D9C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80025DA0: ori         $t9, $t8, 0x18
    ctx->r25 = ctx->r24 | 0X18;
    // 0x80025DA4: andi        $t1, $t0, 0xFFE7
    ctx->r9 = ctx->r8 & 0XFFE7;
    // 0x80025DA8: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x80025DAC: sb          $t7, 0xA94($v0)
    MEM_B(0XA94, ctx->r2) = ctx->r15;
    // 0x80025DB0: sh          $t9, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r25;
    // 0x80025DB4: sh          $t1, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r9;
    // 0x80025DB8: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x80025DBC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80025DC0: sh          $zero, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = 0;
    // 0x80025DC4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80025DC8: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80025DCC: lw          $t3, -0x2F98($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X2F98);
    // 0x80025DD0: sh          $zero, 0xB72($at)
    MEM_H(0XB72, ctx->r1) = 0;
    // 0x80025DD4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80025DD8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80025DDC: jal         0x8001B890
    // 0x80025DE0: sh          $zero, -0x7666($at)
    MEM_H(-0X7666, ctx->r1) = 0;
    func_8001B890(rdram, ctx);
        goto after_6;
    // 0x80025DE0: sh          $zero, -0x7666($at)
    MEM_H(-0X7666, ctx->r1) = 0;
    after_6:
    // 0x80025DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80025DE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80025DEC: jr          $ra
    // 0x80025DF0: nop

    return;
    // 0x80025DF0: nop

;}
RECOMP_FUNC void func_80025DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025DF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80025DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80025DFC: jal         0x8001B890
    // 0x80025E00: nop

    func_8001B890(rdram, ctx);
        goto after_0;
    // 0x80025E00: nop

    after_0:
    // 0x80025E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80025E08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80025E0C: jr          $ra
    // 0x80025E10: nop

    return;
    // 0x80025E10: nop

;}
RECOMP_FUNC void func_80025E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025E14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80025E18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80025E1C: jal         0x8001B854
    // 0x80025E20: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001B854(rdram, ctx);
        goto after_0;
    // 0x80025E20: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x80025E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80025E28: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80025E2C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80025E30: sh          $t6, -0x3A04($at)
    MEM_H(-0X3A04, ctx->r1) = ctx->r14;
    // 0x80025E34: jr          $ra
    // 0x80025E38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80025E38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80025E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025E3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80025E40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80025E44: jal         0x800273E8
    // 0x80025E48: nop

    func_800273E8(rdram, ctx);
        goto after_0;
    // 0x80025E48: nop

    after_0:
    // 0x80025E4C: jal         0x80021960
    // 0x80025E50: nop

    func_80021960(rdram, ctx);
        goto after_1;
    // 0x80025E50: nop

    after_1:
    // 0x80025E54: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80025E58: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80025E5C: jal         0x800603F0
    // 0x80025E60: sh          $t6, -0x2FAC($at)
    MEM_H(-0X2FAC, ctx->r1) = ctx->r14;
    func_800603F0(rdram, ctx);
        goto after_2;
    // 0x80025E60: sh          $t6, -0x2FAC($at)
    MEM_H(-0X2FAC, ctx->r1) = ctx->r14;
    after_2:
    // 0x80025E64: jal         0x8002F2AC
    // 0x80025E68: nop

    func_8002F2AC(rdram, ctx);
        goto after_3;
    // 0x80025E68: nop

    after_3:
    // 0x80025E6C: jal         0x80021004
    // 0x80025E70: nop

    func_80021004(rdram, ctx);
        goto after_4;
    // 0x80025E70: nop

    after_4:
    // 0x80025E74: jal         0x80020270
    // 0x80025E78: nop

    func_80020270(rdram, ctx);
        goto after_5;
    // 0x80025E78: nop

    after_5:
    // 0x80025E7C: jal         0x8001B854
    // 0x80025E80: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_8001B854(rdram, ctx);
        goto after_6;
    // 0x80025E80: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_6:
    // 0x80025E84: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80025E88: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x80025E8C: lui         $t8, 0x3
    ctx->r24 = S32(0X3 << 16);
    // 0x80025E90: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80025E94: lbu         $t8, -0x7664($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X7664);
    // 0x80025E98: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80025E9C: beq         $t8, $at, L_80025EAC
    if (ctx->r24 == ctx->r1) {
        // 0x80025EA0: addiu       $t9, $zero, 0x5
        ctx->r25 = ADD32(0, 0X5);
            goto L_80025EAC;
    }
    // 0x80025EA0: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x80025EA4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80025EA8: sh          $t9, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r25;
L_80025EAC:
    // 0x80025EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80025EB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80025EB4: jr          $ra
    // 0x80025EB8: nop

    return;
    // 0x80025EB8: nop

;}
RECOMP_FUNC void func_80025EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025EBC: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80025EC0: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x80025EC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80025EC8: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x80025ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80025ED0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80025ED4: lbu         $t7, -0x7664($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7664);
    // 0x80025ED8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80025EDC: beq         $t7, $at, L_80025EFC
    if (ctx->r15 == ctx->r1) {
        // 0x80025EE0: lui         $v0, 0x801B
        ctx->r2 = S32(0X801B << 16);
            goto L_80025EFC;
    }
    // 0x80025EE0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80025EE4: lh          $v0, -0x3A10($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3A10);
    // 0x80025EE8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80025EEC: blez        $v0, L_80025EFC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80025EF0: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_80025EFC;
    }
    // 0x80025EF0: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x80025EF4: b           L_80025FA4
    // 0x80025EF8: sh          $t8, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r24;
        goto L_80025FA4;
    // 0x80025EF8: sh          $t8, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r24;
L_80025EFC:
    // 0x80025EFC: jal         0x80021960
    // 0x80025F00: nop

    func_80021960(rdram, ctx);
        goto after_0;
    // 0x80025F00: nop

    after_0:
    // 0x80025F04: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80025F08: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80025F0C: jal         0x8001B890
    // 0x80025F10: sh          $t9, -0x2FAC($at)
    MEM_H(-0X2FAC, ctx->r1) = ctx->r25;
    func_8001B890(rdram, ctx);
        goto after_1;
    // 0x80025F10: sh          $t9, -0x2FAC($at)
    MEM_H(-0X2FAC, ctx->r1) = ctx->r25;
    after_1:
    // 0x80025F14: jal         0x8028D160
    // 0x80025F18: nop

    LOOKUP_FUNC(0x8028D160)(rdram, ctx);
        goto after_2;
    // 0x80025F18: nop

    after_2:
    // 0x80025F1C: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80025F20: lw          $t0, -0x2F98($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2F98);
    // 0x80025F24: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x80025F28: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80025F2C: lbu         $v0, -0x7664($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7664);
    // 0x80025F30: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80025F34: bne         $v0, $at, L_80025F70
    if (ctx->r2 != ctx->r1) {
        // 0x80025F38: lui         $t1, 0x8012
        ctx->r9 = S32(0X8012 << 16);
            goto L_80025F70;
    }
    // 0x80025F38: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80025F3C: lbu         $t1, -0x3298($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X3298);
    // 0x80025F40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80025F44: bne         $t1, $at, L_80025F94
    if (ctx->r9 != ctx->r1) {
        // 0x80025F48: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_80025F94;
    }
    // 0x80025F48: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80025F4C: jal         0x8028D3C8
    // 0x80025F50: nop

    LOOKUP_FUNC(0x8028D3C8)(rdram, ctx);
        goto after_3;
    // 0x80025F50: nop

    after_3:
    // 0x80025F54: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80025F58: lw          $t2, -0x2F98($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X2F98);
    // 0x80025F5C: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x80025F60: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x80025F64: lbu         $v0, -0x7664($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7664);
    // 0x80025F68: b           L_80025F94
    // 0x80025F6C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
        goto L_80025F94;
    // 0x80025F6C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
L_80025F70:
    // 0x80025F70: jal         0x8028D3C8
    // 0x80025F74: nop

    LOOKUP_FUNC(0x8028D3C8)(rdram, ctx);
        goto after_4;
    // 0x80025F74: nop

    after_4:
    // 0x80025F78: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80025F7C: lw          $t3, -0x2F98($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X2F98);
    // 0x80025F80: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x80025F84: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x80025F88: lbu         $v0, -0x7664($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7664);
    // 0x80025F8C: nop

    // 0x80025F90: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
L_80025F94:
    // 0x80025F94: beq         $v0, $at, L_80025FA4
    if (ctx->r2 == ctx->r1) {
        // 0x80025F98: addiu       $t4, $zero, 0x5
        ctx->r12 = ADD32(0, 0X5);
            goto L_80025FA4;
    }
    // 0x80025F98: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x80025F9C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80025FA0: sh          $t4, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r12;
L_80025FA4:
    // 0x80025FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80025FA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80025FAC: jr          $ra
    // 0x80025FB0: nop

    return;
    // 0x80025FB0: nop

;}
RECOMP_FUNC void func_80025FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025FB4: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80025FB8: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x80025FBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80025FC0: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x80025FC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80025FC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80025FCC: lbu         $t7, -0x7664($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7664);
    // 0x80025FD0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80025FD4: beq         $t7, $at, L_80025FF4
    if (ctx->r15 == ctx->r1) {
        // 0x80025FD8: lui         $v0, 0x801B
        ctx->r2 = S32(0X801B << 16);
            goto L_80025FF4;
    }
    // 0x80025FD8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80025FDC: lh          $v0, -0x3A10($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3A10);
    // 0x80025FE0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80025FE4: blez        $v0, L_80025FF4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80025FE8: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_80025FF4;
    }
    // 0x80025FE8: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x80025FEC: b           L_8002612C
    // 0x80025FF0: sh          $t8, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r24;
        goto L_8002612C;
    // 0x80025FF0: sh          $t8, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r24;
L_80025FF4:
    // 0x80025FF4: jal         0x80021960
    // 0x80025FF8: nop

    func_80021960(rdram, ctx);
        goto after_0;
    // 0x80025FF8: nop

    after_0:
    // 0x80025FFC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80026000: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80026004: jal         0x8005C7AC
    // 0x80026008: sh          $t9, -0x2FAC($at)
    MEM_H(-0X2FAC, ctx->r1) = ctx->r25;
    func_8005C7AC(rdram, ctx);
        goto after_1;
    // 0x80026008: sh          $t9, -0x2FAC($at)
    MEM_H(-0X2FAC, ctx->r1) = ctx->r25;
    after_1:
    // 0x8002600C: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x80026010: lhu         $t0, -0x3A04($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X3A04);
    // 0x80026014: nop

    // 0x80026018: bne         $t0, $zero, L_80026048
    if (ctx->r8 != 0) {
        // 0x8002601C: nop
    
            goto L_80026048;
    }
    // 0x8002601C: nop

    // 0x80026020: jal         0x8005B330
    // 0x80026024: nop

    func_8005B330(rdram, ctx);
        goto after_2;
    // 0x80026024: nop

    after_2:
    // 0x80026028: jal         0x800599A0
    // 0x8002602C: nop

    func_800599A0(rdram, ctx);
        goto after_3;
    // 0x8002602C: nop

    after_3:
    // 0x80026030: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80026034: addiu       $v0, $v0, -0x3A04
    ctx->r2 = ADD32(ctx->r2, -0X3A04);
    // 0x80026038: lhu         $t1, 0x0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X0);
    // 0x8002603C: nop

    // 0x80026040: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80026044: sh          $t2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r10;
L_80026048:
    // 0x80026048: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8002604C: lbu         $v0, -0x32A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A4);
    // 0x80026050: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80026054: bne         $v0, $at, L_80026074
    if (ctx->r2 != ctx->r1) {
        // 0x80026058: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_80026074;
    }
    // 0x80026058: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8002605C: jal         0x8005EF14
    // 0x80026060: nop

    func_8005EF14(rdram, ctx);
        goto after_4;
    // 0x80026060: nop

    after_4:
    // 0x80026064: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80026068: lbu         $v0, -0x32A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A4);
    // 0x8002606C: nop

    // 0x80026070: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_80026074:
    // 0x80026074: bne         $v0, $at, L_80026084
    if (ctx->r2 != ctx->r1) {
        // 0x80026078: nop
    
            goto L_80026084;
    }
    // 0x80026078: nop

    // 0x8002607C: jal         0x8005F150
    // 0x80026080: nop

    func_8005F150(rdram, ctx);
        goto after_5;
    // 0x80026080: nop

    after_5:
L_80026084:
    // 0x80026084: jal         0x80074D3C
    // 0x80026088: nop

    func_80074D3C(rdram, ctx);
        goto after_6;
    // 0x80026088: nop

    after_6:
    // 0x8002608C: jal         0x8005A4E0
    // 0x80026090: nop

    func_8005A4E0(rdram, ctx);
        goto after_7;
    // 0x80026090: nop

    after_7:
    // 0x80026094: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80026098: lbu         $t3, -0x32A4($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X32A4);
    // 0x8002609C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800260A0: bne         $t3, $at, L_800260B0
    if (ctx->r11 != ctx->r1) {
        // 0x800260A4: nop
    
            goto L_800260B0;
    }
    // 0x800260A4: nop

    // 0x800260A8: jal         0x8005F0A8
    // 0x800260AC: nop

    func_8005F0A8(rdram, ctx);
        goto after_8;
    // 0x800260AC: nop

    after_8:
L_800260B0:
    // 0x800260B0: jal         0x8000AB98
    // 0x800260B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8000AB98(rdram, ctx);
        goto after_9;
    // 0x800260B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x800260B8: jal         0x80003698
    // 0x800260BC: nop

    func_80003698(rdram, ctx);
        goto after_10;
    // 0x800260BC: nop

    after_10:
    // 0x800260C0: jal         0x80004A60
    // 0x800260C4: nop

    func_80004A60(rdram, ctx);
        goto after_11;
    // 0x800260C4: nop

    after_11:
    // 0x800260C8: jal         0x8005B1F4
    // 0x800260CC: nop

    func_8005B1F4(rdram, ctx);
        goto after_12;
    // 0x800260CC: nop

    after_12:
    // 0x800260D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800260D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800260D8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800260DC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800260E0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800260E4: jal         0x80013364
    // 0x800260E8: nop

    func_80013364(rdram, ctx);
        goto after_13;
    // 0x800260E8: nop

    after_13:
    // 0x800260EC: jal         0x8000DF94
    // 0x800260F0: nop

    func_8000DF94(rdram, ctx);
        goto after_14;
    // 0x800260F0: nop

    after_14:
    // 0x800260F4: jal         0x80020270
    // 0x800260F8: nop

    func_80020270(rdram, ctx);
        goto after_15;
    // 0x800260F8: nop

    after_15:
    // 0x800260FC: jal         0x8001B890
    // 0x80026100: nop

    func_8001B890(rdram, ctx);
        goto after_16;
    // 0x80026100: nop

    after_16:
    // 0x80026104: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80026108: lw          $t4, -0x2F98($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X2F98);
    // 0x8002610C: lui         $t5, 0x3
    ctx->r13 = S32(0X3 << 16);
    // 0x80026110: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80026114: lbu         $t5, -0x7664($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X7664);
    // 0x80026118: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8002611C: beq         $t5, $at, L_8002612C
    if (ctx->r13 == ctx->r1) {
        // 0x80026120: addiu       $t6, $zero, 0x5
        ctx->r14 = ADD32(0, 0X5);
            goto L_8002612C;
    }
    // 0x80026120: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80026124: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80026128: sh          $t6, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r14;
L_8002612C:
    // 0x8002612C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80026130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80026134: jr          $ra
    // 0x80026138: nop

    return;
    // 0x80026138: nop

;}
RECOMP_FUNC void func_8002613C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002613C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80026140: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x80026144: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80026148: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8002614C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80026150: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80026154: lbu         $v0, -0x7664($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7664);
    // 0x80026158: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8002615C: beq         $v0, $at, L_8002617C
    if (ctx->r2 == ctx->r1) {
        // 0x80026160: lui         $v1, 0x801B
        ctx->r3 = S32(0X801B << 16);
            goto L_8002617C;
    }
    // 0x80026160: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80026164: lh          $v1, -0x3A10($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3A10);
    // 0x80026168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002616C: blez        $v1, L_8002617C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80026170: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_8002617C;
    }
    // 0x80026170: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x80026174: b           L_8002621C
    // 0x80026178: sh          $t7, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r15;
        goto L_8002621C;
    // 0x80026178: sh          $t7, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r15;
L_8002617C:
    // 0x8002617C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80026180: bne         $v0, $at, L_800261A8
    if (ctx->r2 != ctx->r1) {
        // 0x80026184: lui         $t8, 0x8012
        ctx->r24 = S32(0X8012 << 16);
            goto L_800261A8;
    }
    // 0x80026184: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80026188: lbu         $t8, -0x3298($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X3298);
    // 0x8002618C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80026190: bne         $t8, $at, L_800261B0
    if (ctx->r24 != ctx->r1) {
        // 0x80026194: nop
    
            goto L_800261B0;
    }
    // 0x80026194: nop

    // 0x80026198: jal         0x8007AA60
    // 0x8002619C: nop

    func_8007AA60(rdram, ctx);
        goto after_0;
    // 0x8002619C: nop

    after_0:
    // 0x800261A0: b           L_800261B0
    // 0x800261A4: nop

        goto L_800261B0;
    // 0x800261A4: nop

L_800261A8:
    // 0x800261A8: jal         0x8007AA60
    // 0x800261AC: nop

    func_8007AA60(rdram, ctx);
        goto after_1;
    // 0x800261AC: nop

    after_1:
L_800261B0:
    // 0x800261B0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800261B4: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x800261B8: lhu         $t9, 0xA9C($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XA9C);
    // 0x800261BC: lhu         $t1, 0x8($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X8);
    // 0x800261C0: andi        $t0, $t9, 0x100
    ctx->r8 = ctx->r25 & 0X100;
    // 0x800261C4: andi        $t2, $t1, 0x100
    ctx->r10 = ctx->r9 & 0X100;
    // 0x800261C8: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x800261CC: beq         $t3, $zero, L_800261E4
    if (ctx->r11 == 0) {
        // 0x800261D0: nop
    
            goto L_800261E4;
    }
    // 0x800261D0: nop

    // 0x800261D4: jal         0x8029ADB4
    // 0x800261D8: nop

    LOOKUP_FUNC(0x8029ADB4)(rdram, ctx);
        goto after_2;
    // 0x800261D8: nop

    after_2:
    // 0x800261DC: b           L_800261EC
    // 0x800261E0: nop

        goto L_800261EC;
    // 0x800261E0: nop

L_800261E4:
    // 0x800261E4: jal         0x802936B0
    // 0x800261E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(0x802936B0)(rdram, ctx);
        goto after_3;
    // 0x800261E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
L_800261EC:
    // 0x800261EC: jal         0x8001B890
    // 0x800261F0: nop

    func_8001B890(rdram, ctx);
        goto after_4;
    // 0x800261F0: nop

    after_4:
    // 0x800261F4: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x800261F8: lw          $t4, -0x2F98($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X2F98);
    // 0x800261FC: lui         $t5, 0x3
    ctx->r13 = S32(0X3 << 16);
    // 0x80026200: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80026204: lbu         $t5, -0x7664($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X7664);
    // 0x80026208: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8002620C: beq         $t5, $at, L_8002621C
    if (ctx->r13 == ctx->r1) {
        // 0x80026210: addiu       $t6, $zero, 0x5
        ctx->r14 = ADD32(0, 0X5);
            goto L_8002621C;
    }
    // 0x80026210: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80026214: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80026218: sh          $t6, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r14;
L_8002621C:
    // 0x8002621C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80026220: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80026224: jr          $ra
    // 0x80026228: nop

    return;
    // 0x80026228: nop

;}
RECOMP_FUNC void func_8002622C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002622C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80026230: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x80026234: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80026238: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8002623C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80026240: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80026244: lbu         $t7, -0x7664($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7664);
    // 0x80026248: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8002624C: beq         $t7, $at, L_8002626C
    if (ctx->r15 == ctx->r1) {
        // 0x80026250: lui         $v0, 0x801B
        ctx->r2 = S32(0X801B << 16);
            goto L_8002626C;
    }
    // 0x80026250: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80026254: lh          $v0, -0x3A10($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3A10);
    // 0x80026258: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002625C: blez        $v0, L_8002626C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80026260: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_8002626C;
    }
    // 0x80026260: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x80026264: b           L_800262B4
    // 0x80026268: sh          $t8, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r24;
        goto L_800262B4;
    // 0x80026268: sh          $t8, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r24;
L_8002626C:
    // 0x8002626C: jal         0x8028D6A0
    // 0x80026270: nop

    LOOKUP_FUNC(0x8028D6A0)(rdram, ctx);
        goto after_0;
    // 0x80026270: nop

    after_0:
    // 0x80026274: jal         0x80293374
    // 0x80026278: nop

    LOOKUP_FUNC(0x80293374)(rdram, ctx);
        goto after_1;
    // 0x80026278: nop

    after_1:
    // 0x8002627C: jal         0x8028D4E0
    // 0x80026280: nop

    LOOKUP_FUNC(0x8028D4E0)(rdram, ctx);
        goto after_2;
    // 0x80026280: nop

    after_2:
    // 0x80026284: jal         0x8001B890
    // 0x80026288: nop

    func_8001B890(rdram, ctx);
        goto after_3;
    // 0x80026288: nop

    after_3:
    // 0x8002628C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80026290: lw          $t9, -0x2F98($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2F98);
    // 0x80026294: lui         $t0, 0x3
    ctx->r8 = S32(0X3 << 16);
    // 0x80026298: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8002629C: lbu         $t0, -0x7664($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X7664);
    // 0x800262A0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800262A4: beq         $t0, $at, L_800262B4
    if (ctx->r8 == ctx->r1) {
        // 0x800262A8: addiu       $t1, $zero, 0x5
        ctx->r9 = ADD32(0, 0X5);
            goto L_800262B4;
    }
    // 0x800262A8: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x800262AC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800262B0: sh          $t1, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r9;
L_800262B4:
    // 0x800262B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800262B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800262BC: jr          $ra
    // 0x800262C0: nop

    return;
    // 0x800262C0: nop

;}
RECOMP_FUNC void func_800262C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800262C4: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800262C8: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x800262CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800262D0: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x800262D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800262D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800262DC: lbu         $t7, -0x7664($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7664);
    // 0x800262E0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800262E4: beq         $t7, $at, L_80026304
    if (ctx->r15 == ctx->r1) {
        // 0x800262E8: lui         $v0, 0x801B
        ctx->r2 = S32(0X801B << 16);
            goto L_80026304;
    }
    // 0x800262E8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800262EC: lh          $v0, -0x3A10($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3A10);
    // 0x800262F0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800262F4: blez        $v0, L_80026304
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800262F8: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_80026304;
    }
    // 0x800262F8: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x800262FC: b           L_80026354
    // 0x80026300: sh          $t8, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r24;
        goto L_80026354;
    // 0x80026300: sh          $t8, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r24;
L_80026304:
    // 0x80026304: jal         0x80021960
    // 0x80026308: nop

    func_80021960(rdram, ctx);
        goto after_0;
    // 0x80026308: nop

    after_0:
    // 0x8002630C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80026310: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80026314: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80026318: sh          $t9, -0x2FAC($at)
    MEM_H(-0X2FAC, ctx->r1) = ctx->r25;
    // 0x8002631C: jal         0x80025A10
    // 0x80026320: addiu       $a0, $a0, 0x3BD0
    ctx->r4 = ADD32(ctx->r4, 0X3BD0);
    func_80025A10(rdram, ctx);
        goto after_1;
    // 0x80026320: addiu       $a0, $a0, 0x3BD0
    ctx->r4 = ADD32(ctx->r4, 0X3BD0);
    after_1:
    // 0x80026324: jal         0x8001B890
    // 0x80026328: nop

    func_8001B890(rdram, ctx);
        goto after_2;
    // 0x80026328: nop

    after_2:
    // 0x8002632C: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80026330: lw          $t0, -0x2F98($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2F98);
    // 0x80026334: lui         $t1, 0x3
    ctx->r9 = S32(0X3 << 16);
    // 0x80026338: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002633C: lbu         $t1, -0x7664($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X7664);
    // 0x80026340: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80026344: beq         $t1, $at, L_80026354
    if (ctx->r9 == ctx->r1) {
        // 0x80026348: addiu       $t2, $zero, 0x5
        ctx->r10 = ADD32(0, 0X5);
            goto L_80026354;
    }
    // 0x80026348: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x8002634C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80026350: sh          $t2, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r10;
L_80026354:
    // 0x80026354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80026358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002635C: jr          $ra
    // 0x80026360: nop

    return;
    // 0x80026360: nop

;}
RECOMP_FUNC void func_80026364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026364: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80026368: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8002636C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80026370: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x80026374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80026378: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002637C: lbu         $t7, -0x7664($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7664);
    // 0x80026380: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80026384: beq         $t7, $at, L_800263A8
    if (ctx->r15 == ctx->r1) {
        // 0x80026388: lui         $v1, 0x801B
        ctx->r3 = S32(0X801B << 16);
            goto L_800263A8;
    }
    // 0x80026388: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002638C: addiu       $v1, $v1, -0x3A10
    ctx->r3 = ADD32(ctx->r3, -0X3A10);
    // 0x80026390: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x80026394: nop

    // 0x80026398: blez        $v0, L_800263A8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8002639C: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_800263A8;
    }
    // 0x8002639C: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x800263A0: b           L_80026518
    // 0x800263A4: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
        goto L_80026518;
    // 0x800263A4: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
L_800263A8:
    // 0x800263A8: jal         0x8002198C
    // 0x800263AC: nop

    func_8002198C(rdram, ctx);
        goto after_0;
    // 0x800263AC: nop

    after_0:
    // 0x800263B0: jal         0x802A0E98
    // 0x800263B4: nop

    LOOKUP_FUNC(0x802A0E98)(rdram, ctx);
        goto after_1;
    // 0x800263B4: nop

    after_1:
    // 0x800263B8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800263BC: lw          $t9, -0x2F98($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2F98);
    // 0x800263C0: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x800263C4: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x800263C8: lbu         $v0, -0x7664($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7664);
    // 0x800263CC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800263D0: bne         $v0, $at, L_800263FC
    if (ctx->r2 != ctx->r1) {
        // 0x800263D4: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_800263FC;
    }
    // 0x800263D4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800263D8: jal         0x80297DB0
    // 0x800263DC: nop

    LOOKUP_FUNC(0x80297DB0)(rdram, ctx);
        goto after_2;
    // 0x800263DC: nop

    after_2:
    // 0x800263E0: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800263E4: lw          $t0, -0x2F98($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2F98);
    // 0x800263E8: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x800263EC: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x800263F0: lbu         $v0, -0x7664($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7664);
    // 0x800263F4: nop

    // 0x800263F8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
L_800263FC:
    // 0x800263FC: bne         $v0, $at, L_8002643C
    if (ctx->r2 != ctx->r1) {
        // 0x80026400: lui         $v0, 0x8011
        ctx->r2 = S32(0X8011 << 16);
            goto L_8002643C;
    }
    // 0x80026400: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80026404: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80026408: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8002640C: lbu         $t1, 0x754($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X754);
    // 0x80026410: addiu       $v1, $v1, 0x3A18
    ctx->r3 = ADD32(ctx->r3, 0X3A18);
    // 0x80026414: lbu         $t3, 0x0($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X0);
    // 0x80026418: ori         $t2, $t1, 0xA
    ctx->r10 = ctx->r9 | 0XA;
    // 0x8002641C: bne         $t3, $zero, L_80026488
    if (ctx->r11 != 0) {
        // 0x80026420: sb          $t2, 0x754($v0)
        MEM_B(0X754, ctx->r2) = ctx->r10;
            goto L_80026488;
    }
    // 0x80026420: sb          $t2, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r10;
    // 0x80026424: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80026428: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
    // 0x8002642C: jal         0x80015BC0
    // 0x80026430: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x80026430: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_3:
    // 0x80026434: b           L_80026488
    // 0x80026438: nop

        goto L_80026488;
    // 0x80026438: nop

L_8002643C:
    // 0x8002643C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80026440: lbu         $t5, -0x32A4($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X32A4);
    // 0x80026444: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80026448: bne         $t5, $at, L_80026474
    if (ctx->r13 != ctx->r1) {
        // 0x8002644C: lui         $v0, 0x8011
        ctx->r2 = S32(0X8011 << 16);
            goto L_80026474;
    }
    // 0x8002644C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80026450: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80026454: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80026458: lbu         $t6, 0x754($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X754);
    // 0x8002645C: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x80026460: ori         $t7, $t6, 0xB
    ctx->r15 = ctx->r14 | 0XB;
    // 0x80026464: jal         0x80015BC0
    // 0x80026468: sb          $t7, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r15;
    func_80015BC0(rdram, ctx);
        goto after_4;
    // 0x80026468: sb          $t7, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r15;
    after_4:
    // 0x8002646C: b           L_80026488
    // 0x80026470: nop

        goto L_80026488;
    // 0x80026470: nop

L_80026474:
    // 0x80026474: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80026478: lbu         $t8, 0x754($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X754);
    // 0x8002647C: nop

    // 0x80026480: ori         $t9, $t8, 0xB
    ctx->r25 = ctx->r24 | 0XB;
    // 0x80026484: sb          $t9, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r25;
L_80026488:
    // 0x80026488: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8002648C: lhu         $t0, 0xB78($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0XB78);
    // 0x80026490: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80026494: bne         $t0, $at, L_800264A4
    if (ctx->r8 != ctx->r1) {
        // 0x80026498: nop
    
            goto L_800264A4;
    }
    // 0x80026498: nop

    // 0x8002649C: jal         0x80015BC0
    // 0x800264A0: addiu       $a0, $zero, 0x3CE
    ctx->r4 = ADD32(0, 0X3CE);
    func_80015BC0(rdram, ctx);
        goto after_5;
    // 0x800264A0: addiu       $a0, $zero, 0x3CE
    ctx->r4 = ADD32(0, 0X3CE);
    after_5:
L_800264A4:
    // 0x800264A4: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800264A8: lw          $t1, -0x2F98($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2F98);
    // 0x800264AC: lui         $t2, 0x3
    ctx->r10 = S32(0X3 << 16);
    // 0x800264B0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800264B4: lbu         $t2, 0x7D6($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X7D6);
    // 0x800264B8: nop

    // 0x800264BC: beq         $t2, $zero, L_800264D4
    if (ctx->r10 == 0) {
        // 0x800264C0: lui         $t3, 0x8012
        ctx->r11 = S32(0X8012 << 16);
            goto L_800264D4;
    }
    // 0x800264C0: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800264C4: lbu         $t3, -0x3298($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X3298);
    // 0x800264C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800264CC: bne         $t3, $at, L_800264DC
    if (ctx->r11 != ctx->r1) {
        // 0x800264D0: nop
    
            goto L_800264DC;
    }
    // 0x800264D0: nop

L_800264D4:
    // 0x800264D4: jal         0x8007A940
    // 0x800264D8: nop

    func_8007A940(rdram, ctx);
        goto after_6;
    // 0x800264D8: nop

    after_6:
L_800264DC:
    // 0x800264DC: jal         0x8028E770
    // 0x800264E0: nop

    LOOKUP_FUNC(0x8028E770)(rdram, ctx);
        goto after_7;
    // 0x800264E0: nop

    after_7:
    // 0x800264E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800264E8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800264EC: swc1        $f4, 0x3A1C($at)
    MEM_W(0X3A1C, ctx->r1) = ctx->f4.u32l;
    // 0x800264F0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800264F4: sb          $zero, 0x3A3A($at)
    MEM_B(0X3A3A, ctx->r1) = 0;
    // 0x800264F8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800264FC: sb          $zero, 0x3A3B($at)
    MEM_B(0X3A3B, ctx->r1) = 0;
    // 0x80026500: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80026504: sb          $zero, 0x3ACE($at)
    MEM_B(0X3ACE, ctx->r1) = 0;
    // 0x80026508: jal         0x8001B854
    // 0x8002650C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8001B854(rdram, ctx);
        goto after_8;
    // 0x8002650C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_8:
    // 0x80026510: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80026514: sb          $zero, -0x3298($at)
    MEM_B(-0X3298, ctx->r1) = 0;
L_80026518:
    // 0x80026518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002651C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80026520: jr          $ra
    // 0x80026524: nop

    return;
    // 0x80026524: nop

;}
RECOMP_FUNC void func_80026528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026528: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002652C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80026530: jal         0x8002744C
    // 0x80026534: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8002744C(rdram, ctx);
        goto after_0;
    // 0x80026534: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80026538: jal         0x802A1350
    // 0x8002653C: nop

    LOOKUP_FUNC(0x802A1350)(rdram, ctx);
        goto after_1;
    // 0x8002653C: nop

    after_1:
    // 0x80026540: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x80026544: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80026548: addiu       $s0, $s0, -0x3770
    ctx->r16 = ADD32(ctx->r16, -0X3770);
    // 0x8002654C: sb          $zero, -0x67F7($at)
    MEM_B(-0X67F7, ctx->r1) = 0;
    // 0x80026550: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80026554: sh          $t6, 0x756($s0)
    MEM_H(0X756, ctx->r16) = ctx->r14;
    // 0x80026558: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8002655C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80026560: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x80026564: sb          $zero, 0x3ACD($at)
    MEM_B(0X3ACD, ctx->r1) = 0;
    // 0x80026568: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8002656C: beq         $t7, $at, L_800265A4
    if (ctx->r15 == ctx->r1) {
        // 0x80026570: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_800265A4;
    }
    // 0x80026570: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80026574: jal         0x8007C32C
    // 0x80026578: nop

    func_8007C32C(rdram, ctx);
        goto after_2;
    // 0x80026578: nop

    after_2:
    // 0x8002657C: jal         0x8025E354
    // 0x80026580: nop

    LOOKUP_FUNC(0x8025E354)(rdram, ctx);
        goto after_3;
    // 0x80026580: nop

    after_3:
    // 0x80026584: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80026588: lhu         $t8, 0xB78($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB78);
    // 0x8002658C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80026590: bne         $t8, $at, L_800265AC
    if (ctx->r24 != ctx->r1) {
        // 0x80026594: addiu       $t9, $zero, 0x29
        ctx->r25 = ADD32(0, 0X29);
            goto L_800265AC;
    }
    // 0x80026594: addiu       $t9, $zero, 0x29
    ctx->r25 = ADD32(0, 0X29);
    // 0x80026598: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8002659C: b           L_800265AC
    // 0x800265A0: sb          $t9, 0x3ACD($at)
    MEM_B(0X3ACD, ctx->r1) = ctx->r25;
        goto L_800265AC;
    // 0x800265A0: sb          $t9, 0x3ACD($at)
    MEM_B(0X3ACD, ctx->r1) = ctx->r25;
L_800265A4:
    // 0x800265A4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800265A8: sb          $t0, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = ctx->r8;
L_800265AC:
    // 0x800265AC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800265B0: sh          $zero, -0x3A06($at)
    MEM_H(-0X3A06, ctx->r1) = 0;
    // 0x800265B4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800265B8: sb          $zero, 0x39DE($at)
    MEM_B(0X39DE, ctx->r1) = 0;
    // 0x800265BC: lbu         $t1, 0x754($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X754);
    // 0x800265C0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800265C4: andi        $t2, $t1, 0xFFFB
    ctx->r10 = ctx->r9 & 0XFFFB;
    // 0x800265C8: sb          $t2, 0x754($s0)
    MEM_B(0X754, ctx->r16) = ctx->r10;
    // 0x800265CC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800265D0: sh          $t3, 0x5220($at)
    MEM_H(0X5220, ctx->r1) = ctx->r11;
    // 0x800265D4: lbu         $t4, 0x754($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X754);
    // 0x800265D8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800265DC: andi        $t5, $t4, 0xFFEF
    ctx->r13 = ctx->r12 & 0XFFEF;
    // 0x800265E0: sb          $t5, 0x754($s0)
    MEM_B(0X754, ctx->r16) = ctx->r13;
    // 0x800265E4: lhu         $t6, 0xB7E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB7E);
    // 0x800265E8: andi        $t9, $t5, 0xFE
    ctx->r25 = ctx->r13 & 0XFE;
    // 0x800265EC: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x800265F0: beq         $t7, $zero, L_800265FC
    if (ctx->r15 == 0) {
        // 0x800265F4: nop
    
            goto L_800265FC;
    }
    // 0x800265F4: nop

    // 0x800265F8: sb          $t9, 0x754($s0)
    MEM_B(0X754, ctx->r16) = ctx->r25;
L_800265FC:
    // 0x800265FC: jal         0x8005A208
    // 0x80026600: nop

    func_8005A208(rdram, ctx);
        goto after_4;
    // 0x80026600: nop

    after_4:
    // 0x80026604: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80026608: sb          $zero, 0xB6B($at)
    MEM_B(0XB6B, ctx->r1) = 0;
    // 0x8002660C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80026610: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80026614: jal         0x80073F40
    // 0x80026618: sb          $t0, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = ctx->r8;
    func_80073F40(rdram, ctx);
        goto after_5;
    // 0x80026618: sb          $t0, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = ctx->r8;
    after_5:
    // 0x8002661C: jal         0x80061E7C
    // 0x80026620: nop

    func_80061E7C(rdram, ctx);
        goto after_6;
    // 0x80026620: nop

    after_6:
    // 0x80026624: jal         0x8006202C
    // 0x80026628: nop

    func_8006202C(rdram, ctx);
        goto after_7;
    // 0x80026628: nop

    after_7:
    // 0x8002662C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80026630: sb          $zero, 0x3A74($at)
    MEM_B(0X3A74, ctx->r1) = 0;
    // 0x80026634: jal         0x8001B890
    // 0x80026638: sb          $zero, 0x7C1($s0)
    MEM_B(0X7C1, ctx->r16) = 0;
    func_8001B890(rdram, ctx);
        goto after_8;
    // 0x80026638: sb          $zero, 0x7C1($s0)
    MEM_B(0X7C1, ctx->r16) = 0;
    after_8:
    // 0x8002663C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80026640: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80026644: jr          $ra
    // 0x80026648: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80026648: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002664C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002664C: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80026650: lbu         $t6, 0x38DF($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X38DF);
    // 0x80026654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80026658: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8002665C: beq         $t6, $at, L_80026680
    if (ctx->r14 == ctx->r1) {
        // 0x80026660: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80026680;
    }
    // 0x80026660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80026664: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80026668: lh          $t7, -0x2FAE($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X2FAE);
    // 0x8002666C: nop

    // 0x80026670: bne         $t7, $zero, L_80026680
    if (ctx->r15 != 0) {
        // 0x80026674: nop
    
            goto L_80026680;
    }
    // 0x80026674: nop

    // 0x80026678: jal         0x800274AC
    // 0x8002667C: nop

    func_800274AC(rdram, ctx);
        goto after_0;
    // 0x8002667C: nop

    after_0:
L_80026680:
    // 0x80026680: jal         0x80026804
    // 0x80026684: nop

    func_80026804(rdram, ctx);
        goto after_1;
    // 0x80026684: nop

    after_1:
    // 0x80026688: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8002668C: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80026690: lbu         $t8, 0x7C1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X7C1);
    // 0x80026694: sb          $zero, 0x7C0($v0)
    MEM_B(0X7C0, ctx->r2) = 0;
    // 0x80026698: beq         $t8, $zero, L_800266C8
    if (ctx->r24 == 0) {
        // 0x8002669C: nop
    
            goto L_800266C8;
    }
    // 0x8002669C: nop

    // 0x800266A0: jal         0x8029679C
    // 0x800266A4: nop

    LOOKUP_FUNC(0x8029679C)(rdram, ctx);
        goto after_2;
    // 0x800266A4: nop

    after_2:
    // 0x800266A8: jal         0x802717B0
    // 0x800266AC: nop

    LOOKUP_FUNC(0x802717B0)(rdram, ctx);
        goto after_3;
    // 0x800266AC: nop

    after_3:
    // 0x800266B0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800266B4: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x800266B8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800266BC: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x800266C0: b           L_800267E0
    // 0x800266C4: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
        goto L_800267E0;
    // 0x800266C4: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
L_800266C8:
    // 0x800266C8: jal         0x8005BEB8
    // 0x800266CC: nop

    func_8005BEB8(rdram, ctx);
        goto after_4;
    // 0x800266CC: nop

    after_4:
    // 0x800266D0: jal         0x8005C0FC
    // 0x800266D4: nop

    func_8005C0FC(rdram, ctx);
        goto after_5;
    // 0x800266D4: nop

    after_5:
    // 0x800266D8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x800266DC: lbu         $v0, 0x3ACD($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3ACD);
    // 0x800266E0: nop

    // 0x800266E4: beq         $v0, $zero, L_80026714
    if (ctx->r2 == 0) {
        // 0x800266E8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80026714;
    }
    // 0x800266E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800266EC: bne         $v0, $at, L_8002670C
    if (ctx->r2 != ctx->r1) {
        // 0x800266F0: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_8002670C;
    }
    // 0x800266F0: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x800266F4: jal         0x800751C0
    // 0x800266F8: nop

    func_800751C0(rdram, ctx);
        goto after_6;
    // 0x800266F8: nop

    after_6:
    // 0x800266FC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80026700: lbu         $v0, 0x3ACD($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3ACD);
    // 0x80026704: nop

    // 0x80026708: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
L_8002670C:
    // 0x8002670C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80026710: sb          $t9, 0x3ACD($at)
    MEM_B(0X3ACD, ctx->r1) = ctx->r25;
L_80026714:
    // 0x80026714: jal         0x80276AD4
    // 0x80026718: nop

    LOOKUP_FUNC(0x80276AD4)(rdram, ctx);
        goto after_7;
    // 0x80026718: nop

    after_7:
    // 0x8002671C: jal         0x800592F0
    // 0x80026720: nop

    func_800592F0(rdram, ctx);
        goto after_8;
    // 0x80026720: nop

    after_8:
    // 0x80026724: jal         0x8025267C
    // 0x80026728: nop

    LOOKUP_FUNC(0x8025267C)(rdram, ctx);
        goto after_9;
    // 0x80026728: nop

    after_9:
    // 0x8002672C: jal         0x80013340
    // 0x80026730: nop

    func_80013340(rdram, ctx);
        goto after_10;
    // 0x80026730: nop

    after_10:
    // 0x80026734: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80026738: lhu         $t0, 0xB7E($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0XB7E);
    // 0x8002673C: nop

    // 0x80026740: andi        $t1, $t0, 0x100
    ctx->r9 = ctx->r8 & 0X100;
    // 0x80026744: bne         $t1, $zero, L_80026754
    if (ctx->r9 != 0) {
        // 0x80026748: nop
    
            goto L_80026754;
    }
    // 0x80026748: nop

    // 0x8002674C: jal         0x80002F20
    // 0x80026750: nop

    func_80002F20(rdram, ctx);
        goto after_11;
    // 0x80026750: nop

    after_11:
L_80026754:
    // 0x80026754: jal         0x8000DE30
    // 0x80026758: nop

    func_8000DE30(rdram, ctx);
        goto after_12;
    // 0x80026758: nop

    after_12:
    // 0x8002675C: jal         0x8000EEB0
    // 0x80026760: nop

    func_8000EEB0(rdram, ctx);
        goto after_13;
    // 0x80026760: nop

    after_13:
    // 0x80026764: jal         0x8025E3FC
    // 0x80026768: nop

    LOOKUP_FUNC(0x8025E3FC)(rdram, ctx);
        goto after_14;
    // 0x80026768: nop

    after_14:
    // 0x8002676C: jal         0x8028D490
    // 0x80026770: nop

    LOOKUP_FUNC(0x8028D490)(rdram, ctx);
        goto after_15;
    // 0x80026770: nop

    after_15:
    // 0x80026774: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80026778: lh          $t2, -0x2FAE($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X2FAE);
    // 0x8002677C: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x80026780: bne         $t2, $zero, L_800267A0
    if (ctx->r10 != 0) {
        // 0x80026784: nop
    
            goto L_800267A0;
    }
    // 0x80026784: nop

    // 0x80026788: lbu         $t3, 0x38DF($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X38DF);
    // 0x8002678C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80026790: beq         $t3, $at, L_800267A0
    if (ctx->r11 == ctx->r1) {
        // 0x80026794: nop
    
            goto L_800267A0;
    }
    // 0x80026794: nop

    // 0x80026798: jal         0x80074360
    // 0x8002679C: nop

    func_80074360(rdram, ctx);
        goto after_16;
    // 0x8002679C: nop

    after_16:
L_800267A0:
    // 0x800267A0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800267A4: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x800267A8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800267AC: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x800267B0: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
    // 0x800267B4: lbu         $t4, 0x99C($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X99C);
    // 0x800267B8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800267BC: beq         $t4, $at, L_800267E0
    if (ctx->r12 == ctx->r1) {
        // 0x800267C0: nop
    
            goto L_800267E0;
    }
    // 0x800267C0: nop

    // 0x800267C4: jal         0x802939AC
    // 0x800267C8: nop

    LOOKUP_FUNC(0x802939AC)(rdram, ctx);
        goto after_17;
    // 0x800267C8: nop

    after_17:
    // 0x800267CC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800267D0: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x800267D4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800267D8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x800267DC: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
L_800267E0:
    // 0x800267E0: lhu         $t5, 0x99A($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X99A);
    // 0x800267E4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x800267E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800267EC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800267F0: sh          $t6, -0x7666($at)
    MEM_H(-0X7666, ctx->r1) = ctx->r14;
    // 0x800267F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800267F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800267FC: jr          $ra
    // 0x80026800: nop

    return;
    // 0x80026800: nop

;}
RECOMP_FUNC void func_80026804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026804: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80026808: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x8002680C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80026810: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80026814: lui         $t8, 0x3
    ctx->r24 = S32(0X3 << 16);
    // 0x80026818: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x8002681C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80026820: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80026824: lbu         $t8, 0x7CC($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X7CC);
    // 0x80026828: lbu         $t6, 0x7C0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X7C0);
    // 0x8002682C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80026830: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80026834: bne         $t9, $zero, L_800268B4
    if (ctx->r25 != 0) {
        // 0x80026838: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800268B4;
    }
    // 0x80026838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002683C: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x80026840: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80026844: beq         $v0, $at, L_800268B0
    if (ctx->r2 == ctx->r1) {
        // 0x80026848: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_800268B0;
    }
    // 0x80026848: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8002684C: beq         $v0, $at, L_800268B0
    if (ctx->r2 == ctx->r1) {
        // 0x80026850: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_800268B0;
    }
    // 0x80026850: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80026854: beq         $v0, $at, L_800268B4
    if (ctx->r2 == ctx->r1) {
        // 0x80026858: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800268B4;
    }
    // 0x80026858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002685C: lh          $t0, 0x7C2($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X7C2);
    // 0x80026860: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80026864: bne         $t0, $zero, L_800268B4
    if (ctx->r8 != 0) {
        // 0x80026868: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800268B4;
    }
    // 0x80026868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002686C: lhu         $t1, 0xB7E($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB7E);
    // 0x80026870: nop

    // 0x80026874: andi        $t2, $t1, 0x100
    ctx->r10 = ctx->r9 & 0X100;
    // 0x80026878: bne         $t2, $zero, L_800268B4
    if (ctx->r10 != 0) {
        // 0x8002687C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800268B4;
    }
    // 0x8002687C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80026880: lbu         $t3, 0x7C1($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X7C1);
    // 0x80026884: nop

    // 0x80026888: bne         $t3, $zero, L_800268A0
    if (ctx->r11 != 0) {
        // 0x8002688C: nop
    
            goto L_800268A0;
    }
    // 0x8002688C: nop

    // 0x80026890: jal         0x8029812C
    // 0x80026894: nop

    LOOKUP_FUNC(0x8029812C)(rdram, ctx);
        goto after_0;
    // 0x80026894: nop

    after_0:
    // 0x80026898: b           L_800268B4
    // 0x8002689C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800268B4;
    // 0x8002689C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800268A0:
    // 0x800268A0: jal         0x8028D4B8
    // 0x800268A4: nop

    LOOKUP_FUNC(0x8028D4B8)(rdram, ctx);
        goto after_1;
    // 0x800268A4: nop

    after_1:
    // 0x800268A8: jal         0x8029812C
    // 0x800268AC: nop

    LOOKUP_FUNC(0x8029812C)(rdram, ctx);
        goto after_2;
    // 0x800268AC: nop

    after_2:
L_800268B0:
    // 0x800268B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800268B4:
    // 0x800268B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800268B8: jr          $ra
    // 0x800268BC: nop

    return;
    // 0x800268BC: nop

;}
RECOMP_FUNC void func_800268C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800268C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800268C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800268C8: jal         0x80015BC0
    // 0x800268CC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x800268CC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x800268D0: jal         0x8005ACAC
    // 0x800268D4: nop

    func_8005ACAC(rdram, ctx);
        goto after_1;
    // 0x800268D4: nop

    after_1:
    // 0x800268D8: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800268DC: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800268E0: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x800268E4: sh          $zero, 0x6968($at)
    MEM_H(0X6968, ctx->r1) = 0;
    // 0x800268E8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x800268EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800268F0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800268F4: sb          $t6, -0x765D($at)
    MEM_B(-0X765D, ctx->r1) = ctx->r14;
    // 0x800268F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800268FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80026900: jr          $ra
    // 0x80026904: nop

    return;
    // 0x80026904: nop

;}
RECOMP_FUNC void func_80026908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002690C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80026910: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80026914: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80026918: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8002691C: jal         0x800201A8
    // 0x80026920: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    func_800201A8(rdram, ctx);
        goto after_0;
    // 0x80026920: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_0:
    // 0x80026924: jal         0x80035530
    // 0x80026928: nop

    func_80035530(rdram, ctx);
        goto after_1;
    // 0x80026928: nop

    after_1:
    // 0x8002692C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80026930: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80026934: sb          $t6, -0x3298($at)
    MEM_B(-0X3298, ctx->r1) = ctx->r14;
    // 0x80026938: jal         0x8005F560
    // 0x8002693C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005F560(rdram, ctx);
        goto after_2;
    // 0x8002693C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80026940: jal         0x8001B890
    // 0x80026944: nop

    func_8001B890(rdram, ctx);
        goto after_3;
    // 0x80026944: nop

    after_3:
    // 0x80026948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002694C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80026950: jr          $ra
    // 0x80026954: nop

    return;
    // 0x80026954: nop

;}
RECOMP_FUNC void func_80026958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026958: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002695C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80026960: jal         0x8002910C
    // 0x80026964: nop

    func_8002910C(rdram, ctx);
        goto after_0;
    // 0x80026964: nop

    after_0:
    // 0x80026968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002696C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80026970: jr          $ra
    // 0x80026974: nop

    return;
    // 0x80026974: nop

;}
RECOMP_FUNC void func_80026978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026978: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002697C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80026980: jal         0x8001B854
    // 0x80026984: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8001B854(rdram, ctx);
        goto after_0;
    // 0x80026984: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x80026988: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8002698C: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80026990: lui         $t6, 0x3
    ctx->r14 = S32(0X3 << 16);
    // 0x80026994: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80026998: lhu         $t6, -0x7666($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X7666);
    // 0x8002699C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x800269A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800269A4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800269A8: sh          $t7, -0x7666($at)
    MEM_H(-0X7666, ctx->r1) = ctx->r15;
    // 0x800269AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800269B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800269B4: jr          $ra
    // 0x800269B8: nop

    return;
    // 0x800269B8: nop

;}
RECOMP_FUNC void func_800269EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800269EC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x800269F0: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x800269F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800269F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800269FC: addiu       $v1, $a0, 0x7FFF
    ctx->r3 = ADD32(ctx->r4, 0X7FFF);
    // 0x80026A00: lbu         $v1, 0x9A5($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X9A5);
    // 0x80026A04: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80026A08: beq         $v1, $zero, L_80026A38
    if (ctx->r3 == 0) {
        // 0x80026A0C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80026A38;
    }
    // 0x80026A0C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80026A10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80026A14: beq         $v0, $at, L_80026A50
    if (ctx->r2 == ctx->r1) {
        // 0x80026A18: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80026A50;
    }
    // 0x80026A18: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80026A1C: beq         $v0, $at, L_80026AA4
    if (ctx->r2 == ctx->r1) {
        // 0x80026A20: lui         $a1, 0x801B
        ctx->r5 = S32(0X801B << 16);
            goto L_80026AA4;
    }
    // 0x80026A20: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80026A24: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80026A28: beq         $v0, $at, L_80026B1C
    if (ctx->r2 == ctx->r1) {
        // 0x80026A2C: nop
    
            goto L_80026B1C;
    }
    // 0x80026A2C: nop

    // 0x80026A30: b           L_80026B48
    // 0x80026A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80026B48;
    // 0x80026A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80026A38:
    // 0x80026A38: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80026A3C: sh          $t6, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r14;
    // 0x80026A40: addiu       $at, $a0, 0x7FFF
    ctx->r1 = ADD32(ctx->r4, 0X7FFF);
    // 0x80026A44: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x80026A48: b           L_80026B44
    // 0x80026A4C: sb          $t7, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r15;
        goto L_80026B44;
    // 0x80026A4C: sb          $t7, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r15;
L_80026A50:
    // 0x80026A50: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80026A54: addiu       $v1, $v1, -0x3A10
    ctx->r3 = ADD32(ctx->r3, -0X3A10);
    // 0x80026A58: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x80026A5C: nop

    // 0x80026A60: blez        $v0, L_80026A70
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80026A64: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_80026A70;
    }
    // 0x80026A64: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x80026A68: b           L_80026B44
    // 0x80026A6C: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
        goto L_80026B44;
    // 0x80026A6C: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
L_80026A70:
    // 0x80026A70: jal         0x800273E8
    // 0x80026A74: nop

    func_800273E8(rdram, ctx);
        goto after_0;
    // 0x80026A74: nop

    after_0:
    // 0x80026A78: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80026A7C: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x80026A80: addiu       $t9, $a0, 0x7FFF
    ctx->r25 = ADD32(ctx->r4, 0X7FFF);
    // 0x80026A84: lbu         $t9, 0x9A5($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X9A5);
    // 0x80026A88: addiu       $at, $a0, 0x7FFF
    ctx->r1 = ADD32(ctx->r4, 0X7FFF);
    // 0x80026A8C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80026A90: sb          $t0, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r8;
    // 0x80026A94: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80026A98: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x80026A9C: b           L_80026B44
    // 0x80026AA0: sh          $t1, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r9;
        goto L_80026B44;
    // 0x80026AA0: sh          $t1, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r9;
L_80026AA4:
    // 0x80026AA4: addiu       $a1, $a1, -0x3A10
    ctx->r5 = ADD32(ctx->r5, -0X3A10);
    // 0x80026AA8: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x80026AAC: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x80026AB0: blez        $v0, L_80026AC4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80026AB4: lui         $at, 0x8011
        ctx->r1 = S32(0X8011 << 16);
            goto L_80026AC4;
    }
    // 0x80026AB4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80026AB8: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x80026ABC: b           L_80026B44
    // 0x80026AC0: sh          $t2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r10;
        goto L_80026B44;
    // 0x80026AC0: sh          $t2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r10;
L_80026AC4:
    // 0x80026AC4: sb          $t3, -0x301C($at)
    MEM_B(-0X301C, ctx->r1) = ctx->r11;
    // 0x80026AC8: addiu       $at, $a0, 0x7FFF
    ctx->r1 = ADD32(ctx->r4, 0X7FFF);
    // 0x80026ACC: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x80026AD0: jal         0x800603F0
    // 0x80026AD4: sb          $t4, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r12;
    func_800603F0(rdram, ctx);
        goto after_1;
    // 0x80026AD4: sb          $t4, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r12;
    after_1:
    // 0x80026AD8: jal         0x8028D160
    // 0x80026ADC: nop

    LOOKUP_FUNC(0x8028D160)(rdram, ctx);
        goto after_2;
    // 0x80026ADC: nop

    after_2:
    // 0x80026AE0: jal         0x8028D3C8
    // 0x80026AE4: nop

    LOOKUP_FUNC(0x8028D3C8)(rdram, ctx);
        goto after_3;
    // 0x80026AE4: nop

    after_3:
    // 0x80026AE8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80026AEC: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80026AF0: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x80026AF4: sb          $t5, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r13;
    // 0x80026AF8: jal         0x802ACB34
    // 0x80026AFC: sb          $zero, 0x7C1($v0)
    MEM_B(0X7C1, ctx->r2) = 0;
    LOOKUP_FUNC(0x802ACB34)(rdram, ctx);
        goto after_4;
    // 0x80026AFC: sb          $zero, 0x7C1($v0)
    MEM_B(0X7C1, ctx->r2) = 0;
    after_4:
    // 0x80026B00: jal         0x8006202C
    // 0x80026B04: nop

    func_8006202C(rdram, ctx);
        goto after_5;
    // 0x80026B04: nop

    after_5:
    // 0x80026B08: jal         0x800642D0
    // 0x80026B0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800642D0(rdram, ctx);
        goto after_6;
    // 0x80026B0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x80026B10: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80026B14: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80026B18: sh          $t6, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r14;
L_80026B1C:
    // 0x80026B1C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80026B20: addiu       $v1, $v1, -0x3A10
    ctx->r3 = ADD32(ctx->r3, -0X3A10);
    // 0x80026B24: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x80026B28: nop

    // 0x80026B2C: blez        $v0, L_80026B3C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80026B30: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_80026B3C;
    }
    // 0x80026B30: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x80026B34: b           L_80026B44
    // 0x80026B38: sh          $t7, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r15;
        goto L_80026B44;
    // 0x80026B38: sh          $t7, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r15;
L_80026B3C:
    // 0x80026B3C: jal         0x8001B890
    // 0x80026B40: nop

    func_8001B890(rdram, ctx);
        goto after_7;
    // 0x80026B40: nop

    after_7:
L_80026B44:
    // 0x80026B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80026B48:
    // 0x80026B48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80026B4C: jr          $ra
    // 0x80026B50: nop

    return;
    // 0x80026B50: nop

;}
RECOMP_FUNC void func_80026B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026B54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80026B58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80026B5C: jal         0x8002744C
    // 0x80026B60: nop

    func_8002744C(rdram, ctx);
        goto after_0;
    // 0x80026B60: nop

    after_0:
    // 0x80026B64: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80026B68: addiu       $a1, $a1, -0x3A10
    ctx->r5 = ADD32(ctx->r5, -0X3A10);
    // 0x80026B6C: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x80026B70: nop

    // 0x80026B74: blez        $v0, L_80026B84
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80026B78: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_80026B84;
    }
    // 0x80026B78: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80026B7C: b           L_80026E94
    // 0x80026B80: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
        goto L_80026E94;
    // 0x80026B80: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
L_80026B84:
    // 0x80026B84: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80026B88: lbu         $v0, 0x5234($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5234);
    // 0x80026B8C: nop

    // 0x80026B90: sltiu       $at, $v0, 0x6
    ctx->r1 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x80026B94: beq         $at, $zero, L_80026E94
    if (ctx->r1 == 0) {
        // 0x80026B98: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_80026E94;
    }
    // 0x80026B98: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80026B9C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026BA0: addu        $at, $at, $t7
    gpr jr_addend_80026BAC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80026BA4: lw          $t7, 0x3D38($at)
    ctx->r15 = ADD32(ctx->r1, 0X3D38);
    // 0x80026BA8: nop

    // 0x80026BAC: jr          $t7
    // 0x80026BB0: nop

    switch (jr_addend_80026BAC >> 2) {
        case 0: goto L_80026BB4; break;
        case 1: goto L_80026CD4; break;
        case 2: goto L_80026D00; break;
        case 3: goto L_80026D50; break;
        case 4: goto L_80026DCC; break;
        case 5: goto L_80026E28; break;
        default: switch_error(__func__, 0x80026BAC, 0x800D3D38);
    }
    // 0x80026BB0: nop

L_80026BB4:
    // 0x80026BB4: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80026BB8: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x80026BBC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80026BC0: jal         0x8005C7AC
    // 0x80026BC4: sh          $t8, 0x7C4($v1)
    MEM_H(0X7C4, ctx->r3) = ctx->r24;
    func_8005C7AC(rdram, ctx);
        goto after_1;
    // 0x80026BC4: sh          $t8, 0x7C4($v1)
    MEM_H(0X7C4, ctx->r3) = ctx->r24;
    after_1:
    // 0x80026BC8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80026BCC: lbu         $t9, -0x32A4($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X32A4);
    // 0x80026BD0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80026BD4: bne         $t9, $at, L_80026C14
    if (ctx->r25 != ctx->r1) {
        // 0x80026BD8: nop
    
            goto L_80026C14;
    }
    // 0x80026BD8: nop

    // 0x80026BDC: jal         0x8005B330
    // 0x80026BE0: nop

    func_8005B330(rdram, ctx);
        goto after_2;
    // 0x80026BE0: nop

    after_2:
    // 0x80026BE4: jal         0x80059928
    // 0x80026BE8: nop

    func_80059928(rdram, ctx);
        goto after_3;
    // 0x80026BE8: nop

    after_3:
    // 0x80026BEC: jal         0x8005C9BC
    // 0x80026BF0: nop

    func_8005C9BC(rdram, ctx);
        goto after_4;
    // 0x80026BF0: nop

    after_4:
    // 0x80026BF4: jal         0x8005C5FC
    // 0x80026BF8: nop

    func_8005C5FC(rdram, ctx);
        goto after_5;
    // 0x80026BF8: nop

    after_5:
    // 0x80026BFC: jal         0x802A2434
    // 0x80026C00: nop

    LOOKUP_FUNC(0x802A2434)(rdram, ctx);
        goto after_6;
    // 0x80026C00: nop

    after_6:
    // 0x80026C04: jal         0x8005D614
    // 0x80026C08: nop

    func_8005D614(rdram, ctx);
        goto after_7;
    // 0x80026C08: nop

    after_7:
    // 0x80026C0C: b           L_80026C6C
    // 0x80026C10: nop

        goto L_80026C6C;
    // 0x80026C10: nop

L_80026C14:
    // 0x80026C14: jal         0x8005A8BC
    // 0x80026C18: nop

    func_8005A8BC(rdram, ctx);
        goto after_8;
    // 0x80026C18: nop

    after_8:
    // 0x80026C1C: jal         0x8005C9BC
    // 0x80026C20: nop

    func_8005C9BC(rdram, ctx);
        goto after_9;
    // 0x80026C20: nop

    after_9:
    // 0x80026C24: jal         0x8005C5FC
    // 0x80026C28: nop

    func_8005C5FC(rdram, ctx);
        goto after_10;
    // 0x80026C28: nop

    after_10:
    // 0x80026C2C: jal         0x802A2434
    // 0x80026C30: nop

    LOOKUP_FUNC(0x802A2434)(rdram, ctx);
        goto after_11;
    // 0x80026C30: nop

    after_11:
    // 0x80026C34: jal         0x8005D614
    // 0x80026C38: nop

    func_8005D614(rdram, ctx);
        goto after_12;
    // 0x80026C38: nop

    after_12:
    // 0x80026C3C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80026C40: addiu       $v0, $v0, 0xB7E
    ctx->r2 = ADD32(ctx->r2, 0XB7E);
    // 0x80026C44: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x80026C48: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80026C4C: ori         $t1, $t0, 0x100
    ctx->r9 = ctx->r8 | 0X100;
    // 0x80026C50: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x80026C54: lhu         $t2, 0xB78($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XB78);
    // 0x80026C58: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80026C5C: bne         $t2, $at, L_80026C6C
    if (ctx->r10 != ctx->r1) {
        // 0x80026C60: nop
    
            goto L_80026C6C;
    }
    // 0x80026C60: nop

    // 0x80026C64: jal         0x80059F84
    // 0x80026C68: nop

    func_80059F84(rdram, ctx);
        goto after_13;
    // 0x80026C68: nop

    after_13:
L_80026C6C:
    // 0x80026C6C: jal         0x8000AB98
    // 0x80026C70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8000AB98(rdram, ctx);
        goto after_14;
    // 0x80026C70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x80026C74: jal         0x80003698
    // 0x80026C78: nop

    func_80003698(rdram, ctx);
        goto after_15;
    // 0x80026C78: nop

    after_15:
    // 0x80026C7C: jal         0x80004A60
    // 0x80026C80: nop

    func_80004A60(rdram, ctx);
        goto after_16;
    // 0x80026C80: nop

    after_16:
    // 0x80026C84: jal         0x8005B1F4
    // 0x80026C88: nop

    func_8005B1F4(rdram, ctx);
        goto after_17;
    // 0x80026C88: nop

    after_17:
    // 0x80026C8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80026C90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80026C94: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80026C98: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80026C9C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80026CA0: jal         0x80013364
    // 0x80026CA4: nop

    func_80013364(rdram, ctx);
        goto after_18;
    // 0x80026CA4: nop

    after_18:
    // 0x80026CA8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80026CAC: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80026CB0: addiu       $t3, $v0, 0x7FFF
    ctx->r11 = ADD32(ctx->r2, 0X7FFF);
    // 0x80026CB4: lbu         $t3, 0x9A5($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X9A5);
    // 0x80026CB8: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x80026CBC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80026CC0: sb          $t4, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r12;
    // 0x80026CC4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80026CC8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80026CCC: b           L_80026E94
    // 0x80026CD0: sh          $t5, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r13;
        goto L_80026E94;
    // 0x80026CD0: sh          $t5, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r13;
L_80026CD4:
    // 0x80026CD4: jal         0x8007AA60
    // 0x80026CD8: nop

    func_8007AA60(rdram, ctx);
        goto after_19;
    // 0x80026CD8: nop

    after_19:
    // 0x80026CDC: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80026CE0: lbu         $t6, 0x5234($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5234);
    // 0x80026CE4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80026CE8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80026CEC: sb          $t7, 0x5234($at)
    MEM_B(0X5234, ctx->r1) = ctx->r15;
    // 0x80026CF0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80026CF4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80026CF8: b           L_80026E94
    // 0x80026CFC: sh          $t8, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r24;
        goto L_80026E94;
    // 0x80026CFC: sh          $t8, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r24;
L_80026D00:
    // 0x80026D00: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80026D04: jal         0x80025A10
    // 0x80026D08: addiu       $a0, $a0, 0x3BD0
    ctx->r4 = ADD32(ctx->r4, 0X3BD0);
    func_80025A10(rdram, ctx);
        goto after_20;
    // 0x80026D08: addiu       $a0, $a0, 0x3BD0
    ctx->r4 = ADD32(ctx->r4, 0X3BD0);
    after_20:
    // 0x80026D0C: jal         0x802A1350
    // 0x80026D10: nop

    LOOKUP_FUNC(0x802A1350)(rdram, ctx);
        goto after_21;
    // 0x80026D10: nop

    after_21:
    // 0x80026D14: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80026D18: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80026D1C: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x80026D20: sb          $zero, -0x67F7($at)
    MEM_B(-0X67F7, ctx->r1) = 0;
    // 0x80026D24: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80026D28: sh          $t9, 0x756($v1)
    MEM_H(0X756, ctx->r3) = ctx->r25;
    // 0x80026D2C: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x80026D30: lbu         $t0, 0x5234($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X5234);
    // 0x80026D34: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80026D38: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80026D3C: sb          $t1, 0x5234($at)
    MEM_B(0X5234, ctx->r1) = ctx->r9;
    // 0x80026D40: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80026D44: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x80026D48: b           L_80026E94
    // 0x80026D4C: sh          $t2, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r10;
        goto L_80026E94;
    // 0x80026D4C: sh          $t2, -0x3A10($at)
    MEM_H(-0X3A10, ctx->r1) = ctx->r10;
L_80026D50:
    // 0x80026D50: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80026D54: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80026D58: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80026D5C: lbu         $t3, -0x32A4($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X32A4);
    // 0x80026D60: swc1        $f0, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->f0.u32l;
    // 0x80026D64: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80026D68: bne         $t3, $at, L_80026D78
    if (ctx->r11 != ctx->r1) {
        // 0x80026D6C: lui         $t4, 0x802C
        ctx->r12 = S32(0X802C << 16);
            goto L_80026D78;
    }
    // 0x80026D6C: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x80026D70: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80026D74: sb          $zero, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = 0;
L_80026D78:
    // 0x80026D78: lw          $t4, 0x540C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X540C);
    // 0x80026D7C: nop

    // 0x80026D80: bne         $t4, $zero, L_80026DA0
    if (ctx->r12 != 0) {
        // 0x80026D84: nop
    
            goto L_80026DA0;
    }
    // 0x80026D84: nop

    // 0x80026D88: jal         0x8007C32C
    // 0x80026D8C: nop

    func_8007C32C(rdram, ctx);
        goto after_22;
    // 0x80026D8C: nop

    after_22:
    // 0x80026D90: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80026D94: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80026D98: lbu         $v0, 0x5234($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5234);
    // 0x80026D9C: addiu       $a1, $a1, -0x3A10
    ctx->r5 = ADD32(ctx->r5, -0X3A10);
L_80026DA0:
    // 0x80026DA0: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80026DA4: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x80026DA8: lbu         $t5, 0x754($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X754);
    // 0x80026DAC: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x80026DB0: andi        $t6, $t5, 0xFE
    ctx->r14 = ctx->r13 & 0XFE;
    // 0x80026DB4: sb          $t6, 0x754($v1)
    MEM_B(0X754, ctx->r3) = ctx->r14;
    // 0x80026DB8: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80026DBC: sb          $t7, 0x5234($at)
    MEM_B(0X5234, ctx->r1) = ctx->r15;
    // 0x80026DC0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80026DC4: b           L_80026E94
    // 0x80026DC8: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
        goto L_80026E94;
    // 0x80026DC8: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
L_80026DCC:
    // 0x80026DCC: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80026DD0: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x80026DD4: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80026DD8: jal         0x80293374
    // 0x80026DDC: sb          $t9, 0x754($v1)
    MEM_B(0X754, ctx->r3) = ctx->r25;
    LOOKUP_FUNC(0x80293374)(rdram, ctx);
        goto after_23;
    // 0x80026DDC: sb          $t9, 0x754($v1)
    MEM_B(0X754, ctx->r3) = ctx->r25;
    after_23:
    // 0x80026DE0: jal         0x802ACB3C
    // 0x80026DE4: nop

    LOOKUP_FUNC(0x802ACB3C)(rdram, ctx);
        goto after_24;
    // 0x80026DE4: nop

    after_24:
    // 0x80026DE8: jal         0x802B3224
    // 0x80026DEC: nop

    LOOKUP_FUNC(0x802B3224)(rdram, ctx);
        goto after_25;
    // 0x80026DEC: nop

    after_25:
    // 0x80026DF0: jal         0x8028D6A0
    // 0x80026DF4: nop

    LOOKUP_FUNC(0x8028D6A0)(rdram, ctx);
        goto after_26;
    // 0x80026DF4: nop

    after_26:
    // 0x80026DF8: jal         0x8028D4E0
    // 0x80026DFC: nop

    LOOKUP_FUNC(0x8028D4E0)(rdram, ctx);
        goto after_27;
    // 0x80026DFC: nop

    after_27:
    // 0x80026E00: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80026E04: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80026E08: addiu       $t0, $v0, 0x7FFF
    ctx->r8 = ADD32(ctx->r2, 0X7FFF);
    // 0x80026E0C: lbu         $t0, 0x9A5($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X9A5);
    // 0x80026E10: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x80026E14: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80026E18: jal         0x8002198C
    // 0x80026E1C: sb          $t1, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r9;
    func_8002198C(rdram, ctx);
        goto after_28;
    // 0x80026E1C: sb          $t1, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r9;
    after_28:
    // 0x80026E20: b           L_80026E98
    // 0x80026E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80026E98;
    // 0x80026E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80026E28:
    // 0x80026E28: jal         0x80297DB0
    // 0x80026E2C: nop

    LOOKUP_FUNC(0x80297DB0)(rdram, ctx);
        goto after_29;
    // 0x80026E2C: nop

    after_29:
    // 0x80026E30: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80026E34: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80026E38: addiu       $a2, $zero, 0x138
    ctx->r6 = ADD32(0, 0X138);
    // 0x80026E3C: jal         0x800201A8
    // 0x80026E40: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_800201A8(rdram, ctx);
        goto after_30;
    // 0x80026E40: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_30:
    // 0x80026E44: jal         0x802A0E98
    // 0x80026E48: nop

    LOOKUP_FUNC(0x802A0E98)(rdram, ctx);
        goto after_31;
    // 0x80026E48: nop

    after_31:
    // 0x80026E4C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80026E50: addiu       $v0, $v0, 0xB7E
    ctx->r2 = ADD32(ctx->r2, 0XB7E);
    // 0x80026E54: lhu         $t2, 0x0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X0);
    // 0x80026E58: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80026E5C: andi        $t4, $t2, 0xFEFF
    ctx->r12 = ctx->r10 & 0XFEFF;
    // 0x80026E60: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x80026E64: ori         $t5, $t4, 0x4000
    ctx->r13 = ctx->r12 | 0X4000;
    // 0x80026E68: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x80026E6C: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x80026E70: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80026E74: bne         $t6, $at, L_80026E8C
    if (ctx->r14 != ctx->r1) {
        // 0x80026E78: nop
    
            goto L_80026E8C;
    }
    // 0x80026E78: nop

    // 0x80026E7C: jal         0x80015BC0
    // 0x80026E80: addiu       $a0, $zero, 0x3BC
    ctx->r4 = ADD32(0, 0X3BC);
    func_80015BC0(rdram, ctx);
        goto after_32;
    // 0x80026E80: addiu       $a0, $zero, 0x3BC
    ctx->r4 = ADD32(0, 0X3BC);
    after_32:
    // 0x80026E84: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80026E88: sb          $zero, 0x39DC($at)
    MEM_B(0X39DC, ctx->r1) = 0;
L_80026E8C:
    // 0x80026E8C: jal         0x8001B890
    // 0x80026E90: nop

    func_8001B890(rdram, ctx);
        goto after_33;
    // 0x80026E90: nop

    after_33:
L_80026E94:
    // 0x80026E94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80026E98:
    // 0x80026E98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80026E9C: jr          $ra
    // 0x80026EA0: nop

    return;
    // 0x80026EA0: nop

;}
RECOMP_FUNC void func_80026EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026EA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80026EA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80026EAC: jal         0x800274AC
    // 0x80026EB0: nop

    func_800274AC(rdram, ctx);
        goto after_0;
    // 0x80026EB0: nop

    after_0:
    // 0x80026EB4: jal         0x802B3224
    // 0x80026EB8: nop

    LOOKUP_FUNC(0x802B3224)(rdram, ctx);
        goto after_1;
    // 0x80026EB8: nop

    after_1:
    // 0x80026EBC: jal         0x80002F20
    // 0x80026EC0: nop

    func_80002F20(rdram, ctx);
        goto after_2;
    // 0x80026EC0: nop

    after_2:
    // 0x80026EC4: jal         0x8000EEB0
    // 0x80026EC8: nop

    func_8000EEB0(rdram, ctx);
        goto after_3;
    // 0x80026EC8: nop

    after_3:
    // 0x80026ECC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80026ED0: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80026ED4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80026ED8: lui         $t6, 0x3
    ctx->r14 = S32(0X3 << 16);
    // 0x80026EDC: sb          $zero, -0x2FB0($at)
    MEM_B(-0X2FB0, ctx->r1) = 0;
    // 0x80026EE0: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80026EE4: lhu         $t6, -0x7666($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X7666);
    // 0x80026EE8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80026EEC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80026EF0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80026EF4: sh          $t7, -0x7666($at)
    MEM_H(-0X7666, ctx->r1) = ctx->r15;
    // 0x80026EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80026EFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80026F00: jr          $ra
    // 0x80026F04: nop

    return;
    // 0x80026F04: nop

;}
RECOMP_FUNC void func_80026F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026F08: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80026F0C: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x80026F10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80026F14: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80026F18: bne         $t6, $at, L_80026F38
    if (ctx->r14 != ctx->r1) {
        // 0x80026F1C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80026F38;
    }
    // 0x80026F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80026F20: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80026F24: sh          $zero, 0x6968($at)
    MEM_H(0X6968, ctx->r1) = 0;
    // 0x80026F28: jal         0x8001B854
    // 0x80026F2C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8001B854(rdram, ctx);
        goto after_0;
    // 0x80026F2C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x80026F30: b           L_8002718C
    // 0x80026F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002718C;
    // 0x80026F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80026F38:
    // 0x80026F38: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x80026F3C: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x80026F40: addiu       $v0, $v1, 0x7FFF
    ctx->r2 = ADD32(ctx->r3, 0X7FFF);
    // 0x80026F44: lbu         $v0, 0x9A5($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9A5);
    // 0x80026F48: nop

    // 0x80026F4C: sltiu       $at, $v0, 0x6
    ctx->r1 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x80026F50: beq         $at, $zero, L_80027164
    if (ctx->r1 == 0) {
        // 0x80026F54: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_80027164;
    }
    // 0x80026F54: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80026F58: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026F5C: addu        $at, $at, $t7
    gpr jr_addend_80026F68 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80026F60: lw          $t7, 0x3D50($at)
    ctx->r15 = ADD32(ctx->r1, 0X3D50);
    // 0x80026F64: nop

    // 0x80026F68: jr          $t7
    // 0x80026F6C: nop

    switch (jr_addend_80026F68 >> 2) {
        case 0: goto L_80026F70; break;
        case 1: goto L_80026F98; break;
        case 2: goto L_80026FB8; break;
        case 3: goto L_80026FF0; break;
        case 4: goto L_8002711C; break;
        case 5: goto L_80027144; break;
        default: switch_error(__func__, 0x80026F68, 0x800D3D50);
    }
    // 0x80026F6C: nop

L_80026F70:
    // 0x80026F70: jal         0x800273E8
    // 0x80026F74: nop

    func_800273E8(rdram, ctx);
        goto after_1;
    // 0x80026F74: nop

    after_1:
    // 0x80026F78: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x80026F7C: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x80026F80: addiu       $t8, $v1, 0x7FFF
    ctx->r24 = ADD32(ctx->r3, 0X7FFF);
    // 0x80026F84: lbu         $t8, 0x9A5($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X9A5);
    // 0x80026F88: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80026F8C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80026F90: b           L_80027164
    // 0x80026F94: sb          $t9, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r25;
        goto L_80027164;
    // 0x80026F94: sb          $t9, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r25;
L_80026F98:
    // 0x80026F98: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x80026F9C: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80026FA0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80026FA4: sb          $t0, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r8;
    // 0x80026FA8: jal         0x80025A10
    // 0x80026FAC: addiu       $a0, $a0, 0x3C88
    ctx->r4 = ADD32(ctx->r4, 0X3C88);
    func_80025A10(rdram, ctx);
        goto after_2;
    // 0x80026FAC: addiu       $a0, $a0, 0x3C88
    ctx->r4 = ADD32(ctx->r4, 0X3C88);
    after_2:
    // 0x80026FB0: b           L_80027164
    // 0x80026FB4: nop

        goto L_80027164;
    // 0x80026FB4: nop

L_80026FB8:
    // 0x80026FB8: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x80026FBC: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80026FC0: jal         0x800603F0
    // 0x80026FC4: sb          $t1, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r9;
    func_800603F0(rdram, ctx);
        goto after_3;
    // 0x80026FC4: sb          $t1, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r9;
    after_3:
    // 0x80026FC8: jal         0x80293EAC
    // 0x80026FCC: nop

    LOOKUP_FUNC(0x80293EAC)(rdram, ctx);
        goto after_4;
    // 0x80026FCC: nop

    after_4:
    // 0x80026FD0: jal         0x8028D160
    // 0x80026FD4: nop

    LOOKUP_FUNC(0x8028D160)(rdram, ctx);
        goto after_5;
    // 0x80026FD4: nop

    after_5:
    // 0x80026FD8: jal         0x8028D3C8
    // 0x80026FDC: nop

    LOOKUP_FUNC(0x8028D3C8)(rdram, ctx);
        goto after_6;
    // 0x80026FDC: nop

    after_6:
    // 0x80026FE0: jal         0x8007F5D0
    // 0x80026FE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8007F5D0(rdram, ctx);
        goto after_7;
    // 0x80026FE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x80026FE8: b           L_80027164
    // 0x80026FEC: nop

        goto L_80027164;
    // 0x80026FEC: nop

L_80026FF0:
    // 0x80026FF0: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x80026FF4: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80026FF8: jal         0x8005C7AC
    // 0x80026FFC: sb          $t2, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r10;
    func_8005C7AC(rdram, ctx);
        goto after_8;
    // 0x80026FFC: sb          $t2, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r10;
    after_8:
    // 0x80027000: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80027004: lhu         $t3, -0x3A04($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X3A04);
    // 0x80027008: nop

    // 0x8002700C: bne         $t3, $zero, L_80027024
    if (ctx->r11 != 0) {
        // 0x80027010: nop
    
            goto L_80027024;
    }
    // 0x80027010: nop

    // 0x80027014: jal         0x8005B330
    // 0x80027018: nop

    func_8005B330(rdram, ctx);
        goto after_9;
    // 0x80027018: nop

    after_9:
    // 0x8002701C: jal         0x800599A0
    // 0x80027020: nop

    func_800599A0(rdram, ctx);
        goto after_10;
    // 0x80027020: nop

    after_10:
L_80027024:
    // 0x80027024: jal         0x8005C9BC
    // 0x80027028: nop

    func_8005C9BC(rdram, ctx);
        goto after_11;
    // 0x80027028: nop

    after_11:
    // 0x8002702C: jal         0x802A2434
    // 0x80027030: nop

    LOOKUP_FUNC(0x802A2434)(rdram, ctx);
        goto after_12;
    // 0x80027030: nop

    after_12:
    // 0x80027034: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80027038: lhu         $a0, 0xB78($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XB78);
    // 0x8002703C: jal         0x8005D74C
    // 0x80027040: nop

    func_8005D74C(rdram, ctx);
        goto after_13;
    // 0x80027040: nop

    after_13:
    // 0x80027044: jal         0x8005E18C
    // 0x80027048: nop

    func_8005E18C(rdram, ctx);
        goto after_14;
    // 0x80027048: nop

    after_14:
    // 0x8002704C: jal         0x8005E498
    // 0x80027050: nop

    func_8005E498(rdram, ctx);
        goto after_15;
    // 0x80027050: nop

    after_15:
    // 0x80027054: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80027058: sh          $zero, 0x6420($at)
    MEM_H(0X6420, ctx->r1) = 0;
    // 0x8002705C: jal         0x8000AB98
    // 0x80027060: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8000AB98(rdram, ctx);
        goto after_16;
    // 0x80027060: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_16:
    // 0x80027064: jal         0x80003698
    // 0x80027068: nop

    func_80003698(rdram, ctx);
        goto after_17;
    // 0x80027068: nop

    after_17:
    // 0x8002706C: jal         0x80004A60
    // 0x80027070: nop

    func_80004A60(rdram, ctx);
        goto after_18;
    // 0x80027070: nop

    after_18:
    // 0x80027074: jal         0x8005B1F4
    // 0x80027078: nop

    func_8005B1F4(rdram, ctx);
        goto after_19;
    // 0x80027078: nop

    after_19:
    // 0x8002707C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80027080: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x80027084: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80027088: jal         0x80013364
    // 0x8002708C: lui         $a3, 0x4387
    ctx->r7 = S32(0X4387 << 16);
    func_80013364(rdram, ctx);
        goto after_20;
    // 0x8002708C: lui         $a3, 0x4387
    ctx->r7 = S32(0X4387 << 16);
    after_20:
    // 0x80027090: jal         0x80293650
    // 0x80027094: nop

    LOOKUP_FUNC(0x80293650)(rdram, ctx);
        goto after_21;
    // 0x80027094: nop

    after_21:
    // 0x80027098: jal         0x8007AA60
    // 0x8002709C: nop

    func_8007AA60(rdram, ctx);
        goto after_22;
    // 0x8002709C: nop

    after_22:
    // 0x800270A0: jal         0x80297EF4
    // 0x800270A4: nop

    LOOKUP_FUNC(0x80297EF4)(rdram, ctx);
        goto after_23;
    // 0x800270A4: nop

    after_23:
    // 0x800270A8: jal         0x8028D4E0
    // 0x800270AC: nop

    LOOKUP_FUNC(0x8028D4E0)(rdram, ctx);
        goto after_24;
    // 0x800270AC: nop

    after_24:
    // 0x800270B0: jal         0x8005E870
    // 0x800270B4: nop

    func_8005E870(rdram, ctx);
        goto after_25;
    // 0x800270B4: nop

    after_25:
    // 0x800270B8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x800270BC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800270C0: sb          $zero, -0x67F7($at)
    MEM_B(-0X67F7, ctx->r1) = 0;
    // 0x800270C4: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x800270C8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800270CC: sh          $t4, 0x756($v0)
    MEM_H(0X756, ctx->r2) = ctx->r12;
    // 0x800270D0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800270D4: jal         0x8025E354
    // 0x800270D8: sb          $zero, 0x3968($at)
    MEM_B(0X3968, ctx->r1) = 0;
    LOOKUP_FUNC(0x8025E354)(rdram, ctx);
        goto after_26;
    // 0x800270D8: sb          $zero, 0x3968($at)
    MEM_B(0X3968, ctx->r1) = 0;
    after_26:
    // 0x800270DC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800270E0: jal         0x80025A10
    // 0x800270E4: addiu       $a0, $a0, 0x3BD0
    ctx->r4 = ADD32(ctx->r4, 0X3BD0);
    func_80025A10(rdram, ctx);
        goto after_27;
    // 0x800270E4: addiu       $a0, $a0, 0x3BD0
    ctx->r4 = ADD32(ctx->r4, 0X3BD0);
    after_27:
    // 0x800270E8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800270EC: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x800270F0: lbu         $t5, 0x754($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X754);
    // 0x800270F4: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    // 0x800270F8: andi        $t7, $t5, 0xFE
    ctx->r15 = ctx->r13 & 0XFE;
    // 0x800270FC: sb          $t7, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r15;
    // 0x80027100: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x80027104: jal         0x80015BC0
    // 0x80027108: sb          $t8, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r24;
    func_80015BC0(rdram, ctx);
        goto after_28;
    // 0x80027108: sb          $t8, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r24;
    after_28:
    // 0x8002710C: jal         0x800219E4
    // 0x80027110: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_800219E4(rdram, ctx);
        goto after_29;
    // 0x80027110: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_29:
    // 0x80027114: b           L_80027164
    // 0x80027118: nop

        goto L_80027164;
    // 0x80027118: nop

L_8002711C:
    // 0x8002711C: jal         0x802A0E98
    // 0x80027120: nop

    LOOKUP_FUNC(0x802A0E98)(rdram, ctx);
        goto after_30;
    // 0x80027120: nop

    after_30:
    // 0x80027124: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x80027128: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x8002712C: addiu       $t9, $v1, 0x7FFF
    ctx->r25 = ADD32(ctx->r3, 0X7FFF);
    // 0x80027130: lbu         $t9, 0x9A5($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X9A5);
    // 0x80027134: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80027138: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8002713C: b           L_80027164
    // 0x80027140: sb          $t0, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r8;
        goto L_80027164;
    // 0x80027140: sb          $t0, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r8;
L_80027144:
    // 0x80027144: jal         0x8007D140
    // 0x80027148: nop

    func_8007D140(rdram, ctx);
        goto after_31;
    // 0x80027148: nop

    after_31:
    // 0x8002714C: jal         0x80013340
    // 0x80027150: nop

    func_80013340(rdram, ctx);
        goto after_32;
    // 0x80027150: nop

    after_32:
    // 0x80027154: jal         0x80002F20
    // 0x80027158: nop

    func_80002F20(rdram, ctx);
        goto after_33;
    // 0x80027158: nop

    after_33:
    // 0x8002715C: jal         0x8028D490
    // 0x80027160: nop

    LOOKUP_FUNC(0x8028D490)(rdram, ctx);
        goto after_34;
    // 0x80027160: nop

    after_34:
L_80027164:
    // 0x80027164: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80027168: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x8002716C: lui         $t1, 0x3
    ctx->r9 = S32(0X3 << 16);
    // 0x80027170: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x80027174: lhu         $t1, -0x7666($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X7666);
    // 0x80027178: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8002717C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80027180: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80027184: sh          $t2, -0x7666($at)
    MEM_H(-0X7666, ctx->r1) = ctx->r10;
    // 0x80027188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002718C:
    // 0x8002718C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80027190: jr          $ra
    // 0x80027194: nop

    return;
    // 0x80027194: nop

;}
RECOMP_FUNC void func_80027198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027198: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002719C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800271A0: jal         0x8002910C
    // 0x800271A4: nop

    func_8002910C(rdram, ctx);
        goto after_0;
    // 0x800271A4: nop

    after_0:
    // 0x800271A8: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x800271AC: lbu         $t6, 0x5234($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5234);
    // 0x800271B0: nop

    // 0x800271B4: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x800271B8: beq         $at, $zero, L_800273B4
    if (ctx->r1 == 0) {
        // 0x800271BC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_800273B4;
    }
    // 0x800271BC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800271C0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800271C4: addu        $at, $at, $t6
    gpr jr_addend_800271D0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800271C8: lw          $t6, 0x3D68($at)
    ctx->r14 = ADD32(ctx->r1, 0X3D68);
    // 0x800271CC: nop

    // 0x800271D0: jr          $t6
    // 0x800271D4: nop

    switch (jr_addend_800271D0 >> 2) {
        case 0: goto L_800271D8; break;
        case 1: goto L_80027218; break;
        case 2: goto L_80027250; break;
        case 3: goto L_8002732C; break;
        case 4: goto L_80027358; break;
        case 5: goto L_8002739C; break;
        case 6: goto L_800273B4; break;
        default: switch_error(__func__, 0x800271D0, 0x800D3D68);
    }
    // 0x800271D4: nop

L_800271D8:
    // 0x800271D8: jal         0x800273E8
    // 0x800271DC: nop

    func_800273E8(rdram, ctx);
        goto after_1;
    // 0x800271DC: nop

    after_1:
    // 0x800271E0: jal         0x8002198C
    // 0x800271E4: nop

    func_8002198C(rdram, ctx);
        goto after_2;
    // 0x800271E4: nop

    after_2:
    // 0x800271E8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800271EC: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x800271F0: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x800271F4: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x800271F8: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x800271FC: sh          $t7, 0x7C6($v0)
    MEM_H(0X7C6, ctx->r2) = ctx->r15;
    // 0x80027200: addiu       $t8, $v1, 0x7FFF
    ctx->r24 = ADD32(ctx->r3, 0X7FFF);
    // 0x80027204: lbu         $t8, 0x9A5($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X9A5);
    // 0x80027208: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x8002720C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80027210: b           L_800273D8
    // 0x80027214: sb          $t9, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r25;
        goto L_800273D8;
    // 0x80027214: sb          $t9, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r25;
L_80027218:
    // 0x80027218: jal         0x800603F0
    // 0x8002721C: nop

    func_800603F0(rdram, ctx);
        goto after_3;
    // 0x8002721C: nop

    after_3:
    // 0x80027220: jal         0x8028D160
    // 0x80027224: nop

    LOOKUP_FUNC(0x8028D160)(rdram, ctx);
        goto after_4;
    // 0x80027224: nop

    after_4:
    // 0x80027228: jal         0x8028D3C8
    // 0x8002722C: nop

    LOOKUP_FUNC(0x8028D3C8)(rdram, ctx);
        goto after_5;
    // 0x8002722C: nop

    after_5:
    // 0x80027230: jal         0x80020270
    // 0x80027234: nop

    func_80020270(rdram, ctx);
        goto after_6;
    // 0x80027234: nop

    after_6:
    // 0x80027238: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x8002723C: lbu         $t0, 0x5234($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X5234);
    // 0x80027240: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80027244: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80027248: b           L_800273D8
    // 0x8002724C: sb          $t1, 0x5234($at)
    MEM_B(0X5234, ctx->r1) = ctx->r9;
        goto L_800273D8;
    // 0x8002724C: sb          $t1, 0x5234($at)
    MEM_B(0X5234, ctx->r1) = ctx->r9;
L_80027250:
    // 0x80027250: jal         0x8005C7AC
    // 0x80027254: nop

    func_8005C7AC(rdram, ctx);
        goto after_7;
    // 0x80027254: nop

    after_7:
    // 0x80027258: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x8002725C: lhu         $t2, -0x3A04($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X3A04);
    // 0x80027260: nop

    // 0x80027264: bne         $t2, $zero, L_8002727C
    if (ctx->r10 != 0) {
        // 0x80027268: nop
    
            goto L_8002727C;
    }
    // 0x80027268: nop

    // 0x8002726C: jal         0x8005B330
    // 0x80027270: nop

    func_8005B330(rdram, ctx);
        goto after_8;
    // 0x80027270: nop

    after_8:
    // 0x80027274: jal         0x800599A0
    // 0x80027278: nop

    func_800599A0(rdram, ctx);
        goto after_9;
    // 0x80027278: nop

    after_9:
L_8002727C:
    // 0x8002727C: jal         0x8005C9BC
    // 0x80027280: nop

    func_8005C9BC(rdram, ctx);
        goto after_10;
    // 0x80027280: nop

    after_10:
    // 0x80027284: jal         0x802A2434
    // 0x80027288: nop

    LOOKUP_FUNC(0x802A2434)(rdram, ctx);
        goto after_11;
    // 0x80027288: nop

    after_11:
    // 0x8002728C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80027290: lhu         $a0, 0xB78($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XB78);
    // 0x80027294: jal         0x8005D74C
    // 0x80027298: nop

    func_8005D74C(rdram, ctx);
        goto after_12;
    // 0x80027298: nop

    after_12:
    // 0x8002729C: jal         0x8005E18C
    // 0x800272A0: nop

    func_8005E18C(rdram, ctx);
        goto after_13;
    // 0x800272A0: nop

    after_13:
    // 0x800272A4: jal         0x8005E498
    // 0x800272A8: nop

    func_8005E498(rdram, ctx);
        goto after_14;
    // 0x800272A8: nop

    after_14:
    // 0x800272AC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800272B0: jal         0x80003698
    // 0x800272B4: sh          $zero, 0x6420($at)
    MEM_H(0X6420, ctx->r1) = 0;
    func_80003698(rdram, ctx);
        goto after_15;
    // 0x800272B4: sh          $zero, 0x6420($at)
    MEM_H(0X6420, ctx->r1) = 0;
    after_15:
    // 0x800272B8: jal         0x80004A60
    // 0x800272BC: nop

    func_80004A60(rdram, ctx);
        goto after_16;
    // 0x800272BC: nop

    after_16:
    // 0x800272C0: jal         0x8005B1F4
    // 0x800272C4: nop

    func_8005B1F4(rdram, ctx);
        goto after_17;
    // 0x800272C4: nop

    after_17:
    // 0x800272C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800272CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800272D0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800272D4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800272D8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x800272DC: jal         0x80013364
    // 0x800272E0: nop

    func_80013364(rdram, ctx);
        goto after_18;
    // 0x800272E0: nop

    after_18:
    // 0x800272E4: jal         0x8000DF94
    // 0x800272E8: nop

    func_8000DF94(rdram, ctx);
        goto after_19;
    // 0x800272E8: nop

    after_19:
    // 0x800272EC: jal         0x80293650
    // 0x800272F0: nop

    LOOKUP_FUNC(0x80293650)(rdram, ctx);
        goto after_20;
    // 0x800272F0: nop

    after_20:
    // 0x800272F4: jal         0x8007AA60
    // 0x800272F8: nop

    func_8007AA60(rdram, ctx);
        goto after_21;
    // 0x800272F8: nop

    after_21:
    // 0x800272FC: jal         0x80297EF4
    // 0x80027300: nop

    LOOKUP_FUNC(0x80297EF4)(rdram, ctx);
        goto after_22;
    // 0x80027300: nop

    after_22:
    // 0x80027304: jal         0x8028D4E0
    // 0x80027308: nop

    LOOKUP_FUNC(0x8028D4E0)(rdram, ctx);
        goto after_23;
    // 0x80027308: nop

    after_23:
    // 0x8002730C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80027310: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80027314: addiu       $t3, $v0, 0x7FFF
    ctx->r11 = ADD32(ctx->r2, 0X7FFF);
    // 0x80027318: lbu         $t3, 0x9A5($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X9A5);
    // 0x8002731C: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x80027320: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80027324: b           L_800273D8
    // 0x80027328: sb          $t4, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r12;
        goto L_800273D8;
    // 0x80027328: sb          $t4, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r12;
L_8002732C:
    // 0x8002732C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80027330: jal         0x80025A10
    // 0x80027334: addiu       $a0, $a0, 0x3BD0
    ctx->r4 = ADD32(ctx->r4, 0X3BD0);
    func_80025A10(rdram, ctx);
        goto after_24;
    // 0x80027334: addiu       $a0, $a0, 0x3BD0
    ctx->r4 = ADD32(ctx->r4, 0X3BD0);
    after_24:
    // 0x80027338: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8002733C: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80027340: addiu       $t5, $v0, 0x7FFF
    ctx->r13 = ADD32(ctx->r2, 0X7FFF);
    // 0x80027344: lbu         $t5, 0x9A5($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X9A5);
    // 0x80027348: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8002734C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80027350: b           L_800273D8
    // 0x80027354: sb          $t6, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r14;
        goto L_800273D8;
    // 0x80027354: sb          $t6, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r14;
L_80027358:
    // 0x80027358: jal         0x802A0E98
    // 0x8002735C: nop

    LOOKUP_FUNC(0x802A0E98)(rdram, ctx);
        goto after_25;
    // 0x8002735C: nop

    after_25:
    // 0x80027360: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80027364: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80027368: lbu         $t7, 0x754($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X754);
    // 0x8002736C: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x80027370: andi        $t9, $t7, 0xFFEE
    ctx->r25 = ctx->r15 & 0XFFEE;
    // 0x80027374: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x80027378: sb          $t9, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r25;
    // 0x8002737C: ori         $t0, $t9, 0xA
    ctx->r8 = ctx->r25 | 0XA;
    // 0x80027380: sb          $t0, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r8;
    // 0x80027384: addiu       $t1, $v1, 0x7FFF
    ctx->r9 = ADD32(ctx->r3, 0X7FFF);
    // 0x80027388: lbu         $t1, 0x9A5($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X9A5);
    // 0x8002738C: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80027390: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80027394: b           L_800273D8
    // 0x80027398: sb          $t2, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r10;
        goto L_800273D8;
    // 0x80027398: sb          $t2, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r10;
L_8002739C:
    // 0x8002739C: jal         0x8000DE30
    // 0x800273A0: nop

    func_8000DE30(rdram, ctx);
        goto after_26;
    // 0x800273A0: nop

    after_26:
    // 0x800273A4: jal         0x8028D490
    // 0x800273A8: nop

    LOOKUP_FUNC(0x8028D490)(rdram, ctx);
        goto after_27;
    // 0x800273A8: nop

    after_27:
    // 0x800273AC: b           L_800273DC
    // 0x800273B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800273DC;
    // 0x800273B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800273B4:
    // 0x800273B4: jal         0x800603F0
    // 0x800273B8: nop

    func_800603F0(rdram, ctx);
        goto after_28;
    // 0x800273B8: nop

    after_28:
    // 0x800273BC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800273C0: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x800273C4: lbu         $t3, 0x754($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X754);
    // 0x800273C8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x800273CC: andi        $t4, $t3, 0xFFF5
    ctx->r12 = ctx->r11 & 0XFFF5;
    // 0x800273D0: jal         0x8001B854
    // 0x800273D4: sb          $t4, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r12;
    func_8001B854(rdram, ctx);
        goto after_29;
    // 0x800273D4: sb          $t4, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r12;
    after_29:
L_800273D8:
    // 0x800273D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800273DC:
    // 0x800273DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800273E0: jr          $ra
    // 0x800273E4: nop

    return;
    // 0x800273E4: nop

;}
RECOMP_FUNC void func_800273E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800273E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800273EC: lui         $a0, 0xE
    ctx->r4 = S32(0XE << 16);
    // 0x800273F0: lui         $t7, 0x11
    ctx->r15 = S32(0X11 << 16);
    // 0x800273F4: addiu       $a0, $a0, -0x2B70
    ctx->r4 = ADD32(ctx->r4, -0X2B70);
    // 0x800273F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800273FC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80027400: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80027404: addiu       $t7, $t7, 0x130
    ctx->r15 = ADD32(ctx->r15, 0X130);
    // 0x80027408: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8002740C: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x80027410: addiu       $a1, $a1, -0x4800
    ctx->r5 = ADD32(ctx->r5, -0X4800);
    // 0x80027414: jal         0x8001B1B4
    // 0x80027418: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x80027418: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8002741C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80027420: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80027424: addiu       $a0, $a0, -0x1B60
    ctx->r4 = ADD32(ctx->r4, -0X1B60);
    // 0x80027428: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8002742C: addiu       $t8, $t8, -0x1A30
    ctx->r24 = ADD32(ctx->r24, -0X1A30);
    // 0x80027430: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x80027434: jal         0x80080910
    // 0x80027438: subu        $a1, $t8, $a0
    ctx->r5 = SUB32(ctx->r24, ctx->r4);
    func_80080910(rdram, ctx);
        goto after_1;
    // 0x80027438: subu        $a1, $t8, $a0
    ctx->r5 = SUB32(ctx->r24, ctx->r4);
    after_1:
    // 0x8002743C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80027440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80027444: jr          $ra
    // 0x80027448: nop

    return;
    // 0x80027448: nop

;}
RECOMP_FUNC void func_8002744C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002744C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80027450: lui         $a0, 0x19
    ctx->r4 = S32(0X19 << 16);
    // 0x80027454: lui         $t7, 0x1A
    ctx->r15 = S32(0X1A << 16);
    // 0x80027458: addiu       $a0, $a0, 0xD00
    ctx->r4 = ADD32(ctx->r4, 0XD00);
    // 0x8002745C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80027460: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80027464: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80027468: addiu       $t7, $t7, -0x7500
    ctx->r15 = ADD32(ctx->r15, -0X7500);
    // 0x8002746C: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x80027470: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x80027474: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80027478: jal         0x8001B1B4
    // 0x8002747C: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8002747C: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x80027480: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x80027484: lui         $t8, 0x803F
    ctx->r24 = S32(0X803F << 16);
    // 0x80027488: addiu       $a0, $a0, 0x7E00
    ctx->r4 = ADD32(ctx->r4, 0X7E00);
    // 0x8002748C: addiu       $t8, $t8, 0x7E20
    ctx->r24 = ADD32(ctx->r24, 0X7E20);
    // 0x80027490: jal         0x80080910
    // 0x80027494: subu        $a1, $t8, $a0
    ctx->r5 = SUB32(ctx->r24, ctx->r4);
    func_80080910(rdram, ctx);
        goto after_1;
    // 0x80027494: subu        $a1, $t8, $a0
    ctx->r5 = SUB32(ctx->r24, ctx->r4);
    after_1:
    // 0x80027498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002749C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800274A0: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x800274A4: jr          $ra
    // 0x800274A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800274A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800274AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800274AC: jr          $ra
    // 0x800274B0: nop

    return;
    // 0x800274B0: nop

;}
RECOMP_FUNC void func_80027B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027B60: lui         $at, 0x4204
    ctx->r1 = S32(0X4204 << 16);
    // 0x80027B64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80027B68: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027B6C: swc1        $f4, -0x800($at)
    MEM_W(-0X800, ctx->r1) = ctx->f4.u32l;
    // 0x80027B70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80027B74: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80027B78: sw          $t6, 0x6C58($at)
    MEM_W(0X6C58, ctx->r1) = ctx->r14;
    // 0x80027B7C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80027B80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80027B84: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80027B88: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80027B8C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80027B90: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80027B94: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80027B98: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x80027B9C: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x80027BA0: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x80027BA4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80027BA8: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80027BAC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80027BB0: sw          $zero, 0x6DE4($at)
    MEM_W(0X6DE4, ctx->r1) = 0;
    // 0x80027BB4: addiu       $t3, $t3, -0x768
    ctx->r11 = ADD32(ctx->r11, -0X768);
    // 0x80027BB8: addiu       $v1, $v1, -0x1168
    ctx->r3 = ADD32(ctx->r3, -0X1168);
    // 0x80027BBC: addiu       $t2, $t2, -0x1B68
    ctx->r10 = ADD32(ctx->r10, -0X1B68);
    // 0x80027BC0: addiu       $t1, $t1, -0x11A8
    ctx->r9 = ADD32(ctx->r9, -0X11A8);
    // 0x80027BC4: addiu       $t0, $t0, -0x1BA8
    ctx->r8 = ADD32(ctx->r8, -0X1BA8);
    // 0x80027BC8: addiu       $a3, $a3, -0x11E8
    ctx->r7 = ADD32(ctx->r7, -0X11E8);
    // 0x80027BCC: addiu       $a2, $a2, -0x1BE8
    ctx->r6 = ADD32(ctx->r6, -0X1BE8);
    // 0x80027BD0: addiu       $a1, $a1, -0x1228
    ctx->r5 = ADD32(ctx->r5, -0X1228);
    // 0x80027BD4: addiu       $a0, $a0, -0x1C28
    ctx->r4 = ADD32(ctx->r4, -0X1C28);
    // 0x80027BD8: addiu       $v0, $v0, -0x39C8
    ctx->r2 = ADD32(ctx->r2, -0X39C8);
L_80027BDC:
    // 0x80027BDC: sw          $v1, 0x2D8($v0)
    MEM_W(0X2D8, ctx->r2) = ctx->r3;
    // 0x80027BE0: addiu       $v1, $v1, 0x100
    ctx->r3 = ADD32(ctx->r3, 0X100);
    // 0x80027BE4: sw          $a2, 0x15C($v0)
    MEM_W(0X15C, ctx->r2) = ctx->r6;
    // 0x80027BE8: sw          $a3, 0x160($v0)
    MEM_W(0X160, ctx->r2) = ctx->r7;
    // 0x80027BEC: sw          $t0, 0x218($v0)
    MEM_W(0X218, ctx->r2) = ctx->r8;
    // 0x80027BF0: sw          $t1, 0x21C($v0)
    MEM_W(0X21C, ctx->r2) = ctx->r9;
    // 0x80027BF4: sw          $t2, 0x2D4($v0)
    MEM_W(0X2D4, ctx->r2) = ctx->r10;
    // 0x80027BF8: sw          $a0, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r4;
    // 0x80027BFC: sw          $a1, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r5;
    // 0x80027C00: addiu       $a1, $a1, 0x100
    ctx->r5 = ADD32(ctx->r5, 0X100);
    // 0x80027C04: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x80027C08: addiu       $t2, $t2, 0x100
    ctx->r10 = ADD32(ctx->r10, 0X100);
    // 0x80027C0C: addiu       $t1, $t1, 0x100
    ctx->r9 = ADD32(ctx->r9, 0X100);
    // 0x80027C10: addiu       $t0, $t0, 0x100
    ctx->r8 = ADD32(ctx->r8, 0X100);
    // 0x80027C14: addiu       $a3, $a3, 0x100
    ctx->r7 = ADD32(ctx->r7, 0X100);
    // 0x80027C18: addiu       $a2, $a2, 0x100
    ctx->r6 = ADD32(ctx->r6, 0X100);
    // 0x80027C1C: sw          $zero, 0x174($v0)
    MEM_W(0X174, ctx->r2) = 0;
    // 0x80027C20: sw          $zero, 0x230($v0)
    MEM_W(0X230, ctx->r2) = 0;
    // 0x80027C24: sw          $zero, 0x2EC($v0)
    MEM_W(0X2EC, ctx->r2) = 0;
    // 0x80027C28: addiu       $v0, $v0, 0x2F0
    ctx->r2 = ADD32(ctx->r2, 0X2F0);
    // 0x80027C2C: bne         $v1, $t3, L_80027BDC
    if (ctx->r3 != ctx->r11) {
        // 0x80027C30: sw          $zero, -0x238($v0)
        MEM_W(-0X238, ctx->r2) = 0;
            goto L_80027BDC;
    }
    // 0x80027C30: sw          $zero, -0x238($v0)
    MEM_W(-0X238, ctx->r2) = 0;
    // 0x80027C34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80027C38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80027C3C: jal         0x80028EAC
    // 0x80027C40: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_80028EAC(rdram, ctx);
        goto after_0;
    // 0x80027C40: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_0:
    // 0x80027C44: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80027C48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80027C4C: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x80027C50: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80027C54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80027C58: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80027C5C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80027C60: lw          $a2, -0x800($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X800);
    // 0x80027C64: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80027C68: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80027C6C: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x80027C70: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x80027C74: addiu       $a1, $a1, -0x39D0
    ctx->r5 = ADD32(ctx->r5, -0X39D0);
    // 0x80027C78: addiu       $a0, $a0, -0x1C68
    ctx->r4 = ADD32(ctx->r4, -0X1C68);
    // 0x80027C7C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80027C80: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80027C84: jal         0x8007FEF0
    // 0x80027C88: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_8007FEF0(rdram, ctx);
        goto after_1;
    // 0x80027C88: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80027C8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80027C90: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80027C94: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80027C98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80027C9C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80027CA0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80027CA4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80027CA8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80027CAC: addiu       $a1, $a1, -0x820
    ctx->r5 = ADD32(ctx->r5, -0X820);
    // 0x80027CB0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80027CB4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80027CB8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80027CBC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80027CC0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80027CC4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80027CC8: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x80027CCC: jal         0x800815F0
    // 0x80027CD0: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_800815F0(rdram, ctx);
        goto after_2;
    // 0x80027CD0: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x80027CD4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80027CD8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x80027CDC: jr          $ra
    // 0x80027CE0: nop

    return;
    // 0x80027CE0: nop

;}
RECOMP_FUNC void func_80027CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027CE4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80027CE8: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x80027CEC: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80027CF0: lui         $s3, 0x801B
    ctx->r19 = S32(0X801B << 16);
    // 0x80027CF4: addiu       $s3, $s3, -0x79C
    ctx->r19 = ADD32(ctx->r19, -0X79C);
    // 0x80027CF8: sw          $s5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r21;
    // 0x80027CFC: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80027D00: lui         $s5, 0x801B
    ctx->r21 = S32(0X801B << 16);
    // 0x80027D04: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    // 0x80027D08: swc1        $f4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f4.u32l;
    // 0x80027D0C: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80027D10: lwc1        $f14, 0x0($s3)
    ctx->f14.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80027D14: lui         $s4, 0x801B
    ctx->r20 = S32(0X801B << 16);
    // 0x80027D18: addiu       $s5, $s5, -0x794
    ctx->r21 = ADD32(ctx->r21, -0X794);
    // 0x80027D1C: addiu       $s4, $s4, -0x798
    ctx->r20 = ADD32(ctx->r20, -0X798);
    // 0x80027D20: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x80027D24: swc1        $f8, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f8.u32l;
    // 0x80027D28: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80027D2C: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80027D30: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80027D34: swc1        $f6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f6.u32l;
    // 0x80027D38: lwc1        $f16, 0x0($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X0);
    // 0x80027D3C: addiu       $s0, $s0, -0x7A8
    ctx->r16 = ADD32(ctx->r16, -0X7A8);
    // 0x80027D40: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x80027D44: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x80027D48: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80027D4C: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80027D50: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x80027D54: lwc1        $f18, 0x0($s5)
    ctx->f18.u32l = MEM_W(ctx->r21, 0X0);
    // 0x80027D58: addiu       $s2, $s2, -0x7A0
    ctx->r18 = ADD32(ctx->r18, -0X7A0);
    // 0x80027D5C: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x80027D60: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80027D64: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x80027D68: swc1        $f6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f6.u32l;
    // 0x80027D6C: mul.s       $f6, $f18, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80027D70: addiu       $s1, $s1, -0x7A4
    ctx->r17 = ADD32(ctx->r17, -0X7A4);
    // 0x80027D74: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    // 0x80027D78: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80027D7C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80027D80: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80027D84: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x80027D88: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80027D8C: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x80027D90: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80027D94: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x80027D98: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80027D9C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80027DA0: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80027DA4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80027DA8: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80027DAC: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80027DB0: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x80027DB4: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x80027DB8: jal         0x8007FA40
    // 0x80027DBC: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80027DBC: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x80027DC0: lwc1        $f8, 0x0($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80027DC4: lwc1        $f4, 0x0($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X0);
    // 0x80027DC8: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80027DCC: lwc1        $f8, 0x0($s5)
    ctx->f8.u32l = MEM_W(ctx->r21, 0X0);
    // 0x80027DD0: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80027DD4: lwc1        $f26, 0x0($s1)
    ctx->f26.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80027DD8: lwc1        $f28, 0x0($s2)
    ctx->f28.u32l = MEM_W(ctx->r18, 0X0);
    // 0x80027DDC: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80027DE0: swc1        $f10, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f10.u32l;
    // 0x80027DE4: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80027DE8: nop

    // 0x80027DEC: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80027DF0: swc1        $f6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f6.u32l;
    // 0x80027DF4: mul.s       $f6, $f26, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x80027DF8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80027DFC: swc1        $f10, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f10.u32l;
    // 0x80027E00: mul.s       $f10, $f28, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x80027E04: jal         0x8007FA40
    // 0x80027E08: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x80027E08: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_1:
    // 0x80027E0C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80027E10: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80027E14: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80027E18: lwc1        $f4, 0x0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X0);
    // 0x80027E1C: lwc1        $f18, 0x0($s5)
    ctx->f18.u32l = MEM_W(ctx->r21, 0X0);
    // 0x80027E20: lwc1        $f16, 0x0($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X0);
    // 0x80027E24: lwc1        $f14, 0x0($s3)
    ctx->f14.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80027E28: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80027E2C: addiu       $a3, $a3, -0x7B4
    ctx->r7 = ADD32(ctx->r7, -0X7B4);
    // 0x80027E30: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x80027E34: addiu       $t0, $t0, -0x7B0
    ctx->r8 = ADD32(ctx->r8, -0X7B0);
    // 0x80027E38: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x80027E3C: addiu       $t1, $t1, -0x7AC
    ctx->r9 = ADD32(ctx->r9, -0X7AC);
    // 0x80027E40: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80027E44: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x80027E48: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80027E4C: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80027E50: swc1        $f10, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f10.u32l;
    // 0x80027E54: lwc1        $f26, 0x0($s1)
    ctx->f26.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80027E58: nop

    // 0x80027E5C: mul.s       $f8, $f26, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f26.fl, ctx->f18.fl);
    // 0x80027E60: swc1        $f6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f6.u32l;
    // 0x80027E64: lwc1        $f28, 0x0($s2)
    ctx->f28.u32l = MEM_W(ctx->r18, 0X0);
    // 0x80027E68: nop

    // 0x80027E6C: mul.s       $f10, $f28, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f28.fl, ctx->f16.fl);
    // 0x80027E70: nop

    // 0x80027E74: mul.s       $f6, $f28, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f28.fl, ctx->f14.fl);
    // 0x80027E78: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80027E7C: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
    // 0x80027E80: mul.s       $f8, $f2, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x80027E84: lwc1        $f20, 0x0($a3)
    ctx->f20.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80027E88: mul.s       $f4, $f2, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x80027E8C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80027E90: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x80027E94: mul.s       $f6, $f26, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f26.fl, ctx->f14.fl);
    // 0x80027E98: lwc1        $f22, 0x0($t0)
    ctx->f22.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80027E9C: mul.s       $f10, $f20, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x80027EA0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80027EA4: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
    // 0x80027EA8: mul.s       $f4, $f22, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x80027EAC: lwc1        $f24, 0x0($t1)
    ctx->f24.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80027EB0: nop

    // 0x80027EB4: mul.s       $f8, $f24, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x80027EB8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80027EBC: jal         0x8007FA40
    // 0x80027EC0: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_8007FA40(rdram, ctx);
        goto after_2;
    // 0x80027EC0: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_2:
    // 0x80027EC4: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80027EC8: addiu       $a3, $a3, -0x7B4
    ctx->r7 = ADD32(ctx->r7, -0X7B4);
    // 0x80027ECC: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80027ED0: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x80027ED4: div.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80027ED8: addiu       $t1, $t1, -0x7AC
    ctx->r9 = ADD32(ctx->r9, -0X7AC);
    // 0x80027EDC: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80027EE0: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x80027EE4: addiu       $t0, $t0, -0x7B0
    ctx->r8 = ADD32(ctx->r8, -0X7B0);
    // 0x80027EE8: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80027EEC: lwc1        $f16, 0x0($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X0);
    // 0x80027EF0: lwc1        $f18, 0x0($s5)
    ctx->f18.u32l = MEM_W(ctx->r21, 0X0);
    // 0x80027EF4: lwc1        $f14, 0x0($s3)
    ctx->f14.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80027EF8: lwc1        $f2, 0x80($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80027EFC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80027F00: addiu       $v0, $v0, -0x7F8
    ctx->r2 = ADD32(ctx->r2, -0X7F8);
    // 0x80027F04: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
    // 0x80027F08: div.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80027F0C: lwc1        $f20, 0x0($a3)
    ctx->f20.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80027F10: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80027F14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80027F18: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x80027F1C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80027F20: addiu       $a1, $a1, -0x7B8
    ctx->r5 = ADD32(ctx->r5, -0X7B8);
    // 0x80027F24: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80027F28: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80027F2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80027F30: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x80027F34: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
    // 0x80027F38: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80027F3C: swc1        $f4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f4.u32l;
    // 0x80027F40: lwc1        $f24, 0x0($t1)
    ctx->f24.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80027F44: swc1        $f12, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f12.u32l;
    // 0x80027F48: mul.s       $f6, $f16, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x80027F4C: addiu       $a0, $v1, 0x20
    ctx->r4 = ADD32(ctx->r3, 0X20);
    // 0x80027F50: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
    // 0x80027F54: lwc1        $f22, 0x0($t0)
    ctx->f22.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80027F58: nop

    // 0x80027F5C: mul.s       $f8, $f18, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x80027F60: nop

    // 0x80027F64: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x80027F68: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80027F6C: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x80027F70: mul.s       $f6, $f14, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f24.fl);
    // 0x80027F74: nop

    // 0x80027F78: mul.s       $f10, $f14, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f22.fl);
    // 0x80027F7C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80027F80: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
    // 0x80027F84: mul.s       $f4, $f16, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80027F88: nop

    // 0x80027F8C: mul.s       $f8, $f20, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x80027F90: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80027F94: swc1        $f6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f6.u32l;
    // 0x80027F98: mul.s       $f10, $f22, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x80027F9C: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80027FA0: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80027FA4: mul.s       $f4, $f24, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f2.fl);
    // 0x80027FA8: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80027FAC: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80027FB0: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80027FB4: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x80027FB8: lwc1        $f6, 0x0($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X0);
    // 0x80027FBC: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80027FC0: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x80027FC4: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80027FC8: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x80027FCC: mul.s       $f10, $f14, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x80027FD0: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
    // 0x80027FD4: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80027FD8: mul.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x80027FDC: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x80027FE0: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80027FE4: swc1        $f8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f8.u32l;
    // 0x80027FE8: mul.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80027FEC: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
    // 0x80027FF0: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80027FF4: swc1        $f10, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f10.u32l;
    // 0x80027FF8: swc1        $f6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
    // 0x80027FFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80028000: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x80028004: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80028008: swc1        $f4, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f4.u32l;
    // 0x8002800C: swc1        $f6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f6.u32l;
L_80028010:
    // 0x80028010: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80028014: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80028018: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8002801C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80028020: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80028024: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80028028: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8002802C: nop

    // 0x80028030: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80028034: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80028038: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002803C: nop

    // 0x80028040: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80028044: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x80028048: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8002804C: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80028050: sh          $t8, -0x8($v1)
    MEM_H(-0X8, ctx->r3) = ctx->r24;
    // 0x80028054: sh          $v0, -0x8($a0)
    MEM_H(-0X8, ctx->r4) = ctx->r2;
    // 0x80028058: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x8002805C: nop

    // 0x80028060: addiu       $t3, $t9, 0x4
    ctx->r11 = ADD32(ctx->r25, 0X4);
    // 0x80028064: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x80028068: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8002806C: nop

    // 0x80028070: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80028074: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80028078: nop

    // 0x8002807C: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80028080: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80028084: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80028088: nop

    // 0x8002808C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80028090: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80028094: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80028098: sra         $t6, $v0, 16
    ctx->r14 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002809C: sh          $t6, -0x6($v1)
    MEM_H(-0X6, ctx->r3) = ctx->r14;
    // 0x800280A0: sh          $v0, -0x6($a0)
    MEM_H(-0X6, ctx->r4) = ctx->r2;
    // 0x800280A4: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x800280A8: nop

    // 0x800280AC: addiu       $t8, $t7, 0x4
    ctx->r24 = ADD32(ctx->r15, 0X4);
    // 0x800280B0: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x800280B4: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x800280B8: nop

    // 0x800280BC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800280C0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800280C4: nop

    // 0x800280C8: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800280CC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800280D0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800280D4: nop

    // 0x800280D8: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800280DC: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x800280E0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800280E4: sra         $t4, $v0, 16
    ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800280E8: sh          $t4, -0x4($v1)
    MEM_H(-0X4, ctx->r3) = ctx->r12;
    // 0x800280EC: sh          $v0, -0x4($a0)
    MEM_H(-0X4, ctx->r4) = ctx->r2;
    // 0x800280F0: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x800280F4: nop

    // 0x800280F8: addiu       $t6, $t5, 0x4
    ctx->r14 = ADD32(ctx->r13, 0X4);
    // 0x800280FC: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80028100: lwc1        $f10, 0x0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80028104: nop

    // 0x80028108: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8002810C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80028110: nop

    // 0x80028114: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80028118: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002811C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80028120: nop

    // 0x80028124: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80028128: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x8002812C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80028130: sra         $t9, $v0, 16
    ctx->r25 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80028134: sh          $t9, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r25;
    // 0x80028138: sh          $v0, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r2;
    // 0x8002813C: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x80028140: nop

    // 0x80028144: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x80028148: bne         $a2, $a3, L_80028010
    if (ctx->r6 != ctx->r7) {
        // 0x8002814C: sw          $t4, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r12;
            goto L_80028010;
    }
    // 0x8002814C: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x80028150: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80028154: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80028158: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8002815C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80028160: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80028164: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80028168: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8002816C: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80028170: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80028174: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80028178: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8002817C: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x80028180: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x80028184: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x80028188: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x8002818C: lw          $s4, 0x4C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4C);
    // 0x80028190: lw          $s5, 0x50($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X50);
    // 0x80028194: jr          $ra
    // 0x80028198: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80028198: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8002819C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002819C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800281A0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800281A4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x800281A8: lw          $v0, 0xA8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA8);
    // 0x800281AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800281B0: beq         $v0, $zero, L_800281C0
    if (ctx->r2 == 0) {
        // 0x800281B4: nop
    
            goto L_800281C0;
    }
    // 0x800281B4: nop

    // 0x800281B8: jalr        $v0
    // 0x800281BC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x800281BC: nop

    after_0:
L_800281C0:
    // 0x800281C0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800281C4: nop

    // 0x800281C8: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x800281CC: beq         $t6, $zero, L_80028374
    if (ctx->r14 == 0) {
        // 0x800281D0: andi        $t7, $v0, 0x4
        ctx->r15 = ctx->r2 & 0X4;
            goto L_80028374;
    }
    // 0x800281D0: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x800281D4: beq         $t7, $zero, L_80028254
    if (ctx->r15 == 0) {
        // 0x800281D8: lui         $t2, 0x800A
        ctx->r10 = S32(0X800A << 16);
            goto L_80028254;
    }
    // 0x800281D8: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x800281DC: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x800281E0: lw          $t8, 0x6C58($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6C58);
    // 0x800281E4: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x800281E8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800281EC: addu        $t1, $s0, $t9
    ctx->r9 = ADD32(ctx->r16, ctx->r25);
    // 0x800281F0: lw          $a0, 0xA0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XA0);
    // 0x800281F4: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x800281F8: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x800281FC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x80028200: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80028204: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80028208: nop

    // 0x8002820C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80028210: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x80028214: nop

    // 0x80028218: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8002821C: lwc1        $f10, 0x30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X30);
    // 0x80028220: nop

    // 0x80028224: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80028228: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8002822C: nop

    // 0x80028230: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x80028234: lwc1        $f18, 0x38($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X38);
    // 0x80028238: nop

    // 0x8002823C: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x80028240: lwc1        $f4, 0x60($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
    // 0x80028244: jal         0x80027CE4
    // 0x80028248: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_80027CE4(rdram, ctx);
        goto after_1;
    // 0x80028248: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8002824C: b           L_800282A0
    // 0x80028250: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
        goto L_800282A0;
    // 0x80028250: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_80028254:
    // 0x80028254: lw          $t2, 0x6C58($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6C58);
    // 0x80028258: lwc1        $f6, 0x60($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X60);
    // 0x8002825C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80028260: addu        $t4, $s0, $t3
    ctx->r12 = ADD32(ctx->r16, ctx->r11);
    // 0x80028264: lw          $a0, 0xA0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XA0);
    // 0x80028268: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x8002826C: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x80028270: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x80028274: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80028278: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8002827C: nop

    // 0x80028280: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80028284: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80028288: nop

    // 0x8002828C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80028290: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80028294: jal         0x8007F870
    // 0x80028298: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_8007F870(rdram, ctx);
        goto after_2;
    // 0x80028298: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x8002829C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_800282A0:
    // 0x800282A0: nop

    // 0x800282A4: andi        $t5, $v0, 0x40
    ctx->r13 = ctx->r2 & 0X40;
    // 0x800282A8: beq         $t5, $zero, L_80028374
    if (ctx->r13 == 0) {
        // 0x800282AC: andi        $t6, $v0, 0x20
        ctx->r14 = ctx->r2 & 0X20;
            goto L_80028374;
    }
    // 0x800282AC: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x800282B0: beq         $t6, $zero, L_80028318
    if (ctx->r14 == 0) {
        // 0x800282B4: lui         $a0, 0x801B
        ctx->r4 = S32(0X801B << 16);
            goto L_80028318;
    }
    // 0x800282B4: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800282B8: lwc1        $f18, 0x48($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X48);
    // 0x800282BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800282C0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800282C4: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x800282C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800282CC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x800282D0: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x800282D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800282D8: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x800282DC: lwc1        $f8, 0x54($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X54);
    // 0x800282E0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800282E4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x800282E8: lwc1        $f10, 0x58($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X58);
    // 0x800282EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800282F0: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x800282F4: lwc1        $f16, 0x5C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x800282F8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800282FC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80028300: addiu       $a0, $a0, -0x790
    ctx->r4 = ADD32(ctx->r4, -0X790);
    // 0x80028304: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x80028308: jal         0x80027CE4
    // 0x8002830C: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    func_80027CE4(rdram, ctx);
        goto after_3;
    // 0x8002830C: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80028310: b           L_80028348
    // 0x80028314: nop

        goto L_80028348;
    // 0x80028314: nop

L_80028318:
    // 0x80028318: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8002831C: lw          $a1, 0x3C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3C);
    // 0x80028320: lw          $a2, 0x40($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X40);
    // 0x80028324: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    // 0x80028328: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002832C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80028330: addiu       $a0, $a0, -0x790
    ctx->r4 = ADD32(ctx->r4, -0X790);
    // 0x80028334: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80028338: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x8002833C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80028340: jal         0x8007F870
    // 0x80028344: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8007F870(rdram, ctx);
        goto after_4;
    // 0x80028344: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
L_80028348:
    // 0x80028348: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x8002834C: lw          $t7, 0x6C58($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6C58);
    // 0x80028350: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80028354: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80028358: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x8002835C: lw          $a1, 0xA0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0XA0);
    // 0x80028360: addiu       $a0, $a0, -0x790
    ctx->r4 = ADD32(ctx->r4, -0X790);
    // 0x80028364: jal         0x8007F940
    // 0x80028368: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    func_8007F940(rdram, ctx);
        goto after_5;
    // 0x80028368: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    after_5:
    // 0x8002836C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80028370: nop

L_80028374:
    // 0x80028374: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x80028378: beq         $t1, $zero, L_80028508
    if (ctx->r9 == 0) {
        // 0x8002837C: lui         $v1, 0x8011
        ctx->r3 = S32(0X8011 << 16);
            goto L_80028508;
    }
    // 0x8002837C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80028380: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x80028384: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80028388: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x8002838C: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x80028390: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x80028394: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80028398: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x8002839C: lw          $t3, 0xB0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XB0);
    // 0x800283A0: lui         $t5, 0xBC00
    ctx->r13 = S32(0XBC00 << 16);
    // 0x800283A4: beq         $t3, $zero, L_800283CC
    if (ctx->r11 == 0) {
        // 0x800283A8: lui         $t9, 0xBC00
        ctx->r25 = S32(0XBC00 << 16);
            goto L_800283CC;
    }
    // 0x800283A8: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x800283AC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800283B0: ori         $t5, $t5, 0x2806
    ctx->r13 = ctx->r13 | 0X2806;
    // 0x800283B4: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x800283B8: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x800283BC: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x800283C0: lw          $t6, 0xB0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XB0);
    // 0x800283C4: nop

    // 0x800283C8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_800283CC:
    // 0x800283CC: lw          $t7, 0xB4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XB4);
    // 0x800283D0: lui         $t4, 0xBC00
    ctx->r12 = S32(0XBC00 << 16);
    // 0x800283D4: beq         $t7, $zero, L_800283FC
    if (ctx->r15 == 0) {
        // 0x800283D8: lui         $a1, 0x1B
        ctx->r5 = S32(0X1B << 16);
            goto L_800283FC;
    }
    // 0x800283D8: lui         $a1, 0x1B
    ctx->r5 = S32(0X1B << 16);
    // 0x800283DC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800283E0: ori         $t9, $t9, 0x2C06
    ctx->r25 = ctx->r25 | 0X2C06;
    // 0x800283E4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800283E8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800283EC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800283F0: lw          $t1, 0xB4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XB4);
    // 0x800283F4: nop

    // 0x800283F8: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
L_800283FC:
    // 0x800283FC: lw          $t2, 0xAC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XAC);
    // 0x80028400: lui         $t9, 0x384
    ctx->r25 = S32(0X384 << 16);
    // 0x80028404: beq         $t2, $zero, L_8002842C
    if (ctx->r10 == 0) {
        // 0x80028408: ori         $t9, $t9, 0x10
        ctx->r25 = ctx->r25 | 0X10;
            goto L_8002842C;
    }
    // 0x80028408: ori         $t9, $t9, 0x10
    ctx->r25 = ctx->r25 | 0X10;
    // 0x8002840C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80028410: ori         $t4, $t4, 0x1806
    ctx->r12 = ctx->r12 | 0X1806;
    // 0x80028414: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x80028418: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8002841C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80028420: lw          $t5, 0xAC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XAC);
    // 0x80028424: nop

    // 0x80028428: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
L_8002842C:
    // 0x8002842C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80028430: addiu       $a1, $a1, -0x820
    ctx->r5 = ADD32(ctx->r5, -0X820);
    // 0x80028434: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x80028438: beq         $t7, $zero, L_80028478
    if (ctx->r15 == 0) {
        // 0x8002843C: lui         $t5, 0xB600
        ctx->r13 = S32(0XB600 << 16);
            goto L_80028478;
    }
    // 0x8002843C: lui         $t5, 0xB600
    ctx->r13 = S32(0XB600 << 16);
    // 0x80028440: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80028444: lui         $t2, 0x382
    ctx->r10 = S32(0X382 << 16);
    // 0x80028448: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8002844C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80028450: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x80028454: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80028458: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8002845C: ori         $t2, $t2, 0x10
    ctx->r10 = ctx->r10 | 0X10;
    // 0x80028460: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x80028464: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80028468: addiu       $t3, $a1, 0x10
    ctx->r11 = ADD32(ctx->r5, 0X10);
    // 0x8002846C: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80028470: b           L_80028490
    // 0x80028474: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
        goto L_80028490;
    // 0x80028474: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
L_80028478:
    // 0x80028478: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8002847C: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x80028480: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80028484: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80028488: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8002848C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_80028490:
    // 0x80028490: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80028494: lui         $t8, 0x102
    ctx->r24 = S32(0X102 << 16);
    // 0x80028498: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8002849C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800284A0: ori         $t8, $t8, 0x40
    ctx->r24 = ctx->r24 | 0X40;
    // 0x800284A4: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x800284A8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800284AC: lw          $t9, 0x6C58($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6C58);
    // 0x800284B0: lui         $a3, 0x8000
    ctx->r7 = S32(0X8000 << 16);
    // 0x800284B4: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x800284B8: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x800284BC: lw          $t3, 0xA0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XA0);
    // 0x800284C0: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x800284C4: addu        $t4, $t3, $a3
    ctx->r12 = ADD32(ctx->r11, ctx->r7);
    // 0x800284C8: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x800284CC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800284D0: nop

    // 0x800284D4: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x800284D8: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x800284DC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800284E0: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x800284E4: nop

    // 0x800284E8: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x800284EC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800284F0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800284F4: nop

    // 0x800284F8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800284FC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80028500: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80028504: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
L_80028508:
    // 0x80028508: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002850C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80028510: jr          $ra
    // 0x80028514: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80028514: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80028518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028518: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x8002851C: addiu       $a3, $a3, -0x828
    ctx->r7 = ADD32(ctx->r7, -0X828);
    // 0x80028520: lh          $t6, 0x0($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X0);
    // 0x80028524: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80028528: beq         $t6, $zero, L_80028850
    if (ctx->r14 == 0) {
        // 0x8002852C: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_80028850;
    }
    // 0x8002852C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80028530: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80028534: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x80028538: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8002853C: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
    // 0x80028540: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80028544: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80028548: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x8002854C: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80028550: addiu       $t9, $t9, 0x6D08
    ctx->r25 = ADD32(ctx->r25, 0X6D08);
    // 0x80028554: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x80028558: addiu       $t4, $t4, -0x2F98
    ctx->r12 = ADD32(ctx->r12, -0X2F98);
    // 0x8002855C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80028560: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80028564: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x80028568: lui         $t5, 0x2
    ctx->r13 = S32(0X2 << 16);
    // 0x8002856C: ori         $t5, $t5, 0x8000
    ctx->r13 = ctx->r13 | 0X8000;
    // 0x80028570: addu        $a1, $t6, $t5
    ctx->r5 = ADD32(ctx->r14, ctx->r13);
    // 0x80028574: lbu         $a2, 0x99C($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X99C);
    // 0x80028578: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8002857C: beq         $a2, $at, L_800285A8
    if (ctx->r6 == ctx->r1) {
        // 0x80028580: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_800285A8;
    }
    // 0x80028580: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80028584: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80028588: beq         $a2, $at, L_80028598
    if (ctx->r6 == ctx->r1) {
        // 0x8002858C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80028598;
    }
    // 0x8002858C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80028590: bne         $a2, $at, L_800286C0
    if (ctx->r6 != ctx->r1) {
        // 0x80028594: nop
    
            goto L_800286C0;
    }
    // 0x80028594: nop

L_80028598:
    // 0x80028598: lbu         $t7, 0x9A2($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X9A2);
    // 0x8002859C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800285A0: bne         $t7, $at, L_800286C0
    if (ctx->r15 != ctx->r1) {
        // 0x800285A4: nop
    
            goto L_800286C0;
    }
    // 0x800285A4: nop

L_800285A8:
    // 0x800285A8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800285AC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800285B0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800285B4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800285B8: lw          $t9, 0x2138($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X2138);
    // 0x800285BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800285C0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800285C4: nop

    // 0x800285C8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800285CC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800285D0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800285D4: nop

    // 0x800285D8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800285DC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800285E0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800285E4: lui         $at, 0xED00
    ctx->r1 = S32(0XED00 << 16);
    // 0x800285E8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800285EC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800285F0: lw          $t6, 0x2134($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X2134);
    // 0x800285F4: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x800285F8: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x800285FC: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80028600: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80028604: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80028608: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8002860C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80028610: nop

    // 0x80028614: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80028618: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002861C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80028620: nop

    // 0x80028624: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80028628: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8002862C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80028630: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x80028634: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x80028638: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8002863C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80028640: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x80028644: nop

    // 0x80028648: addu        $a1, $t6, $t5
    ctx->r5 = ADD32(ctx->r14, ctx->r13);
    // 0x8002864C: lw          $t9, 0x2140($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X2140);
    // 0x80028650: nop

    // 0x80028654: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80028658: lw          $t9, 0x213C($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X213C);
    // 0x8002865C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80028660: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80028664: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80028668: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8002866C: nop

    // 0x80028670: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80028674: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80028678: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002867C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80028680: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80028684: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80028688: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8002868C: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x80028690: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80028694: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x80028698: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8002869C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800286A0: nop

    // 0x800286A4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800286A8: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x800286AC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800286B0: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x800286B4: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x800286B8: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x800286BC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_800286C0:
    // 0x800286C0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800286C4: lui         $t6, 0xFF10
    ctx->r14 = S32(0XFF10 << 16);
    // 0x800286C8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800286CC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800286D0: ori         $t6, $t6, 0x13F
    ctx->r14 = ctx->r14 | 0X13F;
    // 0x800286D4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800286D8: lw          $t7, 0x0($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X0);
    // 0x800286DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800286E0: addu        $t8, $t7, $t5
    ctx->r24 = ADD32(ctx->r15, ctx->r13);
    // 0x800286E4: lh          $t9, 0x980($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X980);
    // 0x800286E8: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x800286EC: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800286F0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800286F4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800286F8: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x800286FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80028700: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x80028704: sll         $t6, $t6, 11
    ctx->r14 = S32(ctx->r14 << 11);
    // 0x80028708: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x8002870C: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80028710: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80028714: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80028718: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8002871C: lui         $t7, 0xF900
    ctx->r15 = S32(0XF900 << 16);
    // 0x80028720: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80028724: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80028728: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8002872C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80028730: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80028734: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80028738: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8002873C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80028740: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80028744: lui         $t9, 0xB900
    ctx->r25 = S32(0XB900 << 16);
    // 0x80028748: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x8002874C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80028750: ori         $t9, $t9, 0x2
    ctx->r25 = ctx->r25 | 0X2;
    // 0x80028754: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80028758: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8002875C: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80028760: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80028764: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80028768: lw          $a2, -0x800($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X800);
    // 0x8002876C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80028770: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80028774: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x80028778: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x8002877C: addiu       $a1, $a1, -0x39D0
    ctx->r5 = ADD32(ctx->r5, -0X39D0);
    // 0x80028780: addiu       $a0, $a0, -0x1C68
    ctx->r4 = ADD32(ctx->r4, -0X1C68);
    // 0x80028784: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80028788: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x8002878C: jal         0x8007FEF0
    // 0x80028790: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_8007FEF0(rdram, ctx);
        goto after_0;
    // 0x80028790: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80028794: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80028798: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x8002879C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800287A0: lui         $t7, 0x103
    ctx->r15 = S32(0X103 << 16);
    // 0x800287A4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800287A8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800287AC: lui         $t8, 0x1B
    ctx->r24 = S32(0X1B << 16);
    // 0x800287B0: addiu       $t8, $t8, -0x1C68
    ctx->r24 = ADD32(ctx->r24, -0X1C68);
    // 0x800287B4: ori         $t7, $t7, 0x40
    ctx->r15 = ctx->r15 | 0X40;
    // 0x800287B8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800287BC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800287C0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800287C4: lui         $t6, 0xBC00
    ctx->r14 = S32(0XBC00 << 16);
    // 0x800287C8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800287CC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800287D0: ori         $t6, $t6, 0xE
    ctx->r14 = ctx->r14 | 0XE;
    // 0x800287D4: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x800287D8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800287DC: lhu         $t7, -0x39D0($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X39D0);
    // 0x800287E0: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x800287E4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800287E8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800287EC: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x800287F0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800287F4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800287F8: ori         $t9, $t9, 0x2
    ctx->r25 = ctx->r25 | 0X2;
    // 0x800287FC: ori         $t6, $t6, 0x40
    ctx->r14 = ctx->r14 | 0X40;
    // 0x80028800: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80028804: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80028808: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8002880C: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80028810: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80028814: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80028818: lui         $t8, 0x386
    ctx->r24 = S32(0X386 << 16);
    // 0x8002881C: ori         $t8, $t8, 0x10
    ctx->r24 = ctx->r24 | 0X10;
    // 0x80028820: addiu       $t9, $t9, 0x6CE8
    ctx->r25 = ADD32(ctx->r25, 0X6CE8);
    // 0x80028824: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80028828: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8002882C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80028830: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80028834: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80028838: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8002883C: lui         $t7, 0x388
    ctx->r15 = S32(0X388 << 16);
    // 0x80028840: ori         $t7, $t7, 0x10
    ctx->r15 = ctx->r15 | 0X10;
    // 0x80028844: addiu       $t8, $t8, 0x6CE0
    ctx->r24 = ADD32(ctx->r24, 0X6CE0);
    // 0x80028848: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8002884C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_80028850:
    // 0x80028850: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80028854: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80028858: jr          $ra
    // 0x8002885C: nop

    return;
    // 0x8002885C: nop

;}
RECOMP_FUNC void func_80028860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028860: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80028864: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80028868: lui         $s4, 0x801B
    ctx->r20 = S32(0X801B << 16);
    // 0x8002886C: addiu       $s4, $s4, -0x826
    ctx->r20 = ADD32(ctx->r20, -0X826);
    // 0x80028870: lh          $t6, 0x0($s4)
    ctx->r14 = MEM_H(ctx->r20, 0X0);
    // 0x80028874: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80028878: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8002887C: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x80028880: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x80028884: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80028888: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8002888C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80028890: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80028894: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80028898: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8002889C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800288A0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800288A4: beq         $t6, $zero, L_800289D0
    if (ctx->r14 == 0) {
        // 0x800288A8: sw          $a3, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r7;
            goto L_800289D0;
    }
    // 0x800288A8: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x800288AC: lui         $s6, 0x801B
    ctx->r22 = S32(0X801B << 16);
    // 0x800288B0: addiu       $s6, $s6, -0x824
    ctx->r22 = ADD32(ctx->r22, -0X824);
    // 0x800288B4: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x800288B8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800288BC: lui         $s1, 0x8011
    ctx->r17 = S32(0X8011 << 16);
    // 0x800288C0: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x800288C4: addiu       $s0, $s0, -0x39C8
    ctx->r16 = ADD32(ctx->r16, -0X39C8);
    // 0x800288C8: sh          $t7, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r15;
    // 0x800288CC: addiu       $s1, $s1, -0x2F94
    ctx->r17 = ADD32(ctx->r17, -0X2F94);
    // 0x800288D0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_800288D4:
    // 0x800288D4: lw          $t8, 0xB8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XB8);
    // 0x800288D8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800288DC: beq         $t8, $zero, L_800289C0
    if (ctx->r24 == 0) {
        // 0x800288E0: and         $t9, $v0, $s7
        ctx->r25 = ctx->r2 & ctx->r23;
            goto L_800289C0;
    }
    // 0x800288E0: and         $t9, $v0, $s7
    ctx->r25 = ctx->r2 & ctx->r23;
    // 0x800288E4: bne         $t9, $zero, L_800289C0
    if (ctx->r25 != 0) {
        // 0x800288E8: and         $t0, $v0, $s5
        ctx->r8 = ctx->r2 & ctx->r21;
            goto L_800289C0;
    }
    // 0x800288E8: and         $t0, $v0, $s5
    ctx->r8 = ctx->r2 & ctx->r21;
    // 0x800288EC: bne         $s5, $t0, L_800289C0
    if (ctx->r21 != ctx->r8) {
        // 0x800288F0: andi        $t1, $v0, 0x100
        ctx->r9 = ctx->r2 & 0X100;
            goto L_800289C0;
    }
    // 0x800288F0: andi        $t1, $v0, 0x100
    ctx->r9 = ctx->r2 & 0X100;
    // 0x800288F4: bne         $fp, $t1, L_800289C0
    if (ctx->r30 != ctx->r9) {
        // 0x800288F8: nop
    
            goto L_800289C0;
    }
    // 0x800288F8: nop

    // 0x800288FC: lh          $t2, 0x0($s6)
    ctx->r10 = MEM_H(ctx->r22, 0X0);
    // 0x80028900: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80028904: beq         $t2, $zero, L_80028938
    if (ctx->r10 == 0) {
        // 0x80028908: nop
    
            goto L_80028938;
    }
    // 0x80028908: nop

    // 0x8002890C: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x80028910: jal         0x80028518
    // 0x80028914: or          $s2, $t3, $t4
    ctx->r18 = ctx->r11 | ctx->r12;
    func_80028518(rdram, ctx);
        goto after_0;
    // 0x80028914: or          $s2, $t3, $t4
    ctx->r18 = ctx->r11 | ctx->r12;
    after_0:
    // 0x80028918: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8002891C: sh          $zero, 0x0($s6)
    MEM_H(0X0, ctx->r22) = 0;
    // 0x80028920: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x80028924: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x80028928: lui         $t6, 0xB900
    ctx->r14 = S32(0XB900 << 16);
    // 0x8002892C: ori         $t6, $t6, 0x31D
    ctx->r14 = ctx->r14 | 0X31D;
    // 0x80028930: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80028934: sw          $s2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r18;
L_80028938:
    // 0x80028938: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8002893C: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x80028940: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80028944: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x80028948: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8002894C: lw          $t2, 0x94($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X94);
    // 0x80028950: lw          $t0, 0x90($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X90);
    // 0x80028954: lw          $t6, 0x98($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X98);
    // 0x80028958: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x8002895C: sll         $t1, $t0, 24
    ctx->r9 = S32(ctx->r8 << 24);
    // 0x80028960: lw          $t0, 0x9C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X9C);
    // 0x80028964: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x80028968: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8002896C: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x80028970: or          $t5, $t1, $t4
    ctx->r13 = ctx->r9 | ctx->r12;
    // 0x80028974: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x80028978: andi        $t2, $t0, 0xFF
    ctx->r10 = ctx->r8 & 0XFF;
    // 0x8002897C: or          $t3, $t9, $t2
    ctx->r11 = ctx->r25 | ctx->r10;
    // 0x80028980: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80028984: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80028988: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x8002898C: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x80028990: sw          $t1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r9;
    // 0x80028994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80028998: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8002899C: jal         0x8002819C
    // 0x800289A0: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    func_8002819C(rdram, ctx);
        goto after_1;
    // 0x800289A0: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    after_1:
    // 0x800289A4: lh          $t6, 0x0($s4)
    ctx->r14 = MEM_H(ctx->r20, 0X0);
    // 0x800289A8: nop

    // 0x800289AC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800289B0: sh          $t7, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r15;
    // 0x800289B4: lh          $t5, 0x0($s4)
    ctx->r13 = MEM_H(ctx->r20, 0X0);
    // 0x800289B8: nop

    // 0x800289BC: beq         $t5, $zero, L_800289D0
    if (ctx->r13 == 0) {
        // 0x800289C0: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_800289D0;
    }
L_800289C0:
    // 0x800289C0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800289C4: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x800289C8: bne         $s3, $at, L_800288D4
    if (ctx->r19 != ctx->r1) {
        // 0x800289CC: addiu       $s0, $s0, 0xBC
        ctx->r16 = ADD32(ctx->r16, 0XBC);
            goto L_800288D4;
    }
    // 0x800289CC: addiu       $s0, $s0, 0xBC
    ctx->r16 = ADD32(ctx->r16, 0XBC);
L_800289D0:
    // 0x800289D0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800289D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800289D8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800289DC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800289E0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800289E4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800289E8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800289EC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800289F0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800289F4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800289F8: jr          $ra
    // 0x800289FC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800289FC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80028A00_inner(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028A00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80028A04: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80028A08: sll         $s3, $a0, 16
    ctx->r19 = S32(ctx->r4 << 16);
    // 0x80028A0C: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x80028A10: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x80028A14: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80028A18: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80028A1C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80028A20: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80028A24: bne         $t6, $zero, L_80028A44
    if (ctx->r14 != 0) {
        // 0x80028A28: sw          $a0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r4;
            goto L_80028A44;
    }
    // 0x80028A28: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80028A2C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80028A30: addiu       $v0, $v0, 0x6C58
    ctx->r2 = ADD32(ctx->r2, 0X6C58);
    // 0x80028A34: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80028A38: nop

    // 0x80028A3C: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x80028A40: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_80028A44:
    // 0x80028A44: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80028A48: lw          $t9, 0x6DE0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6DE0);
    // 0x80028A4C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80028A50: beq         $t9, $zero, L_80028AD4
    if (ctx->r25 == 0) {
        // 0x80028A54: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80028AD4;
    }
    // 0x80028A54: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80028A58: lw          $v0, 0x6DE4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6DE4);
    // 0x80028A5C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80028A60: beq         $v0, $zero, L_80028AD4
    if (ctx->r2 == 0) {
        // 0x80028A64: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80028AD4;
    }
    // 0x80028A64: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80028A68: bne         $s3, $zero, L_80028A74
    if (ctx->r19 != 0) {
        // 0x80028A6C: lui         $at, 0x801B
        ctx->r1 = S32(0X801B << 16);
            goto L_80028A74;
    }
    // 0x80028A6C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80028A70: sh          $v0, -0x826($at)
    MEM_H(-0X826, ctx->r1) = ctx->r2;
L_80028A74:
    // 0x80028A74: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80028A78: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80028A7C: addiu       $s0, $v0, 0x6C5C
    ctx->r16 = ADD32(ctx->r2, 0X6C5C);
    // 0x80028A80: sh          $t0, -0x828($at)
    MEM_H(-0X828, ctx->r1) = ctx->r8;
    // 0x80028A84: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x80028A88: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80028A8C: beq         $s2, $t1, L_80028AC8
    if (ctx->r18 == ctx->r9) {
        // 0x80028A90: lui         $t2, 0x800A
        ctx->r10 = S32(0X800A << 16);
            goto L_80028AC8;
    }
    // 0x80028A90: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x80028A94: addiu       $t2, $t2, 0x6C5C
    ctx->r10 = ADD32(ctx->r10, 0X6C5C);
    // 0x80028A98: lw          $s1, 0x0($t2)
    ctx->r17 = MEM_W(ctx->r10, 0X0);
    // 0x80028A9C: nop

L_80028AA0:
    // 0x80028AA0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x80028AA4: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80028AA8: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x80028AAC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x80028AB0: jal         0x80028860
    // 0x80028AB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80028860(rdram, ctx);
        goto after_0;
    // 0x80028AB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x80028AB8: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x80028ABC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80028AC0: bne         $s2, $s1, L_80028AA0
    if (ctx->r18 != ctx->r17) {
        // 0x80028AC4: nop
    
            goto L_80028AA0;
    }
    // 0x80028AC4: nop

L_80028AC8:
    // 0x80028AC8: jal         0x80083ED0
    // 0x80028ACC: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_1;
    // 0x80028ACC: nop

    after_1:
    // 0x80028AD0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80028AD4:
    // 0x80028AD4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80028AD8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80028ADC: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80028AE0: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80028AE4: jr          $ra
    // 0x80028AE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80028AE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80028C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028C74: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80028C78: addiu       $a0, $a0, 0x6DE4
    ctx->r4 = ADD32(ctx->r4, 0X6DE4);
    // 0x80028C7C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80028C80: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80028C84: swc1        $f20, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f20.u32l;
    // 0x80028C88: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80028C8C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80028C90: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80028C94: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80028C98: swc1        $f21, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80028C9C: addiu       $v1, $v1, -0x39C8
    ctx->r3 = ADD32(ctx->r3, -0X39C8);
    // 0x80028CA0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x80028CA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80028CA8:
    // 0x80028CA8: lw          $t8, 0xB8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XB8);
    // 0x80028CAC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80028CB0: bne         $t8, $zero, L_80028D64
    if (ctx->r24 != 0) {
        // 0x80028CB4: nop
    
            goto L_80028D64;
    }
    // 0x80028CB4: nop

    // 0x80028CB8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80028CBC: ori         $t9, $a3, 0x3
    ctx->r25 = ctx->r7 | 0X3;
    // 0x80028CC0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80028CC4: swc1        $f12, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f12.u32l;
    // 0x80028CC8: swc1        $f14, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f14.u32l;
    // 0x80028CCC: swc1        $f20, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f20.u32l;
    // 0x80028CD0: swc1        $f0, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->f0.u32l;
    // 0x80028CD4: swc1        $f0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->f0.u32l;
    // 0x80028CD8: swc1        $f0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f0.u32l;
    // 0x80028CDC: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x80028CE0: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x80028CE4: swc1        $f0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f0.u32l;
    // 0x80028CE8: swc1        $f0, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->f0.u32l;
    // 0x80028CEC: swc1        $f0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f0.u32l;
    // 0x80028CF0: swc1        $f0, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->f0.u32l;
    // 0x80028CF4: swc1        $f0, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->f0.u32l;
    // 0x80028CF8: swc1        $f0, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->f0.u32l;
    // 0x80028CFC: swc1        $f0, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->f0.u32l;
    // 0x80028D00: swc1        $f0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f0.u32l;
    // 0x80028D04: swc1        $f0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f0.u32l;
    // 0x80028D08: swc1        $f0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f0.u32l;
    // 0x80028D0C: swc1        $f0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f0.u32l;
    // 0x80028D10: swc1        $f0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f0.u32l;
    // 0x80028D14: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x80028D18: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80028D1C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80028D20: sw          $t0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r8;
    // 0x80028D24: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80028D28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80028D2C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80028D30: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x80028D34: sw          $t2, 0xB8($v1)
    MEM_W(0XB8, ctx->r3) = ctx->r10;
    // 0x80028D38: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x80028D3C: swc1        $f4, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->f4.u32l;
    // 0x80028D40: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80028D44: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80028D48: sw          $t3, 0xB0($v1)
    MEM_W(0XB0, ctx->r3) = ctx->r11;
    // 0x80028D4C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80028D50: nop

    // 0x80028D54: sw          $t4, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r12;
    // 0x80028D58: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80028D5C: b           L_80028E2C
    // 0x80028D60: sw          $t5, 0xAC($v1)
    MEM_W(0XAC, ctx->r3) = ctx->r13;
        goto L_80028E2C;
    // 0x80028D60: sw          $t5, 0xAC($v1)
    MEM_W(0XAC, ctx->r3) = ctx->r13;
L_80028D64:
    // 0x80028D64: lw          $t6, 0x174($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X174);
    // 0x80028D68: addiu       $v1, $v1, 0xBC
    ctx->r3 = ADD32(ctx->r3, 0XBC);
    // 0x80028D6C: bne         $t6, $zero, L_80028E20
    if (ctx->r14 != 0) {
        // 0x80028D70: nop
    
            goto L_80028E20;
    }
    // 0x80028D70: nop

    // 0x80028D74: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80028D78: ori         $t7, $a3, 0x3
    ctx->r15 = ctx->r7 | 0X3;
    // 0x80028D7C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80028D80: swc1        $f12, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f12.u32l;
    // 0x80028D84: swc1        $f14, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f14.u32l;
    // 0x80028D88: swc1        $f20, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f20.u32l;
    // 0x80028D8C: swc1        $f0, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->f0.u32l;
    // 0x80028D90: swc1        $f0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->f0.u32l;
    // 0x80028D94: swc1        $f0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f0.u32l;
    // 0x80028D98: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x80028D9C: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x80028DA0: swc1        $f0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f0.u32l;
    // 0x80028DA4: swc1        $f0, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->f0.u32l;
    // 0x80028DA8: swc1        $f0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f0.u32l;
    // 0x80028DAC: swc1        $f0, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->f0.u32l;
    // 0x80028DB0: swc1        $f0, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->f0.u32l;
    // 0x80028DB4: swc1        $f0, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->f0.u32l;
    // 0x80028DB8: swc1        $f0, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->f0.u32l;
    // 0x80028DBC: swc1        $f0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f0.u32l;
    // 0x80028DC0: swc1        $f0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f0.u32l;
    // 0x80028DC4: swc1        $f0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f0.u32l;
    // 0x80028DC8: swc1        $f0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f0.u32l;
    // 0x80028DCC: swc1        $f0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f0.u32l;
    // 0x80028DD0: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x80028DD4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80028DD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80028DDC: sw          $t8, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r24;
    // 0x80028DE0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80028DE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80028DE8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80028DEC: sw          $t0, 0xB8($v1)
    MEM_W(0XB8, ctx->r3) = ctx->r8;
    // 0x80028DF0: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x80028DF4: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80028DF8: swc1        $f6, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->f6.u32l;
    // 0x80028DFC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80028E00: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80028E04: sw          $t1, 0xB0($v1)
    MEM_W(0XB0, ctx->r3) = ctx->r9;
    // 0x80028E08: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80028E0C: nop

    // 0x80028E10: sw          $t2, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r10;
    // 0x80028E14: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80028E18: b           L_80028E2C
    // 0x80028E1C: sw          $t3, 0xAC($v1)
    MEM_W(0XAC, ctx->r3) = ctx->r11;
        goto L_80028E2C;
    // 0x80028E1C: sw          $t3, 0xAC($v1)
    MEM_W(0XAC, ctx->r3) = ctx->r11;
L_80028E20:
    // 0x80028E20: bne         $v0, $a0, L_80028CA8
    if (ctx->r2 != ctx->r4) {
        // 0x80028E24: addiu       $v1, $v1, 0xBC
        ctx->r3 = ADD32(ctx->r3, 0XBC);
            goto L_80028CA8;
    }
    // 0x80028E24: addiu       $v1, $v1, 0xBC
    ctx->r3 = ADD32(ctx->r3, 0XBC);
    // 0x80028E28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80028E2C:
    // 0x80028E2C: lwc1        $f21, 0x8($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x80028E30: lwc1        $f20, 0xC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80028E34: jr          $ra
    // 0x80028E38: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80028E38: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80028E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028E3C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80028E40: addiu       $v0, $v0, 0x6DE4
    ctx->r2 = ADD32(ctx->r2, 0X6DE4);
    // 0x80028E44: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80028E48: nop

    // 0x80028E4C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80028E50: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80028E54: jr          $ra
    // 0x80028E58: sw          $zero, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = 0;
    return;
    // 0x80028E58: sw          $zero, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = 0;
;}
