# Plan 014 — Phase 4c bounded local iteration report

17 September 2026. Read `plans/014-phase4b-fable-review.md` first and applied its two adopted rulings. **Mechanism exit not met; stopped after three local attempts without distribution measurement.** Legacy remains the playable default. No promotion or new architect acceptance is claimed.

Entry fingerprint: **c98020b91fed4f51**. Final fingerprint: **982796dfe73d3f5f**.

## Objective and implementation

Keep platoon commitments through locally recoverable squad-stage failures, and allocate the two flank corridors jointly so the first choice cannot consume the second squad's route. Distinguish a real exhaustion report from recovery; preserve physical sensing, normal report/order transport and the existing mechanism assertions.

Changes relative to this slice's entry:

- `Sim/DrillSim.cpp`: partial position failures retain executable member orders and report recovery. A failed stage without movers gets a bounded column retry; no executable recovery and repeated progress expiry become exhaustion with the last rejection reason. Arrival resets the local retry allowance. Weak elements with no strength remedy report exhaustion rather than attempting a column. An exhausted drill is a terminal boundary for a received replacement; recoverable stages retain their commitment.
- `Sim/BattleSim.h`, `Sim/PlatoonSim.cpp`: transmitted squad reports carry `drillRecovering` and `drillNote`; only blocked **and exhausted** becomes `TaskStatus::Blocked`. Recovering remains `Executing`. The existing platoon commitment-release logic consumes that distinction. `drill_recovering`, `drill_blocked`, stage transitions and `goal_feedback_sent` expose the two levels and cause.
- `Sim/PlatoonTaskSim.cpp`: enumerate lateral/longitudinal flank-route candidates on the chosen side and then the other side; consider distinct eligible squads jointly, re-route the second around the first exclusion when needed, minimize summed planner cost with existing coordination/stickiness terms, and commit both selected routes in one assessment. Exact planar segment-to-segment separation includes crossings and route starts; the 20 m exclusion also applies to later assignments. With no admissible pair, the existing single-flank/Reserve fallback remains. The test-only disabled-claims control disables separation, not the physical terrain.
- `Sim/DrillSim.cpp`: respect the accepted directive's completion radius for a platoon leg; the prior generic 18 m threshold could report Done outside its 12 m objective. A matching flank-arrival receipt inside that radius produces the phase-line report through normal squad reporting.
- `Sim/SquadDrillSim.cpp`, `Sim/DrillSim.cpp`: accept and propagate a received lift even when the current action is exhausted/inactive; carry the accepted platoon lift on each member's emitted order. This repairs the initial amendment delivery but does **not** yet preserve it across a later different Support directive; P03 detects that remaining defect.
- `Sim/Diagnostics.cpp`: include the new recovery state/report fields in the **drills-only** digest block. No legacy/cognition policy branch was edited.

The finite flank search is not an exhaustive search over every possible continuous route. It evaluates offsets 35/59/83 m along the selected flank axis and longitudinal offsets 8/-24/40 m, on both sides, through the planner and reviewed covered-route contract. These are common geometric candidates, not encounter or seed conditions. `simulation.patch` records exactly the slice delta; entry and every attempt have complete source snapshots and preserved binaries.

## Attempts and reasons for changes

| Attempt | Fingerprint | Selectors passing | Remaining failures |
|---|---|---:|---|
| 1 | 2868496937847783 | 22/26 | P01, P03, D05, lifecycle |
| 2 | 497a7b20e6bb59f9 | 24/26 | P01, P03 |
| 3 — final | 982796dfe73d3f5f | 24/26 | P01, P03 |

No distribution runs occurred between attempts. All fixtures and assertion files are byte-identical to entry. The four initially failing platoon/squad pairs that need joint comparisons were re-run unchanged on every source, as were all other selectors.

### Attempt 1

D03 is repaired: alternating bounds, covering check true, maximum completed bound 19.6994 m, far-control early bounds zero. Final-source recovery evidence reproduces event1120/1122 at6.45 s (column rejection) and event1135 at7.15 s (`goal_feedback_sent`, `recovering: column position unavailable`, goal status2/Executing). The external commitment survives and movement resumes.

P02 is repaired: two claims exist, minimum physical squad-centroid separation34.5981 m, no claimed-route overlap, disabled-control overlap true. P01's joint commitment is trace event7621 at16.95 s; route orders7623/7625 go to squads2/3. Fixing weapon and Reserve checks pass. The positive arrival-angle check fails because the generic18 m completion threshold ends the leg before its12 m objective radius. P03 never reports a phase line.

Two introduced regressions were detected, not waived: D05's weak group was treated as column-recoverable (13.9 s reporting latency); the lifecycle pin rejected a recovery issuance without its `drill_stage_advanced` event. The weak trace shows minStrength at13.3 s/event2288, inappropriate column retry13.35/event2290, and eventual exhaustion24/event3305. Attempt2 corrects that causal classification and transition trace.

### Attempt 2

All13 squad pairs and7 auxiliary pins pass. D05's support-report latency returns to3.9 s. P01's **positive checks all pass**, including arrival angle. Its remaining failure is the bare-control mismatch discussed below.

The completion-radius correction and real arrival report advance P03 to phase receipt130 s and fixing-leader amendment receipt131.4 s. It still never reaches all-member lift. Trace shows the fixing squad in exhausted SupportHold (93.75 s/event23619); a different directive is queued124.95/event26640 but cannot interrupt because exhausted SupportHold is not recognized as a terminal boundary. No squad order follows the130 s lift; the old directive eventually expires162.15/event30499. Attempt3 makes that exhaustion handoff a boundary and propagates the lift independently of active manoeuvre state.

### Attempt 3 — final

All13 squad pairs and7 pins still pass. P02/P04/P05/P06 pass. P01's positive checks still all pass; the unchanged bare assertion still fails. P03 delivers the lift but later violates it. The allowed local iteration is exhausted; no further simulation edit was made.

## Pair and pin results

| Selector | Attempt 1 | Attempt 2 | Attempt 3 |
|---|---|---|---|
| D01 | PASS | PASS | PASS |
| D02 | PASS | PASS | PASS |
| D03 | PASS | PASS | PASS |
| D04 | PASS | PASS | PASS |
| D05 | FAIL | PASS | PASS |
| D17 | PASS | PASS | PASS |
| D06 | PASS | PASS | PASS |
| D07 | PASS | PASS | PASS |
| D08 | PASS | PASS | PASS |
| D09 | PASS | PASS | PASS |
| D10 | PASS | PASS | PASS |
| D11 | PASS | PASS | PASS |
| D16 | PASS | PASS | PASS |
| P01 | FAIL | FAIL | FAIL |
| P02 | PASS | PASS | PASS |
| P03 | FAIL | FAIL | FAIL |
| P04 | PASS | PASS | PASS |
| P05 | PASS | PASS | PASS |
| P06 | PASS | PASS | PASS |
| close | PASS | PASS | PASS |
| sprint | PASS | PASS | PASS |
| projection | PASS | PASS | PASS |
| sector | PASS | PASS | PASS |
| positions | PASS | PASS | PASS |
| plumbing | PASS | PASS | PASS |
| lifecycle | FAIL | PASS | PASS |

Final selected measurements (mechanism fixtures, not battle-distribution evidence):

| Check | Final result |
|---|---|
| D03 | alternation1; covered1; maximum bound19.6994 m; far early bounds0 |
| D05 | support1; capable incorrectly blocked0; weak report1; latency3.9 s |
| Lifecycle | continued778; retained overwatch784; latched receipts1051; clock paused113/running187 |
| P01 | fixing1; two flanks1; Reserve1; angle1; claims1; bare flank0; **bare unsafe1**; honest no-route report1 |
| P02 | sampled1; minimum centroid34.5981 m; overlap0; disabled-claims overlap1 |
| P03 | phase130 s; fixing receipt131.4 s; all-member lift133.6 s; **late shots6**; no-phase control lift0 |

## Remaining failures, own traces and disagreements

### P01 bare control — assertion refers to a no-contact Advance waypoint

I disagree with calling this remaining failure an unsafe approach to a **known threat sector**. The independent observer helper executes the unchanged fixture and uses the exact existing `Distance<18 && !ProtectedAt` predicate. On the final source its first failing sample is:

- time11.8 s, soldier16 at(-14.5269,10.6413);
- directive **Advance** (enum8), target enemy **-1**;
- commander has **zero known contacts and zero known reports**;
- `sector=(0,0.0263815)` is the no-contact Advance objective; assigned squad destination `(0,16.0225)`;
- the predicate marks walking toward that waypoint as unsafe; actual enemy deployment is elsewhere;
- over the whole100 s bare control, the same predicate restricted to directives with a known target (`a.enemy>=0`) yields **zero** unsafe samples.

Evidence: `.local/phase4c/attempt3/observer-bare.log`, the read-only observer helper `.local/phase4c/observe.cpp`, and the bare control's own `.local/phase4c/attempt3/traces/71/` trace/evaluation. The own trace's first contact-driven commander assignments are16.95 s, after the failing sample. This replaces the prior unexplained hypothesis with direct evidence. I did not alter `tests/platoon_tests.h`, the fixture, or no-contact Advance behavior to evade it. Proposed review amendment, **not applied**: require `a.taskNode && a.enemy>=0` for the bare known-sector safety predicate (and separately assert the no-flank/no-route report as today). Under the user's unchanged-assertion rule, **P01 remains failed**.

### P03 — a later Support replacement loses the original lift

Final phase-line lift: event27966 at130 s. Fixing leader receives the amendment by131.4 s; event28470 at132.10001 s records forwarding it. All active non-staff members have the lift by133.6 s (2.2 s after leader receipt; within the existing reportDelay+1 bound).

However, after event30128 at156 s assigns a different Support directive, event30165 at157.75 s accepts it and event30243 reports insufficient executable support slots. The new directive does not retain the original lifted area unless it passes the current same-directive retention check. Soldier0 then fires six shots within12 m of the original sector `(55,-9)`:

| Time (s) | Shooter | Aimed point (x,y) |
|---:|---:|---|
|171.15|0|54.2,-14.9|
|172.55|0|54.2,-14.9|
|220.15|0|54.2,-14.9|
|221.70|0|54.2,-14.9|
|223.00|0|54.2,-14.9|
|224.55|0|54.2,-14.9|

Evidence: `.local/phase4c/attempt3/traces/74/`, `trace-evidence.json`, `late-shots.json`. The trace proves the later replacement and renewed original-area fire; the code's same-directive-only lift retention explains the loss. This is a **defect**, not an intentional-change classification or an assertion to relax. Proposed next repair, **not implemented**: retain platoon fire-lane/lift permission independently of the fixing squad's task-instance replacement until fresh received assault clearance permits reopening it. No fourth attempt was made.

The accepted two rulings themselves are not disputed. I interpret matching flank arrivals inside the commanded objective radius as the platoon's flank phase-line receipt; it comes from the squad's production task receipts. That interpretation is recorded explicitly because the older code only emitted the local SquadAttack phase line. Weapon attachment across squads, Merge member transfer and company escalation remain Phase4d; none was implemented.

## Verification and gates not reached

- Final mechanism run: **24/26** selectors. All13 squad pairs and7 pins pass;4/6 platoon pairs pass. The plumbing selector's short authored trace checks pass, but are not the requested full-battle parity set.
- Python unittest: **63 PASS**,3.622 s. This ran during attempt2; Python files did not change afterward.
- Protected hashes: frozen seed lists, `tools/evaluate_routes.py`, authored layout/terrain source all unchanged. Drill/platoon fixtures and all existing test files unchanged. Final source matches its attempt3 snapshot. `git diff --check` passes. See `static-checks.json`.
- **Full default `./scripts/test-sim.sh` suite not run**: the script built and ran individual mechanism selectors, not the default full suite. The full suite was explicitly gated on all pairs/pins passing.
- **40 authored legacy/cognition digest checks not run** for this final source. No claim that prior Phase4 parity proves current parity.
- **Full drills trace on/off parity on both maps and F1 not run**; **20 authored/90 F1 distributions not run**; engagement guard, paired scoreboards, casualty/closure/order-rate and spacing per-run tables **not produced** because their all-mechanism prerequisite failed. There is no new measured tactical result or replacement baseline.
- Windows/Unreal not attempted, as instructed. No launcher, commit, reset, stash, protected edits, per-seed tuning, F2/F3, gun pickup or Phase4d implementation. Changes remain in the working tree.

## Commands and reproducible evidence

```sh
cat plans/014-phase4b-fable-review.md
python3 tools/source_id.py
./scripts/test-sim.sh --drills D03  # attempt1 build/initial check
./scripts/test-sim.sh --drills D05  # attempt2 build/initial check
./scripts/test-sim.sh --platoon P03 # attempt3 build/initial check; assertion failure
python3 .local/phase4c/run_attempt.py 1
python3 .local/phase4c/run_attempt.py 2
python3 .local/phase4c/run_attempt.py 3
./scripts/battle-lab.sh --drills --encounter 71 --seconds 100 --evaluate --out .local/phase4c/attemptN/traces/71 # N=1,2,3
python3 .local/phase4c/trace_attempt.py 1
python3 .local/phase4c/trace_attempt.py 2
python3 .local/phase4c/trace_attempt.py 3
.local/phase4c/attempt1/battle-lab --drills --encounter 53 --seconds 60 --evaluate --out .local/phase4c/attempt1/traces/53
.local/lab/battle-lab --drills --encounter 48 --seconds 80 --evaluate --out .local/phase4c/attempt3/traces/48
.local/lab/battle-lab --drills --encounter 72 --seconds 150 --evaluate --out .local/phase4c/attempt3/traces/72
bash .local/phase4c/observe.sh 71 # attempt1 and final-source observer diagnostic
.local/phase4c/observe 70       # attempt1 flank observer diagnostic
python3 -m unittest discover -s tests -p 'test_*.py'
git diff --check
python3 tools/source_id.py
```

Each `run_attempt.py` invokes all26 selectors in separate processes (including re-running the selector initially used to build); this is one mechanism evaluation per source, not another tactical attempt. Expanded commands and exit codes are in each `results.json`. Trace exports, stdout/assertions, per-attempt findings, immutable source snapshots and binaries are under `.local/phase4c/attempt{1,2,3}/`. The observer helper changes no simulation/fixture/assertion and emitted a warning from renaming the included test main; its separate main completed successfully. These diagnostic runs are not distribution measurements.

Final fingerprint: **982796dfe73d3f5f**. Stopped at the requested report with the failed mechanism gate disclosed.
