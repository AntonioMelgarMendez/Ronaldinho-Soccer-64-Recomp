# Official N64Recomp pipeline

This directory is the migration path from the diagnostic interpreter to
N64Recomp + N64ModernRuntime + RT64.

```sh
./tools/run_spimdisasm.sh
./tools/run_spimdisasm_overlays.sh
./tools/recompile_official.sh
cmake -S . -B build -DISS64_BUILD_N64RECOMP=ON
cmake --build build --target iss64_recompiled_funcs -j
```

`iss64_symbols.toml` is generated from spimdisasm's static boundaries, seeded
by runtime coverage and closed over the static call graph. Confirmed libultra
functions use canonical names expected by N64ModernRuntime and are therefore
automatically replaced by librecomp. `recompile_official.sh` also deletes stale
numbered translation units before regeneration.

The frontend and match paths currently register four streamed code overlays
(`80275230`, `8028B800`, `8033EE00`, and `803F0000`). PI DMA now notifies librecomp's
overlay loader, so calls through the game's runtime function tables resolve to
the correct recompiled function. The callback block at `8001B414-8001BB04` is
also retained explicitly because those entries cannot be recovered from a
direct-call graph.

The generated code now compiles as `iss64_recompiled_funcs`.  The experimental
playable frontend (`iss64_official`) wires N64ModernRuntime to RT64 and SDL2:

```sh
# Debian/Ubuntu build dependencies (names may differ on other distributions)
sudo apt install libsdl2-dev libvulkan-dev libgtk-3-dev libxrandr-dev
cmake -S . -B build-official -DISS64_BUILD_RT64=ON -DCMAKE_BUILD_TYPE=Release
cmake --build build-official --target iss64_official -j
./build-official/iss64_official --rom "Ronaldinho's Soccer 64 (Brazil) (Pirate).z64"
```

RT64 is optional in the default configuration because its native development
packages are not bundled. Graphics tasks are sent directly to RT64. Audio RSP
tasks are handled by the embedded Mupen64Plus RSP-HLE core; other non-graphics
tasks retain a scheduler-safe fallback.

## Controls

Controller port 1 supports SDL gamepads and a keyboard fallback:

- `X` / `C` / `Z`: A / B / Z
- `Enter`: Start
- Arrow keys: analog stick
- `WASD`: D-pad
- `IJKL`: C buttons
- `Q` / `E`: L / R

On a gamepad, the left stick maps to the N64 stick, the right stick to the C
buttons, either trigger to Z, and the shoulder buttons to L/R. South maps to A;
both east and west map to B (shoot/tackle), and north also provides C-Up.
Unrecognized SDL controllers fall back to generic USB-joystick support.

Press `F5` to open the lightweight settings menu. Its current option and value
are shown in the window title: Up/Down selects an option, Left/Right changes
resolution, aspect ratio or frame rate, and Enter starts keyboard/gamepad
capture for A, B, Z, Start, L or R. Press `F5` again to save and close it.
Settings persist in `.iss64/settings.cfg`.

The available window sizes are 960x720, 1280x720, 1920x1080 and 2560x1440.
The 16:9 mode asks RT64 to expand 3D projection matrices rather than stretching
the final image, keeping HUD rectangles at their original proportions. Graphics
changes are saved from the menu and applied on the next launch; rebuilding
RT64's projection history in the middle of a frame can corrupt animated models.

Presentation is currently locked to 60 FPS. RT64's generic 90/120/144 Hz object
interpolation mismatches this ROM's animated vertex streams and visibly deforms
players, so those choices remain disabled until game-specific interpolation
tags are implemented. This does not change the original 60 Hz simulation.

Set `ISS64_TRACE_INPUT=1` to print N64 button masks and normalized stick values
only when the controller state changes. This is useful for diagnosing a pad or
an action-specific gameplay crash without flooding the normal runtime log.
## Audio (experimental)

The official runtime keeps a low-latency stereo float SDL device at 48 kHz and
resamples the N64 DAC rate with overlap between chunks (this ROM uses 42714 Hz).
It connects the N64ModernRuntime AI callbacks, reports the queued-buffer length,
detects the ROM's actual 704-frames-per-VI cadence (42240 Hz), and uses a small
adaptive correction around that rate. Playback is primed to a 40 ms safety
margin to prevent underruns, while `osAiGetLength` only exposes the emulated AI
DMA rather than that host-side queue. This ROM's
`osAiSetNextBuffer`/`osAiGetLength` functions map to librecomp. Audio
`OSTask`s are decoded by Mupen64Plus RSP-HLE (ABI1/2/3, naudio and MusyX) and
write their mixed PCM back to RDRAM before the game queues it through AI.

Use `ISS64_TRACE_AUDIO=1` to log buffers reaching SDL and `ISS64_TRACE_RSP=1`
to print the detected audio signature. For an RSPRecomp capture, additionally
set `ISS64_DISABLE_AUDIO_HLE=1 ISS64_DUMP_RSP=1`; one run through the game then
writes `.iss64/rsp_ucode_*.bin` plus its DMEM data image.

Set `ISS64_DISABLE_AUDIO_HLE=1` to restore the silent scheduler-safe fallback
when isolating an audio-specific regression. The vendored RSP-HLE revision is
`8a7a472a7172eb2c8725b305eae26818ed7b51a2`; its GPL-2.0-or-later notices are
preserved under `third_party/mupen64plus-rsp-hle/LICENSES`.

## Saving

ISS64 uses a Controller Pak rather than cartridge EEPROM. The official runtime
provides a persistent virtual Pak and maps the ROM's PFS entry points to it.
Allocated files and writes are stored atomically in `.iss64/saves/iss64.pak`;
the save survives restarts. Set `ISS64_TRACE_SAVE=1` when diagnosing a save or
load operation.
