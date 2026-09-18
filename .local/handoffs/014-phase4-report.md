# Plan014 — Phase4 single-build report

**FAIL — experimental, not promoted. Stopped after the one measured build.** Phase3h first completed its scope at `a0364bff5cea6ab9`: D08 passed on attempt2 and all13 squad pairs plus7 pins passed once. Phase4 then changed platoon policy and regressed seven of those pairs. P04/P06 pass; P01/P02/P03/P05 fail. The passing full default suite does not override optional mechanism failures. Legacy remains the playable default.

Run entry: `ae9ab767f6805765`; Phase3h final / Phase4 entry: `a0364bff5cea6ab9`; Phase4 frozen/final: `3bda3ace2c9dacdc`. Phase3h attempts, sources, binaries and evidence are preserved under `.local/phase3h/`; Phase4 entry/final snapshots are under `.local/phase4/`. Simulation changes after the freeze: none. `simulation.patch` and `static-checks.json` identify exact changed files.

## Mechanisms and unchanged regression assertions

| Selector | Result | Observations |
|---|---|---|
| D01 | FAIL | D01 moving=347 spacing_share=0.786744 arrived=0 corridor_inside=1 |
| D02 | FAIL | D02 report_only=1 30-50m=0 protected_trail=1 control_traveling=1 control_close=1 |
| D03 | FAIL | D03 alternation=0 covered=0 maximum_bound=0 far_early_bounds=0 |
| D04 | PASS | D04 first_receipt=2.2 return_shooters_4s=7 all_cover=1 spacing=1 path_bound=1 assessment=1 bare_rear=1 |
| D05 | PASS | D05 support=1 incorrectly_blocked=0 weak_report=1 latency=3.15 |
| D06 | PASS | D06 established=1 lost=1 evidence=1 protected=4 silent_released=0 |
| D07 | FAIL | D07 phase_receipt=-1 lift_received=-1 late_original_area_rounds=0 no_signal_lift=0 |
| D08 | FAIL | D08 observer screened candidate routes=2 best blocked fraction=1; D08 accepted route observer blocked fraction=1; D08 covered_attack=1 moved=1 physical_angle=0 longest_rush=5.4 consolidate=0 reorganise=0 bare_attack=0 bare_report=0 |
| D09 | FAIL | D09 pause=0 resume_same=0 protected=1 continuous_pause=0 |
| D10 | PASS | D10 committed=1/1 alternatives=1/0 resolved=1 |
| D11 | PASS | D11 committed=1 frozen=1 continued=1 weak_failed=1 reformed=1 |
| D16 | FAIL | D16 retreat=1 alternate=0 rear_distance=0 complete=0 equal_break=0 |
| D17 | PASS | D17 independently allocatable protected slots=8; D17 scarce_occupied=5 ample_occupied=8 spacing=1 |
| P01 | FAIL | P01 fix_weapon=1 two_flanks=1 reserve=1 arrival_angle=0 claims=1 bare_flank=0 bare_unsafe=0 honest=1 |
| P02 | FAIL | P02 sampled=1 min_centroid=15.0337 overlap=1 disabled_claim_overlap=1 |
| P03 | FAIL | P03 phase_received=-1 fixing_received=-1 lifted=-1 late=0 no_phase_lift=0 |
| P04 | PASS | P04 autonomous=1 successor=23 directive=23 control_changed=0 |
| P05 | FAIL | P05 withdraw=0 alternate=0 rally_in_area=1 strong_withdraw=0 |
| P06 | PASS | P06 renewals=2 lifetimes_60_90=1 no_stale_execution=1 |
| close | PASS | Close assault positions: supported objective inside18 accepted; unsupported, distant and other-threat controls reject |
| lifecycle | PASS | Lifecycle continue samples=772 retained overwatch samples=344 latched receipt samples=1100; Progress clock paused=109 running=134 |
| plumbing | PASS | all assertions passed |
| positions | PASS | Position service: authored layouts 0/5/6/7, reservations, area rejection and four templates PASS |
| projection | PASS | Projected rush: screened open ground succeeds without catalogue cover; short path budget rejects |
| sector | PASS | Sector position query: lane rejects; lane union objective disc accepts reachable covered flank |
| sprint | PASS | Sprint contracts: standing movement=51 crouched arrivals=651 maximum route=15 |

15/26 selectors pass. Every existing pair/pin assertion is unchanged; new platoon pairs are in `tests/platoon_tests.h`. Scenarios70–81 use physical fixture setup, ordinary sensing, reports and orders. No contact/receipt injection. P02 alone uses the test-build-only claim-cost disable flag. D12 gun recovery remains excluded by instruction.

### Trace evidence and failure classification

- **P01/P03: defect / unproven lift.** Assignments include a weapon-owning fixing squad, two flank squads and a reserve; the screened route is found, but assault arrival angle is not reached and no phase-line receipt is emitted. Encounters70/74 each record22 formation-to-column contractions and17 column-slot allocation failures on Azure. Trace paths and exact events are in `mechanism-traces.json` and `trace-findings.json`. No inference from zero late rounds is counted as a lift pass.
- **P02: defect.** Actual minimum inter-squad centroid distance is15.0337 m, below20 m; claimed routes overlap. The disabled-claims control overlaps too. Cost discouragement did not establish the required distinct-corridor invariant.
- **P05: fixture does not prove its belief antecedent.** Fourteen Azure actives face32 physical enemies, but the commander's sampled mental-map estimate peaks at17.7957 at10 s. No platoon Withdraw task is issued. The above-one physical control does not withdraw. Production belief coverage must be established before calling this a policy threshold failure; no omniscient enemy total was substituted.
- **D01/D02/D03/D07/D08/D09/D16: regressions, not intentional assertion changes.** Platoon assignment supersedes the local drill context. D01 records repeated objective replacements; D03 receives Fix and remains in support hold. D07/D08/D09 no longer complete the assault sequence. D08 also records a5.4 s rush, above its5.05 s assertion. D16 accepts retreat but does not alternate or achieve rearward displacement. Their exact assertions and printed measurements remain in `mechanisms/*.log`. They passed at Phase3h entry; this integration is responsible for the regressions.

## Distribution scoreboard

F1 outcome no-regression is met statistically: win delta versus Phase3e is+0.0333 [−0.0444,+0.1111], normalized exchange delta−0.5284 [−1.4039,+0.2611]. Authored total casualties and both closure horizons significantly regress on both maps; Works order rate regresses. NN spacing significantly regresses against legacy on all three sets; trench under2 share also regresses, and the trench median2.805 m misses3 m. These failures prevent acceptance despite the78 F1 wins.

The governing Phase4 criteria use individual paired confidence intervals: authored total casualties and closure120/240 must improve against candidate90; Azure own-soldier order rate must not regress. F1 win rate and primary exchange must not regress against the last measured Phase3e. Spacing compares both nearest-squadmate median and under2 m share to legacy on all three sets; the trench3 m floor is targeted. F1 paired mean shots against candidate90 remains disclosed as the inherited passivity guard. Results that cross zero are inconclusive, not proof of equivalence.

Phase3e is the statistical reference because Phase3f/g/h were focused fixture/local iterations without distributions; no invented Phase3h baseline is used. The case-level Phase3e archive is preserved.

| Set | Controller | W/D/L | Shots | Total losses | Exchange | NN m | Under2 % | Closure120/240 m | Azure orders/min | Hits/soldier-min |
|---|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|
| F1 | candidate90 | 65/7/18 | 450.544 | 12.989 | 0.801 | 3.109 | 38.359 | 48.768/48.803 | 39.846 | 0.452 |
| F1 | drills-phase3e | 75/5/10 | 462.733 | 10.867 | 1.989 | 6.463 | 3.408 | 44.750/40.464 | 58.682 | 0.450 |
| F1 | drills-phase4 | 78/1/11 | 479.078 | 8.044 | 1.495 | 4.351 | 12.000 | 28.410/31.445 | 53.229 | 0.195 |
| F1 | legacy | 54/2/34 | 718.200 | 15.767 | 1.987 | 5.102 | 13.627 | 53.498/54.087 | 127.523 | 0.496 |
| Trenches | candidate90 | 5/0/5 | 798.900 | 16.600 | 1.647 | 1.454 | 66.474 | 39.698/35.936 | 611.033 | 0.176 |
| Trenches | drills-phase3e | 4/0/6 | 800.900 | 11.600 | 0.996 | 2.781 | 36.185 | 24.230/28.114 | 98.600 | 0.138 |
| Trenches | drills-phase4 | 3/1/6 | 352.000 | 5.100 | 0.468 | 2.805 | 36.607 | 19.222/21.946 | 76.817 | 0.062 |
| Trenches | legacy | 6/1/3 | 1989.300 | 32.900 | 1.575 | 3.946 | 31.277 | 35.672/37.111 | 255.383 | 0.410 |
| Works | candidate90 | 3/1/6 | 988.400 | 38.800 | 0.808 | 0.976 | 79.733 | 108.806/109.355 | 64.333 | 0.502 |
| Works | drills-phase3e | 5/3/2 | 1001.400 | 9.600 | 1.724 | 7.317 | 5.697 | 78.728/61.300 | 86.617 | 0.119 |
| Works | drills-phase4 | 5/1/4 | 515.200 | 8.000 | 1.257 | 4.066 | 6.758 | 66.722/74.193 | 86.717 | 0.096 |
| Works | legacy | 2/3/5 | 2306.500 | 38.000 | 0.979 | 6.539 | 16.440 | 94.741/91.292 | 210.150 | 0.468 |


# Phase4 required paired criteria

Differences are candidate minus reference. 95% paired percentile intervals use 2000 cluster resamples. Crossing zero is inconclusive, not equivalence. Primary exchange is the existing per-run ratio of defender/attacker casualty fractions; zero-attacker-loss ratios are unavailable and paired counts disclose omissions. Aggregate raw-loss ratios are supplementary.

| Set | Reference | Criterion | Paired n | Delta | CI95 | Finding |
|---|---|---|---:|---:|---|---|
| F1 | drills-phase3e | win_azure | 90 | 0.0333 | -0.0444 / 0.1111 | inconclusive |
| F1 | drills-phase3e | casualty_exchange | 88 | -0.5284 | -1.4039 / 0.2611 | inconclusive |
| F1 | candidate90 | shots | 90 | 28.5333 | -26.2200 / 82.2250 | inconclusive |
| F1 | legacy | nearest_m | 90 | -0.7511 | -0.9672 / -0.5490 | regression |
| F1 | legacy | under_2m | 90 | -0.0163 | -0.0392 / 0.0051 | inconclusive |
| Works | candidate90 | casualties_total | 10 | -30.8000 | -34.9000 / -26.7000 | regression |
| Works | candidate90 | closure_120s_m | 10 | -42.0845 | -52.6087 / -31.9031 | regression |
| Works | candidate90 | closure_240s_m | 10 | -35.1624 | -42.7386 / -27.4823 | regression |
| Works | candidate90 | orders_azure_per_minute | 10 | 22.3833 | 12.1646 / 32.6171 | regression |
| Works | legacy | nearest_m | 10 | -2.4730 | -2.9230 / -1.9863 | regression |
| Works | legacy | under_2m | 10 | -0.0968 | -0.1205 / -0.0766 | improved |
| Trenches | candidate90 | casualties_total | 10 | -11.5000 | -15.4000 / -7.3000 | regression |
| Trenches | candidate90 | closure_120s_m | 10 | -20.4758 | -22.4202 / -18.0262 | regression |
| Trenches | candidate90 | closure_240s_m | 10 | -13.9896 | -16.5572 / -11.3118 | regression |
| Trenches | candidate90 | orders_azure_per_minute | 10 | -534.2167 | -649.8337 / -422.9246 | improved |
| Trenches | legacy | nearest_m | 10 | -1.1409 | -1.7846 / -0.4942 | regression |
| Trenches | legacy | under_2m | 10 | 0.0533 | 0.0111 / 0.0955 | regression |
| Trenches | 3 m floor | nearest_m | 10 | -0.1947 | -0.3934 / -0.0427 | regression |


Required statistical criteria: 18. Statistical exit: **False**. Combined exit: **FAIL** because the mechanisms fail regardless of the statistical reading.

All comparisons against Phase3e, candidate90 and legacy (including shots, total casualties, each side's order rate, hit rate, closure and outcomes) are in `all-comparisons.md` and `phase4-scoreboard.json`. `paired-input.json` retains440 matched-controller run records. `distributions.json`/`.md` are generated with `tools/report_family.py` functions. The separate family CLI report includes the90 new drills runs and180 archived historical runs. `paired-criteria.json` is the historical Phase3-style disclosure only; it is not the Phase4 gate.

Intervals use2000 paired cluster bootstrap resamples, seed1729: generated-map draw on F1, retaining its three battle seeds; battle seed on authored maps. Primary exchange is defender casualty fraction / attacker casualty fraction; zero-attacker-loss ratios are unavailable and excluded pairwise, with n disclosed. Aggregate raw-loss exchange is supplementary in JSON and retains zero-own-loss battles. Horizon metrics are unavailable after early battle termination rather than extrapolated. NN is the mean of per-run nearest-squadmate medians, not a newly pooled median.

## Per-run tables

P4=this frozen build; P3e=last measured Phase3; C=candidate90; L=legacy. A:E losses are raw casualty counts, with fractions and surviving/initial strengths retained in JSON. Closure is front-line displacement at120/240 s. Per-run adverse flags are disclosure; they do not reinstate the rejected per-run conjunction.

| Set / draw / seed | Outcome P4/P3e/C/L | A:E losses P4/P3e/C/L | Shots P4/P3e/C/L | NN m P4/L | <2m % P4/L | Closure120 P4/P3e/C/L | Closure240 P4/P3e/C/L | Azure orders/min P4/P3e/C | Hits/soldier-min P4/P3e | Per-run adverse guards  Casualty % A:E P4 | Exchange P4 |
|---|---|---|---:|---:|---:|---:|---:|---:|---:|------:|---:|
| works / 0 / 100 | D/W/L/D | 5:5/0:3/27:10/18:18 | 625.00/696.00/839.00/2583.00 | 4.29/7.27 | 5.65/16.21 | 51.83/80.80/108.43/95.05 | 64.63/79.03/106.78/88.52 | 102.83/108.67/68.33 | 0.11/0.07 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C  15.62:15.62 | 1.000 |
| works / 0 / 101 | L/L/L/L | 3:1/6:2/29:12/20:15 | 544.00/600.00/1038.00/2012.00 | 4.00/5.04 | 5.83/23.52 | 41.45/76.64/108.32/86.11 | 74.43/44.60/106.43/90.09 | 105.17/79.67/57.17 | 0.05/0.10 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C  9.38:3.12 | 0.333 |
| works / 0 / 102 | W/W/W/W | 1:3/0:8/22:23/12:23 | 269.00/861.00/965.00/2270.00 | 4.00/5.98 | 6.22/16.51 | 67.75/81.61/106.23/93.35 | 71.42/77.00/118.03/97.13 | 67.33/74.67/69.83 | 0.06/0.10 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C  3.12:9.38 | 3.000 |
| works / 0 / 103 | L/W/W/L | 4:1/3:10/18:24/22:18 | 334.00/1328.00/1272.00/2347.00 | 4.00/5.51 | 10.04/19.16 | 65.99/76.29/112.32/94.75 | 88.00/41.99/104.80/78.26 | 92.33/82.50/69.50 | 0.08/0.15 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C  12.50:3.12 | 0.250 |
| works / 0 / 104 | W/D/L/L | 2:5/3:3/25:16/24:16 | 435.00/1522.00/1067.00/2086.00 | 4.00/7.56 | 8.89/14.20 | 65.19/82.15/110.46/99.34 | 66.26/59.13/109.71/83.68 | 65.00/70.00/64.17 | 0.07/0.09 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C  6.25:15.62 | 2.500 |
| works / 0 / 105 | W/W/L/L | 0:6/1:4/21:13/22:19 | 432.00/567.00/1003.00/2318.00 | 4.00/6.80 | 7.93/13.31 | 69.09/78.07/109.37/92.96 | 67.62/62.97/109.55/93.13 | 82.33/88.17/69.50 | 0.07/0.08 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C  0.00:18.75 | NA (zero own loss) |
| works / 0 / 106 | L/D/D/L | 3:0/7:7/20:20/25:16 | 256.00/1107.00/973.00/2803.00 | 4.00/6.88 | 5.00/16.53 | 43.54/77.84/108.77/89.28 | 54.64/54.26/109.94/83.58 | 105.17/76.00/66.17 | 0.06/0.16 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C  9.38:0.00 | 0.000 |
| works / 0 / 107 | W/W/W/D | 6:13/4:10/17:24/19:19 | 811.00/1520.00/1197.00/1878.00 | 4.37/7.56 | 6.64/12.54 | 92.11/75.84/109.79/103.34 | 92.44/56.79/109.62/99.62 | 86.00/74.17/57.33 | 0.21/0.15 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C  18.75:40.62 | 2.167 |
| works / 0 / 108 | L/L/L/W | 10:4/8:5/23:16/15:17 | 783.00/1035.00/841.00/1962.00 | 4.00/6.28 | 7.93/17.33 | 90.45/80.41/107.26/100.83 | 91.42/58.78/110.62/95.38 | 98.00/90.17/59.83 | 0.15/0.17 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C  31.25:12.50 | 0.400 |
| works / 0 / 109 | W/D/L/D | 3:5/6:6/18:10/21:21 | 663.00/778.00/689.00/2806.00 | 4.00/6.51 | 3.43/15.09 | 79.80/77.64/107.12/92.41 | 71.06/78.47/108.08/103.55 | 63.00/122.17/61.50 | 0.11/0.12 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C  9.38:15.62 | 1.667 |
| trenches / 0 / 100 | W/L/W/W | 0:9/6:3/2:9/19:21 | 689.00/656.00/598.00/2104.00 | 2.87/4.17 | 35.44/28.50 | 22.31/22.45/42.08/31.51 | 30.45/24.25/41.18/36.59 | 95.17/106.83/509.50 | 0.10/0.10 | NN<3, U2>L, NN<L, losses<C, closure120<C, closure240<C  0.00:28.12 | NA (zero own loss) |
| trenches / 0 / 101 | D/W/L/L | 1:1/5:6/15:2/20:4 | 642.00/966.00/1342.00/1569.00 | 3.00/3.39 | 31.58/33.43 | 20.29/23.92/37.65/36.31 | 21.71/39.62/27.90/27.25 | 69.83/105.67/313.33 | 0.03/0.16 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C  3.12:3.12 | 1.000 |
| trenches / 0 / 102 | W/W/L/W | 0:4/3:9/13:10/7:21 | 245.00/730.00/1179.00/1774.00 | 3.08/2.58 | 34.92/39.51 | 20.51/24.00/32.20/37.33 | 22.81/23.30/36.55/52.50 | 79.83/89.83/836.17 | 0.05/0.14 | shots<C (disclosure), losses<C, closure120<C, closure240<C  0.00:12.50 | NA (zero own loss) |
| trenches / 0 / 103 | L/L/W/W | 2:1/10:7/5:9/5:24 | 157.00/1278.00/511.00/1805.00 | 2.88/3.30 | 36.33/30.39 | 17.39/22.85/41.65/39.26 | 20.63/36.27/33.43/52.18 | 74.33/118.17/473.00 | 0.03/0.19 | shots<C (disclosure), NN<3, U2>L, NN<L, losses<C, closure120<C, closure240<C  6.25:3.12 | 0.500 |
| trenches / 0 / 104 | W/L/L/W | 0:1/12:5/10:8/12:14 | 182.00/1083.00/817.00/1377.00 | 2.96/2.69 | 37.68/40.27 | 17.82/23.81/39.89/36.93 | 23.66/30.18/34.42/43.42 | 83.17/103.50/670.00 | 0.04/0.18 | shots<C (disclosure), NN<3, losses<C, closure120<C, closure240<C  0.00:3.12 | NA (zero own loss) |
| trenches / 0 / 105 | L/L/L/W | 2:0/8:5/8:7/13:18 | 304.00/870.00/558.00/1948.00 | 2.92/5.77 | 33.62/27.75 | 16.81/24.54/40.50/40.38 | 20.85/26.92/32.04/34.10 | 77.33/133.67/428.33 | 0.05/0.16 | shots<C (disclosure), NN<3, U2>L, NN<L, losses<C, closure120<C, closure240<C  6.25:0.00 | 0.000 |
| trenches / 0 / 106 | L/L/W/L | 2:1/5:4/6:7/24:17 | 194.00/394.00/552.00/2552.00 | 2.55/4.41 | 40.59/26.96 | 19.57/25.50/43.71/35.51 | 19.93/26.13/36.94/27.18 | 68.50/72.50/983.00 | 0.05/0.10 | shots<C (disclosure), NN<3, U2>L, NN<L, losses<C, closure120<C, closure240<C  6.25:3.12 | 0.500 |
| trenches / 0 / 107 | L/W/W/W | 5:2/0:1/5:10/16:23 | 303.00/225.00/655.00/2284.00 | 2.74/4.68 | 38.09/28.78 | 19.72/25.27/39.85/32.27 | 20.62/28.06/39.22/23.72 | 79.50/77.17/580.33 | 0.06/0.02 | shots<C (disclosure), NN<3, U2>L, NN<L, losses<C, closure120<C, closure240<C  15.62:6.25 | 0.400 |
| trenches / 0 / 108 | L/L/W/L | 8:3/9:5/2:8/20:19 | 489.00/813.00/385.00/2262.00 | 3.00/4.14 | 33.61/30.53 | 20.57/26.67/41.72/34.77 | 18.72/21.81/37.17/49.50 | 82.83/90.00/703.17 | 0.13/0.16 | NN<3, U2>L, NN<L, closure120<C, closure240<C  25.00:9.38 | 0.375 |
| trenches / 0 / 109 | L/W/L/D | 6:3/6:7/21:9/16:16 | 315.00/994.00/1392.00/2218.00 | 2.05/4.34 | 44.20/26.66 | 17.23/23.29/37.73/32.47 | 20.07/24.60/40.51/24.67 | 57.67/88.67/613.50 | 0.08/0.16 | shots<C (disclosure), NN<3, U2>L, NN<L, losses<C, closure120<C, closure240<C  18.75:9.38 | 0.500 |
| F1 / 1 / 107 | W/W/D/W | 2:2/7:0/13:1/12:4 | 438.00/454.00/466.00/1038.00 | 4.40/7.69 | 20.48/11.07 | 48.54/49.52/70.99/71.28 | 48.54/49.42/73.08/68.95 | 32.50/39.33/64.00 | 0.09/0.13 | shots<C, U2>L, NN<L  8.33:16.67 | 2.000 |
| F1 / 1 / 108 | W/W/D/W | 3:1/8:0/12:0/13:8 | 331.00/300.00/411.00/1027.00 | 4.31/6.14 | 16.97/13.19 | 45.86/55.58/61.41/71.27 | 45.06/55.58/74.44/71.27 | 46.67/37.83/70.50 | 0.09/0.12 | shots<C, U2>L, NN<L  12.50:8.33 | 0.667 |
| F1 / 1 / 109 | W/W/W/W | 5:2/7:0/9:2/4:11 | 298.00/194.00/512.00/835.00 | 4.43/6.14 | 17.79/10.17 | 48.18/41.51/69.31/72.95 | 54.68/41.51/70.58/69.86 | 48.00/34.67/54.17 | 0.12/0.12 | shots<C, U2>L, NN<L  20.83:16.67 | 0.800 |
| F1 / 2 / 107 | W/W/W/W | 5:1/3:4/10:4/6:4 | 288.00/231.00/205.00/486.00 | 4.00/4.34 | 22.76/26.00 | 25.49/NA/NA/58.01 | 28.51/NA/NA/58.25 | 61.50/86.43/98.55 | 0.16/0.56 | NN<L  20.83:25.00 | 1.200 |
| F1 / 2 / 108 | W/W/W/W | 3:4/4:4/12:4/1:4 | 306.00/302.00/247.00/215.00 | 3.37/4.26 | 15.51/26.76 | 28.94/31.14/58.05/63.55 | 27.23/NA/NA/NA | 80.95/87.47/105.22 | 0.17/0.48 | NN<L  12.50:100.00 | 8.000 |
| F1 / 2 / 109 | W/W/W/W | 4:3/2:4/4:4/4:4 | 330.00/418.00/132.00/314.00 | 3.84/4.34 | 13.86/26.05 | 27.79/36.14/NA/59.35 | 32.88/NA/NA/65.23 | 58.00/64.67/117.46 | 0.17/0.26 | NN<L  16.67:75.00 | 4.500 |
| F1 / 3 / 107 | W/W/W/W | 7:1/6:6/11:0/16:6 | 553.00/355.00/421.00/719.00 | 3.90/4.32 | 13.32/17.89 | 11.98/NA/5.44/33.38 | 9.41/NA/5.44/NA | 46.50/167.11/17.50 | 0.22/1.06 | NN<L  29.17:16.67 | 0.571 |
| F1 / 3 / 108 | W/W/W/W | 5:2/13:6/11:2/11:6 | 288.00/495.00/581.00/508.00 | 3.33/5.92 | 15.95/16.92 | 11.82/NA/9.03/40.23 | 9.34/NA/7.75/NA | 43.67/107.62/21.33 | 0.13/1.41 | shots<C, NN<L  20.83:33.33 | 1.600 |
| F1 / 3 / 109 | W/W/W/L | 6:2/11:6/11:2/23:1 | 708.00/575.00/552.00/1073.00 | 3.26/4.29 | 16.42/12.28 | 11.80/36.81/9.90/36.48 | 8.47/NA/7.75/37.98 | 52.17/105.99/18.83 | 0.17/0.96 | U2>L, NN<L  25.00:33.33 | 1.333 |
| F1 / 4 / 107 | W/W/W/W | 6:0/13:0/10:0/10:6 | 240.00/272.00/213.00/497.00 | 4.31/4.72 | 7.91/17.57 | 14.49/20.56/13.91/36.13 | 24.77/20.56/12.73/30.46 | 42.00/24.33/21.17 | 0.13/0.33 | NN<L  25.00:0.00 | 0.000 |
| F1 / 4 / 108 | W/W/W/W | 8:5/11:6/11:1/17:3 | 413.00/436.00/262.00/425.00 | 4.29/4.86 | 11.26/15.82 | 14.48/41.61/17.49/34.15 | 34.69/NA/12.52/31.13 | 51.17/81.35/23.50 | 0.28/0.80 | NN<L  33.33:83.33 | 2.500 |
| F1 / 4 / 109 | W/W/W/W | 6:1/8:6/10:0/10:3 | 247.00/581.00/172.00/497.00 | 4.31/5.04 | 5.71/14.74 | 15.04/44.70/7.49/34.24 | 28.48/43.42/4.31/32.43 | 45.83/67.67/19.00 | 0.15/0.56 | NN<L  25.00:16.67 | 0.667 |
| F1 / 5 / 107 | W/W/W/W | 8:4/15:7/15:2/15:2 | 817.00/1187.00/806.00/1459.00 | 4.01/5.07 | 4.06/11.89 | 33.60/66.81/68.59/60.39 | 29.73/67.36/69.22/61.22 | 64.33/49.00/41.17 | 0.23/0.66 | NN<L  33.33:50.00 | 1.500 |
| F1 / 5 / 108 | W/W/L/W | 6:3/15:8/17:0/12:8 | 432.00/807.00/564.00/1224.00 | 4.04/4.78 | 6.21/15.45 | 32.32/62.42/67.51/62.45 | 40.99/59.69/67.35/63.83 | 52.00/63.01/36.00 | 0.18/0.77 | shots<C, NN<L  25.00:37.50 | 1.500 |
| F1 / 5 / 109 | W/W/W/W | 7:3/9:1/12:2/10:8 | 433.00/485.00/644.00/1149.00 | 4.00/5.08 | 5.47/12.80 | 31.63/60.19/68.30/59.78 | 30.78/59.69/68.06/59.72 | 66.33/37.00/42.00 | 0.18/0.23 | shots<C, NN<L  29.17:37.50 | 1.286 |
| F1 / 6 / 107 | W/W/W/W | 11:1/8:8/9:1/2:8 | 407.00/596.00/338.00/404.00 | 4.51/4.32 | 26.42/32.72 | 14.41/38.75/45.56/50.15 | 18.74/NA/45.18/NA | 58.67/80.82/30.00 | 0.22/0.65 | none  45.83:12.50 | 0.273 |
| F1 / 6 / 108 | W/W/W/W | 8:1/4:8/15:3/14:7 | 329.00/338.00/497.00/727.00 | 4.51/4.45 | 23.50/16.79 | 14.05/41.38/47.07/43.99 | 13.95/NA/46.83/48.36 | 54.67/131.53/29.83 | 0.16/0.77 | shots<C, U2>L  33.33:12.50 | 0.375 |
| F1 / 6 / 109 | W/W/W/W | 6:0/7:0/13:1/14:6 | 333.00/158.00/427.00/638.00 | 4.32/5.74 | 24.00/10.79 | 14.38/21.74/46.80/48.36 | 16.83/21.74/46.66/50.35 | 65.67/25.83/31.00 | 0.16/0.16 | shots<C, U2>L, NN<L  25.00:0.00 | 0.000 |
| F1 / 7 / 107 | W/W/W/W | 1:3/7:6/6:1/7:4 | 760.00/593.00/749.00/553.00 | 4.16/4.54 | 20.53/15.58 | 44.40/61.30/65.26/72.39 | 44.40/NA/63.76/73.40 | 30.17/99.50/18.00 | 0.14/1.33 | U2>L, NN<L  6.25:50.00 | 8.000 |
| F1 / 7 / 108 | W/W/W/W | 5:1/10:6/7:1/3:6 | 774.00/920.00/513.00/999.00 | 4.32/6.15 | 14.10/11.54 | 39.38/64.75/63.05/71.33 | 35.46/NA/64.13/71.60 | 38.50/64.39/17.00 | 0.17/1.11 | U2>L, NN<L  31.25:16.67 | 0.533 |
| F1 / 7 / 109 | W/W/W/L | 3:2/3:6/9:1/12:1 | 906.00/592.00/754.00/1138.00 | 4.32/6.10 | 13.65/8.68 | 35.61/66.86/63.01/66.23 | 35.43/NA/61.38/67.24 | 41.83/67.30/17.83 | 0.18/0.61 | U2>L, NN<L  18.75:33.33 | 1.778 |
| F1 / 8 / 107 | L/W/L/L | 8:1/3:1/10:1/11:3 | 452.00/279.00/435.00/384.00 | 4.32/5.00 | 12.90/13.31 | 22.43/32.53/54.99/52.04 | 39.78/32.53/55.41/41.36 | 42.33/18.17/27.50 | 0.23/0.11 | NN<L  50.00:10.00 | 0.200 |
| F1 / 8 / 108 | L/W/L/L | 8:0/5:0/10:1/13:3 | 404.00/225.00/468.00/897.00 | 4.32/5.02 | 12.29/5.87 | 22.53/34.70/56.81/46.91 | 23.11/34.70/56.44/41.57 | 49.50/20.50/26.17 | 0.22/0.11 | shots<C, U2>L, NN<L  50.00:0.00 | 0.000 |
| F1 / 8 / 109 | W/W/W/L | 5:1/3:0/6:3/11:1 | 341.00/120.00/381.00/461.00 | 4.32/5.02 | 14.71/9.26 | 22.44/24.30/56.97/48.57 | 45.21/24.30/56.97/55.88 | 34.17/18.17/27.83 | 0.15/0.07 | shots<C, U2>L, NN<L  31.25:10.00 | 0.320 |
| F1 / 9 / 107 | W/W/W/W | 8:0/9:0/15:2/8:10 | 431.00/489.00/488.00/676.00 | 4.45/4.52 | 3.57/17.74 | 48.53/61.86/73.35/74.95 | 51.20/58.47/72.96/75.67 | 65.50/45.00/60.17 | 0.15/0.19 | shots<C, NN<L  33.33:0.00 | 0.000 |
| F1 / 9 / 108 | W/W/W/W | 6:0/12:1/11:1/12:5 | 399.00/704.00/396.00/854.00 | 4.21/4.53 | 12.19/14.39 | 44.59/62.73/74.77/76.56 | 52.55/60.89/73.53/74.44 | 61.33/45.00/53.17 | 0.12/0.25 | NN<L  25.00:0.00 | 0.000 |
| F1 / 9 / 109 | W/W/W/W | 8:0/11:1/14:4/9:2 | 483.00/359.00/587.00/448.00 | 4.52/4.82 | 4.92/11.32 | 42.48/54.58/74.54/72.36 | 43.45/54.58/72.58/73.47 | 59.00/36.33/55.17 | 0.14/0.26 | shots<C, NN<L  33.33:0.00 | 0.000 |
| F1 / 10 / 107 | L/L/L/L | 7:0/8:1/11:3/11:4 | 267.00/299.00/443.00/513.00 | 4.52/5.59 | 5.52/9.30 | 17.85/31.61/53.77/44.73 | 28.18/35.48/49.67/43.30 | 42.17/29.17/29.83 | 0.15/0.24 | shots<C, NN<L  43.75:0.00 | 0.000 |
| F1 / 10 / 108 | L/W/L/L | 10:0/4:2/13:1/12:0 | 343.00/218.00/468.00/504.00 | 4.52/5.87 | 8.36/5.34 | 17.14/23.74/51.61/47.17 | 33.35/23.74/50.59/45.75 | 37.67/21.67/30.33 | 0.23/0.16 | shots<C, U2>L, NN<L  62.50:0.00 | 0.000 |
| F1 / 10 / 109 | W/D/L/W | 5:0/6:0/10:1/7:3 | 283.00/310.00/237.00/349.00 | 4.52/4.51 | 4.84/15.15 | 21.22/16.42/48.16/45.78 | 33.37/14.81/48.38/41.30 | 35.50/25.33/35.50 | 0.13/0.13 | none  31.25:0.00 | 0.000 |
| F1 / 11 / 107 | W/W/W/W | 7:1/5:6/11:6/1:6 | 1112.00/569.00/1189.00/460.00 | 4.05/4.50 | 8.45/17.94 | 25.91/59.44/56.50/64.79 | 24.06/NA/60.86/NA | 40.33/81.67/46.99 | 0.20/0.68 | shots<C, NN<L  29.17:16.67 | 0.571 |
| F1 / 11 / 108 | W/W/W/W | 6:2/7:6/8:6/16:4 | 1347.00/375.00/1045.00/1559.00 | 4.05/5.22 | 8.69/17.11 | 25.91/NA/56.08/59.64 | 24.26/NA/59.71/55.94 | 37.50/128.12/47.56 | 0.23/1.23 | NN<L  25.00:33.33 | 1.333 |
| F1 / 11 / 109 | W/W/W/W | 6:1/8:6/16:6/11:6 | 704.00/744.00/1216.00/1536.00 | 4.00/5.83 | 9.11/10.50 | 29.02/62.95/57.62/56.65 | 24.28/NA/58.08/54.94 | 39.17/86.02/61.30 | 0.16/0.78 | shots<C, NN<L  25.00:16.67 | 0.667 |
| F1 / 12 / 107 | W/W/W/W | 1:4/6:4/6:4/4:3 | 214.00/343.00/187.00/379.00 | 4.22/6.00 | 2.61/14.46 | 54.05/75.96/NA/86.25 | 55.90/NA/NA/74.44 | 63.27/82.16/69.57 | 0.23/0.58 | NN<L  6.25:100.00 | 16.000 |
| F1 / 12 / 108 | W/W/W/W | 3:3/0:4/8:4/1:0 | 389.00/330.00/706.00/186.00 | 4.77/4.34 | 10.33/18.96 | 52.78/NA/67.45/89.59 | 55.60/NA/76.61/88.38 | 44.33/119.36/33.07 | 0.23/0.52 | shots<C  18.75:75.00 | 4.000 |
| F1 / 12 / 109 | W/W/W/W | 6:3/0:4/3:4/6:0 | 358.00/367.00/573.00/425.00 | 4.00/4.40 | 7.26/16.99 | 47.14/90.06/76.86/90.21 | 56.93/NA/NA/88.01 | 38.83/108.18/37.99 | 0.27/0.53 | shots<C, NN<L  37.50:75.00 | 2.000 |
| F1 / 13 / 107 | L/W/L/L | 6:1/5:2/14:3/13:1 | 529.00/523.00/739.00/1204.00 | 5.00/5.00 | 9.28/9.25 | 47.19/47.58/66.23/65.58 | 41.88/47.58/68.90/66.69 | 51.17/23.67/37.50 | 0.16/0.15 | shots<C, U2>L  37.50:8.33 | 0.222 |
| F1 / 13 / 108 | W/L/L/L | 4:1/5:0/14:0/8:3 | 734.00/210.00/654.00/1434.00 | 4.71/5.71 | 15.47/3.67 | 47.75/47.80/66.57/63.91 | 45.34/47.80/70.70/64.42 | 34.33/22.33/39.50 | 0.11/0.11 | U2>L, NN<L  25.00:8.33 | 0.333 |
| F1 / 13 / 109 | W/L/L/L | 3:1/5:0/9:1/9:2 | 746.00/303.00/607.00/990.00 | 4.91/5.45 | 13.29/4.40 | 45.35/47.41/60.83/65.98 | 46.50/47.41/67.76/68.18 | 41.50/20.83/40.50 | 0.11/0.10 | U2>L, NN<L  18.75:8.33 | 0.444 |
| F1 / 14 / 107 | L/D/L/W | 12:1/11:3/12:3/7:4 | 937.00/906.00/592.00/634.00 | 4.31/4.40 | 8.56/20.89 | 48.12/62.58/63.95/79.18 | 55.20/63.36/63.79/81.42 | 39.00/26.00/31.67 | 0.45/0.58 | NN<L  75.00:12.50 | 0.167 |
| F1 / 14 / 108 | W/W/W/W | 7:1/9:3/8:2/7:5 | 908.00/708.00/411.00/488.00 | 4.00/4.40 | 3.60/25.73 | 26.50/63.70/65.23/79.88 | 36.47/63.70/64.67/74.64 | 37.33/26.67/30.67 | 0.22/0.43 | NN<L  43.75:12.50 | 0.286 |
| F1 / 14 / 109 | W/L/D/W | 6:2/10:1/10:2/5:5 | 922.00/838.00/658.00/539.00 | 3.94/4.40 | 4.20/18.04 | 31.05/64.06/66.37/78.07 | 26.44/64.89/64.67/78.99 | 34.00/25.17/26.17 | 0.18/0.42 | NN<L  37.50:25.00 | 0.667 |
| F1 / 15 / 107 | L/L/L/L | 7:0/10:1/12:0/10:2 | 386.00/448.00/360.00/528.00 | 4.48/6.00 | 4.67/8.53 | 38.31/53.91/60.45/57.24 | 38.72/53.85/60.45/50.88 | 46.33/20.17/24.67 | 0.16/0.31 | NN<L  43.75:0.00 | 0.000 |
| F1 / 15 / 108 | L/L/L/L | 8:0/8:0/12:2/11:1 | 383.00/433.00/495.00/621.00 | 4.51/5.00 | 5.06/10.51 | 38.26/54.67/59.96/54.86 | 29.79/54.67/61.03/54.20 | 43.33/22.33/28.50 | 0.15/0.21 | shots<C, NN<L  50.00:0.00 | 0.000 |
| F1 / 15 / 109 | D/L/L/L | 4:0/9:2/13:0/8:1 | 368.00/470.00/537.00/524.00 | 4.30/6.00 | 5.28/8.10 | 38.32/53.79/63.75/55.88 | 38.40/53.25/67.64/51.15 | 39.83/19.50/30.50 | 0.09/0.28 | shots<C, NN<L  25.00:0.00 | 0.000 |
| F1 / 16 / 107 | W/W/W/L | 4:2/3:8/4:1/12:1 | 225.00/551.00/227.00/353.00 | 4.40/4.40 | 11.45/11.51 | 13.67/39.96/18.23/37.53 | 17.22/NA/18.23/30.89 | 40.33/62.01/24.00 | 0.18/0.76 | shots<C  25.00:25.00 | 1.000 |
| F1 / 16 / 108 | W/W/W/L | 6:1/4:8/4:0/11:1 | 268.00/378.00/158.00/426.00 | 4.40/5.00 | 8.98/13.26 | 13.76/NA/1.80/28.58 | 17.55/NA/1.80/28.71 | 46.83/96.10/19.00 | 0.20/1.14 | NN<L  37.50:12.50 | 0.333 |
| F1 / 16 / 109 | W/W/W/W | 7:0/10:3/9:2/11:4 | 282.00/355.00/298.00/440.00 | 4.40/4.82 | 9.44/7.79 | 13.67/36.23/22.35/30.37 | 25.14/35.35/22.30/18.99 | 37.17/28.17/20.67 | 0.19/0.47 | shots<C, U2>L, NN<L  43.75:0.00 | 0.000 |
| F1 / 17 / 107 | W/W/D/W | 5:0/6:1/12:0/18:9 | 386.00/170.00/219.00/1148.00 | 4.29/6.00 | 12.97/9.41 | 26.20/18.46/52.20/47.24 | 24.59/18.46/52.20/47.77 | 45.33/27.17/43.33 | 0.10/0.11 | U2>L, NN<L  20.83:0.00 | 0.000 |
| F1 / 17 / 108 | W/W/W/W | 11:0/7:0/9:1/17:6 | 514.00/225.00/294.00/861.00 | 4.44/6.00 | 14.53/4.99 | 30.39/16.49/51.82/44.48 | 39.86/16.49/51.96/43.45 | 47.00/27.83/57.17 | 0.22/0.12 | U2>L, NN<L  45.83:0.00 | 0.000 |
| F1 / 17 / 109 | W/W/L/L | 7:3/6:1/21:1/20:6 | 477.00/273.00/356.00/1138.00 | 4.29/6.00 | 6.38/6.16 | 26.76/18.67/51.56/47.36 | 34.51/18.47/51.75/47.95 | 42.17/23.67/44.33 | 0.18/0.12 | U2>L, NN<L  29.17:25.00 | 0.857 |
| F1 / 18 / 107 | W/W/D/L | 13:2/7:3/13:1/20:3 | 610.00/503.00/286.00/1103.00 | 5.22/5.00 | 10.38/5.96 | 18.97/26.90/52.00/21.81 | 27.44/26.90/52.00/15.68 | 63.83/31.33/50.50 | 0.29/0.20 | U2>L  54.17:16.67 | 0.308 |
| F1 / 18 / 108 | W/W/L/L | 7:1/8:4/20:1/18:4 | 707.00/773.00/513.00/829.00 | 5.24/5.71 | 4.27/4.22 | 17.25/22.12/48.24/21.49 | 24.86/19.41/48.24/6.99 | 58.67/32.83/60.50 | 0.18/0.26 | U2>L, NN<L  29.17:8.33 | 0.286 |
| F1 / 18 / 109 | W/W/L/L | 8:3/9:2/15:2/19:3 | 498.00/475.00/303.00/1062.00 | 5.00/5.48 | 7.53/5.85 | 17.15/19.43/50.89/28.06 | 21.77/19.43/50.89/36.69 | 72.00/33.33/40.67 | 0.20/0.22 | U2>L, NN<L  33.33:25.00 | 0.750 |
| F1 / 19 / 107 | W/W/W/L | 5:0/10:2/11:5/24:2 | 313.00/715.00/447.00/827.00 | 4.35/5.04 | 17.73/11.10 | 14.52/35.93/29.23/35.39 | 14.27/34.60/28.97/40.79 | 74.17/48.17/28.00 | 0.09/0.28 | shots<C, U2>L, NN<L  20.83:0.00 | 0.000 |
| F1 / 19 / 108 | W/D/W/D | 8:0/13:1/7:9/18:6 | 471.00/433.00/526.00/598.00 | 4.35/6.00 | 22.19/10.35 | 14.23/26.91/29.85/33.37 | 12.28/26.91/30.89/26.55 | 67.83/46.83/35.50 | 0.20/0.28 | shots<C, U2>L, NN<L  33.33:0.00 | 0.000 |
| F1 / 19 / 109 | W/W/W/L | 9:1/10:1/15:8/20:6 | 326.00/427.00/547.00/713.00 | 4.40/6.39 | 12.41/15.44 | 15.30/35.55/31.03/35.08 | 19.08/33.58/21.58/36.00 | 73.67/50.83/35.33 | 0.17/0.23 | shots<C, NN<L  37.50:8.33 | 0.222 |
| F1 / 20 / 107 | W/W/W/L | 6:1/14:4/14:6/22:3 | 448.00/542.00/383.00/723.00 | 4.40/4.95 | 17.38/11.77 | 12.36/30.92/43.70/39.59 | 14.37/27.45/44.04/37.20 | 49.67/43.33/36.33 | 0.15/0.43 | U2>L, NN<L  25.00:10.00 | 0.400 |
| F1 / 20 / 108 | W/W/W/W | 9:3/12:5/16:6/17:6 | 546.00/433.00/484.00/922.00 | 4.51/4.53 | 19.80/16.83 | 12.24/28.31/44.10/37.48 | 12.11/21.44/45.21/37.23 | 56.17/45.50/39.50 | 0.27/0.39 | U2>L, NN<L  37.50:30.00 | 0.800 |
| F1 / 20 / 109 | W/W/W/W | 4:3/10:0/20:7/15:4 | 283.00/355.00/602.00/752.00 | 4.32/5.06 | 17.99/9.41 | 12.08/28.94/47.53/34.88 | 30.23/24.57/44.62/40.66 | 53.50/37.33/36.67 | 0.15/0.22 | shots<C, U2>L, NN<L  16.67:30.00 | 1.800 |
| F1 / 21 / 107 | L/L/W/L | 6:0/5:0/2:0/11:3 | 227.00/172.00/54.00/434.00 | 5.00/5.02 | 5.59/3.41 | 20.81/25.38/2.99/36.33 | 27.32/25.38/2.99/35.80 | 37.83/22.50/8.50 | 0.13/0.09 | U2>L, NN<L  37.50:0.00 | 0.000 |
| F1 / 21 / 108 | L/W/W/L | 9:0/4:1/2:1/8:1 | 275.00/322.00/33.00/347.00 | 5.00/5.00 | 5.39/3.50 | 20.35/32.91/3.36/24.94 | 16.82/28.56/3.36/25.20 | 42.33/21.00/7.67 | 0.21/0.15 | U2>L  56.25:0.00 | 0.000 |
| F1 / 21 / 109 | L/D/W/L | 8:1/4:0/2:0/16:3 | 458.00/322.00/65.00/538.00 | 5.00/5.00 | 7.19/7.68 | 16.83/26.39/3.27/36.01 | 11.37/26.39/3.27/46.80 | 49.00/20.83/7.33 | 0.23/0.09 | none  50.00:8.33 | 0.167 |
| F1 / 22 / 107 | W/W/W/W | 6:3/10:0/6:1/12:3 | 586.00/473.00/401.00/988.00 | 4.00/5.10 | 13.27/11.16 | 40.03/53.02/76.43/82.67 | 45.77/53.02/76.43/71.47 | 60.00/35.67/49.00 | 0.15/0.19 | U2>L, NN<L  25.00:30.00 | 1.200 |
| F1 / 22 / 108 | W/W/W/L | 6:2/11:1/6:0/20:3 | 614.00/899.00/554.00/1493.00 | 4.00/4.75 | 10.08/14.73 | 38.87/69.43/75.82/74.33 | 39.44/68.64/75.17/75.00 | 67.67/46.83/44.67 | 0.17/0.26 | NN<L  25.00:20.00 | 0.800 |
| F1 / 22 / 109 | W/W/W/W | 7:1/9:1/8:1/8:7 | 508.00/686.00/284.00/1498.00 | 4.00/5.61 | 8.69/16.99 | 38.22/56.45/75.31/74.34 | 42.49/55.99/75.43/73.07 | 76.17/43.17/54.17 | 0.17/0.22 | NN<L  29.17:10.00 | 0.343 |
| F1 / 23 / 107 | W/W/W/W | 14:3/8:6/20:5/7:6 | 1183.00/521.00/727.00/394.00 | 4.19/4.26 | 13.32/23.36 | 35.27/54.64/51.53/52.93 | 43.29/NA/53.47/74.88 | 55.17/122.41/22.50 | 0.38/0.95 | NN<L  58.33:50.00 | 0.857 |
| F1 / 23 / 108 | W/W/W/W | 5:6/8:6/14:2/4:6 | 663.00/616.00/480.00/313.00 | 4.00/3.78 | 12.53/27.55 | 35.13/50.03/52.52/53.06 | 44.88/NA/52.64/NA | 49.97/93.54/23.83 | 0.34/0.77 | none  20.83:100.00 | 4.800 |
| F1 / 23 / 109 | W/W/W/W | 4:6/15:2/14:2/8:5 | 333.00/1020.00/478.00/674.00 | 4.32/4.13 | 7.28/24.16 | 46.21/40.30/49.43/48.41 | NA/36.21/49.43/52.44 | 133.12/38.33/23.83 | 0.64/0.50 | shots<C  16.67:100.00 | 6.000 |
| F1 / 24 / 107 | W/W/L/L | 6:3/6:1/13:3/15:2 | 381.00/91.00/432.00/456.00 | 5.24/5.00 | 10.11/8.91 | 15.19/24.95/46.33/36.81 | 23.28/24.95/41.79/36.04 | 41.83/24.67/28.17 | 0.25/0.18 | shots<C, U2>L  37.50:30.00 | 0.800 |
| F1 / 24 / 108 | W/L/L/L | 4:2/8:1/11:2/16:4 | 310.00/299.00/436.00/411.00 | 5.24/5.00 | 10.42/13.04 | 15.07/29.40/42.42/24.65 | 23.02/29.40/39.49/38.29 | 33.00/24.33/28.67 | 0.18/0.25 | shots<C  25.00:20.00 | 0.800 |
| F1 / 24 / 109 | W/W/W/L | 4:2/6:3/8:3/14:3 | 397.00/390.00/260.00/395.00 | 4.52/5.00 | 13.47/15.58 | 15.12/33.35/42.05/36.75 | 23.72/34.33/41.81/39.46 | 35.83/38.00/28.33 | 0.18/0.32 | NN<L  25.00:20.00 | 0.800 |
| F1 / 25 / 107 | W/W/W/W | 1:4/4:4/10:3/5:4 | 214.00/358.00/355.00/282.00 | 4.29/5.24 | 12.20/15.73 | 46.42/72.87/57.03/83.21 | NA/NA/69.66/110.60 | 41.78/104.09/41.00 | 0.26/0.71 | shots<C, NN<L  6.25:100.00 | 16.000 |
| F1 / 25 / 108 | W/W/W/W | 4:0/2:4/10:4/1:2 | 251.00/323.00/715.00/225.00 | 4.39/6.00 | 13.39/19.51 | 38.74/69.27/57.96/80.60 | 42.25/NA/67.94/86.95 | 50.17/82.38/36.45 | 0.14/0.61 | shots<C, NN<L  25.00:0.00 | 0.000 |
| F1 / 25 / 109 | W/W/W/W | 3:4/5:4/5:4/5:3 | 340.00/357.00/459.00/542.00 | 4.08/5.81 | 21.69/20.23 | 53.93/72.08/57.53/84.30 | NA/NA/NA/86.24 | 56.23/78.73/41.68 | 0.41/0.76 | shots<C, U2>L, NN<L  18.75:100.00 | 5.333 |
| F1 / 26 / 107 | W/W/W/W | 7:3/5:10/10:10/11:2 | 326.00/598.00/515.00/545.00 | 4.47/5.00 | 9.28/11.83 | 19.78/40.82/46.78/34.50 | 16.17/NA/NA/34.21 | 45.83/120.81/78.28 | 0.19/0.66 | shots<C, NN<L  29.17:30.00 | 1.029 |
| F1 / 26 / 108 | W/W/D/W | 12:3/6:10/17:3/15:7 | 390.00/482.00/540.00/648.00 | 4.82/5.00 | 9.07/13.97 | 14.77/36.42/44.56/33.27 | 21.60/NA/43.10/35.54 | 56.83/153.56/34.00 | 0.31/0.76 | shots<C, NN<L  50.00:30.00 | 0.600 |
| F1 / 26 / 109 | W/W/D/L | 9:1/7:10/19:5/21:4 | 284.00/403.00/538.00/650.00 | 4.52/4.52 | 7.05/14.74 | 18.16/34.01/48.08/35.90 | 15.30/NA/47.00/32.75 | 55.67/99.49/33.00 | 0.18/0.68 | shots<C, NN<L  37.50:10.00 | 0.267 |
| F1 / 27 / 107 | W/W/W/W | 4:5/1:6/8:6/11:6 | 397.00/419.00/216.00/402.00 | 4.29/4.59 | 12.67/11.58 | 14.71/41.61/NA/37.85 | 20.26/NA/NA/NA | 55.33/153.78/134.86 | 0.20/0.61 | U2>L, NN<L  16.67:83.33 | 5.000 |
| F1 / 27 / 108 | W/W/W/W | 5:6/8:6/7:6/9:6 | 389.00/323.00/227.00/463.00 | 4.35/4.26 | 19.81/21.81 | 13.83/NA/NA/35.32 | 27.79/NA/NA/NA | 51.94/175.00/132.83 | 0.22/0.94 | none  20.83:100.00 | 4.800 |
| F1 / 27 / 109 | W/W/W/W | 6:6/2:6/10:2/19:5 | 481.00/213.00/354.00/733.00 | 3.97/4.40 | 17.06/16.52 | 14.03/NA/40.77/36.64 | 23.99/NA/40.44/29.59 | 56.04/206.53/32.00 | 0.24/0.83 | U2>L, NN<L  25.00:100.00 | 4.000 |
| F1 / 28 / 107 | W/W/W/L | 9:2/11:2/8:1/21:2 | 456.00/266.00/142.00/517.00 | 4.32/6.00 | 16.73/7.58 | 9.37/33.47/0.00/36.34 | 8.73/33.43/0.00/32.02 | 73.33/33.83/11.50 | 0.20/0.29 | U2>L, NN<L  37.50:20.00 | 0.533 |
| F1 / 28 / 108 | W/W/W/L | 12:2/14:2/5:2/23:4 | 445.00/471.00/154.00/957.00 | 4.32/4.92 | 16.42/17.47 | 9.37/32.09/2.11/33.72 | 20.92/32.09/0.00/29.98 | 97.83/36.00/9.83 | 0.28/0.40 | NN<L  50.00:20.00 | 0.400 |
| F1 / 28 / 109 | W/W/W/L | 10:0/10:1/7:0/22:6 | 281.00/219.00/124.00/801.00 | 4.29/5.00 | 15.63/12.90 | 9.06/35.21/0.00/32.88 | 10.15/35.21/0.00/38.11 | 60.67/42.83/11.17 | 0.19/0.27 | U2>L, NN<L  41.67:0.00 | 0.000 |
| F1 / 29 / 107 | W/W/W/D | 5:1/9:8/17:3/18:2 | 590.00/635.00/924.00/1771.00 | 4.29/5.00 | 17.75/11.44 | 36.68/62.68/52.46/63.11 | 41.45/NA/64.23/61.44 | 62.33/65.11/41.17 | 0.13/0.67 | shots<C, U2>L, NN<L  20.83:12.50 | 0.600 |
| F1 / 29 / 108 | W/W/W/W | 5:4/12:2/11:1/6:8 | 675.00/980.00/641.00/663.00 | 4.29/5.55 | 17.35/14.32 | 41.14/56.69/59.78/69.80 | 43.32/56.59/63.80/79.56 | 69.17/37.83/41.67 | 0.20/0.33 | U2>L, NN<L  20.83:50.00 | 2.400 |
| F1 / 29 / 109 | W/W/W/W | 2:1/17:2/11:1/17:5 | 906.00/1104.00/547.00/1815.00 | 4.29/5.90 | 19.30/10.55 | 38.60/58.37/59.81/59.68 | 38.54/55.07/63.90/53.55 | 71.67/35.17/41.83 | 0.08/0.53 | U2>L, NN<L  8.33:12.50 | 1.500 |
| F1 / 30 / 107 | W/L/W/W | 7:2/10:2/3:1/5:2 | 420.00/464.00/212.00/342.00 | 4.40/5.22 | 7.26/9.41 | 54.92/57.46/77.69/80.14 | 54.69/59.63/77.69/82.41 | 83.67/31.50/48.50 | 0.22/0.33 | NN<L  43.75:20.00 | 0.457 |
| F1 / 30 / 108 | W/D/W/W | 4:1/6:0/6:1/2:8 | 535.00/249.00/248.00/371.00 | 4.32/4.47 | 20.18/19.50 | 52.00/59.31/76.22/89.98 | 48.12/56.03/76.17/91.70 | 75.33/33.33/31.83 | 0.17/0.15 | U2>L, NN<L  25.00:10.00 | 0.400 |
| F1 / 30 / 109 | W/W/W/L | 3:3/8:4/8:3/9:1 | 377.00/504.00/453.00/557.00 | 4.49/4.48 | 5.41/11.80 | 56.67/57.96/77.57/80.76 | 57.39/57.96/76.59/80.23 | 78.00/31.33/60.50 | 0.15/0.34 | shots<C  18.75:30.00 | 1.600 |


## Verification

- Full `./scripts/test-sim.sh`: PASS, exit0,240.416 s. Optional mechanisms above are separate and fail.
- `python3 -m unittest discover -s tests -p "test_*.py"`: PASS,63 tests.
- Legacy/candidate90 authored digests: 40/40 unchanged, both maps seeds100–109. Exact archived/new manifests and digests in `authored-parity/parity.json`.
- Drills trace on/off: 3/3 matches (Works107, Trenches107, F1 draw1/107), `trace-parity.json`.
- Archived candidate90 order/hit references:110/110 traced manifests revalidated against their untraced historical baselines. These are preserved reference runs, not newly simulated cognition measurements; `candidate-reference-revalidation.json`.
- Engagement guard: 110 completed runs, 0 zero-shot battles; guard threshold3 zero-shot runs per10-case block remained active. Details and every map/family guard are in `engagement-summary.json`.
- Controller defaults and manifest reruns: see `defaults.log` and `measurement-status.json` for exit code. No default was changed.
- Frozen-source comparison, original squad assertion files and all protected hashes pass. All110 measured manifests identify the frozen build; `measured-build-check.json`. `git diff --check` passes.
- Windows lab and Unreal not attempted, per instruction; native verification remains with the architect.

## Implementation and limitations

The platoon planner is isolated in `Sim/PlatoonTaskSim` and reads a commander snapshot, received squad reports, known geometry and its own task/claim state. Contact grouping is a Kruskal minimum-spanning forest cut at20 m. Task nodes carry parent, priority, capacity, activation, status, area and weapon filter. Assignment uses planned route cost, coordination penalties, a capacity-slot balance term and18 units of stickiness. It assesses activation changes or each5 s; directives live75 s and renew with15 s remaining. Renewals retain mission identity and accepted area/corridor. The platoon branch is drills-only; historical controllers retain their prior branch.

The squad receives its area and corridor through the directive; this replaces deployment bands after receipt, including trenches. Until the first received directive it remains locally autonomous. Renewal does not itself reaccept a drill. Expiry degrades to a local squad area and autonomous movement. Phase-line information is carried in ordinary squad reports, then a directive amendment and existing lane message; it does not inspect an assault squad's hidden execution state. New state is hashed only in the drills conditional block.

This first build is **not a complete, accepted implementation of the Phase4 doctrine**. These gaps are explicit, not waived:

- The weapon filter makes the existing weapon-owning squad the fixing squad. There is no cross-squad weapon-team attachment to a different, better-positioned fixing squad. That is narrower than “choose the best fixing squad and attach the platoon weapon.”
- Merge exists as a task/directive with a target and rally/occupy behavior, but does not transfer surviving members into the receiving squad. This does not yet implement the full `Merge(squad into squad)` contract.
- Corridor claims add cost, not a hard exclusion or a guaranteed20 m centroid separation. P02 proves that soft costs alone do not meet the strict movement assertion. Rectangular areas enclose start and goal; they do not guarantee that every covered-route detour lies within that rectangle. P01's column-slot failures are consistent with this mismatch; the trace establishes allocation failure, not a unique causal attribution to the rectangle.
- With no company controller, the honest upward refusal is a `platoon_blocked` trace at the top represented command layer. There is no receiving company endpoint. Squad-to-platoon blocked reports still use production transport.
- Task status/activation and assignment are recalculated, but obsolete orders are allowed to expire rather than always receiving an immediate cancellation. Advance objectives follow the reported centroid, which can replace an uncompleted advance at the5 s assessment. The D01 trace shows such replacements. This is a lifecycle defect, not an intentional relaxation of commitment.
- Existing squad mechanism fixtures now encounter real platoon task allocation unless they already own an externally supplied mission. Their unchanged failures remain failures; they were not removed or granted a fixture-only controller bypass.
- P03 measures lift latency from receipt by the fixing leader (one further hop plus1 s), but its late-round check is on the original objective area. A full geometric check that no round crosses the assault lane is still missing. The test fails earlier because no phase-line receipt is produced, so the weaker downstream observation is not represented as a pass.
- The task diagnostics do not serialize the whole task tree or believed ratio into `trace.jsonl`; they record transitions/claims/refusals, and the state is in the in-memory record/digest. P05's commander mental-map trace is evidence of belief, not a substituted observer enemy count.

## Disagreements and stop rule

No disagreement with the one-build stop rule or the corrected doctrinal contract. The gaps above are implementation limitations/defects, not proposed changes to the plan. The P05 fixture's physical32 defenders do not imply that the commander believes32: its sampled mental-map estimate peaks at17.7957 at10 s. With14 initial active attackers this does not exercise a believed ratio below one half. It therefore fails to validate withdrawal; I do not infer a policy withdrawal failure solely from the omniscient strength ratio. Neither fixture nor policy was revised after measurement began.

The first CLI build command used `--help`, which this CLI does not support: compilation succeeded, the executable returned1 for the unsupported argument, then the same frozen binary ran the actual checks. The prefreeze P04 check initially counted a corporal's squad order as a platoon order; its observer filter was corrected to require the task-tree directive event. P04 then passes without changing succession behavior.

Phase3h used two local D08 attempts, no distribution between them. Phase4 used one frozen simulation source. No tuning followed the failed pairs or developing scoreboard. Existing authored layouts5–7, frozen lists and route evaluator hashes remain unchanged. No commit/reset/stash, Fable launcher, F2/F3, gun pickup or native/Unreal execution. Legacy remains the default; native verification stays with the architect.


## Code navigation

| File / line | Scope |
|---|---|
| `Unreal/Source/ArmyPrototype/Sim/PlatoonTaskSim.cpp:28` | bool Covered(const Map& map,const Soldier& k,const TacticalRoute& route){ |
| `Unreal/Source/ArmyPrototype/Sim/PlatoonTaskSim.cpp:49` | void Area(PlatoonDirective& d,const Map& map,Vec3 start,Vec3 goal,float half=16){ |
| `Unreal/Source/ArmyPrototype/Sim/PlatoonTaskSim.cpp:55` | std::vector<PlannedPlatoonOrder> PlanPlatoonTasks(const Soldier& l,const Map& map,const Config& config,Platoon |
| `Unreal/Source/ArmyPrototype/Sim/PlatoonTaskSim.cpp:59` | std::vector<PlannedPlatoonOrder> out;auto knowledge=WithTracks(l,time);std::vector<SquadSituation> squads; |
| `Unreal/Source/ArmyPrototype/Sim/PlatoonSim.cpp:192` | if(config.drills){const auto& p=f.command[squad].battleDrill;report.directive=local.platoonOrder.serial;report |
| `Unreal/Source/ArmyPrototype/Sim/PlatoonSim.cpp:224` | if(config.drills){ |
| `Unreal/Source/ArmyPrototype/Sim/DrillSim.cpp:276` | const bool received=higher.serial>cmd.platoonOrderSerial&&time<higher.expiresAt; |
| `Unreal/Source/ArmyPrototype/Sim/SquadDrillSim.cpp:291` | if(directive&&l.platoonOrder.liftFire&&p.action.active){ |
| `Unreal/Source/ArmyPrototype/Sim/CommandSim.cpp:456` | if(config.drills){const auto& p=f.command[f.soldiers[sender].squad].battleDrill;order.drillInstance=p.instance |
| `Unreal/Source/ArmyPrototype/Sim/Diagnostics.cpp:174` | i(p.platoonArea);i(p.platoonLift);i(p.platoonTaskNode);f(p.directiveUntil);f(p.believedEnemy);const auto& a=p. |
| `Unreal/Source/ArmyPrototype/Sim/PlatoonFixtures.cpp:4` | void MakePlatoonEncounter(const Config&,int id,Map& map,Frame& f){ |
| `tests/platoon_tests.h:6` | static void PlatoonP01(){ |
| `tests/platoon_tests.h:22` | static void PlatoonP02(){ |
| `tests/platoon_tests.h:36` | static void PlatoonP03(){ |
| `tests/platoon_tests.h:44` | static void PlatoonP04(){ |
| `tests/platoon_tests.h:52` | static void PlatoonP05(){ |
| `tests/platoon_tests.h:59` | static void PlatoonP06(){ |


## Commands and artifacts

Expanded per-run commands, return codes and paths are saved in `measurement-status.json`, authored `results.json`, `family.json`, `mechanisms/results.json`, `analysis-status.json`, parity JSON and `mechanism-traces.json`.

```sh
python3 tools/source_id.py
./scripts/test-sim.sh --platoon P04 # prefreeze integration check
./scripts/battle-lab.sh --help # compiled; CLI rejects this unsupported option
./scripts/test-sim.sh
python3 -m unittest discover -s tests -p "test_*.py"
python3 .local/phase4/run_mechanisms.py # P01–P06 and all20 squad selectors
python3 .local/phase4/measure.py
# measure expands to:
python3 .local/phase4/run_authored.py
python3 .local/phase4/parity.py .local/phase4/authored-parity .local/phase4/final/battle-lab
python3 tools/run_family.py --binary .local/phase4/final/battle-lab --out .local/phase4/f1-dev --family F1 --gen-seeds 1-30 --seeds 107-109 --controllers drills --seconds 360 --jobs 2 --trace
python3 tests/check_controller_defaults.py --binary .local/phase4/final/battle-lab --out .local/phase4/defaults
python3 .local/phase4/diagnose.py # same-binary mechanism traces, not another measured build
python3 .local/phase4/trace_findings.py
python3 .local/phase4/trace_checks.py
python3 .local/phase4/analyze.py
python3 .local/phase4/scoreboard.py
python3 tools/report_family.py .local/phase1/f1-dev/family.json .local/phase4/f1-dev/family.json --out .local/phase4/family-report.json --markdown .local/phase4/family-report.md
git diff --check
```

Final source fingerprint: `3bda3ace2c9dacdc`. Changes remain in the working tree. No second measured build or further phase follows this report.
