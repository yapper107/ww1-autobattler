#!/usr/bin/env bash
set -euo pipefail
repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$repo_root"
out=.local/mapgen/tests
mkdir -p "$out"
flags=(-std=c++17 -O2 -Wall -Wextra -I Unreal/Source/ArmyPrototype/Sim)
# The simulator is compiled once (four at a time) for both native tools: the imported-map tests and
# the map probe (plan 029 G-3), which answers geometry queries for tests/test_mapgen_native.py.
obj="$(mktemp -d "$out/obj.XXXXXX")"   # private to this run: concurrent runs never share objects
trap 'rm -rf "$obj"' EXIT
printf '%s\n' Unreal/Source/ArmyPrototype/Sim/*.cpp |
  xargs -P 4 -I{} sh -c 'src=$0 dir=$1; shift; g++ "$@" -c "$src" -o "$dir/$(basename "$src" .cpp).o"' {} "$obj" "${flags[@]}"
g++ "${flags[@]}" tests/imported_map_tests.cpp "$obj"/*.o -o "$out/imported-map-tests"
g++ "${flags[@]}" tools/map_probe.cpp "$obj"/*.o -o "$out/map-probe"
# test_mapgen.py (generator) and test_mapgen_native.py (Python kernel vs the probe, village seating).
python3 -m unittest discover -s tests -p 'test_mapgen*.py' -v
# A freshly generated village (not a committed file: the village generator is still changing) goes
# through the same native import, route, cover and warm/cold digest checks as the golden maps.
python3 tools/generate_maps.py --kind village --seed 17 --output "$out/village" > "$out/village.log"
"$out/imported-map-tests" \
  Unreal/Config/GeneratedMaps/city.army Unreal/Config/GeneratedMaps/trenches.army "$out/village/village-17.army"
