#!/bin/sh
set -eu

script_dir=$(cd "$(dirname "$0")" && pwd)
repo=$(cd "$script_dir/../.." && pwd)
build=${BUILD_DIR:-"$repo/out/lcs-bsd"}
build_type=${BUILD_TYPE:-Release}

os=$(uname -s)

prefixes="/usr/local /usr/pkg /usr/X11R6 /usr/X11R7"
pc_path=${PKG_CONFIG_PATH:-}
prefix_path=
for p in $prefixes; do
    [ -d "$p" ] || continue
    for d in libdata/pkgconfig lib/pkgconfig share/pkgconfig; do
        [ -d "$p/$d" ] && pc_path="${pc_path:+$pc_path:}$p/$d"
    done
    prefix_path="${prefix_path:+$prefix_path;}$p"
done
export PKG_CONFIG_PATH="$pc_path"

if [ -z "${CC:-}" ] && command -v clang >/dev/null 2>&1; then CC=clang; fi
if [ -z "${CXX:-}" ] && command -v clang++ >/dev/null 2>&1; then CXX=clang++; fi
[ -n "${CC:-}" ] && export CC
[ -n "${CXX:-}" ] && export CXX

need() {
    command -v "$1" >/dev/null 2>&1 || { echo "build_bsd.sh: '$1' not found ($2)" >&2; exit 2; }
}
need cmake "install cmake"
need pkg-config "install pkgconf"
if ! command -v glslangValidator >/dev/null 2>&1 && ! command -v glslang >/dev/null 2>&1; then
    echo "build_bsd.sh: glslangValidator not found (install glslang)" >&2
    exit 2
fi

jobs=${JOBS:-}
if [ -z "$jobs" ]; then
    jobs=$(sysctl -n hw.ncpuonline 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 1)
fi

if command -v ninja >/dev/null 2>&1; then
    gen="Ninja"
elif command -v gmake >/dev/null 2>&1; then
    gen="Unix Makefiles"
    export CMAKE_MAKE_PROGRAM=gmake
else
    gen="Unix Makefiles"
fi

echo "build_bsd.sh: $os, ${CXX:-default c++}, generator '$gen', -j$jobs"
cmake -S "$repo" -B "$build" -G "$gen" \
    -DCMAKE_BUILD_TYPE="$build_type" \
    ${prefix_path:+-DCMAKE_PREFIX_PATH="$prefix_path"}
cmake --build "$build" --target LCSNative -j "$jobs"
