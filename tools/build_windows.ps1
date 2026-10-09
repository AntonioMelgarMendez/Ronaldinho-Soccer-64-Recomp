# Run in a VS x64 developer PowerShell with clang-cl, Ninja, CMake and Python.
$ErrorActionPreference = "Stop"
Set-Location (Split-Path $PSScriptRoot -Parent)
cmake -S . -B build-windows-native -G Ninja `
    -DCMAKE_C_COMPILER=clang-cl -DCMAKE_CXX_COMPILER=clang-cl `
    -DCMAKE_BUILD_TYPE=Release -DCMAKE_POLICY_VERSION_MINIMUM=3.5 -DISS64_BUILD_RT64=ON
if ($LASTEXITCODE -ne 0) { throw "CMake configure failed" }
cmake --build build-windows-native --target iss64_official --parallel 4
if ($LASTEXITCODE -ne 0) { throw "Windows build failed" }
$crt = Get-ChildItem "$env:VCToolsRedistDir\x64\Microsoft.VC*.CRT" -Directory | Select-Object -First 1
if (-not $crt) { throw "Cannot find official x64 CRT under VCToolsRedistDir" }
python tools/package_windows.py --build-dir build-windows-native --runtime-dir $crt.FullName
if ($LASTEXITCODE -ne 0) { throw "Packaging failed" }
