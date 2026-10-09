#!/usr/bin/env bash
# Cross-compile the playable frontend; prerequisites in docs/windows-build.txt.
set -euo pipefail
ROOT=$(cd "$(dirname "$0")/.." && pwd)
cd "$ROOT"
export ISS64_LLVM_BIN=${ISS64_LLVM_BIN:-"$ROOT/build-windows-tools/llvm/usr/lib/llvm-21/bin"}
export ISS64_WINSDK=${ISS64_WINSDK:-"$ROOT/build-windows-tools/sdk"}
export PATH="$ISS64_LLVM_BIN:$ROOT/build-windows-tools/llvm/usr/bin:$PATH"
export LD_LIBRARY_PATH="$ROOT/third_party/rt64/src/contrib/dxc/lib/x64${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}"
mkdir -p build-windows-tools
if [[ ! -x build-windows-tools/file_to_c || third_party/rt64/src/tools/file_to_c/file_to_c.cpp -nt build-windows-tools/file_to_c ]]; then
    c++ -O2 -std=c++17 third_party/rt64/src/tools/file_to_c/file_to_c.cpp -o build-windows-tools/file_to_c
fi
cmake -S . -B build-windows -G Ninja \
    -DCMAKE_TOOLCHAIN_FILE="$ROOT/cmake/windows-clang-cl.cmake" \
    -DCMAKE_BUILD_TYPE=Release -DCMAKE_POLICY_VERSION_MINIMUM=3.5 -DISS64_BUILD_RT64=ON \
    -DRT64_HOST_DXC="$ROOT/third_party/rt64/src/contrib/dxc/bin/x64/dxc-linux" \
    -DRT64_HOST_FILE_TO_C="$ROOT/build-windows-tools/file_to_c"
cmake --build build-windows --target iss64_official -j"${JOBS:-4}"
python3 tools/package_windows.py --build-dir build-windows
