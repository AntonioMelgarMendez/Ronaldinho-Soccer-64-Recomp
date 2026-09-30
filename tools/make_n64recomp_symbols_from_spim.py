#!/usr/bin/env python3
"""Convert spimdisasm's function-info CSV into an N64Recomp symbol TOML.

Unlike runtime profiling, this preserves every statically discovered function
boundary and every MIPS return delay slot.  The cutoff is the end of the main
executable text region; data after that address must not be emitted as code.
"""
from __future__ import annotations

import argparse
import csv
import re
import struct
from pathlib import Path

from make_n64recomp_symbols import KNOWN_NAMES

RAM_BASE = 0x80000400
ROM_BASE = 0x1000
DEFAULT_TEXT_END = 0x80090430
DEFAULT_ROM = Path("Ronaldinho's Soccer 64 (Brazil) (Pirate).z64")

# Overlays observed during the game's boot.  code_end deliberately stops before
# spimdisasm's first obvious data-as-code false positive; the whole DMA size is
# still registered so the runtime associates the load with this section.
OVERLAYS = (
    {
        "name": ".ovl_801E1300",
        "csv": Path("analysis/spimdisasm/overlays/ovl_801E1300/functions.csv"),
        "rom": 0x001A4EE0,
        "vram": 0x801E1300,
        "size": 0x1E520,
        # 0x801E4080 starts controller/animation tables misidentified as code;
        # all observed callable entries are in the compact block before it.
        "code_end": 0x801E4080,
        "all": True,
    },
    {
        "name": ".ovl_8039ABF0",
        "csv": Path("analysis/spimdisasm/overlays/ovl_8039ABF0/functions.csv"),
        "rom": 0x00151880, "vram": 0x8039ABF0, "size": 0x72B0,
        "code_end": 0x803A0B80, "all": True,
    },
    {
        "name": ".ovl_803BB200",
        "csv": Path("analysis/spimdisasm/overlays/ovl_803BB200/functions.csv"),
        "rom": 0x0011BA10, "vram": 0x803BB200, "size": 0xB510,
        "code_end": 0x803BD548, "all": True,
    },
    {
        "name": ".ovl_803A1EF0",
        "csv": Path("analysis/spimdisasm/overlays/ovl_803A1EF0/functions.csv"),
        "rom": 0x00158B30, "vram": 0x803A1EF0, "size": 0x63D0,
        "code_end": 0x803A6BC0, "all": True,
    },
    {
        "name": ".ovl_803A8320",
        "csv": Path("analysis/spimdisasm/overlays/ovl_803A8320/functions.csv"),
        "rom": 0x0015EF00, "vram": 0x803A8320, "size": 0x5550,
        "code_end": 0x803AC7D0, "all": True,
    },
    {
        "name": ".ovl_803AD8C0",
        "csv": Path("analysis/spimdisasm/overlays/ovl_803AD8C0/functions.csv"),
        "rom": 0x00164450, "vram": 0x803AD8C0, "size": 0x33C0,
        "code_end": 0x803AFC70, "all": True,
    },
    {
        "name": ".ovl_803B0CA0",
        "csv": Path("analysis/spimdisasm/overlays/ovl_803B0CA0/functions.csv"),
        "rom": 0x00167810, "vram": 0x803B0CA0, "size": 0x57B0,
        "code_end": 0x803B3558, "all": True,
    },
    {
        "name": ".ovl_8024B800",
        "csv": Path("analysis/spimdisasm/overlays/ovl_8024B800/functions.csv"),
        "rom": 0x000DD490,
        "vram": 0x8024B800,
        "size": 0x32CA0,
        # 0x8027AC90 begins dispatch/data tables (the apparent dmtc0 at the
        # start is table bytes), which spimdisasm mistakes for two functions.
        "code_end": 0x8027AC90,
        "all": True,
        # This module overlaps .ovl_80275230 in VRAM. N64Recomp requires
        # globally unique C symbols even though its section lookup supports
        # multiple overlays occupying the same N64 addresses.
        "name_prefix": "ovl_8024B800_",
    },
    {
        "name": ".ovl_80264800",
        "csv": Path("analysis/spimdisasm/overlays/ovl_80264800/functions.csv"),
        "rom": 0x0016CFC0, "vram": 0x80264800, "size": 0x58F0,
        "code_end": 0x802693D0, "all": True,
        "name_prefix": "ovl_80264800_",
    },
    {
        "name": ".ovl_8026A0F0",
        "csv": Path("analysis/spimdisasm/overlays/ovl_8026A0F0/functions.csv"),
        "rom": 0x001728B0, "vram": 0x8026A0F0, "size": 0x5350,
        "code_end": 0x8026EA90, "all": True,
        "name_prefix": "ovl_8026A0F0_",
    },
    {
        "name": ".ovl_8026F480",
        "csv": Path("analysis/spimdisasm/overlays/ovl_8026F480/functions.csv"),
        "rom": 0x00177C00, "vram": 0x8026F480, "size": 0x5DB0,
        "code_end": 0x80273A48, "all": True,
        "name_prefix": "ovl_8026F480_",
    },
    {
        "name": ".ovl_80275230",
        "csv": Path("analysis/spimdisasm/overlays/ovl_80275230/functions.csv"),
        "rom": 0x0017D9B0,
        "vram": 0x80275230,
        "size": 0x13350,
        "code_end": 0x80280FA0,
        "all": True,
    },
    {
        "name": ".ovl_8028B800",
        "csv": Path("analysis/spimdisasm/overlays/ovl_8028B800/functions.csv"),
        "rom": 0x001C3400,
        "vram": 0x8028B800,
        "size": 0x36300,
        # 0x802B54B0 begins an 0x8590-byte data blob misclassified as code.
        "code_end": 0x802B54B0,
        "all": True,
    },
    {
        "name": ".ovl_8033EE00",
        "csv": Path("analysis/spimdisasm/overlays/ovl_8033EE00/functions.csv"),
        "rom": 0x00110130,
        "vram": 0x8033EE00,
        "size": 0xB8E0,
        # 0x803401C4 is a large asset/data region, not executable code.
        "code_end": 0x803401C4,
        # This module installs several of its entries as thread callbacks.
        "all": True,
    },
    {
        "name": ".ovl_803F0000_menu",
        "csv": Path("analysis/spimdisasm/overlays/ovl_803F0000_menu/functions.csv"),
        "rom": 0x00190D00,
        "vram": 0x803F0000,
        "size": 0x7E00,
        # 0x803F7410 starts an asset/table block misidentified as code.
        "code_end": 0x803F7410,
        "all": True,
        # This module is swapped into the same address as .ovl_803F0000.
        "name_prefix": "ovl_803F0000_menu_",
    },
    {
        "name": ".ovl_803F0000",
        "csv": Path("analysis/spimdisasm/overlays/ovl_803F0000/functions.csv"),
        "rom": 0x00198B00,
        "vram": 0x803F0000,
        "size": 0xC3E0,
        # 0x803FA750 begins a large data block classified as one function.
        "code_end": 0x803FA750,
        "all": True,
    },
)

GRAPH_COLUMNS = (
    "functions called by this function",
    "non-jal function calls",
    "referenced functions",
)

# Entries referenced through runtime-built dispatch tables, which static call
# graph closure cannot see.  This compact callback block drives the game's
# state/frontend machine (the observed indirect entries include B414/B660).
INDIRECT_ROOT_RANGES = (
    # Audio manager, its thread entry, DMA callbacks, and driver bootstrap.
    # The game reaches func_800154B4 through a runtime-built callback table, so
    # profile/call-graph selection previously omitted the entire audio thread.
    (0x80014B30, 0x80015680),
    (0x8001B414, 0x8001BB04),
    # Gameplay/frontend action dispatch table. These short wrappers are stored
    # in data tables and selected by state IDs rather than direct JALs.
    (0x8003A778, 0x8003BB50),
    # Player/match behavior callbacks selected through per-object tables.
    (0x80029000, 0x8002E200),
    # Rendering/entity vtables used by the match overlay.
    (0x80049000, 0x8004C500),
)

# spimdisasm occasionally creates a function at an internal basic-block label.
# These are confirmed continuations: the first range has no return at the CSV
# boundary and the following range contains its register-restoring epilogue.
FUNCTION_END_OVERRIDES = {
    # spimdisasm split this function at 0x800154B4 because a `jal`-looking word
    # in the data region targets that address. 0x80015490 is the real audio
    # bootstrap: its prologue starts there and its epilogue ends at 0x800155E0.
    # The truncated 0x24-byte version returned before starting the audio thread.
    0x80015490: 0x800155E0,
    0x8005F5C4: 0x8005FD74,
}


def graph_targets(row: dict[str, str]) -> set[int]:
    """Extract address-bearing func_XXXXXXXX tokens from a spimdisasm row."""
    targets: set[int] = set()
    for column in GRAPH_COLUMNS:
        for token in re.findall(r"func_([0-9A-Fa-f]{8})", row[column]):
            targets.add(int(token, 16))
    return targets


def read_rows(path: Path, start: int, end: int) -> list[dict[str, str]]:
    ret: list[dict[str, str]] = []
    if not path.is_file():
        return ret
    with path.open(newline="") as stream:
        for row in csv.DictReader(stream):
            address = int(row["address"], 16)
            size = int(row["length"], 16)
            if start <= address < end and size > 0:
                row["_address"] = str(address)
                row["_size"] = str(min(size, end - address))
                ret.append(row)
    return ret


def build_functions(rows: list[dict[str, str]], selected: set[int], rom: bytes,
                    section_rom: int, section_vram: int, code_end: int,
                    canonical_names: dict[int, str],
                    name_prefix: str = "",
                    extra_entries: set[int] | None = None) -> list[tuple[int, int, str]]:
    """Create N64Recomp entries, including IDO tail merges and J/JAL entries."""
    functions: list[tuple[int, int, str]] = []
    for row in rows:
        address = int(row["_address"])
        if address not in selected:
            continue
        size = int(row["_size"])
        original_end = address + size
        extended_end = max(original_end,
                           FUNCTION_END_OVERRIDES.get(address, original_end))
        rom_start = section_rom + address - section_vram
        for offset in range(0, size, 4):
            word = struct.unpack_from(">I", rom, rom_start + offset)[0]
            target = branch_target(address + offset, word)
            if target is None or address <= target < original_end:
                continue
            for target_row in rows:
                target_start = int(target_row["_address"])
                target_end = target_start + int(target_row["_size"])
                if target_start <= target < target_end:
                    extended_end = max(extended_end, target_end)
                    break
        size = min(extended_end, code_end) - address
        name = "entry" if address == RAM_BASE else canonical_names.get(address, row["name"])
        if name_prefix:
            name = name_prefix + name
        functions.append((address, size, name))

    # Materialize alternate direct J/JAL entries instead of letting N64Recomp
    # recursively invent undeclared static_* functions.
    by_address = {address: (size, name) for address, size, name in functions}
    for target in extra_entries or ():
        if target in by_address or not (section_vram <= target < code_end):
            continue
        for target_row in rows:
            target_start = int(target_row["_address"])
            target_end = target_start + int(target_row["_size"])
            if target_start <= target < target_end:
                by_address[target] = (min(target_end, code_end) - target,
                                      f"{name_prefix}func_{target:08X}")
                break
    pending = list(by_address)
    while pending:
        address = pending.pop()
        size, _ = by_address[address]
        rom_start = section_rom + address - section_vram
        for offset in range(0, size, 4):
            word = struct.unpack_from(">I", rom, rom_start + offset)[0]
            pc = address + offset
            targets: list[int] = []
            local_branch = branch_target(pc, word)
            if (section_vram != RAM_BASE and local_branch is not None and
                    not (address <= local_branch < address + size)):
                targets.append(local_branch)
            if word >> 26 in {2, 3}:
                targets.append(((pc + 4) & 0xF0000000) |
                               ((word & 0x03FFFFFF) << 2))
            for target in targets:
                if target in by_address or not (section_vram <= target < code_end):
                    continue
                for target_row in rows:
                    target_start = int(target_row["_address"])
                    target_end = target_start + int(target_row["_size"])
                    if target_start <= target < target_end:
                        by_address[target] = (min(target_end, code_end) - target,
                                              f"{name_prefix}func_{target:08X}")
                        pending.append(target)
                        break
    return sorted((address, size, name)
                  for address, (size, name) in by_address.items())


def branch_target(pc: int, word: int) -> int | None:
    """Return the PC-relative target for the MIPS branch forms used by N64."""
    opcode = word >> 26
    is_branch = opcode in {1, 4, 5, 6, 7, 20, 21, 22, 23}
    is_cop_branch = opcode in {16, 17, 18} and ((word >> 21) & 0x1F) == 8
    if not (is_branch or is_cop_branch):
        return None
    displacement = word & 0xFFFF
    if displacement & 0x8000:
        displacement -= 0x10000
    return (pc + 4 + displacement * 4) & 0xFFFFFFFF


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("csv", type=Path)
    parser.add_argument("--text-end", type=lambda x: int(x, 0), default=DEFAULT_TEXT_END)
    parser.add_argument("--profile", type=Path,
                        help="Only emit static functions touched by this runtime PC profile")
    parser.add_argument("--rom", type=Path, default=DEFAULT_ROM)
    parser.add_argument("--libultra-matches", type=Path,
                        default=Path("analysis/libreultra-signatures/matches.csv"))
    parser.add_argument("--output", type=Path, default=Path("n64recomp/iss64_symbols.toml"))
    args = parser.parse_args()

    discovered_names: dict[int, str] = {}
    if args.libultra_matches.is_file():
        with args.libultra_matches.open(newline="") as stream:
            discovered_names = {
                int(row["address"], 16): row["name"]
                for row in csv.DictReader(stream)
            }
    canonical_names = discovered_names | KNOWN_NAMES
    rom = args.rom.read_bytes()

    # Full 32-bit function addresses stored in ROM are dispatch/vtable entries,
    # not J/JAL instructions (which use a 26-bit encoding). Seeding these gives
    # us indirect-call coverage without waiting for one missing-function crash
    # per gameplay state. An accidental match is exceedingly unlikely and still
    # constrained to a boundary independently identified by spimdisasm.
    rom_pointer_words = {
        struct.unpack_from(">I", rom, offset)[0]
        for offset in range(0, len(rom) - 3, 4)
    }

    profiled_pcs: set[int] | None = None
    if args.profile:
        profiled_pcs = {
            int(line.split()[0], 16)
            for line in args.profile.read_text().splitlines() if line.strip()
        }

    rows: list[dict[str, str]] = []
    with args.csv.open(newline="") as stream:
        for row in csv.DictReader(stream):
            address = int(row["address"], 16)
            size = int(row["length"], 16)
            if address < RAM_BASE or address >= args.text_end or size <= 0:
                continue
            row["_address"] = str(address)
            row["_size"] = str(min(size, args.text_end - address))
            rows.append(row)

    row_by_address = {int(row["_address"]): row for row in rows}
    selected: set[int]
    if profiled_pcs is None:
        selected = {int(row["_address"]) for row in rows}
    else:
        # Seed the set with functions observed by the interpreter, then close it
        # over spimdisasm's call/reference graph. Without this closure N64Recomp
        # invents a large `static_*` function at every omitted direct-call target,
        # merging adjacent functions and recreating the bad-boundary crashes this
        # static-analysis pass is intended to eliminate.
        selected = set(canonical_names)
        for row in rows:
            address = int(row["_address"])
            size = int(row["_size"])
            is_indirect_root = any(start <= address < end
                                   for start, end in INDIRECT_ROOT_RANGES)
            if (is_indirect_root or address in rom_pointer_words or
                    any(address <= pc < address + size for pc in profiled_pcs)):
                selected.add(address)

        pending = list(selected)
        while pending:
            row = row_by_address.get(pending.pop())
            if row is None:
                continue
            for target in graph_targets(row):
                if target in row_by_address and target not in selected:
                    selected.add(target)
                    pending.append(target)

    # Build one call/reference closure across the resident image and every
    # statically described overlay.  This is what makes indirect overlay entry
    # points (stored as func_XXXXXXXX references in the main image) available to
    # N64ModernRuntime without compiling spimdisasm's data false positives.
    overlay_infos: list[dict[str, object]] = []
    all_rows_by_address: dict[int, dict[str, str]] = dict(row_by_address)
    for spec in OVERLAYS:
        overlay_rows = read_rows(spec["csv"], spec["vram"], spec["code_end"])
        overlay_map = {int(row["_address"]): row for row in overlay_rows}
        overlay_infos.append({"spec": spec, "rows": overlay_rows,
                              "map": overlay_map, "selected": set()})
        all_rows_by_address.update(overlay_map)

    # Seed complete callback-driven overlays before graph closure so their
    # dependencies in the resident image and other overlays are retained too.
    for info in overlay_infos:
        if info["spec"].get("all", False):
            selected.update(info["map"].keys())

    pending = list(selected)
    seen = set(selected)
    while pending:
        address = pending.pop()
        row = all_rows_by_address.get(address)
        if row is None:
            continue
        for target in graph_targets(row):
            if target in all_rows_by_address and target not in seen:
                seen.add(target)
                pending.append(target)

    selected = seen & row_by_address.keys()
    for info in overlay_infos:
        info["selected"] = seen & info["map"].keys()

    # A direct call may enter an internal label of a function in a different
    # overlay. spimdisasm records the containing function but not that alternate
    # entry as a CSV boundary. Gather all direct call targets globally so the
    # destination section can publish an exact runtime lookup entry (for
    # example the gameplay overlay calls 0x803F728C inside func_803F723C).
    direct_entries: set[int] = set()
    section_sets = [(rows, selected, ROM_BASE, RAM_BASE)] + [
        (info["rows"], info["selected"], info["spec"]["rom"],
         info["spec"]["vram"])
        for info in overlay_infos
    ]
    for section_rows, section_selected, section_rom, section_vram in section_sets:
        for row in section_rows:
            address = int(row["_address"])
            if address not in section_selected:
                continue
            size = int(row["_size"])
            rom_start = section_rom + address - section_vram
            for offset in range(0, size, 4):
                word = struct.unpack_from(">I", rom, rom_start + offset)[0]
                pc = address + offset
                local_branch = branch_target(pc, word)
                # Only publish branches that cross a CSV function boundary.
                # Internal labels are already emitted with their owner; this
                # special case fixes IDO tail/loop fragments split into the
                # preceding row without multiplying every basic block.
                if (section_vram != RAM_BASE and local_branch is not None and
                        not (address <= local_branch < address + size)):
                    direct_entries.add(local_branch)
                if word >> 26 in {2, 3}:
                    direct_entries.add(((pc + 4) & 0xF0000000) |
                                       ((word & 0x03FFFFFF) << 2))

    functions = build_functions(rows, selected, rom, ROM_BASE, RAM_BASE,
                                args.text_end, canonical_names,
                                extra_entries=direct_entries)
    lines = [
        "# Generated from analysis/spimdisasm/functions.csv.\n",
        "# Boundaries are static-analysis results; canonical libultra names are curated.\n\n",
        "[[section]]\n",
        'name = ".main"\n',
        f"rom = 0x{ROM_BASE:08X}\n",
        f"vram = 0x{RAM_BASE:08X}\n",
        f"size = 0x{args.text_end - RAM_BASE:X}\n",
        "functions = [\n",
    ]
    for address, size, name in functions:
        lines.append(f'    {{ name = "{name}", vram = 0x{address:08X}, size = 0x{size:X} }},\n')
    lines.append("]\n")
    overlay_function_count = 0
    for info in overlay_infos:
        spec = info["spec"]
        overlay_functions = build_functions(
            info["rows"], info["selected"], rom, spec["rom"], spec["vram"],
            spec["code_end"], canonical_names, spec.get("name_prefix", ""),
            direct_entries)
        if not overlay_functions:
            continue
        overlay_function_count += len(overlay_functions)
        lines.extend([
            "\n[[section]]\n",
            f'name = "{spec["name"]}"\n',
            f'rom = 0x{spec["rom"]:08X}\n',
            f'vram = 0x{spec["vram"]:08X}\n',
            f'size = 0x{spec["size"]:X}\n',
            # Presence of this array marks the section relocatable even though
            # this fixed-address game overlay has no linker relocation table.
            "relocs = []\n",
            "functions = [\n",
        ])
        for address, size, name in overlay_functions:
            lines.append(f'    {{ name = "{name}", vram = 0x{address:08X}, size = 0x{size:X} }},\n')
        lines.append("]\n")
    args.output.write_text("".join(lines))
    qualifier = "profiled " if profiled_pcs is not None else ""
    print(f"wrote {len(functions)} main and {overlay_function_count} overlay "
          f"{qualifier}statically discovered functions to {args.output}")


if __name__ == "__main__":
    main()
