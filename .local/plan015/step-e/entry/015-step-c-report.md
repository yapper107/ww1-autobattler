# Plan 015 Step C — C6 continuation

**F1 win-share status: FAIL — C6 authorises continuation to E/D despite this criterion.** No non-exempt distribution guard failure recorded.

**Trenches spacing remains an open replay item.** Its paired interval is the guard; the 3 m mean per-run NN-median is a target. The C5 separated-slot attempts remain archived and are not reinstated.

Entry source `4786fc9830d0c1c0`; current measured/planned source `26145f87ae81a257`. Legacy remains default. No promotion or user replay approval is claimed.

## Pre-repair diagnosis and disagreements

All sixteen exact-reference-win/current-loss F1 cases were examined from existing C5 exports before policy edits. [Complete diagnosis](../plan015/review-c6/diagnostics/conclusion.md); [summary and per-time samples](../plan015/review-c6/diagnostics/belief-summary.json). Observer living counts are offline only. `ReceiveObservations` indexes reports by contact identity; `BuildMentalMap` counts that identity-indexed memory once. No double counting is found, so belief policy is unchanged. Estimates include unseen-force allowances, MG weighting and retained tracks; they are not raw true counts.

| Gen/seed | Maximum observations / initial defenders | Duplicate IDs in exported decisions | First weak observation: time, weighted belief, actual enemy/own/nonstaff |
|---|---|---:|---|
| 1/109 | 12/12 | 0 | 150.00s, 16.34, 8/9/7 |
| 8/107 | 10/10 | 0 | 99.95s, 13.25, 10/8/6 |
| 8/108 | 10/10 | 0 | 114.95s, 13.24, 9/7/6 |
| 10/108 | 10/10 | 0 | 95.85s, 12.70, 10/6/5 |
| 13/107 | 12/12 | 0 | 90.95s, 16.65, 11/9/7 |
| 16/107 | 8/8 | 0 | 157.00s, 10.32, 6/7/5 |
| 17/107 | 12/12 | 0 | not recorded |
| 18/107 | 12/12 | 0 | 181.85s, 13.68, 8/6/6 |
| 18/108 | 12/12 | 0 | 79.25s, 16.86, 11/10/8 |
| 18/109 | 12/12 | 0 | 124.80s, 16.36, 8/9/8 |
| 19/109 | 11/12 | 0 | 275.50s, 11.00, 10/6/5 |
| 20/107 | 10/10 | 0 | 210.30s, 10.35, 6/5/5 |
| 21/108 | 12/12 | 0 | 63.95s, 16.24, 12/9/7 |
| 22/107 | 9/10 | 0 | 178.55s, 11.28, 9/6/5 |
| 22/108 | 9/10 | 0 | 174.65s, 10.92, 9/7/5 |
| 24/109 | 10/10 | 0 | 116.45s, 11.51, 8/5/4 |

The specific stale-ratio reading of 10/108 is disputed: trace 14220 at44.55s records a frozen-element minStrength failure before BreakContact at45.55s (14303). Evaluation confirms base member8 was incapacitated. The original ratio branch already excluded active actions. The new contract explicitly records new assault-loss/pressure evidence and retains a committed assault on a same-group intent, but the observed 10/108 retirement was not evidence-free. At95.85s its weak observation has weighted belief12.70 versus10 living defenders, with only6 attackers left (5 nonstaff); the initial numerical advantage no longer exists.

## Local attempts

| Attempt | Source | Selectors | Failures | Full Linux | Historical digests | Trace pairs |
|---|---|---:|---|---|---|---|
| attempt1 | `9b9e7f203aa939b4` | 32/35 | Q08, Q07, D11 | pass | 40/40 of40 | 3/3 of3 |
| attempt2 | `657e5ca3f49821b3` | 34/35 | Q07 | pass | 40/40 of40 | 3/3 of3 |
| attempt3 | `26145f87ae81a257` | 35/35 | none | pass | 40/40 of40 | 3/3 of3 |

Attempt1 adds explicit assault evidence (new assault-element loss, new loss of the own base of fire, or15s effective fire without superiority after an8s+report-delay support expectation), answered-caller Fixing, and same-sender/same-sector support renewal without re-acceptance. Q09 proves shared-contact reports do not duplicate memory. It passes32/35: Q07 bare has no delivered Fixing, Q08 never reaches its far-helper support precondition, and D11 exposes reorganisation being pre-empted by retirement. Q06 initially did not prove effective incoming fire despite passing its first assertions; that limitation is recorded, not counted as full contract evidence.

Attempt2 restores minStrength/Reorganise precedence, strengthens Q06 with real automatic fire and an incoming-fire assertion, places the new bare helper at a reachable firing station, and uses D06’s production-recorded support state for Q08. It passes34/35. Q07 receives Fixing at28.3s during an already-committed BreakContact, and responds at51.3s after retirement completes; this does not prove a five-second response for an eligible caller.

Attempt3 changes only new fixture103’s initial attrition: two gun-group members are absent at deployment, and one later physical gun loss crosses minStrength without the separate three-new-loss retirement trigger. All assertions and policy remain unchanged from attempt2. Q07 now responds at28.3s to its28.3s Fixing receipt; the no-Fixing control does not act. All35 selectors pass, including all31 existing selectors. The existing completed-retirement commitment is retained: the new five-second eligibility pin does not claim a radio message interrupts BreakContact. The observed23s retirement case remains disclosed.

Archives: each [attempt1](../plan015/review-c6/attempt1), [attempt2](../plan015/review-c6/attempt2), [attempt3](../plan015/review-c6/attempt3) has its frozen binary/Sim snapshot, selector logs, patch against entry, suite log and parity records. No pre-existing fixture or assertion is relaxed. Q06–Q09 and their assumptions are recorded in plan015 section6’s C6 addendum.

## Source changes

| Contract | Implementation |
|---|---|
| Accepted assault roster, new-loss/pressure evidence, retained same-group intent | `Sim/SquadDrillSim.cpp:306`, `:460` |
| Answered caller chooses covered attack or supported closure | `Sim/SquadDrillSim.cpp:312`, `:344` |
| Identical active support renewal retains instance/generation | `Sim/DrillSim.cpp:290` |
| Drills-only evidence state and conditional hashing | `Sim/BattleSim.h:450`, `Sim/Diagnostics.cpp:169` |
| New physical fixtures99–103 and selectors Q06–Q09 | `Sim/PlatoonFixtures.cpp`, `tests/platoon_tests.h:166` |
| Fixture range103 | `Sim/BattleSim.cpp`, `tools/battle_cli.cpp` |

## Distribution guards

[Pre-dispatch measurement contract](../plan015/review-c6/measurement-contract.md). Matched legacy is unchanged; bootstrap2000, RNG1729, equal-run mean, seed clusters for authored and generated-map clusters for F1. Both per-side physical order counts are checked against trace counts. F1 uses the exact90-case a0364bff5cea6ab9 reference measured in C5, with matching scenario digest and draw keys. No reference rerun is substituted or mixed. [Measured seed107 cross-checks](../plan015/review-c6/measurement/measurement-parity-crosscheck.json) also match the archived trace-on/off digests on both authored maps.

Completed authored runs: 20/20; F1 current runs: 90/90.

| Set | Guard | Paired mean delta | 95% interval | Result |
|---|---|---:|---|---|
| works | time_to_decision | 0.000000 | [0.0, 0.0] | pass |
| works | orders_azure_per_minute | -53.466667 | [-71.58458333333333, -36.563333333333354] | pass |
| works | orders_ember_per_minute | -61.083333 | [-73.735, -49.081250000000004] | pass |
| works | under_2m | -0.098277 | [-0.11846887621077991, -0.08240982551793219] | pass |
| works | stronger_remaining_at_limit | 0.153125 | — | information/target |
| trenches | time_to_decision | 0.000000 | [0.0, 0.0] | pass |
| trenches | orders_azure_per_minute | -86.333333 | [-113.96708333333332, -60.21583333333333] | pass |
| trenches | orders_ember_per_minute | -49.433333 | [-89.41749999999999, -12.431250000000007] | pass |
| trenches | under_2m | 0.016121 | [-0.010821706210330783, 0.04008033115523816] | pass |
| trenches | stronger_remaining_at_limit | 0.16875 | — | information/target |
| trenches | trench_nearest_m | 3.0243279121180477 | — | information/target |
| F1 | orders_azure_per_minute | -35.305186 | [-47.34989188463828, -24.170777502687557] | pass |
| F1 | orders_ember_per_minute | -38.089803 | [-45.340534208409174, -31.063814685433588] | pass |
| F1 | under_2m | -0.088427 | [-0.10593829896469885, -0.07226723557699623] | pass |
| F1 | win_share_vs_a0364bff5cea6ab9 | -0.155556 | [-0.28888888888888886, -0.03333333333333333] | continue under C6 |

### Measured contract traces

[Trace IDs and reasons](../plan015/review-c6/measurement/authored-contract-evidence.json). Counts are diagnostics, not an additional pass criterion.

| Map/seed | SquadAttack candidates | Answered/no-route decisions | Evidence-triggered retirement | Retained support renewal | Retained assault intent |
|---|---:|---:|---:|---:|---:|
| works/100 | 9 | 7 | 1 | 21 | 0 |
| works/101 | 2 | 8 | 1 | 2 | 0 |
| works/102 | 2 | 9 | 2 | 19 | 1 |
| works/103 | 4 | 8 | 0 | 21 | 0 |
| works/104 | 3 | 5 | 1 | 33 | 0 |
| works/105 | 6 | 9 | 2 | 79 | 0 |
| works/106 | 4 | 10 | 3 | 0 | 1 |
| works/107 | 2 | 7 | 0 | 9 | 0 |
| works/108 | 1 | 5 | 1 | 3 | 0 |
| works/109 | 5 | 8 | 1 | 25 | 0 |
| trenches/100 | 8 | 3 | 2 | 6 | 2 |
| trenches/101 | 6 | 5 | 2 | 7 | 0 |
| trenches/102 | 9 | 3 | 1 | 11 | 0 |
| trenches/103 | 5 | 4 | 1 | 13 | 0 |
| trenches/104 | 3 | 13 | 2 | 3 | 2 |
| trenches/105 | 3 | 10 | 0 | 29 | 0 |
| trenches/106 | 5 | 1 | 0 | 28 | 0 |
| trenches/107 | 5 | 6 | 1 | 53 | 0 |
| trenches/108 | 3 | 3 | 0 | 21 | 0 |
| trenches/109 | 4 | 2 | 2 | 67 | 1 |

## Authored per-run results

| Map/seed | Shots | Casualties A/E | Firing squads A/E | NN median m | Under2m % | Orders/min A/E | Duration | AAR |
|---|---:|---|---|---:|---:|---|---:|---|
| works/100 | 2270 | 0.625/0.656 | 4/4 | 6.8467 | 6.784 | 157.50/185.50 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/works/100.md) |
| works/101 | 2395 | 0.219/0.656 | 4/4 | 7.2059 | 6.545 | 127.00/155.67 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/works/101.md) |
| works/102 | 1933 | 0.438/0.438 | 4/4 | 6.4950 | 7.768 | 181.00/181.67 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/works/102.md) |
| works/103 | 2512 | 0.625/0.594 | 4/4 | 6.8898 | 7.357 | 196.33/147.83 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/works/103.md) |
| works/104 | 2114 | 0.375/0.281 | 4/4 | 6.6563 | 6.449 | 155.17/119.33 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/works/104.md) |
| works/105 | 2717 | 0.406/0.594 | 4/4 | 7.0236 | 5.658 | 165.67/130.17 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/works/105.md) |
| works/106 | 1704 | 0.344/0.250 | 4/4 | 6.0921 | 7.969 | 140.00/151.33 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/works/106.md) |
| works/107 | 2602 | 0.281/0.656 | 4/4 | 6.9060 | 6.072 | 164.00/153.83 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/works/107.md) |
| works/108 | 2028 | 0.688/0.281 | 4/4 | 6.6924 | 5.078 | 128.83/133.33 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/works/108.md) |
| works/109 | 2013 | 0.375/0.406 | 4/4 | 6.8216 | 6.439 | 151.33/144.33 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/works/109.md) |
| trenches/100 | 1308 | 0.219/0.406 | 4/4 | 3.0000 | 30.887 | 202.00/168.67 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/trenches/100.md) |
| trenches/101 | 1675 | 0.281/0.188 | 4/4 | 2.9533 | 33.056 | 168.83/169.17 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/trenches/101.md) |
| trenches/102 | 1782 | 0.281/0.312 | 4/4 | 2.8807 | 34.779 | 167.83/150.83 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/trenches/102.md) |
| trenches/103 | 1101 | 0.250/0.344 | 4/4 | 3.2052 | 30.261 | 161.83/180.00 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/trenches/103.md) |
| trenches/104 | 1215 | 0.438/0.406 | 4/4 | 3.0659 | 34.531 | 147.50/201.17 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/trenches/104.md) |
| trenches/105 | 951 | 0.344/0.281 | 4/4 | 3.0041 | 33.577 | 160.50/187.50 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/trenches/105.md) |
| trenches/106 | 849 | 0.188/0.156 | 4/4 | 3.1061 | 33.099 | 214.83/144.83 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/trenches/106.md) |
| trenches/107 | 1097 | 0.188/0.406 | 4/4 | 2.9196 | 32.778 | 172.17/112.17 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/trenches/107.md) |
| trenches/108 | 865 | 0.094/0.281 | 4/4 | 3.1071 | 32.972 | 159.00/162.67 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/trenches/108.md) |
| trenches/109 | 771 | 0.281/0.250 | 4/4 | 3.0012 | 32.951 | 136.00/161.50 | 360.00 | [AAR](../plan015/review-c6/measurement/after-action/trenches/109.md) |

### Authored adverse pairs (informational per run)

Positive differences are adverse; the guards use the set criterion above, not a per-run conjunction.

| Map/seed | Under2m delta pp | Orders/min delta A/E | Time delta s | Adverse measures |
|---|---:|---|---:|---|
| works/100 | -9.4306 | -71.00/-49.17 | +0.00 | none |
| works/101 | -16.9763 | -101.50/-90.50 | +0.00 | none |
| works/102 | -8.7382 | -58.33/-39.50 | +0.00 | none |
| works/103 | -11.7989 | -10.17/-40.17 | +0.00 | none |
| works/104 | -7.7544 | -41.83/-74.00 | +0.00 | none |
| works/105 | -7.6494 | -16.00/-39.17 | +0.00 | none |
| works/106 | -8.5586 | -31.83/-82.83 | +0.00 | none |
| works/107 | -6.4692 | -58.83/-66.50 | +0.00 | none |
| works/108 | -12.2548 | -97.17/-87.33 | +0.00 | none |
| works/109 | -8.6467 | -48.00/-41.67 | +0.00 | none |
| trenches/100 | +2.3890 | -36.67/+9.00 | +0.00 | spacing, ember churn |
| trenches/101 | -0.3759 | -43.17/-155.17 | +0.00 | none |
| trenches/102 | -4.7348 | -109.50/+5.83 | +0.00 | ember churn |
| trenches/103 | -0.1239 | -136.00/-24.00 | +0.00 | none |
| trenches/104 | -5.7367 | -169.00/+25.00 | +0.00 | ember churn |
| trenches/105 | +5.8224 | -97.33/+8.00 | +0.00 | spacing, ember churn |
| trenches/106 | +6.1440 | -17.67/-121.17 | +0.00 | spacing |
| trenches/107 | +3.9965 | -83.17/-107.50 | +0.00 | spacing |
| trenches/108 | +2.4460 | -95.00/-32.33 | +0.00 | spacing |
| trenches/109 | +6.2941 | -75.83/-102.00 | +0.00 | spacing |

## F1 per-run results

[Four-controller distributions and paired deltas](../plan015/review-c6/measurement/family-scoreboard.md); [all raw candidate, legacy and exact-reference cases](../plan015/review-c6/measurement/f1-guards.json).

| Gen/seed | Outcome A/draw/E; exact reference | Shots | Casualties A/E | NN m | Under2m % | Orders/min A/E | Adverse outcome pair |
|---|---|---:|---|---:|---:|---|---|
| 1/107 | 1/0/0; 1/0/0 | 1095 | 0.833/0.833 | 8.289 | 1.817 | 76.83/5.67 | none |
| 1/108 | 0/0/1; 1/0/0 | 1204 | 0.875/0.417 | 5.001 | 2.891 | 61.00/5.00 | reference win lost |
| 1/109 | 0/0/1; 1/0/0 | 1123 | 0.833/0.250 | 5.075 | 2.352 | 64.00/4.83 | reference win lost |
| 2/107 | 1/0/0; 1/0/0 | 352 | 0.042/1.000 | 6.001 | 3.919 | 158.92/3.35 | none |
| 2/108 | 1/0/0; 1/0/0 | 362 | 0.083/1.000 | 7.300 | 2.090 | 136.52/3.72 | none |
| 2/109 | 1/0/0; 1/0/0 | 436 | 0.042/1.000 | 6.000 | 4.103 | 161.29/2.46 | none |
| 3/107 | 1/0/0; 1/0/0 | 665 | 0.292/1.000 | 5.248 | 10.580 | 186.09/5.13 | none |
| 3/108 | 1/0/0; 1/0/0 | 679 | 0.292/1.000 | 4.374 | 11.587 | 131.25/4.05 | none |
| 3/109 | 1/0/0; 1/0/0 | 565 | 0.292/1.000 | 4.967 | 8.717 | 172.89/5.12 | none |
| 4/107 | 1/0/0; 1/0/0 | 471 | 0.375/1.000 | 5.000 | 4.558 | 123.82/2.04 | none |
| 4/108 | 1/0/0; 1/0/0 | 570 | 0.292/1.000 | 5.073 | 7.627 | 165.56/3.50 | none |
| 4/109 | 1/0/0; 1/0/0 | 1032 | 0.375/1.000 | 5.000 | 6.801 | 115.25/2.31 | none |
| 5/107 | 1/0/0; 1/0/0 | 1396 | 0.542/1.000 | 7.531 | 3.923 | 113.77/4.14 | none |
| 5/108 | 1/0/0; 1/0/0 | 1250 | 0.625/1.000 | 7.076 | 2.893 | 83.83/5.81 | none |
| 5/109 | 1/0/0; 1/0/0 | 1713 | 0.792/0.750 | 8.455 | 3.405 | 58.67/3.83 | none |
| 6/107 | 1/0/0; 1/0/0 | 635 | 0.500/1.000 | 4.973 | 15.370 | 137.55/6.38 | none |
| 6/108 | 1/0/0; 1/0/0 | 437 | 0.167/1.000 | 4.324 | 16.320 | 210.00/23.16 | none |
| 6/109 | 1/0/0; 1/0/0 | 445 | 0.583/1.000 | 5.236 | 10.547 | 194.49/10.70 | none |
| 7/107 | 1/0/0; 1/0/0 | 617 | 0.438/1.000 | 6.962 | 5.966 | 86.15/4.03 | none |
| 7/108 | 1/0/0; 1/0/0 | 898 | 0.375/1.000 | 4.981 | 4.260 | 67.43/3.06 | none |
| 7/109 | 1/0/0; 1/0/0 | 783 | 0.625/1.000 | 8.680 | 0.930 | 59.86/2.57 | none |
| 8/107 | 0/0/1; 1/0/0 | 657 | 0.812/0.200 | 6.000 | 2.161 | 40.33/4.33 | reference win lost |
| 8/108 | 0/0/1; 1/0/0 | 689 | 0.812/0.400 | 8.826 | 1.720 | 37.33/4.00 | reference win lost |
| 8/109 | 0/0/1; 1/0/0 | 849 | 0.938/0.600 | 8.692 | 2.640 | 38.83/4.33 | reference win lost |
| 9/107 | 1/0/0; 1/0/0 | 740 | 0.167/1.000 | 5.457 | 6.854 | 123.63/9.99 | none |
| 9/108 | 1/0/0; 1/0/0 | 593 | 0.167/1.000 | 6.000 | 3.932 | 124.12/7.67 | none |
| 9/109 | 1/0/0; 1/0/0 | 850 | 0.292/1.000 | 6.095 | 3.418 | 112.09/7.17 | none |
| 10/107 | 0/0/1; 0/0/1 | 524 | 0.750/0.100 | 5.681 | 7.245 | 41.50/3.17 | none |
| 10/108 | 0/0/1; 1/0/0 | 359 | 0.750/0.100 | 5.000 | 1.484 | 26.17/4.00 | reference win lost |
| 10/109 | 0/0/1; 0/1/0 | 739 | 1.000/0.100 | 6.000 | 1.765 | 62.75/4.73 | none |
| 11/107 | 1/0/0; 1/0/0 | 1138 | 0.042/1.000 | 5.000 | 6.366 | 145.90/3.21 | none |
| 11/108 | 1/0/0; 1/0/0 | 610 | 0.167/1.000 | 5.574 | 6.773 | 152.66/3.17 | none |
| 11/109 | 1/0/0; 1/0/0 | 1174 | 0.167/1.000 | 6.732 | 4.561 | 143.59/2.32 | none |
| 12/107 | 1/0/0; 1/0/0 | 380 | 0.062/1.000 | 6.000 | 7.295 | 105.60/2.92 | none |
| 12/108 | 1/0/0; 1/0/0 | 330 | 0.000/1.000 | 6.343 | 3.805 | 105.87/3.54 | none |
| 12/109 | 1/0/0; 1/0/0 | 359 | 0.000/1.000 | 6.433 | 3.153 | 100.18/3.09 | none |
| 13/107 | 0/0/1; 1/0/0 | 759 | 0.688/0.250 | 5.220 | 1.319 | 38.00/5.00 | reference win lost |
| 13/108 | 0/0/1; 0/0/1 | 985 | 0.750/0.500 | 7.572 | 1.699 | 47.83/5.33 | none |
| 13/109 | 0/0/1; 0/0/1 | 1146 | 0.812/0.333 | 5.900 | 1.587 | 37.33/4.67 | none |
| 14/107 | 1/0/0; 0/1/0 | 1142 | 0.625/1.000 | 5.001 | 3.181 | 52.13/4.34 | none |
| 14/108 | 1/0/0; 1/0/0 | 961 | 0.625/1.000 | 5.186 | 2.088 | 63.72/5.92 | none |
| 14/109 | 0/0/1; 0/0/1 | 1306 | 0.938/0.625 | 4.899 | 7.563 | 50.33/3.83 | none |
| 15/107 | 0/0/1; 0/0/1 | 535 | 0.750/0.083 | 5.000 | 7.421 | 37.50/4.33 | none |
| 15/108 | 0/0/1; 0/0/1 | 797 | 0.875/0.000 | 5.000 | 1.158 | 35.17/4.00 | none |
| 15/109 | 0/0/1; 0/0/1 | 858 | 0.875/0.583 | 6.000 | 1.213 | 40.67/6.50 | none |
| 16/107 | 0/0/1; 1/0/0 | 470 | 0.750/0.250 | 4.958 | 3.322 | 42.33/2.17 | reference win lost |
| 16/108 | 0/1/0; 1/0/0 | 656 | 0.812/0.625 | 5.000 | 3.366 | 49.67/2.83 | reference win lost |
| 16/109 | 1/0/0; 1/0/0 | 463 | 0.375/1.000 | 4.528 | 7.282 | 110.73/5.62 | none |
| 17/107 | 1/0/0; 1/0/0 | 789 | 0.458/0.917 | 6.569 | 5.466 | 99.83/7.17 | none |
| 17/108 | 0/0/1; 1/0/0 | 1110 | 0.958/0.667 | 6.325 | 2.281 | 67.83/5.50 | reference win lost |
| 17/109 | 1/0/0; 1/0/0 | 1490 | 0.542/1.000 | 5.656 | 6.562 | 99.39/8.35 | none |
| 18/107 | 0/0/1; 1/0/0 | 1414 | 0.833/0.167 | 5.736 | 1.564 | 70.17/4.00 | reference win lost |
| 18/108 | 0/0/1; 1/0/0 | 807 | 0.792/0.333 | 5.900 | 1.539 | 65.83/5.17 | reference win lost |
| 18/109 | 0/0/1; 1/0/0 | 1298 | 0.750/0.417 | 6.438 | 1.913 | 81.00/5.33 | reference win lost |
| 19/107 | 1/0/0; 1/0/0 | 841 | 0.542/0.917 | 5.004 | 7.865 | 97.17/7.83 | none |
| 19/108 | 1/0/0; 0/1/0 | 883 | 0.792/0.917 | 5.742 | 3.789 | 73.67/6.83 | none |
| 19/109 | 0/0/1; 1/0/0 | 768 | 0.792/0.083 | 5.000 | 9.131 | 70.17/6.33 | reference win lost |
| 20/107 | 1/0/0; 1/0/0 | 742 | 0.458/0.900 | 5.973 | 3.723 | 84.33/4.33 | none |
| 20/108 | 1/0/0; 1/0/0 | 1185 | 0.375/1.000 | 6.428 | 3.478 | 119.35/6.36 | none |
| 20/109 | 1/0/0; 1/0/0 | 1057 | 0.667/0.900 | 5.229 | 6.598 | 77.33/5.50 | none |
| 21/107 | 0/0/1; 0/0/1 | 438 | 0.812/0.083 | 5.000 | 2.041 | 42.17/5.00 | none |
| 21/108 | 0/0/1; 1/0/0 | 385 | 0.688/0.083 | 5.000 | 2.285 | 42.83/5.17 | reference win lost |
| 21/109 | 0/0/1; 0/1/0 | 422 | 0.625/0.083 | 5.000 | 1.235 | 33.83/4.67 | none |
| 22/107 | 0/0/1; 1/0/0 | 1283 | 0.833/0.400 | 6.000 | 2.053 | 68.17/4.50 | reference win lost |
| 22/108 | 1/0/0; 1/0/0 | 1242 | 0.875/0.800 | 6.000 | 4.056 | 70.00/5.33 | none |
| 22/109 | 1/0/0; 1/0/0 | 1454 | 0.792/0.800 | 7.357 | 4.243 | 82.50/5.33 | none |
| 23/107 | 1/0/0; 1/0/0 | 506 | 0.208/1.000 | 5.633 | 4.260 | 166.46/5.79 | none |
| 23/108 | 1/0/0; 1/0/0 | 604 | 0.167/1.000 | 5.381 | 6.705 | 120.99/3.73 | none |
| 23/109 | 1/0/0; 1/0/0 | 636 | 0.333/1.000 | 5.393 | 4.058 | 104.66/4.43 | none |
| 24/107 | 0/0/1; 1/0/0 | 388 | 0.875/0.300 | 4.528 | 1.899 | 56.00/3.33 | reference win lost |
| 24/108 | 1/0/0; 0/0/1 | 600 | 0.500/0.900 | 6.563 | 4.339 | 72.00/5.00 | none |
| 24/109 | 0/0/1; 1/0/0 | 694 | 0.875/0.500 | 5.001 | 5.564 | 44.83/4.50 | reference win lost |
| 25/107 | 1/0/0; 1/0/0 | 410 | 0.250/1.000 | 5.420 | 6.537 | 115.99/3.53 | none |
| 25/108 | 1/0/0; 1/0/0 | 204 | 0.062/1.000 | 5.911 | 4.934 | 109.93/3.79 | none |
| 25/109 | 1/0/0; 1/0/0 | 298 | 0.125/1.000 | 5.092 | 4.814 | 98.00/4.17 | none |
| 26/107 | 1/0/0; 1/0/0 | 779 | 0.292/1.000 | 5.372 | 12.341 | 102.90/7.39 | none |
| 26/108 | 1/0/0; 1/0/0 | 796 | 0.833/0.700 | 5.000 | 4.230 | 56.83/3.50 | none |
| 26/109 | 1/0/0; 1/0/0 | 765 | 0.833/0.800 | 4.700 | 9.576 | 108.33/5.50 | none |
| 27/107 | 1/0/0; 1/0/0 | 566 | 0.125/1.000 | 4.865 | 5.462 | 160.35/4.43 | none |
| 27/108 | 1/0/0; 1/0/0 | 849 | 0.208/1.000 | 5.154 | 3.253 | 163.72/2.08 | none |
| 27/109 | 1/0/0; 1/0/0 | 1123 | 0.250/1.000 | 6.123 | 3.213 | 102.28/1.83 | none |
| 28/107 | 1/0/0; 1/0/0 | 793 | 0.625/1.000 | 5.912 | 7.480 | 101.31/4.72 | none |
| 28/108 | 1/0/0; 1/0/0 | 533 | 0.500/1.000 | 5.005 | 9.199 | 162.38/10.69 | none |
| 28/109 | 1/0/0; 1/0/0 | 881 | 0.458/1.000 | 5.937 | 7.654 | 134.32/8.03 | none |
| 29/107 | 1/0/0; 1/0/0 | 806 | 0.250/1.000 | 6.000 | 4.703 | 131.80/7.07 | none |
| 29/108 | 1/0/0; 1/0/0 | 907 | 0.333/1.000 | 5.507 | 3.488 | 121.97/6.07 | none |
| 29/109 | 0/0/1; 1/0/0 | 1218 | 0.958/0.750 | 6.873 | 4.339 | 50.17/2.50 | reference win lost |
| 30/107 | 1/0/0; 0/0/1 | 419 | 0.500/0.700 | 5.000 | 2.129 | 35.67/5.33 | none |
| 30/108 | 1/0/0; 0/1/0 | 631 | 0.750/0.700 | 6.533 | 2.841 | 46.17/4.83 | none |
| 30/109 | 1/0/0; 1/0/0 | 691 | 0.750/0.700 | 5.897 | 2.766 | 55.83/4.50 | none |

## Implementation interpretation and limits

The new assault-element casualty rule selects retirement when that evidence arrives; it is not merely a permission for an additional tactical reassessment. Frozen-element minStrength and higher Withdraw retain precedence. The new bounded caller test covers an eligible caller: it does not override a BreakContact already underway. No belief deduplication was added because the existing memory already indexes contacts by identity. These interpretations are disclosed for review; no post-measurement adjustment is made.

## Commands and completion boundary

Each attempt: `./scripts/test-sim.sh`; `./scripts/battle-lab.sh --version`; `python3 .local/plan015/review-c6/check_attempt.py ATTEMPT`. The checker invokes all35 selectors, `.local/phase4/parity.py` and the attempt’s three trace pairs. `python3 -m unittest discover -s tests` passes74 tests. Local diagnostic exports use the archived CLI and encounter103; no distribution is run between attempts.

Measurement commands, when reached: `run_authored.py --terrain 0` then `--terrain 1`; `python3 tools/run_family.py --binary .local/plan015/review-c6/measurement/final/battle-lab --out .local/plan015/review-c6/measurement/f1-dev --family F1 --gen-seeds 1-30 --seeds 107-109 --controllers drills --seconds 360 --jobs 2 --trace --zero-shot-limit 1`. Exact per-battle/AAR argv remain in JSON records. `analyze_family.py` evaluates all guards; `family_scoreboard.py` calls `tools/report_family.py`.

No commit, reset, stash, Fable launcher, Windows lab or Unreal invocation. Officer memory/received reports and permitted squad-member data remain policy inputs; all truth comparisons stay offline. Protected files remain unchanged. E/D follow only after measurement and only if no non-exempt guard fails.
