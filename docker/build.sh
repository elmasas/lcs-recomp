#!/usr/bin/env bash
set -e

case "$1" in
	"archlinux")
		if [ ! -d "ccache-archlinux" ]; then
			mkdir "ccache-archlinux"
		fi
		docker compose up --pull never --remove-orphans build-archlinux
	;;
	"debian")
		if [ ! -d "ccache-debian" ]; then
			mkdir "ccache-debian"
		fi
		docker compose up --pull never --remove-orphans build-debian
	;;
	"windows")
		"$(dirname "$0")/build_windows_on_linux.sh"
	;;
	*)
		printf "\nAvailable options:\n\n"
		printf "\tarchlinux\tcompile the source code on Arch Linux\n"
		printf "\tdebian\t\tcompile the source code on Debian\n"
		printf "\twindows\t\tcross-compile the Windows clang-cl build\n"
		printf "\nUsage: %s <option>\n\n" "$0"
		exit 0
	;;
esac
