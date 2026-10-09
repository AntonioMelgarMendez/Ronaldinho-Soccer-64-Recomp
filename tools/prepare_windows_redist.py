#!/usr/bin/env python3
"""Extract app-local x64 CRT DLLs from Microsoft's official VC redistributable.

Requires cabextract on Linux. Does not install software or alter Wine/system32.
Download vc_redist.x64.exe yourself from https://aka.ms/vs/17/release/vc_redist.x64.exe.
"""
import argparse
import hashlib
import shutil
import subprocess
import tempfile
import xml.etree.ElementTree as ET
from pathlib import Path

from package_windows import ROOT, RUNTIME_FILES, require_pe_x64


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("installer", type=Path)
    parser.add_argument("--output", type=Path, default=ROOT / "build-windows-tools/msvc-runtime")
    args = parser.parse_args()
    installer = args.installer.resolve()
    with tempfile.TemporaryDirectory(prefix="iss64-redist-") as directory:
        directory = Path(directory)
        subprocess.run(["cabextract", "-q", "-d", str(directory), str(installer)], check=True)
        manifest = ET.parse(directory / "0").getroot()
        payloads = {element.get("FilePath"): element.get("SourcePath")
                    for element in manifest.iter() if element.tag.endswith("}Payload")}
        cabinet = payloads[r"packages\vcRuntimeMinimum_amd64\cab1.cab"]
        crt = directory / "crt"
        crt.mkdir()
        subprocess.run(["cabextract", "-q", "-d", str(crt), str(directory / cabinet)], check=True)
        for name in RUNTIME_FILES:
            require_pe_x64(crt / (name + "_amd64"))
        args.output.mkdir(parents=True, exist_ok=True)
        for name in RUNTIME_FILES:
            shutil.copy2(crt / (name + "_amd64"), args.output / name)
        shutil.copy2(directory / payloads["license.rtf"], args.output / "LICENSE-Microsoft-VC.rtf")
        (args.output / "SOURCE.txt").write_text(
            "https://aka.ms/vs/17/release/vc_redist.x64.exe\n"
            f"Installer SHA-256: {hashlib.sha256(installer.read_bytes()).hexdigest()}\n")
    print(f"App-local Microsoft CRT: {args.output.resolve()}")


if __name__ == "__main__":
    main()
