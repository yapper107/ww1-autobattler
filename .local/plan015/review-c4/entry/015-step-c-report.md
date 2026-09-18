# Plan015 Step C — single measured build, stopped on guard

**Step C stops on `under_2m; trench_nearest_m`.** Source before/after measurement is `4786fc9830d0c1c0`. 20/20 authored cases completed; no F1 distribution was dispatched. Steps E and D remain unstarted. This continuation began and ended at the same `4786fc9830d0c1c0`; the 31-selector local pass, including Q05 and retention, is inherited on this exact source. See the [Step B report](015-step-b-report.md).

The measured binary and simulation snapshot remain frozen in `.local/plan015/review-c2/final/`. Works 100–109 are reused without rerunning; only the guard classification changes under the explicit review ruling. No simulation source changed during this continuation. Scheduling is sequential; there is no in-flight or queued candidate battle after a failure. Completed runs and AARs remain recorded. Missing maps/draws are not scored as successes. Legacy remains the playable default; this source is not replay-approved or promoted.

## Guard interpretation fixed before dispatch

The [Step C3 review](../../plans/015-step-c3-fable-review.md) withdraws the stronger-remaining-strength guard. It remains information only. The earlier Step C review had replaced absolute resolution and Phase4f churn thresholds with legacy-paired intervals. `measurement-contract.md` was written before dispatch. Paired differences below are drills minus legacy; positive is worse. Intervals are 95% percentile intervals for the paired mean from 2000 fixed-RNG resamples by battle seed. A resolution/churn criterion fails only when the lower bound is above zero. All final per-run values are disclosed rather than treating each pair as its own hard gate.

Time to decision is the existing recorded-duration metric. Stronger remaining strength is `max(active/initial)` and its paired interval at the limit is reported as information, never a stop criterion. Orders count issued soldier orders per actual battle minute, excluding directives/reports, with trace/event count equality checked. Spacing retains the existing set comparison: mean per-run under-2m share no higher than legacy; the trench target is the mean of per-run nearest-neighbour medians at least 3 m. Participation requires three firing squads per side in every authored battle. A single zero-shot battle stops immediately, stricter than the older three-in-ten engagement counter, which is also recorded.

Six guard unit tests pass, including proof that higher remaining strength alone cannot stop measurement. The full 73-test Python suite passes; the family runner also has a tested strict one-zero-shot option for the pending F1 draws. The baseline self-comparisons reach 360 s and pass without applying the withdrawn absolute 300 s/60% thresholds.

## Paired scoreboard

| Map | Criterion | Paired delta, or absolute target value | 95% interval | Result |
|---|---|---:|---|---|
| works | time_to_decision | 0.000 | [0.000, 0.000] | pass |
| works | orders_azure_per_minute | -59.517 | [-75.051, -43.025] | pass |
| works | orders_ember_per_minute | -64.483 | [-76.033, -53.649] | pass |
| works | under_2m (percentage points) | -9.657 | ≤0 | pass |
| trenches | time_to_decision | 0.000 | [0.000, 0.000] | pass |
| trenches | orders_azure_per_minute | -81.067 | [-111.069, -55.145] | pass |
| trenches | orders_ember_per_minute | -49.383 | [-84.450, -18.766] | pass |
| trenches | under_2m (percentage points) | +2.278 | ≤0 | **FAIL** |
| trenches | trench_nearest_m (absolute m) | 2.995347 | ≥3 m | **FAIL** |

Engagement and participation pass all 20 authored cases: zero zero-shot battles, and all four squads on each side fire in every battle. Works passes every active guard. Trenches under-2 m share is **33.554893% versus legacy 31.277060%**, with seven of ten paired runs worse. Its nearest-mate target misses by 0.004653 m; this is not rounded into a pass. The under-2 m failure independently requires the stop.

Remaining strength is information only (all ten pairs in each set end at 360 s):

| Map | Drills stronger-side mean | Legacy mean | Paired difference | 95% interval |
|---|---:|---:|---:|---|
| Works | 60.94% | 47.19% | +13.75 pp | [+8.44, +18.13] pp |
| Trenches | 75.63% | 60.00% | +15.63 pp | [+2.81, +28.75] pp |

## Works — every completed run

| Seed | Seconds | Shots drills / candidate90 / legacy | Casualty fractions Azure / Ember | Stronger remaining drills / legacy | Firing squads Azure / Ember | AAR |
|---:|---:|---|---|---|---|---|
| 100 | 360.0 | 2000 / 839 / 2583 | 0.469 / 0.625 | 0.531 / 0.438 | 4 / 4 | [report](../plan015/review-c2/after-action/works/100.md) |
| 101 | 360.0 | 2157 / 1038 / 2012 | 0.344 / 0.562 | 0.656 / 0.531 | 4 / 4 | [report](../plan015/review-c2/after-action/works/101.md) |
| 102 | 360.0 | 2344 / 965 / 2270 | 0.531 / 0.406 | 0.594 / 0.625 | 4 / 4 | [report](../plan015/review-c2/after-action/works/102.md) |
| 103 | 360.0 | 2372 / 1272 / 2347 | 0.375 / 0.688 | 0.625 / 0.438 | 4 / 4 | [report](../plan015/review-c2/after-action/works/103.md) |
| 104 | 360.0 | 2257 / 1067 / 2086 | 0.438 / 0.656 | 0.562 / 0.500 | 4 / 4 | [report](../plan015/review-c2/after-action/works/104.md) |
| 105 | 360.0 | 2501 / 1003 / 2318 | 0.406 / 0.438 | 0.594 / 0.406 | 4 / 4 | [report](../plan015/review-c2/after-action/works/105.md) |
| 106 | 360.0 | 1592 / 973 / 2803 | 0.406 / 0.281 | 0.719 / 0.500 | 4 / 4 | [report](../plan015/review-c2/after-action/works/106.md) |
| 107 | 360.0 | 1985 / 1197 / 1878 | 0.469 / 0.375 | 0.625 / 0.406 | 4 / 4 | [report](../plan015/review-c2/after-action/works/107.md) |
| 108 | 360.0 | 2664 / 841 / 1962 | 0.562 / 0.375 | 0.625 / 0.531 | 4 / 4 | [report](../plan015/review-c2/after-action/works/108.md) |
| 109 | 360.0 | 2372 / 689 / 2806 | 0.438 / 0.531 | 0.562 / 0.344 | 4 / 4 | [report](../plan015/review-c2/after-action/works/109.md) |

| Seed | Orders/min Azure drills / legacy | Orders/min Ember drills / legacy | NN median m drills / legacy | Under2m % drills / legacy | Individual adverse differences |
|---:|---|---|---|---|---|
| 100 | 150.67 / 228.50 | 148.83 / 234.67 | 6.95 / 7.27 | 6.76 / 16.21 | none on active measures |
| 101 | 147.50 / 228.50 | 158.67 / 246.17 | 7.05 / 5.04 | 6.53 / 23.52 | none on active measures |
| 102 | 153.50 / 239.33 | 141.33 / 221.17 | 6.03 / 5.98 | 6.01 / 16.51 | none on these measures |
| 103 | 149.83 / 206.50 | 130.17 / 188.00 | 6.37 / 5.51 | 6.76 / 19.16 | none on active measures |
| 104 | 161.33 / 197.00 | 138.17 / 193.33 | 6.84 / 7.56 | 6.35 / 14.20 | none on active measures |
| 105 | 176.00 / 181.67 | 135.33 / 169.33 | 6.20 / 6.80 | 5.15 / 13.31 | none on active measures |
| 106 | 139.33 / 171.83 | 148.33 / 234.17 | 6.29 / 6.88 | 8.56 / 16.53 | none on active measures |
| 107 | 164.67 / 222.83 | 176.17 / 220.33 | 6.89 / 7.56 | 7.65 / 12.54 | none on active measures |
| 108 | 130.00 / 226.00 | 160.67 / 220.67 | 6.68 / 6.28 | 7.88 / 17.33 | none on active measures |
| 109 | 133.50 / 199.33 | 131.33 / 186.00 | 6.09 / 6.51 | 6.18 / 15.09 | none on active measures |

Candidate90 casualty/closure values are informational; they do not gate this build.

| Seed | Drills casualties A/E | Candidate90 casualties A/E | Legacy casualties A/E | Front120 m drills / candidate90 / legacy | Front240 m drills / candidate90 / legacy | Hits/soldier-minute drills |
|---:|---|---|---|---|---|---|
| 100 | 0.469/0.625 | 0.844/0.312 | 0.562/0.562 | 74.690 / 108.427 / 95.045 | 100.661 / 106.781 / 88.515 | 0.407 |
| 101 | 0.344/0.562 | 0.906/0.375 | 0.625/0.469 | 75.382 / 108.319 / 86.105 | 68.682 / 106.429 / 90.087 | 0.331 |
| 102 | 0.531/0.406 | 0.688/0.719 | 0.375/0.719 | 78.285 / 106.227 / 93.350 | 81.304 / 118.029 / 97.134 | 0.356 |
| 103 | 0.375/0.688 | 0.562/0.750 | 0.688/0.562 | 78.628 / 112.321 / 94.750 | 96.377 / 104.799 / 78.256 | 0.347 |
| 104 | 0.438/0.656 | 0.781/0.500 | 0.750/0.500 | 79.221 / 110.462 / 99.343 | 84.626 / 109.710 / 83.677 | 0.388 |
| 105 | 0.406/0.438 | 0.656/0.406 | 0.688/0.594 | 81.722 / 109.371 / 92.955 | 97.256 / 109.552 / 93.129 | 0.287 |
| 106 | 0.406/0.281 | 0.625/0.625 | 0.781/0.500 | 82.719 / 108.768 / 89.283 | 93.478 / 109.937 / 83.577 | 0.260 |
| 107 | 0.469/0.375 | 0.531/0.750 | 0.594/0.594 | 80.139 / 109.789 / 103.335 | 85.380 / 109.622 / 99.618 | 0.312 |
| 108 | 0.562/0.375 | 0.719/0.500 | 0.469/0.531 | 83.047 / 107.259 / 100.832 | 90.486 / 110.615 / 95.378 | 0.341 |
| 109 | 0.438/0.531 | 0.562/0.312 | 0.656/0.656 | 82.520 / 107.118 / 92.415 | 100.128 / 108.079 / 103.551 | 0.313 |

Completed 10 runs: mean shots 2224.40, mean per-run NN median 6.540 m, mean under2m share 6.783%. All completed runs have an AAR and raw trace.

## Trenches — every completed run

| Seed | Seconds | Shots drills / candidate90 / legacy | Casualty fractions Azure / Ember | Stronger remaining drills / legacy | Firing squads Azure / Ember | AAR |
|---:|---:|---|---|---|---|---|
| 100 | 360.0 | 788 / 598 / 2104 | 0.156 / 0.500 | 0.844 / 0.406 | 4 / 4 | [report](../plan015/review-c3/after-action/trenches/100.md) |
| 101 | 360.0 | 2135 / 1342 / 1569 | 0.281 / 0.469 | 0.719 / 0.875 | 4 / 4 | [report](../plan015/review-c3/after-action/trenches/101.md) |
| 102 | 360.0 | 1699 / 1179 / 1774 | 0.281 / 0.500 | 0.719 / 0.781 | 4 / 4 | [report](../plan015/review-c3/after-action/trenches/102.md) |
| 103 | 360.0 | 1087 / 511 / 1805 | 0.344 / 0.188 | 0.812 / 0.844 | 4 / 4 | [report](../plan015/review-c3/after-action/trenches/103.md) |
| 104 | 360.0 | 971 / 817 / 1377 | 0.406 / 0.375 | 0.625 / 0.625 | 4 / 4 | [report](../plan015/review-c3/after-action/trenches/104.md) |
| 105 | 360.0 | 1028 / 558 / 1948 | 0.344 / 0.250 | 0.750 / 0.594 | 4 / 4 | [report](../plan015/review-c3/after-action/trenches/105.md) |
| 106 | 360.0 | 825 / 552 / 2552 | 0.219 / 0.250 | 0.781 / 0.469 | 4 / 4 | [report](../plan015/review-c3/after-action/trenches/106.md) |
| 107 | 360.0 | 1141 / 655 / 2284 | 0.219 / 0.312 | 0.781 / 0.500 | 4 / 4 | [report](../plan015/review-c3/after-action/trenches/107.md) |
| 108 | 360.0 | 865 / 385 / 2262 | 0.094 / 0.281 | 0.906 / 0.406 | 4 / 4 | [report](../plan015/review-c3/after-action/trenches/108.md) |
| 109 | 360.0 | 1210 / 1392 / 2218 | 0.375 / 0.375 | 0.625 / 0.500 | 4 / 4 | [report](../plan015/review-c3/after-action/trenches/109.md) |

| Seed | Orders/min Azure drills / legacy | Orders/min Ember drills / legacy | NN median m drills / legacy | Under2m % drills / legacy | Individual adverse differences |
|---:|---|---|---|---|---|
| 100 | 154.17 / 238.67 | 151.83 / 159.67 | 3.00 / 4.17 | 33.37 / 28.50 | under2m |
| 101 | 176.33 / 212.00 | 154.33 / 324.33 | 3.00 / 3.39 | 31.30 / 33.43 | none on these measures |
| 102 | 201.33 / 277.33 | 136.33 / 145.00 | 2.81 / 2.58 | 36.85 / 39.51 | median<3m |
| 103 | 177.00 / 297.83 | 191.17 / 204.00 | 3.17 / 3.30 | 32.58 / 30.39 | under2m |
| 104 | 133.83 / 316.50 | 162.67 / 176.17 | 2.86 / 2.69 | 35.55 / 40.27 | median<3m |
| 105 | 162.17 / 257.83 | 193.83 / 179.50 | 3.01 / 5.77 | 32.01 / 27.75 | ember orders, under2m |
| 106 | 217.33 / 232.50 | 163.33 / 266.00 | 2.99 / 4.41 | 34.78 / 26.96 | under2m, median<3m |
| 107 | 203.00 / 255.33 | 137.50 / 219.67 | 2.98 / 4.68 | 32.42 / 28.78 | under2m, median<3m |
| 108 | 159.00 / 254.00 | 164.17 / 195.00 | 3.11 / 4.14 | 32.97 / 30.53 | under2m |
| 109 | 159.00 / 211.83 | 183.83 / 263.50 | 3.02 / 4.34 | 33.73 / 26.66 | under2m |

Candidate90 casualty/closure values are informational; they do not gate this build.

| Seed | Drills casualties A/E | Candidate90 casualties A/E | Legacy casualties A/E | Front120 m drills / candidate90 / legacy | Front240 m drills / candidate90 / legacy | Hits/soldier-minute drills |
|---:|---|---|---|---|---|---|
| 100 | 0.156/0.500 | 0.062/0.281 | 0.594/0.656 | 26.423 / 42.078 / 31.506 | 42.693 / 41.177 / 36.591 | 0.229 |
| 101 | 0.281/0.469 | 0.469/0.062 | 0.625/0.125 | 23.794 / 37.650 / 36.306 | 26.340 / 27.897 / 27.253 | 0.300 |
| 102 | 0.281/0.500 | 0.406/0.312 | 0.219/0.656 | 22.720 / 32.204 / 37.332 | 33.738 / 36.546 / 52.496 | 0.267 |
| 103 | 0.344/0.188 | 0.156/0.281 | 0.156/0.750 | 22.994 / 41.645 / 39.256 | 24.370 / 33.431 / 52.184 | 0.203 |
| 104 | 0.406/0.375 | 0.312/0.250 | 0.375/0.438 | 24.760 / 39.888 / 36.926 | 24.781 / 34.418 / 43.416 | 0.258 |
| 105 | 0.344/0.250 | 0.250/0.219 | 0.406/0.562 | 26.601 / 40.502 / 40.381 | 34.090 / 32.039 / 34.101 | 0.214 |
| 106 | 0.219/0.250 | 0.188/0.219 | 0.750/0.531 | 25.049 / 43.707 / 35.509 | 34.770 / 36.943 / 27.184 | 0.212 |
| 107 | 0.219/0.312 | 0.156/0.312 | 0.500/0.719 | 25.161 / 39.850 / 32.273 | 27.432 / 39.224 / 23.723 | 0.198 |
| 108 | 0.094/0.281 | 0.062/0.250 | 0.625/0.594 | 27.532 / 41.724 / 34.770 | 29.539 / 37.170 / 49.498 | 0.169 |
| 109 | 0.375/0.375 | 0.656/0.281 | 0.500/0.500 | 25.525 / 37.727 / 32.466 | 32.566 / 40.508 / 24.667 | 0.260 |

Completed 10 runs: mean shots 1174.90, mean per-run NN median 2.995 m, mean under2m share 33.555%. All completed runs have an AAR and raw trace.

## Spacing evidence from the stopped build

The [observer diagnostic](../plan015/review-c3/spacing-diagnostic-106.json) for Trenches 106, the largest paired under-2 m increase, records 34.78% versus legacy 26.96%. Squads 6 and 7 spend 53.0% and 51.0% of eligible soldier-time under 2 m. Members 57/60 are within 2 m for 193.8 s after 120 s, and are 1.597 m apart at 120 s. Pair-duration is a diagnostic, not the nearest-mate metric numerator.

Trenches 102 has the highest absolute crowding (36.85%), although its matched legacy run is worse (39.51%); it is not presented as the cause of the paired regression. Its [positions and duration evidence](../plan015/review-c3/spacing-diagnostic.json) show squad-5 members 44/45 within 2 m for 188.2 s after 120 s. At 120 s both occupy their assigned goals, 1.3 m apart. Orders 669/670 at 97 s explicitly set overwatch at those positions (trace IDs 390582/390583). At 106.7 s trace 426283 records effective incoming fire without superiority and no protected bound, holding existing cover. At 120.5 s traces 516065/516066 accept help and allocate protected support positions. The [compact trace excerpt](../plan015/review-c3/spacing-trace-excerpt.json) and [full AAR](../plan015/review-c3/after-action/trenches/102.md) preserve these records.

These observations establish persistent close spacing during held/overwatch orders. They do not isolate a single allocation or traffic defect that explains the whole distribution. No repair or follow-up battle is made after the stop; all facts remain offline observer evidence.

## Verification on this source

The C++ selectors, Linux full suite and 40/3 parity checks below are **inherited from the preceding continuation on the identical simulation source**, not rerun this turn. Python tests, protected-file hashes, source identity and whitespace checks were run in this continuation.

| Check | Result |
|---|---|
| Existing 28 selectors + Q05 + clock pin + retention pin | 31/31 pass |
| Full `./scripts/test-sim.sh` | exit0;237.642 s; default legacy360 s /1878 shots |
| Python unittest | 73 pass |
| Authored legacy/cognition, both maps seeds 100–109 | 40/40 digest matches |
| Drills trace on/off: Works107, Trenches107, F1 gen1/107 | 3/3 matches |
| Protected hashes | all 4 match |
| `git diff --check` | pass |

Drills paired digests: Works `2368092312704331323`; Trenches `7010569149597981856`; F1 `7012570963591353430`. Verification runs are separate from the distribution and do not fill missing cases. The preserved squad-only executable `a0364bff5cea6ab9-linux` was identified for the F1 reference but no reference/candidate F1 distribution was opened after this guard stop.

## Commands and artifacts

```text
# Earlier unchanged-source C++ / parity commands are preserved in the Step B report.
python3 -m unittest discover -s tests -p 'test_*.py'
python3 -m unittest discover -s tests -p 'test_family.py'
python3 .local/plan015/review-c3/run_authored.py --terrain 1
python3 .local/plan015/review-c3/spacing_diagnostic.py
python3 .local/plan015/review-c3/spacing_diagnostic.py 106
python3 tools/source_id.py
git diff --check
```

Each measured battle argv and its AAR command are saved in `.local/plan015/review-c3/authored-results.json`; every battle uses the frozen binary with `--drills --terrain N --seed S --seconds 360 --evaluate --out DIR`. AARs are under `after-action/MAP/SEED.md`, alongside JSON. The unchanged-source `.local/plan015/review-c2/verification.json` links all digest manifests; C++ suites and full-battle parity were not needlessly repeated in this continuation. Guard code is `tools/initiative_guards.py`, tested in `tests/test_initiative_guards.py`; no metric feeds gameplay policy.

## Stop, disagreements and remaining work

The Trenches spacing guard failures stand. F1 win share, F1 spacing/churn, Step E leader profiles and paired battles, and Step D UI preparation are not completed because the user requires a stop at any guard failure. Only the explicitly withdrawn remaining-strength guard was reclassified before dispatch. No post-result reinterpretation, policy repair, second measured build, Step E leader dials/paired run or Step D screen preparation follows. The user has not judged this source in replay. No Fable launcher, Windows/Unreal build, commit, reset or stash was used. Protected files and pre-existing work remain intact.

No disagreement with the rulings. The phrase “trench median” leaves the aggregation ambiguous; this continuation preserved the already implemented mean of per-run medians and recorded it before dispatch. It was not changed after seeing 2.995347 m. No alternate aggregation is used to override either spacing failure. Remaining-strength at the limit is an attrition proxy, not proof of inactivity: shots, participation, spacing and raw outcomes are disclosed separately. The authored duration metric is censored at 360 s and cannot claim tactical decisions happened earlier. The summary retains all trace evidence in its appendix; attribution remains an observed sequence, not counterfactual causation.
