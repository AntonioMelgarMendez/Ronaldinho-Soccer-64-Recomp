#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/.." && pwd)
cd "$ROOT"

# N64Recomp does not remove surplus numbered translation units when a newer
# symbol set produces fewer files. Leaving them behind compiles stale code.
find n64recomp/generated -maxdepth 1 -type f -name 'funcs_*.c' -delete

if compgen -G 'analysis/libreultra-signatures/csv/*.csv' >/dev/null; then
  python3 tools/match_libultra_signatures.py \
    analysis/spimdisasm/functions.csv \
    'analysis/libreultra-signatures/csv/*.csv'
fi

python3 tools/make_n64recomp_symbols_from_spim.py \
  analysis/spimdisasm/functions.csv \
  --profile generated/runtime_profile.txt

(cd n64recomp && ../build-n64recomp/N64Recomp iss64.toml)
python3 tools/wrap_callee_saved.py
cmake --build build-official --target iss64_official -j"${JOBS:-4}"
