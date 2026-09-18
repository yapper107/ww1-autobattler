# Plan 014 — Phase 4d report

**FAIL — engagement guard stopped the single measurement; experimental and not promoted.** Stopped after the single measured build. Legacy remains the playable default.

Entry fingerprint: **982796dfe73d3f5f**. Frozen/final fingerprint: **26af0a096babc8bf**. Read `plans/014-phase4c-fable-review.md` first. No simulation change after the successful local source was frozen; every measured manifest identifies that fingerprint.

## Rulings and implementation

- **Intentional test correction:** `tests/platoon_tests.h:18` now requires `a.taskNode && a.enemy>=0` before the bare-control unsafe-sector check. This is the sole P01 change. All other tests/assertions and both fixture files are unchanged. `test-correction.patch` records the exact delta. The Phase4c trace established that the old predicate flagged a no-contact Advance waypoint at11.8 s with zero known contacts/reports; the architect explicitly accepted this correction.
- `PlatoonTaskState::fireControl` owns each assault lane and its phase-line receipt independently of fixing-squad directive instances. Received phase-line reports activate the permission. Every renewed or replacement Support directive for that sector inherits it, and member orders use the **original lane target** as the lifted sector.
- A lane reopens only after a later received report contains matching completed-consolidation evidence, or a complete own-member position report shows all reported members outside the lane envelope. A missing/stale report never clears permission. The completion marker is set on received consolidation arrivals, not the intermediate `action.completed` flag used while issuing a final rush, and not completion of a flank transit.
- `CommandSim.cpp` wakes a drills squad planner immediately on a fresh changed received fire-control permission; normal member transport and reaction delays remain. Legacy/cognition scheduling is unchanged.
- New lane/report/completion state is hashed only in the drills digest block. Squad member positions are the permitted own-side fields transmitted in an ordinary squad report; platoon policy reads that received report, not live enemy/observer state.
- Changed simulation files: `BattleSim.h`, `PlatoonTaskSim.cpp`, `PlatoonSim.cpp`, `SquadDrillSim.cpp`, `DrillSim.cpp`, `CommandSim.cpp`, `Diagnostics.cpp`. Exact slice delta: `.local/phase4d/simulation.patch`. Entry/source snapshots and binaries are preserved.

## Local attempts and mechanism results

Initial compilation failed before P03 could execute because the digest addition referred to a nonexistent `FireLane.halfAngle` field. The compile-only snapshot and error log are retained under `attempt1/compile-error-*`; the field-name error and an indentation warning were corrected before the first simulated attempt. No distribution ran between attempts.

| Attempt | Fingerprint | P03 evidence | Result |
|---|---|---|---|
|1|1f4c763ea1bec237|phase130 s; leader131.4 s; all-members133.6 s; late0; negative-control lift0|FAIL:2.2 s relay exceeds1.75 s|
|2|26af0a096babc8bf|phase130 s; leader131.4 s; all-members133 s; late0; negative-control lift0|PASS:1.6 s relay; then26/26 selectors pass|

Attempt1 fixes the persistence defect but exposes the existing relay delay: its own trace has platoon lift event27967 at130 s and squad forwarding only at132.10001 s, after leader receipt131.4 s. Attempt2 wakes on that received permission; its event28122 and member orders28123 onward occur at131.40001 s. All members have the lift by133 s. P03 records no original-sector shots afterward through300 s, including later Support replacement. The no-phase control remains unlifted. Evidence: `attempt1/trace-evidence.json`, `attempt2/trace-evidence.json`, and each `traces/74/` export.

**Correction to my Phase4c report:** I previously said the2.2 s relay was within the bound. That was incorrect: configured `reportDelay=.75 s`, so the unchanged assertion allows1.75 s. The second local attempt repairs that failure rather than relaxing it.

| Selector | Final result | Evidence |
|---|---|---|
| D01 | PASS | D01 moving=1611 spacing_share=0.934823 arrived=8 corridor_inside=1 |
| D02 | PASS | D02 report_only=1 30-50m=1 protected_trail=1 control_traveling=1 control_close=1 |
| D03 | PASS | D03 alternation=1 covered=1 maximum_bound=19.6994 far_early_bounds=0 |
| D04 | PASS | D04 first_receipt=2.2 return_shooters_4s=7 all_cover=1 spacing=1 path_bound=1 assessment=1 bare_rear=1 |
| D05 | PASS | D05 support=1 incorrectly_blocked=0 weak_report=1 latency=3.9 |
| D06 | PASS | D06 established=1 lost=1 evidence=1 protected=4 silent_released=0 |
| D07 | PASS | D07 phase_receipt=120.15 lift_received=121.6 late_original_area_rounds=0 no_signal_lift=0 |
| D08 | PASS | D08 observer screened candidate routes=2 best blocked fraction=1; D08 accepted route observer blocked fraction=1; D08 covered_attack=1 moved=1 physical_angle=1 longest_rush=4.8 consolidate=1 reorganise=1 bare_attack=0 bare_report=1 |
| D09 | PASS | D09 pause=1 resume_same=1 protected=1 continuous_pause=0 |
| D10 | PASS | D10 committed=1/1 alternatives=1/0 resolved=1 |
| D11 | PASS | D11 committed=1 frozen=1 continued=1 weak_failed=1 reformed=1 |
| D16 | PASS | D16 retreat=1 alternate=1 rear_distance=45.4118 complete=1 equal_break=0 |
| D17 | PASS | D17 independently allocatable protected slots=8; D17 scarce_occupied=5 ample_occupied=8 spacing=1 |
| P01 | PASS | P01 fix_weapon=1 two_flanks=1 reserve=1 arrival_angle=1 claims=1 bare_flank=0 bare_unsafe=0 honest=1 |
| P02 | PASS | P02 sampled=1 min_centroid=34.5981 overlap=0 disabled_claim_overlap=1 |
| P03 | PASS | P03 phase_received=130 fixing_received=131.4 lifted=133 late=0 no_phase_lift=0 |
| P04 | PASS | P04 autonomous=1 successor=23 directive=23 control_changed=0 |
| P05 | PASS | P05 belief_by20=36.7431 reported_strength_bound=12 ratio=0.326592; P05 withdraw=1 alternate=1 rally_in_area=1 strong_withdraw=0 |
| P06 | PASS | P06 renewals=2 lifetimes_60_90=1 no_stale_execution=1 |
| close | PASS | Close assault positions: supported objective inside18 accepted; unsupported, distant and other-threat controls reject |
| lifecycle | PASS | Lifecycle continue samples=778 retained overwatch samples=784 latched receipt samples=1051; Progress clock paused=113 running=187 |
| plumbing | PASS | all assertions passed |
| positions | PASS | Position service: authored layouts 0/5/6/7, reservations, area rejection and four templates PASS |
| projection | PASS | Projected rush: screened open ground succeeds without catalogue cover; short path budget rejects |
| sector | PASS | Sector position query: lane rejects; lane union objective disc accepts reachable covered flank |
| sprint | PASS | Sprint contracts: standing movement=335 crouched arrivals=1296 maximum route=10.4937 |

All13 squad pairs,6 platoon pairs and7 auxiliary pins pass on the same source. No third local attempt was needed.

## Guard failure and partial single-build results

**Only10 of110 planned runs completed:** Works100–103 (4/10), no Trenches distribution runs (0/10), F1 draws1–2 with seeds107–109 (6/90). Both runners stopped dispatching after three zero-shot cases in a ten-case block and drained in-flight work. Works ended with4 zero-shot cases, F1 with3. No remaining cases were scheduled. **The full-cohort confidence-interval exit is not evaluated.** The numerical intervals below describe only the stopped sample and cannot certify the planned distributions.

Governing criteria: authored total casualties and front-line displacement at120/240 s improve against candidate90 beyond their paired intervals; Azure own-soldier orders/minute do not regress. F1 attacker win rate and casualty-fraction exchange do not regress against the last measured Phase3e. Both spacing metrics compare with legacy on all three sets, with the trench3 m median floor targeted. The inherited F1 paired shots guard against candidate90 is also shown. Individual per-run shortfalls are disclosure, not a return to the rejected per-run conjunction.

| Set | Controller | W/D/L | Shots | Total losses | Exchange | NN m | Under2 % | Closure120/240 m | Azure orders/min | Hits/soldier-min |
|---|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|
| F1 | candidate90 | 4/2/0 | 328.833 | 12.500 | 1.833 | 2.465 | 52.965 | 64.942/72.701 | 84.982 | 0.592 |
| F1 | drills-phase3e | 6/0/0 | 316.500 | 7.167 | 4.333 | 7.584 | 3.472 | 42.776/48.835 | 58.400 | 0.278 |
| F1 | drills-phase4d | 6/0/0 | 144.833 | 2.167 | 24.000 | 6.829 | 4.939 | 19.234/7.596 | 129.884 | 0.113 |
| F1 | legacy | 6/0/0 | 652.500 | 12.500 | 6.900 | 5.485 | 18.872 | 66.068/66.711 | 216.571 | 0.346 |
| Works | candidate90 | 2/0/2 | 1028.500 | 41.250 | 0.791 | 1.051 | 77.976 | 108.823/109.010 | 66.208 | 0.550 |
| Works | drills-phase3e | 3/0/1 | 871.250 | 8.000 | 1.833 | 7.535 | 6.042 | 78.833/60.654 | 86.375 | 0.107 |
| Works | drills-phase4d | 0/4/0 | 0.000 | 0.000 | NA | 5.410 | 6.756 | 17.310/22.105 | 265.208 | 0.000 |
| Works | legacy | 1/1/2 | 2303.000 | 36.500 | 1.121 | 5.950 | 18.849 | 92.313/88.498 | 225.708 | 0.444 |


**PARTIAL COHORT — guard stopped measurement. These stopped-sample intervals are descriptive only; the full distribution criteria are not evaluated. F1 has only two generator clusters and exchange only one defined pair.**

# Phase4 required paired criteria

Differences are candidate minus reference. 95% paired percentile intervals use 2000 cluster resamples. Crossing zero is inconclusive, not equivalence. Primary exchange is the existing per-run ratio of defender/attacker casualty fractions; zero-attacker-loss ratios are unavailable and paired counts disclose omissions. Aggregate raw-loss ratios are supplementary.

| Set | Reference | Criterion | Paired n | Delta | CI95 | Finding |
|---|---|---|---:|---:|---|---|
| F1 | drills-phase3e | win_azure | 6 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| F1 | drills-phase3e | casualty_exchange | 1 | 16.0000 | 16.0000 / 16.0000 | improved |
| F1 | candidate90 | shots | 6 | -184.0000 | -463.0000 / 95.0000 | inconclusive |
| F1 | legacy | nearest_m | 6 | 1.3441 | -2.0256 / 4.7138 | inconclusive |
| F1 | legacy | under_2m | 6 | -0.1393 | -0.1921 / -0.0866 | improved |
| Works | candidate90 | casualties_total | 4 | -41.2500 | -44.0000 / -38.2500 | regression |
| Works | candidate90 | closure_120s_m | 4 | -91.5134 | -93.0919 / -89.4011 | regression |
| Works | candidate90 | closure_240s_m | 4 | -86.9042 | -95.3193 / -82.2688 | regression |
| Works | candidate90 | orders_azure_per_minute | 4 | 199.0000 | 182.5833 / 217.5833 | regression |
| Works | legacy | nearest_m | 4 | -0.5403 | -1.2962 / 0.2437 | inconclusive |
| Works | legacy | under_2m | 4 | -0.1209 | -0.1472 / -0.0982 | improved |
| Trenches | candidate90 | casualties_total | 0 | NA | NA | unavailable |
| Trenches | candidate90 | closure_120s_m | 0 | NA | NA | unavailable |
| Trenches | candidate90 | closure_240s_m | 0 | NA | NA | unavailable |
| Trenches | candidate90 | orders_azure_per_minute | 0 | NA | NA | unavailable |
| Trenches | legacy | nearest_m | 0 | NA | NA | unavailable |
| Trenches | legacy | under_2m | 0 | NA | NA | unavailable |
| Trenches | 3 m floor | nearest_m | 0 | NA | NA | unavailable |


Required statistical criteria: **18**. Full-cohort statistical exit: **not evaluated (guard abort)**. Overall exit: **FAIL**. No second measured build or tuning followed this result.

Intervals use2000 paired bootstrap resamples, seed1729, clustered by generated map draw on F1 (keeping its three battle seeds together), and by battle seed on authored maps. A zero-crossing interval is inconclusive, not proof of equivalence. Targeted comparisons require improvement beyond the interval. The NN aggregate is the mean of per-run medians. Primary exchange is defender casualty fraction / attacker casualty fraction; undefined zero-own-loss ratios are omitted pairwise, with sample counts disclosed. Aggregate raw-loss exchange is supplementary. Missing120/240 s horizons after early termination remain NA; nothing is extrapolated.

Phase3e is the last measured Phase3 reference. Later Phase3f/g/h focused iterations did not produce a replacement distribution. Candidate90 order/hit references are110 preserved traced runs, revalidated as digest-equal to their historical untraced baselines. New authored historical-controller replays below independently confirm current parity.

Partial paired comparisons against Phase3e, candidate90 and legacy: `.local/phase4d/all-comparisons.md` and `phase4d-scoreboard.json`;40 matched controller-run records are in `paired-input.json`. `family-report.json`/`.md` come from `tools/report_family.py` applied to the six completed drills runs and the existing180 legacy/candidate90 runs (paired comparisons use only matching observed cases; the CLI returns1 because the requested cohort is incomplete). The old Phase3-style `paired-criteria.json` is supplementary and does not govern Phase4 acceptance.

## Per-run authored and F1 results

P4d=this frozen source; P3e=last measured Phase3; C=candidate90; L=legacy. A:E losses are raw casualty counts; added casualty percentages disclose both sides. Closure is front-line displacement. Adverse flags identify individual shortfalls without overriding the paired scoreboard.

| Set / draw / seed | Outcome P4d/P3e/C/L | A:E losses P4d/P3e/C/L | Shots P4d/P3e/C/L | NN m P4d/L | <2m % P4d/L | Closure120 P4d/P3e/C/L | Closure240 P4d/P3e/C/L | Azure orders/min P4d/P3e/C | Hits/soldier-min P4d/P3e | Per-run adverse guards  | Casualty % A:E P4d | Exchange P4d |
|---|---|---|---:|---:|---:|---:|---:|---:|---:|---|---:|---:|
| works / 0 / 100 | D/W/L/D | 0:0/0:3/27:10/18:18 | 0.00/696.00/839.00/2583.00 | 5.66/7.27 | 5.77/16.21 | 16.75/80.80/108.43/95.05 | 24.83/79.03/106.78/88.52 | 296.00/108.67/68.33 | 0.00/0.07 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C, ZERO  | 0.00:0.00 | NA (zero own loss) |
| works / 0 / 101 | D/L/L/L | 0:0/6:2/29:12/20:15 | 0.00/600.00/1038.00/2012.00 | 5.63/5.04 | 7.38/23.52 | 15.28/76.64/108.32/86.11 | 22.91/44.60/106.43/90.09 | 235.00/79.67/57.17 | 0.00/0.10 | shots<C (disclosure), losses<C, closure120<C, closure240<C, orders>C, ZERO  | 0.00:0.00 | NA (zero own loss) |
| works / 0 / 102 | D/W/W/W | 0:0/0:8/22:23/12:23 | 0.00/861.00/965.00/2270.00 | 5.64/5.98 | 7.32/16.51 | 18.04/81.61/106.23/93.35 | 18.46/77.00/118.03/97.13 | 257.17/74.67/69.83 | 0.00/0.10 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C, ZERO  | 0.00:0.00 | NA (zero own loss) |
| works / 0 / 103 | D/W/W/L | 0:0/3:10/18:24/22:18 | 0.00/1328.00/1272.00/2347.00 | 4.72/5.51 | 6.56/19.16 | 19.17/76.29/112.32/94.75 | 22.21/41.99/104.80/78.26 | 272.67/82.50/69.50 | 0.00/0.15 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C, ZERO  | 0.00:0.00 | NA (zero own loss) |
| F1 / 1 / 107 | W/W/D/W | 0:0/7:0/13:1/12:4 | 0.00/454.00/466.00/1038.00 | 4.53/7.69 | 3.46/11.07 | 6.11/49.52/70.99/71.28 | 7.64/49.42/73.08/68.95 | 164.67/39.33/64.00 | 0.00/0.13 | shots<C, NN<L, ZERO  | 0.00:0.00 | NA (zero own loss) |
| F1 / 1 / 108 | W/W/D/W | 0:0/8:0/12:0/13:8 | 0.00/300.00/411.00/1027.00 | 4.67/6.14 | 3.03/13.19 | 8.45/55.58/61.41/71.27 | 7.39/55.58/74.44/71.27 | 221.00/37.83/70.50 | 0.00/0.12 | shots<C, NN<L, ZERO  | 0.00:0.00 | NA (zero own loss) |
| F1 / 1 / 109 | W/W/W/W | 0:0/7:0/9:2/4:11 | 0.00/194.00/512.00/835.00 | 4.70/6.14 | 1.97/10.17 | 6.78/41.51/69.31/72.95 | 7.75/41.51/70.58/69.86 | 152.67/34.67/54.17 | 0.00/0.12 | shots<C, NN<L, ZERO  | 0.00:0.00 | NA (zero own loss) |
| F1 / 2 / 107 | W/W/W/W | 1:4/3:4/10:4/6:4 | 241.00/231.00/205.00/486.00 | 9.25/4.34 | 6.91/26.00 | 29.05/NA/NA/58.01 | NA/NA/NA/58.25 | 83.78/86.43/98.55 | 0.29/0.56 | none  | 4.17:100.00 | 24.000 |
| F1 / 2 / 108 | W/W/W/W | 0:4/4:4/12:4/1:4 | 324.00/302.00/247.00/215.00 | 8.74/4.26 | 6.99/26.76 | 32.45/31.14/58.05/63.55 | NA/NA/NA/NA | 76.48/87.47/105.22 | 0.19/0.48 | none  | 0.00:100.00 | NA (zero own loss) |
| F1 / 2 / 109 | W/W/W/W | 0:4/2:4/4:4/4:4 | 304.00/418.00/132.00/314.00 | 9.09/4.34 | 7.27/26.05 | 32.56/36.14/NA/59.35 | NA/NA/NA/65.23 | 80.72/64.67/117.46 | 0.20/0.26 | none  | 0.00:100.00 | NA (zero own loss) |


## Verification and constraints

- Full `./scripts/test-sim.sh`: **PASS**, exit0; simulation test elapsed226.644 s. This was run after all26 mechanism selectors passed.
- Authored legacy/cognition digests: **40/40 unchanged**, Works and Trenches, seeds100–109,360 s. Archived and new manifests/digests/commands are in `authored-parity/parity.json`.
- Drills trace on/off parity: **3/3 matches**: Works107, Trenches107, F1 draw1/107 at360 s. Both traced and untraced runs were produced before distribution measurement. `trace-parity.json` records both commands/manifests.
- Python unittest:63 PASS (3.556 s); no Python implementation file changed afterward. `git diff --check` passes.
- Guard-stopped single build: **10 completed runs**, **7 zero-shot runs**. The three-zero-shot/ten-case engagement guard failed on Works and F1; Trenches distribution was not started. `engagement-summary.json` contains the guard results; `measured-build-check.json` verifies every build.
- Protected authored terrain/layout source, frozen seed lists and `tools/evaluate_routes.py` match preserved hashes. Only the approved P01 predicate differs from the entry tests. All other test/fixture bytes are unchanged; `static-checks.json` records the checks.
- No commit, reset, stash, Fable launcher, per-seed tuning, F2/F3, gun pickup, native Windows or Unreal run. Windows/Unreal stay with the architect. Weapon attachment across squads, Merge member transfer and company escalation remain **Phase4e**, not implemented.

## Disagreements and implementation interpretations

No disagreement with the two binding rulings or the measured stop rule. The lane-clearance geometry is an explicit implementation choice: all reported members must be beyond a20 m capsule around the recorded assault lane, including both endpoints, before a complete fresh report can reopen fire. This conservative envelope is shared across all maps/seeds and is never used as an enemy-truth query. Same-sector inheritance retains the existing20 m matching distance. P03 proves persistence, timely lift and the no-phase negative control; it does not by itself certify every possible lane-clearance/completion branch.

### Observed failure and bounded diagnostic pull

On the four measured Works cases, mean shots and casualties are both zero. Azure soldier orders average265.21/min against66.21 for the matched candidate90 cases. Front-line displacement averages17.31 m at120 s and22.11 m at240 s, against108.82/109.01 m. These are observed-case means, not an estimate for the unrun six cases.

F1 records6/6 Azure wins on the two completed draws, but all three draw1 wins have **zero shots and zero casualties on either side** at360 s. Do not interpret that win tally as tactical success. Draw2 has241/324/304 shots; the recorded outcomes are disclosed unchanged. The partial exchange comparison has only **one defined matched pair** because zero-own-loss fractions make the other ratios undefined; its degenerate bootstrap interval is not useful evidence of a family-level gain.

A read-only diagnostic on the already recorded zero-shot traces found:

- Works100: Azure120 MoveTactically acceptances,94 `matching received arrivals: deployment leg complete` transitions,93 Reorganise transitions,50 greedy platoon assignments; **zero fire-control/lift events**. For squad0, events239207 at303.85 s through289940 at359.85 s repeatedly accept the same `(-120,-73.790009)` waypoint at4 s intervals. Event263190 at331 s renews that same objective. Exact events/counts: `works100-diagnostic.json` and its recorded trace.
- F1 draw1/107:79 Azure MoveTactically acceptances,46 leg completions,44 Reorganise transitions,73 greedy platoon assignments; zero fire-control/lift events. Repeated Advance/Occupy transitions near the retained lane leg are recorded in `F1-1-107-diagnostic.json`.

This supports investigating persistent Advance/Secure objectives and completion acknowledgement across the squad/platoon lifecycle. It is a **causal hypothesis**, not a claim that the new fire-control state created the stalemate: that state was not activated in these two traces. No older source was replayed on a new distribution to assign the regression to a particular earlier slice, and no post-measurement repair was made.

The Trenches trace-parity run107 is verification evidence only, not a substitute for its ten-run cohort. Its traced profile took83.695 s, including78.481 s in navigation (inclusive); this performance cost is disclosed without optimizing or rebuilding after the freeze.

### What could not be completed

The remaining100 planned distribution runs, the complete both-map/F1 scoreboard, the full-cohort paired intervals and their per-run tables were deliberately not completed because the engagement guard failed. The ten available per-run records and conditional descriptive intervals are included above; unrun Trenches criteria are NA. No approximated results or acceptance claim replaces the missing evidence. The implementation satisfies the requested local P01/P03 corrections and all mechanisms, but **fails the measured engagement exit** and is not promoted.

## Commands and artifacts

```sh
cat plans/014-phase4c-fable-review.md
python3 tools/source_id.py
./scripts/test-sim.sh --platoon P03 # each local attempt; initial compile repair also logged
.local/phase4d/attempt1/sim-tests --platoon P01
python3 .local/phase4d/run_attempt.py 2
./scripts/battle-lab.sh --drills --encounter 74 --seconds 300 --evaluate --out .local/phase4d/attemptN/traces/74 # N=1,2
python3 .local/phase4d/gates.py # full test-sim,40 parity checks,then3 trace pairs
python3 .local/phase4d/measure.py #requested20 authored/90 F1; stopped at4/6 by guards
python3 .local/phase4d/analyze_partial.py
python3 .local/phase4d/scoreboard.py
python3 .local/phase4d/augment_table.py
python3 tools/report_family.py .local/phase1/f1-dev/family.json .local/phase4d/f1-dev/family.json --out .local/phase4d/family-report.json --markdown .local/phase4d/family-report.md
python3 .local/phase4d/check_artifacts.py
python3 -m unittest discover -s tests -p "test_*.py"
git diff --check
python3 tools/source_id.py
```

Gate, measurement and analysis status JSON store expanded commands and exits. Authored runs and their commands are in `authored/results.json`; F1 runs and the incremental process-pool checkpoint are in `f1-dev/family.json` (gen-seeds1–30, battle seeds107–109). Partial enrichment initially used the full-cohort summary formatter, which could not format the absent Trenches set; the local report formatter was corrected to skip empty summaries. No simulation or metric definition changed. All source snapshots, exact local logs, traces, baseline references and binaries remain under `.local/phase4d/`.

Final fingerprint: **26af0a096babc8bf**. Stopped after this report with changes in the working tree.
