# Plan 026 — fix the four AI findings (authority, map view, friendly fire, process costs)

## Context

The AI review of 22 September 2026 found the neural squad policy (a) has very little say — it ranks
two hand-picked options per manoeuvre family at Legacy's own decision points, and hand-coded gates
decide when anything moves (random choice did as well as the trained network: 51/2/37 vs 40/9/41 on
90 development cases); (b) cannot see the map — 97 scalars per option, no spatial view; (c) carries an
unresolved friendly-fire regression in the schema-3 interface (every schema-3 arm fails the fresh-map
friendly-fire guard, the schema-2 imitation model passes); and (d) has two process costs: every
training decision blocks the simulator on a Python round trip (18.6 s/battle at 8 workers in one
process vs ~11 s at 3), and `CLAUDE.md`/`AGENTS.md` are 86 KB each (94% dated narrative) loaded by
every session.

Jordan's rulings (22 September 2026): order **docs → friendly fire → measurement → network**;
friendly-fire repairs **may change Legacy directly** (re-baseline, no video round required);
authority stage 1 is **"go now" over the readiness gates only** (mid-bound consultation designed but
deferred); CLAUDE.md and AGENTS.md become **identical** with the history moved verbatim to
`docs/PROJECT_LOG.md`, after **one local commit** of the two current files. **Opus 5.5 agents do the
implementation; Fable (this session) oversees**: briefs, file ownership, review, integration, gates.

## Hard constraints

- **Plan 025 is live** (`.local/plan025/stronger/`, three `tools.neural.ppo` processes, cap file
  `.local/neural/max_jobs`). Never rebuild `.local/lab/battle-lab-train` or `.local/lab/battle-lab`
  with behaviour-changing code, never change the cap file's meaning, never edit the running run's
  directory. `ElasticPool` spawns new workers from that binary path when the cap grows. New binaries
  go to new paths (`.local/lab/battle-lab-ablation`, `.local/lab/battle-lab-v4`); `scripts/build-train-lab.sh`
  gains `--output`. Editing `tools/neural/*.py` on disk is safe (already imported) but every new entry
  point must still accept the protocol-1 `hello`.
- **Old models stay bit-identical**: schema 2/3 models must produce the same decisions, digests and
  the 40/40 lean parity + 41/41 `tools.neural.verify` matches. Legacy digests may change only through
  a friendly-fire repair Jordan has allowed, followed by a re-baseline (`tools/verify/rebaseline_lean.py`).
- **Knowledge boundary** (AGENTS.md law): the policy sees only what the leader knows
  (`WithTracks(leader,time)`, `leader.fireAreas`, `leader.allies`, platoon waypoints from `f.command`,
  the leader's `knownMap`); never the other team's `f.soldiers`.
- Uncommitted working tree (~1,300 Sim lines + docs): additive edits only; no resets, no blanket staging.
- Machine: while plan 025 holds 8 slots, agents get the other half (≤4 battles each, ≤8 total).

## Execution model (agents)

One Opus 5.5 agent per work package (`Agent` tool, `model: opus`), each in a private copy or scoped
files, with a written brief: objective, owned files, forbidden files, exactness/parity rules, gates,
deliverables (`patch`, `REPORT.md`, evidence). Agents never touch the live run, never commit, never
spawn agents, cap their battles. Fable reviews every patch line by line before integration, runs the
recurring gates on the integrated tree, and reports to Jordan with numbers. Packages that touch the
same file are serialised (P2 → P4 on `ManeuverSim.cpp`).

Recurring gates for any simulator change: `scripts/test-sim.sh` (full, incl. `--neural`),
`python3 -m unittest discover -s tests`, `tools/verify/parity_lean.py` 40/40,
`tools/verify/trace_checks_lean.py` 3/3, `.local/neural-venv/bin/python -m tools.neural.verify` 41/41,
`tools/neural/check_export.py` on Linux and `scripts/check-neural-windows.sh`, `scripts/build-lab-windows.sh`,
`scripts/build.sh` (Unreal). Plus 12 recorded-training-battle replays
(`.local/plan024/opus-round4/bench.py`) for any change meant to be exact.

---

## P1 — Instruction files (finding 5b). No code. First.

**Agent brief: "docs-restructure".** Files: `CLAUDE.md`, `AGENTS.md`, new `docs/PROJECT_LOG.md`,
`docs/AI_PROCESS.md` (lines 60, 101), `plans/README.md`, new `tests/test_project_docs.py`.

1. Fable makes one local commit of the current `CLAUDE.md` and `AGENTS.md` only (`git add` those
   two paths; message "Record CLAUDE.md/AGENTS.md before restructure"; attribution line per session
   rules). Also copy both to `.local/docs-restructure/*.before`.
2. `docs/PROJECT_LOG.md`: header (what it is, how to add), an index table (date, heading, related
   plan/doc), then every narrative section of the current `CLAUDE.md` **verbatim**, newest first
   (`CLAUDE.md` is the superset; AGENTS.md has no unique narrative). The undated tail ("Project
   architect context", "Current cognition implementation", "Character art planning", "Ongoing AI
   reliability repair") becomes the oldest entry.
3. New `AGENTS.md` (~11 KB, cap 16 KB) and byte-identical `CLAUDE.md`:
   - the collaboration agreement and the four law sections verbatim (current AGENTS.md 1016–1067);
   - `## Current state`: playable default Legacy Plan 023 Stage E; working source id; HEAD and the
     uncommitted-tree note; binaries (`.local/lab/battle-lab`, `battle-lab-train`, frozen
     `d73667841df73faa` + sha256, frozen baseline `45da1e25dd1aa9e7`); live runs and the cap file;
     models; map ranges (training 701–760; development 901–930 opened; 1001–1015, 1101–1125
     inspected; next unopened range reserved: **1201–1230**, Jordan to confirm); guards v7;
   - `## Standing rulings` (dated, linked): Legacy default; "pull up the project" = `-game -ArmyLegacy`;
     no Fable review of visual iteration; projectiles richer colour not larger; never restore
     candidate141; inspected maps never a promotion set; keep the frozen training binary; train
     against active Legacy; loop proposers Sonnet; WSL 30 GB; parents by selection policy; user sees
     only survivors; no promotion without replay approval; frozen evaluator, seeds 2001–2010 unopened;
     raw battle output regenerates (not a record); lean-parity slots live in scripts, not memory;
     benchmark agents stay under the thread count; Opus 5.5 agents implement, Fable oversees;
   - `## Verification gates` (the recurring list above with commands);
   - `## Where things are`: one line per plan (current first) and docs grouped (process, neural,
     performance, maps, art, history = PROJECT_LOG.md);
   - `## Keeping these files`: new work → dated entry at the top of `docs/PROJECT_LOG.md`, update
     Current state, add/retire a ruling; never narrative here; older plans' "prepend to AGENTS.md"
     now means the log.
4. `tests/test_project_docs.py`: CLAUDE.md == AGENTS.md; AGENTS.md ≤ 16 KB; every standing-ruling key
   phrase present; every log index entry has a matching heading.
5. Loss check (one-off script, scratchpad, results recorded in the log's first entry): every
   `^#{1,2} ` heading, every 16-hex source id, every link target and every whitespace-normalised
   paragraph of both `.before` files appears in the union of the new files.
6. Update `docs/AI_PROCESS.md:60,101` and `plans/README.md` pointers; leave historical plans' text.

---

## P2 — Friendly-fire regression (finding 4). Diagnose, then repair.

**Agent brief: "friendly-fire".** Files: `Unreal/Source/ArmyPrototype/Sim/BattleSim.h` (Config),
`ManeuverSim.cpp` (456–461, 500–502, 549 only), `tools/battle_cli.cpp`, `tools/rerun_battle.py`,
`Diagnostics.cpp` (manifest/digest folds), `tools/neural/evaluate.py`, new `tools/friendly_fire_trace.py`,
new `tests/test_friendly_fire_trace.py`, `tests/neural_tests.h` (switch tests). Builds to
`.local/lab/battle-lab-ablation`.

**Stage 2a — switches (digest-neutral when on = current behaviour).** `Config`: `keepAction`,
`keepKindReset`, `keepCommitClear` (default true). CLI `--no-keep-action`, `--no-keep-kind-reset`,
`--no-keep-commit-clear` (style of `--no-moving-fire`); manifest emits them only when false;
`rerun_battle.py` maps them back; `DigestCore` folds each only when false (the `orderPace`
convention). `ManeuverSim.cpp`: KEEP legality `&& config.keepAction` (row still emitted);
`(keepPolicy&&config.keepKindReset&&…)` at 501; `if(keepPolicy&&config.keepCommitClear)` at 549.
Gate: ablation binary without flags reproduces `battle-lab-train` digests per case (anchor arms) and
40/40 parity.

**Stage 2b — harness.** `evaluate.py`: arm syntax `NAME=MODEL[;FLAG;…]`; every neural arm also gets
`--record-squad-decisions`; `summarize()` pairs every arm against every other; `--anchor-binary`
records per-case digest equality; the trace analyzer runs inside `fight()` before `runner.prune_exports`;
`--jobs 4` while plan 025 runs. Cases: development maps 901–930 × seeds 107–109 (90 per arm).
Arms: `legacy` (frozen baseline), `imitation` (schema 2), `continuation` (`seed24/initial.policy`,
schema 3, same weights), `c-nokeep`, `c-noclear`, `c-nokind`, `c-closure` (all three off; must
reproduce imitation per-case outcomes). ~630 battles ≈ 35 min on 4 slots.

**Stage 2c — analyzer** `tools/friendly_fire_trace.py`: per same-team Hit (`events.jsonl`: time,
actor, target) join the evaluation frames (`evaluation.jsonl`: id, position, action, task, squad, order,
goal, route) at/after the hit and `shots.jsonl` (owner, impact_time, aimed_enemy, aimed_point,
suppressive, moving_fire) and, when present, `decisions.jsonl` (victim/shooter squad's last committed
decision age, KEEP within 30 s, family). Non-exclusive tags: same/cross squad, victim moving, victim
recent commit <2/5/15 s, victim after KEEP, shooter moving fire, shooter suppressive, victim near aim
point. Rates per 100 soldier-minutes per tag; unit test on a synthetic three-frame export.

**Stage 2d — decision rule.** (1) The guard must replicate (continuation fails, imitation passes) on
901–930; otherwise rerun 1101–1125 with `--keep-exports` for tracing only and report as unreplicated.
(2) `c-closure` must equal imitation per case; otherwise a fourth schema-3 difference exists (check
the 31/32 action limit, column 96, sink effects) before attribution. (3) A switch is the cause when its
single-switch arm passes, its paired delta on `friendly_hits_per_100_soldier_minutes` vs continuation
has a 95% interval entirely below zero, the other two include zero, and the analyzer tag it removes
accounts for most of the excess. Interactions → pairwise arms.

**Stage 2e — repair (one switch, off = identical digests).** Owner by cause:
- R1 interface/cadence (`ManeuverSim.cpp:549`, `CommandSim.cpp:895–911`): keep the commit clear but
  keep the 1 s assessment cadence for a bounded window after a schema-3 commit (`cmd.committedAt`), or
  constrain KEEP legality near other squads' known waypoints (`friendlyApproaches`).
- R2 movement lane (`ManeuverSim.cpp:366` candidate penalty; `TacticalRouteSim.cpp` `blockedLanes` →
  `cost.lanes`): add received fire lanes from `leader.deliveries` (origin→target, ≤6 s) to the lanes
  the planner avoids. Affects Legacy both teams: Jordan allows this directly → re-baseline the 40
  references and re-root loop lineages; record in the log.
- R3 hold-fire (`BattleSim.cpp:460–514 FriendlyFireRisk`): extrapolate ally tracks beyond 1.5 s with
  the existing widening term, or carry the squad's own committed route into `teamPlan.friendlyAssaultLanes`
  for Legacy. Soldier-owned knowledge only.
Verification: off → digests identical (schema-3 ablation cases, 40/40, 3/3); on → guard passes on
901–930 with the paired interval, no other v7 guard regresses, full gates; then the untrained
continuation passes every guard ("interface baseline clean") before any learning is judged.

---

## P3 — Rollout cost measurement, then native sampling (finding 5a)

**Agent brief: "rollout-measure" (small).** Scratch build `.local/lab/battle-lab-scratch`:
`tools/neural_worker.h` accumulates time inside `WorkerLine()` in the action callback and adds
`policy_wait_seconds` to `end` (additive; protocol stays 1). New `tools/neural/measure_rollout.py`:
12 development cases, greedy, comparing (i) CLI `--neural-model` alone and 8-wide, (ii) 1 worker,
(iii) 8 workers in one process, (iv) 8 processes × 1 worker; per-battle wall, wait share, children CPU;
greedy decisions/winner/time must match across paths. Run on the free half now; repeat when plan 025
ends. Decision: wait share ≥30% at the intended 16 workers → P3b; <15% → one process per worker only.

**Agent brief: "native-sampling" (P3b, after the decision; protocol 2).** Files: `SquadPolicy.h/.cpp`
(`PortableExp` — fixed-order Cody–Waite reduction + Horner polynomial in double, no FMA;
`SquadProbabilities`, `SquadSample`, `SquadLogProb`), `Stats.h/.cpp` (export `DecisionHash` from the
splitmix `Mix` chain; battle `Random` untouched), `tools/neural_worker.h` (hello `protocol:2`; RESET
adds policy path, digest, temperature, sampling seed, greedy; loads via `LoadSquadPolicy`, keeps
`config.neuralPolicy` null so the digest fold stays protocol-1 identical; emits `chosen`, `log_prob`,
`logits`, no ACTION wait; `action_hash` unchanged), `tools/neural/worker.py` (protocol 1 or 2; batched
`log_prob`/critic after the episode; `finish`/`advantages` unchanged), `ppo.py`/`authority.py`
(`save_actor` to `current.policy` per iteration; pass path/digest), `probe.cpp --sample`,
new `tools/neural/check_sampling.py`, `tests/neural_tests.h`. Tests: bit-exact `PortableExp` vector
on Linux and Windows; probabilities vs `distribution()` <1e-5 on the 2,000 recorded decisions;
greedy protocol-2 episode reproduces protocol-1 `digest`/`action_hash`; greedy rollouts through both
paths give byte-identical PPO checkpoints (sampled ones cannot, different generators — compare
per-iteration entropy/argmax/return distributions instead); checkpoint identical for any `--jobs`.
Cut-over only after plan 025 finishes.

---

## P4 — Schema 4: timing authority (finding 1) and map view (finding 3)

Built on `.local/lab/battle-lab-v4`; all new behaviour gated by `Config::policySchema` (0 = current
behaviour; 4 = new rows/raster), set by a schema-4 model, `--policy-schema 4`, or the worker RESET.
Old models: schema 2/3 load into wider zero-filled arrays, `SquadLogit` loops `f < policy.features`,
the `now` head is never legal for schema<4, `DigestCore` folds `policySchema` only when non-zero →
every existing digest unchanged. Recording-only runs (`--record-squad-decisions`, `train.py`) stay
schema 2/3 unless opted in.

**Stage 4a — plumbing (agent "schema4-core").** `SquadPolicy.h/.cpp` (`SquadFeatureCount` 97→128,
`SquadTimingCount=2`, raster constants 16×16×8 cells of 6 m, `features`/`heads`/raster weight blocks,
loader header `ARMY_SQUAD_POLICY 4 128 32 <cand> 128 16`, `SquadRasterEmbedding`, two-head
`SquadLogit`, `SelectSquadAction` over flat index `row*2+timing` with `legalNow`, first legal flat index
on ties), `BattleSim.h` (Config, `SameConfig`), `BattleSim.cpp:1174–1183` validation, `Diagnostics.cpp`
(digest fold, manifest `policy_schema_requested`), `tools/battle_cli.cpp`, `BattleGameMode.cpp`,
`tools/neural_worker.h` (hello adds `max_schema:4`; RESET optional trailing schema token),
`tools/neural/actor.py` (`Actor(schema)`, `migrate` schema 3→4 zero-init, `pack` returns raster,
`distribution` over 64 flat logits, critic input + pooled raster), `worker.py`, `probe.cpp`,
`check_export.py` (RASTER block), `scripts/build-train-lab.sh --output`, tests (`neural_tests.h`:
loader accept/reject, bitwise schema-3 logit equality after zero-extension, flat tie-break, protocol-1
RESET unchanged; `test_neural_rl.py`: migration preserves logits, hex round trip). Capture a schema-3
replay digest of `models/squad/plan024-legacy-rl-v1` before any change and add it to the gates.

**Stage 4b — "go now" (agent "go-now", serialised after P2 on `ManeuverSim.cpp`).** Legality
`legalNow[row]` only when `policySchema>=4`: HOLD never; KEEP iff KEEP legal; candidates iff
`mobile>=2`. Selection: `timing=flat%2`, `row=flat/2`. At 503–518 skip `support_wait` and `preparing`
when go-now. Commit sets `cmd.policyRelease=true`, `policyReleaseUntil=maneuverUntil`; receipt
`committed_now`. Gates honouring the flag (no-ops when false): `ManeuverSim.cpp:276` suppresses the
`(!support && moveExposure>=.2f)` term only (fire `crossingPressure>.72`, `refusals>=2` and the
`maneuverUntil` deadline still pause); `CoordinationSim.cpp:422` `coveringReady = policyRelease ?
time-boundStarted>=2 : <current>`; `PauseSquadMovement` and destination-reached clear the flag;
chained segments keep it. `ppo.py` stats: outcome shares incl. `go_now_share`. Tests: always-now
callback → `committed_now>0`, released bounds without `CoveringPath`, no `MoveBlock::Support` pause
during release; never-now callback under schema 4 → lean digest identical to the schema-3 external run
(head and flag inert unless chosen); `policySchema=0` → 41/41. **Authority measurement before any
training:** extend `tools/neural/authority.py` with `never-now`, `always-now`, `random-now` arms on the
90 development cases; the paired win-minus-loss spread is the authority metric.

**Stage 4c — map view (agent "map-view").** Grid: global 6 m cells anchored at `(-halfWidth,-halfHeight)`,
map-axis aligned (Azure attacks +x; no rotation), 16×16 window around the rifle-group origin, off-map
cells flagged. Channels (0–255): blocked fraction; max obstacle height; cover-position count; known
enemy confidence (`WithTracks` contacts, `known` only); known automatic weapons; `FireDanger` from
`leader.fireAreas`; friendlies (own squad + `leader.allies` age <10 s); platoon geometry (other squads'
waypoints, mission, platoon order). Static channels cached per `map.revision` on the leader's `knownMap`
(pattern of `CoverPositions`, `EnvironmentSim.cpp:148`); dynamic channels rebuilt per decision. One
raster per decision in JSON (4,096-char hex, ~4 KB); per-row samples at destination (8), 3×3 mean (8),
first-bound midpoint (8), origin offset (2); columns 97–100 reserved (phase, bound age, released,
seconds since consult). Network: 4×4 integer average-pool → 16-unit ReLU embedding computed once per
decision and added into the 32-unit hidden layer of every row. Files: `BattleSim.h` (Map raster cache),
`EnvironmentSim.cpp` (static builder), new `Sim/SquadRaster.h/.cpp` (must compile in Unreal and MSVC),
`ManeuverSim.cpp` (build after 332; sample in 470–482), `SquadPolicy.cpp`, Python/probe/tests. Tests:
knowledge boundary (unreported enemy at 20 m → enemy channels zero; report → correct cell; fire area →
channel 5); cache invalidation on `RemoveObstacle`; determinism; native pooled/embedding vs numpy;
zero-extended schema-4 model reproduces schema-3 replays bit for bit with `policySchema=4` and the
raster built (raster construction is read-only). Parity: argmax agreement mandatory; max-abs-error
1e-5 target, 1e-4 acceptable if documented.

**Stage 4d — training default mode 30.** No simulator change; measure planner seconds per decision
(mode 30 multiplies route evaluations) on the v4 binary before adopting. Mode 0 stays for parity.

**Deferred (designed, not built): mid-bound consultation** — CONTINUE at index 1 during an active
bound every ≥6 s, one abort/redirect per bound, `phase` column; only after 4b's authority measurement
justifies its planner cost.

---

## Verification and readout

- Every package: the recurring gates; the agent's own differential tests; Fable's line review.
- P1: `tests/test_project_docs.py` passes; loss check counts recorded in the log.
- P2: the switch parity anchors, replication, closure, isolation intervals, and (after repair) the
  clean-interface check: untrained continuation passes every guard on 901–930.
- P3: measurement report with wait share per configuration; if P3b built: sampling parity on Linux and
  Windows, greedy-path checkpoint identity, `--jobs` invariance.
- P4: 40/40, 41/41, the captured schema-2 (`2372919768571971356`) and schema-3 replay digests,
  `check_export` on both platforms for schema-2/3/4 models, Unreal build; then the authority arms.
  Only after that does a schema-4 training run get designed (separate plan, fresh reserved maps).
- Plan 025 result is read on its own terms when it finishes; nothing here restarts it.

## Open items for Jordan (defaults applied unless he objects)

- Reserve maps **1201–1230** as the next unopened promotion range (used by nothing in this plan).
- Raster 8-bit hex (~4 KB/decision) rather than 4-bit; parity threshold 1e-5 target / 1e-4 accepted.
- P3b native sampling go/no-go threshold: wait share ≥30%.
- Historical plans that say "prepend to AGENTS.md/CLAUDE.md" keep their text; the new rule redirects.

## Jordan's follow-on instruction (22 September 2026)

"You can use all cpu now, once you are done implementing, if the Neural Net AI looks promising keep
running to refine it." The machine is available at full capacity (neural cap raised from 8 to 12 while
the P2 ablation uses 4; back to 15–16 when it finishes). After P1–P4 are implemented and verified, the
schema-4 policy gets training runs; if development checks show promise (clearly above its imitation
start and consistent across seeds), keep iterating on it (further runs, settings and candidate/authority
refinements within this plan's rules) without waiting for a new instruction. Promotion to the playable
default still needs Jordan's replay approval.

## Overnight autonomy (Jordan, 22 September 2026, before sleeping)

"Make any changes to the neural net training to be improved based on whatever findings you find on
these runs." Authorises changes to training settings, rollout tooling, candidate/authority exposure
and follow-on runs, decided from measured evidence (plan 025 curves, P2 diagnosis, P3 measurement,
P4 authority arms), each recorded here and in `docs/PROJECT_LOG.md`. Unchanged: the plan's hard
constraints, knowledge boundary, conduct guards, reserved maps, and replay approval for promotion.

## P2 result and decision (22 September 2026, overseer claude-opus-5-5; agent claude-opus-5-5)

Switches, harness and analyzer are built: `.local/plan026/p2-ff/`, binary `battle-lab-ablation`,
source 6530a1cf5897d963.

Gates: lean parity 40/40; anchor 180/180 (with no flags, the ablation binary gives the training
binary's digests); `c-closure` equals imitation on 90/90 cases.

The regression does **not** replicate on development maps 901–930 (90 cases per arm).

| Arm | FF vs Legacy | Guard | W/D/L |
|---|---|---|---|
| continuation | −0.180 [−0.688, +0.332] | pass | 40/9/41 |
| imitation | +0.167 [−0.300, +0.621] | pass | 35/9/46 |
| Legacy | — | — | 48/6/36 |

Pooling these with the 75 held-out rows gives 55 maps: continuation − imitation +0.051
[−0.357, +0.419]. The only schema-3 difference that changes battles is the commit clear
(`ManeuverSim.cpp:549`): switching it off matches imitation in 86/90 cases. KEEP is inert for the
untrained model (column-96 weight 0), and the kind reset changes 5/90 cases. No analyzer tag shows
an excess; Azure-on-Azure hits are *lower* with the clear, −0.463 [−0.888, −0.052].

**Decision: no repair.** The held-out failure is treated as an excursion on that map set. The three
switches stay in the source, digest-neutral, as ablation controls. The friendly-fire guard stays in
every evaluation.

Side note on promise: on 901–930 through the native CLI path, Legacy (48/6/36) beats both neural arms.

## P4b authority measurement (22 September 2026)

`tools.neural.authority --timing-arms`, battle-lab-v4. The imitation model was migrated to schema 4
and chose the destination row greedily; only the timing differed. 90 development cases (901–930 ×
107–109), `.local/plan026/authority-now/`.

| Timing | W/D/L | Paired W−L vs never-now | Team return vs never-now |
|---|---|---|---|
| never-now | 40/9/41 | — | — |
| random-now (50% where legal) | 29/3/58 | −0.31 [−0.59, −0.06] | −0.147 [−0.273, −0.030] |
| always-now | 22/0/68 | −0.50 [−0.78, −0.24] | −0.240 [−0.376, −0.114] |

never-now reproduces the schema-3 greedy result exactly (40/9/41). Go-now was chosen at 12–15% of
decisions.

**Reading.** Timing is a lever with large, significant effect; the destination choice was not (random
= greedy). Blanket release is harmful, so the readiness gates earn their place most of the time. A
schema-4 policy can only gain by releasing selectively.

**Consequence for training.** Initialise the go-now head so the starting policy is close to imitation
while still exploring. `--now-bias` ≈ −0.15 in logit units gives ~5% go-now probability per row at the
calibrated temperature 0.0508 (ln(0.05/0.95)·0.0508 ≈ −0.15).

## Integration (23 September 2026, overseer claude-opus-5-5)

Installed in the main tree: P2 switches, P4a+4b (schema 4, go-now), P4c (map view: `SquadRaster.h/.cpp`),
the tests (`tests/neural_tests.h`), the BattleGameMode schema-4 line, `SquadRaster.cpp` in
`scripts/test-sim.sh` and in `tools/loop/config.py` POLICY_FILES (knowledge-boundary token scan: clean).
Source **422987091a8601ee**. `.local/lab/battle-lab` (byte-identical to v4c) and `battle-lab-train`
(PGO) rebuilt. Pre-integration files and f28 binaries: `.local/plan026/pre-integration/`.

Gates, all pass (evidence `.local/plan026/integration/`):
- full Linux suite; Python tests (system and venv);
- lean parity 40/40;
- drills trace 3/3 plus repeat, digests equal to f28;
- `tools.neural.verify` 41/41;
- 12 recorded training battles f28 vs new: all exact, CPU −0.3% [−0.1, 0.8];
- `check_export` on Linux for schema 2, 3 and 4 (live raster) and on Windows MSVC for schema 3 and 4;
  max error ≤ 2.9e-6, 0 disagreements, pooling bit-exact;
- Windows lab build; Unreal build.

## P3a measurement and decision (23 September 2026; agent claude-opus-5-5)

`.local/plan026/p3/` (scratch `policy_wait_seconds` field, `measure_rollout.py`, `results/`). Twelve
development cases, greedy imitation, 741 decisions per battle.

| Layout | Battle s | Wait share | Throughput vs native, same width |
|---|---|---|---|
| 1 worker | 7.22 | 5.0% | −1% |
| 8 workers in 1 process | 15.53 | 47.4% | −43% |
| 8 processes × 1 worker | 9.10 | 5.7% | −1.5% |
| 3 processes (6/5/5), 16 total | 13.02 | 8.0% | −9.6% (about 5 points is the fixed-share tail) |
| same layout, training binary | 12.56 | about 9% | −13.6% |
| 16 processes × 1 worker | 12.88 | — | −1.4% |

The cost is GIL contention inside one Python process, not the round trip: 0.49 ms per decision
uncontended. **Decision: P3b (native sampling) is not built; keep protocol 1.** The cheap
improvement, if throughput matters later, is single-worker rollout processes (Python only), worth about
10–14%. Deferred: the schema-4 run starts now on the existing layout.

## P3c process rollout pool (23 September 2026; agent claude-opus-5-5)

Added `ProcessPool` in `tools/neural/worker.py` (same `run(tasks, fn)` contract as `ElasticPool`, one
spawned child per worker, capacity followed between battles) and new options:
- `--rollout-processes` in `ppo.py` and `authority.py` (off by default);
- `--max-jobs` in `ppo.py`, to cap below `.local/neural/max_jobs`.

Proofs:
- thread and process paths give byte-identical `squad.policy`, `trainer.pt` and rollout arrays, for
  schema 3, schema 4 (with map view) and 2 iterations;
- the thread path equals the pre-change `ppo.py`;
- capacity walks 1→3→1→2 mid-run with an identical checkpoint;
- no processes are left behind after errors or SIGINT;
- 158 Python tests pass.

Each child uses about 320 MB, so ≈4.8 GB at 15 workers. The gain is not visible at 3 workers; P3a
predicts about 10–14% at 15. Use it from the next training run. Evidence: `.local/plan026/p3c/`.

Side finding: `peak_memory_bytes` includes the parent Python process's memory at the time the
simulator starts, so it overstates simulator memory.
