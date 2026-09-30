#!/usr/bin/env python3
"""Rename selected generated bodies so host wrappers can enforce the MIPS ABI."""
from pathlib import Path

FUNCTIONS = (
    "func_8001DE24",
    "func_80060510",
    "func_80028A00",
    "func_800109C4",
    "ovl_8024B800_func_802791D0",
)

generated = Path("n64recomp/generated")
found: set[str] = set()
patched_null_list = False
for path in generated.glob("funcs_*.c"):
    text = path.read_text()
    original = text
    for name in FUNCTIONS:
        needle = f"RECOMP_FUNC void {name}(uint8_t* rdram, recomp_context* ctx) {{"
        if needle in text:
            text = text.replace(needle, needle.replace(name, name + "_inner"), 1)
            found.add(name)
    # The gameplay entity list is null-terminated. The original loop relies on
    # an N64 low-memory sentinel field before reaching its later dereferences;
    # that low-memory alias is not valid in the modern runtime. Exit the loop
    # directly when its loaded s0 link is null.
    null_list_needle = "L_802528E8:\n    // 0x802528E8: lhu"
    if null_list_needle in text:
        text = text.replace(
            null_list_needle,
            "L_802528E8:\n"
            "    if ((uint32_t)ctx->r16 == 0 || "
            "(uint32_t)ctx->r16 == 0x80000000u) { goto L_80252C04; }\n"
            "    // 0x802528E8: lhu",
            1,
        )
        patched_null_list = True
    if text != original:
        path.write_text(text)

missing = set(FUNCTIONS) - found
if missing:
    raise SystemExit(f"generated wrapper targets not found: {sorted(missing)}")
if not patched_null_list:
    raise SystemExit("gameplay null-list patch target not found")
print(f"wrapped {len(found)} generated functions with host-side MIPS ABI guards")
