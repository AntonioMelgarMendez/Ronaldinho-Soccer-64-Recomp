"""Regression checks for SDK variants missed by signature matching."""
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from make_n64recomp_symbols import KNOWN_NAMES


class SdkMappingsTests(unittest.TestCase):
    def test_sp_yield_routes_to_runtime_not_mmio(self):
        self.assertEqual(KNOWN_NAMES[0x80084BA0], "osSpTaskYield")
        symbols = (ROOT / "n64recomp/iss64_symbols.toml").read_text()
        self.assertIn('name = "osSpTaskYield", vram = 0x80084BA0', symbols)
        generated = "\n".join(p.read_text() for p in
                              (ROOT / "n64recomp/generated").glob("funcs_*.c"))
        self.assertIn("osSpTaskYield_recomp(rdram, ctx);", generated)
        self.assertNotIn("func_80084BA0(", generated)
        # The old body called the SP_STATUS write helper, which addresses
        # protected host memory at rdram + 0x24040010 rather than N64 hardware.
        self.assertNotIn("    func_8008C860(rdram, ctx);", generated)


if __name__ == "__main__":
    unittest.main()
