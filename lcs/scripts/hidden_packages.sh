#!/usr/bin/env bash
# Start the hidden-package map on this machine. Leaves it in the foreground.
# If it is already serving, prints the URL and exits.
set -euo pipefail
script_dir=$(cd "$(dirname "$0")" && pwd)
repo=$(cd "$script_dir/../.." && pwd)
server="$repo/tools/hidden_packages/server.py"

port=8765
args=("$@")
i=0
while [[ $i -lt ${#args[@]} ]]; do
    case "${args[$i]}" in
        --port)
            i=$((i + 1))
            port=${args[$i]:-}
            ;;
        --port=*)
            port=${args[$i]#--port=}
            ;;
    esac
    i=$((i + 1))
done

url="http://127.0.0.1:${port}/"
if python3 -c 'import sys, urllib.request
try:
    urllib.request.urlopen(sys.argv[1], timeout=1)
except Exception:
    sys.exit(1)' "${url}api/state" >/dev/null 2>&1; then
    echo "Hidden package map is already running: $url"
    exit 0
fi

exec python3 "$server" "$@"
