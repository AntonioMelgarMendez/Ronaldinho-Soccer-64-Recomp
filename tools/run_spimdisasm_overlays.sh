#!/usr/bin/env bash
set -euo pipefail

ROM=${1:-"Ronaldinho's Soccer 64 (Brazil) (Pirate).z64"}
ROOT=$(cd "$(dirname "$0")/.." && pwd)
cd "$ROOT"

analyze_overlay() {
  local name=$1 start=$2 end=$3 vram=$4
  local out="analysis/spimdisasm/overlays/$name"
  mkdir -p "$out/functions"
  PYTHONPATH=tools/vendor python3 -m spimdisasm singleFileDisasm \
    "$ROM" "$out/main.s" \
    --start "$start" --end "$end" --vram "$vram" \
    --function-info "$out/functions.csv" \
    --save-context "$out/context.csv" \
    --split-functions "$out/functions" \
    --libultra-syms --hardware-regs --named-hardware-regs \
    --compiler IDO --abi O32 --arch-level MIPS3 \
    --disasm-unknown --no-verbose
}

# PI DMA transfers observed during the boot/frontend path.
analyze_overlay ovl_8024B800 0x0DD490 0x110130 0x8024B800
analyze_overlay ovl_8033EE00 0x110130 0x11BA10 0x8033EE00
analyze_overlay ovl_803BB200 0x11BA10 0x126F20 0x803BB200
analyze_overlay ovl_803C6710 0x126F20 0x132960 0x803C6710
analyze_overlay ovl_803D2150 0x132960 0x13D260 0x803D2150
analyze_overlay ovl_803DCA50 0x13D260 0x146C90 0x803DCA50
analyze_overlay ovl_803E6480 0x146C90 0x14D690 0x803E6480
analyze_overlay ovl_8039ABF0 0x151880 0x158B30 0x8039ABF0
analyze_overlay ovl_803A1EF0 0x158B30 0x15EF00 0x803A1EF0
analyze_overlay ovl_803A8320 0x15EF00 0x164450 0x803A8320
analyze_overlay ovl_803AD8C0 0x164450 0x167810 0x803AD8C0
analyze_overlay ovl_803B0CA0 0x167810 0x16CFC0 0x803B0CA0
analyze_overlay ovl_80264800 0x16CFC0 0x1728B0 0x80264800
analyze_overlay ovl_8026A0F0 0x1728B0 0x177C00 0x8026A0F0
analyze_overlay ovl_8026F480 0x177C00 0x17D9B0 0x8026F480
analyze_overlay ovl_80275230 0x17D9B0 0x190D00 0x80275230
analyze_overlay ovl_803F0000_menu 0x190D00 0x198B00 0x803F0000
analyze_overlay ovl_803F0000 0x198B00 0x1A4EE0 0x803F0000
analyze_overlay ovl_801E1300 0x1A4EE0 0x1C3400 0x801E1300
analyze_overlay ovl_8028B800 0x1C3400 0x1F9700 0x8028B800
analyze_overlay ovl_802D0000 0x1F9700 0x203E90 0x802D0000

python3 tools/make_n64recomp_symbols_from_spim.py \
  analysis/spimdisasm/functions.csv \
  --profile generated/runtime_profile.txt --rom "$ROM"
