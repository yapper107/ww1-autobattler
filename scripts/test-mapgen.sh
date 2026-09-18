#!/usr/bin/env bash
set -euo pipefail
repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$repo_root"
python3 -m unittest discover -s tests -p test_mapgen.py -v
mkdir -p .local/mapgen/tests
g++ -std=c++17 -O2 -Wall -Wextra -I Unreal/Source/ArmyPrototype/Sim \
  tests/imported_map_tests.cpp Unreal/Source/ArmyPrototype/Sim/*.cpp \
  -o .local/mapgen/tests/imported-map-tests
.local/mapgen/tests/imported-map-tests \
  Unreal/Config/GeneratedMaps/city.army Unreal/Config/GeneratedMaps/trenches.army
