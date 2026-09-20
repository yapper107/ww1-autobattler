#!/usr/bin/env bash
set -euo pipefail
repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
mkdir -p "$repo_root/.local/lab"
build_id="$(python3 "$repo_root/tools/source_id.py")"
"$repo_root/scripts/parallel-compile.sh" "$repo_root/.local/lab/battle-lab" "-DARMY_BUILD_ID=\"$build_id\"" -std=c++17 -O2 -Wall -Wextra -Wpedantic -I "$repo_root/Unreal/Source/ArmyPrototype/Sim" -- "$repo_root"/Unreal/Source/ArmyPrototype/Sim/*.cpp "$repo_root/tools/battle_cli.cpp"
exec "$repo_root/.local/lab/battle-lab" "$@"
