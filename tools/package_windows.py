#!/usr/bin/env python3
"""Package an already compiled Windows frontend, never a ROM or local saves."""
import argparse
import hashlib
import shutil
import struct
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
NAME = "RonaldinhoSoccer64-Windows-x64"
FILES = ("RonaldinhoSoccer64.exe", "SDL2.dll", "dxcompiler.dll", "dxil.dll")
RUNTIME_FILES = ("msvcp140.dll", "vcruntime140.dll", "vcruntime140_1.dll")
LAUNCHERS = {
    "Probar_Compatibilidad": ("auto", False),
    "Probar_Vulkan": ("vulkan", False),
    "Probar_D3D12": ("d3d12", False),
    "Probar_SinAudio": ("auto", True),
}


def launcher_text(api, no_audio, name):
    return "\r\n".join([
        "@echo off", "setlocal", 'cd /d "%~dp0"',
        "set ISS64_COMPATIBILITY=1", f"set ISS64_GRAPHICS_API={api}",
        "set ISS64_TRACE_GRAPHICS=1", "set ISS64_TRACE_RSP=1",
        f"set ISS64_DISABLE_HOST_AUDIO={'1' if no_audio else ''}",
        f"set ISS64_DISABLE_AUDIO_HLE={'1' if no_audio else ''}",
        f"echo Prueba: {name}. Cierra el juego antes de iniciar otra prueba.",
        'start "" /wait "%~dp0RonaldinhoSoccer64.exe" %*',
        'set "result=%errorlevel%"',
        f'if exist diagnostico.log copy /y diagnostico.log "{name}.log" >nul',
        f'if exist crash.txt copy /y crash.txt "{name}-crash.txt" >nul',
        f'echo Envia {name}.log y {name}-crash.txt para revisar el resultado.',
        "echo Codigo de salida: %result%", "pause", "exit /b %result%", "",
    ])


def require_pe_x64(path):
    with path.open("rb") as stream:
        if stream.read(2) != b"MZ":
            raise ValueError(f"Not a Windows executable: {path}")
        stream.seek(0x3C)
        offset = struct.unpack("<I", stream.read(4))[0]
        stream.seek(offset)
        if stream.read(6) != b"PE\0\0\x64\x86":
            raise ValueError(f"Not a Windows x64 PE file: {path}")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--build-dir", type=Path, default=ROOT / "build-windows")
    parser.add_argument("--output-dir", type=Path, default=ROOT / "dist")
    parser.add_argument("--runtime-dir", type=Path, default=ROOT / "build-windows-tools/msvc-runtime",
                        help="Official Microsoft x64 CRT DLL directory (required by DXC)")
    args = parser.parse_args()
    # Validate everything before creating an artifact (no renamed Linux ELF files).
    binaries = [args.build_dir / name for name in FILES]
    binaries += [args.runtime_dir / name for name in RUNTIME_FILES]
    for source in binaries:
        require_pe_x64(source)
    destination = args.output_dir / NAME
    destination.mkdir(parents=True, exist_ok=True)
    packaged = []
    for source in binaries:
        target = destination / source.name
        shutil.copy2(source, target)
        packaged.append(target)
    readme = destination / "LEEME.txt"
    shutil.copy2(ROOT / "docs/windows-portable.txt", readme)
    packaged.append(readme)
    for name, (api, no_audio) in LAUNCHERS.items():
        target = destination / f"{name}.bat"
        target.write_bytes(launcher_text(api, no_audio, name).encode("ascii"))
        packaged.append(target)
    build_info = destination / "BUILD-INFO.txt"
    executable_hash = hashlib.sha256((destination / FILES[0]).read_bytes()).hexdigest()
    build_info.write_text("Windows diagnostic package\nExecutable SHA-256: " +
                          executable_hash + "\n")
    packaged.append(build_info)
    # Keep exact symbols on the developer machine for subsequent crash offsets.
    # A later rebuild must not replace the map of the executable sent to a user.
    source_map = args.build_dir / "iss64_official.map"
    if source_map.exists():
        symbol_dir = args.output_dir / "symbols"
        symbol_dir.mkdir(exist_ok=True)
        shutil.copy2(source_map, symbol_dir / f"{executable_hash}.map")
    for source in args.runtime_dir.glob("*.rtf"):
        target = destination / "licenses" / "Microsoft" / source.name
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(source, target)
        packaged.append(target)

    # Keep third-party license notices with their original paths.
    for source in sorted((ROOT / "third_party").rglob("*")):
        if not source.is_file() or ".git" in source.parts:
            continue
        if not (source.name.upper().startswith(("LICENSE", "COPYING", "NOTICE"))
                or "LICENSES" in source.parts):
            continue
        target = destination / "licenses" / source.relative_to(ROOT / "third_party")
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(source, target)
        packaged.append(target)

    # Only archive the allowlisted files, even if the user has run the previous
    # package in-place and left a ROM, settings, or saves inside its directory.
    archive = args.output_dir / f"{NAME}.zip"
    with zipfile.ZipFile(archive, "w", zipfile.ZIP_DEFLATED, compresslevel=9) as bundle:
        for path in packaged:
            bundle.write(path, str(Path(NAME) / path.relative_to(destination)))
    checksum = hashlib.sha256(archive.read_bytes()).hexdigest()
    archive.with_suffix(".zip.sha256").write_text(f"{checksum}  {archive.name}\n")
    print(f"Portable Windows package: {archive.resolve()}")
    print(f"SHA-256: {checksum}")


if __name__ == "__main__":
    main()
