#!/usr/bin/env bash
# Requires the current native lab mirror (scripts/build-lab-windows.sh).
set -euo pipefail
repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
source "$repo_root/.local/paths.env"
lab_dir="$ARMY_WINDOWS_BUILD_DIR/Saved/BattleLab"
cp "$repo_root/tools/neural/probe.cpp" "$lab_dir/squad_policy_probe.cpp"
python3 - "$lab_dir" <<'PY'
from pathlib import Path
import sys
root=Path(sys.argv[1])
text=(root/'build.cmd').read_text()
old=r'Sim\*.cpp battle_cli.cpp /Fe:battle-lab.exe'
assert old in text
text=text.replace(old,r'Sim\SquadPolicy.cpp squad_policy_probe.cpp /Fe:squad-policy-probe.exe')
(root/'build-neural-probe.cmd').write_bytes(text.replace('\n','\r\n').encode())
PY
(cd "$lab_dir" && /mnt/c/Windows/System32/cmd.exe /d /c "$(wslpath -w "$lab_dir/build-neural-probe.cmd")")
"$repo_root/.local/neural-venv/bin/python" -m tools.neural.check_export --model-dir "$1" --data "$2" --probe "$lab_dir/squad-policy-probe.exe"
