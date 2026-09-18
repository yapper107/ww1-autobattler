# Plan 014 Phase 4f — no-covered-flank response

17 September 2026. Astra implementation of the attributed [Phase4e review](../../plans/014-phase4e-fable-review.md).

**Result: mechanism exit not met; stopped after three local attempts.** All27 pre-existing selectors pass on the final source. New P08 fails its equal-strength advance: minimum40 m displacement is not reached and a Reserve directive appears. The bounded weak-control sequence and boundary-exhaustion diagnostic produce the intended evidence, but that does not turn P08 into a pass. **No distribution measurement, full-suite run,40-case authored digest gate or full-battle trace-parity gate was started**, because the all-mechanism prerequisite was not met. Legacy remains the playable default; this source is experimental and unpromoted.

## Fingerprints and retained work

Entry: `d8586da13b539c61`.

| Attempt | Simulation fingerprint | Selector result | Remaining failure |
|---|---|---:|---|
| 1 | `6046562409d4acbe` | 25/28 | P01 arrival angle, P03 phase-line/lift, P08 |
| 2 | `c1c54e2794c1dd87` | 27/28 | P08 |
| 3, final | `01462c286da88358` | 27/28 | P08 |

Entry and each attempted simulation source are preserved in `.local/phase4f/{entry,attempt1,attempt2,attempt3}/source/`. Each attempt has its exact test binary, CLI binary, fingerprint, `results.json`, mechanism logs, traced scenario records and a slice-only `simulation.patch`. Existing uncommitted work was retained. No commit, reset, stash, Fable launcher, Windows process or Unreal build was invoked. There was no fourth policy attempt and no measured build.

## Implemented scope

- `Sim/PlatoonTaskSim.cpp:170–209`: no-covered-flank response selects a fixing squad with the existing platoon support weapon and creates per-squad fire-and-movement Advance nodes. Objectives use the extreme known contacts on each side, outward lane ranks and nearby catalogue cover; routes respect existing hard claims. Alternate cover endpoints are considered when claims reject the preferred one. Reserve capacity is zero in this branch. Covered flank commitments already executing are retained until their ordinary release conditions; a newly computed route candidate cannot alone cancel them.
- `Sim/BattleSim.h`, `Sim/DrillSim.cpp:324`, `Sim/SquadDrillSim.cpp:272`: the received `fireMovement` directive forces bounding overwatch and the Phase3 supported-closure path. It does not require a covered flank route for that movement. Emergency retirement and casualty-loss responses remain available.
- `Sim/PlatoonTaskSim.cpp:117–182`: below believed ratio1 without superiority, observation is timed from first acceptance. Reassessment does not restart the45 s clock. On expiry, the history of received superiority selects fire-and-movement or Withdraw. Branch transitions are traced once; initial route rejection is reported honestly before the selected response. A substantially displaced contact group or lost contact starts a new decision context.
- `Sim/PlatoonSim.cpp:194`: a normal squad report carries its superiority belief, including an established SupportByFire stage with no effective incoming fire. Establishment still comes from the existing element-delivered-fire mechanism and its support-loss hysteresis; there are no injected delivery receipts.
- `Sim/PlatoonTaskSim.cpp:335`, `Sim/SquadDrillSim.cpp:297`: a directive carries the commander's received committed strength. Numerical-ratio retirement assesses that intended support rather than treating every supported squad as alone against the entire known group. The numeric decision waits for contact assessment. Actual recent-loss emergencies remain independent. This reads the squad's own received order, not other squads' hidden state.
- `Sim/PlatoonTaskSim.cpp:53`: a valid stationary route is admitted for Fix/Observe at an already reached point. Previously an empty path rejected the assignment even when the requested position was current and walkable.
- `Sim/PlatoonTaskSim.cpp:226–236`: the40 m repeated-Done guard validates the resolved endpoint as well as the requested endpoint. A missing route or resolved forward displacement below40 m latches route exhaustion, marks the node Blocked and emits `platoon_route_exhausted`; it does not renew the unchanged objective. New state is hashed only in the drills digest block.
- `Sim/PlatoonFixtures.cpp`, `tests/platoon_tests.h:97`, CLI/simulation encounter dispatch: append encounters84/85 and P08. Equal case has30 active non-staff attackers and30 durable defenders. Weak control has16 non-staff attackers and24 durable defenders, yielding the measured belief ratio0.627528 after sensing. Defenders hold fire through physical reload state; the weak attackers also hold fire. These controls are scenario construction, not policy inputs.
- Companion P08 documents the new pair. P01's prose is aligned with its unchanged actual assertions (no Flank without a route, honest report, no unsafe entry); the obsolete prose requiring indefinite Fix/Observe/Reserve is superseded by the review. All existing P01–P07 test bodies and their assertions are byte-identical to entry. No authored layout or frozen seed list was edited.

Weapon attachment across squads, Merge member transfer and company escalation remain deferred. Selecting the fixing squad that already owns the weapon is not an implementation of weapon transfer.

## Local attempts and evidence

### Attempt 1

P08: first contact9 s, fire-and-movement branch9 s, fixing squad0 delivers fire, but slowest mover advances only0.251213 m; bounding is not observed for every moving squad and later `platoon_blocked` traces occur. Its weak control never acquires the intended contact, so its belief branch is not exercised.

Trace causes motivating attempt2:

- The no-flank branch's anchor remained its default value, so the known group was treated as new on repeated assessments:48 branch acceptances in the145 s P08 trace.
- Squad numerical-ratio retirement treated the whole enemy group as opponents of one squad. The four Azure squads entered BreakContact at9.35,14.3,14.45 and14.75 s despite the platoon's planned support.
- P01/P03 switched an executing flank to the new fallback at31.95 s, before its arrival/phase receipt. P01 therefore lost its arrival angle and P03 never emitted its lift.

Attempt2 anchors the branch, preserves executing flank commitments, transmits own reported committed strength and searches claim-compatible alternative cover. It also moves **only the new weak-control defenders30 m closer**, from nominal x35 to x5, so production sensing can actually exercise the specified belief. This fixture amendment is explicit; no existing fixture or behavioral assertion was changed. The first fixture was inadequate, not a valid negative-control pass.

### Attempt 2

All27 existing selectors pass. P08 alone fails: delivered fire and bounding are observed, but minimum advance is0.801422 m and Reserve appears. The control now proves ratio0.627528, starts its timer at4.9 s and selects Withdraw at49.9 s (first recorded frame50 s), but no Observe directive is allocated.

Trace: fixing support establishes at16 s; the platoon selects the inferior observation branch at24.95 s because the report's superiority flag omits the established SupportByFire stage. Stationary Observe allocation also fails on the zero-distance route query. These motivate attempt3: include that existing support evidence in the reported belief, admit a stationary route, defer numerical retirement to contact assessment, and use outward-ranked flank-most cover goals. No fixture or assertion changes follow attempt2.

### Attempt 3 — final

All27 existing selectors pass, including unchanged D01–D11, D16, D17, P01–P07 and seven auxiliary pins. P03 again records phase receipt139 s, fixing amendment140.4 s, all members lifted142 s and zero late original-area rounds.

P08's final output:

```text
contact=9 branch=9 fixing=0 delivered=1 minimum_front=3.58308
bounding=1 reserve=1 late_blocked=0 no_route=1
control_ratio=0.627528 fix=1 observe=1 began=4.9 withdraw=50 superiority=0
```

P08 fails its positive conjunction; the control's individual predicates are true. Since the positive assertion aborts first, this is not reported as a separately passing P08 test. The control's production-transport diagnostic confirms the timing independently, below.

| Positive P08 requirement | Final evidence | Result |
|---|---|---|
| fixing squad delivers fire on group | squad0; delivered rounds observed | pass |
| every other squad moves at least40 m within90 s of contact | maxima: squad1 **9.372 m**, squad2 **8.119 m**, squad3 **3.583 m** | **fail** |
| movers use bounding overwatch | sampled for all three | pass |
| no Reserve directive | Reserve appears after observation branch | **fail** |
| no platoon_blocked after branch selection | none after the branch | pass |
| no covered flank route | observed in planner state | pass |

The first contact frame is9 s; the displacement horizon is99 s. `.local/phase4f/p08-progress.json` records the per-squad centres and observer calculations. These are diagnostics only.

Key final trace IDs in encounter84:

| Trace ID | Time | Evidence |
|---:|---:|---|
| 7269 | 8.900 s | choose fire-and-movement, Reserve capacity zero |
| 20925 | 16.000 s | element-delivered fire establishes support |
| 42392 | 36.500 s | eight seconds without delivery evidence; support lost |
| 44854 | 39.950 s | inferior without superiority; select bounded observation |
| 59951 | 84.950 s |45 s expires without regained superiority; Withdraw |

Thus the repeated unbounded no-route report is fixed, but effective supported closure is not demonstrated. The new branch later loses support, enters the allowed inferior branch and withdraws before satisfying the required advance. The trace contains candidate-query rejections for area/coherence, cover orientation and accepted corridors, as well as successful allocations; rejection counts alone do not identify the causal movement blocker. No further remedy is claimed or implemented after the third attempt.

## Focused diagnostics on the same final binary

**Control transport:** encounter85 starts observation at4.9 s and issues Withdraw at49.9 s. NCOs0,16 and24 hear it at50.65 s and accept at51.30,51.15 and51.25 s respectively. All these recorded acceptances fall within4.9+45+0.75+1=51.65 s. Fix and Observe directives are present, with no received superiority. The selector's printed50 s value is the first frame containing the commander assignment; the later received/accepted times come from actual production events, not fabricated receipts. `.local/phase4f/control-receipts.json` records the evidence. This diagnostic does not claim every squad received Withdraw: the recorded issue/acceptance set is explicitly the three NCOs listed.

**Resolved loop guard:** the unchanged P07 fixture was extended to360 s for a same-binary boundary diagnostic, without changing its assertions or running a distribution draw. All four squads hit the finite-map condition. At302 s squads1/2 request x516.91/516.83; at309 s squad3 requests x516.67; at324 s squad0 requests x517.50. The map ends at x500. Each request emits `platoon_no_progress` followed by `platoon_route_exhausted`; no unchanged renewal is accepted. Trace pairs67987/67988,67989/67990,68289/68290,68801/68802 are preserved in `.local/phase4f/boundary-evidence.json`. This directly exercises the no-admissible-route branch. The conditional check for a resolved-but-too-short endpoint is present in source but was not separately triggered by this fixture.

## Commands and verification

For each N=1,2,3:

```sh
./scripts/test-sim.sh --platoon P08
./scripts/battle-lab.sh --version
python3 .local/phase4f/run_attempt.py N
python3 .local/phase4f/trace_attempt.py N
```

Each `run_attempt.py` copies the just-built test binary and runs all28 selectors, with exact per-selector argv, exit codes and logs in `attemptN/results.json`. `trace_attempt.py` preserves the corresponding CLI binary and exports the failed/local scenario traces with `--drills --encounter ID --seconds LIMIT --evaluate`. The helper was initially called before attempt2's result checkpoint existed, failed with FileNotFoundError, and was rerun after that checkpoint existed; this was a tooling error, not another source attempt. Duplicate trace targets in the initial helper were deduplicated before attempt3. All policy attempts remain the three fingerprinted sources above.

Additional commands:

```sh
.local/phase4f/attempt3/battle-lab --drills --encounter 82 --seconds 360 --evaluate --out .local/phase4f/attempt3/traces/82-boundary
python3 -m unittest discover -s tests -p 'test_*.py'
python3 tools/source_id.py
git diff --check
```

Python: **63 tests pass**,3.547 s. Diff whitespace check passes. `.local/phase4f/static-checks.json` verifies the protected terrain source, frozen acceptance/validation seeds and `tools/evaluate_routes.py` hashes are unchanged; old P01–P07 test bodies are unchanged; final simulation source equals the attempt3 snapshot.

### Selector results

| Selector | Attempt1 | Attempt2 | Attempt3 |
|---|---|---|---|
| D01 | PASS | PASS | PASS |
| D02 | PASS | PASS | PASS |
| D03 | PASS | PASS | PASS |
| D04 | PASS | PASS | PASS |
| D05 | PASS | PASS | PASS |
| D06 | PASS | PASS | PASS |
| D07 | PASS | PASS | PASS |
| D08 | PASS | PASS | PASS |
| D09 | PASS | PASS | PASS |
| D10 | PASS | PASS | PASS |
| D11 | PASS | PASS | PASS |
| D16 | PASS | PASS | PASS |
| D17 | PASS | PASS | PASS |
| P01 | FAIL | PASS | PASS |
| P02 | PASS | PASS | PASS |
| P03 | FAIL | PASS | PASS |
| P04 | PASS | PASS | PASS |
| P05 | PASS | PASS | PASS |
| P06 | PASS | PASS | PASS |
| P07 | PASS | PASS | PASS |
| P08 | FAIL | FAIL | FAIL |
| close | PASS | PASS | PASS |
| sprint | PASS | PASS | PASS |
| projection | PASS | PASS | PASS |
| sector | PASS | PASS | PASS |
| positions | PASS | PASS | PASS |
| plumbing | PASS | PASS | PASS |
| lifecycle | PASS | PASS | PASS |

### Gates not run

| Gate | Status / reason |
|---|---|
| full `./scripts/test-sim.sh` suite | not run; P08 prerequisite fails |
|40 authored legacy/cognition digests | not run on Phase4f; prior Phase4e evidence is not substituted |
| drills trace parity, both maps and one F1 draw | not run on Phase4f |
| Works and Trenches seeds100–109 | no distribution cases started |
| F1 development draws / paired scoreboard | no distribution cases started; no current outcome claim |
| distribution engagement guard | not exercised; no distribution dispatched |
| native Windows / Unreal | remains with architect; not attempted |

There is consequently no Phase4f per-run distribution table or paired CI scoreboard. Existing Phase4e numbers remain historical, not results for this source. Focused no-contact/holding-fire fixtures are not fed into the distribution engagement guard.

## Disagreements, interpretations and unfinished work

1. I agree with replacing indefinite no-flank holding with a supported-movement branch and bounded observation. This implementation still fails the P08 advance/no-Reserve requirements. It is not complete enough for the requested measurement gate.
2. I do not accept the review's specific attribution of **Phase4e Trenches103** to repeated no-covered-flank handling as established. Its archived zero-shot diagnostic contains no completed Advance leg and no positive Azure mental-map estimate; it instead shows movement-budget exhaustion and renewals. The supplied Works/Trenches108 evidence may establish the no-flank problem elsewhere, but it is not evidence of that same cause in103. No new distribution was run here to resolve103.
3. “Superiority” here is a reported doctrinal belief: the prior hysteresis flag, or established element support with no effective incoming fire. It is not an omniscient comparison of both sides' bullets. Committed strength is the commander's received own-force strength carried by the order; it does not implement cross-squad weapon transfer or guarantee all intended supporting squads can fire.
4. The new weak fixture was amended once because attempt1 did not produce its required knowledge. All existing fixtures/assertions, and all P08 assertion bounds, remain unchanged across the policy attempts. The new fixture's measured ratio is0.627528, an operational “about0.6,” with no injected knowledge.
5. The loop guard now rejects absent or insufficient resolved routes and reports exhaustion. The boundary diagnostic verifies absence/exhaustion, not every possible short resolved alternative. No post-attempt3 policy change was made.
6. Weapon attachment, Merge transfer and company escalation remain deferred. F2/F3 and gun pickup were not implemented. Native verification remains with the architect. The all-mechanism prerequisite failed at the allowed limit, so the slice stops with this report; no fourth local attempt or measured build follows.

Final fingerprint: **`01462c286da88358`**. All changes remain uncommitted in the working tree.
