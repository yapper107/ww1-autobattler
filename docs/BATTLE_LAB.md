# Battle laboratory

## Cognition experiment

The implemented upgrade and its scenario evidence are recorded in
[AI_COGNITION_IMPLEMENTATION.md](AI_COGNITION_IMPLEMENTATION.md).
`--cognition` implies foundations. It supports the normal maps (encounter 0) and experimental encounters 5–17.
Use 8 for integration, 9 for delayed platoon knowledge, and 10 for a physical
route obstruction applied through geometry invalidation. Encounters 5–7 retain
the existing strict tactical layouts and unchanged evaluator.

```bash
./scripts/test-sim.sh --cognition
./scripts/battle-lab.sh --cognition --encounter 10 --seed 107 --seconds 70 --out .local/cognition-obstruction
python3 tools/investigate_cognition.py .local/cognition-obstruction/latest.json --check-obstruction
python3 tools/run_route_matrix.py --cognition --out .local/cognition-matrix --check
./scripts/launch.sh -ArmyCognition -ArmyScenario=8
```

Paired configurations can set `--report-delay`, `--full-vision`, `--judgment`,
`--risk`, `--adaptability` and `--estimate-bias`. Manifests and exact reruns preserve
them. Profile knobs set bases; stored actor profiles include deterministic variation.
`method_candidate`, `method_accepted`, `method_stage`, `method_stage_advanced`,
`method_safety_override`, `method_resume`, `method_reconsidered` and
`method_exhausted` expose the accepted method lifecycle. Parent goals and method
instances have distinct IDs. Mental-map regions separate unseen-force allowance
from the count supported by sightings. A stale report never gains a fresh timestamp
just because another commander forwards it.

The overlay reads recorded actor frames. Cyan marks field limits (occlusion still
applies); amber outlines remembered uncertainty. Visible world units remain
explicitly labeled observer truth. This mode is not promoted to normal gameplay.

## AI foundations experiment (2026-09-14)

`./scripts/battle-lab.sh --foundations --encounter 8 --seed 107 --seconds 90 --out .local/foundations`
runs the first perception/belief/goal slice. It is opt-in, mutually exclusive with
recovery, and rejected outside encounter 8. The scenario reuses the controlled MG
terrain/deployment. `--estimate-bias -1` or `1` shifts the seeded actor judgments
toward under/overestimation without changing observations. Exact reruns restore
both parameters from the manifest.

`./scripts/test-sim.sh --foundations` tests component boundaries, real command
transport, changed goal orders, and integrated simulation/trace determinism.
`python3 tools/investigate_foundations.py .local/foundations/latest.json --soldier 5 --time 30`
prints the latest recorded mental-map snapshot at or before that time and the
selected actor's goal changes. A missing snapshot means no recorded evidence,
not an empty battlefield. Mental-map snapshots are sampled every five seconds;
the decision code derives the map from current local memory when needed.

`mental_map` records structured `look`, `estimate_bias`, and `regions`, including
raw observation count, remembered MG count, heuristic low/high estimate,
interpreted strength, confidence and original observation time. Missing regions
are unknown. `goal_feedback_sent`, `goal_feedback_received`,
`goal_feedback_ignored`, `goal_alternative_applied`, and `goal_observe` connect
received task status with the parent's subsequent order. `goal_intent` records
identity, parent, purpose, objective, expiry, status and feedback observation time
where applicable. Observer truth never supplies these belief fields.

The existing strict flanking evaluator is unchanged. Foundations tests are not
a new 8/9 tactical pass. See [AI_FOUNDATIONS_PLAN.md](AI_FOUNDATIONS_PLAN.md) for
scope, assumptions, attributed reviews and deferred work.

The simulator exports evidence for offline AI investigation. Use the analyzer before interpreting movement counts or proposing tactical changes. Visual review is still useful for animation and presentation; it is not required to inspect tactical causes.

## Run and investigate

From the WSL repository:

```bash
./scripts/battle-lab.sh --seed 107 --out .local/battles
python3 tools/analyze_battle.py .local/battles/latest.json --write
python3 tools/analyze_battle.py .local/battles/latest.json --soldier 1 --from 40 --to 90 --why-left-cover
python3 tools/analyze_battle.py .local/battles/latest.json --squad 0 --from 40 --to 90
python3 tools/analyze_battle.py NEW_RUN --compare OLD_RUN --write
python3 tools/rerun_battle.py OLD_RUN --soldier 1 --from 40 --to 70
```

IDs are zero-based: soldiers 0–63 and squads 0–7. `battle-lab.sh` compiles the runner; subsequent runs can call `.local/lab/battle-lab` directly. The CLI supports `--seed`, `--seconds`, `--doctrine 0|1|2`, `--ember-doctrine 0|1|2` (balanced/cautious/aggressive), `--approach 0|1|2` (centre/north/south), `--no-mg`, `--repeat`, `--out`, `--no-trace`, and `--detail` with soldier/squad/time filters. Filters select detailed alternatives; standard transitions remain available for context.

`rerun_battle.py` restores all gameplay settings from the manifest and warns when the executable build differs. Exact reproduction requires the same build and platform; Windows and Linux floating-point results can differ. Keep archived executables when investigating a previous build.

Normal Unreal battles automatically save runs under `Saved/BattleReports` in the playable mirror. Point the analyzer at that directory's `latest.json`. Identical-setting replay reuse does not manufacture a new simulation or overwrite an existing report.

## Evidence files

- `manifest.json`: schema, build, complete gameplay settings, outcome, and gameplay digest.
- `trace.jsonl`: decisions and execution changes plus five-second status heartbeats. IDs link order issue, receipt, activation, and the active squad plan. Rejected/deferred proposals are recorded separately from the accepted plan.
- `events.jsonl`: existing contact/report/combat/command events.
- `geometry.jsonl`: initial geometry and each applied revision, including obstacle IDs, cover IDs and sources, dimensions, and building metadata.
- `profile.json`: simulation stage durations, inclusive pathfinding time, and query counts. Navigation is included in stage durations; do not add it again. Profiling values are not deterministic gameplay state.
- `summary.md`: basic run description. `analyze_battle.py --write` adds `analysis.md` and `analysis.json`, or `selection.*` for a filtered investigation.

Trace rows distinguish received order destinations (`order_goal`) from the soldier's actual immediate execution goal (`goal`). Cover changes are distinct from peeking or stance changes. Relevant contact observations preserve their observation/registration times and immediate report source. Actual world outcomes remain separate from the information available to the actor.

Detailed cover decisions record up to three strongest evaluated alternatives, with score and evaluation status, plus the chosen execution goal. An alternative described as scored before reachability is not a proven valid path. Retaining useful cover is also recorded as a candidate. The recorder never chooses actions, consumes random numbers, or provides information to policy code.

## Reading findings

The analyzer reports cover changes/returns, order reversals, aim interruptions, moving/aiming/firing/suppressed/blocked/waiting time, unsupported movement, exposed inactivity, obsolete support, and stalled searches. It reconstructs timelines and links findings to trace IDs. It labels suspected causes as hypotheses.

A cover move is not counted as unexplained if the trace records a changed order, changed geometry, a new/moved threat, or loss of protection/heavy suppression. Explicit passage yielding is a known dependency rather than unexplained search inactivity. These are diagnostic definitions, not proof that every unflagged decision is intelligent.

For an episode: read the active plan and order chain; inspect the knowledge at that time; check the unmet prerequisites; then inspect movement, firing, and protection afterwards. Compare identical fixed seeds and settings, while allowing that an AI change can alter the entire subsequent engagement. The reports should expose remaining weaknesses rather than hide them to meet a metric.

## Geometry and optimization contract

Call `PrepareGeometry` after constructing a map. Use `RemoveObstacle`, `ReplaceObstacle`, or an explicit `InvalidateGeometry` after batch edits. Prepared geometry must not be edited silently. Revisions invalidate spatial, navigation, and cover catalogs. Obstacle IDs are monotonic; derived cover IDs remain tied to their source and are not reassigned when vectors reorder. Removing/replacing a window sill invalidates its associated window cover.

Optional `GeometryEdit` inputs to `Simulate` are applied at tick boundaries and recorded in `geometryVersions`; `GeometryAt(record,time)` selects the corresponding geometry. Nearby destroyed shelter and blocked movement can invalidate local execution without broadcasting enemy information. This is the revision/replay foundation; weapon-driven destruction, structural collapse, rendering destruction, and falling-through-floor physics are future work.

A spatial hierarchy filters obstacles before the original exact collision tests. Navigation working arrays are reused with generation markers. The optimized static geometry layer was checked against the previous simulation on ten seeds and against brute-force intersections. Cache/query state and diagnostic timing do not participate in AI policy.

## Validation and benchmarks

```bash
./scripts/test-sim.sh --focused
./scripts/test-sim.sh
python3 tests/test_analyzer.py
./scripts/build-lab-windows.sh
```

The Windows runner is built in the mirror's `Saved/BattleLab`; run it with `--repeat 2` for first/repeated-process measurements. Separate fresh simulation from cached replay reuse. Record simulation, export, total time, peak process working set, and trace mode. Peak memory is a process high-water mark, not live memory for just one subsystem. The runner reserves a larger stack because the engine-independent simulation uses substantial fixed-size state.

Focused checks include geometry revisions and stable IDs, window-source invalidation, exact spatial-query equivalence, the blocked navigation-start connector, trace on/off/detail equality, causal order links, and productive cover retention. Full tests retain projectile, perception, command, cover, wounded, building, passage, and determinism regressions.


## Controlled MG encounters and interrupted moves

`--encounter 4` holds an eight-person defender against sixteen attackers for up to the full six minutes. `--encounter 1` selects the MG engagement fixture, `2` mirrors it, and `3` obstructs the flank route. For example: `./scripts/battle-lab.sh --encounter 1 --seed 107 --seconds 120 --out .local/mg-encounters`. The normal game map remains the default when omitted. The manifest records the encounter ID and the rerun command restores it. `./scripts/test-sim.sh --encounters` runs the three-layout/three-seed matrix.

`movement_paused`, `movement_resumed`, `movement_revised` and `movement_abandoned` distinguish a retained objective from a cancelled/reissued one. Trace knowledge includes received movement-failure reports and their order IDs. The maneuver analyzer follows available group members, reports casualties and actual movement, and does not equate waypoint completion with tactical success. Support and pressure improvements must persist eight seconds before a paused movement resumes. Integration samples can specify `./scripts/launch.sh -ArmySmokeTest -ArmySeed=108 -unattended` to exercise building presentation.


## Initiative evaluation

Build once, then generate the four fixed full battles (100, 103, 107, 108) and three fixed-defender cases:

```bash
./scripts/battle-lab.sh --seconds 1 --out .local/build-check
python3 tools/run_ai_evaluation.py --out .local/initiative-evaluation --defender
```

`--evaluate` on the CLI exports 0.2-second observer samples after simulation, separately from standard decision tracing. `tools/evaluate_ai.py RUN... --out metrics.json` measures duration-weighted stationary Fire/Hold time without a firing solution, front-line centres and paired survivor displacement every 30 seconds, maneuver assignment time, planner deferrals, and completed spatially useful maneuvers. It uses the leader's initial remembered enemy position, not the enemy's true later location. Completion requires at least two movers traveling six metres and gaining eight metres of closure or fifteen degrees of angle, with half the assigned group within eight metres of the squad waypoint. This allows dispersed individual cover. It does not prove that a tactical objective was achieved; fixed-defender elimination is reported separately.

The evaluator's definitions and synthetic tests are shared across baseline and final runs. Short test fixtures now run for up to 360 seconds. The old one-flank-hit-in-nine condition remains a printed diagnostic, replaced as acceptance by group closure in multiple scenarios and elimination of all three fixed defenders. No claim of reliable flanking should be inferred from elimination alone.

The independent doctrine setting is saved in manifests and replay configuration. To test asymmetric doctrines, pass `--ember-doctrine 2` to the CLI or evaluation runner. In Unreal preparation, Azure and Ember have separate doctrine buttons.

Candidate comparisons, directive receipt, movement pauses and revised plans remain in the standard trace. Knowledge entries include original observation time, track confidence, uncertainty radius, last observed firing, and clearance time. `covering_fire` entries identify the reporting shooter, intended enemy/position and recent physical arrival times. Covering fire concerns the dominant known position overlooking the specific route; other known enemies still affect risk and individual safety.

## Tactical route pass

See `docs/TACTICAL_ROUTES.md` for route/path evidence, the trench selector, geometry knowledge boundaries, strict second-angle evaluation, and native benchmark commands. Existing analysis metrics and their denominators are retained.

## Investigating engagement gates

`python3 tools/investigate_engagement.py RUN --out gates.json` streams a run's accepted routes, execution events, physical arrival/firing/angle gates, and per-soldier path recovery evidence. `RUN` can be the archived directory or its `latest.json` pointer. Instantaneous maximum gate counts are diagnostic; `evaluate_routes.py` retains the separate continuous three-second, two-mover success criterion. Do not report those maxima as successful flanks.

`tools.compare_route_pass` now rejects mismatched seed sets. It also reports `observer_holds`: duration-weighted stationary samples with an actual enemy sightline, including the subset with no actor firing solution. This remains separate from the analyzer's nearby-cover heuristic; being far from local cover does not by itself prove an enemy can see a soldier. Observer facts never feed policy.

For performance-only changes, preserve the preceding executable/source and run:

```bash
python3 tools/verify_gameplay_parity.py --binary .local/optimized/battle-lab \
  --reference .local/reference --out .local/parity
```

The reference directory contains `evaluation.json` and its archived runs. The command replays each manifest's configuration and fails if any authoritative gameplay digest differs. Diagnostic event content can differ independently; geometry IDs, caches, physical behavior and authoritative replay must remain reproducible.

## Recovery task-contract experiment

`--recovery` enables the experimental controller only for encounters 5–7. It is a gameplay policy flag, independent of tracing; the manifest and rerun command preserve it. `tools/investigate_tasks.py RUN --out tasks.json` exports task identities, status transitions, receipt counts, precedence evidence and unfinished execution. Battle-ended failures are explicitly incomplete. See `RECOVERY_IMPLEMENTATION_STATUS.md`; the latest acceptance status is recorded there and normal gameplay does not enable this controller.

## Recovery gate follow-up

See `RECOVERY_GATE_RESULTS.md` for source `d220f8cc8bfa343b`: pinned fixture roles, delivered-round histories, local occupation, wider slot queries, route-preserving re-slotting, and current screening. Final layout 5 is 1/3 on Linux and Windows. `run_route_matrix.py --recovery --check` now requires all three layout-5 cases before running layouts 6 and 7. The evaluator is unchanged; normal gameplay remains on the preceding policy.

## Recovery destination correction

See `RECOVERY_DESTINATION_FIX.md` for source `f2424236795f5531`: route objectives use assigned firing-peek centroids while navigation retains shelters. Layout 5 now passes 3/3 on Linux and Windows with identical prior gameplay frames and an unchanged evaluator. The full Linux matrix passes 5/9, below its 8/9 target. The recovery controller remains fixture-only.

## Third recovery pass: rejected behavior result

See `RECOVERY_THIRD_PASS_RESULTS.md` for the staged Cause A–E measurements. The combined candidate passes 2/9, below the preceding 5/9; it remains fixture-only. `tools/run_recovery_pass.py --out DIR --layouts 5 6 7` runs every requested case and saves gate audits without early stopping, so regressions remain measurable. This investigation runner does not change the evaluator or the separate acceptance gate.

## Decision-to-action contracts and acceptance

See [AI_DECISION_LOOP_RESULTS.md](AI_DECISION_LOOP_RESULTS.md) for current source,
physical scenarios and the unaccepted 7/9 result on Linux and native Windows.
Cognition remains an explicit `--cognition` / `-ArmyCognition` choice.

`completion`, `execution_method`, `execution_stage`, `execution_generation`,
`execution_deadline` and `execution_paused` describe the actual task contract.
`peek`, `sector`, `coverage`, `support`, `support_squad`, `support_deployed`,
`support_useful`, `movers` and `failed_attempts` expose the accepted method's
viewpoint, bounded inspection evidence, dependency and failure history.
An occupied position does not certify observation or useful fire. Support can
transition out of Done when its delivered-fire evidence expires. Pausing a route
preserves its assignment ID; a replacement member receives a new generation.

`python3 tools/run_ai_acceptance.py --out DIR` runs all nine frozen 360-second cases
and returns failure below 8/9. It checks the original evaluator's hash. Its
`--binary` option accepts the native Windows executable from WSL. The separate
held-out mode refuses to run until the exact build has a passing development gate.
Held-out seeds 110–119 remain untested. Never treat elimination alone as a passed flank.

`--seconds` is an exact fixture limit; normal preparation uses the duration slider.
Manifests include the limit and controller. `tools/rerun_battle.py` resets controller
selection before restoring recorded flags, preserving old legacy configurations.

## Nine-case completion follow-up

[Current results](AI_NINE_GATE_RESULTS.md): source `8a5b385e04c22185` passes the
unchanged original matrix 9/9 on Linux and Windows. Held-out seeds 110–119 score
10/10, 7/10 and 5/10 per layout on both platforms, so cognition remains opt-in.

Encounter 17 isolates cross-squad support deployment behind a long obstruction:

```sh
./scripts/battle-lab.sh --cognition --encounter 17 --seed 107 --seconds 70 --out .local/support-deployment
./scripts/test-sim.sh --decision-loop
```

Its durable passive target prevents early elimination from replacing the
coordination test. Navigation, firing, delivery, communication and completion use
production code. The trace's `support_progress` object records the reporting gun,
assignment, route, stage, original status time, report time and deadline.
`support_wait_deadline` is the accepting leader's bounded wait. Deployment status
does not count as useful fire. `method_support_deploying` identifies an accepted
wait; `method_support_sector_changed` explains an updated final-approach request.

## Generated family baselines (plan 014 Phase 1)

`F1` generates a defended position from a separate splitmix64 stream. Geometry,
masked deployments and support-weapon choices depend only on `(F1, genSeed)`;
`--seed` controls battle reactions and dice. The initial armies have no mutual
line of sight, defenders occupy local cover, and validation checks connected
paths to the objective, clear corners, masks and bounds. Scenario identities
remain separate from encounter IDs. F2/F3 are reserved, not implemented yet.

```bash
./scripts/battle-lab.sh --legacy-ai --generated F1 --gen-seed 1 --seed 107 --seconds 360 --evaluate --out .local/family-example
python3 tools/run_family.py --family F1 --gen-seeds 1-30 --seeds 107-109 --controllers legacy candidate90 --jobs 2 --out .local/f1-dev
python3 tools/report_family.py .local/f1-dev/family.json --out .local/f1-report.json --markdown .local/f1-report.md
./scripts/test-sim.sh --generated
```

The runner uses a process pool capped by available memory (1.5 GiB budget per
worker, at most four), saves `family.json` after every completed or failed case,
and resumes an identical build/draw/metric configuration without rerunning its
recorded cases. Failures remain visible and yield a failing exit; use a new output
root for a corrected build. Partial reports show actual counts rather than treating
missing cases as successes. Each case has its own export directory and exact argv.

Development draws are genSeeds 1–30 crossed with battle seeds 107–109. For a future
candidate validation pass, `--validation-salt TEXT` draws 20 distinct keys from
SHA-256 of source fingerprint (without platform suffix), family, salt and index. Record the salt, run that candidate once,
and use a new candidate-derived draw next time. This does not open the frozen
historical authored-map validation seeds.

`evaluation.jsonl` schema 2 adds explicit identity, stance, health, suppression,
sector, order serial/issue time and platoon order fields. Elements, roles and areas
are null for legacy/candidate90 because neither controller has drill elements.
`shots.jsonl` schema 1 records emitted and impact times, shooter, aim, endpoints,
impact/hit, target, suppression and support-weapon identity. These are post-battle
observer exports, never policy inputs. `scenario.json` records the generator's
parameters, masks, positions, obstacles and independent scenario digest. Manifests
and `rerun_battle.py` preserve family and generator seed.

`family_metrics.py` reuses the accepted Phase 0 spatial/exposure denominators,
adds actual shot counts, gun-silence episodes and frame-based command statistics.
A missing drill metric or missing eligible episode is null with a reason, not zero.
The report gives count, mean, median and a 95% percentile interval for the mean
from 2000 fixed-RNG bootstrap resamples. It resamples generated-map clusters,
keeping repeated battle seeds together, and pairs deltas only on identical
`(family, genSeed, seed)` keys. The JSON retains every run, failure and unavailable
reason. Fighting intensity on both playable maps still gates later controller
changes; family baselines alone do not promote a controller.

### Phase 2 drills measurements

Use `tools/run_family.py --controllers drills` with the same F1 development draws,
then pass both its `family.json` and the Phase 1 baseline `family.json` to
`tools/report_family.py`. Paired keys remain `(family, genSeed, seed)`. The runner
now checkpoints an engagement guard: three zero-shot results in any fixed ten-draw
block per controller stop new scheduling; active workers finish and are disclosed.
Pending cases are not scored or silently omitted. Controller selection is recorded
as `drills_policy` and preserved by `rerun_battle.py`.

Drills evaluation rows include received element/area assignments, the current drill
instance/start, movement flag, squad leader and whether its sector names a known
threat. Offline area compliance and contact latency consume those fields. Shot
roles use the shooter's recorded assignment at shot time. They are diagnostic
observer exports, never actor policy inputs. Phase 3 conformance metrics remain
unavailable until those drills exist.
