# Opus 5.5 performance investigation — 22 September 2026

Jordan requested one Opus 5.5 investigation into further exact battle speedups
while final neural evaluation runs. Baseline is `69962220d762ea04`, including
working changes. Exact `claude-opus-5-5` identity and successful completion of
its first consultation are verified through the existing subscription. Source
experiments are isolated under `.local/plan024/opus55-performance/`; no live
training/evaluation inputs or production simulator code are edited.

## New measurements

Astra added scratch-only counters, then replayed the saved first training battle
of seeds 24, 25 and 26 (maps 756, 713 and 739). All decision, receipt, reward and
start hashes, action/gameplay digests, winners and active counts match the current
baseline and original recorded outcomes. Counters are not timing measurements.

| Segment query type | Lookups | Hits | Hit rate | Occupied-slot misses |
|---|---:|---:|---:|---:|
| Sight | 155,554,470 | 108,037,468 | 69.45% | 42,864,484 |
| Movement | 29,334,931 | 23,887,560 | 81.43% | 3,811,166 |

10,579,450 movement lookups have numerically equal start/end coordinates.
An occupied-slot miss can be a never-before-seen query: these counts do not prove
capacity or conflict misses, or that associativity/larger tables will help.
Full per-map counts and scratch sources are retained in the evidence directory.

## First proposal: linked-surface path copies

Opus proposed replacing the per-call deep copy of cached linked-surface paths
with references. Its notes correctly conditioned any value on actual call counts.
Astra measured **zero calls on all three training maps**, with full replay parity.
The proposal is archived, not integrated or presented as a training speedup.
No candidate timing, full suite or Windows verification is claimed for it.

The agent's first file sandbox blocked reading documents outside its owned folder;
its response disclosed that limitation. Astra copied all requested prior reports
into its follow-up folder and supplied the fresh counters for one bounded follow-up.
This is a continuation of the same investigation in a fresh subscription CLI
session, again requesting exact Opus 5.5; no substitute model or paid API is used.

Follow-up complete: tactical ray-prefetch retained on 6ff5c2010bc64352 after measured
performance and exactness gates. [Full report](../docs/NEURAL_TRAINING_PREFETCH.md). Every proposal
must preserve exact decisions, geometry answers, paths, rewards and outcomes;
changes to search budgets, precision, decision frequency and guards are excluded.
The final neural evaluation and frozen binary remain unchanged.
