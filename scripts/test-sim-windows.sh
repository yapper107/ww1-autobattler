#!/usr/bin/env bash
set -euo pipefail
repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
"$repo_root/scripts/build-lab-windows.sh"
source "$repo_root/.local/paths.env"
lab_dir="$ARMY_WINDOWS_BUILD_DIR/Saved/BattleLab"
test_binary="sim-tests-$(python3 "$repo_root/tools/source_id.py" "$lab_dir/Sim").exe"
mkdir -p "$lab_dir/tests"
cp "$repo_root"/tests/*.h "$repo_root/tests/sim_tests.cpp" "$lab_dir/tests/"
python3 - "$lab_dir" "$test_binary" <<'PY'
import sys
from pathlib import Path
root = Path(sys.argv[1])
command = (root / 'build.cmd').read_text()
command = command.replace('/std:c++17', '/DARMY_TEST_CONTROLS /std:c++17')
command = command.replace('battle_cli.cpp /Fe:battle-lab.exe',
                          r'tests\sim_tests.cpp /Fe:' + sys.argv[2])
(root / 'build-tests.cmd').write_bytes(command.replace('\n', '\r\n').encode())
PY
(cd "$lab_dir" && /mnt/c/Windows/System32/cmd.exe /d /c "$(wslpath -w "$lab_dir/build-tests.cmd")")
"$lab_dir/$test_binary" "$@"
