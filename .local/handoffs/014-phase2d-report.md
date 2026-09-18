# Plan 014 Phase 2d report — Astra, 17 September 2026

**Exit NOT MET; do not promote.** One fixed distribution build, `cdcfe811c96f3616`, was measured. All criteria pass on **0/20 authored runs** and **0/90 F1 runs**. Five of six mechanism pairs pass; D05's unchanged capable control still fails, now on formation/corridor allocation rather than the previous deadline loop. Legacy remains the playable default. No second measured build or tactical repair followed these results; stopping at this report.

## Implementation and scope

Read first: `plans/014-phase2c-fable-review.md`. Entry source `26e028623123f46e`; measured/final source `cdcfe811c96f3616`. Entry and frozen final source trees, the unchanged measured test header, and binaries are under `.local/phase2d/{entry,final}/`; the slice-only diff is `simulation.patch`. No source or test edits followed the distribution freeze.

Only four simulation files changed: `PositionSim.cpp`, `DrillSim.cpp`, `BattleSim.h`, and `Diagnostics.cpp`. Existing mechanism assertions and fixtures are unchanged, including D05's capable control. `tests/drills_tests.h` adds formation-generation and progress-clock pins. No historical controller branch, protected file, frozen seed list or evaluator changed. No commit, reset, stash, Fable launcher, Windows or Unreal invocation. Legacy remains the default. No Phase 3, platoon task tree or F2/F3 work.

1. **Two position modes.** Formation queries now consider only walkable projected-anchor candidates within 3 m (anchor, then deterministic 1/2/3 m rings), retaining area, corridor, coherence, reservation, spacing, threat and lane checks. They ignore the cover requirement and never borrow a catalogue slot. Halted/cover/contact queries retain catalogue generation. A new service pin uses truly bare terrain and pairs formation success with halted-cover failure; the existing authored-layout checks remain. Candidates are discrete, not an exhaustive continuous walkable-point search.
2. **Column and waiting.** Failed moving formations retry as a 4 m column on the accepted route. A coherence wait is permitted only for a member ahead of the centre whose anchor lies outside the coherence radius. If the column still cannot satisfy hard constraints, it reports Blocked upward instead of labelling that failure a coherence wait. This also applies to a partially unallocatable formation, so a member behind the centre is not left silently waiting. An empty/unusable accepted route can still cause allocation failure; D05 exposes this remaining defect.
3. **Cover after a free bound.** A `BoundCover` stage allocates halted cover to the just-arrived element before handing movement to the other element. This is part of the existing basic bound, not a new Phase 3 drill. The unselected element retains its orders throughout each stage. A completed free anchor is never falsely recorded as protected cover. Cover setup with no movers has no deadline; its completion path explicitly handles that state.
4. **Progress clock.** The stage stores eligible elapsed movement seconds and a path-time-plus-report-allowance budget. Matching received task ID/method/generation reports identify Shelter interruptions; arrival latches remove completed movers. The clock advances only if at least one unfinished mover is neither sheltering, slot-waiting nor in ContactHold. With no unfinished movers the budget is disabled. Individual drill orders carry no absolute execution deadline, so the soldier layer cannot independently time them out during a legitimate pause. Other controllers' execution contracts are unchanged. This is an eligibility clock, not a distance-regression estimator; the review's wording is implemented literally as a clock that only runs during eligible movement.
5. **Consumed expiry and forced change.** First expiry changes to a column bound. Two expiries within 6 m report Blocked upward and retain orders, traced with `drill_stage_advanced` reason `no progress`. If already forced into column, expiry reports Blocked immediately rather than issuing the same column again. Moving more than 6 m resets the consecutive-position counter; completed-drill Reorganise clears forced column. A blocked failure is not restarted by ordinary heartbeats or superiority updates. A new contact, effective-fire change or platoon directive can supply a new reason to act. No timeout enters the former unconditional Reorganise/re-accept loop.
6. **Fire-gated retreat.** No protected contact slots sets emergency retreat only when effective incoming fire is present. The execution transition checks that condition again, and loss of effective fire clears the flag. The bare-ground D04 control still tests the real emergency response; lifecycle pins assert `retreat` implies `effectiveFire`.

New deterministic state is hashed only inside the drills digest block. All policy inputs remain officer memory, own orders, received reports and the squad-member fields already permitted by plan 014. Exported metrics do not feed policy.

## Definitions and interpretations

Same corrected Phase 2c criteria, evaluated at full precision per run:

- **S:** shots at least candidate90; **C:** total casualties across both sides at least candidate90, measured as initial active minus final active. Each team's casualty fraction is disclosed separately.
- **N:** nearest-squadmate median at least 3 m; **U:** under-2 m share no greater than legacy.
- **F120/F240:** Azure front-line displacement at 120/240 s at least candidate90 on Works and F1. This uses the existing per-squad median surviving-member paired displacement, then the mean of surviving Azure squads. Trenches closure is disclosed but not gated. A missing horizon is NA and does not pass; no extrapolation.
- **O:** Azure own-side soldier orders per actual battle minute no greater than the digest-equal candidate90 reference. Includes NCO/self/staff soldier orders; excludes platoon directives, deliveries and reports. Ember rates are also disclosed. `tools/order_metrics.py` checks issued-order event counts against trace counts.
- Hits per soldier-minute is diagnostic: hit rounds divided by integrated active soldier-minutes across both sides, including friendly hits. It is not a policy input or exit gate.

The engagement guard remains active: fail after three zero-shot runs in a fixed ten-draw block. Only the requested authored seeds 100–109 and existing F1 development draws (gen1–30 × battle107–109) were opened. The 110 candidate90 traced order references from Phase 2c were reused, with both archived manifests and exact digests rechecked; no replacement candidate90 benchmark or retuning.

## Disagreements and limits

No disagreement with the four binding corrections or the stop rule. The prediction that the clock fix alone would make D05 pass is not borne out: the fixed trace fails column/corridor allocation before an expiry, while the assertion remains unchanged. One factual clarification: Phase 2c's service already emitted five anchor candidates, but mixed them with catalogue candidates and still imposed protection on contact-bound movement. The fix separates these modes and removes that protection filter; it is not the first anchor generation in the codebase.

The 6 m same-position tolerance, deterministic projection sampling and immediate Blocked result for an already exhausted column are implementation interpretations, not newly attributed architect rulings. Cover handover requires its own halted stage to preserve the existing protected-overwatch contract after changing moving endpoints to free ground. None of these choices is seed- or fixture-dependent.

The newly added bare-ground service test initially called the wrong fixture constructor (`MakeMGEncounter` instead of `MakeDrillEncounter`) and failed its new negative assertion. This was corrected before measurement. Premeasurement builds also caught that an already-forced column must report Blocked rather than reissue unchanged; the fixed distribution used only `cdcfe811c96f3616`. The CLI does not support `--help`; that initial build succeeded but the invocation returned 1 for the unknown argument. The final CLI build used a valid one-second smoke command.

## Mechanism and lifecycle results

Every pair ran in its own assert process with production sensing/transport and no injected receipts. Existing D01–D05/D17 assertions and `DrillFixtures.cpp` are unchanged from entry. Evidence: `mechanisms/results.json` and named logs under `.local/phase2d/`.

| Check | Result | Evidence |
|---|---|---|
| D01 /44–45 | PASS | 1,611 moving samples; 93.4823% at 6–14 m; all eight arrive; corridor control contained |
| D02 /46–47 | PASS | Received-only contact, 30–50 m separation, protected trailing element; no-report control travels and stays close |
| D03 /48–49 | PASS | Alternating bounds, continuous protected overwatch; maximum completed-bound separation 46.9951 m against unchanged 47 m limit; far control does not bound early |
| D04 /50–51 | PASS | Fire receipt 2.2 s; seven return shooters within four seconds; cover/path bound, spacing and assessment pass; bare emergency rear response passes |
| D05 /52–53 | **FAIL** | Support assessment occurs; capable control becomes Blocked. Weak-group report arrives after 3.9 s (limit four seconds) |
| D17 /54–55 | PASS | Independent allocation proves eight protected slots; scarce occupies five, ample eight; spacing passes |
| Lifecycle | PASS | 779 continue samples, 780 retained-overwatch samples, 1,086 latched receipt samples; orders require a same-tick transition and element changes require Reorganise |
| Added progress-clock pins | PASS | 113 paused-clock and 170 running-clock samples; paused clocks retain elapsed time, no mover-free deadline, no independent soldier timeout; retreat implies effective fire |
| Position service | PASS | Authored layouts 0/5/6/7, reservations, area and bound rejection; added bare-ground formation/control and 3 m projection bounds |
| Short plumbing | PASS | Trace on/off digest equality on both authored maps |

D05 fixed-build diagnostic (`fixture-diagnostics/D05-capable`, `D05-transitions.json`, `D05-position-rejections.json`): assessments at 7.60 s and 12.15 s retain a capable gun group. At **14.95 s**, contact-cover completion resumes closure; the projected formation and column retry both fail. All **302** emitted candidate rejection records on that tick say `outside accepted corridor`; Blocked is reported immediately. The effective-fire-end transition at 23.45 s retries under changed knowledge and encounters the same failure. **No stage deadline triggers this failure.** The outstanding defect is route/formation allocation; the exact upstream reason for the unusable corridor has not been established from the exported trace. `CorridorDistance` returns infinity for an empty route, a relevant code-level hypothesis, not a claimed observed route export. The D05 `support && !blocked` assertion is retained; no success is claimed.

## Commands and reproducibility

```sh
python3 tools/source_id.py
./scripts/test-sim.sh --drills positions
./scripts/battle-lab.sh --help  # build succeeded; unsupported option returned 1
./scripts/battle-lab.sh --drills --seconds 1 --no-trace --out .local/phase2d/build-smoke
./scripts/test-sim.sh
python3 -m unittest discover -s tests -p 'test_*.py'
python3 .local/phase2d/run_mechanisms.py
python3 .local/phase2d/measure.py
python3 .local/phase2d/trace_checks.py
.local/phase2d/final/battle-lab --drills --encounter 52 --seed 107 --seconds 60 --evaluate --out .local/phase2d/fixture-diagnostics/D05-capable
python3 .local/phase2d/precache_authored.py
python3 .local/phase2d/analyze.py
python3 tools/report_family.py .local/phase2d/f1-baselines-enriched.json .local/phase2d/f1-drills-enriched.json --out .local/phase2d/f1-report.json --markdown .local/phase2d/f1-report.md
python3 .local/phase2d/transition_audit.py
python3 .local/phase2d/static_checks.py
git diff --check
python3 tools/source_id.py
```

The position-test command was run twice during premeasurement checking (the first exposed the new test's wrong fixture constructor, described above). The final full-suite compilation produced the frozen mechanism executable. `measure.py` copies the fixed CLI binary and launches:

```sh
python3 .local/phase2d/run_authored.py
python3 .local/phase2d/parity.py .local/phase2d/authored-parity .local/phase2d/final/battle-lab
python3 tools/run_family.py --binary .local/phase2d/final/battle-lab --out .local/phase2d/f1-dev --family F1 --gen-seeds 1-30 --seeds 107-109 --controllers drills --seconds 360 --jobs 2 --trace
python3 tests/check_controller_defaults.py --binary .local/phase2d/final/battle-lab --out .local/phase2d/defaults
```

Exact per-run argv and manifest locations are in `authored/results.json`, `authored-parity/parity.json`, `f1-dev/family.json`, `trace-parity.json` and `measurement-status.json`. Authored measured drills runs use `--drills --terrain 0|1 --seed 100..109 --seconds 360 --evaluate` with tracing enabled. The 40 historical parity runs use explicit legacy/cognition and `--no-trace --evaluate` at the same settings. Drills trace parity repeats seed107 on both authored maps and F1 gen1/seed107 with tracing disabled. Baseline diagnostic caches were reused only for preserved baseline runs; candidate order rates are checked against their digest-equal archived traces. No observer metric is fed into simulation.

## Verification

| Check | Result | Evidence under `.local/phase2d/` |
|---|---|---|
| Final CLI build/smoke | PASS, `cdcfe811c96f3616-linux` | `build-cli-final.log`, `final/battle-lab` |
| Full `./scripts/test-sim.sh` | PASS, exit 0; 237.663 s | `full-suite.log`, `full-suite.exit` |
| Python tests | 52 PASS | `python-tests.log` |
| Defaults and manifest reruns | PASS, legacy default retained | `defaults.log` |
| Historical authored digests | **40/40 unchanged** | `authored-parity/parity.json` |
| Archived candidate90 order references | **110/110 revalidated** against both manifests; prior trace/event counts agree | `candidate-reference-revalidation.json`; source evidence `.local/phase2c/candidate-traces/parity.json` |
| Drills trace parity | **3/3 equal** | `trace-parity.json` |
| Mechanisms | Five pairs PASS; D05 FAIL; lifecycle/position/plumbing PASS | `mechanisms/` |
| Simulation/test freeze and protected files | PASS; D05 unchanged; four protected hashes match | `static-checks.json` |
| Native Windows/Unreal | Not run, explicitly left to architect | No native verification claimed |

Authored Works engagement guard: enabled=True, failed=False, zero-shot blocks=[].

Authored Trenches engagement guard: enabled=True, failed=False, zero-shot blocks=[].

F1 engagement guard: enabled=True, failed=False, zero-shot blocks=[].

Measured drills trace/event order counts agree on **110/110** runs. Full-precision metrics and diagnostic paths are in `enriched-runs.json`.

## Aggregate context (per-run exits remain binding)

| Set / controller | Shots | Total casualties | NN median m | <2m share | Closure120 m | Closure240 m | Azure orders/min | Hits/soldier-min |
|---|---:|---:|---:|---:|---:|---:|---:|---:|
| Works / legacy | 2306.500 | 38.000 | 6.539 | 0.164 | 94.741 | 91.292 | 210.150 | 0.468 |
| Works / candidate90 | 988.400 | 38.800 | 0.976 | 0.797 | 108.806 | 109.355 | 64.333 | 0.502 |
| Works / drills | 973.800 | 14.400 | 5.413 | 0.039 | 73.419 | 75.803 | 88.717 | 0.142 |
| Trenches / legacy | 1989.300 | 32.900 | 3.946 | 0.313 | 35.672 | 37.111 | 255.383 | 0.410 |
| Trenches / candidate90 | 798.900 | 16.600 | 1.454 | 0.665 | 39.698 | 35.936 | 611.033 | 0.176 |
| Trenches / drills | 495.600 | 6.500 | 2.657 | 0.365 | 25.134 | 27.685 | 78.217 | 0.084 |
| F1 / legacy | 718.200 | 15.767 | 5.102 | 0.136 | 53.498 | 54.087 | 127.523 | 0.496 |
| F1 / candidate90 | 450.544 | 12.989 | 3.109 | 0.384 | 48.768 | 48.803 | 39.846 | 0.452 |
| F1 / drills | 757.711 | 16.900 | 7.102 | 0.034 | 46.037 | 44.289 | 59.394 | 0.607 |

Per-criterion passes:

| Set | Complete | All criteria | S | C | N | U | F120 | F240 | O |
|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|
| authored | 20 | 0 | 7 | 0 | 11 | 12 | 0 | 0 | 10 |
| f1 | 90 | 0 | 76 | 67 | 90 | 87 | 23 | 19 | 24 |

F120/F240 authored pass counts have ten eligible Works cases, not twenty. Family distributions, 95% bootstrap intervals (2,000 generated-map cluster resamples) and paired deltas against both baseline controllers are in [the family scoreboard](../phase2d/f1-report.md) and `f1-report.json`. Means above use available evidence for each metric; missing closure horizons do not pass their per-run criterion.

Works107 order audit: **560 Azure orders / six minutes = 93.333/min**, down from Phase2c's 1,096 / 182.667/min but above candidate90's **344 / 57.333/min**. `works107-transitions.json` records no old `stage deadline: ... Reorganise` events. Of the 560 orders, 187 follow new-contact transitions, 119 follow matching arrivals, 73 follow failed-column allocation, and 48 are unmatched by a same-tick drill transition (the inherited staff-following path remains outside DrillSim). Blocked allocation trace entries are emitted per failed member; their 70-entry count is not 70 independent stage changes. Residual churn and failed allocations remain defects, not a waived ceiling.

Works103 allocation audit: squad3 has 18 allocated-slot records during the battle, compared with none in the reviewed Phase2c trace. Its first cover setup still lacks slots; subsequent free movement produces allocations. This confirms the original permanent catalogue-only stall is changed, but is not proof of tactical success. See `works103-allocation-audit.json`.

## Authored per-run table

D = drills, C = candidate90, L = legacy; casualty fractions are Azure/Ember. Adverse criteria list every failed gate, including O from the separate order-rate table.

| Map / seed | Shots D/C | Casualties D/C | D casualty % A/E | NN m | <2m % D/L | Closure120 D/C m | Closure240 D/C m | Adverse criteria |
|---|---:|---:|---:|---:|---:|---:|---:|---|
| trenches / 100 | 803/598 | 8/11 | 6.2/18.8 | 2.41 | 40.0/28.5 | 24.8/42.1 | 26.1/41.2 | C,N,U |
| trenches / 101 | 481/1342 | 5/17 | 3.1/12.5 | 2.67 | 37.2/33.4 | 24.0/37.7 | 23.7/27.9 | S,C,N,U |
| trenches / 102 | 962/1179 | 17/23 | 21.9/31.2 | 2.79 | 34.4/39.5 | 24.0/32.2 | 25.6/36.5 | S,C,N |
| trenches / 103 | 239/511 | 2/14 | 3.1/3.1 | 2.66 | 40.7/30.4 | 28.5/41.6 | 33.7/33.4 | S,C,N,U |
| trenches / 104 | 521/817 | 8/18 | 3.1/21.9 | 3.06 | 35.2/40.3 | 30.6/39.9 | 35.0/34.4 | S,C |
| trenches / 105 | 379/558 | 4/15 | 3.1/9.4 | 2.64 | 30.6/27.8 | 23.6/40.5 | 28.2/32.0 | S,C,N,U |
| trenches / 106 | 205/552 | 2/13 | 0.0/6.2 | 2.81 | 34.0/27.0 | 24.3/43.7 | 24.3/36.9 | S,C,N,U |
| trenches / 107 | 507/655 | 6/15 | 9.4/9.4 | 2.43 | 38.8/28.8 | 23.0/39.9 | 29.4/39.2 | S,C,N,U |
| trenches / 108 | 387/385 | 5/10 | 9.4/6.2 | 2.25 | 42.8/30.5 | 24.1/41.7 | 23.9/37.2 | C,N,U |
| trenches / 109 | 472/1392 | 8/30 | 12.5/12.5 | 2.84 | 31.2/26.7 | 24.6/37.7 | 26.9/40.5 | S,C,N,U |
| works / 100 | 1263/839 | 16/37 | 31.2/18.8 | 4.80 | 3.6/16.2 | 72.2/108.4 | 74.1/106.8 | O,C,F120,F240 |
| works / 101 | 1049/1038 | 19/41 | 37.5/21.9 | 5.72 | 5.0/23.5 | 72.8/108.3 | 81.3/106.4 | O,C,F120,F240 |
| works / 102 | 718/965 | 8/45 | 3.1/21.9 | 4.17 | 7.4/16.5 | 73.5/106.2 | 76.9/118.0 | O,S,C,F120,F240 |
| works / 103 | 845/1272 | 15/42 | 28.1/18.8 | 6.35 | 4.0/19.2 | 73.8/112.3 | 75.7/104.8 | O,S,C,F120,F240 |
| works / 104 | 1428/1067 | 19/41 | 37.5/21.9 | 5.30 | 2.2/14.2 | 76.6/110.5 | 75.4/109.7 | O,C,F120,F240 |
| works / 105 | 1073/1003 | 13/34 | 25.0/15.6 | 5.96 | 3.5/13.3 | 73.0/109.4 | 74.2/109.6 | O,C,F120,F240 |
| works / 106 | 1320/973 | 17/40 | 25.0/28.1 | 5.40 | 3.3/16.5 | 74.2/108.8 | 74.9/109.9 | O,C,F120,F240 |
| works / 107 | 1047/1197 | 15/41 | 15.6/31.2 | 4.90 | 5.4/12.5 | 74.2/109.8 | 75.1/109.6 | O,S,C,F120,F240 |
| works / 108 | 586/841 | 12/39 | 21.9/15.6 | 5.73 | 2.3/17.3 | 73.9/107.3 | 72.6/110.6 | O,S,C,F120,F240 |
| works / 109 | 409/689 | 10/28 | 25.0/6.2 | 5.81 | 2.1/15.1 | 70.0/107.1 | 77.8/108.1 | O,S,C,F120,F240 |

## F1 development per-run table

| Gen / seed | Shots D/C | Casualties D/C | D casualty % A/E | NN m | <2m % D/L | Closure120 D/C m | Closure240 D/C m | Adverse criteria |
|---|---:|---:|---:|---:|---:|---:|---:|---|
| 1 / 107 | 1180/466 | 25/14 | 91.7/25.0 | 8.54 | 1.5/11.1 | 60.3/71.0 | 76.7/73.1 | F120 |
| 1 / 108 | 832/411 | 20/12 | 79.2/8.3 | 5.64 | 1.1/13.2 | 56.5/61.4 | 43.5/74.4 | F120,F240 |
| 1 / 109 | 1118/512 | 29/11 | 79.2/83.3 | 8.46 | 4.5/10.2 | 69.6/69.3 | 69.1/70.6 | O,F240 |
| 2 / 107 | 300/205 | 6/14 | 8.3/100.0 | 7.46 | 3.3/26.0 | 49.0/NA | NA/NA | O,C,F120,F240 |
| 2 / 108 | 303/247 | 8/16 | 16.7/100.0 | 7.93 | 3.7/26.8 | 55.2/58.1 | NA/NA | O,C,F120,F240 |
| 2 / 109 | 402/132 | 9/8 | 20.8/100.0 | 6.54 | 3.6/26.0 | 44.3/NA | NA/NA | F120,F240 |
| 3 / 107 | 424/421 | 14/11 | 33.3/100.0 | 7.52 | 2.6/17.9 | NA/5.4 | NA/5.4 | O,F120,F240 |
| 3 / 108 | 497/581 | 13/13 | 29.2/100.0 | 8.65 | 2.8/16.9 | NA/9.0 | NA/7.8 | O,S,F120,F240 |
| 3 / 109 | 562/552 | 15/13 | 37.5/100.0 | 7.33 | 2.4/12.3 | 38.4/9.9 | NA/7.8 | O,F240 |
| 4 / 107 | 462/213 | 16/10 | 62.5/16.7 | 4.38 | 10.8/17.6 | 28.6/13.9 | 27.2/12.7 | O |
| 4 / 108 | 407/262 | 18/12 | 50.0/100.0 | 5.40 | 1.7/15.8 | 38.5/17.5 | NA/12.5 | O,F240 |
| 4 / 109 | 547/172 | 13/10 | 29.2/100.0 | 5.91 | 8.4/14.7 | 31.8/7.5 | NA/4.3 | O,F240 |
| 5 / 107 | 1600/806 | 30/17 | 100.0/75.0 | 7.81 | 4.8/11.9 | 67.3/68.6 | 64.8/69.2 | O,F120,F240 |
| 5 / 108 | 1326/564 | 22/17 | 87.5/12.5 | 6.04 | 2.2/15.5 | 63.3/67.5 | 62.2/67.4 | O,F120,F240 |
| 5 / 109 | 1127/644 | 21/14 | 54.2/100.0 | 9.45 | 1.4/12.8 | 64.3/68.3 | 66.0/68.1 | F120,F240 |
| 6 / 107 | 731/338 | 23/10 | 62.5/100.0 | 6.61 | 10.8/32.7 | 27.0/45.6 | 37.9/45.2 | O,F120,F240 |
| 6 / 108 | 815/497 | 25/18 | 70.8/100.0 | 7.85 | 1.9/16.8 | 19.9/47.1 | 26.5/46.8 | O,F120,F240 |
| 6 / 109 | 661/427 | 18/14 | 41.7/100.0 | 6.52 | 4.2/10.8 | 44.9/46.8 | NA/46.7 | O,F120,F240 |
| 7 / 107 | 454/749 | 7/7 | 6.2/100.0 | 6.63 | 1.4/15.6 | 56.7/65.3 | NA/63.8 | O,S,F120,F240 |
| 7 / 108 | 1219/513 | 16/8 | 75.0/66.7 | 6.92 | 1.1/11.5 | 55.7/63.0 | 59.1/64.1 | O,F120,F240 |
| 7 / 109 | 854/754 | 11/10 | 31.2/100.0 | 6.50 | 4.5/8.7 | 58.2/63.0 | NA/61.4 | O,F120,F240 |
| 8 / 107 | 617/435 | 13/11 | 75.0/10.0 | 5.30 | 9.8/13.3 | 36.9/55.0 | 23.4/55.4 | F120,F240 |
| 8 / 108 | 587/468 | 17/11 | 100.0/10.0 | 8.15 | 2.5/5.9 | 44.8/56.8 | 57.4/56.4 | O,F120 |
| 8 / 109 | 539/381 | 14/9 | 87.5/0.0 | 8.37 | 1.1/9.3 | 26.9/57.0 | 34.5/57.0 | O,F120,F240 |
| 9 / 107 | 889/488 | 30/17 | 87.5/90.0 | 8.73 | 2.4/17.7 | 65.4/73.3 | 63.1/73.0 | F120,F240 |
| 9 / 108 | 680/396 | 22/12 | 50.0/100.0 | 6.86 | 4.8/14.4 | 69.1/74.8 | NA/73.5 | O,F120,F240 |
| 9 / 109 | 921/587 | 27/18 | 70.8/100.0 | 7.23 | 7.2/11.3 | 69.3/74.5 | 76.5/72.6 | O,F120 |
| 10 / 107 | 467/443 | 14/14 | 81.2/10.0 | 6.72 | 0.5/9.3 | 33.8/53.8 | 15.4/49.7 | F120,F240 |
| 10 / 108 | 448/468 | 16/14 | 100.0/0.0 | 6.72 | 1.1/5.3 | 47.3/51.6 | NA/50.6 | O,S,F120,F240 |
| 10 / 109 | 293/237 | 6/11 | 31.2/10.0 | 5.32 | 0.4/15.2 | 16.1/48.2 | 16.1/48.4 | C,F120,F240 |
| 11 / 107 | 258/1189 | 4/17 | 16.7/0.0 | 4.88 | 6.5/17.9 | 45.2/56.5 | 45.2/60.9 | S,C,F120,F240 |
| 11 / 108 | 844/1045 | 13/14 | 29.2/100.0 | 7.12 | 6.3/17.1 | 53.6/56.1 | NA/59.7 | O,S,C,F120,F240 |
| 11 / 109 | 1218/1216 | 13/22 | 45.8/33.3 | 8.02 | 5.7/10.5 | 53.0/57.6 | 55.1/58.1 | C,F120,F240 |
| 12 / 107 | 753/187 | 5/10 | 6.2/100.0 | 6.29 | 2.4/14.5 | 75.8/NA | NA/NA | O,C,F120,F240 |
| 12 / 108 | 377/706 | 4/12 | 0.0/100.0 | 7.51 | 4.2/19.0 | 80.3/67.4 | NA/76.6 | O,S,C,F240 |
| 12 / 109 | 402/573 | 6/7 | 12.5/100.0 | 6.33 | 5.1/17.0 | 74.4/76.9 | NA/NA | O,S,C,F120,F240 |
| 13 / 107 | 1351/739 | 18/17 | 100.0/16.7 | 6.00 | 0.7/9.3 | 51.4/66.2 | 72.5/68.9 | F120 |
| 13 / 108 | 1150/654 | 17/14 | 100.0/8.3 | 6.55 | 1.6/3.7 | 67.8/66.6 | NA/70.7 | O,F240 |
| 13 / 109 | 860/607 | 18/10 | 93.8/25.0 | 5.41 | 1.2/4.4 | 54.4/60.8 | 67.5/67.8 | F120,F240 |
| 14 / 107 | 1019/592 | 20/15 | 100.0/50.0 | 6.68 | 7.0/20.9 | 65.8/64.0 | NA/63.8 | O,F240 |
| 14 / 108 | 1129/411 | 15/10 | 81.2/25.0 | 4.61 | 2.4/25.7 | 61.0/65.2 | 63.0/64.7 | F120,F240 |
| 14 / 109 | 1302/658 | 17/12 | 93.8/25.0 | 4.61 | 2.1/18.0 | 58.0/66.4 | 56.9/64.7 | F120,F240 |
| 15 / 107 | 492/360 | 9/12 | 50.0/8.3 | 5.14 | 0.7/8.5 | 56.4/60.5 | 55.9/60.5 | C,F120,F240 |
| 15 / 108 | 756/495 | 19/14 | 100.0/25.0 | 5.71 | 1.6/10.5 | 56.8/60.0 | NA/61.0 | O,F120,F240 |
| 15 / 109 | 289/537 | 10/13 | 50.0/16.7 | 8.79 | 0.8/8.1 | 52.7/63.7 | 52.7/67.6 | S,C,F120,F240 |
| 16 / 107 | 463/227 | 17/5 | 100.0/12.5 | 4.52 | 4.1/11.5 | 36.8/18.2 | NA/18.2 | O,F240 |
| 16 / 108 | 363/158 | 12/4 | 50.0/50.0 | 10.70 | 0.9/13.3 | 32.9/1.8 | 27.2/1.8 | O |
| 16 / 109 | 334/298 | 11/11 | 56.2/25.0 | 9.76 | 1.3/7.8 | 25.3/22.3 | 25.3/22.3 | O |
| 17 / 107 | 846/219 | 26/12 | 100.0/16.7 | 6.00 | 1.3/9.4 | 42.4/52.2 | 50.6/52.2 | O,F120,F240 |
| 17 / 108 | 937/294 | 24/10 | 91.7/16.7 | 7.44 | 1.5/5.0 | 39.2/51.8 | 37.1/52.0 | F120,F240 |
| 17 / 109 | 1297/356 | 32/22 | 100.0/66.7 | 9.86 | 2.2/6.2 | 41.2/51.6 | 49.6/51.7 | O,F120,F240 |
| 18 / 107 | 1304/286 | 29/14 | 95.8/50.0 | 8.98 | 3.1/6.0 | 37.0/52.0 | 40.8/52.0 | O,F120,F240 |
| 18 / 108 | 1590/513 | 28/21 | 83.3/66.7 | 7.73 | 5.1/4.2 | 36.0/48.2 | 45.7/48.2 | U,F120,F240 |
| 18 / 109 | 1503/303 | 23/17 | 83.3/25.0 | 7.43 | 8.7/5.8 | 21.3/50.9 | 34.1/50.9 | O,U,F120,F240 |
| 19 / 107 | 801/447 | 29/16 | 79.2/83.3 | 9.90 | 3.1/11.1 | 33.3/29.2 | 37.5/29.0 | O |
| 19 / 108 | 849/526 | 28/16 | 100.0/33.3 | 5.68 | 2.1/10.3 | 31.3/29.8 | 15.6/30.9 | O,F240 |
| 19 / 109 | 596/547 | 16/23 | 66.7/0.0 | 5.43 | 2.8/15.4 | 28.9/31.0 | 36.2/21.6 | O,C,F120 |
| 20 / 107 | 777/383 | 17/20 | 33.3/90.0 | 6.33 | 11.9/11.8 | 31.2/43.7 | 44.2/44.0 | O,C,U,F120 |
| 20 / 108 | 1074/484 | 22/22 | 50.0/100.0 | 8.96 | 5.0/16.8 | 33.5/44.1 | 47.6/45.2 | O,F120 |
| 20 / 109 | 1023/602 | 23/27 | 54.2/100.0 | 9.87 | 6.8/9.4 | 26.9/47.5 | 27.3/44.6 | O,C,F120,F240 |
| 21 / 107 | 534/54 | 15/2 | 87.5/8.3 | 6.00 | 1.2/3.4 | 33.8/3.0 | 36.5/3.0 | O |
| 21 / 108 | 617/33 | 18/3 | 100.0/16.7 | 6.00 | 1.5/3.5 | 28.9/3.4 | 41.8/3.4 | O |
| 21 / 109 | 711/65 | 13/2 | 68.8/16.7 | 6.00 | 0.5/7.7 | 28.3/3.3 | 35.6/3.3 | O |
| 22 / 107 | 1515/401 | 21/7 | 79.2/20.0 | 6.00 | 1.3/11.2 | 64.4/76.4 | 58.2/76.4 | O,F120,F240 |
| 22 / 108 | 1153/554 | 18/6 | 70.8/10.0 | 5.91 | 1.0/14.7 | 66.0/75.8 | 56.5/75.2 | O,F120,F240 |
| 22 / 109 | 782/284 | 12/9 | 45.8/10.0 | 5.03 | 7.1/17.0 | 65.8/75.3 | 57.8/75.4 | F120,F240 |
| 23 / 107 | 952/727 | 19/25 | 70.8/33.3 | 5.36 | 1.1/23.4 | 35.0/51.5 | 36.6/53.5 | O,C,F120,F240 |
| 23 / 108 | 1030/480 | 24/16 | 87.5/50.0 | 6.60 | 3.9/27.6 | 42.2/52.5 | 44.2/52.6 | O,F120,F240 |
| 23 / 109 | 831/478 | 14/16 | 33.3/100.0 | 5.66 | 5.9/24.2 | 42.7/49.4 | NA/49.4 | O,C,F120,F240 |
| 24 / 107 | 408/432 | 15/16 | 75.0/30.0 | 4.46 | 1.1/8.9 | 34.8/46.3 | 30.0/41.8 | O,S,C,F120,F240 |
| 24 / 108 | 418/436 | 15/13 | 93.8/0.0 | 5.89 | 0.5/13.0 | 26.1/42.4 | 10.1/39.5 | O,S,F120,F240 |
| 24 / 109 | 539/260 | 12/11 | 62.5/20.0 | 6.92 | 0.8/15.6 | 27.3/42.0 | 23.6/41.8 | O,F120,F240 |
| 25 / 107 | 282/355 | 6/13 | 12.5/100.0 | 8.25 | 3.0/15.7 | 65.0/57.0 | NA/69.7 | O,S,C,F240 |
| 25 / 108 | 625/715 | 8/14 | 25.0/100.0 | 7.49 | 9.8/19.5 | 69.1/58.0 | NA/67.9 | O,S,C,F240 |
| 25 / 109 | 391/459 | 8/9 | 25.0/100.0 | 4.96 | 2.1/20.2 | 68.3/57.5 | NA/NA | O,S,C,F240 |
| 26 / 107 | 795/515 | 24/20 | 62.5/90.0 | 7.75 | 10.7/11.8 | 33.6/46.8 | 35.5/NA | F120,F240 |
| 26 / 108 | 686/540 | 28/20 | 75.0/100.0 | 9.90 | 2.9/14.0 | 32.0/44.6 | 36.9/43.1 | O,F120,F240 |
| 26 / 109 | 682/538 | 21/24 | 58.3/70.0 | 9.90 | 9.7/14.7 | 19.0/48.1 | 28.4/47.0 | O,C,F120,F240 |
| 27 / 107 | 479/216 | 16/14 | 41.7/100.0 | 8.99 | 1.9/11.6 | 30.0/NA | NA/NA | F120,F240 |
| 27 / 108 | 426/227 | 11/13 | 20.8/100.0 | 9.90 | 2.7/21.8 | 33.0/NA | NA/NA | C,F120,F240 |
| 27 / 109 | 592/354 | 11/12 | 20.8/100.0 | 9.90 | 1.9/16.5 | 24.9/40.8 | 33.9/40.4 | O,C,F120,F240 |
| 28 / 107 | 760/142 | 21/9 | 75.0/30.0 | 8.57 | 0.6/7.6 | 37.9/0.0 | 26.5/0.0 | O |
| 28 / 108 | 325/154 | 8/7 | 29.2/10.0 | 9.90 | 0.4/17.5 | 22.0/2.1 | 22.0/0.0 | O |
| 28 / 109 | 568/124 | 16/7 | 62.5/10.0 | 9.90 | 2.3/12.9 | 33.6/0.0 | 19.3/0.0 | O |
| 29 / 107 | 1331/924 | 22/20 | 83.3/25.0 | 5.00 | 2.9/11.4 | 61.4/52.5 | 61.6/64.2 | O,F240 |
| 29 / 108 | 1004/641 | 22/12 | 58.3/100.0 | 7.90 | 5.0/14.3 | 56.9/59.8 | 67.2/63.8 | O,F120 |
| 29 / 109 | 1108/547 | 23/12 | 62.5/100.0 | 6.00 | 5.5/10.5 | 57.2/59.8 | NA/63.9 | O,F120,F240 |
| 30 / 107 | 101/212 | 4/4 | 25.0/0.0 | 6.96 | 0.5/9.4 | 39.9/77.7 | 39.9/77.7 | S,F120,F240 |
| 30 / 108 | 723/248 | 18/7 | 93.8/30.0 | 7.68 | 1.4/19.5 | 72.5/76.2 | 78.4/76.2 | O,F120 |
| 30 / 109 | 607/453 | 15/11 | 68.8/40.0 | 6.66 | 1.2/11.8 | 57.1/77.6 | 58.5/76.6 | F120,F240 |

## Per-run order and hit rates

| Map or F1 gen / seed | Orders/min Azure D/C | Orders/min Ember D/C | Hits/soldier-min D/C | Churn exit |
|---|---:|---:|---:|---|
| trenches / 100 | 77.33/509.50 | 85.50/42.67 | 0.089/0.104 | PASS |
| trenches / 101 | 64.17/313.33 | 75.50/674.33 | 0.082/0.181 | PASS |
| trenches / 102 | 88.00/836.17 | 89.00/469.17 | 0.169/0.253 | PASS |
| trenches / 103 | 82.50/473.00 | 99.67/273.17 | 0.037/0.182 | PASS |
| trenches / 104 | 77.33/670.00 | 84.00/523.33 | 0.106/0.193 | PASS |
| trenches / 105 | 67.67/428.33 | 72.17/398.83 | 0.068/0.143 | PASS |
| trenches / 106 | 64.00/983.00 | 56.33/550.33 | 0.032/0.132 | PASS |
| trenches / 107 | 81.50/580.33 | 106.00/407.00 | 0.072/0.152 | PASS |
| trenches / 108 | 87.17/703.17 | 75.83/751.33 | 0.077/0.111 | PASS |
| trenches / 109 | 92.50/613.50 | 100.33/256.00 | 0.111/0.309 | PASS |
| works / 100 | 102.00/68.33 | 102.83/62.50 | 0.160/0.480 | O |
| works / 101 | 103.67/57.17 | 107.67/61.67 | 0.180/0.552 | O |
| works / 102 | 84.33/69.83 | 70.17/61.67 | 0.082/0.627 | O |
| works / 103 | 91.33/69.50 | 79.83/63.33 | 0.146/0.543 | O |
| works / 104 | 85.00/64.17 | 86.83/63.50 | 0.193/0.522 | O |
| works / 105 | 87.33/69.50 | 85.17/60.50 | 0.144/0.415 | O |
| works / 106 | 97.83/66.17 | 95.00/87.50 | 0.184/0.513 | O |
| works / 107 | 93.33/57.33 | 86.50/61.67 | 0.154/0.535 | O |
| works / 108 | 68.17/59.83 | 61.67/66.00 | 0.098/0.491 | O |
| works / 109 | 74.17/61.50 | 53.00/69.83 | 0.084/0.343 | O |
| F1 gen1 / 107 | 62.33/64.00 | 4.50/3.83 | 0.633/0.283 | PASS |
| F1 gen1 / 108 | 59.50/70.50 | 3.67/3.33 | 0.411/0.233 | PASS |
| F1 gen1 / 109 | 60.50/54.17 | 5.83/3.83 | 0.773/0.209 | O |
| F1 gen2 / 107 | 127.29/98.55 | 2.88/4.11 | 0.417/1.039 | O |
| F1 gen2 / 108 | 127.25/105.22 | 3.53/3.74 | 0.423/1.113 | O |
| F1 gen2 / 109 | 104.23/117.46 | 1.83/4.44 | 0.420/0.673 | PASS |
| F1 gen3 / 107 | 168.07/17.50 | 5.87/1.00 | 1.455/0.248 | O |
| F1 gen3 / 108 | 117.23/21.33 | 4.26/1.00 | 0.827/0.326 | O |
| F1 gen3 / 109 | 118.15/18.83 | 5.59/1.67 | 0.852/0.360 | O |
| F1 gen4 / 107 | 26.33/21.17 | 1.00/1.00 | 0.457/0.251 | O |
| F1 gen4 / 108 | 79.06/23.50 | 3.16/1.33 | 0.833/0.304 | O |
| F1 gen4 / 109 | 60.37/19.00 | 3.46/1.33 | 0.496/0.213 | O |
| F1 gen5 / 107 | 50.00/41.17 | 3.57/2.00 | 1.131/0.459 | O |
| F1 gen5 / 108 | 41.67/36.00 | 2.00/2.00 | 0.690/0.498 | O |
| F1 gen5 / 109 | 38.67/42.00 | 3.11/2.00 | 0.664/0.375 | PASS |
| F1 gen6 / 107 | 53.25/30.00 | 3.73/2.00 | 0.734/0.258 | O |
| F1 gen6 / 108 | 55.83/29.83 | 4.46/2.00 | 0.798/0.532 | O |
| F1 gen6 / 109 | 77.52/31.00 | 6.51/2.00 | 0.733/0.372 | O |
| F1 gen7 / 107 | 50.48/18.00 | 5.00/1.00 | 0.739/0.301 | O |
| F1 gen7 / 108 | 25.17/17.00 | 1.33/1.00 | 0.621/0.283 | O |
| F1 gen7 / 109 | 56.27/17.83 | 2.98/1.00 | 0.710/0.363 | O |
| F1 gen8 / 107 | 26.67/27.50 | 3.50/4.00 | 0.410/0.396 | PASS |
| F1 gen8 / 108 | 42.36/26.17 | 3.37/4.50 | 0.532/0.350 | O |
| F1 gen8 / 109 | 38.17/27.83 | 3.17/4.17 | 0.445/0.296 | O |
| F1 gen9 / 107 | 47.50/60.17 | 4.50/3.67 | 0.929/0.391 | PASS |
| F1 gen9 / 108 | 90.30/53.17 | 7.53/3.67 | 0.785/0.279 | O |
| F1 gen9 / 109 | 66.40/55.17 | 5.28/3.50 | 0.830/0.472 | O |
| F1 gen10 / 107 | 29.17/29.83 | 3.33/3.50 | 0.446/0.497 | PASS |
| F1 gen10 / 108 | 73.28/30.33 | 4.91/3.33 | 0.861/0.463 | O |
| F1 gen10 / 109 | 17.67/35.50 | 3.33/3.50 | 0.158/0.403 | PASS |
| F1 gen11 / 107 | 23.33/46.99 | 1.00/2.85 | 0.094/0.547 | PASS |
| F1 gen11 / 108 | 87.52/47.56 | 4.33/1.95 | 0.616/0.452 | O |
| F1 gen11 / 109 | 44.67/61.30 | 1.67/2.22 | 0.307/0.985 | PASS |
| F1 gen12 / 107 | 82.82/69.57 | 1.47/3.16 | 0.324/1.084 | O |
| F1 gen12 / 108 | 106.02/33.07 | 3.21/1.49 | 0.393/0.617 | O |
| F1 gen12 / 109 | 116.65/37.99 | 2.44/1.78 | 0.473/0.501 | O |
| F1 gen13 / 107 | 36.25/37.50 | 5.03/3.67 | 0.543/0.529 | PASS |
| F1 gen13 / 108 | 48.47/39.50 | 7.44/3.33 | 0.677/0.413 | O |
| F1 gen13 / 109 | 32.17/40.50 | 5.50/3.67 | 0.628/0.233 | PASS |
| F1 gen14 / 107 | 51.79/31.67 | 4.62/1.67 | 1.236/0.619 | O |
| F1 gen14 / 108 | 23.67/30.67 | 2.67/2.33 | 0.638/0.343 | PASS |
| F1 gen14 / 109 | 26.17/26.17 | 2.00/2.33 | 0.768/0.456 | PASS |
| F1 gen15 / 107 | 23.50/24.67 | 4.00/3.67 | 0.250/0.385 | PASS |
| F1 gen15 / 108 | 40.31/28.50 | 7.73/4.17 | 0.886/0.453 | O |
| F1 gen15 / 109 | 20.50/30.50 | 4.50/3.67 | 0.253/0.453 | PASS |
| F1 gen16 / 107 | 71.38/24.00 | 6.53/2.83 | 1.274/0.158 | O |
| F1 gen16 / 108 | 25.00/19.00 | 4.33/2.00 | 0.453/0.121 | O |
| F1 gen16 / 109 | 24.00/20.67 | 3.33/2.00 | 0.398/0.376 | O |
| F1 gen17 / 107 | 66.25/43.33 | 5.02/4.00 | 0.711/0.300 | O |
| F1 gen17 / 108 | 48.83/57.17 | 4.50/4.00 | 0.606/0.212 | PASS |
| F1 gen17 / 109 | 48.83/44.33 | 5.81/4.00 | 0.866/0.592 | O |
| F1 gen18 / 107 | 59.00/50.50 | 6.00/4.83 | 0.926/0.315 | O |
| F1 gen18 / 108 | 57.83/60.50 | 6.00/3.67 | 0.729/0.614 | PASS |
| F1 gen18 / 109 | 55.50/40.67 | 5.33/3.67 | 0.580/0.410 | O |
| F1 gen19 / 107 | 70.17/28.00 | 6.67/7.67 | 0.845/0.352 | O |
| F1 gen19 / 108 | 78.00/35.50 | 6.64/7.50 | 0.825/0.388 | O |
| F1 gen19 / 109 | 67.67/35.33 | 5.00/7.67 | 0.367/0.638 | O |
| F1 gen20 / 107 | 65.00/36.33 | 4.50/4.67 | 0.384/0.584 | O |
| F1 gen20 / 108 | 92.38/39.50 | 6.37/5.50 | 0.713/0.686 | O |
| F1 gen20 / 109 | 90.61/36.67 | 7.77/6.00 | 0.662/0.954 | O |
| F1 gen21 / 107 | 31.67/8.50 | 4.83/3.67 | 0.434/0.057 | O |
| F1 gen21 / 108 | 44.70/7.67 | 6.47/4.50 | 0.554/0.066 | O |
| F1 gen21 / 109 | 30.33/7.33 | 4.83/3.67 | 0.366/0.070 | O |
| F1 gen22 / 107 | 51.67/49.00 | 4.17/3.17 | 0.561/0.182 | O |
| F1 gen22 / 108 | 53.50/44.67 | 3.00/2.83 | 0.428/0.129 | O |
| F1 gen22 / 109 | 46.33/54.17 | 3.33/3.50 | 0.245/0.176 | PASS |
| F1 gen23 / 107 | 38.67/22.50 | 1.00/1.67 | 0.537/1.198 | O |
| F1 gen23 / 108 | 51.83/23.83 | 1.33/1.00 | 0.887/0.493 | O |
| F1 gen23 / 109 | 95.76/23.83 | 3.03/1.00 | 0.584/0.511 | O |
| F1 gen24 / 107 | 40.17/28.17 | 3.83/4.17 | 0.547/0.635 | O |
| F1 gen24 / 108 | 37.00/28.67 | 3.33/3.33 | 0.498/0.447 | O |
| F1 gen24 / 109 | 43.83/28.33 | 4.17/3.50 | 0.401/0.372 | O |
| F1 gen25 / 107 | 83.62/41.00 | 3.36/4.33 | 0.516/0.565 | O |
| F1 gen25 / 108 | 72.61/36.45 | 2.02/1.49 | 0.524/0.743 | O |
| F1 gen25 / 109 | 64.64/41.68 | 2.11/1.96 | 0.495/0.550 | O |
| F1 gen26 / 107 | 49.67/78.28 | 5.33/10.96 | 0.623/1.048 | PASS |
| F1 gen26 / 108 | 79.71/34.00 | 7.88/4.33 | 0.945/0.547 | O |
| F1 gen26 / 109 | 43.83/33.00 | 4.50/4.17 | 0.520/0.675 | O |
| F1 gen27 / 107 | 114.29/134.86 | 3.98/5.24 | 0.758/1.305 | PASS |
| F1 gen27 / 108 | 108.43/132.83 | 4.02/4.49 | 0.501/1.199 | PASS |
| F1 gen27 / 109 | 63.84/32.00 | 3.76/1.67 | 0.365/0.306 | O |
| F1 gen28 / 107 | 43.83/11.50 | 4.67/4.00 | 0.572/0.191 | O |
| F1 gen28 / 108 | 37.00/9.83 | 3.67/4.83 | 0.190/0.131 | O |
| F1 gen28 / 109 | 52.67/11.17 | 4.17/3.50 | 0.382/0.150 | O |
| F1 gen29 / 107 | 51.83/41.17 | 1.50/2.67 | 0.655/0.549 | O |
| F1 gen29 / 108 | 66.33/41.67 | 4.09/2.00 | 0.775/0.320 | O |
| F1 gen29 / 109 | 72.91/41.83 | 3.59/2.67 | 0.988/0.307 | O |
| F1 gen30 / 107 | 22.17/48.50 | 3.17/3.17 | 0.088/0.160 | PASS |
| F1 gen30 / 108 | 48.00/31.83 | 3.67/3.17 | 0.575/0.228 | O |
| F1 gen30 / 109 | 29.67/60.50 | 4.33/4.83 | 0.446/0.361 | PASS |

## Works diagnostic disclosure

| Controller / seed | Hits / soldier-min | Hits | Non-incapacitating hits | Incapacitated / killed | Azure front displacement at 30,60,…,360s (m) |
|---|---:|---:|---:|---:|---|
| candidate90 / 100 | 0.480 | 121 | 84 | 14/23 | 54.1 108.8 108.2 108.4 108.2 106.0 106.8 106.8 106.8 106.8 112.3 112.3 |
| candidate90 / 101 | 0.552 | 136 | 95 | 27/14 | 54.1 108.7 107.7 108.3 108.3 106.8 107.3 106.4 106.5 106.4 106.5 119.2 |
| candidate90 / 102 | 0.627 | 147 | 102 | 26/19 | 54.1 107.7 105.9 106.2 110.4 116.9 118.0 118.0 118.0 118.3 126.8 126.5 |
| candidate90 / 103 | 0.543 | 134 | 92 | 26/16 | 54.2 109.9 109.9 112.3 114.1 105.0 104.6 104.8 104.8 105.0 105.0 104.9 |
| candidate90 / 104 | 0.522 | 131 | 90 | 18/23 | 54.2 109.9 109.5 110.5 109.8 109.8 109.8 109.7 109.6 113.6 113.6 113.6 |
| candidate90 / 105 | 0.415 | 115 | 81 | 13/21 | 54.2 110.3 110.2 109.4 109.5 107.9 109.5 109.6 109.6 114.6 114.3 114.3 |
| candidate90 / 106 | 0.513 | 123 | 83 | 24/16 | 54.1 110.2 110.0 108.8 111.4 110.1 109.9 109.9 110.4 110.5 116.0 115.3 |
| candidate90 / 107 | 0.535 | 130 | 89 | 24/17 | 54.2 110.2 109.5 109.8 109.7 109.7 109.6 109.6 109.6 114.5 114.5 114.5 |
| candidate90 / 108 | 0.491 | 121 | 82 | 22/17 | 54.2 109.5 110.0 107.3 103.6 103.6 107.2 110.6 110.6 109.9 109.9 110.6 |
| candidate90 / 109 | 0.343 | 96 | 68 | 18/10 | 54.3 110.5 111.3 107.1 108.1 107.8 108.1 108.1 111.3 111.3 111.3 111.3 |
| drills / 100 | 0.160 | 57 | 41 | 9/7 | 34.8 51.8 70.3 72.2 75.5 78.2 75.3 74.1 72.5 70.0 70.4 58.3 |
| drills / 101 | 0.180 | 63 | 44 | 12/7 | 34.6 51.8 70.5 72.8 76.1 81.6 80.1 81.3 83.5 83.3 82.7 76.6 |
| drills / 102 | 0.082 | 30 | 22 | 5/3 | 34.9 51.8 70.3 73.5 68.6 76.4 76.9 76.9 76.9 77.4 77.4 77.4 |
| drills / 103 | 0.146 | 51 | 36 | 8/7 | 35.0 51.7 69.3 73.8 69.0 73.8 74.9 75.7 75.7 75.7 78.9 78.9 |
| drills / 104 | 0.193 | 65 | 46 | 9/10 | 35.0 51.7 69.5 76.6 75.4 77.7 75.6 75.4 77.8 78.4 78.6 78.3 |
| drills / 105 | 0.144 | 50 | 37 | 8/5 | 35.0 51.7 69.5 73.0 75.2 76.7 74.8 74.2 74.2 73.5 73.5 73.5 |
| drills / 106 | 0.184 | 64 | 47 | 10/7 | 35.0 51.7 69.4 74.2 74.4 75.2 74.1 74.9 74.2 76.4 76.4 77.8 |
| drills / 107 | 0.154 | 54 | 39 | 10/5 | 35.0 51.7 69.4 74.2 72.3 75.3 75.2 75.1 77.8 77.8 78.1 78.1 |
| drills / 108 | 0.098 | 35 | 23 | 5/7 | 35.0 51.7 69.4 73.9 70.4 71.0 71.1 72.6 73.8 75.8 75.8 75.8 |
| drills / 109 | 0.084 | 30 | 20 | 8/2 | 35.0 51.6 69.5 70.0 74.1 77.7 78.5 77.8 81.1 81.1 81.1 81.1 |
| legacy / 100 | 0.435 | 126 | 90 | 20/16 | 50.8 95.3 96.6 95.0 87.2 91.6 89.3 88.5 89.0 88.9 89.8 95.1 |
| legacy / 101 | 0.433 | 122 | 87 | 19/16 | 50.7 95.3 87.4 86.1 86.2 92.5 94.2 90.1 90.6 101.2 103.7 106.0 |
| legacy / 102 | 0.452 | 126 | 91 | 20/15 | 51.1 97.6 96.5 93.3 93.3 92.9 84.9 97.1 100.2 96.2 105.1 105.7 |
| legacy / 103 | 0.454 | 122 | 82 | 23/17 | 51.0 99.6 97.3 94.8 95.4 96.8 87.9 78.3 87.3 82.5 82.6 81.3 |
| legacy / 104 | 0.496 | 130 | 90 | 25/15 | 51.0 96.1 98.9 99.3 97.2 96.5 95.1 83.7 84.0 86.7 89.2 86.2 |
| legacy / 105 | 0.531 | 138 | 97 | 25/16 | 51.0 94.9 94.0 93.0 90.4 91.2 95.4 93.1 92.8 92.5 93.4 97.3 |
| legacy / 106 | 0.495 | 134 | 93 | 23/18 | 51.0 95.3 92.5 89.3 87.2 91.2 89.0 83.6 96.3 96.7 103.7 103.0 |
| legacy / 107 | 0.480 | 130 | 92 | 21/17 | 51.0 100.9 105.2 103.3 101.7 96.3 94.8 99.6 96.6 88.3 100.6 109.4 |
| legacy / 108 | 0.409 | 117 | 85 | 18/14 | 51.0 100.6 99.5 100.8 100.3 90.5 93.5 95.4 94.6 92.7 90.4 84.6 |
| legacy / 109 | 0.493 | 130 | 88 | 21/21 | 51.1 99.6 98.9 92.4 86.8 94.1 104.5 103.6 104.0 106.4 110.4 107.8 |

## Stop and outstanding work

The exit is not met. D05's capable control and per-run tactical criteria remain failures. No further measured build, policy iteration, Phase 3, platoon task tree or F2/F3 follows this report. Windows and Unreal remain with the architect. Entry fingerprint **26e028623123f46e**; final fingerprint **cdcfe811c96f3616**. Changes are left uncommitted in the working tree.
