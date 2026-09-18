#!/usr/bin/env bash
set -euo pipefail
repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
source "$repo_root/.local/paths.env"
lab_dir="$ARMY_WINDOWS_BUILD_DIR/Saved/BattleLab"
mkdir -p "$lab_dir/Sim"
rsync -a --delete "${ARMY_LAB_SOURCE:-$repo_root/Unreal/Source/ArmyPrototype/Sim}/" "$lab_dir/Sim/"
cp "$repo_root/tools/battle_cli.cpp" "$lab_dir/battle_cli.cpp"
build_id="$(python3 "$repo_root/tools/source_id.py" "$lab_dir/Sim")"
printf '#define ARMY_BUILD_ID "%s"\n' "$build_id" > "$lab_dir/build_stamp.h"
python3 - "$lab_dir" <<'PY'
import sys,subprocess
from pathlib import Path
root=Path(sys.argv[1]);win=subprocess.check_output(['wslpath','-w',str(root)],text=True).strip()
(root/'build.cmd').write_bytes(('''@echo off
setlocal
if not exist "%ProgramFiles(x86)%\\Microsoft Visual Studio\\Installer\\vswhere.exe" (
  echo Visual Studio C++ tools are missing. See docs/DEVELOPMENT.md.
  exit /b 1
)
for /f "usebackq tokens=*" %%i in (`"%ProgramFiles(x86)%\\Microsoft Visual Studio\\Installer\\vswhere.exe" -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath`) do set "ARMY_VS_INSTALL=%%i"
if not defined ARMY_VS_INSTALL exit /b 1
call "%ARMY_VS_INSTALL%\\VC\\Auxiliary\\Build\\vcvars64.bat"
if errorlevel 1 exit /b 1
cd /d "'''+win+'''"
cl /nologo /std:c++17 /EHsc /O2 /DNOMINMAX /I . /I Sim /FIbuild_stamp.h Sim\\*.cpp battle_cli.cpp /Fe:battle-lab.exe /link /STACK:33554432
exit /b %errorlevel%
''').replace('\n','\r\n').encode())
PY
(cd "$lab_dir" && /mnt/c/Windows/System32/cmd.exe /d /c "$(wslpath -w "$lab_dir/build.cmd")")
