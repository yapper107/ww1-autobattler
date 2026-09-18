# Plan 014 — Phase 3d slice report

**FAIL / not promoted.** D09 now passes unchanged, including its continuous-support control, and the new sprint contract pin passes. F1 records 75 wins, 5 draws and 10 losses, matching Phase3c. D08 still fails consolidation/reorganisation because the final rush cannot allocate a safe endpoint. D07 regresses after that blocked attack returns to supported closure and original-area fire resumes. No assertion or fixture was relaxed. One frozen build was measured; no tactical edit or second measured build followed. Legacy remains the playable default.

Entry fingerprint: `7596d85ca9eb5318`. Frozen/final fingerprint: `f134afb1b5e7a25f`. Entry snapshots, final source/tests/binaries and simulation patch are in `.local/phase3d/entry/`, `final/` and `simulation.patch`. All 110 measured manifests identify the frozen fingerprint.

## Mechanism pairs and pins

| Selector | Result | Evidence |
|---|---|---|
| D01 | PASS | D01 moving=1611 spacing_share=0.934823 arrived=8 corridor_inside=1 |
| D02 | PASS | D02 report_only=1 30-50m=1 protected_trail=1 control_traveling=1 control_close=1 |
| D03 | PASS | D03 alternation=1 covered=1 maximum_bound=19.6994 far_early_bounds=0 |
| D04 | PASS | D04 first_receipt=2.2 return_shooters_4s=7 all_cover=1 spacing=1 path_bound=1 assessment=1 bare_rear=1 |
| D05 | PASS | D05 support=1 incorrectly_blocked=0 weak_report=1 latency=3.9 |
| D06 | PASS | D06 established=1 lost=1 evidence=1 protected=4 silent_released=0 |
| D07 | FAIL (assert abort) | D07 phase_receipt=120.15 lift_received=121.6 late_original_area_rounds=15 no_signal_lift=0 |
| D08 | FAIL (assert abort) | D08 observer screened candidate routes=2 best blocked fraction=1; D08 accepted route observer blocked fraction=1; D08 covered_attack=1 moved=1 physical_angle=1 longest_rush=4.7 consolidate=0 reorganise=0 bare_attack=0 bare_report=1 |
| D09 | PASS | D09 pause=1 resume_same=1 protected=1 continuous_pause=0 |
| D10 | PASS | D10 committed=1/1 alternatives=1/0 resolved=1 |
| D11 | PASS | D11 committed=1 frozen=1 continued=1 weak_failed=1 reformed=1 |
| D16 | PASS | D16 retreat=1 alternate=1 rear_distance=39.6056 complete=1 equal_break=0 |
| D17 | PASS | D17 independently allocatable protected slots=8; D17 scarce_occupied=5 ample_occupied=8 spacing=1 |
| lifecycle | PASS | Lifecycle continue samples=778 retained overwatch samples=784 latched receipt samples=1051; Progress clock paused=113 running=187 |
| plumbing | PASS | all assertions passed |
| positions | PASS | Position service: authored layouts 0/5/6/7, reservations, area rejection and four templates PASS |
| projection | PASS | Projected rush: screened open ground succeeds without catalogue cover; short path budget rejects |
| sector | PASS | Sector position query: lane rejects; lane union objective disc accepts reachable covered flank |
| sprint | PASS | Sprint contracts: standing movement=335 crouched arrivals=1296 maximum route=10.4937 |
| D12 | Deferred by instruction | No gun pickup |

All 13 listed pairs ran: D01–D11, D16 and D17. Eleven pass; D07 and D08 fail. All six additional selectors (sprint, projection, sector, positions, plumbing, lifecycle) pass. Existing pair and lifecycle bodies remain byte-identical to the entry snapshot.

## Outcome-first scoreboard

F1 records 75 wins, 5 draws and 10 losses, compared with candidate90 at 65/7/18 and legacy at 54/2/34. Win-rate delta against legacy is +0.233 [0.089,0.356]; normalized exchange delta against candidate90 is +1.253 [0.514,2.163]. Win rate against candidate90 and normalized exchange against legacy are inconclusive. Forty-two of 90 F1 runs fire fewer shots than their paired candidate90 run; no battle has zero shots. Authored metrics show no significant regression against Phase3c.

Targeted F1 win/exchange improvements against candidate90 and legacy: **False**. Authored no-significant-regression against Phase3c: **True**. Spacing interval reading: **False**; literal per-run spacing: **False**. Literal F1 per-run shots guard: **False**. Combined statistical exit: **False**. Required mechanisms fail independently of these flags.

| F1 controller | Wins/draws/losses | Win rate | Attacker/defender casualties (sum) | Mean normalized exchange | Aggregate raw exchange (disclosure) | Shots/battle | NN median m (mean of runs) | Under2 m % | Hits/soldier-min |
|---|---|---:|---|---:|---:|---:|---:|---:|---:|
| candidate90 | 65/7/18 | 0.722 | 951/218 | 0.801 | 0.229 | 450.544 | 3.109 | 38.359 | 0.452 |
| drills-phase3c | 75/5/10 | 0.833 | 683/283 | 1.853 | 0.414 | 459.400 | 6.509 | 3.354 | 0.441 |
| drills-phase3d | 75/5/10 | 0.833 | 690/288 | 1.989 | 0.417 | 462.733 | 6.463 | 3.408 | 0.450 |
| legacy | 54/2/34 | 0.600 | 1048/371 | 1.987 | 0.354 | 718.200 | 5.102 | 13.627 | 0.496 |

Historical review totals were independently reproduced from archived F1 runs (`historical-outcome-audit.json`): Phase3c 75/5/10, candidate90 65/7/18, legacy 54/2/34, Phase2d 49/3/38. Recorded time-limit wins use surviving headcount; they are not an objective-seizure metric. The primary casualty-exchange criterion retains the companion’s per-run fraction normalization, with undefined zero-attacker-loss ratios disclosed by paired counts. Aggregate raw-loss exchange includes those zero-loss runs and is supplementary.

| Authored map | Controller | Shots | Win/draw/loss | A/E casualty totals | NN m | Under2 % | Closure120/240 m | Azure orders/min | Hits/soldier-min |
|---|---|---:|---|---|---:|---:|---|---:|---:|
| Trenches | candidate90 | 798.900 | 5/0/5 | 87/79 | 1.454 | 66.474 | 39.698/35.936 | 611.033 | 0.176 |
| Trenches | drills-phase3c | 790.100 | 4/0/6 | 74/45 | 2.866 | 36.609 | 24.217/28.267 | 100.917 | 0.141 |
| Trenches | drills-phase3d | 800.900 | 4/0/6 | 64/52 | 2.781 | 36.185 | 24.230/28.114 | 98.600 | 0.138 |
| Trenches | legacy | 1989.300 | 6/1/3 | 152/177 | 3.946 | 31.277 | 35.672/37.111 | 255.383 | 0.410 |
| Works | candidate90 | 988.400 | 3/1/6 | 220/168 | 0.976 | 79.733 | 108.806/109.355 | 64.333 | 0.502 |
| Works | drills-phase3c | 1001.400 | 5/3/2 | 38/58 | 7.317 | 5.697 | 78.728/61.300 | 86.617 | 0.119 |
| Works | drills-phase3d | 1001.400 | 5/3/2 | 38/58 | 7.317 | 5.697 | 78.728/61.300 | 86.617 | 0.119 |
| Works | legacy | 2306.500 | 2/3/5 | 198/182 | 6.539 | 16.440 | 94.741/91.292 | 210.150 | 0.468 |

### Paired confidence intervals

Differences are candidate minus reference. 95% paired percentile intervals use 2000 cluster resamples. Crossing zero is inconclusive, not equivalence. Primary exchange is the existing per-run ratio of defender/attacker casualty fractions; zero-attacker-loss ratios are unavailable and paired counts disclose omissions. Aggregate raw-loss ratios are supplementary.

| Set | Reference | Criterion | Paired n | Delta | CI95 | Finding |
|---|---|---|---:|---:|---|---|
| F1 | candidate90 | win_azure | 90 | 0.1111 | -0.0222 / 0.2444 | inconclusive |
| F1 | candidate90 | casualty_exchange | 88 | 1.2531 | 0.5141 / 2.1634 | improved |
| F1 | candidate90 | shots | 90 | 12.1889 | -60.7858 / 78.5503 | inconclusive |
| F1 | legacy | win_azure | 90 | 0.2333 | 0.0889 / 0.3556 | improved |
| F1 | legacy | casualty_exchange | 88 | -0.0434 | -0.8928 / 1.0022 | inconclusive |
| F1 | legacy | shots | 90 | -255.4667 | -354.6006 / -154.1281 | regression |
| F1 | drills-phase3c | win_azure | 90 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| F1 | drills-phase3c | casualty_exchange | 88 | 0.1357 | -0.1202 / 0.5651 | inconclusive |
| F1 | drills-phase3c | shots | 90 | 3.3333 | -6.8894 / 15.4125 | inconclusive |
| F1 | legacy | under_2m | 90 | -0.1022 | -0.1193 / -0.0863 | improved |
| F1 | 3 m floor | nearest_m | 90 | 3.4625 | 3.0059 / 3.9497 | improved |
| Works | legacy | under_2m | 10 | -0.1074 | -0.1319 / -0.0832 | improved |
| Works | 3 m floor | nearest_m | 10 | 4.3165 | 3.8633 / 4.7013 | improved |
| Works | drills-phase3c | shots | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Works | drills-phase3c | casualties_total | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Works | drills-phase3c | nearest_m | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Works | drills-phase3c | under_2m | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Works | drills-phase3c | closure_120s_m | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Works | drills-phase3c | closure_240s_m | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Works | drills-phase3c | orders_azure_per_minute | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Works | candidate90 | shots | 10 | 13.0000 | -163.4050 / 193.1225 | inconclusive |
| Works | candidate90 | casualties_total | 10 | -29.2000 | -32.6000 / -25.4000 | regression |
| Works | candidate90 | nearest_m | 10 | 6.3402 | 5.9135 / 6.7075 | improved |
| Works | candidate90 | under_2m | 10 | -0.7404 | -0.7607 / -0.7195 | improved |
| Works | candidate90 | closure_120s_m | 10 | -30.0780 | -32.0755 / -28.0817 | regression |
| Works | candidate90 | closure_240s_m | 10 | -48.0554 | -54.6873 / -40.6743 | regression |
| Works | candidate90 | orders_azure_per_minute | 10 | 22.2833 | 13.2158 / 33.3354 | regression |
| Works | legacy | shots | 10 | -1305.1000 | -1622.7375 / -963.8875 | regression |
| Works | legacy | casualties_total | 10 | -28.4000 | -31.2000 / -25.4975 | regression |
| Works | legacy | nearest_m | 10 | 0.7779 | 0.0239 / 1.4334 | improved |
| Works | legacy | closure_120s_m | 10 | -16.0134 | -19.1178 / -13.2658 | regression |
| Works | legacy | closure_240s_m | 10 | -29.9921 | -36.2420 / -23.4350 | regression |
| Works | legacy | orders_azure_per_minute | 10 | -123.5333 | -139.2342 / -107.3279 | improved |
| Trenches | legacy | under_2m | 10 | 0.0491 | -0.0150 / 0.1086 | inconclusive |
| Trenches | 3 m floor | nearest_m | 10 | -0.2188 | -0.4163 / -0.0429 | regression |
| Trenches | drills-phase3c | shots | 10 | 10.8000 | -87.6125 / 104.3200 | inconclusive |
| Trenches | drills-phase3c | casualties_total | 10 | -0.3000 | -1.7000 / 1.1000 | inconclusive |
| Trenches | drills-phase3c | nearest_m | 10 | -0.0850 | -0.2107 / 0.0139 | inconclusive |
| Trenches | drills-phase3c | under_2m | 10 | -0.0042 | -0.0253 / 0.0160 | inconclusive |
| Trenches | drills-phase3c | closure_120s_m | 10 | 0.0122 | 0.0000 / 0.0275 | inconclusive |
| Trenches | drills-phase3c | closure_240s_m | 10 | -0.1530 | -2.0749 / 2.3643 | inconclusive |
| Trenches | drills-phase3c | orders_azure_per_minute | 10 | -2.3167 | -5.3671 / 0.9175 | inconclusive |
| Trenches | candidate90 | shots | 10 | 2.0000 | -247.2025 / 258.8125 | inconclusive |
| Trenches | candidate90 | casualties_total | 10 | -5.0000 | -9.3000 / -1.1000 | regression |
| Trenches | candidate90 | nearest_m | 10 | 1.3275 | 1.1526 / 1.4807 | improved |
| Trenches | candidate90 | under_2m | 10 | -0.3029 | -0.3442 / -0.2646 | improved |
| Trenches | candidate90 | closure_120s_m | 10 | -15.4680 | -17.1404 / -13.3605 | regression |
| Trenches | candidate90 | closure_240s_m | 10 | -7.8211 | -12.7626 / -1.6625 | regression |
| Trenches | candidate90 | orders_azure_per_minute | 10 | -512.4333 | -637.9454 / -392.0579 | improved |
| Trenches | legacy | shots | 10 | -1188.4000 | -1560.9075 / -831.5800 | regression |
| Trenches | legacy | casualties_total | 10 | -21.3000 | -27.3025 / -15.8000 | regression |
| Trenches | legacy | nearest_m | 10 | -1.1650 | -1.8171 / -0.5149 | regression |
| Trenches | legacy | closure_120s_m | 10 | -11.4429 | -13.2908 / -9.6155 | regression |
| Trenches | legacy | closure_240s_m | 10 | -8.9968 | -16.8924 / -1.3879 | regression |
| Trenches | legacy | orders_azure_per_minute | 10 | -156.7833 | -177.3671 / -137.7154 | improved |


Full supplementary aggregate exchange bootstrap availability and all criterion inputs are in `paired-criteria.json` and `paired-input.json`. Additional diagnostic and fraction-normalized exchange intervals are in `distributions.json` / `distributions.md`. Candidate90 and legacy authored deltas are disclosure; targeted authored gains are deferred to Phase4.

### Per-run guard disclosure

| Set | Runs | Shots below candidate90 | Zero-shot | NN below3 m/unavailable | Under2 share above legacy/unavailable |
|---|---:|---:|---:|---:|---:|
| F1 | 90 | 42 | 0 | 0 | 3 |
| Works | 10 | 4 | 0 | 0 | 0 |
| Trenches | 10 | 5 | 0 | 6 | 7 |

### Supplementary raw-loss exchange (not a gate)

| F1 reference | Aggregate ratio delta | CI95 | Valid bootstrap draws |
|---|---:|---|---:|
| candidate90 | 0.188 | 0.072 / 0.318 | 2000/2000 |
| legacy | 0.063 | -0.068 / 0.213 | 2000/2000 |
| drills-phase3c | 0.003 | -0.016 / 0.023 | 2000/2000 |

Authored shot shortfalls against candidate90 are disclosure only. The engagement abort threshold remains three zero-shot battles within a ten-run block; the stricter zero-shot exit is reported separately.

## Per-run tables (20 authored, 90 F1)

P3d=this build, P3c=the prior build, C=candidate90, L=legacy. W/D/L is the Azure result; A:E losses are raw casualties on the two sides. Draw/seed keys are paired exactly. NA denotes a missing recorded horizon, with pairwise counts disclosed above. JSON retains initial strengths, survivors and casualty fractions for every run.

| Set / draw / seed | Outcome P3d/P3c/C/L | A:E losses P3d/P3c/C/L | Shots P3d/P3c/C/L | NN m P3d/L | <2m % P3d/L | Closure120 P3d/P3c | Closure240 P3d/P3c | Azure orders/min P3d/P3c/C | Hits/soldier-min P3d/P3c | Per-run adverse guards |
|---|---|---|---:|---:|---:|---:|---:|---:|---:|---|
| works / 0 / 100 | W/W/L/D | 0:3/0:3/27:10/18:18 | 696.00/696.00/839.00/2583.00 | 7.61/7.27 | 9.07/16.21 | 80.80/80.80 | 79.03/79.03 | 108.67/108.67/68.33 | 0.07/0.07 | shots<C (disclosure) |
| works / 0 / 101 | L/L/L/L | 6:2/6:2/29:12/20:15 | 600.00/600.00/1038.00/2012.00 | 6.81/5.04 | 7.20/23.52 | 76.64/76.64 | 44.60/44.60 | 79.67/79.67/57.17 | 0.10/0.10 | shots<C (disclosure) |
| works / 0 / 102 | W/W/W/W | 0:8/0:8/22:23/12:23 | 861.00/861.00/965.00/2270.00 | 7.93/5.98 | 4.38/16.51 | 81.61/81.61 | 77.00/77.00 | 74.67/74.67/69.83 | 0.10/0.10 | shots<C (disclosure) |
| works / 0 / 103 | W/W/W/L | 3:10/3:10/18:24/22:18 | 1328.00/1328.00/1272.00/2347.00 | 7.79/5.51 | 3.53/19.16 | 76.29/76.29 | 41.99/41.99 | 82.50/82.50/69.50 | 0.15/0.15 | none |
| works / 0 / 104 | D/D/L/L | 3:3/3:3/25:16/24:16 | 1522.00/1522.00/1067.00/2086.00 | 5.75/7.56 | 9.63/14.20 | 82.15/82.15 | 59.13/59.13 | 70.00/70.00/64.17 | 0.09/0.09 | none |
| works / 0 / 105 | W/W/L/L | 1:4/1:4/21:13/22:19 | 567.00/567.00/1003.00/2318.00 | 7.17/6.80 | 7.72/13.31 | 78.07/78.07 | 62.97/62.97 | 88.17/88.17/69.50 | 0.08/0.08 | shots<C (disclosure) |
| works / 0 / 106 | D/D/D/L | 7:7/7:7/20:20/25:16 | 1107.00/1107.00/973.00/2803.00 | 7.28/6.88 | 3.21/16.53 | 77.84/77.84 | 54.26/54.26 | 76.00/76.00/66.17 | 0.16/0.16 | none |
| works / 0 / 107 | W/W/W/D | 4:10/4:10/17:24/19:19 | 1520.00/1520.00/1197.00/1878.00 | 8.07/7.56 | 3.96/12.54 | 75.84/75.84 | 56.79/56.79 | 74.17/74.17/57.33 | 0.15/0.15 | none |
| works / 0 / 108 | L/L/L/W | 8:5/8:5/23:16/15:17 | 1035.00/1035.00/841.00/1962.00 | 7.87/6.28 | 2.41/17.33 | 80.41/80.41 | 58.78/58.78 | 90.17/90.17/59.83 | 0.17/0.17 | none |
| works / 0 / 109 | D/D/L/D | 6:6/6:6/18:10/21:21 | 778.00/778.00/689.00/2806.00 | 6.90/6.51 | 5.87/15.09 | 77.64/77.64 | 78.47/78.47 | 122.17/122.17/61.50 | 0.12/0.12 | none |
| trenches / 0 / 100 | L/L/W/W | 6:3/6:3/2:9/19:21 | 656.00/656.00/598.00/2104.00 | 2.86/4.17 | 35.91/28.50 | 22.45/22.45 | 24.25/24.25 | 106.83/106.83/509.50 | 0.10/0.10 | NN<3, U2>L |
| trenches / 0 / 101 | W/W/L/L | 5:6/2:8/15:2/20:4 | 966.00/784.00/1342.00/1569.00 | 2.80/3.39 | 28.87/33.43 | 23.92/23.92 | 39.62/30.24 | 105.67/116.67/313.33 | 0.16/0.13 | shots<C (disclosure), NN<3 |
| trenches / 0 / 102 | W/W/L/W | 3:9/3:5/13:10/7:21 | 730.00/753.00/1179.00/1774.00 | 3.09/2.58 | 25.11/39.51 | 24.00/24.00 | 23.30/22.61 | 89.83/93.67/836.17 | 0.14/0.12 | shots<C (disclosure) |
| trenches / 0 / 103 | L/L/W/W | 10:7/14:7/5:9/5:24 | 1278.00/1075.00/511.00/1805.00 | 3.00/3.30 | 32.87/30.39 | 22.85/22.85 | 36.27/36.27 | 118.17/122.17/473.00 | 0.19/0.23 | U2>L |
| trenches / 0 / 104 | L/L/L/W | 12:5/16:4/10:8/12:14 | 1083.00/1331.00/817.00/1377.00 | 3.14/2.69 | 33.70/40.27 | 23.81/23.81 | 30.18/32.18 | 103.50/103.83/670.00 | 0.18/0.22 | none |
| trenches / 0 / 105 | L/L/L/W | 8:5/9:3/8:7/13:18 | 870.00/632.00/558.00/1948.00 | 3.08/5.77 | 34.06/27.75 | 24.54/24.54 | 26.92/28.98 | 133.67/125.50/428.33 | 0.16/0.12 | U2>L |
| trenches / 0 / 106 | L/L/W/L | 5:4/5:4/6:7/24:17 | 394.00/394.00/552.00/2552.00 | 2.66/4.41 | 40.90/26.96 | 25.50/25.50 | 26.13/26.13 | 72.50/72.50/983.00 | 0.10/0.10 | shots<C (disclosure), NN<3, U2>L |
| trenches / 0 / 107 | W/W/W/W | 0:1/0:1/5:10/16:23 | 225.00/225.00/655.00/2284.00 | 2.09/4.68 | 46.94/28.78 | 25.27/25.19 | 28.06/30.74 | 77.17/75.83/580.33 | 0.02/0.02 | shots<C (disclosure), NN<3, U2>L |
| trenches / 0 / 108 | L/L/W/L | 9:5/13:3/2:8/20:19 | 813.00/998.00/385.00/2262.00 | 2.45/4.14 | 41.60/30.53 | 26.67/26.62 | 21.81/26.80 | 90.00/95.00/703.17 | 0.16/0.19 | NN<3, U2>L |
| trenches / 0 / 109 | W/W/L/D | 6:7/6:7/21:9/16:16 | 994.00/1053.00/1392.00/2218.00 | 2.65/4.34 | 41.89/26.66 | 23.29/23.29 | 24.60/24.49 | 88.67/97.17/613.50 | 0.16/0.18 | shots<C (disclosure), NN<3, U2>L |
| F1 / 1 / 107 | W/W/D/W | 7:0/7:0/13:1/12:4 | 454.00/454.00/466.00/1038.00 | 5.92/7.69 | 0.28/11.07 | 49.52/49.52 | 49.42/49.42 | 39.33/39.33/64.00 | 0.13/0.13 | shots<C |
| F1 / 1 / 108 | W/W/D/W | 8:0/8:0/12:0/13:8 | 300.00/300.00/411.00/1027.00 | 5.84/6.14 | 0.35/13.19 | 55.58/55.58 | 55.58/55.58 | 37.83/37.83/70.50 | 0.12/0.12 | shots<C |
| F1 / 1 / 109 | W/W/W/W | 7:0/7:0/9:2/4:11 | 194.00/194.00/512.00/835.00 | 5.94/6.14 | 0.18/10.17 | 41.51/41.51 | 41.51/41.51 | 34.67/34.67/54.17 | 0.12/0.12 | shots<C |
| F1 / 2 / 107 | W/W/W/W | 3:4/3:4/10:4/6:4 | 231.00/231.00/205.00/486.00 | 8.01/4.34 | 11.41/26.00 | NA/NA | NA/NA | 86.43/86.43/98.55 | 0.56/0.56 | none |
| F1 / 2 / 108 | W/W/W/W | 4:4/4:4/12:4/1:4 | 302.00/285.00/247.00/215.00 | 9.90/4.26 | 6.11/26.76 | 31.14/30.30 | NA/NA | 87.47/72.22/105.22 | 0.48/0.37 | none |
| F1 / 2 / 109 | W/W/W/W | 2:4/2:4/4:4/4:4 | 418.00/418.00/132.00/314.00 | 9.90/4.34 | 2.50/26.05 | 36.14/36.14 | NA/NA | 64.67/64.67/117.46 | 0.26/0.26 | none |
| F1 / 3 / 107 | W/W/W/W | 6:6/5:6/11:0/16:6 | 355.00/446.00/421.00/719.00 | 4.91/4.32 | 7.75/17.89 | NA/36.23 | NA/NA | 167.11/121.73/17.50 | 1.06/0.65 | shots<C |
| F1 / 3 / 108 | W/W/W/W | 13:6/13:6/11:2/11:6 | 495.00/495.00/581.00/508.00 | 5.42/5.92 | 8.24/16.92 | NA/NA | NA/NA | 107.62/107.62/21.33 | 1.41/1.41 | shots<C |
| F1 / 3 / 109 | W/W/W/L | 11:6/11:6/11:2/23:1 | 575.00/575.00/552.00/1073.00 | 6.07/4.29 | 6.29/12.28 | 36.81/36.81 | NA/NA | 105.99/105.99/18.83 | 0.96/0.96 | none |
| F1 / 4 / 107 | W/W/W/W | 13:0/13:0/10:0/10:6 | 272.00/272.00/213.00/497.00 | 5.43/4.72 | 0.74/17.57 | 20.56/20.56 | 20.56/20.56 | 24.33/24.33/21.17 | 0.33/0.33 | none |
| F1 / 4 / 108 | W/W/W/W | 11:6/9:6/11:1/17:3 | 436.00/335.00/262.00/425.00 | 6.07/4.86 | 3.66/15.82 | 41.61/39.11 | NA/NA | 81.35/119.71/23.50 | 0.80/0.98 | none |
| F1 / 4 / 109 | W/W/W/W | 8:6/5:6/10:0/10:3 | 581.00/293.00/172.00/497.00 | 5.65/5.04 | 8.80/14.74 | 44.70/NA | 43.42/NA | 67.67/117.09/19.00 | 0.56/0.78 | none |
| F1 / 5 / 107 | W/W/W/W | 15:7/15:7/15:2/15:2 | 1187.00/1187.00/806.00/1459.00 | 7.39/5.07 | 1.76/11.89 | 66.81/66.81 | 67.36/67.36 | 49.00/49.00/41.17 | 0.66/0.66 | none |
| F1 / 5 / 108 | W/W/L/W | 15:8/18:4/17:0/12:8 | 807.00/858.00/564.00/1224.00 | 9.90/4.78 | 3.90/15.45 | 62.42/62.71 | 59.69/57.72 | 63.01/50.50/36.00 | 0.77/0.67 | none |
| F1 / 5 / 109 | W/W/W/W | 9:1/9:1/12:2/10:8 | 485.00/485.00/644.00/1149.00 | 5.99/5.08 | 1.64/12.80 | 60.19/60.19 | 59.69/59.69 | 37.00/37.00/42.00 | 0.23/0.23 | shots<C |
| F1 / 6 / 107 | W/W/W/W | 8:8/5:8/9:1/2:8 | 596.00/398.00/338.00/404.00 | 8.48/4.32 | 2.50/32.72 | 38.75/36.25 | NA/NA | 80.82/127.66/30.00 | 0.65/0.76 | none |
| F1 / 6 / 108 | W/W/W/W | 4:8/6:8/15:3/14:7 | 338.00/358.00/497.00/727.00 | 8.83/4.45 | 2.66/16.79 | 41.38/35.16 | NA/NA | 131.53/125.60/29.83 | 0.77/0.78 | shots<C |
| F1 / 6 / 109 | W/W/W/W | 7:0/7:0/13:1/14:6 | 158.00/158.00/427.00/638.00 | 9.53/5.74 | 0.43/10.79 | 21.74/21.74 | 21.74/21.74 | 25.83/25.83/31.00 | 0.16/0.16 | shots<C |
| F1 / 7 / 107 | W/W/W/W | 7:6/7:6/6:1/7:4 | 593.00/593.00/749.00/553.00 | 4.97/4.54 | 6.96/15.58 | 61.30/61.30 | NA/NA | 99.50/99.50/18.00 | 1.33/1.33 | shots<C |
| F1 / 7 / 108 | W/W/W/W | 10:6/10:6/7:1/3:6 | 920.00/920.00/513.00/999.00 | 6.00/6.15 | 4.56/11.54 | 64.75/64.75 | NA/NA | 64.39/64.39/17.00 | 1.11/1.11 | none |
| F1 / 7 / 109 | W/W/W/L | 3:6/3:6/9:1/12:1 | 592.00/592.00/754.00/1138.00 | 6.18/6.10 | 5.66/8.68 | 66.86/66.86 | NA/NA | 67.30/67.30/17.83 | 0.61/0.61 | shots<C |
| F1 / 8 / 107 | W/W/L/L | 3:1/3:1/10:1/11:3 | 279.00/279.00/435.00/384.00 | 5.00/5.00 | 1.24/13.31 | 32.53/32.53 | 32.53/32.53 | 18.17/18.17/27.50 | 0.11/0.11 | shots<C |
| F1 / 8 / 108 | W/W/L/L | 5:0/5:0/10:1/13:3 | 225.00/225.00/468.00/897.00 | 6.00/5.02 | 1.16/5.87 | 34.70/34.70 | 34.70/34.70 | 20.50/20.50/26.17 | 0.11/0.11 | shots<C |
| F1 / 8 / 109 | W/W/W/L | 3:0/3:0/6:3/11:1 | 120.00/120.00/381.00/461.00 | 5.56/5.02 | 8.50/9.26 | 24.30/24.30 | 24.30/24.30 | 18.17/18.17/27.83 | 0.07/0.07 | shots<C |
| F1 / 9 / 107 | W/W/W/W | 9:0/9:0/15:2/8:10 | 489.00/489.00/488.00/676.00 | 7.26/4.52 | 0.79/17.74 | 61.86/61.86 | 58.47/58.47 | 45.00/45.00/60.17 | 0.19/0.19 | none |
| F1 / 9 / 108 | W/W/W/W | 12:1/12:1/11:1/12:5 | 704.00/704.00/396.00/854.00 | 7.10/4.53 | 3.17/14.39 | 62.73/62.73 | 60.89/60.89 | 45.00/45.00/53.17 | 0.25/0.25 | none |
| F1 / 9 / 109 | W/W/W/W | 11:1/11:1/14:4/9:2 | 359.00/359.00/587.00/448.00 | 6.11/4.82 | 0.95/11.32 | 54.58/54.58 | 54.58/54.58 | 36.33/36.33/55.17 | 0.26/0.26 | shots<C |
| F1 / 10 / 107 | L/L/L/L | 8:1/8:1/11:3/11:4 | 299.00/299.00/443.00/513.00 | 5.53/5.59 | 1.18/9.30 | 31.61/31.61 | 35.48/35.48 | 29.17/29.17/29.83 | 0.24/0.24 | shots<C |
| F1 / 10 / 108 | W/W/L/L | 4:2/4:2/13:1/12:0 | 218.00/218.00/468.00/504.00 | 5.63/5.87 | 1.76/5.34 | 23.74/23.74 | 23.74/23.74 | 21.67/21.67/30.33 | 0.16/0.16 | shots<C |
| F1 / 10 / 109 | D/D/L/W | 6:0/6:0/10:1/7:3 | 310.00/310.00/237.00/349.00 | 6.00/4.51 | 0.36/15.15 | 16.42/16.42 | 14.81/14.81 | 25.33/25.33/35.50 | 0.13/0.13 | none |
| F1 / 11 / 107 | W/W/W/W | 5:6/5:6/11:6/1:6 | 569.00/569.00/1189.00/460.00 | 6.00/4.50 | 10.00/17.94 | 59.44/59.44 | NA/NA | 81.67/81.67/46.99 | 0.68/0.68 | shots<C |
| F1 / 11 / 108 | W/W/W/W | 7:6/7:6/8:6/16:4 | 375.00/375.00/1045.00/1559.00 | 5.50/5.22 | 6.56/17.11 | NA/NA | NA/NA | 128.12/128.12/47.56 | 1.23/1.23 | shots<C |
| F1 / 11 / 109 | W/W/W/W | 8:6/8:6/16:6/11:6 | 744.00/744.00/1216.00/1536.00 | 5.98/5.83 | 11.92/10.50 | 62.95/62.95 | NA/NA | 86.02/86.02/61.30 | 0.78/0.78 | shots<C, U2>L |
| F1 / 12 / 107 | W/W/W/W | 6:4/6:4/6:4/4:3 | 343.00/343.00/187.00/379.00 | 6.00/6.00 | 11.60/14.46 | 75.96/75.96 | NA/NA | 82.16/82.16/69.57 | 0.58/0.58 | none |
| F1 / 12 / 108 | W/W/W/W | 0:4/0:4/8:4/1:0 | 330.00/330.00/706.00/186.00 | 6.00/4.34 | 4.67/18.96 | NA/NA | NA/NA | 119.36/119.36/33.07 | 0.52/0.52 | shots<C |
| F1 / 12 / 109 | W/W/W/W | 0:4/0:4/3:4/6:0 | 367.00/367.00/573.00/425.00 | 5.61/4.40 | 4.48/16.99 | 90.06/90.06 | NA/NA | 108.18/108.18/37.99 | 0.53/0.53 | shots<C |
| F1 / 13 / 107 | W/W/L/L | 5:2/5:2/14:3/13:1 | 523.00/523.00/739.00/1204.00 | 6.00/5.00 | 0.17/9.25 | 47.58/47.58 | 47.58/47.58 | 23.67/23.67/37.50 | 0.15/0.15 | shots<C |
| F1 / 13 / 108 | L/L/L/L | 5:0/5:0/14:0/8:3 | 210.00/210.00/654.00/1434.00 | 6.00/5.71 | 0.13/3.67 | 47.80/47.80 | 47.80/47.80 | 22.33/22.33/39.50 | 0.11/0.11 | shots<C |
| F1 / 13 / 109 | L/L/L/L | 5:0/5:0/9:1/9:2 | 303.00/303.00/607.00/990.00 | 6.00/5.45 | 0.13/4.40 | 47.41/47.41 | 47.41/47.41 | 20.83/20.83/40.50 | 0.10/0.10 | shots<C |
| F1 / 14 / 107 | D/D/L/W | 11:3/11:3/12:3/7:4 | 906.00/906.00/592.00/634.00 | 5.06/4.40 | 2.43/20.89 | 62.58/62.58 | 63.36/63.36 | 26.00/26.00/31.67 | 0.58/0.58 | none |
| F1 / 14 / 108 | W/W/W/W | 9:3/9:3/8:2/7:5 | 708.00/708.00/411.00/488.00 | 4.40/4.40 | 2.72/25.73 | 63.70/63.70 | 63.70/63.70 | 26.67/26.67/30.67 | 0.43/0.43 | none |
| F1 / 14 / 109 | L/L/D/W | 10:1/10:1/10:2/5:5 | 838.00/838.00/658.00/539.00 | 4.46/4.40 | 2.02/18.04 | 64.06/64.06 | 64.89/64.89 | 25.17/25.17/26.17 | 0.42/0.42 | none |
| F1 / 15 / 107 | L/L/L/L | 10:1/10:1/12:0/10:2 | 448.00/448.00/360.00/528.00 | 5.51/6.00 | 1.23/8.53 | 53.91/53.91 | 53.85/53.85 | 20.17/20.17/24.67 | 0.31/0.31 | none |
| F1 / 15 / 108 | L/L/L/L | 8:0/8:0/12:2/11:1 | 433.00/433.00/495.00/621.00 | 4.96/5.00 | 13.24/10.51 | 54.67/54.67 | 54.67/54.67 | 22.33/22.33/28.50 | 0.21/0.21 | shots<C, U2>L |
| F1 / 15 / 109 | L/L/L/L | 9:2/9:2/13:0/8:1 | 470.00/470.00/537.00/524.00 | 5.54/6.00 | 0.69/8.10 | 53.79/53.79 | 53.25/53.25 | 19.50/19.50/30.50 | 0.28/0.28 | shots<C |
| F1 / 16 / 107 | W/W/W/L | 3:8/2:8/4:1/12:1 | 551.00/533.00/227.00/353.00 | 5.00/4.40 | 2.08/11.51 | 39.96/38.40 | NA/NA | 62.01/86.43/24.00 | 0.76/0.82 | none |
| F1 / 16 / 108 | W/W/W/L | 4:8/4:8/4:0/11:1 | 378.00/431.00/158.00/426.00 | 5.26/5.00 | 6.95/13.26 | NA/41.52 | NA/NA | 96.10/87.73/19.00 | 1.14/0.95 | none |
| F1 / 16 / 109 | W/W/W/W | 10:3/8:5/9:2/11:4 | 355.00/480.00/298.00/440.00 | 7.01/4.82 | 2.63/7.79 | 36.23/38.35 | 35.35/37.12 | 28.17/28.50/20.67 | 0.47/0.53 | none |
| F1 / 17 / 107 | W/W/D/W | 6:1/6:1/12:0/18:9 | 170.00/170.00/219.00/1148.00 | 6.41/6.00 | 0.24/9.41 | 18.46/18.46 | 18.46/18.46 | 27.17/27.17/43.33 | 0.11/0.11 | shots<C |
| F1 / 17 / 108 | W/W/W/W | 7:0/7:0/9:1/17:6 | 225.00/225.00/294.00/861.00 | 6.41/6.00 | 0.28/4.99 | 16.49/16.49 | 16.49/16.49 | 27.83/27.83/57.17 | 0.12/0.12 | shots<C |
| F1 / 17 / 109 | W/W/L/L | 6:1/6:1/21:1/20:6 | 273.00/273.00/356.00/1138.00 | 6.22/6.00 | 0.87/6.16 | 18.67/18.67 | 18.47/18.47 | 23.67/23.67/44.33 | 0.12/0.12 | shots<C |
| F1 / 18 / 107 | W/W/D/L | 7:3/7:3/13:1/20:3 | 503.00/503.00/286.00/1103.00 | 9.90/5.00 | 0.36/5.96 | 26.90/26.90 | 26.90/26.90 | 31.33/31.33/50.50 | 0.20/0.20 | none |
| F1 / 18 / 108 | W/W/L/L | 8:4/8:4/20:1/18:4 | 773.00/773.00/513.00/829.00 | 9.90/5.71 | 0.50/4.22 | 22.12/22.12 | 19.41/19.41 | 32.83/32.83/60.50 | 0.26/0.26 | none |
| F1 / 18 / 109 | W/W/L/L | 9:2/9:2/15:2/19:3 | 475.00/475.00/303.00/1062.00 | 9.90/5.48 | 0.58/5.85 | 19.43/19.43 | 19.43/19.43 | 33.33/33.33/40.67 | 0.22/0.22 | none |
| F1 / 19 / 107 | W/W/W/L | 10:2/10:2/11:5/24:2 | 715.00/715.00/447.00/827.00 | 5.10/5.04 | 1.12/11.10 | 35.93/35.93 | 34.60/34.60 | 48.17/48.17/28.00 | 0.28/0.28 | none |
| F1 / 19 / 108 | D/D/W/D | 13:1/13:1/7:9/18:6 | 433.00/433.00/526.00/598.00 | 5.37/6.00 | 6.28/10.35 | 26.91/26.91 | 26.91/26.91 | 46.83/46.83/35.50 | 0.28/0.28 | shots<C |
| F1 / 19 / 109 | W/W/W/L | 10:1/10:1/15:8/20:6 | 427.00/427.00/547.00/713.00 | 6.25/6.39 | 0.88/15.44 | 35.55/35.55 | 33.58/33.58 | 50.83/50.83/35.33 | 0.23/0.23 | shots<C |
| F1 / 20 / 107 | W/W/W/L | 14:4/14:4/14:6/22:3 | 542.00/542.00/383.00/723.00 | 9.90/4.95 | 6.21/11.77 | 30.92/30.92 | 27.45/27.45 | 43.33/43.33/36.33 | 0.43/0.43 | none |
| F1 / 20 / 108 | W/W/W/W | 12:5/11:2/16:6/17:6 | 433.00/361.00/484.00/922.00 | 8.43/4.53 | 1.28/16.83 | 28.31/28.66 | 21.44/21.54 | 45.50/40.83/39.50 | 0.39/0.33 | shots<C |
| F1 / 20 / 109 | W/W/W/W | 10:0/8:0/20:7/15:4 | 355.00/253.00/602.00/752.00 | 8.47/5.06 | 0.50/9.41 | 28.94/25.52 | 24.57/24.08 | 37.33/37.17/36.67 | 0.22/0.17 | shots<C |
| F1 / 21 / 107 | L/L/W/L | 5:0/5:0/2:0/11:3 | 172.00/172.00/54.00/434.00 | 5.55/5.02 | 0.38/3.41 | 25.38/25.38 | 25.38/25.38 | 22.50/22.50/8.50 | 0.09/0.09 | none |
| F1 / 21 / 108 | W/W/W/L | 4:1/4:1/2:1/8:1 | 322.00/322.00/33.00/347.00 | 6.06/5.00 | 0.48/3.50 | 32.91/32.91 | 28.56/28.56 | 21.00/21.00/7.67 | 0.15/0.15 | none |
| F1 / 21 / 109 | D/D/W/L | 4:0/4:0/2:0/16:3 | 322.00/322.00/65.00/538.00 | 6.18/5.00 | 0.56/7.68 | 26.39/26.39 | 26.39/26.39 | 20.83/20.83/7.33 | 0.09/0.09 | none |
| F1 / 22 / 107 | W/W/W/W | 10:0/10:0/6:1/12:3 | 473.00/473.00/401.00/988.00 | 8.02/5.10 | 0.31/11.16 | 53.02/53.02 | 53.02/53.02 | 35.67/35.67/49.00 | 0.19/0.19 | none |
| F1 / 22 / 108 | W/W/W/L | 11:1/11:1/6:0/20:3 | 899.00/899.00/554.00/1493.00 | 6.00/4.75 | 1.52/14.73 | 69.43/69.43 | 68.64/68.64 | 46.83/46.83/44.67 | 0.26/0.26 | none |
| F1 / 22 / 109 | W/W/W/W | 9:1/9:1/8:1/8:7 | 686.00/686.00/284.00/1498.00 | 9.58/5.61 | 0.64/16.99 | 56.45/56.45 | 55.99/55.99 | 43.17/43.17/54.17 | 0.22/0.22 | none |
| F1 / 23 / 107 | W/W/W/W | 8:6/8:6/20:5/7:6 | 521.00/521.00/727.00/394.00 | 7.00/4.26 | 4.91/23.36 | 54.64/54.64 | NA/NA | 122.41/122.41/22.50 | 0.95/0.95 | shots<C |
| F1 / 23 / 108 | W/W/W/W | 8:6/8:6/14:2/4:6 | 616.00/616.00/480.00/313.00 | 6.70/3.78 | 3.27/27.55 | 50.03/50.03 | NA/NA | 93.54/93.54/23.83 | 0.77/0.77 | none |
| F1 / 23 / 109 | W/W/W/W | 15:2/15:2/14:2/8:5 | 1020.00/1020.00/478.00/674.00 | 5.00/4.13 | 2.56/24.16 | 40.30/40.30 | 36.21/36.21 | 38.33/38.33/23.83 | 0.50/0.50 | none |
| F1 / 24 / 107 | W/W/L/L | 6:1/6:1/13:3/15:2 | 91.00/91.00/432.00/456.00 | 4.48/5.00 | 10.04/8.91 | 24.95/24.95 | 24.95/24.95 | 24.67/24.67/28.17 | 0.18/0.18 | shots<C, U2>L |
| F1 / 24 / 108 | L/L/L/L | 8:1/8:1/11:2/16:4 | 299.00/299.00/436.00/411.00 | 5.04/5.00 | 0.95/13.04 | 29.40/29.40 | 29.40/29.40 | 24.33/24.33/28.67 | 0.25/0.25 | shots<C |
| F1 / 24 / 109 | W/W/W/L | 6:3/6:3/8:3/14:3 | 390.00/390.00/260.00/395.00 | 4.57/5.00 | 9.84/15.58 | 33.35/33.35 | 34.33/34.33 | 38.00/38.00/28.33 | 0.32/0.32 | none |
| F1 / 25 / 107 | W/W/W/W | 4:4/4:4/10:3/5:4 | 358.00/358.00/355.00/282.00 | 6.00/5.24 | 5.32/15.73 | 72.87/72.87 | NA/NA | 104.09/104.09/41.00 | 0.71/0.71 | none |
| F1 / 25 / 108 | W/W/W/W | 2:4/2:4/10:4/1:2 | 323.00/323.00/715.00/225.00 | 6.00/6.00 | 11.12/19.51 | 69.27/69.27 | NA/NA | 82.38/82.38/36.45 | 0.61/0.61 | shots<C |
| F1 / 25 / 109 | W/W/W/W | 5:4/5:4/5:4/5:3 | 357.00/357.00/459.00/542.00 | 7.82/5.81 | 1.93/20.23 | 72.08/72.08 | NA/NA | 78.73/78.73/41.68 | 0.76/0.76 | shots<C |
| F1 / 26 / 107 | W/W/W/W | 5:10/5:10/10:10/11:2 | 598.00/498.00/515.00/545.00 | 6.00/5.00 | 0.89/11.83 | 40.82/40.19 | NA/NA | 120.81/148.92/78.28 | 0.66/0.70 | none |
| F1 / 26 / 108 | W/W/D/W | 6:10/5:10/17:3/15:7 | 482.00/480.00/540.00/648.00 | 8.58/5.00 | 4.15/13.97 | 36.42/37.10 | NA/NA | 153.56/128.97/34.00 | 0.76/0.63 | shots<C |
| F1 / 26 / 109 | W/W/D/L | 7:10/11:10/19:5/21:4 | 403.00/511.00/538.00/650.00 | 8.04/4.52 | 2.72/14.74 | 34.01/29.25 | NA/35.57 | 99.49/77.75/33.00 | 0.68/0.68 | shots<C |
| F1 / 27 / 107 | W/W/W/W | 1:6/4:6/8:6/11:6 | 419.00/552.00/216.00/402.00 | 5.45/4.59 | 5.49/11.58 | 41.61/41.32 | NA/NA | 153.78/121.36/134.86 | 0.61/0.50 | none |
| F1 / 27 / 108 | W/W/W/W | 8:6/5:6/7:6/9:6 | 323.00/340.00/227.00/463.00 | 6.10/4.26 | 1.99/21.81 | NA/40.95 | NA/NA | 175.00/144.65/132.83 | 0.94/0.59 | none |
| F1 / 27 / 109 | W/W/W/W | 2:6/2:6/10:2/19:5 | 213.00/213.00/354.00/733.00 | 6.16/4.40 | 2.86/16.52 | NA/NA | NA/NA | 206.53/207.29/32.00 | 0.83/0.83 | shots<C |
| F1 / 28 / 107 | W/W/W/L | 11:2/11:2/8:1/21:2 | 266.00/266.00/142.00/517.00 | 6.02/6.00 | 0.73/7.58 | 33.47/33.47 | 33.43/33.43 | 33.83/33.83/11.50 | 0.29/0.29 | none |
| F1 / 28 / 108 | W/W/W/L | 14:2/14:2/5:2/23:4 | 471.00/471.00/154.00/957.00 | 5.96/4.92 | 0.91/17.47 | 32.09/32.09 | 32.09/32.09 | 36.00/36.00/9.83 | 0.40/0.40 | none |
| F1 / 28 / 109 | W/W/W/L | 10:1/10:1/7:0/22:6 | 219.00/219.00/124.00/801.00 | 4.81/5.00 | 8.26/12.90 | 35.21/35.21 | 35.21/35.21 | 42.83/42.83/11.17 | 0.27/0.27 | none |
| F1 / 29 / 107 | W/W/W/D | 9:8/9:8/17:3/18:2 | 635.00/635.00/924.00/1771.00 | 7.65/5.00 | 2.85/11.44 | 62.68/62.68 | NA/NA | 65.11/65.11/41.17 | 0.67/0.67 | shots<C |
| F1 / 29 / 108 | W/W/W/W | 12:2/12:2/11:1/6:8 | 980.00/980.00/641.00/663.00 | 5.20/5.55 | 8.49/14.32 | 56.69/56.69 | 56.59/56.59 | 37.83/37.83/41.67 | 0.33/0.33 | none |
| F1 / 29 / 109 | W/W/W/W | 17:2/17:2/11:1/17:5 | 1104.00/1104.00/547.00/1815.00 | 8.06/5.90 | 1.22/10.55 | 58.37/58.37 | 55.07/55.07 | 35.17/35.17/41.83 | 0.53/0.53 | none |
| F1 / 30 / 107 | L/L/W/W | 10:2/10:2/3:1/5:2 | 464.00/464.00/212.00/342.00 | 5.30/5.22 | 1.34/9.41 | 57.46/57.46 | 59.63/59.63 | 31.50/31.50/48.50 | 0.33/0.33 | none |
| F1 / 30 / 108 | D/D/W/W | 6:0/6:0/6:1/2:8 | 249.00/249.00/248.00/371.00 | 5.24/4.47 | 0.46/19.50 | 59.31/59.31 | 56.03/56.03 | 33.33/33.33/31.83 | 0.15/0.15 | none |
| F1 / 30 / 109 | W/W/W/L | 8:4/8:4/8:3/9:1 | 504.00/504.00/453.00/557.00 | 6.00/4.48 | 2.27/11.80 | 57.96/57.96 | 57.96/57.96 | 31.33/31.33/60.50 | 0.34/0.34 | none |


## Verification and commands

- Full `./scripts/test-sim.sh`: PASS (exit 0; 239.265 s). The optional D07/D08 failures above are separate and remain failures.
- Python: PASS (62 tests; 3.440 s). Five new outcome-metric tests cover zero-loss aggregation, paired cluster samples, duplicate identities, guard/criterion semantics and the companion’s initial-strength normalization.
- Historical authored parity: 40/40 exact matches against preserved legacy/candidate90 manifests, both maps seeds100–109 (`authored-parity/parity.json`).
- Drills trace parity: 3/3 exact matches (Works107, Trenches107, F1 draw1/107; `trace-parity.json`).
- All110 archived cognition trace references revalidated against their untraced baselines; order-rate comparisons retain the digest-equal references (`candidate-reference-revalidation.json`).
- Controller defaults/reruns: exit 0 (`defaults.log`). Legacy remains default.
- All20 authored and90 F1 runs complete; zero-shot count 0. Guards enabled and not aborted (`engagement-summary.json`).
- Protected hashes, unchanged existing pair/lifecycle bodies, frozen source/tests and110 manifest build IDs verified (`static-checks.json`, `measured-build-check.json`). `git diff --check` passes.
- Windows/Unreal stay with the architect; neither was invoked. No Fable launcher, commit, reset or stash. Existing dirty work was preserved.

Commands (runner JSON records exact expanded arguments and manifest paths):

```sh
python3 tools/source_id.py
./scripts/test-sim.sh --drills D08  # integration fixture; consolidation failure retained
.local/tests/sim_tests --drills D09
.local/tests/sim_tests --drills sprint
./scripts/battle-lab.sh --drills --encounter 60 --seconds 180 --evaluate --out .local/phase3d/preflight-fixture
./scripts/test-sim.sh
python3 -m unittest discover -s tests -p "test_*.py"
python3 .local/phase3d/run_mechanisms.py
python3 .local/phase3d/measure.py
# measure.py expands to:
python3 .local/phase3d/run_authored.py
python3 .local/phase3d/parity.py .local/phase3d/authored-parity .local/phase3d/final/battle-lab
python3 tools/run_family.py --binary .local/phase3d/final/battle-lab --out .local/phase3d/f1-dev --family F1 --gen-seeds 1-30 --seeds 107-109 --controllers drills --seconds 360 --jobs 2 --trace
python3 tests/check_controller_defaults.py --binary .local/phase3d/final/battle-lab --out .local/phase3d/defaults
python3 .local/phase3d/trace_checks.py
python3 .local/phase3d/diagnose.py
.local/phase3d/final/battle-lab --drills --encounter 58 --seconds 160 --evaluate --out .local/phase3d/fixture-diagnostics/58
python3 .local/phase3d/action_diagnostics.py
python3 .local/phase3d/analyze.py  # calls compare_drill_outcomes and report_family
python3 .local/phase3d/static_checks.py
git diff --check
```

Premeasurement fixture integration and the full distribution used the same source fingerprint; The offline adapter added missing archived winner fields, and the primary exchange definition was aligned with the companion; no measured simulation was rerun. No failed mechanism assertion was edited.

## Frozen-build mechanism diagnostics

- **D09:** imposed-gap case pauses, holds protected positions, and resumes the same instance/generation; the continuous control never pauses. Both halves pass unchanged. Entry evidence is in `entry-support-evidence.json`, and the frozen case 62/63 transitions are in `fixture-diagnostics/results.json`.
- **D08:** screen observer checks remain 1.0, the physical flank angle passes, and longest rush is 4.7 s. AssaultLine is reached at 114.9 s, the phase-line receipt at 120.15 s and the lift is received by 121.6 s. The other pair receives support contracts and initial assault bounds execute. At 138.55 s the final query rejects 93 candidates as unsafe from the known threat and five outside the anchor radius. It reports Blocked, reorganises at 139.55 s and resumes supported closure. No consolidation occurs. See `final-query-evidence.json` and encounter 60 trace; this remaining geometric constraint was not relaxed after the failure.
- **D07:** the lift transport itself remains timely (1.45 s). Its first late base-of-fire shot occurs at 140.6 s, after the 138.55 s failed attack and 139.55 s closure recovery; 15 such shots occur before 160 s. Thus the unchanged no-later-original-area-rounds assertion fails. `d07-evidence.json` contains all 15 rounds and the exact stage transitions, from frozen encounter 58.
- **Sprint pin:** 335 standing movement samples, 1296 crouched arrival samples, longest assigned path 10.4937 m in its 100 s production fixture; every observed path meets the 15 m cap. This proves posture and the bound, not a halving of the complete drill duration.


## Works attack progression (observer trace)

| Seed | Attack commitments | Phase-line receipts | Consolidations |
|---|---:|---:|---:|
| 100 | 1 | 0 | 0 |
| 101 | 1 | 0 | 0 |
| 102 | 0 | 0 | 0 |
| 103 | 1 | 0 | 0 |
| 104 | 0 | 0 | 0 |
| 105 | 0 | 0 | 0 |
| 106 | 1 | 0 | 0 |
| 107 | 0 | 0 | 0 |
| 108 | 0 | 0 | 0 |
| 109 | 2 | 0 | 0 |

Full reasons and trace paths are in `action-diagnostics.json`. No Works attack reaches a phase-line receipt in this sample. This is observer disclosure, not a policy input.


## Implemented corrections

Paths below use `Unreal/Source/ArmyPrototype/Sim/` unless otherwise stated.

- `SquadDrillSim.cpp:80`, Assign: replaces the 9.45 m crouched-speed planning budget with a maximum 15 m member path and projects at most 15 m along that path. The existing five-second execution limit, route/area filtering and known-threat endpoint safety remain. Each existing route waypoint still synchronises both buddy pairs; this change does not skip waypoints.
- `TaskSim.cpp:156`, ExecuteTask: states standing posture explicitly for travel, and rush orders crouch on arrival before any peek movement. The rush arrival branch also prevents the ordinary cover-memory shortcut from treating a position 1.5 m short of the endpoint as arrival. Existing shelter, reload and suppression safety retain precedence. The new production `sprint` pin observes standing travel, crouched arrivals and paths no longer than 15 m.
- `SquadDrillSim.cpp:174` and `:319`, CoverBuddy and Assault: on the lift and subsequent pair swaps, the other rifle pair keeps its accepted endpoints and receives a real Support contract on the objective. Inside 18 m, only that other pair's delivered rounds since the phase line qualify (two in six seconds). Lifted gun-group delivery cannot qualify. These orders traverse existing sensing, transport and receipt paths; no receipts are injected. Failed final allocation now calls the same Blocked → Reorganise → supported-closure recovery as approach failures instead of ignoring Assign's return value.
- `SquadDrillSim.cpp:122`, SupportEvidence: establishment/re-establishment still requires the existing useful volley; after establishment, each genuinely observed delivered round refreshes lastEvidence with its original observation time. Loss still occurs after eight seconds without delivery. AttackMove already keyed on the latched established flag and continues to do so. Relaying old reports does not renew their timestamps.
- `tools/compare_drill_outcomes.py` and `tests/test_drill_outcomes.py`: new offline outcome-first comparison, paired cluster bootstrap of aggregate casualty exchange, zero-loss handling, exact draw/seed pairing, duplicate-key rejection, literal per-run guards and historical authored comparisons. The old scoreboard remains available for previous reports. Five new Python tests pass.

Only two simulation files changed in this slice. Existing D01–D11, D16/D17 and lifecycle bodies are unchanged; a separate sprint pin and selector were appended. All fixture geometry and production fixture stimuli are unchanged. Actor policy uses only officer knowledge/reports/orders and permitted own-member fields plus geometry. Observer outcomes and bootstrap facts never enter policy.

## Metric definitions and interpretations

- F1 wins are the existing manifest's Azure result. At the time limit `BattleSim.cpp:633` awards victory to the side with more survivors, not an objective-occupation result. Generated force sizes vary and often favour the attacker initially. For example, Phase3c F1 draw 1 / seed 108 records an attacker win after eight attacker casualties and zero defender casualties. The win totals are valid recorded outcomes, but alone do not prove 75 positions were seized or that suppress-and-flank caused the result.
- Primary exchange retains the accepted companion definition (`plans/014-battle-drill-scenarios.md:88`) and existing `family_metrics.casualty_exchange`: each run's defender casualty fraction divided by attacker casualty fraction, unavailable when attacker losses are zero. Matched finite ratios are differenced and generated-map clusters resampled; paired counts explicitly disclose the omitted undefined ratios. Casualty fractions account for asymmetric armies.
- A secondary **ratio of aggregate raw casualty counts** includes zero-attacker-loss battles and is shown separately with paired bootstrap intervals. Each resample uses the same generated-map clusters on both controllers and recomputes their pooled ratios. Zero-denominator bootstrap samples are counted as unavailable. This is a sensitivity analysis, not a replacement criterion. The initial optional definition question was superseded by finding the companion's existing fraction-normalization instruction; no response was required to follow that instruction.
- Raw initial counts, survivors, each side's casualty fractions and raw losses remain in the machine-readable rows and per-run tables. The first analysis pass found missing winner fields in 40 old authored baseline records; those were populated from their archived manifests without rerunning or replacing any baseline.
- Targeted F1 improvements require positive paired 95% intervals for win rate and the existing normalized exchange against both candidate90 and legacy. Shots and casualties are not required to exceed Phase2d. The literal F1 passivity guard requires shots at least candidate90 on each draw/seed, and no zero-shot run. Mean shot intervals and the exact adverse cases are also shown, so a mean-level reading is visible.
- Spacing is disclosed both by intervals (under-2 m share against legacy; nearest-distance mean of per-run medians against 3 m) and by the literal per-run bounds. Authored no-regression uses the previous seven directional criteria against Phase3c: shots, total casualties, median spacing, under-2 m share, 120/240 s closure and Azure soldier orders/minute. Candidate90/legacy authored intervals are disclosure, not targeted gates in this slice. Missing horizons are omitted pairwise with counts shown, not imputed.
- All intervals use 2000 reproducible percentile cluster bootstraps (seed 1729); authored maps resample battle seeds. Crossing zero is inconclusive, not demonstrated equivalence. No multiple-comparison adjustment or non-inferiority margin is invented.

## Disagreements and remaining work

1. The entry executor's ordinary advance already used Order's default **Standing** posture (`BattleSim.h:552`, entry `TaskSim.cpp` advance return). The 9.45 m planner cap was wrong, but a global crouched executor was not present. Explicit rush posture/arrival behavior is now pinned. The expected halving of phase-line time was not achieved; retained waypoint/receipt synchronisation still dominates this fixture.
2. The entry late-Assault predicate was **not restricted to base-of-fire members**: it admitted any own-squad shooter with !movers and !liftOrders. Mover flags can remain latched after physical arrival; the old code also lacked explicit stationary-buddy Support orders. This slice selects the actual other rifle pair and issues that contract explicitly. The old broad predicate is not described as a base-only test.
3. D09's 2.35/0.7 s values in the prior report measured pause durations, not complete physical firing gaps. The actual premature-expiry bug is evidenced by a received self-delivery at 42.05 s before the 45.2 s loss transition; that isolated round failed the establishment threshold and did not refresh lastEvidence. The unchanged D09 control now passes, as does the positive gap/resume case.
4. D08 remains a failure at the final rush: its candidates cannot meet the retained Safe endpoint contract. The implementation did not silently relax protection just because the covering pair has delivered fire. Whether the final assault may end in exposed ground under buddy support needs an explicit doctrinal ruling; it was not tuned on the fixture.
5. D07 now fails its unchanged all-later-shots assertion after blocked-attack recovery resumes the closure default and removes the old drill's lift. This is disclosed as a regression, not accepted as a fixture exception. No assertion or fixture was changed to hide it.
6. The review's pair count is inconsistent with the selectors: D01–D11 plus D16 and D17 are **13** pairs, with D12 deferred. This report enumerates all 13 rather than repeating “eleven of twelve.” The final measured failures determine the count below.
7. The review’s claim that Phase3c already leads legacy on exchange depends on the definition: its mean normalized exchange is 1.853 versus legacy’s 1.987, while pooled raw-loss ratios are 0.414 versus 0.354. The report uses the companion’s accepted normalized metric as primary and discloses both. Summary means use all available values; paired intervals use only common finite pairs (88 for this build’s F1 exchange), so their delta need not equal the two full-sample means.
8. User wording about authored regression could be read as removing that requirement, while the review explicitly requires no regression against Phase3c. The report retains and exposes that requirement; the mechanism failures prevent acceptance either way. Native Windows/Unreal verification remains with the architect. No Phase4, F2/F3, gun pickup, commit, reset, stash or Fable launcher was performed.


Final source fingerprint rechecked: `f134afb1b5e7a25f`. Stopped after this report; no second measured build or Phase4 work.
