# Plan 015 Step C — C5 continuation

**Open item: Trenches spacing remains for replay review on the restored floor source.** The two bounded repair attempts did not pass all mechanisms. The C5 ruling requires restoration and continuation; the source was restored by copying exactly the four C4-entry files.

**Status: STOP — F1 attacker win share regresses beyond its paired interval.** Distribution source `4786fc9830d0c1c0`. 20/20 authored runs; 90/90 F1 candidate runs and 90/90 exact-reference runs. Attacker wins are 57 versus 75; paired delta −20.00 pp, 95% CI [−31.11, −8.89]. No repaired-source distribution was run. Legacy remains default; this is not promotion or replay approval.

## Local attempts and restoration

| Attempt | Source | Selectors | Remaining failures | Full Linux | Authored digest checks | Trace parity |
|---|---|---:|---|---|---|---|
| attempt1 | `f31e6ff4772d7b27` | 24/31 | retention, Q05, Q02, Q04, Q03, D06, D08 | pass, 239.535s | 40/40 | 3/3 |
| attempt2 | `21b85a48d9bda95c` | 24/31 | Q01, D07, D09, D08, D11, D10, sprint | pass, 240.523s | 40/40 | 3/3 |

Before attempt one: `d9cc4c9fd6e9cec9`. Attempt one restored the hard density veto and used separated, walkable projected holds without a catalogue cover slot; D17 passed. It also imposed a conservative height check for support, which regressed establishment in Q02/Q03/D06 and the Q05/retention chains. Q04 still delivered no rounds, and D08 reached consolidation but did not reorganise by 240 s. Attempt two changed the support query to use the full fresh remembered aim point, a crouched-height test for a stale sector, and a standing-height area test if unknown. Q04 then delivered at 41.2 s after need at 21.3 s, and D17 remained passing. D08 still failed its physical-angle and consolidation/reorganisation assertions; other failures are listed above. Neither fixtures nor assertions changed.

The two attempts and exact patches are archived in [attempt1](../plan015/review-c5/attempt1) and [attempt2](../plan015/review-c5/attempt2). Each contains per-selector logs, all 40 digest manifests, three trace pairs, full-suite log and Q04/D08/D17 diagnostic exports with compact `mechanism-evidence.json`. These were local scenarios, not distribution measurements. The copied test runner records every child failure even though the orchestration process itself completes successfully.

The [restoration record](../plan015/review-c5/floor-restoration.json) identifies the four copies and hashes. `python3 tools/source_id.py` prints `4786fc9830d0c1c0`. Measurement uses the preserved, version-checked `4786fc9830d0c1c0-linux` CLI. The floor source already passed all 31 selectors, the full Linux suite, 40 authored digests and three trace pairs in C2; those are inherited same-source evidence. Attempt-specific checks above were rerun after each attempt and do not certify that its failing selectors passed.

## Measurement contract and guards

The [contract](../plan015/review-c5/measurement-contract.md) was fixed before dispatch. Both authored maps are remeasured, not filled with prior results. A single zero-shot battle or fewer than three firing squads on either side stops immediately. Each side’s soldier orders/minute and authored recorded duration use paired 95% percentile intervals against matched legacy, 2000 fixed-RNG resamples; positive deltas are worse. Under-2 m share uses equal-run means with its paired interval disclosed. Works retains the mean guard. Trenches passes spacing if its interval is not wholly above zero; any remaining miss is an open item under C4/C5. Its mean per-run nearest-mate median has a 3 m target, not a stop. Stronger remaining strength is information. Duration is censored at 360 s, not proof of an earlier tactical decision.

F1 uses gen1–30 crossed with battle107–109, the strict first-zero engagement guard, and paired spacing/churn against legacy. The three-of-four squad participation threshold retains its authored scope; F1 troop counts differ. Win share compares to the exact preserved `a0364bff5cea6ab9` executable, paired on generated map and battle seed, with bootstrap clusters by generated map. A wholly negative candidate-minus-reference win interval fails. Missing draws do not count as a pass.

## Authored scoreboard

| Map | Criterion | Paired mean delta / target value | 95% interval | Status |
|---|---|---:|---|---|
| works | time_to_decision | 0 | [0.0, 0.0] | pass |
| works | orders_azure_per_minute | -59.516666666666666 | [-75.05083333333334, -43.02458333333338] | pass |
| works | orders_ember_per_minute | -64.48333333333333 | [-76.03333333333332, -53.648750000000014] | pass |
| works | under_2m | -0.09656766555794682 | [-0.11808550707929161, -0.07906533713688359] | pass |
| works | stronger_remaining_at_limit | 0.1375 | [0.084375, 0.18132812499999956] | information |
| trenches | time_to_decision | 0 | [0.0, 0.0] | pass |
| trenches | orders_azure_per_minute | -81.06666666666666 | [-111.06916666666666, -55.14458333333335] | pass |
| trenches | orders_ember_per_minute | -49.383333333333326 | [-84.44999999999999, -18.76583333333333] | pass |
| trenches | under_2m | 0.02277833309059286 | [-0.003087583215914979, 0.04707872684161197] | pass |
| trenches | stronger_remaining_at_limit | 0.15625 | [0.028125, 0.2875] | information |
| trenches | trench_nearest_m | 2.99534686710188 | target / no eligible pairs | information |

## Works — per-run results

| Seed | Seconds | Shots drills / cognition / legacy | Casualties A/E | Firing squads A/E | Stronger remaining | AAR |
|---:|---:|---|---|---|---:|---|
| 100 | 360.0 | 2000/839/2583 | 0.469/0.625 | 4/4 | 0.531 | [AAR](../plan015/review-c5/measurement/after-action/works/100.md) |
| 101 | 360.0 | 2157/1038/2012 | 0.344/0.562 | 4/4 | 0.656 | [AAR](../plan015/review-c5/measurement/after-action/works/101.md) |
| 102 | 360.0 | 2344/965/2270 | 0.531/0.406 | 4/4 | 0.594 | [AAR](../plan015/review-c5/measurement/after-action/works/102.md) |
| 103 | 360.0 | 2372/1272/2347 | 0.375/0.688 | 4/4 | 0.625 | [AAR](../plan015/review-c5/measurement/after-action/works/103.md) |
| 104 | 360.0 | 2257/1067/2086 | 0.438/0.656 | 4/4 | 0.562 | [AAR](../plan015/review-c5/measurement/after-action/works/104.md) |
| 105 | 360.0 | 2501/1003/2318 | 0.406/0.438 | 4/4 | 0.594 | [AAR](../plan015/review-c5/measurement/after-action/works/105.md) |
| 106 | 360.0 | 1592/973/2803 | 0.406/0.281 | 4/4 | 0.719 | [AAR](../plan015/review-c5/measurement/after-action/works/106.md) |
| 107 | 360.0 | 1985/1197/1878 | 0.469/0.375 | 4/4 | 0.625 | [AAR](../plan015/review-c5/measurement/after-action/works/107.md) |
| 108 | 360.0 | 2664/841/1962 | 0.562/0.375 | 4/4 | 0.625 | [AAR](../plan015/review-c5/measurement/after-action/works/108.md) |
| 109 | 360.0 | 2372/689/2806 | 0.438/0.531 | 4/4 | 0.562 | [AAR](../plan015/review-c5/measurement/after-action/works/109.md) |

| Seed | NN median m drills / legacy | Under2m % drills / legacy | Orders/min A drills / legacy | Orders/min E drills / legacy | Adverse paired differences (not separate hard gates) |
|---:|---|---|---|---|---|
| 100 | 6.946221/7.271509 | 6.7592/16.2142 | 150.67/228.50 | 148.83/234.67 | none |
| 101 | 7.050641/5.036694 | 6.5327/23.5211 | 147.50/228.50 | 158.67/246.17 | none |
| 102 | 6.033319/5.982057 | 6.0052/16.5057 | 153.50/239.33 | 141.33/221.17 | none |
| 103 | 6.370934/5.510382 | 6.7563/19.1564 | 149.83/206.50 | 130.17/188.00 | none |
| 104 | 6.838585/7.556020 | 6.3504/14.2034 | 161.33/197.00 | 138.17/193.33 | none |
| 105 | 6.198075/6.795997 | 5.1524/13.3077 | 176.00/181.67 | 135.33/169.33 | none |
| 106 | 6.292532/6.876298 | 8.5599/16.5278 | 139.33/171.83 | 148.33/234.17 | none |
| 107 | 6.894711/7.560000 | 7.6489/12.5409 | 164.67/222.83 | 176.17/220.33 | none |
| 108 | 6.682558/6.284664 | 7.8795/17.3331 | 130.00/226.00 | 160.67/220.67 | none |
| 109 | 6.090492/6.513000 | 6.1840/15.0860 | 133.50/199.33 | 131.33/186.00 | none |

Mean shots 2224.40; mean per-run NN median 6.539807 m; mean under2m share 6.7829%. All 10 completed runs have AARs and raw trace exports.

## Trenches — per-run results

| Seed | Seconds | Shots drills / cognition / legacy | Casualties A/E | Firing squads A/E | Stronger remaining | AAR |
|---:|---:|---|---|---|---:|---|
| 100 | 360.0 | 788/598/2104 | 0.156/0.500 | 4/4 | 0.844 | [AAR](../plan015/review-c5/measurement/after-action/trenches/100.md) |
| 101 | 360.0 | 2135/1342/1569 | 0.281/0.469 | 4/4 | 0.719 | [AAR](../plan015/review-c5/measurement/after-action/trenches/101.md) |
| 102 | 360.0 | 1699/1179/1774 | 0.281/0.500 | 4/4 | 0.719 | [AAR](../plan015/review-c5/measurement/after-action/trenches/102.md) |
| 103 | 360.0 | 1087/511/1805 | 0.344/0.188 | 4/4 | 0.812 | [AAR](../plan015/review-c5/measurement/after-action/trenches/103.md) |
| 104 | 360.0 | 971/817/1377 | 0.406/0.375 | 4/4 | 0.625 | [AAR](../plan015/review-c5/measurement/after-action/trenches/104.md) |
| 105 | 360.0 | 1028/558/1948 | 0.344/0.250 | 4/4 | 0.750 | [AAR](../plan015/review-c5/measurement/after-action/trenches/105.md) |
| 106 | 360.0 | 825/552/2552 | 0.219/0.250 | 4/4 | 0.781 | [AAR](../plan015/review-c5/measurement/after-action/trenches/106.md) |
| 107 | 360.0 | 1141/655/2284 | 0.219/0.312 | 4/4 | 0.781 | [AAR](../plan015/review-c5/measurement/after-action/trenches/107.md) |
| 108 | 360.0 | 865/385/2262 | 0.094/0.281 | 4/4 | 0.906 | [AAR](../plan015/review-c5/measurement/after-action/trenches/108.md) |
| 109 | 360.0 | 1210/1392/2218 | 0.375/0.375 | 4/4 | 0.625 | [AAR](../plan015/review-c5/measurement/after-action/trenches/109.md) |

| Seed | NN median m drills / legacy | Under2m % drills / legacy | Orders/min A drills / legacy | Orders/min E drills / legacy | Adverse paired differences (not separate hard gates) |
|---:|---|---|---|---|---|
| 100 | 3.000000/4.167877 | 33.3709/28.4978 | 154.17/238.67 | 151.83/159.67 | under_2m |
| 101 | 3.000000/3.391581 | 31.2972/33.4321 | 176.33/212.00 | 154.33/324.33 | none |
| 102 | 2.806368/2.578786 | 36.8467/39.5140 | 201.33/277.33 | 136.33/145.00 | median below target |
| 103 | 3.175000/3.303918 | 32.5800/30.3854 | 177.00/297.83 | 191.17/204.00 | under_2m |
| 104 | 2.858546/2.688118 | 35.5515/40.2677 | 133.83/316.50 | 162.67/176.17 | median below target |
| 105 | 3.010146/5.766677 | 32.0061/27.7541 | 162.17/257.83 | 193.83/179.50 | under_2m, orders_ember_per_minute |
| 106 | 2.993722/4.405383 | 34.7841/26.9552 | 217.33/232.50 | 163.33/266.00 | under_2m, median below target |
| 107 | 2.982853/4.680092 | 32.4155/28.7813 | 203.00/255.33 | 137.50/219.67 | under_2m, median below target |
| 108 | 3.107059/4.142654 | 32.9718/30.5258 | 159.00/254.00 | 164.17/195.00 | under_2m |
| 109 | 3.019775/4.336877 | 33.7251/26.6572 | 159.00/211.83 | 183.83/263.50 | under_2m |

Mean shots 1174.90; mean per-run NN median 2.995347 m; mean under2m share 33.5549%. All 10 completed runs have AARs and raw trace exports.

## F1 results

Completed 90/90 draws. Engagement checkpoint: `{"enabled": true, "threshold": 1, "block_size": 10, "failed": false, "zero_shot_blocks": []}`.

| Guard | Paired result | Status |
|---|---|---|
| orders_azure_per_minute | `{"count": 90, "clusters": 30, "mean": -37.3345641146868, "median": -36.13339640491959, "ci95": [-49.0307923947361, -26.197524908139137]}` | pass |
| orders_ember_per_minute | `{"count": 90, "clusters": 30, "mean": -37.785063040783726, "median": -34.91666666666667, "ci95": [-45.01091058612284, -30.689346069798102]}` | pass |
| under_2m | `{"count": 90, "clusters": 30, "mean": -0.09149455859430884, "median": -0.08209029839844345, "ci95": [-0.10979267165362121, -0.07477906808122399]}` | pass |
| win_share_vs_a0364bff5cea6ab9 | `{"count": 90, "clusters": 30, "mean": -0.2, "median": 0.0, "ci95": [-0.3111111111111111, -0.08888888888888889]}` | FAIL |

| Controller | Attacker wins / draws / defender wins | Mean shots | Mean exchange |
|---|---|---:|---:|
| drills | 57/6/27 | 796.61 | 3.094 (n=89) |
| squad-only a0364bff5cea6ab9 | 75/5/10 | 462.73 | 1.989 (n=88) |
| legacy | 54/2/34 | 718.20 | 1.987 (n=90) |

[Complete four-controller scoreboard and paired intervals](../plan015/review-c5/measurement/family-scoreboard.md); [all matched raw cases, including the exact squad-only reference](../plan015/review-c5/measurement/f1-guards.json).

| Gen / seed | Outcome A/draw/E; exact reference | Shots | Casualties A/E | Exchange | NN median m | Under2m % | Orders/min A/E | Digest |
|---|---|---:|---|---:|---:|---:|---|---|
| 1/107 | 1/0/0; 1/0/0 | 1380 | 0.750/1.000 | 1.333 | 8.244 | 2.946 | 85.87/5.72 | 7012570963591353430 |
| 1/108 | 1/0/0; 1/0/0 | 1360 | 0.792/1.000 | 1.263 | 6.700 | 3.512 | 96.49/6.98 | 11593851258299931137 |
| 1/109 | 0/0/1; 1/0/0 | 907 | 0.833/0.333 | 0.400 | 7.932 | 3.550 | 69.50/4.33 | 162619700923276057 |
| 2/107 | 1/0/0; 1/0/0 | 330 | 0.083/1.000 | 12.000 | 6.109 | 2.546 | 152.02/4.19 | 9778440347137999907 |
| 2/108 | 1/0/0; 1/0/0 | 496 | 0.292/1.000 | 3.429 | 8.199 | 3.613 | 131.14/2.51 | 9665104940818209982 |
| 2/109 | 1/0/0; 1/0/0 | 702 | 0.083/1.000 | 12.000 | 5.557 | 4.988 | 133.40/1.40 | 4604065643043477101 |
| 3/107 | 1/0/0; 1/0/0 | 768 | 0.333/1.000 | 3.000 | 6.295 | 6.120 | 108.86/2.56 | 1387007281272649678 |
| 3/108 | 1/0/0; 1/0/0 | 592 | 0.292/1.000 | 3.429 | 5.014 | 6.904 | 148.37/4.50 | 9042258603464651801 |
| 3/109 | 1/0/0; 1/0/0 | 1124 | 0.417/1.000 | 2.400 | 7.303 | 6.463 | 105.52/2.31 | 1868945780424339428 |
| 4/107 | 1/0/0; 1/0/0 | 490 | 0.250/1.000 | 4.000 | 5.000 | 7.262 | 135.19/4.00 | 1808061090099122985 |
| 4/108 | 1/0/0; 1/0/0 | 458 | 0.125/1.000 | 8.000 | 5.000 | 8.591 | 179.47/4.62 | 1567925242939502318 |
| 4/109 | 1/0/0; 1/0/0 | 891 | 0.167/1.000 | 6.000 | 5.000 | 5.659 | 115.10/3.42 | 11116147522337639156 |
| 5/107 | 0/1/0; 1/0/0 | 1648 | 0.833/0.500 | 0.600 | 9.899 | 2.090 | 75.50/3.17 | 8744136266318490728 |
| 5/108 | 1/0/0; 1/0/0 | 1086 | 0.458/1.000 | 2.182 | 5.492 | 5.231 | 93.24/6.58 | 15619850763732442805 |
| 5/109 | 1/0/0; 1/0/0 | 1046 | 0.292/1.000 | 3.429 | 5.979 | 5.241 | 121.32/5.04 | 13254683130105793379 |
| 6/107 | 1/0/0; 1/0/0 | 509 | 0.292/1.000 | 3.429 | 4.518 | 9.636 | 172.02/7.87 | 13100515875812033632 |
| 6/108 | 1/0/0; 1/0/0 | 573 | 0.125/1.000 | 8.000 | 4.647 | 11.450 | 182.08/14.99 | 18442749326561390481 |
| 6/109 | 1/0/0; 1/0/0 | 497 | 0.458/1.000 | 2.182 | 4.454 | 12.028 | 142.33/9.34 | 6531021000155007986 |
| 7/107 | 1/0/0; 1/0/0 | 927 | 0.562/1.000 | 1.778 | 9.899 | 1.294 | 65.78/3.37 | 8312833959201665146 |
| 7/108 | 1/0/0; 1/0/0 | 840 | 0.438/1.000 | 2.286 | 9.899 | 1.531 | 58.82/3.52 | 9161160639968250060 |
| 7/109 | 0/1/0; 1/0/0 | 959 | 0.812/0.500 | 0.615 | 7.400 | 0.801 | 34.17/1.67 | 11867647073856768654 |
| 8/107 | 0/0/1; 1/0/0 | 657 | 0.812/0.200 | 0.246 | 6.000 | 2.161 | 40.33/4.33 | 4176118668054448651 |
| 8/108 | 0/0/1; 1/0/0 | 674 | 0.812/0.300 | 0.369 | 8.919 | 1.736 | 36.83/3.83 | 3532607617226493020 |
| 8/109 | 1/0/0; 1/0/0 | 767 | 0.500/1.000 | 2.000 | 6.461 | 9.612 | 77.69/9.14 | 9740079628922106655 |
| 9/107 | 1/0/0; 1/0/0 | 747 | 0.625/1.000 | 1.600 | 5.369 | 5.895 | 111.78/10.54 | 518526395673069095 |
| 9/108 | 1/0/0; 1/0/0 | 591 | 0.208/1.000 | 4.800 | 5.001 | 9.587 | 121.10/7.91 | 10018526570531937189 |
| 9/109 | 1/0/0; 1/0/0 | 409 | 0.167/1.000 | 6.000 | 5.001 | 6.386 | 159.56/13.61 | 9211886298569078595 |
| 10/107 | 0/0/1; 0/0/1 | 470 | 0.875/0.000 | 0.000 | 5.897 | 1.070 | 31.50/3.17 | 3991952967474680360 |
| 10/108 | 0/0/1; 1/0/0 | 359 | 0.750/0.100 | 0.133 | 5.000 | 1.484 | 26.50/4.00 | 18207604203092733709 |
| 10/109 | 0/0/1; 0/1/0 | 567 | 0.812/0.200 | 0.246 | 6.000 | 0.908 | 31.83/4.17 | 15203432530160057738 |
| 11/107 | 1/0/0; 1/0/0 | 1096 | 0.042/1.000 | 24.000 | 5.000 | 4.611 | 149.79/2.02 | 4400902124739086722 |
| 11/108 | 1/0/0; 1/0/0 | 733 | 0.250/1.000 | 4.000 | 5.607 | 8.344 | 137.41/2.62 | 6827428098689114013 |
| 11/109 | 1/0/0; 1/0/0 | 691 | 0.125/1.000 | 8.000 | 7.046 | 3.455 | 126.54/3.42 | 10724049214359188659 |
| 12/107 | 1/0/0; 1/0/0 | 463 | 0.125/1.000 | 8.000 | 6.000 | 3.626 | 96.98/3.22 | 5749305206931157916 |
| 12/108 | 1/0/0; 1/0/0 | 324 | 0.000/1.000 | unavailable (zero own loss) | 6.467 | 3.450 | 94.56/3.44 | 188344820883559614 |
| 12/109 | 1/0/0; 1/0/0 | 435 | 0.125/1.000 | 8.000 | 7.916 | 2.958 | 88.35/2.63 | 2010062917582862647 |
| 13/107 | 0/0/1; 1/0/0 | 850 | 0.875/0.167 | 0.190 | 6.000 | 1.402 | 41.50/5.00 | 16601958398488931387 |
| 13/108 | 0/0/1; 0/0/1 | 1267 | 0.875/0.250 | 0.286 | 8.427 | 1.738 | 36.50/5.50 | 15421154003764661866 |
| 13/109 | 0/0/1; 0/0/1 | 1242 | 0.750/0.333 | 0.444 | 5.918 | 1.557 | 36.67/4.67 | 15913258230990379175 |
| 14/107 | 1/0/0; 0/1/0 | 952 | 0.750/1.000 | 1.333 | 6.309 | 4.929 | 57.68/5.20 | 4760337631164669041 |
| 14/108 | 1/0/0; 1/0/0 | 961 | 0.625/1.000 | 1.600 | 5.186 | 2.088 | 63.72/5.92 | 4924374514369747081 |
| 14/109 | 0/1/0; 0/0/1 | 1177 | 0.875/0.750 | 0.857 | 5.339 | 3.491 | 47.50/4.83 | 11849066523453064510 |
| 15/107 | 0/0/1; 0/0/1 | 621 | 0.750/0.333 | 0.444 | 5.000 | 2.429 | 45.00/5.17 | 18179806774695168255 |
| 15/108 | 0/0/1; 0/0/1 | 657 | 0.938/0.083 | 0.089 | 5.000 | 4.144 | 36.67/4.67 | 14717696304446494285 |
| 15/109 | 0/0/1; 0/0/1 | 732 | 1.000/0.167 | 0.167 | 5.000 | 1.629 | 72.43/9.84 | 14109367585983970016 |
| 16/107 | 0/0/1; 1/0/0 | 470 | 0.750/0.250 | 0.333 | 4.958 | 3.322 | 42.33/2.17 | 14658706416916473031 |
| 16/108 | 0/1/0; 1/0/0 | 656 | 0.812/0.625 | 0.769 | 5.000 | 3.366 | 49.67/2.83 | 10882193813019686394 |
| 16/109 | 1/0/0; 1/0/0 | 487 | 0.375/1.000 | 2.667 | 4.528 | 7.503 | 112.90/5.75 | 13226638122224108343 |
| 17/107 | 0/0/1; 1/0/0 | 809 | 0.792/0.500 | 0.632 | 6.637 | 2.537 | 69.67/6.17 | 5607758525271739376 |
| 17/108 | 1/0/0; 1/0/0 | 1237 | 0.792/1.000 | 1.263 | 7.202 | 2.225 | 90.50/7.28 | 5224079482133990137 |
| 17/109 | 1/0/0; 1/0/0 | 816 | 0.458/1.000 | 2.182 | 6.000 | 4.253 | 125.73/10.22 | 7882074070720708880 |
| 18/107 | 0/0/1; 1/0/0 | 1300 | 0.833/0.417 | 0.500 | 5.943 | 1.644 | 53.33/5.50 | 13572346589429556225 |
| 18/108 | 0/0/1; 1/0/0 | 807 | 0.792/0.333 | 0.421 | 5.900 | 1.539 | 65.83/5.17 | 1112733405324952629 |
| 18/109 | 0/0/1; 1/0/0 | 1865 | 0.875/0.500 | 0.571 | 5.903 | 2.529 | 67.67/5.00 | 12474779110752661738 |
| 19/107 | 0/1/0; 1/0/0 | 912 | 0.833/0.667 | 0.800 | 5.121 | 4.739 | 73.00/8.50 | 16438710461453272570 |
| 19/108 | 0/1/0; 0/1/0 | 905 | 0.875/0.750 | 0.857 | 5.000 | 3.556 | 66.67/8.00 | 15183414335659145859 |
| 19/109 | 0/0/1; 1/0/0 | 756 | 0.917/0.167 | 0.182 | 5.000 | 3.119 | 73.00/7.50 | 11885908291830785332 |
| 20/107 | 0/0/1; 1/0/0 | 614 | 0.792/0.400 | 0.505 | 5.373 | 4.755 | 65.50/4.17 | 5911222705627494387 |
| 20/108 | 1/0/0; 1/0/0 | 1169 | 0.333/0.900 | 2.700 | 4.880 | 6.729 | 119.00/7.00 | 1294556520764634500 |
| 20/109 | 1/0/0; 1/0/0 | 1944 | 0.458/0.900 | 1.964 | 5.000 | 5.396 | 74.33/6.00 | 9195003892141832750 |
| 21/107 | 0/0/1; 0/0/1 | 401 | 0.750/0.083 | 0.111 | 5.000 | 1.987 | 37.17/5.00 | 8586368444627005131 |
| 21/108 | 0/0/1; 1/0/0 | 385 | 0.688/0.083 | 0.121 | 5.000 | 2.285 | 42.83/5.17 | 10521068727918820679 |
| 21/109 | 0/0/1; 0/1/0 | 595 | 0.625/0.167 | 0.267 | 5.000 | 1.561 | 43.83/6.33 | 10612441892671252091 |
| 22/107 | 0/0/1; 1/0/0 | 1500 | 0.833/0.100 | 0.120 | 5.704 | 2.658 | 60.67/4.00 | 15080749816615572494 |
| 22/108 | 0/0/1; 1/0/0 | 1152 | 0.792/0.200 | 0.253 | 6.000 | 1.788 | 62.83/4.00 | 14165473350729505993 |
| 22/109 | 1/0/0; 1/0/0 | 978 | 0.292/1.000 | 3.429 | 6.000 | 5.833 | 111.31/6.74 | 3557191393956861859 |
| 23/107 | 1/0/0; 1/0/0 | 707 | 0.250/1.000 | 4.000 | 5.789 | 3.139 | 97.46/2.27 | 12983995908230180801 |
| 23/108 | 1/0/0; 1/0/0 | 1126 | 0.208/1.000 | 4.800 | 6.037 | 3.445 | 82.76/2.52 | 6619415690014095262 |
| 23/109 | 1/0/0; 1/0/0 | 731 | 0.375/1.000 | 2.667 | 6.212 | 3.056 | 82.24/3.55 | 17133618527618368422 |
| 24/107 | 1/0/0; 1/0/0 | 730 | 0.750/1.000 | 1.333 | 5.872 | 1.952 | 65.14/8.11 | 7568415272289186381 |
| 24/108 | 0/0/1; 0/0/1 | 650 | 0.938/0.500 | 0.533 | 5.846 | 4.368 | 48.33/6.67 | 16387834067353252434 |
| 24/109 | 0/0/1; 1/0/0 | 683 | 0.938/0.300 | 0.320 | 4.733 | 1.618 | 43.50/4.67 | 17227149192706184688 |
| 25/107 | 1/0/0; 1/0/0 | 450 | 0.062/1.000 | 16.000 | 5.659 | 4.912 | 109.01/2.66 | 885011593682036730 |
| 25/108 | 1/0/0; 1/0/0 | 279 | 0.062/1.000 | 16.000 | 5.271 | 4.861 | 103.04/3.70 | 2090260868742166627 |
| 25/109 | 1/0/0; 1/0/0 | 339 | 0.125/1.000 | 8.000 | 5.092 | 3.940 | 99.20/4.05 | 11366145313358332403 |
| 26/107 | 1/0/0; 1/0/0 | 791 | 0.250/1.000 | 4.000 | 5.208 | 15.895 | 81.54/5.66 | 5284436965241123763 |
| 26/108 | 1/0/0; 1/0/0 | 1141 | 0.458/1.000 | 2.182 | 4.940 | 6.165 | 79.56/5.72 | 10480750802343591556 |
| 26/109 | 1/0/0; 1/0/0 | 632 | 0.417/1.000 | 2.400 | 5.281 | 8.292 | 190.77/12.09 | 18219195299974913440 |
| 27/107 | 1/0/0; 1/0/0 | 431 | 0.167/1.000 | 6.000 | 4.496 | 6.971 | 168.92/9.35 | 16878380862668108079 |
| 27/108 | 1/0/0; 1/0/0 | 823 | 0.208/1.000 | 4.800 | 4.993 | 4.125 | 166.08/2.52 | 12870918386416447830 |
| 27/109 | 1/0/0; 1/0/0 | 562 | 0.208/1.000 | 4.800 | 5.857 | 5.778 | 145.39/5.27 | 10312323547867694532 |
| 28/107 | 1/0/0; 1/0/0 | 577 | 0.333/1.000 | 3.000 | 5.000 | 10.495 | 150.70/7.93 | 12222986306904283407 |
| 28/108 | 1/0/0; 1/0/0 | 644 | 0.542/1.000 | 1.846 | 5.854 | 8.822 | 126.79/7.10 | 4687501767699076108 |
| 28/109 | 1/0/0; 1/0/0 | 1058 | 0.125/1.000 | 8.000 | 4.853 | 12.196 | 129.30/5.48 | 6571923976328957811 |
| 29/107 | 1/0/0; 1/0/0 | 737 | 0.292/1.000 | 3.429 | 5.926 | 4.203 | 126.36/6.05 | 15429921222959467723 |
| 29/108 | 1/0/0; 1/0/0 | 877 | 0.458/1.000 | 2.182 | 5.862 | 4.237 | 143.34/4.34 | 917678169733696952 |
| 29/109 | 1/0/0; 1/0/0 | 1168 | 0.833/0.750 | 0.900 | 5.001 | 2.827 | 51.67/2.33 | 2895634619977776662 |
| 30/107 | 1/0/0; 0/0/1 | 419 | 0.500/0.700 | 1.400 | 5.000 | 2.129 | 35.67/5.33 | 11304296657187681113 |
| 30/108 | 0/0/1; 0/1/0 | 666 | 0.750/0.500 | 0.667 | 5.726 | 3.363 | 52.00/4.67 | 17976842443864293218 |
| 30/109 | 1/0/0; 1/0/0 | 691 | 0.750/0.700 | 0.933 | 5.897 | 2.766 | 55.83/4.50 | 14503379140612963958 |

## Stop evidence and interpretation

**The F1 win-share guard fails; Steps E and D are not started.** Current drills finish 57/6/27 attacker wins/draws/losses (63.33% attacker wins), against the exact squad-only `a0364bff5cea6ab9` reference's 75/5/10 (83.33%). The paired win delta is **−20.00 percentage points, 95% CI [−31.11, −8.89]**. Twenty matched reference wins become sixteen losses and four draws; two reference non-wins become wins. All 90 draws complete with nonzero shots. Both per-side churn intervals and the F1 spacing mean pass against legacy. This is an outcome failure, not an engagement-guard stop.

These three cases are selected from the measured adverse pairs: the first reference-win/current-loss pair in draw order, the lowest-shot such loss, and the greatest attacker casualty fraction among such losses. They are post-stop analyses of existing records, **not new battles or tuning attempts**.

| Draw | Current / reference result | Current shots; casualty fraction A/E | Recorded current-controller sequence |
|---|---|---|---|
| F1 1/109 | loss / win | 907; .8333/.3333 | Squad 2 calls NeedSupport at 48.8 s (trace 16692); squads 1 and 0 accept help at 50.0/50.3 s (17685/21655). Squad 0 broadcasts Fixing at 62.55 s (27387). Multiple later help/support instances are accepted; squad 1 accepts received-sector SupportByFire again at 182.4, 188.8 and 194.6 s (63037/63307/63465), then Withdraw at 196.85 s (63789). Across the attacking side, 74 drill acceptances and 59 platoon-task transitions are recorded; no SquadAttack candidate is recorded. |
| F1 10/108 | loss / win | 359; .7500/.1000 | Squad 1 selects a covered flank and broadcasts Assaulting at 35.25 s (9984/10228), broadcasts NeedSupport at 44.55 s (14221), then accepts BreakContact at 45.55 s (14303), citing its believed ratio without superiority. Squad 0 cycles into received-sector support at 53.85, 65.65 and 72.25 s (16988/18399/18566). The platoon begins weak-ratio observation at 95.85 s (19677); squad 1 accepts Withdraw at 142.4 s (20797). |
| F1 24/109 | loss / win | 683; .9375/.3000 | Squad 1's initial no-route opportunity retains fire and movement at 22.5 s (7887), then a covered attack is selected at 29.3 s (11391/11698). Squad 0 selects its attack and broadcasts Assaulting and NeedSupport at 39.15 s (13805/13990/13991), then BreakContact at 59.1 s (16668). Later help is accepted at 188.6 s (31000), followed by Withdraw at 192.35 s (31976). |

Evidence: [1/109 AAR](../plan015/review-c5/measurement/stop-evidence/1-109.md), [10/108 AAR](../plan015/review-c5/measurement/stop-evidence/10-108.md), [24/109 AAR](../plan015/review-c5/measurement/stop-evidence/24-109.md), and the [transition register with exact raw-run paths and trace IDs](../plan015/review-c5/measurement/stop-evidence.json). All three reference battles used the same generated scenario digest and battle seed. The reference export is untraced, so this report does not invent a reference decision sequence.

The traces locate repeated help/support commitments and aborted assaults in these lost battles. Interference between help commitments and offensive continuation is a hypothesis for review; this evidence alone does not prove that the individual withdrawal decisions were wrong or isolate a single causal defect. No policy change follows the measurement. The outcome-first guard stands, and the Trenches-spacing exception does not waive it.

The final fingerprint remains **`4786fc9830d0c1c0`**, unchanged throughout all Step C battles. [Twenty fresh authored digests and full metric records](../plan015/review-c5/measurement/floor-reproduction.json) exactly reproduce the prior floor-source records. [Final integrity checks](../plan015/review-c5/final-integrity.json) confirm all four protected hashes. Both authored sets pass their current interval/mean guards; Trenches' **2.995347 m** mean per-run nearest-mate median still misses its 3 m target, and the floor allocation defect remains open for replay review.

## Commands, limitations and next steps

Attempt commands: `./scripts/test-sim.sh`, `./scripts/battle-lab.sh --version`, then `python3 .local/plan015/review-c5/check_attempt.py ATTEMPT_ROOT`. That script runs all 31 selectors, `.local/phase4/parity.py` for the 40 authored baseline digests, and `trace_checks.py` for Works107/Trenches107/F1gen1-107. The two `diagnose.py` scripts export unchanged Q04 (120s), D08 (240s) and D17 scarce/ample (40s). Python unittest: 74 tests pass (`python3 -m unittest discover -s tests -p "test_*.py"`).

Distribution commands: `python3 .local/plan015/review-c5/run_authored.py --terrain 0` and `--terrain 1`; exact per-battle and AAR argv are in `measurement/authored-results.json`. Completed F1 commands: `tools/run_family.py --controllers drills --gen-seeds 1-30 --seeds 107-109 --seconds 360 --jobs 2`, using the frozen floor CLI with `--trace --zero-shot-limit 1` and a separate output root for the exact squad-only reference. `analyze_family.py` adds physical per-side order metrics and matched guards. All diagnostics are offline observer analysis, never policy input.

The F1 win-share failure stops this run. No Step E or Step D implementation has begun. This includes no leader-dial implementation, paired leader battles, in-game AAR screen or leader controls; the spacing exemption does not waive F1 win share.

No disagreement with the C5 floor instruction. The projected-hold change restores D17, and the second support correction restores Q04, but the combined repaired controller has unresolved regressions. Both attempts are retained for review rather than promoted. The floor copy is explicitly authorised, not a git reset. Protected files, fixtures, frozen seed lists and evaluator are unchanged; no commit, stash, Fable launcher or native Windows/Unreal build was performed. User replay approval remains outstanding.


Exact F1 execution commands (both completed):

```sh
python3 tools/run_family.py --binary .local/plan015/review-c5/measurement/final/battle-lab --out .local/plan015/review-c5/measurement/f1-dev --family F1 --gen-seeds 1-30 --seeds 107-109 --controllers drills --seconds 360 --jobs 2 --trace --zero-shot-limit 1
python3 tools/run_family.py --binary .local/phase3h/final/battle-lab --out .local/plan015/review-c5/measurement/f1-squad-only --family F1 --gen-seeds 1-30 --seeds 107-109 --controllers drills --seconds 360 --jobs 2
python3 .local/plan015/review-c5/analyze_family.py
python3 .local/plan015/review-c5/family_scoreboard.py
python3 .local/plan015/review-c5/diagnose_f1_stop.py
```

`analyze_family.py` exits 2 for the failed win-share guard; the other listed
processes complete successfully. The reference uses the historical default
three-zero engagement threshold; it has no zero-shot runs. Current drills use
the strict first-zero threshold. The scoreboard wrapper calls
`tools/report_family.py` on separately labelled matched controller records.
The incremental `enrich_family.py` reads completed exports only and proves
order-event/trace count equality on all 90 F1 runs. Including authored runs,
all 110 current-controller records have that equality. Final report audit
verifies all 20 authored AAR/JSON pairs and every linked local evidence path.
