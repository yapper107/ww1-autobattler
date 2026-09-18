# Plan 014 Phase 2 report — Astra, 17 September 2026

**Exit NOT MET. Do not promote this controller.** The authorised plumbing, position service and initial movement/contact controller are implemented and measured. This report records one frozen tactical build, its failed mechanism pairs, and every authored/F1 development run. Legacy remains the playable default; candidate90 remains selectable. No Phase 3 work follows this report.

## Fingerprints and provenance

Entry and accepted Phase 1: **`9ce4051ccbd13ed7`**. Hold-only plumbing checkpoint: **`0a8f325e8065b8a5`**. Single measured tactical build and final source: **`70abe8f2c9abc0e3`** (`-linux` binary suffix). Preserved checkpoints: `.local/phase2/entry/`, `plumbing/`, `final/`. The final source did not change after the first distribution run. Tests were tightened afterwards to remove a substring-match false positive; that did not change the measured simulation.

The attributed [Phase 1 Fable review](../../plans/014-phase1-fable-review.md) was read first. Its Windows lab/Unreal/two-map smoke pass applies to `9ce4051ccbd13ed7`, performed by the architect. No Windows or Unreal build or smoke was attempted in this slice.

## Plumbing parity, completed before tactical content

| Check | Result | Evidence under `.local/phase2/` |
|---|---|---|
| `tools/check_foundations_parity.py` against preserved Phase 0 executable, ten legacy seeds | 10/10 exact matches | `plumbing/foundations/parity.json` |
| `tools/run_ai_evaluation.py` with preserved Phase 1 executable, then `tools/verify_gameplay_parity.py`, explicit-cognition wrappers, seeds 100/103/107/108, 360 s | 4/4 exact matches | `plumbing/cognition-reference/`, `plumbing/cognition-parity/parity.json` |
| `tools/run_ai_acceptance.py --regression-only`, per-case comparison with recorded candidate90 original nine | 8/9, every one of nine pass/fail outcomes unchanged | `plumbing/frozen-nine-compare.json` |
| `tests/check_controller_defaults.py`, four policy keys and historical/generated reruns | PASS; default equals legacy, explicit drills/cognition preserved | `plumbing/defaults.log` |
| Full `./scripts/test-sim.sh`, extended SameConfig checks, plus `./scripts/test-sim.sh --drills` on the Hold stub | PASS, full suite 229.846 s; drills trace assertions on both authored maps | `plumbing-full.log`, `plumbing-build.log` |

Exact argv and exits are recorded in `plumbing/checks.json`. The separate archived stub proves these checks preceded the tactical implementation.

## Final verification

| Check | Result | Evidence |
|---|---|---|
| `./scripts/battle-lab.sh --version` | Build PASS, `70abe8f2c9abc0e3-linux` | `final-build.log` |
| `./scripts/test-sim.sh` | Full existing suite PASS, exit 0, 238.68 s | `full-suite.log` |
| `python3 -m unittest discover -s tests -p test_*.py` | 48 tests PASS, including real process-pool guard stop/checkpoint | `python.log` |
| Final controller defaults/reruns, explicit controller override flags | PASS, exit 0 | `defaults.log` |
| Authored legacy + cognition, Works/Trenches seeds 100–109, 360 s | 40/40 exact Phase 0 digest matches | `authored-parity/parity.json` |
| Drills trace on/off: Works/Trenches seed 107 and F1 genSeed 1/battleSeed 107, 360 s | 3/3 exact matches | `trace-parity.json` |
| Position service authored layouts 0/5/6/7, reservation and area controls; organisation templates | PASS | `mechanisms/positions.log` |
| D01–D05 and D17, each in its own assert-based test process | Six pairs FAIL; no assertion relaxed | `mechanisms/results.json` and individual logs |
| Protected hashes and `git diff --check` | PASS | `static-checks.json` |
| Frozen nine / thirty, explicit cognition, disclosure only | 8/9 and 28/30 | `frozen-nine/acceptance.json`, `frozen-thirty/acceptance.json` |

The full default suite does not select the optional drills mechanisms; its pass is not a drills mechanism pass. The two checks are deliberately reported separately.

## Mechanism results and paired controls

| Scenario / encounter pair | Final observed evidence | Failure |
|---|---|---|
| D01 / 44–45 | 1,579 moving samples before arrival; 56.93% nearest-mate samples within 6–14 m; all eight arrive; narrow control stays in corridor | Required 80% spacing share not met |
| D02 / 46–47 | Production report-only contact, 30–50 m separation and protected trailing-position evidence exist; no-report control stays within 20 m | Exact no-report traveling control fails; terrain mouth trigger selects overwatch |
| D03 / 48–49 | Alternation and protected-overwatch evidence exist; far control has no early bounding | Largest actual assigned path bound 66.2749 m exceeds 47 m |
| D04 / 50–51 | Covered setup reaches cover with valid slot spacing, but no received-fire stimulus was recorded | Return-fire/timing contract unproven; paired rearward response also absent in final run |
| D05 / 52–53 | Capable group supports without spurious Blocked; weak group report reaches platoon | 3.35 s versus literal 2.5 s delivery bound; weak fixture also reduces rifle strength |
| D17 / 54–55 | Five occupants in scarce case; seven in ample case; assigned slot spacing holds | Ample control requires all eight |

The tests use production sensing, reaction, command transport and execution. New encounters are 44–55; no contacts, delivery evidence or receipts are injected. Passive targets use the permitted durable-health/permanent-reload fixture convention; firing targets use normal weapons. Failure exit is assertion abort (-6), not a swallowed exception. The limitations of individual pins and fixtures are listed below.

## Authored-map outcome

20/20 runs completed; 6/20 satisfy all five per-run comparisons. The zero-shot guard did not trigger. Mean values below do not replace those per-run checks.

| Map | Shots mean | Casualties A/E mean | NN median, mean m | Under 2 m, mean |
|---|---:|---|---:|---:|
| works | 1024.3 | 17.19%/18.75% | 7.778 | 8.38% |
| trenches | 1796.5 | 46.88%/42.50% | 4.253 | 24.53% |

Works in particular retains shot volume on average while reducing casualty fractions substantially. That is an intensity failure under the accepted criterion, not evidence of tactical improvement. The exact per-run table follows; comparisons use unrounded values.

# Authored-map Phase 2 exit, all runs

Every comparison uses unrounded values. A/E casualty fractions use initial actives. Intensity floor = candidate90; spatial floor = legacy.

| Map / seed | Drills shots | Casualties A/E | NN median m | Under 2 m | C90 shots; casualties A/E | Legacy NN; under 2 m | Failed criteria |
|---|---:|---|---:|---:|---|---|---|
| works/100 | 736 | 18.8%/21.9% | 7.672 | 4.9% | 839; 84.4%/31.2% | 7.272; 16.2% | shots, Azure casualty fraction, Ember casualty fraction |
| works/101 | 1422 | 18.8%/18.8% | 8.166 | 8.4% | 1038; 90.6%/37.5% | 5.037; 23.5% | Azure casualty fraction, Ember casualty fraction |
| works/102 | 491 | 9.4%/6.2% | 7.487 | 7.7% | 965; 68.8%/71.9% | 5.982; 16.5% | shots, Azure casualty fraction, Ember casualty fraction |
| works/103 | 813 | 28.1%/12.5% | 6.950 | 9.2% | 1272; 56.2%/75.0% | 5.510; 19.2% | shots, Azure casualty fraction, Ember casualty fraction |
| works/104 | 1228 | 15.6%/25.0% | 6.481 | 12.0% | 1067; 78.1%/50.0% | 7.556; 14.2% | Azure casualty fraction, Ember casualty fraction, nearest squadmate median |
| works/105 | 1614 | 18.8%/37.5% | 9.015 | 8.1% | 1003; 65.6%/40.6% | 6.796; 13.3% | Azure casualty fraction, Ember casualty fraction |
| works/106 | 1387 | 9.4%/25.0% | 8.373 | 7.7% | 973; 62.5%/62.5% | 6.876; 16.5% | Azure casualty fraction, Ember casualty fraction |
| works/107 | 738 | 28.1%/9.4% | 8.324 | 11.0% | 1197; 53.1%/75.0% | 7.560; 12.5% | shots, Azure casualty fraction, Ember casualty fraction |
| works/108 | 876 | 6.2%/15.6% | 8.366 | 6.2% | 841; 71.9%/50.0% | 6.285; 17.3% | Azure casualty fraction, Ember casualty fraction |
| works/109 | 938 | 18.8%/15.6% | 6.949 | 8.5% | 689; 56.2%/31.2% | 6.513; 15.1% | Azure casualty fraction, Ember casualty fraction |
| trenches/100 | 2189 | 65.6%/31.2% | 4.336 | 23.1% | 598; 6.2%/28.1% | 4.168; 28.5% | PASS |
| trenches/101 | 1891 | 50.0%/37.5% | 4.527 | 14.8% | 1342; 46.9%/6.2% | 3.392; 33.4% | PASS |
| trenches/102 | 1324 | 43.8%/40.6% | 3.525 | 30.5% | 1179; 40.6%/31.2% | 2.579; 39.5% | PASS |
| trenches/103 | 1548 | 53.1%/21.9% | 3.283 | 25.2% | 511; 15.6%/28.1% | 3.304; 30.4% | Ember casualty fraction, nearest squadmate median |
| trenches/104 | 1801 | 56.2%/25.0% | 4.396 | 26.4% | 817; 31.2%/25.0% | 2.688; 40.3% | PASS |
| trenches/105 | 1728 | 28.1%/65.6% | 4.314 | 23.1% | 558; 25.0%/21.9% | 5.767; 27.8% | nearest squadmate median |
| trenches/106 | 1745 | 46.9%/34.4% | 4.196 | 24.7% | 552; 18.8%/21.9% | 4.405; 27.0% | nearest squadmate median |
| trenches/107 | 2708 | 50.0%/59.4% | 4.892 | 26.2% | 655; 15.6%/31.2% | 4.680; 28.8% | PASS |
| trenches/108 | 1817 | 40.6%/43.8% | 4.924 | 24.8% | 385; 6.2%/25.0% | 4.143; 30.5% | PASS |
| trenches/109 | 1214 | 34.4%/65.6% | 4.141 | 26.6% | 1392; 65.6%/28.1% | 4.337; 26.7% | shots, Azure casualty fraction, nearest squadmate median |


## F1 development distribution

Final build: 90/90 drills runs completed, 17/90 satisfy all five per-run comparisons. Compared with the existing 180 Phase 1 baseline runs; identical scenario digests checked for every completed matched draw. Expected draws are genSeeds 1–30 × battle seeds 107–109, 360-second limit. Guard: `{"block_size": 10, "enabled": true, "failed": false, "threshold": 3, "zero_shot_blocks": []}`.

| Controller | Runs | Shots mean [95% CI] | Casualties A/E mean | NN median, mean m | Under 2 m mean |
|---|---:|---|---|---:|---:|
| candidate90 | 90 | 450.54 [381.80, 527.69] | 50.97%/33.65% | 3.109 | 38.36% |
| drills | 90 | 627.61 [531.75, 733.87] | 56.83%/59.25% | 4.861 | 9.61% |
| legacy | 90 | 718.20 [610.67, 840.92] | 55.86%/52.07% | 5.102 | 13.63% |

CIs use 2,000 fixed-RNG bootstrap resamples of generated-map clusters, retaining the three battle seeds together. Full means, medians, counts, unavailable metrics and paired deltas are in [the family scoreboard](../phase2/f1-report.md) and its JSON. These are self-play controller distributions, not mixed-controller duels.

| Drills minus reference | Metric | Paired n | Mean delta | 95% CI |
|---|---|---:|---:|---|
| candidate90 | shots | 90 | 177.0667 | [78.2175, 281.0714] |
| candidate90 | casualty_azure | 90 | 0.0586 | [-0.0327, 0.1493] |
| candidate90 | casualty_ember | 90 | 0.2560 | [0.1431, 0.3713] |
| candidate90 | nearest_m | 90 | 1.7524 | [1.3714, 2.1367] |
| candidate90 | under_2m | 90 | -0.2874 | [-0.3411, -0.2306] |
| legacy | shots | 90 | -90.5889 | [-161.3558, -22.8769] |
| legacy | casualty_azure | 90 | 0.0097 | [-0.0634, 0.0870] |
| legacy | casualty_ember | 90 | 0.0718 | [-0.0094, 0.1520] |
| legacy | nearest_m | 90 | -0.2414 | [-0.4458, -0.0468] |
| legacy | under_2m | 90 | -0.0401 | [-0.0542, -0.0240] |

# F1 Phase 2 exit, all development draws

| genSeed / battleSeed | Drills shots | Casualties A/E | NN median m | Under 2 m | C90 shots; casualties A/E | Legacy NN; under 2 m | Failed criteria |
|---|---:|---|---:|---:|---|---|---|
| 1/107 | 699 | 75.0%/0.0% | 4.514 | 7.0% | 466; 54.2%/8.3% | 7.692; 11.1% | Ember casualty fraction, nearest squadmate median |
| 1/108 | 880 | 70.8%/58.3% | 5.868 | 3.5% | 411; 50.0%/0.0% | 6.135; 13.2% | nearest squadmate median |
| 1/109 | 912 | 83.3%/41.7% | 5.099 | 5.9% | 512; 37.5%/16.7% | 6.143; 10.2% | nearest squadmate median |
| 2/107 | 253 | 4.2%/100.0% | 4.289 | 22.6% | 205; 41.7%/100.0% | 4.341; 26.0% | Azure casualty fraction, nearest squadmate median |
| 2/108 | 526 | 12.5%/100.0% | 3.584 | 18.4% | 247; 50.0%/100.0% | 4.259; 26.8% | Azure casualty fraction, nearest squadmate median |
| 2/109 | 468 | 8.3%/100.0% | 3.333 | 17.7% | 132; 16.7%/100.0% | 4.341; 26.0% | Azure casualty fraction, nearest squadmate median |
| 3/107 | 306 | 16.7%/100.0% | 3.830 | 19.1% | 421; 45.8%/0.0% | 4.323; 17.9% | shots, Azure casualty fraction, nearest squadmate median, under-2 m share |
| 3/108 | 368 | 41.7%/100.0% | 4.058 | 21.4% | 581; 45.8%/33.3% | 5.920; 16.9% | shots, Azure casualty fraction, nearest squadmate median, under-2 m share |
| 3/109 | 288 | 33.3%/100.0% | 4.374 | 10.7% | 552; 45.8%/33.3% | 4.292; 12.3% | shots, Azure casualty fraction |
| 4/107 | 323 | 16.7%/100.0% | 4.329 | 11.4% | 213; 41.7%/0.0% | 4.716; 17.6% | Azure casualty fraction, nearest squadmate median |
| 4/108 | 192 | 4.2%/100.0% | 4.538 | 10.1% | 262; 45.8%/16.7% | 4.857; 15.8% | shots, Azure casualty fraction, nearest squadmate median |
| 4/109 | 325 | 58.3%/100.0% | 4.384 | 6.7% | 172; 41.7%/0.0% | 5.036; 14.7% | nearest squadmate median |
| 5/107 | 1343 | 87.5%/37.5% | 4.554 | 7.5% | 806; 62.5%/25.0% | 5.069; 11.9% | nearest squadmate median |
| 5/108 | 859 | 54.2%/100.0% | 4.549 | 14.6% | 564; 70.8%/0.0% | 4.782; 15.5% | Azure casualty fraction, nearest squadmate median |
| 5/109 | 1292 | 62.5%/12.5% | 4.286 | 19.8% | 644; 50.0%/25.0% | 5.080; 12.8% | Ember casualty fraction, nearest squadmate median, under-2 m share |
| 6/107 | 434 | 75.0%/12.5% | 4.349 | 15.9% | 338; 37.5%/12.5% | 4.323; 32.7% | PASS |
| 6/108 | 351 | 25.0%/100.0% | 4.286 | 23.9% | 497; 62.5%/37.5% | 4.450; 16.8% | shots, Azure casualty fraction, nearest squadmate median, under-2 m share |
| 6/109 | 536 | 62.5%/25.0% | 3.515 | 25.3% | 427; 54.2%/12.5% | 5.744; 10.8% | nearest squadmate median, under-2 m share |
| 7/107 | 546 | 62.5%/100.0% | 4.323 | 7.3% | 749; 37.5%/16.7% | 4.540; 15.6% | shots, nearest squadmate median |
| 7/108 | 833 | 75.0%/100.0% | 5.000 | 5.2% | 513; 43.8%/16.7% | 6.149; 11.5% | nearest squadmate median |
| 7/109 | 1022 | 81.2%/33.3% | 5.599 | 3.0% | 754; 56.2%/16.7% | 6.104; 8.7% | nearest squadmate median |
| 8/107 | 378 | 68.8%/0.0% | 5.000 | 7.7% | 435; 62.5%/10.0% | 5.001; 13.3% | shots, Ember casualty fraction, nearest squadmate median |
| 8/108 | 819 | 62.5%/10.0% | 5.005 | 12.0% | 468; 62.5%/10.0% | 5.023; 5.9% | nearest squadmate median, under-2 m share |
| 8/109 | 677 | 81.2%/60.0% | 5.000 | 5.1% | 381; 37.5%/30.0% | 5.023; 9.3% | nearest squadmate median |
| 9/107 | 665 | 45.8%/100.0% | 4.688 | 18.7% | 488; 62.5%/20.0% | 4.519; 17.7% | Azure casualty fraction, under-2 m share |
| 9/108 | 783 | 75.0%/50.0% | 4.528 | 16.0% | 396; 45.8%/10.0% | 4.528; 14.4% | under-2 m share |
| 9/109 | 590 | 41.7%/100.0% | 5.561 | 7.2% | 587; 58.3%/40.0% | 4.824; 11.3% | Azure casualty fraction |
| 10/107 | 615 | 100.0%/30.0% | 5.000 | 5.0% | 443; 68.8%/30.0% | 5.594; 9.3% | nearest squadmate median |
| 10/108 | 549 | 100.0%/50.0% | 6.371 | 3.1% | 468; 81.2%/10.0% | 5.870; 5.3% | PASS |
| 10/109 | 524 | 100.0%/10.0% | 5.271 | 2.5% | 237; 62.5%/10.0% | 4.512; 15.2% | PASS |
| 11/107 | 480 | 20.8%/100.0% | 5.026 | 9.6% | 1189; 45.8%/100.0% | 4.498; 17.9% | shots, Azure casualty fraction |
| 11/108 | 718 | 29.2%/100.0% | 4.866 | 9.5% | 1045; 33.3%/100.0% | 5.217; 17.1% | shots, Azure casualty fraction, nearest squadmate median |
| 11/109 | 342 | 12.5%/100.0% | 5.000 | 8.9% | 1216; 66.7%/100.0% | 5.831; 10.5% | shots, Azure casualty fraction, nearest squadmate median |
| 12/107 | 399 | 6.2%/100.0% | 4.403 | 16.6% | 187; 37.5%/100.0% | 6.000; 14.5% | Azure casualty fraction, nearest squadmate median, under-2 m share |
| 12/108 | 520 | 62.5%/75.0% | 4.940 | 8.5% | 706; 50.0%/100.0% | 4.341; 19.0% | shots, Ember casualty fraction |
| 12/109 | 307 | 18.8%/100.0% | 5.000 | 8.6% | 573; 18.8%/100.0% | 4.402; 17.0% | shots |
| 13/107 | 1158 | 100.0%/16.7% | 5.000 | 2.4% | 739; 87.5%/25.0% | 5.000; 9.3% | Ember casualty fraction |
| 13/108 | 1302 | 87.5%/33.3% | 5.000 | 3.0% | 654; 87.5%/0.0% | 5.710; 3.7% | nearest squadmate median |
| 13/109 | 1204 | 100.0%/16.7% | 5.254 | 3.2% | 607; 56.2%/8.3% | 5.447; 4.4% | nearest squadmate median |
| 14/107 | 848 | 56.2%/37.5% | 4.394 | 14.6% | 592; 75.0%/37.5% | 4.400; 20.9% | Azure casualty fraction, nearest squadmate median |
| 14/108 | 329 | 31.2%/37.5% | 4.436 | 11.7% | 411; 50.0%/25.0% | 4.400; 25.7% | shots, Azure casualty fraction |
| 14/109 | 905 | 81.2%/87.5% | 4.558 | 7.2% | 658; 62.5%/25.0% | 4.400; 18.0% | PASS |
| 15/107 | 693 | 100.0%/33.3% | 5.000 | 12.4% | 360; 75.0%/0.0% | 6.000; 8.5% | nearest squadmate median, under-2 m share |
| 15/108 | 794 | 68.8%/66.7% | 8.089 | 4.8% | 495; 75.0%/16.7% | 5.000; 10.5% | Azure casualty fraction |
| 15/109 | 652 | 81.2%/25.0% | 5.000 | 5.0% | 537; 81.2%/0.0% | 6.000; 8.1% | nearest squadmate median |
| 16/107 | 340 | 68.8%/12.5% | 5.099 | 1.8% | 227; 25.0%/12.5% | 4.400; 11.5% | PASS |
| 16/108 | 311 | 18.8%/100.0% | 4.629 | 7.8% | 158; 25.0%/0.0% | 5.000; 13.3% | Azure casualty fraction, nearest squadmate median |
| 16/109 | 398 | 56.2%/100.0% | 5.933 | 4.2% | 298; 56.2%/25.0% | 4.817; 7.8% | PASS |
| 17/107 | 844 | 70.8%/91.7% | 6.000 | 4.1% | 219; 50.0%/0.0% | 6.000; 9.4% | PASS |
| 17/108 | 797 | 100.0%/66.7% | 5.514 | 4.0% | 294; 37.5%/8.3% | 6.000; 5.0% | nearest squadmate median |
| 17/109 | 770 | 33.3%/100.0% | 5.000 | 8.8% | 356; 87.5%/8.3% | 6.000; 6.2% | Azure casualty fraction, nearest squadmate median, under-2 m share |
| 18/107 | 793 | 70.8%/25.0% | 5.000 | 2.2% | 286; 54.2%/8.3% | 5.000; 6.0% | PASS |
| 18/108 | 1233 | 91.7%/33.3% | 5.000 | 4.8% | 513; 83.3%/8.3% | 5.707; 4.2% | nearest squadmate median, under-2 m share |
| 18/109 | 993 | 75.0%/41.7% | 5.000 | 4.5% | 303; 62.5%/16.7% | 5.478; 5.8% | nearest squadmate median |
| 19/107 | 642 | 91.7%/0.0% | 5.000 | 5.0% | 447; 45.8%/41.7% | 5.041; 11.1% | Ember casualty fraction, nearest squadmate median |
| 19/108 | 716 | 91.7%/25.0% | 4.750 | 7.1% | 526; 29.2%/75.0% | 6.000; 10.3% | Ember casualty fraction, nearest squadmate median |
| 19/109 | 509 | 58.3%/33.3% | 4.299 | 19.3% | 547; 62.5%/66.7% | 6.387; 15.4% | shots, Azure casualty fraction, Ember casualty fraction, nearest squadmate median, under-2 m share |
| 20/107 | 461 | 66.7%/10.0% | 4.745 | 4.2% | 383; 58.3%/60.0% | 4.946; 11.8% | Ember casualty fraction, nearest squadmate median |
| 20/108 | 677 | 87.5%/20.0% | 4.338 | 5.9% | 484; 66.7%/60.0% | 4.528; 16.8% | Ember casualty fraction, nearest squadmate median |
| 20/109 | 613 | 50.0%/50.0% | 4.519 | 11.2% | 602; 83.3%/70.0% | 5.058; 9.4% | Azure casualty fraction, Ember casualty fraction, nearest squadmate median, under-2 m share |
| 21/107 | 280 | 62.5%/8.3% | 5.946 | 1.7% | 54; 12.5%/0.0% | 5.020; 3.4% | PASS |
| 21/108 | 440 | 68.8%/8.3% | 6.450 | 1.6% | 33; 12.5%/8.3% | 5.000; 3.5% | PASS |
| 21/109 | 512 | 100.0%/16.7% | 5.406 | 2.7% | 65; 12.5%/0.0% | 5.000; 7.7% | PASS |
| 22/107 | 1417 | 70.8%/50.0% | 5.850 | 11.1% | 401; 25.0%/10.0% | 5.102; 11.2% | PASS |
| 22/108 | 1434 | 87.5%/60.0% | 4.750 | 6.2% | 554; 25.0%/0.0% | 4.749; 14.7% | PASS |
| 22/109 | 1236 | 62.5%/40.0% | 4.891 | 2.5% | 284; 33.3%/10.0% | 5.610; 17.0% | nearest squadmate median |
| 23/107 | 669 | 20.8%/100.0% | 4.129 | 18.9% | 727; 83.3%/83.3% | 4.263; 23.4% | shots, Azure casualty fraction, nearest squadmate median |
| 23/108 | 456 | 20.8%/100.0% | 4.292 | 14.4% | 480; 58.3%/33.3% | 3.776; 27.6% | shots, Azure casualty fraction |
| 23/109 | 595 | 8.3%/100.0% | 4.071 | 16.0% | 478; 58.3%/33.3% | 4.132; 24.2% | Azure casualty fraction, nearest squadmate median |
| 24/107 | 311 | 62.5%/20.0% | 4.528 | 1.3% | 432; 81.2%/30.0% | 5.000; 8.9% | shots, Azure casualty fraction, Ember casualty fraction, nearest squadmate median |
| 24/108 | 502 | 50.0%/30.0% | 4.400 | 16.9% | 436; 68.8%/20.0% | 5.000; 13.0% | Azure casualty fraction, nearest squadmate median, under-2 m share |
| 24/109 | 505 | 100.0%/10.0% | 4.519 | 9.5% | 260; 50.0%/30.0% | 5.000; 15.6% | Ember casualty fraction, nearest squadmate median |
| 25/107 | 272 | 12.5%/100.0% | 5.099 | 11.8% | 355; 62.5%/75.0% | 5.239; 15.7% | shots, Azure casualty fraction, nearest squadmate median |
| 25/108 | 272 | 0.0%/100.0% | 4.455 | 9.8% | 715; 62.5%/100.0% | 6.000; 19.5% | shots, Azure casualty fraction, nearest squadmate median |
| 25/109 | 205 | 6.2%/100.0% | 4.997 | 9.3% | 459; 31.2%/100.0% | 5.808; 20.2% | shots, Azure casualty fraction, nearest squadmate median |
| 26/107 | 547 | 91.7%/10.0% | 4.519 | 14.1% | 515; 41.7%/100.0% | 5.000; 11.8% | Ember casualty fraction, nearest squadmate median, under-2 m share |
| 26/108 | 624 | 37.5%/100.0% | 4.519 | 12.9% | 540; 70.8%/30.0% | 5.000; 14.0% | Azure casualty fraction, nearest squadmate median |
| 26/109 | 536 | 54.2%/100.0% | 4.519 | 8.5% | 538; 79.2%/50.0% | 4.522; 14.7% | shots, Azure casualty fraction, nearest squadmate median |
| 27/107 | 166 | 16.7%/100.0% | 4.292 | 12.3% | 216; 33.3%/100.0% | 4.590; 11.6% | shots, Azure casualty fraction, nearest squadmate median, under-2 m share |
| 27/108 | 305 | 0.0%/100.0% | 4.605 | 8.4% | 227; 29.2%/100.0% | 4.263; 21.8% | Azure casualty fraction |
| 27/109 | 439 | 12.5%/100.0% | 4.268 | 12.9% | 354; 41.7%/33.3% | 4.405; 16.5% | Azure casualty fraction, nearest squadmate median |
| 28/107 | 342 | 66.7%/30.0% | 6.101 | 2.1% | 142; 33.3%/10.0% | 6.000; 7.6% | PASS |
| 28/108 | 546 | 87.5%/40.0% | 6.339 | 2.3% | 154; 20.8%/20.0% | 4.920; 17.5% | PASS |
| 28/109 | 358 | 75.0%/20.0% | 6.073 | 1.7% | 124; 29.2%/0.0% | 5.004; 12.9% | PASS |
| 29/107 | 727 | 50.0%/100.0% | 4.318 | 16.8% | 924; 70.8%/37.5% | 5.000; 11.4% | shots, Azure casualty fraction, nearest squadmate median, under-2 m share |
| 29/108 | 867 | 50.0%/100.0% | 4.518 | 12.9% | 641; 45.8%/12.5% | 5.554; 14.3% | nearest squadmate median |
| 29/109 | 1215 | 66.7%/50.0% | 4.163 | 37.0% | 547; 45.8%/12.5% | 5.900; 10.5% | nearest squadmate median, under-2 m share |
| 30/107 | 640 | 68.8%/30.0% | 5.000 | 6.7% | 212; 18.8%/10.0% | 5.222; 9.4% | nearest squadmate median |
| 30/108 | 486 | 68.8%/30.0% | 5.310 | 3.2% | 248; 37.5%/10.0% | 4.466; 19.5% | PASS |
| 30/109 | 477 | 62.5%/10.0% | 5.286 | 4.8% | 453; 50.0%/30.0% | 4.482; 11.8% | Ember casualty fraction |


## Measurement commands

```bash
python3 .local/phase2/plumbing_checks.py
./scripts/test-sim.sh
./scripts/test-sim.sh --drills positions
# Each mechanism separately, preserving every assertion:
.local/tests/sim_tests --drills D01  # repeated for D02, D03, D04, D05, D17
python3 .local/phase2/run_authored.py
python3 .local/restore014/parity.py .local/phase2/authored-parity .local/phase2/final/battle-lab
python3 tools/run_family.py --binary .local/phase2/final/battle-lab --out .local/phase2/f1-dev --family F1 --gen-seeds 1-30 --seeds 107-109 --controllers drills --seconds 360 --jobs 2
python3 tools/report_family.py .local/phase1/f1-dev/family.json .local/phase2/f1-dev/family.json --out .local/phase2/f1-report.json --markdown .local/phase2/f1-report.md
python3 .local/phase2/trace_checks.py
python3 tests/check_controller_defaults.py --binary .local/phase2/final/battle-lab --out .local/phase2/defaults
python3 -m unittest discover -s tests -p 'test_*.py'
python3 tools/run_ai_acceptance.py --binary .local/phase2/final/battle-lab --out .local/phase2/frozen-nine --regression-only
python3 tools/run_ai_acceptance.py --binary .local/phase2/final/battle-lab --out .local/phase2/frozen-thirty --held-out --regression-only
python3 .local/phase2/tables.py
python3 tools/source_id.py
git diff --check
```

Authored/F1 manifests, exact per-case argv, metrics and failures are preserved under `.local/phase2/`. `.local/phase2/measurement-status.json` records process exits. Authored measurements reuse the accepted Phase 0 metrics through family_metrics; baseline tables retain their original Phase 0 values. There is no per-seed rule or tuning.

## Scope delivered and boundaries

Plumbing was isolated at `0a8f325e8065b8a5` with a Hold stub, then all prescribed plumbing checks completed before tactical source was added. The real CLI still defaults to legacy. Drills is selected by `--drills` / `-ArmyDrills`; explicit legacy and cognition clear the other controller. Config/cache comparison, typed execution/perception, own planning branches, report transport, conditional digest, manifests, recorded reruns, four-key default checks, source list and optional `--drills` scenario selector are wired. Historical evaluator/parity tools were run through scoped wrappers adding `--cognition` because their historical assumption that the executable defaults to cognition no longer holds.

`PositionSim` lifts the cover-pair approach from recovery without modifying `QueryTacticalPositions`. It provides target radius, angle probe, group cap, actor-known reservations, area/coherence limits, protection/line/reachability conditions, uncertainty rejection, lane checks, primary allocation and up to two alternatives. It considers existing catalogue cover, tangent offsets, and formation anchors. Shelter/peek minima are 2.0/1.8 m and the grenade-density check rejects a third nearby reservation. The old narrow execution centreline initially rejected wider formations; before measurement, per-member paths were projected inside the element's accepted formation corridor. Tactical route evaluation remains one per element per stage; per-member navigation uses the existing pathfinder.

`DrillSim` has four organisation data templates (Gun-centric, Section, Teams, Rush), role-based assignments excluding platoon staff, and Section as the Phase 2 default. Membership is frozen per accepted drill instance. Attrition transformations, weapon recovery and profile selection are not implemented here. The squad view starts from deployment information, then updates positions from the leader's own friendly sightings and received task receipts. Health/suppression/role/weapon updates require a fresh friendly sighting; the explicitly permitted squad-member fields supply those values. It never reads squadmates' enemy contacts, enemy bodies, observer flags or shot records.

MoveTactically uses deployment-centred areas, continuing sweep legs, expected-contact techniques, formation anchors, per-element routes, coherence limits and received arrival receipts. ReactToContact takes precedence on received fire or a known contact inside 100 m. It requests local protected positions, returns fire through the inherited soldier execution, and closes when local firing positions are unavailable. Its emergency rearward response exists only to cover D04's paired control; there is no Phase 3 BreakContact library or platoon task tree. The separate PlanPlatoonTasks branch emits no directives in this phase; existing situation transport remains live.

Evaluation exports carry transported element/area assignments plus drill instance, start time, known-sector and movement fields. Shots use the shooter's recorded frame assignment for element role. Offline metrics add area compliance and contact-to-drill latency; movement coverage uses delivered impacts. Phase 3 conformance metrics remain null, not inferred successes. No observer export feeds policy.

## Measurement discipline

Exactly one tactical source, `70abe8f2c9abc0e3`, was frozen for authored/F1 distribution measurement. Pre-measurement corrections addressed mechanism/integration defects, not distribution scores: inherited narrow execution paths, formation-anchor drift, the assessment timer, same-stimulus fixture deployment and a bound-distance measurement that had included an uninitialised status position. The source and binary are preserved in `.local/phase2/final/`. There was no second measured policy candidate.

The runner guard is enabled for every family run: three zero-shot results in one fixed ten-draw block per controller fail the set and stop scheduling further jobs. Block membership follows requested draw order, not worker completion order. Already-running jobs drain into the report; absent cases stay pending. The authored runner applies the same guard separately to each ten-seed map set. The guard does not replace any per-run intensity or spacing comparison.

## Disagreements and unresolved limitations

- No disagreement with the architect's binding engagement ruling. This build does not satisfy the exit and is not a playable replacement. Legacy remains the user's default; prior Phase 1 native verification does not certify this source.
- The appendix's older default-equals-cognition instruction is superseded by the explicit legacy-default decision. Default-equals-legacy remains asserted. Native Windows/Unreal work remains with the architect; none was attempted here.
- D03's 160 m control is outside the plan's 150 m reported-contact trigger. Its geometry also exercises the unobserved corridor-mouth trigger. That interpretation is disclosed rather than silently changing the 150 m threshold.
- D04's minimum implementation includes an emergency rearward response inside ReactToContact because its paired control explicitly demands one. A full Phase 3 BreakContact drill was not introduced.
- The scenario assertions still expose formation-spacing, bound-length, reaction/transport and occupancy limitations. D04 did not establish the required received-fire stimulus in the tested covered setup; it is not evidence of a passing contact reaction. D05's report does arrive, but later than the companion's literal two-hop-plus-one-second bound. I did not enlarge that bound to absorb extra sampling/reaction delay.
- The D05 weak control reduces initial active strength to a sergeant/corporal pair, leaving one member in the gun group. It also weakens the rifle group. This does not isolate gun-group attrition alone and requires fixture refinement before the pair can certify the stated mechanism.
- D02's initial test used a substring match that could mistake “traveling overwatch” for “traveling.” After spotting that test defect, I tightened the selector to exact matching and added the first-six-seconds control check. No simulation source changed after the measurement freeze. Final results use the tightened test.
- Returned position alternatives are not yet used for a complete receipt-driven fallback lifecycle, and position-pair diagnostics record allocation failure rather than every rejected candidate. The assessment currently checks gun-group availability; it does not yet implement the full strength/fire-superiority assessment in the drill contract. Timeout evidence is retained, but the exhaustive method lifecycle is incomplete. These are explicit gaps, not claimed Phase 2 passes.
- Formation compliance in D01 is checked during its move until arrival; the narrow control checks containment and a 4 m column selection. D02 currently checks evidence of 30–50 m separation and protected trailing positions, not a duration-wide guarantee for all trailing members. These limits prevent claiming the full catalogue contract from an isolated passing subcheck.
- No F2/F3 generation, Phase 3 drill library, platoon task tree, promotion, commit, reset, stash or Fable launcher call. Frozen layouts/lists/evaluator remain untouched. Stop at this report.

