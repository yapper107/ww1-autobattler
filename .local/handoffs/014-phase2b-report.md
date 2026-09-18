# Plan 014 Phase 2b report — Astra, 17 September 2026

**Exit NOT MET. Do not promote.** One corrected source build was measured; no tactical revision followed its mechanism or distribution results. D02 and D04 pass, D01/D03/D05/D17 fail. Legacy remains the playable default and explicit cognition remains candidate90. No Phase 3, platoon task tree or F2/F3 work started.

## Fingerprints and provenance

Entry: **`70abe8f2c9abc0e3`**. Single corrected build and final simulation: **`d80bca688ebe67ad`** (`-linux` binary suffix). Entry/final simulation trees, final CLI/test binaries and the premeasurement test header are preserved in `.local/phase2b/{entry,final}/`. The simulation delta is `.local/phase2b/simulation.patch`. No simulation or mechanism-test amendment occurred after the build. Python observer metrics and reporting were completed separately.

The attributed [Phase 2 Fable review](../../plans/014-phase2-fable-review.md) was read first. Its foundation acceptance does not certify this tactical build. No Fable launcher, Windows process, native build, Unreal build or smoke was invoked. Native verification remains with the architect. No commit/reset/stash; existing work remains in place. Protected-file hashes match the preserved originals (`.local/phase2b/protected.json`); authored geometry was not edited. Observer-only closure/injury metrics are not read by policy.

## Changes and ruling implementation

- `Sim/DrillSim.cpp:73`: assessment uses the leader's understood fire state, permitted cached squad-member suppression, recent received fire areas and delivered-fire reports. A contact beyond 70 m, received fire superiority, or absence of effective incoming fire resumes MoveTactically in bounding overwatch after assessment. A persistent `closing` bit prevents an immediate return to ReactToContact solely because the same contact remains known; effective incoming fire without superiority can interrupt it. `BattleSim.h:434` carries that bit, and the drills-only conditional digest block in `Diagnostics.cpp:166` hashes it.
- `Sim/DrillSim.cpp:135`: moving-element projection is limited relative to the stationary element, leaving formation-offset room inside the 47 m rifle separation limit. This is a general bound rule, not seed-specific tuning. Continuous covering remains a failed mechanism, as reported below.
- **D01**, `tests/drills_tests.h:28`: the 6–14 m nearest-mate share is limited to traveling/open-formation samples (`interval==10`; this fixture has no obstacles). The 80% assertion and corridor/arrival/spacing assertions remain.
- **D02**, `Sim/DrillFixtures.cpp:22`: the no-report control is open ground, with no obstacle or corridor mouth anywhere on its route. The positive fixture's covering geometry remains. The existing traveling/report/separation assertions remain.
- **D03**, `tests/drills_tests.h:60`: measure straight-line element-centre separation at completed bounds, identified by production received-arrival trace events. Use the last recorded frame at the event, at most 0.2 s earlier. Keep 47 m, alternation, coverage and the far-contact control; path length is not the bound metric.
- **D04**, `Sim/DrillFixtures.cpp:25`: the durable rifle target gets low cover 1.8 m in front of it in both cases. A diagnostic run of the entry binary showed the exposed rifleman retreating without firing despite valid fire solutions. The new target uses ordinary sensing/execution/ballistics. Its cover is outside the squad's 25 m search; the negative control has no local cover. Return-fire bound remains four seconds; no receipts or contacts are injected.
- **D05**, `Sim/DrillFixtures.cpp:31`, `tests/drills_tests.h:96`: remove only deployment gun-group members 2, 6 and 7. The sergeant remains; all four rifle-group members remain, exceeding the Section minimum of three. Verify that initial membership in the pin; change the report bound to four seconds. `DrillSim.cpp:63` preserves full deployment-slot membership for the initial assignment. **This correction is incomplete:** the subsequent contact transition rebuilds groups from survivors and defeats the weak-group condition. The assertion correctly fails; no report latency is claimed.
- **D17**, `Sim/DrillFixtures.cpp:38`, `tests/drills_tests.h:104`: move the ample case's ten cover pieces from 6 m spacing across 54 m to 4 m across 36 m, inside the assigned lane. An independent production PositionSim query proves eight reachable, protected slots with pair separation at least 2 m. The simulation actually assigns all eight at 4.05 s, disproving a seven-slot allocation failure in this corrected geometry. Occupation still fails because closure starts at 7.95 s before everyone arrives. Keep the five/eight occupation assertion.
- `tools/closure_metrics.py` and `tests/test_closure_metrics.py`: offline front-line, total-casualty and hit/injury diagnostics. Tests distinguish surviving-member displacement from centroid drift, team direction, platoon aggregation, missing horizons, active soldier-time, hits and casualties. Existing family and Phase 0 metrics are unchanged.
- `AGENTS.md`, `CLAUDE.md`, `docs/AI_MAIN_BUILD.md`: link the accepted foundation review, corrected exit and unpromoted Phase 2b result without changing candidate90's decision history.

Paths prefixed `Sim/` above are under `Unreal/Source/ArmyPrototype/`.

## Commands and verification

Exact per-run argv are in authored `results.json`, parity `parity.json`, family `family.json`, trace `trace-parity.json` and `measurement-status.json`, under `.local/phase2b/`.

```sh
python3 tools/source_id.py
./scripts/battle-lab.sh --help
./scripts/test-sim.sh
python3 .local/phase2b/run_mechanisms.py
python3 -m unittest discover -s tests -p 'test_*.py'
python3 .local/phase2b/measure.py
python3 .local/phase2b/trace_checks.py
python3 .local/phase2b/analyze.py
python3 tools/report_family.py .local/phase2b/f1-baselines-enriched.json .local/phase2b/f1-drills-enriched.json --out .local/phase2b/f1-report.json --markdown .local/phase2b/f1-report.md
git diff --check
python3 tools/source_id.py
```

The CLI and test executable were each compiled once from the fixed source. The CLI compilation succeeded without warnings; `--help` is not a supported CLI argument, so that post-build invocation returned 1 with `Unknown argument: --help`. Subsequent version/default/parity/measurement executions use that same binary; no recompilation was needed. Full suite and optional mechanisms are separate: the default full suite does not select drills mechanism assertions.

`measure.py` runs the following, without rebuilding:

```sh
python3 .local/phase2b/run_authored.py
python3 .local/phase2b/parity.py .local/phase2b/authored-parity .local/phase2b/final/battle-lab
python3 tools/run_family.py --binary .local/phase2b/final/battle-lab --out .local/phase2b/f1-dev --family F1 --gen-seeds 1-30 --seeds 107-109 --controllers drills --seconds 360 --jobs 2
python3 tests/check_controller_defaults.py --binary .local/phase2b/final/battle-lab --out .local/phase2b/defaults
```

Authored runs: `--drills --terrain 0|1 --seed 100..109 --seconds 360 --evaluate --no-trace`. Parity runs use explicit `--legacy-ai` or `--cognition` with the same seeds/maps/duration, plus `--evaluate` to obtain schema-2 evaluation and shots exports for the diagnostic pull. These reproduce the preserved baseline digests; they are not replacement or retuned baselines. Trace checks repeat drills Works/Trenches seed107 and F1 gen1/seed107 with tracing enabled. Two fixed-build fixture diagnostic exports, encounters53/55, explain the remaining lifecycle failures; the entry binary's encounter50 export explains D04's original absent fire stimulus.

## Mechanism pairs

| Pair | Observed evidence | Result |
|---|---|---|
| D01 / 44–45 | 1,579 eligible moving samples; 56.9348% in 6–14 m; all eight arrive; narrow control stays inside corridor | FAIL: 80% traveling/open spacing share |
| D02 / 46–47 | Report-only contact, traveling overwatch, 30–50 m element gap and protected trail evidence; open control travels and remains within20m | PASS |
| D03 / 48–49 | Alternation; maximum completed-bound separation29.1726m; far control has no early bounding | FAIL: overwatch protection is not continuous |
| D04 / 50–51 | First receipt2.2s; three return shooters in4s; every member reaches protected cover within path bound; spacing and assessment pass; bare control selects/traces rearward response | PASS |
| D05 / 52–53 | Capable group supports without spurious blocking; weak fixture starts with gun strength1 and rifle strength4 | FAIL: no Blocked/Support report; contact transition refills gun group |
| D17 / 54–55 | Independent query offers eight valid slots; eight assigned at4.05s; separation assertions hold; observed occupation4 scarce /6 ample | FAIL: five/eight occupation; closure supersedes outstanding slot arrivals |

`mechanisms/results.json` records each pair's independent assert-process exit, so one abort does not hide other pairs. Position-service authored-layout tests and short plumbing trace checks pass. After a failed assertion, later assertions in that process are not claimed to have run; the printed predicates are diagnostic observations.

## Metric definitions and interpretation

The corrected scoreboard compares each fixed map/battle seed with its original baselines. Total casualties means **initial active soldiers minus final active soldiers across both sides**, including killed and incapacitated, not a sum of differently normalised side fractions. Both side fractions remain in the tables/data. Generated forces differ in size, but each paired draw has the same roster.

`evaluate_ai.py`'s existing `front_line` is a series of **per-squad medians of surviving initial members' signed x displacement**, not the foremost soldier or current centroid. The new observer helper reproduces this formula and its 30 s sampling boundaries. For the singular attacking-platoon comparison, use Azure (team0, the F1 attacker and the consistent Works convention), taking the unweighted mean of its surviving squad medians. All per-squad medians and both platoon series are retained in the diagnostic JSON. This aggregation is an explicit interpretation because the review supplies no reduction from four squad values to one platoon value. It can have survivor-selection effects, just like the existing measure. No interpolation, extrapolation or forward fill beyond the final battle frame: missing120/240s values are NA and cannot pass that criterion. Trenches closure is disclosed but not gated.

Intensity and dispersion are evaluated at full precision; tables round for readability. Codes: **S** shots below candidate90; **C** total casualties below candidate90; **N** median nearest squadmate below3m; **U** under-2m share above legacy; **F120/F240** Azure closure below candidate90 or unavailable. D/C/L mean drills/candidate90/legacy. The source manifests, all side fractions and exact values remain in `enriched-runs.json` and `exit.json`.

Fire superiority was not numerically specified in the review. This build uses received deliveries to the known target/sector in the last6s: at least two gun rounds and at least three delivered rounds total. Effective incoming fire uses understood/cached member suppression or a recent received fire-area intensity above0.3. These are implementation assumptions using actor knowledge, not observer enemy suppression or hit outcomes. They are not proof that the enemy is suppressed. The reported mechanism failures prevent treating these assumptions as validated doctrine.

## Verification results

| Check | Result | Evidence under `.local/phase2b/` |
|---|---|---|
| CLI version | `d80bca688ebe67ad-linux`; one successful compilation | `cli-build.log`, `final/battle-lab` |
| Full `./scripts/test-sim.sh` | PASS, exit0, 233.794s test runtime | `full-suite.log`, `full-suite.exit` |
| Python unit tests | 50 PASS | `python-tests.log` |
| Controller defaults / recorded reruns | PASS, exit0; default remains legacy | `defaults.log`, `measurement-status.json` |
| Legacy/cognition authored parity | **40/40 exact matches** against Phase0 manifests | `authored-parity/parity.json` |
| Drills trace parity, both maps + F1 | **3/3 exact matches** | `trace-parity.json` |
| Optional positions / short plumbing | 2/2 PASS | `mechanisms/results.json` |
| Six mechanism pairs | **2 PASS /4 FAIL** | `mechanisms/*.log` |
| Authored /F1 execution | 20/20 and90/90 complete | `authored/results.json`, `f1-dev/family.json` |
| Engagement guard | Enabled, threshold3 zero-shot runs per10-run block; no aborts, no zero-shot blocks | `authored/*-guard.json`, `f1-dev/family.json` |
| Existing front_line formula equivalence | All12 Works candidate90 seed107 samples exactly equal `evaluate_ai.evaluate(...)[front_line]` | `front-line-equivalence.json` |
| Protected files / measured source and tests / diff check | PASS; source and mechanism header unchanged after build | `protected.json`, `static-checks.json`, `diff-check.log` |
| Windows /Unreal | Not attempted, architect-owned as instructed | No native result claimed |

## Corrected distribution results

**0/20 authored runs and12/90 F1 runs pass all applicable corrected numerical criteria.** This is in addition to the four failed mechanism pairs. Total casualties fail against candidate90 on every authored run. Works closure fails at both horizons on every run. These are complete measured failures, not an engagement-guard abort.

| Set | Shots pass | Total casualties pass | Median >=3m pass | Under2m <=legacy pass | Closure120 pass | Closure240 pass | All applicable pass |
|---|---:|---:|---:|---:|---:|---:|---:|
| works | 1/10 | 0/10 | 10/10 | 10/10 | 0/10 | 0/10 | 0/10 |
| trenches | 4/10 | 0/10 | 9/10 | 8/10 | not gated | not gated | 0/10 |
| F1 | 65/90 | 59/90 | 90/90 | 76/90 | 39/90 | 19/90 | 12/90 |

Mean per-run metrics follow. Closure cells show mean (available n); unavailable horizons are excluded from means but **do not pass** the per-run criterion. This matters for F1's early decisions. See the complete paired distributions and2000 generated-map-cluster bootstrap95% CIs in [the family report](../phase2b/f1-report.md) and its JSON.

| Map/family | Controller | Shots | Total casualties | NN median m | Under2m % | Closure120 m (n) | Closure240 m (n) |
|---|---|---:|---:|---:|---:|---:|---:|
| works | legacy | 2306.5 | 38.00 | 6.54 | 16.4 | 94.7 (10) | 91.3 (10) |
| works | candidate90 | 988.4 | 38.80 | 0.98 | 79.7 | 108.8 (10) | 109.4 (10) |
| works | drills | 617.3 | 8.70 | 7.12 | 9.3 | 79.9 (10) | 78.0 (10) |
| trenches | legacy | 1989.3 | 32.90 | 3.95 | 31.3 | 35.7 (10) | 37.1 (10) |
| trenches | candidate90 | 798.9 | 16.60 | 1.45 | 66.5 | 39.7 (10) | 35.9 (10) |
| trenches | drills | 636.7 | 5.70 | 3.21 | 29.3 | 22.5 (10) | 24.1 (10) |
| F1 | legacy | 718.2 | 15.77 | 5.10 | 13.6 | 53.5 (90) | 54.1 (82) |
| F1 | candidate90 | 450.5 | 12.99 | 3.11 | 38.4 | 48.8 (85) | 48.8 (81) |
| F1 | drills | 611.2 | 16.19 | 4.86 | 9.3 | 56.5 (77) | 53.5 (56) |

F1 unavailable120/240s horizons: legacy 0/8, candidate90 5/9, drills 13/34. These runs finished before a sampled horizon or had no surviving attacking squad. They remain explicitly NA in the table and cannot pass the corresponding closure comparison; no successful early decision is automatically called a closure success. This conservative interpretation does not explain away the authored failures, where all horizons exist.

### Both authored maps, all20 runs

| Map / seed | Shots D/C | Casualties D/C | D casualty % A/E | NN m | <2m % D/L | Closure120 D/C m | Closure240 D/C m | Adverse criteria |
|---|---:|---:|---:|---:|---:|---:|---:|---|
| trenches / 100 | 701/598 | 6/11 | 9.4/9.4 | 3.28 | 26.7/28.5 | 23.0/42.1 | 29.4/41.2 | C |
| trenches / 101 | 352/1342 | 4/17 | 0.0/12.5 | 3.37 | 28.8/33.4 | 22.9/37.7 | 24.4/27.9 | S,C |
| trenches / 102 | 320/1179 | 0/23 | 0.0/0.0 | 3.26 | 27.3/39.5 | 23.3/32.2 | 27.4/36.5 | S,C |
| trenches / 103 | 1210/511 | 11/14 | 25.0/9.4 | 3.48 | 24.0/30.4 | 29.6/41.6 | 32.2/33.4 | C |
| trenches / 104 | 705/817 | 3/18 | 9.4/0.0 | 3.01 | 36.5/40.3 | 19.9/39.9 | 21.4/34.4 | S,C |
| trenches / 105 | 776/558 | 7/15 | 6.2/15.6 | 3.38 | 27.6/27.8 | 20.5/40.5 | 16.8/32.0 | C |
| trenches / 106 | 635/552 | 10/13 | 6.2/25.0 | 3.13 | 29.9/27.0 | 24.0/43.7 | 21.0/36.9 | C,U |
| trenches / 107 | 137/655 | 1/15 | 3.1/0.0 | 3.10 | 28.4/28.8 | 20.2/39.9 | 18.5/39.2 | S,C |
| trenches / 108 | 274/385 | 3/10 | 0.0/9.4 | 3.38 | 27.6/30.5 | 20.0/41.7 | 20.0/37.2 | S,C |
| trenches / 109 | 1257/1392 | 12/30 | 18.8/18.8 | 2.75 | 36.0/26.7 | 21.3/37.7 | 29.7/40.5 | S,C,N,U |
| works / 100 | 805/839 | 14/37 | 9.4/34.4 | 7.40 | 9.6/16.2 | 87.6/108.4 | 88.0/106.8 | S,C,F120,F240 |
| works / 101 | 717/1038 | 6/41 | 3.1/15.6 | 7.67 | 11.7/23.5 | 82.9/108.3 | 75.6/106.4 | S,C,F120,F240 |
| works / 102 | 516/965 | 7/45 | 0.0/21.9 | 6.97 | 11.0/16.5 | 82.3/106.2 | 83.2/118.0 | S,C,F120,F240 |
| works / 103 | 585/1272 | 8/42 | 12.5/12.5 | 7.14 | 12.1/19.2 | 76.4/112.3 | 75.2/104.8 | S,C,F120,F240 |
| works / 104 | 470/1067 | 7/41 | 9.4/12.5 | 7.75 | 10.7/14.2 | 76.6/110.5 | 75.0/109.7 | S,C,F120,F240 |
| works / 105 | 422/1003 | 6/34 | 12.5/6.2 | 6.20 | 11.4/13.3 | 75.7/109.4 | 73.4/109.6 | S,C,F120,F240 |
| works / 106 | 474/973 | 11/40 | 6.2/28.1 | 6.11 | 9.3/16.5 | 82.7/108.8 | 77.1/109.9 | S,C,F120,F240 |
| works / 107 | 956/1197 | 12/41 | 3.1/34.4 | 6.79 | 7.1/12.5 | 81.3/109.8 | 83.1/109.6 | S,C,F120,F240 |
| works / 108 | 872/841 | 12/39 | 15.6/21.9 | 8.21 | 4.5/17.3 | 74.5/107.3 | 69.7/110.6 | C,F120,F240 |
| works / 109 | 356/689 | 4/28 | 3.1/9.4 | 6.94 | 5.4/15.1 | 78.8/107.1 | 80.0/108.1 | S,C,F120,F240 |

### F1 development draws, all90 runs

| Gen / seed | Shots D/C | Casualties D/C | D casualty % A/E | NN m | <2m % D/L | Closure120 D/C m | Closure240 D/C m | Adverse criteria |
|---|---:|---:|---:|---:|---:|---:|---:|---|
| 1 / 107 | 844/466 | 30/14 | 75.0/100.0 | 5.10 | 7.9/11.1 | 78.4/71.0 | 74.3/73.1 | PASS |
| 1 / 108 | 850/411 | 27/12 | 91.7/41.7 | 5.00 | 3.8/13.2 | 72.9/61.4 | 70.7/74.4 | F240 |
| 1 / 109 | 1011/512 | 31/11 | 87.5/83.3 | 5.46 | 5.1/10.2 | 72.9/69.3 | 74.6/70.6 | PASS |
| 2 / 107 | 163/205 | 4/14 | 0.0/100.0 | 4.29 | 13.3/26.0 | NA/NA | NA/NA | S,C,F120,F240 |
| 2 / 108 | 275/247 | 5/16 | 4.2/100.0 | 4.24 | 19.1/26.8 | 64.9/58.1 | NA/NA | C,F240 |
| 2 / 109 | 239/132 | 7/8 | 12.5/100.0 | 4.45 | 11.2/26.0 | NA/NA | NA/NA | C,F120,F240 |
| 3 / 107 | 253/421 | 6/11 | 0.0/100.0 | 3.85 | 16.1/17.9 | NA/5.4 | NA/5.4 | S,C,F120,F240 |
| 3 / 108 | 694/581 | 23/13 | 70.8/100.0 | 4.00 | 18.5/16.9 | 35.7/9.0 | NA/7.8 | U,F240 |
| 3 / 109 | 285/552 | 14/13 | 33.3/100.0 | 4.29 | 10.0/12.3 | NA/9.9 | NA/7.8 | S,F120,F240 |
| 4 / 107 | 155/213 | 8/10 | 8.3/100.0 | 4.76 | 9.7/17.6 | NA/13.9 | NA/12.7 | S,C,F120,F240 |
| 4 / 108 | 298/262 | 13/12 | 29.2/100.0 | 4.50 | 8.4/15.8 | NA/17.5 | NA/12.5 | F120,F240 |
| 4 / 109 | 239/172 | 15/10 | 37.5/100.0 | 4.29 | 12.6/14.7 | NA/7.5 | NA/4.3 | F120,F240 |
| 5 / 107 | 1031/806 | 20/17 | 70.8/37.5 | 4.34 | 16.8/11.9 | 66.5/68.6 | 59.4/69.2 | U,F120,F240 |
| 5 / 108 | 1203/564 | 24/17 | 66.7/100.0 | 4.47 | 16.2/15.5 | 66.4/67.5 | NA/67.4 | U,F120,F240 |
| 5 / 109 | 1472/644 | 17/14 | 54.2/50.0 | 3.77 | 19.8/12.8 | 61.8/68.3 | 60.8/68.1 | U,F120,F240 |
| 6 / 107 | 303/338 | 14/10 | 54.2/12.5 | 4.40 | 20.4/32.7 | 44.1/45.6 | 41.4/45.2 | S,F120,F240 |
| 6 / 108 | 404/497 | 11/18 | 45.8/0.0 | 3.49 | 25.6/16.8 | 41.4/47.1 | 43.1/46.8 | S,C,U,F120,F240 |
| 6 / 109 | 491/427 | 17/14 | 54.2/50.0 | 4.13 | 8.4/10.8 | 41.8/46.8 | 41.0/46.7 | F120,F240 |
| 7 / 107 | 1011/749 | 20/7 | 93.8/83.3 | 5.19 | 4.6/15.6 | 69.0/65.3 | 59.2/63.8 | F240 |
| 7 / 108 | 685/513 | 19/8 | 81.2/100.0 | 4.64 | 8.5/11.5 | 67.1/63.0 | NA/64.1 | F240 |
| 7 / 109 | 1152/754 | 16/10 | 87.5/33.3 | 4.56 | 3.2/8.7 | 64.0/63.0 | 63.4/61.4 | PASS |
| 8 / 107 | 460/435 | 14/11 | 81.2/10.0 | 5.00 | 11.1/13.3 | 51.6/55.0 | 53.9/55.4 | F120,F240 |
| 8 / 108 | 517/468 | 18/11 | 81.2/50.0 | 8.09 | 12.9/5.9 | 54.1/56.8 | 51.8/56.4 | U,F120,F240 |
| 8 / 109 | 581/381 | 18/9 | 100.0/20.0 | 5.17 | 5.5/9.3 | 51.6/57.0 | 52.6/57.0 | F120,F240 |
| 9 / 107 | 803/488 | 21/17 | 54.2/80.0 | 4.51 | 15.8/17.7 | 67.7/73.3 | 65.4/73.0 | F120,F240 |
| 9 / 108 | 823/396 | 25/12 | 70.8/80.0 | 4.90 | 6.3/14.4 | 69.3/74.8 | 69.9/73.5 | F120,F240 |
| 9 / 109 | 528/587 | 20/18 | 41.7/100.0 | 4.80 | 10.2/11.3 | 72.0/74.5 | NA/72.6 | S,F120,F240 |
| 10 / 107 | 538/443 | 18/14 | 100.0/20.0 | 5.02 | 3.4/9.3 | 51.4/53.8 | NA/49.7 | F120,F240 |
| 10 / 108 | 555/468 | 16/14 | 87.5/20.0 | 5.22 | 3.4/5.3 | 51.1/51.6 | 47.7/50.6 | F120,F240 |
| 10 / 109 | 394/237 | 17/11 | 100.0/10.0 | 5.00 | 5.7/15.2 | NA/48.2 | NA/48.4 | F120,F240 |
| 11 / 107 | 580/1189 | 12/17 | 25.0/100.0 | 4.87 | 12.0/17.9 | 62.3/56.5 | NA/60.9 | S,C,F240 |
| 11 / 108 | 569/1045 | 15/14 | 37.5/100.0 | 5.41 | 6.8/17.1 | 58.6/56.1 | NA/59.7 | S,F240 |
| 11 / 109 | 476/1216 | 15/22 | 37.5/100.0 | 4.84 | 10.2/10.5 | 75.7/57.6 | NA/58.1 | S,C,F240 |
| 12 / 107 | 534/187 | 4/10 | 0.0/100.0 | 5.08 | 13.2/14.5 | 85.7/NA | NA/NA | C,F120,F240 |
| 12 / 108 | 446/706 | 9/12 | 50.0/25.0 | 4.38 | 6.2/19.0 | 73.3/67.4 | 73.8/76.6 | S,C,F240 |
| 12 / 109 | 314/573 | 5/7 | 6.2/100.0 | 5.00 | 7.5/17.0 | 83.2/76.9 | NA/NA | S,C,F240 |
| 13 / 107 | 1099/739 | 14/17 | 75.0/16.7 | 5.05 | 1.9/9.3 | 69.8/66.2 | 65.6/68.9 | C,F240 |
| 13 / 108 | 861/654 | 16/14 | 87.5/16.7 | 5.00 | 2.6/3.7 | 65.1/66.6 | 62.6/70.7 | F120,F240 |
| 13 / 109 | 960/607 | 15/10 | 93.8/0.0 | 5.00 | 2.7/4.4 | 74.0/60.8 | 67.5/67.8 | F240 |
| 14 / 107 | 596/592 | 9/15 | 50.0/12.5 | 4.44 | 2.0/20.9 | 62.4/64.0 | 62.4/63.8 | C,F120,F240 |
| 14 / 108 | 329/411 | 8/10 | 31.2/37.5 | 4.44 | 11.7/25.7 | 61.2/65.2 | 60.7/64.7 | S,C,F120,F240 |
| 14 / 109 | 689/658 | 17/12 | 68.8/75.0 | 5.09 | 3.7/18.0 | 65.2/66.4 | 62.5/64.7 | F120,F240 |
| 15 / 107 | 895/360 | 16/12 | 68.8/41.7 | 5.15 | 6.0/8.5 | 58.1/60.5 | 57.0/60.5 | F120,F240 |
| 15 / 108 | 761/495 | 21/14 | 81.2/66.7 | 6.57 | 5.9/10.5 | 60.4/60.0 | 58.1/61.0 | F240 |
| 15 / 109 | 557/537 | 14/13 | 81.2/8.3 | 5.00 | 3.4/8.1 | 57.1/63.7 | 53.8/67.6 | F120,F240 |
| 16 / 107 | 140/227 | 8/5 | 43.8/12.5 | 4.40 | 1.4/11.5 | 36.4/18.2 | 36.4/18.2 | S |
| 16 / 108 | 319/158 | 12/4 | 25.0/100.0 | 5.10 | 8.9/13.3 | NA/1.8 | NA/1.8 | F120,F240 |
| 16 / 109 | 217/298 | 6/11 | 37.5/0.0 | 4.51 | 10.4/7.8 | 35.8/22.3 | 35.8/22.3 | S,C,U |
| 17 / 107 | 805/219 | 30/12 | 75.0/100.0 | 6.00 | 3.8/9.4 | 54.7/52.2 | NA/52.2 | F240 |
| 17 / 108 | 694/294 | 20/10 | 83.3/0.0 | 5.10 | 8.0/5.0 | 47.8/51.8 | 47.4/52.0 | U,F120,F240 |
| 17 / 109 | 886/356 | 28/22 | 66.7/100.0 | 6.00 | 6.9/6.2 | 51.8/51.6 | 52.8/51.7 | U |
| 18 / 107 | 793/286 | 17/14 | 58.3/25.0 | 5.00 | 2.2/6.0 | 44.1/52.0 | 45.0/52.0 | F120,F240 |
| 18 / 108 | 874/513 | 23/21 | 79.2/33.3 | 5.00 | 4.2/4.2 | 50.0/48.2 | 40.6/48.2 | F240 |
| 18 / 109 | 1043/303 | 26/17 | 87.5/41.7 | 5.76 | 3.6/5.8 | 44.3/50.9 | 44.6/50.9 | F120,F240 |
| 19 / 107 | 732/447 | 25/16 | 95.8/16.7 | 4.99 | 6.6/11.1 | 41.4/29.2 | 41.6/29.0 | PASS |
| 19 / 108 | 804/526 | 21/16 | 79.2/16.7 | 5.38 | 5.4/10.3 | 40.4/29.8 | 43.5/30.9 | PASS |
| 19 / 109 | 557/547 | 19/23 | 79.2/0.0 | 5.00 | 3.3/15.4 | 40.5/31.0 | 41.9/21.6 | C |
| 20 / 107 | 573/383 | 22/20 | 91.7/0.0 | 4.52 | 9.7/11.8 | 42.8/43.7 | 45.1/44.0 | F120 |
| 20 / 108 | 872/484 | 21/22 | 45.8/100.0 | 4.29 | 14.7/16.8 | 45.4/44.1 | NA/45.2 | C,F240 |
| 20 / 109 | 603/602 | 22/27 | 54.2/90.0 | 5.00 | 6.5/9.4 | 43.6/47.5 | 42.8/44.6 | C,F120,F240 |
| 21 / 107 | 303/54 | 12/2 | 62.5/16.7 | 5.79 | 1.6/3.4 | 37.7/3.0 | 37.3/3.0 | PASS |
| 21 / 108 | 375/33 | 14/3 | 81.2/8.3 | 5.09 | 1.2/3.5 | 38.2/3.4 | 35.0/3.4 | PASS |
| 21 / 109 | 589/65 | 18/2 | 100.0/16.7 | 5.60 | 2.5/7.7 | 43.8/3.3 | NA/3.3 | F240 |
| 22 / 107 | 1213/401 | 19/7 | 66.7/30.0 | 4.44 | 19.2/11.2 | 76.9/76.4 | 71.4/76.4 | U,F240 |
| 22 / 108 | 845/554 | 23/6 | 54.2/100.0 | 5.25 | 13.0/14.7 | 76.8/75.8 | 78.1/75.2 | PASS |
| 22 / 109 | 1247/284 | 22/9 | 87.5/10.0 | 4.49 | 5.5/17.0 | 73.2/75.3 | 68.8/75.4 | F120,F240 |
| 23 / 107 | 1417/727 | 23/25 | 87.5/33.3 | 4.27 | 23.0/23.4 | 47.1/51.5 | 49.8/53.5 | C,F120,F240 |
| 23 / 108 | 550/480 | 10/16 | 16.7/100.0 | 3.67 | 20.5/27.6 | 48.4/52.5 | NA/52.6 | C,F120,F240 |
| 23 / 109 | 1048/478 | 18/16 | 62.5/50.0 | 5.09 | 12.3/24.2 | 48.4/49.4 | 47.6/49.4 | F120,F240 |
| 24 / 107 | 366/432 | 14/16 | 62.5/40.0 | 4.40 | 1.8/8.9 | 39.4/46.3 | 39.2/41.8 | S,C,F120,F240 |
| 24 / 108 | 546/436 | 10/13 | 43.8/30.0 | 4.29 | 26.8/13.0 | 40.3/42.4 | 40.3/39.5 | C,U,F120 |
| 24 / 109 | 407/260 | 17/11 | 100.0/10.0 | 4.71 | 4.4/15.6 | 42.8/42.0 | 42.8/41.8 | PASS |
| 25 / 107 | 345/355 | 5/13 | 6.2/100.0 | 4.87 | 13.2/15.7 | 68.8/57.0 | NA/69.7 | S,C,F240 |
| 25 / 108 | 202/715 | 8/14 | 25.0/100.0 | 5.09 | 11.0/19.5 | 71.8/58.0 | NA/67.9 | S,C,F240 |
| 25 / 109 | 244/459 | 5/9 | 6.2/100.0 | 5.06 | 8.4/20.2 | NA/57.5 | NA/NA | S,C,F120,F240 |
| 26 / 107 | 583/515 | 24/20 | 91.7/20.0 | 4.67 | 6.6/11.8 | 41.5/46.8 | 40.7/NA | F120,F240 |
| 26 / 108 | 422/540 | 19/20 | 37.5/100.0 | 4.40 | 7.6/14.0 | 43.0/44.6 | NA/43.1 | S,C,F120,F240 |
| 26 / 109 | 552/538 | 20/24 | 41.7/100.0 | 4.40 | 12.3/14.7 | 45.3/48.1 | NA/47.0 | C,F120,F240 |
| 27 / 107 | 203/216 | 9/14 | 12.5/100.0 | 4.39 | 12.4/11.6 | NA/NA | NA/NA | S,C,U,F120,F240 |
| 27 / 108 | 205/227 | 7/13 | 4.2/100.0 | 4.60 | 15.1/21.8 | NA/NA | NA/NA | S,C,F120,F240 |
| 27 / 109 | 183/354 | 8/12 | 8.3/100.0 | 4.77 | 12.2/16.5 | NA/40.8 | NA/40.4 | S,C,F120,F240 |
| 28 / 107 | 368/142 | 18/9 | 75.0/0.0 | 5.89 | 2.6/7.6 | 35.1/0.0 | 33.4/0.0 | PASS |
| 28 / 108 | 386/154 | 24/7 | 87.5/30.0 | 5.53 | 2.0/17.5 | 40.4/2.1 | 33.4/0.0 | PASS |
| 28 / 109 | 397/124 | 21/7 | 75.0/30.0 | 6.34 | 2.4/12.9 | 36.3/0.0 | 33.4/0.0 | PASS |
| 29 / 107 | 859/924 | 22/20 | 58.3/100.0 | 4.93 | 10.9/11.4 | 68.8/52.5 | NA/64.2 | S,F240 |
| 29 / 108 | 792/641 | 17/12 | 37.5/100.0 | 4.32 | 16.2/14.3 | 65.5/59.8 | NA/63.8 | U,F240 |
| 29 / 109 | 1284/547 | 20/12 | 58.3/75.0 | 3.11 | 29.3/10.5 | 64.9/59.8 | 64.5/63.9 | U |
| 30 / 107 | 459/212 | 12/4 | 62.5/20.0 | 4.49 | 6.4/9.4 | 71.2/77.7 | 71.6/77.7 | F120,F240 |
| 30 / 108 | 185/248 | 6/7 | 31.2/10.0 | 5.80 | 2.3/19.5 | 69.6/76.2 | 69.6/76.2 | S,C,F120,F240 |
| 30 / 109 | 602/453 | 14/11 | 81.2/10.0 | 5.21 | 4.8/11.8 | 71.4/77.6 | 70.5/76.6 | F120,F240 |

## Works diagnostic pull

All30 Works controller/seed combinations below use `shots.jsonl`, `events.jsonl` and evaluation snapshots. Baseline shot exports were recreated during the40 exact-digest parity checks. Every run's shot-hit count equals its hit-event count.

Hits per soldier-minute = all recorded hit rounds (including friendly hits) / integrated active soldier-minutes across both sides. A non-incapacitating hit lowers health without taking a soldier out. An incapacitating wound is the simulation's terminal Wounded outcome; kills are its Killed outcome. These categories are separately reported, rather than calling every hit a wound or every casualty a kill. Counts below are summed over ten battles; hit rate uses summed hits / summed soldier-minutes.

| Controller | Hits | Active soldier-minutes | Hits / soldier-min | Non-incapacitating hits | Incapacitating wounds | Kills | Hit rounds / shots |
|---|---:|---:|---:|---:|---:|---:|---:|
| legacy | 1275 | 2731.85 | 0.467 | 895 | 215 | 165 | 5.53% |
| candidate90 | 1254 | 2517.76 | 0.498 | 866 | 212 | 176 | 12.69% |
| drills | 321 | 3597.48 | 0.089 | 234 | 48 | 39 | 5.20% |

The corrected build's Works front advances only79.9m by120s and78.0m by240s, against candidate90's108.8m and109.4m. Its321 hits produce87 total casualties over ten battles, versus candidate90's1254 hits and388 casualties. The casualty collapse is accompanied by much lower hit delivery per active soldier-minute, not merely a change in the wound/kill split. These observer facts establish failed closure and delivery; they do not alone identify an aiming-code cause. Historical weapon physics are unchanged, as the40 digest comparisons demonstrate.

The following per-run Azure series uses30s samples through360s. Each linked JSON in `enriched-runs.json` also contains Ember's series, the individual squad medians, actual sample times and soldier-time denominators, so the platoon reduction is inspectable.

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
| drills / 100 | 0.145 | 50 | 36 | 9/5 | 40.5 69.8 80.4 87.6 88.0 88.0 88.0 88.0 88.0 86.1 89.5 89.5 |
| drills / 101 | 0.057 | 21 | 15 | 3/3 | 40.4 69.7 80.9 82.9 81.4 76.9 76.6 75.6 84.3 84.3 84.3 84.3 |
| drills / 102 | 0.072 | 26 | 19 | 5/2 | 40.4 69.7 80.1 82.3 83.2 83.2 83.2 83.2 83.2 83.2 83.2 83.2 |
| drills / 103 | 0.091 | 32 | 24 | 4/4 | 40.7 70.0 80.5 76.4 75.1 75.1 75.2 75.2 75.2 75.2 75.2 75.2 |
| drills / 104 | 0.072 | 26 | 19 | 2/5 | 40.7 70.0 80.1 76.6 75.0 75.0 75.0 75.0 75.0 75.0 75.0 75.0 |
| drills / 105 | 0.063 | 23 | 17 | 4/2 | 40.7 70.0 80.2 75.7 74.5 74.5 74.5 73.4 73.4 73.4 73.4 73.4 |
| drills / 106 | 0.109 | 40 | 29 | 6/5 | 40.4 69.7 80.4 82.7 76.3 75.9 75.3 77.1 75.2 76.4 75.3 75.5 |
| drills / 107 | 0.110 | 39 | 27 | 9/3 | 40.4 69.7 79.7 81.3 83.1 83.1 83.1 83.1 77.2 77.2 77.2 77.2 |
| drills / 108 | 0.120 | 42 | 30 | 4/8 | 40.4 70.1 79.3 74.5 72.3 71.7 70.3 69.7 71.8 70.3 71.8 71.0 |
| drills / 109 | 0.059 | 22 | 18 | 2/2 | 40.5 71.7 79.6 78.8 80.0 80.0 80.0 80.0 80.0 74.4 74.4 74.1 |
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

## Disagreements, ambiguities and incomplete outcomes

1. No disagreement with the corrected binding criteria or the instruction to stop after one measured build. This build is not suitable for promotion; the full-suite pass and improved spacing do not override the failures.
2. The review does not define a platoon reduction of `front_line`, treatment of early battle termination, or numeric effective-fire/superiority thresholds. The exact interpretations above are disclosed. In particular, early finished F1 runs are NA rather than assumed successful at240s. A future ruling can change the offline reduction without changing/re-running this measured build; all source series are preserved.
3. Four mechanism outcomes remain incomplete/defective: D01 open traveling spacing; D03 uninterrupted protected overwatch; D05 membership preservation through contact so the weak gun group requests support; D17 completion/closure ordering. D17's corrected allocator can supply and assign eight slots, but policy supersedes them before occupation. No assertion was weakened to accept these failures, and no further source iteration was attempted.
4. The projection limit leaves formation room but does not prove continuous fire coverage. Received delivery is a proxy for superiority, not privileged knowledge of enemy suppression. These limits require future review, not a claim that Phase3 is implemented.
5. An initial offline diagnostic-process invocation hit Python3.14 forkserver socket creation denied by this sandbox. The diagnostic runner then used the same explicit `fork` process context already used by the family harness; it completed. The CLI's unsupported `--help` invocation is disclosed above. Neither required a second simulation build.
6. Windows and Unreal remain with the architect, as instructed. No result is inferred for those platforms. Existing legacy/cognition behavior, protected files and uncommitted work were preserved.

Stopped after this report. No further measurement-driven tuning, Phase3 or platoon tree work.
