#!/bin/sh
set -eu

script_dir=$(cd "$(dirname "$0")" && pwd)
repo=$(cd "$script_dir/../.." && pwd)
lcs_dir=$(cd "$script_dir/.." && pwd)
build=${BUILD_DIR:-"$repo/out/lcs-bsd"}
bin="$build/lcs/LCSNative"

if [ ! -x "$bin" ]; then
    echo "LCSNative not found at $bin"
    echo "Build it first: lcs/scripts/build_bsd.sh"
    exit 3
fi

game="$lcs_dir/game"
if [ $# -gt 0 ]; then
    case "$1" in
        -*) ;;
        *) game=$1; shift ;;
    esac
fi
if [ ! -f "$game/EBOOT.ELF" ]; then
    echo "Game root $game has no EBOOT.ELF"
    exit 4
fi

PSPRECOMP_CONFIG=${PSPRECOMP_CONFIG:-"$lcs_dir/config/LCSNative.ini"}
export PSPRECOMP_CONFIG
exec "$bin" --game "$game" "$@"
