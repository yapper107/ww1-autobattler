# Training-battle CPU profile, source f28c195b711323f9 — 22 September 2026

This profile was taken after the [five-agent optimization round](NEURAL_TRAINING_ROUND4.md). The
method and the 12 recorded training battles are the same as the
[6ff profile](NEURAL_TRAINING_PROFILE_6FF.md): CPU stage timers, link-time gprof sampling of
unchanged -O2 objects, and a full `-pg` call-graph build. All 36 replays are exact.
Evidence: `.local/plan024/profile-f28/`.

The stage-timer build's total fell from 298.8 s to 171.4 s over the 12 battles.

## Stages

| Stage | 6ff | f28 |
|---|---:|---:|
| Squad/platoon commands | 65.3% | **71.8%** |
| Soldier decisions | 22.1% | 9.0% |
| Perception and reactions | 6.9% | 8.6% |
| Lean recording/digests | 2.7% | 5.4% |
| Movement, firing, ballistics | 2.9% | 4.8% |

Nested: tactical route evaluation 36.0%, navigation 10.4%.

## Inclusive by caller (call-graph build; approximate, overlapping)

| Work | Share | Notes |
|---|---:|---|
| **Squad manoeuvre route assessment** (UpdateManeuver → Evaluate → RegionalPath → Measure → Sample) | **~38–41%** | Still 82.7M Sample calls. Sample self time is 21 s, plus rays behind EstimatedVisible, which fell from 650M to 152M. |
| Floor pathfinding (FindPath/FindFloorPath) | ~15% | Includes a mis-attributed CoverExists (below); FloorSearch for tactical cost paths adds ~5% (5,302 calls at ~1.2 ms each) |
| **CoverExists** | **~7–10%** | A linear scan of the whole cover catalogue per call, ~16k calls per battle at ~50 µs each |
| Reactions (ProcessReactions, QueueReaction, PendingReaction copies) | ~8.5% | 89M PendingReaction copies |
| Enemy sensing (SenseEnemy) | ~6% | 32.8M calls |
| Lean recording digest (DigestCore) | ~5.7% | Whole-frame digest roughly every 0.2 s |
| Struct copies (Soldier, Assignment, SquadSituation) | ~7% | 9.1M Soldier, 109M Assignment and 97M SquadSituation copies |
| Soldier order choice (ChooseOrder) | ~6% | Was ~21% |
| Cover test (ProtectedAt) | ~6% | Was ~15% |

Line-of-sight primitives (Traverse and MemoisedSegment self time) are now about 30% of sampled time,
down from about 60%.

The earlier puzzling `GeometryKey` samples (4.6% in the 6ff flat profile, though GeometryKey is never
called on prepared maps) were most likely CoverExists. It is a neighbouring function in
EnvironmentSim.cpp and now appears under its own name at a similar cost.

## Next targets, in order of expected value

1. **Squad manoeuvre route assessment (~40%).** Still the largest single cost.
   - Exact options: reuse each report's visible-ray count across planners with a bounded cache; make
     the non-visibility parts of Sample cheaper (FireDanger, lane and congestion loops).
   - The big lever is not exact: fewer samples per route, a coarser regional grid or less frequent
     re-assessment. That changes behaviour and needs Jordan's ruling.
2. **CoverExists (~7–10%).** An exact per-revision id→entry hash would remove almost all of it.
   Small and low-risk, and the cheapest next win.
3. **Reactions and struct copying (~15% together).** Copying large structs, such as PendingReaction
   and Soldier copies in WithReports and UpdateCommands. Exact reference/move refactors.
4. **Pathfinding (~10% excluding CoverExists) and FloorSearch (~5%).**
5. **Perception (~6%) and the recording digest (~6%).** The digest value must stay identical.
