# Training-battle CPU profile, source 6ff5c2010bc64352 — 22 September 2026

Twelve recorded training battles (seeds 24–26; the paired-benchmark cases), replayed exactly
with three scratch builds of the current source: CPU stage timers, link-time gprof sampling of
unchanged -O2 objects, and a full `-pg` call-graph build. All 36 replays match their recorded
outcomes. Evidence and scripts: `.local/plan024/profile-6ff/` (build.py, run.py, callgraph.txt).

## Stages (CPU timers, 298.8 s over 12 battles)

| Stage | Share |
|---|---:|
| Squad/platoon commands (both armies, candidate planning) | 65.3% |
| Individual soldier decisions | 22.1% |
| Perception and reactions | 6.9% |
| Lean recording/digests | 2.7% |
| Movement, firing, ballistics | 2.9% |

Nested: tactical route evaluation 35.5%, navigation 14.4%.

## Inclusive by caller (call-graph build; approximate, overlapping)

| Work | Share | Volume over 12 battles |
|---|---:|---|
| Squad manoeuvre assessment: `UpdateManeuver` → `TacticalRoutePlanner::Evaluate` → `RegionalPath` → `Measure` → `Sample` | ~37–41% | 56.6k evaluations, 13.4M measures, 82.7M samples, 650M ray-cache lookups |
| Soldier order choice `ChooseOrder` | ~21% | 2.6M calls, 248M line checks directly (~95 per decision) |
| Cover test `ProtectedAt` (all callers) | ~15% | 70.9M calls, 240M line checks; `GroupStation` 26.8M, `ChooseOrder` 14.0M, `UpdateManeuver` 12.8M |
| Floor pathfinding `FindFloorPath` | ~16% | 1.23M paths |
| Enemy sensing `SenseEnemy` | ~3% | 32.8M calls |

Underneath all of these, line-of-sight work (`MemoisedSegment`, `SpatialIndex::Query`,
`SegmentObstacle`, `EstimatedVisible`) is about 60% of sampled self time: 686M memo lookups
(71% hits), 398M obstacle-tree queries visiting 7.8B nodes (~20 per query).

The `GeometryKey` label (988M "calls" from `FindFloorPath`) is again a symbol-attribution
artefact: every call site is guarded by `m.prepared`. It most likely covers the A* heap helpers
inside `FindFloorPath`.

Each `UpdateManeuver` builds a new planner, so the per-assessment sample and edge-cost caches
start empty every time (about 1.1 evaluations per planner). Track confidence depends on time,
so costs cannot be reused across assessments exactly. Only the ray-visibility cache persists.
