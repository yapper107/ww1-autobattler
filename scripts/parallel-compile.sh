#!/usr/bin/env bash
# Compile every source to an object in parallel with the given flags, then link.
# Usage: parallel-compile.sh <output> <flags...> -- <sources...>
# Same flags and translation units as the old single g++ call, so the same code; only the wall
# time changes (one core to all of them).
set -euo pipefail
output="$1"; shift
flags=(); while [[ "$1" != "--" ]]; do flags+=("$1"); shift; done; shift
objects="$(mktemp -d "${TMPDIR:-/tmp}/army-obj-XXXXXX")"; trap 'rm -rf "$objects"' EXIT
export ARMY_OBJECTS="$objects"
printf '%s\0' "$@" | xargs -0 -P "$(nproc)" -I{} bash -c 'g++ "${@:2}" -c "$1" -o "$ARMY_OBJECTS/$(basename "$1" .cpp).o"' _ {} "${flags[@]}"
g++ "$objects"/*.o -o "$output"
