#!/usr/bin/env bash
set -euo pipefail
for seed in 100 101 102 103 104 105 106 107 108 109; do
  .local/lab/battle-lab --legacy-ai --seed "$seed" --seconds 360 --evaluate --no-trace --out .local/baselines/legacy/works
  .local/lab/battle-lab --seed "$seed" --seconds 360 --evaluate --no-trace --out .local/baselines/candidate90/works
  .local/lab/battle-lab --legacy-ai --terrain 1 --seed "$seed" --seconds 360 --evaluate --no-trace --out .local/baselines/legacy/trenches
  .local/lab/battle-lab --terrain 1 --seed "$seed" --seconds 360 --evaluate --no-trace --out .local/baselines/candidate90/trenches
done
