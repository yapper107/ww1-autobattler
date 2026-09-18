# Plan 015 Step B — area-fire continuation, stopped at the mechanism gate

## Result

**Step B remains incomplete.** Final source `aea3516355ab7f4a` passes **26/28 selectors**. Q02, Q04 and restored D05 pass. Q03 still has no lift, and D09's protected-pause assertion regressed. All fixtures and assertions remain unchanged. The three further local attempts authorised by [the Step B2 review](../../plans/015-step-b2-fable-review.md) are exhausted.

**Required stop applied: Steps C, E and D are unstarted.** No distribution, leader-profile comparison, replay UI preparation, Windows build or Unreal build was run. Changes remain uncommitted. Legacy remains the playable default; this is not a promoted or replay-ready build.

Step A remains fully accepted on its own source. Its 40 authored and three trace-parity results are not represented as verification of this later Step B source. Previous Step B reports and their traces are preserved in `.local/plan015/step-b/review-entry/` and `review2-entry/previous-report.md`.

## Fingerprints and attempts

All artifact paths below are relative to `.local/plan015/step-b/` unless stated otherwise.

| Point | Fingerprint | Result |
|---|---|---|
| Entry | `357c4f58505ba5fe` | Previous stop: Q03/Q02 and D05 fail |
| Allocation restoration, before area-fire changes | `47efe6eefca9be87` | D05 passes unchanged; no bisect needed |
| Further attempt 1 / overall attempt7 | `07e77f092035d52f` | 25/28; Q02, Q03, D08 fail |
| Further attempt 2 / overall attempt8 | `371dba0f77dc0da2` | 26/28; Q03, D08 fail |
| Further attempt 3 / overall attempt9, final | `aea3516355ab7f4a` | 26/28; Q03, D09 fail |

Each numbered attempt preserves simulation/test snapshots, its test and CLI binaries, fingerprint, all selector results, build logs and raw positive/control traces. `review2-summary.json` records results; `review2-simulation.patch` records changes against entry. No distributions ran between attempts.

Before the third Q02/Q03/D05 run, static preflight corrected two details: the tick-level rush cap had to execute **after** soldier decisions, and the timeout recovery had to consume its failed receipt while waiting for buddy permission. The preliminary source `373ece6299dae340` compiled and ran only Q01. It did not run Q02/Q03/D05 or a distribution. Its build logs, fingerprint and explanation are in `attempt9/preflight/`; the final source was recompiled before the selector set. This preliminary compilation is disclosed separately from the three target-scenario attempts.

## Applying the review, in order

### Allocation restoration and D05

Before any area-fire change, restored `Assign` and `SupportPositionReady` to attempt4's behavior, removed the recovery target-height query and conservative crouched-height helper, and kept the explicit gun-or-two-riflemen quorum and exhausted-support reporting.

Command:

```text
./scripts/test-sim.sh --drills D05
```

At `47efe6eefca9be87`, the unchanged D05 output is:

```text
D05 support=1 incorrectly_blocked=0 weak_report=1 latency=3.9
```

It passes again in every subsequent attempt, including final source. The review's conditional bisect was not triggered. `d05-restore/test.log` and `source-id.txt` preserve the initial result.

### Sustained area fire

`SquadDrillSim.cpp` authorises area fire from the squad's own Fixing state plus its own attack or a received Assaulting broadcast for the same objective. It uses the officer's own observations and received reports to decide whether a recently visible target is known; it does not inspect another soldier's enemy-memory array or hidden enemy bodies. Individual shooters still prioritise their own visible targets. The final implementation uses a one-second recent-observation window for the officer's visibility inference; this is an implementation choice, not an exact instantaneous view of every member.

`DrillSim.cpp` carries permission, last-known area and target identity in normal gun-element orders. `CommandSim.cpp` recognises permission changes as amendments. `BattleSim.cpp` reuses the existing requested-area firing path's local muzzle clearance, weapon range, friendly-fire/lane checks, projectile spread and physical delivery. The explicit assault-support contract permits fire at the ordered area after the original contact ages; it does **not** refresh that contact's timestamp or invent a new observation. The machine gun uses the existing sustained-fire cadence, burst pauses and reload cycle. No rounds or delivery receipts are injected.

Existing delivery reports already include area rounds. `SupportEvidence` accepts qualifying rounds within12 m of the objective and retains the existing eight-second no-delivery loss clock. A phase-line receipt lifts through ordinary member orders. New permission state is included in the drills-only digest block. Legacy/cognition do not acquire this permission.

## Local attempts and trace evidence

### Attempt7: the chain reaches a phase line

Q02 now reaches its phase line at **102.05 s**. The fixing squad receives that broadcast at **103.4 s** (trace12567), but its next periodic assessment does not lift until **104.05 s** (12591). The2.0 s phase-to-lift delay exceeds `reportDelay + 1`; the unchanged assertion correctly fails.

Q03 commits both opposing-side assaults. At108.2 s, the leading squad's position query allocates two primary rush points, then `Assign` rejects both as unsafe from the retained objective. Trace23078 selects `(50.67038,-37.846428)`,23079 selects `(43.847225,-34.0667)`, and23080 reports no executable rush. The query's safety check only consulted currently known contacts, while the later execution check still used the retained attack objective. That inconsistency became visible after sustained support let the assault run beyond the original track's lifetime.

D05 and Q04 pass. D08 now reaches the assault line but fails consolidation and reports a longest rush of5.09999 s.

Next changes: wake the normal squad planner on lateral phase-line receipt, as it already wakes for higher-level fire-control amendments; filter rush candidates against the retained own assault objective so an unsafe primary does not hide safer alternatives. These do not add enemy knowledge. Details are in `attempt7/findings.md`.

### Attempt8: Q02 passes, Q03 repeats a waypoint

Q02 passes: phase102.05 s, lift103.4 s, delta **1.35 s**. D05 and Q04 pass.

Q03 no longer rejects both primaries at108.2 s. Instead it repeats alternating bounds around one waypoint until240 s. At160.15 s members17/19 are near `(47.439,-35.972)` and `(45.695,-30.301)`; at162.8 s members20/21 remain near `(37.818,-40.717)` and `(43.695,-33.301)`. The code requires all four within8 m of the waypoint while reserving the forward pair's occupied slots. It does not advance the leading pair to release space.

D08's trace shows a second gap: member4's final bound is interrupted by shelter and receives `Failed: execution timeout` at136.2 s. The final Assault stage does not handle this failed receipt, unlike AttackMove, so it waits indefinitely. The rush cap is also checked only at the soldier's decision cadence.

The last attempt advances route progress from the arrived moving buddy before alternating; the assault-line allocation still synchronises the whole element. It also enforces the existing five-second movement cap each simulation tick and handles final-assault failure: one shorter remaining bound is permitted only after a matching timeout receipt and more than3 m of physical progress; other failures report and return to closure. These are additional implementation repairs prompted by the traces, **not new architect rulings**. The3 m recovery-progress threshold and one-recovery limit are implementation choices. See `attempt8/findings.md`.

### Attempt9: D08 recovers; Q03 and D09 remain failures

Q02 passes earlier: phase **78.65 s**, lift **80.0 s**, again1.35 s. D08 passes with consolidation at **161.55 s**, Reorganise at **167.55 s**, longest observed rush **4.95001 s**, physical flank angle true, and its bare control unchanged. D05 and Q04 pass.

Q03's lead squad2 now receives a failed rush earlier. Member20 times out at **45.0 s** (trace16190), generation8, at `(28.429956,-47.585739)` with endpoint `(29.80839,-45.726189)`. The leader reacts at **46.3 s** (16253), reports the failure and returns to closure at47.3 s. No phase line or fixing-squad lift follows. This is no longer a silent base-of-fire failure; the required join/lift outcome remains unproved.

D09's positive case pauses and resumes the same assault, and its continuous-support control stays unpaused. But the changed progression leaves no protected pause position within8 m for members3/4/5. At **38.0 s**, traces7209–7211 explicitly report exposed holds. The protected-hold assertion fails. This is a regression, not an intentional test change or a waived requirement.

No fourth target-scenario attempt or further source edit followed these results.

## Final selector table

| Selector | Final evidence | Result |
|---|---|---|
| Q01 | Intent-only fighting and bare-ground closure; no role binding | Pass |
| Q02 | Fixing4.8; Assaulting6.6; phase78.65; lift80; Rush control waits | Pass |
| Q03 | Opposite sides `1,-1`; lead2; lanes present; crossed lanes0; unscreened control waits; **no lift** | **Fail** |
| Q04 | Need21.3; help22.75; delivered within60; distant HelpSquad issued/received | Pass |
| P04–P07 | All retained positive and control assertions | 4/4 pass |
| D01–D11, D16, D17 | D05 restored, D08 consolidation restored; **D09 protected pause fails** | **12/13 pass** |
| close, sprint, projection, sector, positions, plumbing, lifecycle | All unchanged pins | 7/7 pass |

Final D09 output:

```text
D09 pause=1 resume_same=1 protected=0 continuous_pause=0
```

The full28-selector result JSON is `attempt9/results.json`. Assertions and fixtures were never edited during this continuation.

## Final diagnostic artifacts

Under `attempt9/traces/`:

- Q02: `88/battle-107-1789659989641285029/`.500 shots; phase/lift chain passes. Lift trace11156 at80 s.
- Q03: `90/battle-107-1789659993058764074/`.1758 shots. `Q03-stages.json` and `Q03-failed-rush.json` extract the leading squad's transition and failed receipt. Shot count is diagnostic only and does not establish successful coordination.
- D08: `60/battle-107-1789660024747926995/`.555 shots; consolidation11732 at161.55 and Reorganise12160 at167.55.
- D09 positive: `62/battle-107-1789660055317988751/`.951 shots; loss of support7056 at38 s; exposed pause7209–7211.
- D09 control: `63/battle-107-1789660055127307966/`.541 shots; continuous-support control passes.
- D05 positive/control, Q02 Rush, Q03 unscreened, Q04 near/far: each retained with a `latest.json` pointer and raw run directory.

`attempt9/review2-evidence.json` records exact support-permission transitions, broadcasts, lifts, stage transitions and failed task receipts. `Q03-after-action.md/.json` and `D09-after-action.md/.json` are generated offline reports. These are named mechanism diagnostics only; **no Step C distribution or engagement guard was evaluated**.

One additional limitation is visible in the final Q03 trace: near the end, fresh observation arrivals repeatedly toggle area-fire permission and amend member orders. This follows the visibility inference described above; its churn cost has not been measured. A retained permission with local visible-target preference may avoid those amendments, but that is a proposal for review, not another edit in this run.

## Commands and preservation

Restoration prerequisite:

```text
python3 tools/source_id.py
./scripts/test-sim.sh --drills D05
```

For N=7,8,9:

```text
./scripts/test-sim.sh --platoon Q01
./scripts/battle-lab.sh --version
python3 .local/plan015/step-b/run_pairs.py N 0
python3 .local/plan015/step-b/trace_pairs.py N
```

Same-binary diagnostics additionally ran `trace_pairs.py 7 D08`, `trace_pairs.py 9 D05 D08`, and `trace_pairs.py 9 D09`. They do not constitute additional implementation attempts or distributions.

```text
python3 -m unittest discover -s tests -p 'test_*.py'
python3 .local/plan015/step-b/review2_finalize.py
python3 tools/after_action.py .local/plan015/step-b/attempt9/traces/90/latest.json --out .local/plan015/step-b/attempt9/Q03-after-action.md
python3 tools/after_action.py .local/plan015/step-b/attempt9/traces/62/latest.json --out .local/plan015/step-b/attempt9/D09-after-action.md
git diff --check
python3 tools/source_id.py
```

65 Python tests pass in3.573 s. Linux compilations succeed. `review2-static-checks.json` confirms the current simulation equals the final frozen snapshot; Q/P and D fixture files are byte-identical to entry; the snapshotted platoon/drills assertion files are unchanged. No test source was edited, including `tests/squad_drills_tests.h`. Protected hashes match both frozen seed lists, `tools/evaluate_routes.py`, and all of `TerrainSim.cpp`, including authored layouts5–7.

The full default Linux suite and final-source40-case authored/three-case trace-parity gates were not rerun after the mechanism failure. No final-source parity claim is made. No commit, reset, stash, Fable launcher, native Windows process or Unreal build occurred. The earlier user work remains in the working tree.

## Disagreements and blocked steps

No disagreement with the two review rulings. Restoring allocation fixes D05, and sustained area fire lets Q02 complete its required chain. The implementation also exposed route-progress, receipt-handling and pause-position failures; their additional repairs and limitations are explicitly disclosed above. Q03 and D09 are defects, not assertion changes.

The final source is `aea3516355ab7f4a`. Step B's gate fails after the allowed three attempts, so **Step C has no measured build or authored after-action set; Step E has no leader dials or paired-profile measurement; Step D has no UI preparation**. All remain blocked pending the next authorised correction. No replay promotion is requested.
