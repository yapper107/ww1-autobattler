# Plan 014 — Phase 3e slice report

**FAIL / not promoted; Phase4 not started.** The unchanged D07 pair now passes, including zero late rounds on the original fire area. D08 reaches the objective cover but fails the required consolidation/reorganisation assertion at 180 s. All other pairs and pins pass. No assertion or fixture was relaxed. One frozen simulation build was measured; no tactical edit or second measured build followed. Legacy remains the playable default.

Entry fingerprint: `f134afb1b5e7a25f`. Frozen/final fingerprint: `5d0923671a8c3c18`. Entry/final snapshots and binaries are under `.local/phase3e/entry/` and `final/`; `simulation.patch` records this slice. All 110 measured manifests identify the frozen fingerprint. Premeasurement fixture integration preceded the freeze; it is not represented as a second distribution build.

## Mechanism pairs and pins

| Selector | Result | Evidence |
|---|---|---|
| D01 | PASS | D01 moving=1611 spacing_share=0.934823 arrived=8 corridor_inside=1 |
| D02 | PASS | D02 report_only=1 30-50m=1 protected_trail=1 control_traveling=1 control_close=1 |
| D03 | PASS | D03 alternation=1 covered=1 maximum_bound=19.6994 far_early_bounds=0 |
| D04 | PASS | D04 first_receipt=2.2 return_shooters_4s=7 all_cover=1 spacing=1 path_bound=1 assessment=1 bare_rear=1 |
| D05 | PASS | D05 support=1 incorrectly_blocked=0 weak_report=1 latency=3.9 |
| D06 | PASS | D06 established=1 lost=1 evidence=1 protected=4 silent_released=0 |
| D07 | PASS | D07 phase_receipt=120.15 lift_received=121.6 late_original_area_rounds=0 no_signal_lift=0 |
| D08 | FAIL (assert abort) | D08 observer screened candidate routes=2 best blocked fraction=1; D08 accepted route observer blocked fraction=1; D08 covered_attack=1 moved=1 physical_angle=1 longest_rush=4.95 consolidate=0 reorganise=0 bare_attack=0 bare_report=1 |
| D09 | PASS | D09 pause=1 resume_same=1 protected=1 continuous_pause=0 |
| D10 | PASS | D10 committed=1/1 alternatives=1/0 resolved=1 |
| D11 | PASS | D11 committed=1 frozen=1 continued=1 weak_failed=1 reformed=1 |
| D16 | PASS | D16 retreat=1 alternate=1 rear_distance=39.6056 complete=1 equal_break=0 |
| D17 | PASS | D17 independently allocatable protected slots=8; D17 scarce_occupied=5 ample_occupied=8 spacing=1 |
| close | PASS | Close assault positions: supported objective inside18 accepted; unsupported, distant and other-threat controls reject |
| lifecycle | PASS | Lifecycle continue samples=778 retained overwatch samples=784 latched receipt samples=1051; Progress clock paused=113 running=187 |
| plumbing | PASS | all assertions passed |
| positions | PASS | Position service: authored layouts 0/5/6/7, reservations, area rejection and four templates PASS |
| projection | PASS | Projected rush: screened open ground succeeds without catalogue cover; short path budget rejects |
| sector | PASS | Sector position query: lane rejects; lane union objective disc accepts reachable covered flank |
| sprint | PASS | Sprint contracts: standing movement=335 crouched arrivals=1296 maximum route=10.4937 |
| D12 | Deferred | No gun pickup |

Thirteen pairs D01–D11, D16 and D17 ran: twelve pass, D08 fails. Seven additional selectors (close, sprint, projection, sector, positions, plumbing, lifecycle) pass. Existing pair and lifecycle bodies are byte-identical to entry.

## Reviewed outcome-first scoreboard

F1 remains 75 wins / 5 draws / 10 losses. Exchange versus candidate90 improves by +1.2531 [0.5141,2.1634]; win rate versus legacy improves by +0.2333 [0.0889,0.3556]. The other outcome comparison against each reference is inconclusive. Paired mean shots versus candidate90 is +12.1889 [-60.7858,78.5503], meeting the no-regression guard. All110 new drills digests equal their Phase3d counterparts (`previous-drills-digest-disclosure.json`): this correction changes the focused final-assault fixture but has no observable effect in the measured development battles. All reviewed statistical gates pass; the required D08 mechanism does not.

The attributed Phase3d review is applied explicitly: against each historical reference, at least one F1 outcome criterion must improve and neither may regress; shots use the paired mean against candidate90; trench median floor is deferred to Phase4. Authored no-regression uses the preceding Phase3d build. Historical literal flags remain in JSON for audit but do not govern this report.

| Gate | Result |
|---|---|
| targeted_outcome_gains | True |
| passivity_paired_mean | True |
| spacing_ci_no_regression | True |
| authored_no_significant_regression | True |
| statistical_exit | True |
| Required mechanisms | FAIL: D08 |
| Phase3e combined exit | FAIL |

| Set | Controller | W/D/L | A/E casualties (sum) | Mean normalized exchange | Raw aggregate exchange (supplement) | Shots | NN m | Under2 % | Closure120/240 m | Azure orders/min | Hits/soldier-min |
|---|---|---|---|---:|---:|---:|---:|---:|---|---:|---:|
| F1 | candidate90 | 65/7/18 | 951/218 | 0.8010 | 0.2292 | 450.5444 | 3.1087 | 38.3586 | 48.7682/48.8034 | 39.8458 | 0.4520 |
| F1 | drills-phase3d | 75/5/10 | 690/288 | 1.9890 | 0.4174 | 462.7333 | 6.4625 | 3.4081 | 44.7502/40.4640 | 58.6824 | 0.4504 |
| F1 | drills-phase3e | 75/5/10 | 690/288 | 1.9890 | 0.4174 | 462.7333 | 6.4625 | 3.4081 | 44.7502/40.4640 | 58.6824 | 0.4504 |
| F1 | legacy | 54/2/34 | 1048/371 | 1.9872 | 0.3540 | 718.2000 | 5.1025 | 13.6275 | 53.4978/54.0875 | 127.5229 | 0.4955 |
| Trenches | candidate90 | 5/0/5 | 87/79 | 1.6473 | 0.9080 | 798.9000 | 1.4537 | 66.4737 | 39.6976/35.9355 | 611.0333 | 0.1759 |
| Trenches | drills-phase3d | 4/0/6 | 64/52 | 0.9960 | 0.8125 | 800.9000 | 2.7812 | 36.1848 | 24.2296/28.1144 | 98.6000 | 0.1383 |
| Trenches | drills-phase3e | 4/0/6 | 64/52 | 0.9960 | 0.8125 | 800.9000 | 2.7812 | 36.1848 | 24.2296/28.1144 | 98.6000 | 0.1383 |
| Trenches | legacy | 6/1/3 | 152/177 | 1.5752 | 1.1645 | 1989.3000 | 3.9462 | 31.2771 | 35.6725/37.1113 | 255.3833 | 0.4097 |
| Works | candidate90 | 3/1/6 | 220/168 | 0.8085 | 0.7636 | 988.4000 | 0.9763 | 79.7327 | 108.8060/109.3555 | 64.3333 | 0.5020 |
| Works | drills-phase3d | 5/3/2 | 38/58 | 1.7240 | 1.5263 | 1001.4000 | 7.3165 | 5.6969 | 78.7280/61.3001 | 86.6167 | 0.1194 |
| Works | drills-phase3e | 5/3/2 | 38/58 | 1.7240 | 1.5263 | 1001.4000 | 7.3165 | 5.6969 | 78.7280/61.3001 | 86.6167 | 0.1194 |
| Works | legacy | 2/3/5 | 198/182 | 0.9788 | 0.9192 | 2306.5000 | 6.5387 | 16.4396 | 94.7414/91.2922 | 210.1500 | 0.4678 |

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
| F1 | drills-phase3d | win_azure | 90 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| F1 | drills-phase3d | casualty_exchange | 88 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| F1 | drills-phase3d | shots | 90 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| F1 | legacy | under_2m | 90 | -0.1022 | -0.1193 / -0.0863 | improved |
| F1 | 3 m floor | nearest_m | 90 | 3.4625 | 3.0059 / 3.9497 | improved |
| Works | legacy | under_2m | 10 | -0.1074 | -0.1319 / -0.0832 | improved |
| Works | 3 m floor | nearest_m | 10 | 4.3165 | 3.8633 / 4.7013 | improved |
| Works | drills-phase3d | shots | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Works | drills-phase3d | casualties_total | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Works | drills-phase3d | nearest_m | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Works | drills-phase3d | under_2m | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Works | drills-phase3d | closure_120s_m | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Works | drills-phase3d | closure_240s_m | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Works | drills-phase3d | orders_azure_per_minute | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
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
| Trenches | drills-phase3d | shots | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Trenches | drills-phase3d | casualties_total | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Trenches | drills-phase3d | nearest_m | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Trenches | drills-phase3d | under_2m | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Trenches | drills-phase3d | closure_120s_m | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Trenches | drills-phase3d | closure_240s_m | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
| Trenches | drills-phase3d | orders_azure_per_minute | 10 | 0.0000 | 0.0000 / 0.0000 | inconclusive |
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


All criterion inputs and 440 controller/run records are in `paired-input.json`; paired results are in `paired-criteria.json`. Supplementary distributions and bootstrap availability are in `distributions.json` / `distributions.md`. The primary normalized exchange omits undefined zero-attacker-loss ratios; paired n discloses these omissions. Raw aggregate ratios include those battles and are supplementary.

### Per-run adverse-case counts (disclosure)

| Set | Runs | Shots below candidate90 | Zero-shot | NN below3 m/unavailable | Under2 above legacy/unavailable |
|---|---:|---:|---:|---:|---:|
| F1 | 90 | 42 | 0 | 0 | 3 |
| Works | 10 | 4 | 0 | 0 | 0 |
| Trenches | 10 | 5 | 0 | 6 | 7 |

## Per-run tables: 20 authored and 90 F1

P3e=this build, P3d=previous build, C=candidate90, L=legacy. W/D/L is Azure result; A:E are raw casualties. Draw/seed identities are paired exactly. NA denotes an unavailable horizon. JSON preserves casualty fractions, initial strengths and survivors. Per-run shot/spacing shortfalls are disclosed, not reintroduced as conjunction gates.

| Set / draw / seed | Outcome P3e/P3d/C/L | A:E losses P3e/P3d/C/L | Shots P3e/P3d/C/L | NN m P3e/L | <2m % P3e/L | Closure120 P3e/P3d | Closure240 P3e/P3d | Azure orders/min P3e/P3d/C | Hits/soldier-min P3e/P3d | Per-run adverse guards |
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
| trenches / 0 / 101 | W/W/L/L | 5:6/5:6/15:2/20:4 | 966.00/966.00/1342.00/1569.00 | 2.80/3.39 | 28.87/33.43 | 23.92/23.92 | 39.62/39.62 | 105.67/105.67/313.33 | 0.16/0.16 | shots<C (disclosure), NN<3 |
| trenches / 0 / 102 | W/W/L/W | 3:9/3:9/13:10/7:21 | 730.00/730.00/1179.00/1774.00 | 3.09/2.58 | 25.11/39.51 | 24.00/24.00 | 23.30/23.30 | 89.83/89.83/836.17 | 0.14/0.14 | shots<C (disclosure) |
| trenches / 0 / 103 | L/L/W/W | 10:7/10:7/5:9/5:24 | 1278.00/1278.00/511.00/1805.00 | 3.00/3.30 | 32.87/30.39 | 22.85/22.85 | 36.27/36.27 | 118.17/118.17/473.00 | 0.19/0.19 | U2>L |
| trenches / 0 / 104 | L/L/L/W | 12:5/12:5/10:8/12:14 | 1083.00/1083.00/817.00/1377.00 | 3.14/2.69 | 33.70/40.27 | 23.81/23.81 | 30.18/30.18 | 103.50/103.50/670.00 | 0.18/0.18 | none |
| trenches / 0 / 105 | L/L/L/W | 8:5/8:5/8:7/13:18 | 870.00/870.00/558.00/1948.00 | 3.08/5.77 | 34.06/27.75 | 24.54/24.54 | 26.92/26.92 | 133.67/133.67/428.33 | 0.16/0.16 | U2>L |
| trenches / 0 / 106 | L/L/W/L | 5:4/5:4/6:7/24:17 | 394.00/394.00/552.00/2552.00 | 2.66/4.41 | 40.90/26.96 | 25.50/25.50 | 26.13/26.13 | 72.50/72.50/983.00 | 0.10/0.10 | shots<C (disclosure), NN<3, U2>L |
| trenches / 0 / 107 | W/W/W/W | 0:1/0:1/5:10/16:23 | 225.00/225.00/655.00/2284.00 | 2.09/4.68 | 46.94/28.78 | 25.27/25.27 | 28.06/28.06 | 77.17/77.17/580.33 | 0.02/0.02 | shots<C (disclosure), NN<3, U2>L |
| trenches / 0 / 108 | L/L/W/L | 9:5/9:5/2:8/20:19 | 813.00/813.00/385.00/2262.00 | 2.45/4.14 | 41.60/30.53 | 26.67/26.67 | 21.81/21.81 | 90.00/90.00/703.17 | 0.16/0.16 | NN<3, U2>L |
| trenches / 0 / 109 | W/W/L/D | 6:7/6:7/21:9/16:16 | 994.00/994.00/1392.00/2218.00 | 2.65/4.34 | 41.89/26.66 | 23.29/23.29 | 24.60/24.60 | 88.67/88.67/613.50 | 0.16/0.16 | shots<C (disclosure), NN<3, U2>L |
| F1 / 1 / 107 | W/W/D/W | 7:0/7:0/13:1/12:4 | 454.00/454.00/466.00/1038.00 | 5.92/7.69 | 0.28/11.07 | 49.52/49.52 | 49.42/49.42 | 39.33/39.33/64.00 | 0.13/0.13 | shots<C |
| F1 / 1 / 108 | W/W/D/W | 8:0/8:0/12:0/13:8 | 300.00/300.00/411.00/1027.00 | 5.84/6.14 | 0.35/13.19 | 55.58/55.58 | 55.58/55.58 | 37.83/37.83/70.50 | 0.12/0.12 | shots<C |
| F1 / 1 / 109 | W/W/W/W | 7:0/7:0/9:2/4:11 | 194.00/194.00/512.00/835.00 | 5.94/6.14 | 0.18/10.17 | 41.51/41.51 | 41.51/41.51 | 34.67/34.67/54.17 | 0.12/0.12 | shots<C |
| F1 / 2 / 107 | W/W/W/W | 3:4/3:4/10:4/6:4 | 231.00/231.00/205.00/486.00 | 8.01/4.34 | 11.41/26.00 | NA/NA | NA/NA | 86.43/86.43/98.55 | 0.56/0.56 | none |
| F1 / 2 / 108 | W/W/W/W | 4:4/4:4/12:4/1:4 | 302.00/302.00/247.00/215.00 | 9.90/4.26 | 6.11/26.76 | 31.14/31.14 | NA/NA | 87.47/87.47/105.22 | 0.48/0.48 | none |
| F1 / 2 / 109 | W/W/W/W | 2:4/2:4/4:4/4:4 | 418.00/418.00/132.00/314.00 | 9.90/4.34 | 2.50/26.05 | 36.14/36.14 | NA/NA | 64.67/64.67/117.46 | 0.26/0.26 | none |
| F1 / 3 / 107 | W/W/W/W | 6:6/6:6/11:0/16:6 | 355.00/355.00/421.00/719.00 | 4.91/4.32 | 7.75/17.89 | NA/NA | NA/NA | 167.11/167.11/17.50 | 1.06/1.06 | shots<C |
| F1 / 3 / 108 | W/W/W/W | 13:6/13:6/11:2/11:6 | 495.00/495.00/581.00/508.00 | 5.42/5.92 | 8.24/16.92 | NA/NA | NA/NA | 107.62/107.62/21.33 | 1.41/1.41 | shots<C |
| F1 / 3 / 109 | W/W/W/L | 11:6/11:6/11:2/23:1 | 575.00/575.00/552.00/1073.00 | 6.07/4.29 | 6.29/12.28 | 36.81/36.81 | NA/NA | 105.99/105.99/18.83 | 0.96/0.96 | none |
| F1 / 4 / 107 | W/W/W/W | 13:0/13:0/10:0/10:6 | 272.00/272.00/213.00/497.00 | 5.43/4.72 | 0.74/17.57 | 20.56/20.56 | 20.56/20.56 | 24.33/24.33/21.17 | 0.33/0.33 | none |
| F1 / 4 / 108 | W/W/W/W | 11:6/11:6/11:1/17:3 | 436.00/436.00/262.00/425.00 | 6.07/4.86 | 3.66/15.82 | 41.61/41.61 | NA/NA | 81.35/81.35/23.50 | 0.80/0.80 | none |
| F1 / 4 / 109 | W/W/W/W | 8:6/8:6/10:0/10:3 | 581.00/581.00/172.00/497.00 | 5.65/5.04 | 8.80/14.74 | 44.70/44.70 | 43.42/43.42 | 67.67/67.67/19.00 | 0.56/0.56 | none |
| F1 / 5 / 107 | W/W/W/W | 15:7/15:7/15:2/15:2 | 1187.00/1187.00/806.00/1459.00 | 7.39/5.07 | 1.76/11.89 | 66.81/66.81 | 67.36/67.36 | 49.00/49.00/41.17 | 0.66/0.66 | none |
| F1 / 5 / 108 | W/W/L/W | 15:8/15:8/17:0/12:8 | 807.00/807.00/564.00/1224.00 | 9.90/4.78 | 3.90/15.45 | 62.42/62.42 | 59.69/59.69 | 63.01/63.01/36.00 | 0.77/0.77 | none |
| F1 / 5 / 109 | W/W/W/W | 9:1/9:1/12:2/10:8 | 485.00/485.00/644.00/1149.00 | 5.99/5.08 | 1.64/12.80 | 60.19/60.19 | 59.69/59.69 | 37.00/37.00/42.00 | 0.23/0.23 | shots<C |
| F1 / 6 / 107 | W/W/W/W | 8:8/8:8/9:1/2:8 | 596.00/596.00/338.00/404.00 | 8.48/4.32 | 2.50/32.72 | 38.75/38.75 | NA/NA | 80.82/80.82/30.00 | 0.65/0.65 | none |
| F1 / 6 / 108 | W/W/W/W | 4:8/4:8/15:3/14:7 | 338.00/338.00/497.00/727.00 | 8.83/4.45 | 2.66/16.79 | 41.38/41.38 | NA/NA | 131.53/131.53/29.83 | 0.77/0.77 | shots<C |
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
| F1 / 16 / 107 | W/W/W/L | 3:8/3:8/4:1/12:1 | 551.00/551.00/227.00/353.00 | 5.00/4.40 | 2.08/11.51 | 39.96/39.96 | NA/NA | 62.01/62.01/24.00 | 0.76/0.76 | none |
| F1 / 16 / 108 | W/W/W/L | 4:8/4:8/4:0/11:1 | 378.00/378.00/158.00/426.00 | 5.26/5.00 | 6.95/13.26 | NA/NA | NA/NA | 96.10/96.10/19.00 | 1.14/1.14 | none |
| F1 / 16 / 109 | W/W/W/W | 10:3/10:3/9:2/11:4 | 355.00/355.00/298.00/440.00 | 7.01/4.82 | 2.63/7.79 | 36.23/36.23 | 35.35/35.35 | 28.17/28.17/20.67 | 0.47/0.47 | none |
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
| F1 / 20 / 108 | W/W/W/W | 12:5/12:5/16:6/17:6 | 433.00/433.00/484.00/922.00 | 8.43/4.53 | 1.28/16.83 | 28.31/28.31 | 21.44/21.44 | 45.50/45.50/39.50 | 0.39/0.39 | shots<C |
| F1 / 20 / 109 | W/W/W/W | 10:0/10:0/20:7/15:4 | 355.00/355.00/602.00/752.00 | 8.47/5.06 | 0.50/9.41 | 28.94/28.94 | 24.57/24.57 | 37.33/37.33/36.67 | 0.22/0.22 | shots<C |
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
| F1 / 26 / 107 | W/W/W/W | 5:10/5:10/10:10/11:2 | 598.00/598.00/515.00/545.00 | 6.00/5.00 | 0.89/11.83 | 40.82/40.82 | NA/NA | 120.81/120.81/78.28 | 0.66/0.66 | none |
| F1 / 26 / 108 | W/W/D/W | 6:10/6:10/17:3/15:7 | 482.00/482.00/540.00/648.00 | 8.58/5.00 | 4.15/13.97 | 36.42/36.42 | NA/NA | 153.56/153.56/34.00 | 0.76/0.76 | shots<C |
| F1 / 26 / 109 | W/W/D/L | 7:10/7:10/19:5/21:4 | 403.00/403.00/538.00/650.00 | 8.04/4.52 | 2.72/14.74 | 34.01/34.01 | NA/NA | 99.49/99.49/33.00 | 0.68/0.68 | shots<C |
| F1 / 27 / 107 | W/W/W/W | 1:6/1:6/8:6/11:6 | 419.00/419.00/216.00/402.00 | 5.45/4.59 | 5.49/11.58 | 41.61/41.61 | NA/NA | 153.78/153.78/134.86 | 0.61/0.61 | none |
| F1 / 27 / 108 | W/W/W/W | 8:6/8:6/7:6/9:6 | 323.00/323.00/227.00/463.00 | 6.10/4.26 | 1.99/21.81 | NA/NA | NA/NA | 175.00/175.00/132.83 | 0.94/0.94 | none |
| F1 / 27 / 109 | W/W/W/W | 2:6/2:6/10:2/19:5 | 213.00/213.00/354.00/733.00 | 6.16/4.40 | 2.86/16.52 | NA/NA | NA/NA | 206.53/206.53/32.00 | 0.83/0.83 | shots<C |
| F1 / 28 / 107 | W/W/W/L | 11:2/11:2/8:1/21:2 | 266.00/266.00/142.00/517.00 | 6.02/6.00 | 0.73/7.58 | 33.47/33.47 | 33.43/33.43 | 33.83/33.83/11.50 | 0.29/0.29 | none |
| F1 / 28 / 108 | W/W/W/L | 14:2/14:2/5:2/23:4 | 471.00/471.00/154.00/957.00 | 5.96/4.92 | 0.91/17.47 | 32.09/32.09 | 32.09/32.09 | 36.00/36.00/9.83 | 0.40/0.40 | none |
| F1 / 28 / 109 | W/W/W/L | 10:1/10:1/7:0/22:6 | 219.00/219.00/124.00/801.00 | 4.81/5.00 | 8.26/12.90 | 35.21/35.21 | 35.21/35.21 | 42.83/42.83/11.17 | 0.27/0.27 | none |
| F1 / 29 / 107 | W/W/W/D | 9:8/9:8/17:3/18:2 | 635.00/635.00/924.00/1771.00 | 7.65/5.00 | 2.85/11.44 | 62.68/62.68 | NA/NA | 65.11/65.11/41.17 | 0.67/0.67 | shots<C |
| F1 / 29 / 108 | W/W/W/W | 12:2/12:2/11:1/6:8 | 980.00/980.00/641.00/663.00 | 5.20/5.55 | 8.49/14.32 | 56.69/56.69 | 56.59/56.59 | 37.83/37.83/41.67 | 0.33/0.33 | none |
| F1 / 29 / 109 | W/W/W/W | 17:2/17:2/11:1/17:5 | 1104.00/1104.00/547.00/1815.00 | 8.06/5.90 | 1.22/10.55 | 58.37/58.37 | 55.07/55.07 | 35.17/35.17/41.83 | 0.53/0.53 | none |
| F1 / 30 / 107 | L/L/W/W | 10:2/10:2/3:1/5:2 | 464.00/464.00/212.00/342.00 | 5.30/5.22 | 1.34/9.41 | 57.46/57.46 | 59.63/59.63 | 31.50/31.50/48.50 | 0.33/0.33 | none |
| F1 / 30 / 108 | D/D/W/W | 6:0/6:0/6:1/2:8 | 249.00/249.00/248.00/371.00 | 5.24/4.47 | 0.46/19.50 | 59.31/59.31 | 56.03/56.03 | 33.33/33.33/31.83 | 0.15/0.15 | none |
| F1 / 30 / 109 | W/W/W/L | 8:4/8:4/8:3/9:1 | 504.00/504.00/453.00/557.00 | 6.00/4.48 | 2.27/11.80 | 57.96/57.96 | 57.96/57.96 | 31.33/31.33/60.50 | 0.34/0.34 | none |


## Verification

- Full `./scripts/test-sim.sh`: PASS, exit 0; simulation elapsed 242.254 s (full-suite.log). Optional D08 remains a separate failure.
- Python: PASS, 63 tests in 3.622 s (python-tests.log). Added reviewed-scoreboard semantics test; close-assault C++ pin supplies the new mechanism controls.
- Historical authored parity: 40/40 exact matches against preserved legacy/candidate90 manifests, both maps seeds100–109 (`authored-parity/parity.json`).
- Drills trace on/off parity: 3/3 (Works107, Trenches107, F1 draw1/107; `trace-parity.json`).
- All110 candidate90 trace references revalidated against untraced baseline digests (`candidate-reference-revalidation.json`); order comparisons retain these references.
- Controller defaults/reruns exit 0 (`defaults.log`).
- All110 runs complete, zero-shot count 0; engagement guards enabled and not aborted (`engagement-summary.json`).
- Protected hashes, unchanged existing assertions, frozen source/tests and manifest build IDs verified (`static-checks.json`, `measured-build-check.json`). `git diff --check` passed.

## Commands

Runner result JSON retains exact expanded commands, return codes and manifests.

```sh
python3 tools/source_id.py
./scripts/test-sim.sh --drills D08  # premeasurement integration; unchanged failure retained
./scripts/battle-lab.sh --drills --encounter 60 --seconds 180 --evaluate --out .local/phase3e/preflight-fixture
./scripts/test-sim.sh
python3 -m unittest discover -s tests -p "test_*.py"
python3 .local/phase3e/run_mechanisms.py
python3 .local/phase3e/measure.py
# measure.py expands to:
python3 .local/phase3e/run_authored.py
python3 .local/phase3e/parity.py .local/phase3e/authored-parity .local/phase3e/final/battle-lab
python3 tools/run_family.py --binary .local/phase3e/final/battle-lab --out .local/phase3e/f1-dev --family F1 --gen-seeds 1-30 --seeds 107-109 --controllers drills --seconds 360 --jobs 2 --trace
python3 tests/check_controller_defaults.py --binary .local/phase3e/final/battle-lab --out .local/phase3e/defaults
python3 .local/phase3e/trace_checks.py
python3 .local/phase3e/diagnose.py
.local/phase3e/final/battle-lab --drills --encounter 60 --seconds 240 --evaluate --out .local/phase3e/fixture-extended
python3 .local/phase3e/action_diagnostics.py
python3 .local/phase3e/analyze.py  # calls compare_drill_outcomes and report_family
python3 .local/phase3e/static_checks.py
git diff --check
```

## D07 / D08 causal evidence

The unchanged D07 pair passes: phase-line receipt at 120.15 s, lift at 121.6 s, zero late rounds at the original objective, and no lift in its no-signal control. D09 and the sprint, lifecycle and all Phase2 pins remain passing.

The unchanged D08 pair reports accepted attack, physical flank angle, movement and screen protection, with maximum rush 4.95 s; its bare-ground control reports upward without attacking. Consolidation and reorganisation remain false at 180 s. The corrected final objective-cover query is accepted at 174.25 s; the previous protected-endpoint rejection no longer blocks this final bound.

At 180 s, rifle members 1 and 3 are at (66.8,-4.9) and (69.13,4.18), near objective cover. All four rifle members retain health 100. Defender 32 is at (69.21,-1.02), health 96.35, still active. The trace records buddy-fire waits at 146.95–161.55 s and 167.35–174.25 s; these are supported-assault waits, not the former impossible objective-safety requirement. Evidence: `.local/phase3e/fixture-diagnostics/60/battle-107-1789641944165533383/`.

A single extended, same-binary diagnostic (encounter60, requested 240 s) incapacitates the defender at 181.406 s and terminates at 181.45 s with an Azure win, 287 shots, digest `14178820067593905299`. No Consolidate/Reorganise transition occurs before deathmatch termination (`BattleSim.cpp:630–636,1017–1021`). This diagnostic did not alter the unchanged D08 fixture or enter the development scoreboard. Exact manifest, casualty and transition evidence is in `extended-evidence.json` and `.local/phase3e/fixture-extended/battle-107-1789642010740862603/`.


## Authored Works action disclosure

| Seed | Attack commitments | Phase-line transitions | Consolidations |
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

Counts are trace observer diagnostics, not policy inputs or outcome substitutes. Exact transitions and reason frequencies remain in `action-diagnostics.json`. Authored targeted improvements remain deferred to Phase4.


## Implementation and review resolutions

- `Unreal/Source/ArmyPrototype/Sim/SquadDrillSim.cpp:74`: close-assault permission comes from the other frozen rifle buddy pair's delivered-fire reports, after the phase-line receipt/lift. It uses the existing two rounds / six seconds contract; it does not inspect enemy truth.
- `Sim/PositionSim.h:16` and `Sim/PositionSim.cpp:59`: an opt-in supported-objective exception applies to endpoints within 18 m and only to threats in the named objective area. Other known threats still require protection. Defaults preserve every historical caller; walkability, path length, area, reservations and friendly-fire-lane constraints remain.
- `Sim/SquadDrillSim.cpp:83,98–108,135–136`: final bounds request actual objective cover slots oriented on remaining known threats. Beyond 18 m the endpoint still requires protection from the objective. Inside 18 m it requires the other pair's delivered fire. Final arrival uses `Completion::Occupy`, because the sprint executor crouches at the shelter while Transit expects the peek. No fixture was relaxed for that mapping.
- `tests/squad_drills_tests.h:142`: added `DrillCloseAssaultPositions` and a `close` selector in `tests/drills_tests.h:174`. Production sensing supplies the officer contacts; supported close endpoints pass, while unsupported, distant and other-threat controls reject. All existing pair, projection, sprint and lifecycle bodies are byte-identical to entry.
- `tools/compare_drill_outcomes.py` adds `reviewed_exit`, preserving the old literal flags for audit. `tests/test_drill_outcomes.py` pins the attributed reading: one significant outcome gain against each historical reference, neither outcome regresses, paired-mean shots guard, and trench median floor deferred. The local analysis explicitly selects Phase3e versus Phase3d; no baseline manifests or measurements were changed.

## Disagreements, limitations and stop

The review's line-105 diagnosis was incomplete: that old post-allocation check was conditional on AttackMove, while the observed final failure occurred in Assault. The position service's unconditional `safeEndpoint` rejection also had to implement the close-assault exception. Entry/final source snapshots and the prior final-query evidence support this distinction. I applied the stated behavioural ruling at both levels, rather than claiming that editing only line 105 fixed it.

D08's required consolidation/reorganisation still does not pass unchanged. The corrected final bound now reaches the objective's cover; at the 180 s assertion the defender is still active. Extending this same frozen binary to 240 s ends the deathmatch at 181.45 s immediately after that sole defender is incapacitated, before a post-clearance report and consolidation can complete. This is evidence of a fixture/termination obstacle, not an alternative pass. A future review could authorize a surviving remote defender or a dedicated post-objective completion fixture; neither was added here. No tactical change followed the measured build.

F1 wins use the existing survivor-count deathmatch result, not objective capture. Primary exchange retains the accepted per-run defender/attacker casualty-fraction ratio, omitting undefined zero-attacker-loss ratios and disclosing paired counts. Aggregate raw-loss exchange is supplementary. Confidence intervals crossing zero are inconclusive, not proof of equivalence. Old per-run shot and spacing conjunctions are disclosure only under this review; the trench median remains a Phase4 targeted item.

Phase3e fails its required mechanism exit. Phase4 is therefore not started. No platoon task tree, F2/F3, gun pickup, second measured build, Windows/Unreal invocation, Fable launcher, commit, reset or stash was performed. Legacy remains the playable default. Native verification remains with the architect.


Final fingerprint: `5d0923671a8c3c18`. Stopped after this report; Phase4 not started.
