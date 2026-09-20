#!/usr/bin/env bash
# Evaluate a candidate that lives in another worktree against the shared discovery tree.
# The worktree keeps its own Sim sources (the candidate); the loop tools and their tests are
# synced from this checkout first, so a worktree cut before a harness change still evaluates
# with the current harness (19 Sep 2026: three evaluations died on options their copy lacked).
# Usage: scripts/loop-evaluate.sh <worktree> <python3 -m tools.loop evaluate arguments...>
set -euo pipefail
repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
worktree="$(cd "$1" && pwd)"; shift
rsync -a --delete --exclude=__pycache__ "$repo_root/tools/loop/" "$worktree/tools/loop/"
cp "$repo_root/tests/test_loop.py" "$worktree/tests/test_loop.py"
cp "$repo_root"/tools/*.py "$worktree/tools/"   # the metrics code is part of the harness, not of the candidate
cp "$repo_root/scripts/battle-lab.sh" "$repo_root/scripts/test-sim.sh" "$repo_root/scripts/parallel-compile.sh" "$worktree/scripts/"
cd "$worktree"
nice -n 19 env ARMY_LOOP_ROOT="$repo_root/.local/loop" exec python3 -u -m tools.loop evaluate "$@"
