# Bring-up status

## Working

- Official N64Recomp symbol input generated from spimdisasm: 2,467 resident
  entries and 3,400 overlay entries on the current smoke-test build.
- Generated functions compile as `iss64_recompiled_funcs` against the official
  N64ModernRuntime ABI.
- Official overlay registration, ROM XXH3 validation, SDL frontend and RT64
  render-context integration are present.
- Title screens, main-menu navigation and the automated path into match setup
  run without a missing-function abort or segmentation fault.
- Match/frontend DMA modules in ROM `0x11BA10..0x17D9B0`, the swapped
  `0x803F0000` modules and the `0x801E1300` module are registered separately.

- Big-, byte-swapped, and word-swapped N64 ROM normalization.
- IPL3 high-level boot into the header entry point.
- MIPS branch delay slots and branch-likely annulment.
- Core 32/64-bit integer ALU, branches, jumps, CP0 basics and aligned memory IO.
- Recursive AOT discovery through direct calls and constant `jr` startup stubs.
- Runtime PC profiling and AOT merge for dynamically installed code/overlays.
- MI interrupt mask/pending state, periodic VI, PI/SI DMA and basic AI events.
- Interrupt entry/ERET semantics, including deferral across taken branch delays.
- COP1 transfers, arithmetic, conversion, comparisons and FP loads/stores.
- VI framebuffer extraction to PPM.
- Reproducible CPU/memory smoke tests.

## Observed on the supplied ROM

- The entry stub clears roughly 900 KiB and jumps through `t2` to
  `0x8002A070`.
- VI interrupts now wake libultra and the title programs 320-wide VI contexts.
- A five-million-step profile contains 4,235 unique PCs and produces 4,436 AOT
  instructions: the repeated run is 100% AOT with zero unsupported opcodes.
- The active VI origin still points at unrendered data because no RSP/RDP task
  backend exists yet.

## Not implemented

- Complete match coverage, audio output validation and EEPROM saves.
- Unaligned memory operations and complete exception/TLB semantics.
- Automatic fixed-point discovery of every dynamically loaded overlay.
- Desktop presentation and frame pacing.
