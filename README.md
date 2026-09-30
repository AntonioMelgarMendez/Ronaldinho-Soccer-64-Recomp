# Ronaldinho-Soccer-64-Recomp

An **early, clean-room static recompiler scaffold** for the supplied Nintendo 64
ROM. It reads the original cartridge at run time; no complete ROM or graphical/
audio assets are copied into the project. Generated C++ does contain individual
MIPS instruction words and should be regenerated locally rather than distributed.

The official runtime currently reaches menus and gameplay with graphics, audio,
controller input and persistent Controller Pak saves. It is still experimental:
some gameplay paths and high-refresh interpolation need additional work.
The project includes ROM normalization, MIPS III control-flow discovery,
generated ahead-of-time dispatch, big-endian N64 memory, HLE RCP/libultra support
and dynamically registered code overlays.
The production path now uses the official **N64Recomp + N64ModernRuntime +
RT64** stack; the original core remains a diagnostic profiler only.

The original ROM is deliberately **not included**. Place your legally obtained
`.z64` dump beside the executable or pass it with `--rom`.

## Clone and dependencies

Clone recursively, then apply the small compatibility patches required by this
game:

```bash
git clone --recursive git@github.com:AntonioMelgarMendez/Ronaldinho-Soccer-64-Recomp.git
cd Ronaldinho-Soccer-64-Recomp
./tools/setup_dependencies.sh
```

## Identified image

| Field | Value |
|---|---|
| Internal title | `RONALDINHO SOCCER` |
| ID | `NJPE`, revision 0 |
| Size | 8 MiB |
| SHA-1 | `93119cee958ad7a7b28f6a945cfaa7829fe340da` |
| Entry point | `0x80000400` |

The hash is recorded only to make analysis reproducible. The ROM is intentionally
ignored by Git.

## Build and run

```sh
./tools/recompile.py "Ronaldinho's Soccer 64 (Brazil) (Pirate).z64"
cmake -S . -B build
cmake --build build -j
ctest --test-dir build --output-on-failure
./build/iss64_recomp "Ronaldinho's Soccer 64 (Brazil) (Pirate).z64" --steps 5000000
```

The initial ROM-only analysis finds 871 instructions. A five-million-step runtime
profile finds dynamically installed exception/SDK code and expands coverage to
4,436 instructions. Rebuilding from that profile executes all five million steps
through AOT dispatch, with zero fallback instructions and zero unsupported
opcodes. VI interrupts are serviced and the game repeatedly programs a 320-wide
video mode; RSP/RDP task execution is now the principal blocker.

Useful diagnostics:

```sh
# Trace the first 200 instructions
./build/iss64_recomp game.z64 --steps 500 --trace

# Trace a later 200-instruction window
./build/iss64_recomp game.z64 --steps 5000050 --trace-start 4999800

# Seed discovery with a target learned from a trace/overlay
./tools/recompile.py game.z64 --entry 0x80000400 --entry 0x80012340

# Capture runtime-installed code, merge it and rebuild for full observed AOT coverage
./build/iss64_recomp game.z64 --steps 5000000 --profile generated/runtime_profile.txt
./tools/recompile.py game.z64 --profile generated/runtime_profile.txt
cmake --build build -j

# Dump the current VI framebuffer (PPM; it is not rendered correctly until RDP exists)
./build/iss64_recomp game.z64 --steps 5000000 --dump-frame build/frame.ppm
```

`generated/report.json` describes the exact input and coverage. Generated cases
contain instruction constants and call shared semantics; unknown indirect targets
continue through the interpreter, allowing incremental coverage rather than an
all-or-nothing build.

## Architecture

- `tools/recompile.py` — byte-order normalization, recursive CFG discovery,
  light constant propagation for SDK `lui/addiu/jr` stubs, C++ emission.
- `generated/recomp.cpp` — AOT PC dispatch generated from the user's ROM.
- `src/cpu.cpp` — MIPS III integer/COP1 core, delay slots, branch-likely,
  interrupt exceptions, CP0 and fallback decoder.
- `src/memory.cpp` — RDRAM, KSEG, cartridge, HLE IPL3, MI/VI/PI/SI basics,
  DMA, interrupt cadence and framebuffer extraction.
- `src/main.cpp` — headless runner and tracing/progress metrics.

## Roadmap to a playable native port

1. **Done:** statically discover and compile the resident image plus the boot,
   frontend and match overlays with official N64Recomp.
2. **Done:** register the generated overlay table and create an SDL/RT64 frontend
   that sends graphics `OSTask` display lists to RT64.
3. **Done:** validate the RT64 Vulkan window, title screens and main-menu path.
4. Identify and recompile/HLE the title's audio microcode (currently a clearly
   marked scheduler-safe placeholder).
5. **In progress:** the automated title -> menu -> match-setup smoke route now
   remains alive; expand coverage for a complete playable match.
6. Add controller mapping, audio output validation, EEPROM saves and packaging.

The fallback is intentional during bring-up, but a finished recompiler should
spend nearly all game time in generated blocks.

See [`n64recomp/README.md`](n64recomp/README.md) for the official build commands.
