#!/usr/bin/env python3
"""Build conservative N64Recomp symbols from an executed-PC profile.

The result is intentionally a bring-up symbol map, not a substitute for a full
decompilation map. Every direct call target and every disconnected executed run
becomes a function. Returns split adjacent runs to avoid swallowing neighbours.
"""
from __future__ import annotations
import argparse
import struct
from pathlib import Path

RAM_BASE = 0x80000400
ROM_BASE = 0x1000
SECTION_SIZE = 0x100000

# Confirmed from call signatures/control flow in this ROM's libultra build.
KNOWN_NAMES = {
    # Game thread entry reached indirectly after libultra boot completes.
    0x8001B288: "func_8001B288",
    # Second game thread/callback entry, invoked through a function pointer.
    0x8001B414: "func_8001B414",
    0x80081C80: "osCreateMesgQueue",
    0x80081CB0: "osCreateThread",
    0x80081E00: "osStartThread",
    0x80081F50: "osRecvMesg",
    0x80082090: "osVirtualToPhysical",
    # This SDK revision's AI functions differ slightly from the reference
    # signatures, but their MMIO/control flow matches libultra exactly.
    0x80082110: "osAiSetNextBuffer",
    0x800821C0: "osAiGetLength",
    0x80082A00: "osPiStartDma",
    0x80083480: "osInitialize",
    0x80083710: "osCreatePiManager",
    0x800838A0: "osSetThreadPri",
    0x80083C70: "osContStartReadData",
    0x80084160: "osCreateViManager",
    0x80084530: "osSetEventMesg",
    0x80084610: "osSetIntMask",
    # Writes SP_SET_YIELD (0x400) through __osSpSetStatus. The SDK variant
    # misses the signature matcher; route it to librecomp, never host MMIO.
    0x80084BA0: "osSpTaskYield",
    0x800878F0: "osContInit",
    0x80084BC0: "osGetCount",
    # Controller Pak API used by ISS64 for all persistent game data.
    0x80084C80: "osPfsInitPak",
    0x800863C0: "osPfsChecker",
    0x80086660: "osPfsIsPlug",
    0x80086ACC: "osPfsReadWriteFile",
    0x800889B0: "__osProbeTLB",
    0x8008B260: "__osSiRawReadIo",
    0x8008B2B0: "__osSiRawWriteIo",
    0x8008B360: "__osPiRawReadIo",
    0x8008B670: "osGetThreadPri",
    0x8008B690: "osPiRawStartDma",
    0x8008C030: "__osSiRawStartDma",
    0x8008C9A0: "__osPfsGetStatus",
    0x800900D0: "__osSiDeviceBusy",
    0x800902A0: "__osSetCompare",
    0x80083ED0: "osWritebackDCacheAll",
    0x80090360: "func_80090360",
}
KNOWN_SIZES = {0x80083ED0: 0x24, 0x80090360: 0xCC}


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("profile", type=Path)
    ap.add_argument("--rom", type=Path, default=Path("Ronaldinho's Soccer 64 (Brazil) (Pirate).z64"))
    ap.add_argument("--output", type=Path, default=Path("n64recomp/iss64_symbols.toml"))
    args = ap.parse_args()
    rom = args.rom.read_bytes()

    def rom_word(pc: int) -> int:
        offset = ROM_BASE + pc - RAM_BASE
        return struct.unpack_from(">I", rom, offset)[0]

    words: dict[int, int] = {}
    for line in args.profile.read_text().splitlines():
        if line.strip():
            pc, ins = line.split()[:2]
            address = int(pc, 16)
            if RAM_BASE <= address < RAM_BASE + SECTION_SIZE:
                words[address] = int(ins, 16)

    starts = {RAM_BASE}
    for pc, ins in words.items():
        op, fn, rs = ins >> 26, ins & 63, (ins >> 21) & 31
        if pc - 4 not in words:
            starts.add(pc)
        if op == 3:  # jal
            target = ((pc + 4) & 0xF0000000) | ((ins & 0x03FFFFFF) << 2)
            if target in words:
                starts.add(target)
    starts.update(KNOWN_NAMES)
    starts = {s for s in starts if RAM_BASE <= s < RAM_BASE + SECTION_SIZE}
    # A conditional branch must remain inside one N64Recomp function. Profile-
    # derived call targets can be alternate entries into a larger function, so
    # remove any provisional boundary crossed by a branch and iterate.
    changed = True
    while changed:
        changed = False
        ordered = sorted(starts)
        for pc, ins in words.items():
            op = ins >> 26
            is_cop1_branch = op == 17 and ((ins >> 21) & 31) == 8
            if op not in (1, 4, 5, 6, 7, 20, 21, 22, 23) and not is_cop1_branch:
                continue
            imm = ins & 0xFFFF
            if imm & 0x8000:
                imm -= 0x10000
            target = pc + 4 + imm * 4
            lo, hi = sorted((pc, target))
            crossed = [s for s in ordered if lo < s <= hi and s != RAM_BASE]
            if crossed:
                starts.difference_update(crossed)
                changed = True
                break

    starts = sorted(starts)
    functions: list[tuple[int, int]] = []
    for index, start in enumerate(starts):
        next_start = starts[index + 1] if index + 1 < len(starts) else RAM_BASE + SECTION_SIZE
        pc = start
        last = start
        while pc in words and pc < next_start:
            last = pc
            pc += 4
        # Pull in untaken conditional paths. Runtime coverage often has a gap
        # precisely where a branch was not taken, but N64Recomp needs every
        # possible local target to be contained in the function.
        end = min(next_start, start + KNOWN_SIZES.get(start, last + 4 - start))
        scan = start
        while scan < end and scan < next_start:
            ins = rom_word(scan)
            op = ins >> 26
            if op in (1, 4, 5, 6, 7, 20, 21, 22, 23) or (op == 17 and ((ins >> 21) & 31) == 8):
                imm = ins & 0xFFFF
                if imm & 0x8000:
                    imm -= 0x10000
                target = scan + 4 + imm * 4
                if start <= target < next_start:
                    end = max(end, target + 4)
            scan += 4
        # A MIPS return executes the following delay-slot instruction. Profiles
        # may stop/split exactly at `jr $ra`, but N64Recomp requires that slot
        # to be part of the function as well.
        if end > start and rom_word(end - 4) == 0x03E00008 and end + 4 <= next_start:
            end += 4
        # Profiles are sampled at a fixed instruction budget and commonly end
        # on a JAL.  In that case the generated function used to omit the call
        # delay slot and continuation, leaving dangling `after_N` labels.  Keep
        # scanning linearly to the next `jr $ra` (plus its delay slot). Branch
        # targets above have already removed false profile-derived boundaries.
        last_op = rom_word(end - 4) >> 26 if end > start else 0
        if start not in KNOWN_SIZES and last_op == 3:  # jal
            scan = max(start, end - 4)
            scan_limit = min(next_start, end + 0x1000)
            while scan + 4 < scan_limit:
                if rom_word(scan) == 0x03E00008:  # jr $ra
                    end = max(end, scan + 8)
                    break
                scan += 4
        size = end - start
        if size > 0:
            functions.append((start, size))

    lines = [
        "# Generated from generated/runtime_profile.txt.\n",
        "# Function names are provisional except recomp_entrypoint.\n\n",
        "[[section]]\n",
        'name = ".main"\n',
        f"rom = 0x{ROM_BASE:08X}\n",
        f"vram = 0x{RAM_BASE:08X}\n",
        f"size = 0x{SECTION_SIZE:X}\n",
        "functions = [\n",
    ]
    for address, size in functions:
        name = "entry" if address == RAM_BASE else KNOWN_NAMES.get(address, f"func_{address:08X}")
        lines.append(f'    {{ name = "{name}", vram = 0x{address:08X}, size = 0x{size:X} }},\n')
    lines.append("]\n")
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text("".join(lines))
    print(f"wrote {len(functions)} provisional functions to {args.output}")


if __name__ == "__main__":
    main()
