#!/usr/bin/env bash
set -euo pipefail
repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
if [[ -f "$repo_root/.local/paths.env" ]]; then source "$repo_root/.local/paths.env"; fi
: "${ARMY_ENGINE_DIR:=/mnt/c/Program Files/Epic Games/UE_5.4}"
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
cp "$repo_root/Unreal/ArmyPrototype.uproject" "$build_dir/ArmyPrototype.uproject"
project_win="$(wslpath -w "$build_dir/ArmyPrototype.uproject")"
ubt_win="$(wslpath -w "$ARMY_ENGINE_DIR/Engine/Binaries/DotNET/UnrealBuildTool/UnrealBuildTool.dll")"
"$ARMY_ENGINE_DIR/Engine/Binaries/ThirdParty/DotNet/6.0.302/windows/dotnet.exe" \
  "$ubt_win" ArmyPrototypeEditor Win64 Development "-Project=$project_win" \
  -WaitMutex -NoHotReloadFromIDE -NoUBTMakefiles
printf '\nBuilt: %s\n' "$project_win"
