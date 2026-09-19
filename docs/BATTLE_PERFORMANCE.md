# Battle performance after the terrain rework

17 September 2026. Measured and changed by Claude Fable 5.1 in the direct architect
session at the user's request, after the map generator integration. Source before:
`4f00be36d9b119fe`. Source after: `1d11593db5b6514f`. Host: 16 cores, 45 GB, WSL2.
Purpose: make battles on generated maps cheap enough for the plan 016 improvement
loop, which must run hundreds of them per candidate.

## What was measured first

Twenty fresh seeds (21 to 30, both kinds) all generate in under a second, import,
path and fight under the drills controller: 336 to 2,622 shots, 7.5 to 21 s of
simulation, no failures. Generation is not the problem.

Per-battle cost, 360 s, seed 107, before any change:

| Battle | Wall | Simulation | Peak memory | Dominant profile items |
|---|---:|---:|---:|---|
| Town, legacy | 24.3 s | 22.0 s | 2.9 GB | spatial line query 33 %, tactical visibility estimate 26 % (52 M calls) |
| Town, drills | 17.2 s | 13.8 s | 3.0 GB | spatial line query 25 %, soldier copies 13 %, floor path search 11 %, digest 11 % |
| Trench, legacy | 12.4 s | 10.0 s | 2.9 GB | |
| Trench, drills | 9.2 s | 5.6 s | 3.2 GB | |
| Works, drills | 13.2 s | 9.9 s | 3.0 GB | |

Memory is the same on every map because it is the record: one 1.57 MB frame (64
soldiers at 23.5 KB each) every 0.2 s, 1,800 frames a battle. The maps add nothing.

Exact-argument repeat rates measured with an instrumented scratch build (town,
drills): the 3-D line query repeats 79 % of its calls, the six-ray protection test
73 %, the floor path search only 24 %. A gprof lead on the geometry key (45 M
attributed calls) was a profiler artefact: an instrumented build showed zero calls.

## Changes (results bit-identical)

1. **Digest computed once per CLI battle.** `ExportBattle` takes an optional
   precomputed digest; `battle_cli.cpp` computes it once and passes it in. Saves
   about one second per battle on the CLI; the manifest digest is unchanged.
2. **Exact-argument memo for line queries.** `MemoisedSegment` (SpatialSim.cpp)
   caches `ClearLine3D` and `ClearLine` results by the exact bits of both endpoints,
   the padding and the query kind, in a 2 M-entry direct-mapped table owned by the
   map's geometry revision and reset by `InvalidateGeometry`. A collision recomputes
   exactly, so results cannot differ; only speed changes. Hit rates: town drills
   82 %, town legacy 70 %, trench drills 88 %, Works drills 81 %. An 8 M-entry table
   was slower (memory latency), so 2 M stands. `profile.json` now reports
   `memo_lookups` and `memo_hits`.

Not changed, and why: the tactical visibility estimate already has its own exact
cache; the floor path search repeats too rarely under drills for a memo to pay; the
23 KB soldier copies in `WithTracks` and `WithReports` need a lighter type at many
call sites; the position service's path search to every candidate slot (177 K of
248 K searches) could share one expansion per query but would change tie-breaking
and therefore behaviour.

## Result

Wall clock per battle, three-run means, seed 107:

| Battle | Before | After | Change |
|---|---:|---:|---:|
| Town, drills | 17.2 s | 14.7 s | −15 % |
| Town, legacy | 24.3 s | 20.8 s | −14 % |
| Trench, drills | 9.2 s | 6.4 s | −30 % |
| Works, drills | 13.2 s | 10.4 s | −21 % |

Verification on `1d11593db5b6514f`: five reference digests on both generated maps
and Works match the pre-change build; 40 of 40 authored legacy and cognition
digests match; full Linux suite passes (322 s); Python tests pass; the loop's
static hidden-state check passes; native Windows lab build and tests pass
(`.local/plan016/native-memo/`). No Unreal build was made; `BattleGameMode` compiles
unchanged against the new default parameter.

## Lean recording, landed 19 September 2026 (source `efce1ef0fb0e378a`)

`battle-lab --lean` folds each frame as it is produced and drops it: the evaluation row, a
per-frame digest and the few shot-owner attributes the shots export needs are taken, and only
the first frame stays in the record. Measured on a 600 s town attack: **4.97 GB to 0.50 GB
(legacy) and 0.61 GB (drills)**, and the end-of-battle export falls from about 3 s to 0.15 s.
`evaluation.jsonl`, `shots.jsonl`, `events.jsonl`, `geometry.jsonl` and the summary are
byte-identical to the full path, and the manifest differs only in the digest.

The design below assumed the full digest could be folded incrementally. It cannot stay the same
number: it hashes the winner and duration first and then walks all frames once per section, and
it hashes 1.3 to 1.7 GB of frame fields per 600 s battle, so buffering its input would have saved
only a factor of three. Instead the digest body became one core (`DigestCore`) used two ways: the
full digest exactly as before (40/40 historical parity, unchanged values), and a frames-only pass
over a one-frame view, folded per frame, with the whole-battle part (outcome, roster, shots,
events, map) folded at the end through the same code. **A lean digest and a full digest of one
battle are different numbers over the same fields**; the manifest says which (`digest_kind`), and
the loop only ever compares like with like. Unreal and every test that reads frames keep the full
record. The loop's runner adds `--lean` when a node's binary supports it and budgets 1 GB a job.
Verification: full Linux suite, 40/40 parity, 120 Python tests, byte-identical exports for both
controllers, two simultaneous lean runs with identical digests, Unreal module compile on UE 5.4.

## The earlier design note: record memory

3 GB per battle caps parallel battles at about ten on this box and is the same RAM
the Unreal replay holds. The digest hashes contacts and reports for every soldier in
every frame, so stored frames cannot shrink without changing digests unless the
digest is folded incrementally as frames are recorded. The design that keeps every
digest identical:

- fold the frame digest at record time (`Simulate`, where frames are pushed) into a
  running hash, and finish with shots and events at export;
- compute the evaluation export row per frame at record time into a compact buffer
  (about 30 KB a frame instead of 1.57 MB) when the caller asks for evaluation;
- record shot owner team, squad, machine gun and element role at shot time instead
  of looking them up in frames at export;
- keep full frames only when a replay consumer asks for them (the Unreal game mode
  and the tests that read frames).

That is a change to `BattleSim.cpp`, `Diagnostics.cpp`, `tests/sim_tests.cpp` and
`BattleGameMode.cpp`, verified by the same 40-case parity. It is worth roughly a
five-fold gain in parallel battles and a comparable drop in in-game RAM. Not started.

## Loop integration done in the same pass

`tools/loop/maps.py` generates and caches maps per seed; the runner accepts
imported maps; `town-dev`, `trench-dev`, `town-val` and `trench-val` are scenario
sets with guard coverage (zero-shot, firing squads, spacing, churn, friendly fire
paired against legacy). See [the loop guide](IMPROVEMENT_LOOP.md).
