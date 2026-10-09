#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/.." && pwd)
cd "$ROOT"

git submodule update --init --recursive

apply_once() {
    local repository=$1
    local patch=$2
    if git -C "$repository" apply --reverse --check "$ROOT/$patch" >/dev/null 2>&1; then
        echo "Already applied: $patch"
    else
        git -C "$repository" apply "$ROOT/$patch"
        echo "Applied: $patch"
    fi
}

apply_once third_party/N64ModernRuntime patches/N64ModernRuntime-iss64.patch
apply_once third_party/N64ModernRuntime patches/N64ModernRuntime-startup-errors.patch
apply_once third_party/N64ModernRuntime patches/N64ModernRuntime-windows-memory.patch
apply_once third_party/N64ModernRuntime/N64Recomp patches/N64Recomp-overlays.patch
apply_once third_party/rt64 patches/rt64-cross-windows.patch
apply_once third_party/rt64/src/contrib/plume patches/plume-shader-model-check.patch
