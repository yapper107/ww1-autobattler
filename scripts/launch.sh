#!/usr/bin/env bash
set -euo pipefail
repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
if [[ -f "$repo_root/.local/paths.env" ]]; then source "$repo_root/.local/paths.env"; fi
: "${ARMY_ENGINE_DIR:=/mnt/c/Program Files/Epic Games/UE_5.4}"
: "${ARMY_WINDOWS_BUILD_DIR:?Set ARMY_WINDOWS_BUILD_DIR or .local/paths.env}"
"$ARMY_ENGINE_DIR/Engine/Binaries/Win64/UnrealEditor.exe" \
  "$(wslpath -w "$ARMY_WINDOWS_BUILD_DIR/ArmyPrototype.uproject")" \
  -game -windowed -ResX=1440 -ResY=900 -NoSplash -NoSound \
  -stdout -FullStdOutLogOutput "$@"
