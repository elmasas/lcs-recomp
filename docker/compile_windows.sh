#!/usr/bin/env bash
set -euo pipefail

cd /src
cmake -S /src -B /src/out/lcs-windows -G Ninja \
	-DCMAKE_BUILD_TYPE=Release \
	-DCMAKE_TOOLCHAIN_FILE=/src/docker/windows-clang-cl.cmake
ninja -C /src/out/lcs-windows LCSNative
