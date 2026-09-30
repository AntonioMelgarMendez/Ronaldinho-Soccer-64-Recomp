#!/usr/bin/env bash
set -euo pipefail

ROM=${1:-"Ronaldinho's Soccer 64 (Brazil) (Pirate).z64"}
ROOT=$(cd "$(dirname "$0")/.." && pwd)
cd "$ROOT"
mkdir -p analysis/spimdisasm/functions

PYTHONPATH=tools/vendor python3 -m spimdisasm singleFileDisasm \
  "$ROM" analysis/spimdisasm/main.s \
  --start 0x1000 --end 0x101000 --vram 0x80000400 \
  --function-info analysis/spimdisasm/functions.csv \
  --save-context analysis/spimdisasm/context.csv \
  --split-functions analysis/spimdisasm/functions \
  --libultra-syms --hardware-regs --named-hardware-regs \
  --compiler IDO --abi O32 --arch-level MIPS3 --disasm-unknown --no-verbose

python3 tools/make_n64recomp_symbols_from_spim.py analysis/spimdisasm/functions.csv \
  --profile generated/runtime_profile.txt --rom "$ROM"
