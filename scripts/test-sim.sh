#!/usr/bin/env bash
set -euo pipefail
repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
mkdir -p "$repo_root/.local/tests"
"$repo_root/scripts/parallel-compile.sh" "$repo_root/.local/tests/sim_tests" -DARMY_TEST_CONTROLS -std=c++17 -O2 -Wall -Wextra -Wpedantic \
  -I "$repo_root/Unreal/Source/ArmyPrototype/Sim" -- \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/Stats.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/Weapons.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/PositionSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/DrillFixtures.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/DrillSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/SquadDrillSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/ScenarioGen.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/DefenceGen.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/CognitiveSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/PerceptionSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/BeliefSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/TaskSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/RecoverySim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/TerrainSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/TacticalRouteSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/PlanSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/SpatialSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/Diagnostics.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/BattleSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/PlatoonSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/LeaderSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/PlatoonTaskSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/PlatoonFixtures.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/CommandSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/ReactionSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/CoordinationSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/TrafficSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/EnvironmentSim.cpp" \
  "$repo_root/Unreal/Source/ArmyPrototype/Sim/ManeuverSim.cpp" \
  "$repo_root/tests/sim_tests.cpp"
# The full suite holds about 10 GB (its whole-battle sweep keeps complete records). Three of them beside two
# reference battles ran WSL out of its 30 GB on 21 September 2026, so the full suite, like a traced battle, takes the
# machine-wide heavy-job lock of the main checkout (worktrees share it). A selector run is small and does not.
if [[ $# -eq 0 ]]; then
  main_root="$(cd "$(git -C "$repo_root" rev-parse --git-common-dir)/.." && pwd)"
  mkdir -p "$main_root/.local/loop"
  exec flock "$main_root/.local/loop/trace.lock" "$repo_root/.local/tests/sim_tests"
fi
"$repo_root/.local/tests/sim_tests" "$@"
