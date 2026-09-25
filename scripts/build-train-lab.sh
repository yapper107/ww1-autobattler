#!/usr/bin/env bash
# Build the neural-training battle binary: the same source as scripts/battle-lab.sh, compiled with
# profile-guided optimisation and link-time optimisation. Compiler flags only; no fast-math, FMA
# contraction or architecture-specific instructions, so results are bit-identical to the -O2 lab.
#
#   1. instrumented build;
#   2. profile: a few Legacy-vs-neural lean battles on training cities, run in parallel;
#   3. final build with -fprofile-use -flto, written to .local/lab/battle-lab-train.
#
# The profile is regenerated on every build, so it never goes stale against the source.
# Usage: scripts/build-train-lab.sh [--profile-battles N] [--output PATH]
#   (default 6 battles and .local/lab/battle-lab-train; --output writes any other binary path, so a
#   new build never replaces the binary a running training job spawns its workers from)
set -euo pipefail
repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$repo_root"
battles=6
output=".local/lab/battle-lab-train"
while [[ $# -gt 0 ]]; do
    case "$1" in
        --profile-battles) battles="$2"; shift 2;;
        --output) output="$2"; shift 2;;
        *) echo "Unknown argument: $1" >&2; exit 2;;
    esac
done
model="models/squad/plan024-legacy-rl-duration-v1/squad.policy"
mkdir -p "$(dirname "$output")"
mkdir -p .local/lab
build_id="$(python3 tools/source_id.py)"
work="$(mktemp -d "${TMPDIR:-/tmp}/army-train-XXXXXX")"; trap 'rm -rf "$work"' EXIT
sources=(Unreal/Source/ArmyPrototype/Sim/*.cpp tools/battle_cli.cpp)
compile() { # compile <binary> <flags...>: objects always land in $work/obj, which the profile paths depend on
    local binary="$1"; shift
    mkdir -p "$work/obj"
    printf '%s\0' "${sources[@]}" | xargs -0 -P "$(nproc)" -I{} bash -c \
        'g++ "${@:2}" -c "$1" -o "'"$work"'/obj/$(basename "$1" .cpp).o"' _ {} \
        "-DARMY_BUILD_ID=\"$build_id\"" -std=c++17 -I Unreal/Source/ArmyPrototype/Sim "$@"
    g++ "$@" "$work"/obj/*.o -o "$binary"
}
started=$SECONDS
compile "$work/instrumented" -O2 -fprofile-generate -fprofile-update=single -fprofile-dir="$work/profile"
echo "instrumented build: $((SECONDS-started)) s"
profiled=$SECONDS
# Training maps 701-760 (never development or reserved maps); 360 s battles against active Legacy.
pids=()
for ((i=0;i<battles;i++)); do
    map_seed=$((702+i*9)); battle_seed=$((107+i%3))
    map="$(python3 -c "from tools.loop import maps; print(maps.ensure($map_seed)['city'])")"
    "$work/instrumented" --legacy-ai --map "$map" --seed "$battle_seed" --seconds 360 --neural-model "$model" \
        --no-trace --lean --evaluate --out "$work/battles/$i" > "$work/battle-$i.log" 2>&1 &
    pids+=($!)
done
for i in "${!pids[@]}"; do
    wait "${pids[$i]}" || { cat "$work/battle-$i.log" >&2; echo "profile battle $i failed" >&2; exit 1; }
done
echo "profile battles ($battles): $((SECONDS-profiled)) s"
final=$SECONDS
rm -f "$work"/obj/*.o
compile "$output" -O2 -flto=auto -fprofile-use -fprofile-correction -Wno-missing-profile -fprofile-dir="$work/profile"
echo "optimised build: $((SECONDS-final)) s; total $((SECONDS-started)) s"
"$output" --version
