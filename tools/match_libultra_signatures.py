#!/usr/bin/env python3
"""Match resident ROM functions against IDO-built libreultra objects."""
from __future__ import annotations

import argparse
import csv
import glob
import re
from collections import Counter, defaultdict
from pathlib import Path


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("target", type=Path)
    parser.add_argument("references", help="Glob for libreultra function-info CSV files")
    parser.add_argument("--runtime-symbols", type=Path,
                        default=Path("third_party/N64ModernRuntime/N64Recomp/src/symbol_lists.cpp"))
    parser.add_argument("--output", type=Path,
                        default=Path("analysis/libreultra-signatures/matches.csv"))
    args = parser.parse_args()

    # Only automatically activate functions that N64ModernRuntime promises to
    # replace. Other exact matches are useful documentation, but native
    # libultra routines may still touch MMIO and must not be enabled blindly.
    symbols_source = args.runtime_symbols.read_text()
    reimplemented_block = symbols_source.split(
        "N64Recomp::reimplemented_funcs", 1)[1].split(
        "N64Recomp::ignored_funcs", 1)[0]
    reimplemented = set(re.findall(r'"([A-Za-z0-9_]+)"', reimplemented_block))

    references: dict[tuple[str, str], set[str]] = defaultdict(set)
    for filename in glob.glob(args.references):
        with open(filename, newline="") as stream:
            for row in csv.DictReader(stream):
                references[(row["hash of top bits of words"], row["length"])].add(row["name"])

    candidates: list[dict[str, str]] = []
    with args.target.open(newline="") as stream:
        for row in csv.DictReader(stream):
            names = references[(row["hash of top bits of words"], row["length"])]
            if len(names) != 1:
                continue
            name = next(iter(names))
            if name not in reimplemented:
                continue
            candidates.append({
                "address": row["address"],
                "old_name": row["name"],
                "name": name,
                "length": row["length"],
                "hash": row["hash of top bits of words"],
            })

    # A symbol file cannot contain the same canonical C identifier twice.
    # Leave duplicated SDK routines for manual call-context disambiguation.
    counts = Counter(row["name"] for row in candidates)
    matches = [row for row in candidates if counts[row["name"]] == 1]
    matches.sort(key=lambda row: int(row["address"], 16))

    args.output.parent.mkdir(parents=True, exist_ok=True)
    with args.output.open("w", newline="") as stream:
        writer = csv.DictWriter(stream, fieldnames=("address", "old_name", "name", "length", "hash"))
        writer.writeheader()
        writer.writerows(matches)
    print(f"wrote {len(matches)} unique N64ModernRuntime-compatible libultra matches to {args.output}")


if __name__ == "__main__":
    main()
