#!/usr/bin/env bash
set -euo pipefail
repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
if [[ -f "$repo_root/.local/paths.env" ]]; then source "$repo_root/.local/paths.env"; fi
: "${ARMY_ENGINE_DIR:=/mnt/c/Program Files/Epic Games/UE_5.8}"
if [[ -z "${ARMY_WINDOWS_BUILD_DIR:-}" ]]; then
  printf 'Set ARMY_WINDOWS_BUILD_DIR to a dedicated Windows-local build directory.\n' >&2
  exit 1
fi
build_dir="$ARMY_WINDOWS_BUILD_DIR"
if [[ "$build_dir" != /mnt/[a-z]/* || "$build_dir" == "$repo_root" ]]; then
  printf 'The Unreal build mirror must be a dedicated directory on a Windows drive.\n' >&2; exit 1
fi
if [[ -d "$build_dir" && ! -f "$build_dir/.army-build-mirror" && -n "$(ls -A "$build_dir")" ]]; then
  printf 'Refusing to synchronize into a nonempty directory that is not an Army build mirror.\n' >&2; exit 1
fi
mkdir -p "$build_dir/Source" "$build_dir/Config"
touch "$build_dir/.army-build-mirror"
rsync -a --delete "$repo_root/Unreal/Source/" "$build_dir/Source/"
rsync -a --delete "$repo_root/Unreal/Config/" "$build_dir/Config/"
mkdir -p "$build_dir/Tools/mapgen"
rsync -a --delete --exclude=__pycache__ "$repo_root/tools/mapgen/" "$build_dir/Tools/mapgen/"
cp "$repo_root/tools/generate_maps.py" "$build_dir/Tools/generate_maps.py"
cp "$repo_root/Unreal/ArmyPrototype.uproject" "$build_dir/ArmyPrototype.uproject"
project_win="$(wslpath -w "$build_dir/ArmyPrototype.uproject")"
# Let the selected engine locate its bundled .NET runtime (versions differ by engine).
python3 - "$build_dir" "$ARMY_ENGINE_DIR" <<'PY'
import subprocess, sys
from pathlib import Path
root, engine = map(Path, sys.argv[1:])
def windows(path):
    return subprocess.check_output(['wslpath', '-w', str(path)], text=True).strip()
command = ('@echo off\ncall "' + windows(engine / 'Engine/Build/BatchFiles/Build.bat') +
           '" ArmyPrototypeEditor Win64 Development "-Project=' +
           windows(root / 'ArmyPrototype.uproject') +
           '" -WaitMutex -NoHotReloadFromIDE -NoUBTMakefiles\nexit /b %errorlevel%\n')
(root / 'build-editor.cmd').write_bytes(command.replace('\n', '\r\n').encode())
PY
(cd "$build_dir" && /mnt/c/Windows/System32/cmd.exe /d /c build-editor.cmd)
printf '\nBuilt: %s\n' "$project_win"
