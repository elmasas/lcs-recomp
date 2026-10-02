#!/usr/bin/env bash
set -euo pipefail

script_dir=$(cd "$(dirname "$0")" && pwd)
cd "$script_dir"

if [ ! -d "ccache-windows" ]; then
	mkdir "ccache-windows"
fi
export HOST_UID="$(id -u)"
export HOST_GID="$(id -g)"
if docker info >/dev/null 2>&1; then
	docker compose run --rm --build build-windows
else
	sudo --preserve-env=HOST_UID,HOST_GID docker compose run --rm --build build-windows
fi

# The exe looks for game/ in its working directory. Saves live under that tree.
repo=$(cd "$script_dir/.." && pwd)
game="$repo/lcs/game"
dest_dir="$repo/out/lcs-windows/lcs"
link="$dest_dir/game"
target="../../../lcs/game"

if [[ ! -f "$game/EBOOT.ELF" ]]; then
	echo "Game root $game has no EBOOT.ELF" >&2
	exit 1
fi

mkdir -p "$dest_dir"

if [[ -L "$link" ]]; then
	current=$(readlink "$link")
	if [[ "$current" == "$target" ]]; then
		echo "Already shared: $link -> $target"
		exit 0
	fi
	rm "$link"
elif [[ -e "$link" ]]; then
	echo "$link exists and is not a symlink" >&2
	exit 1
fi

ln -s "$target" "$link"
echo "Shared $link -> $target"
