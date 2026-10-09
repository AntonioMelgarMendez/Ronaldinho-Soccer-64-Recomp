import importlib.util
import struct
import tempfile
import unittest
import contextlib
import io
import zipfile
from unittest import mock
from pathlib import Path

spec = importlib.util.spec_from_file_location(
    "package_windows", Path(__file__).resolve().parents[1] / "tools/package_windows.py")
package = importlib.util.module_from_spec(spec)
spec.loader.exec_module(package)


class WindowsPackageTests(unittest.TestCase):
    @staticmethod
    def pe_bytes():
        header = bytearray(256)
        header[:2] = b"MZ"
        struct.pack_into("<I", header, 0x3C, 128)
        header[128:134] = b"PE\0\0\x64\x86"
        return header

    def test_rejects_linux_executable(self):
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "renamed.exe"
            path.write_bytes(b"\x7fELF" + bytes(100))
            with self.assertRaises(ValueError):
                package.require_pe_x64(path)

    def test_checks_machine_type(self):
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "program.exe"
            header = self.pe_bytes()
            path.write_bytes(header)
            package.require_pe_x64(path)
            header[132:134] = b"\x4c\x01"  # 32-bit x86 is not the package target.
            path.write_bytes(header)
            with self.assertRaises(ValueError):
                package.require_pe_x64(path)

    def test_package_includes_dependencies_but_not_rom_or_saves(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            build = root / "build"
            runtime = root / "runtime"
            output = root / "dist"
            for folder in (build, runtime, root / "docs", root / "third_party"):
                folder.mkdir()
            (root / "docs/windows-portable.txt").write_text("Instructions")
            (root / "third_party/LICENSE").write_text("License")
            for name in package.FILES:
                (build / name).write_bytes(self.pe_bytes())
            (build / "iss64_official.map").write_text("test symbols")
            for name in package.RUNTIME_FILES:
                (runtime / name).write_bytes(self.pe_bytes())
            (runtime / "LICENSE.rtf").write_text("Runtime license")
            old_package = output / package.NAME
            (old_package / ".iss64/saves").mkdir(parents=True)
            (old_package / "game.z64").write_bytes(b"private ROM")
            (old_package / ".iss64/saves/iss64.pak").write_bytes(b"private save")
            argv = ["package_windows.py", "--build-dir", str(build),
                    "--runtime-dir", str(runtime), "--output-dir", str(output)]
            with mock.patch.object(package, "ROOT", root), mock.patch("sys.argv", argv):
                with contextlib.redirect_stdout(io.StringIO()):
                    package.main()
            with zipfile.ZipFile(output / f"{package.NAME}.zip") as archive:
                names = archive.namelist()
                self.assertFalse(any(".z64" in name or ".iss64" in name for name in names))
                for name in package.FILES + package.RUNTIME_FILES:
                    self.assertIn(f"{package.NAME}/{name}", names)
                self.assertIn(f"{package.NAME}/licenses/Microsoft/LICENSE.rtf", names)
                for name in package.LAUNCHERS:
                    self.assertIn(f"{package.NAME}/{name}.bat", names)
                self.assertIn(f"{package.NAME}/BUILD-INFO.txt", names)
                self.assertFalse(any(name.endswith(".map") for name in names))
            self.assertEqual(len(list((output / "symbols").glob("*.map"))), 1)
            # Packaging never deletes a user's existing files in the loose directory.
            self.assertEqual((old_package / "game.z64").read_bytes(), b"private ROM")

    def test_missing_runtime_prevents_incomplete_package(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            for name in package.FILES:
                (root / name).write_bytes(self.pe_bytes())
            argv = ["package_windows.py", "--build-dir", str(root),
                    "--runtime-dir", str(root / "missing"), "--output-dir", str(root / "dist")]
            with mock.patch("sys.argv", argv), self.assertRaises(FileNotFoundError):
                package.main()
            self.assertFalse((root / "dist").exists())

    def test_launchers_keep_options_local_and_preserve_logs(self):
        for name, (api, no_audio) in package.LAUNCHERS.items():
            text = package.launcher_text(api, no_audio, name)
            self.assertIn("setlocal\r\n", text)
            self.assertIn(f"set ISS64_GRAPHICS_API={api}\r\n", text)
            self.assertIn('start "" /wait "%~dp0RonaldinhoSoccer64.exe" %*', text)
            self.assertIn(f'"{name}.log"', text)
            self.assertIn(f"set ISS64_DISABLE_HOST_AUDIO={'1' if no_audio else ''}\r\n", text)


if __name__ == "__main__":
    unittest.main()
