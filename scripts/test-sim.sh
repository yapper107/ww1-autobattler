#!/usr/bin/env bash
set -euo pipefail
repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
mkdir -p "$repo_root/.local/tests"
g++ -DARMY_TEST_CONTROLS -std=c++17 -O2 -Wall -Wextra -Wpedantic \
  -I "$repo_root/Unreal/Source/ArmyPrototype/Sim" \
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
  "$repo_root/tests/sim_tests.cpp" -o "$repo_root/.local/tests/sim_tests"
"$repo_root/.local/tests/sim_tests" "$@"
