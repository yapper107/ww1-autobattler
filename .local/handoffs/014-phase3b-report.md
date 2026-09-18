# Plan 014 — Phase 3b slice report

**FAIL / not promoted.** The covered flank now commits and begins buddy rushes; D06, D10, D11 and D16 pass. D07–D09 fail. The unchanged D04 control and lifecycle pin also fail. All failures remain in the table and traces; no second measured build or post-measurement tactical edit was made. Legacy remains the playable default.

The paired scoreboard also fails: F1 loses 294.63 shots per battle (95% CI -402.18 to -204.18) and 6.97 total casualties (-9.32 to -4.92) against Phase2d. Closure at240 s regresses on F1 and both authored maps. All 110 runs engage; all 40 historical digests and 3 trace-parity cases match.

Entry fingerprint: `3231bd74bac2cef1`. Final measured fingerprint: `9b338688d4ab02e0`. Frozen source/tests: `.local/phase3b/final/`; entry snapshot: `entry/`; slice simulation patch: `simulation.patch`. Static checks confirm unchanged measured source/tests, the original Phase2 assertion bodies, and all protected hashes.

## Mechanism pairs and pins

| Selector | Result | Evidence |
|---|---|---|
| D01 | PASS | D01 moving=1611 spacing_share=0.934823 arrived=8 corridor_inside=1 |
| D02 | PASS | D02 report_only=1 30-50m=1 protected_trail=1 control_traveling=1 control_close=1 |
| D03 | PASS | D03 alternation=1 covered=1 maximum_bound=19.6994 far_early_bounds=0 |
| D04 | FAIL (assert abort) | D04 first_receipt=2.2 return_shooters_4s=7 all_cover=1 spacing=1 path_bound=1 assessment=1 bare_rear=0 |
| D05 | PASS | D05 support=1 incorrectly_blocked=0 weak_report=1 latency=3.9 |
| D06 | PASS | D06 established=1 lost=1 evidence=1 protected=4 silent_released=0 |
| D07 | FAIL (assert abort) | D07 phase_receipt=-1 lift_received=-1 late_original_area_rounds=0 no_signal_lift=0 |
| D08 | FAIL (assert abort) | D08 observer screened candidate routes=2 best blocked fraction=1; D08 accepted route observer blocked fraction=1; D08 covered_attack=1 moved=1 physical_angle=0 longest_rush=3.3 consolidate=0 reorganise=0 bare_attack=0 bare_report=1 |
| D09 | FAIL (assert abort) | D09 pause=1 resume_same=1 protected=0 continuous_pause=1 |
| D10 | PASS | D10 committed=1/1 alternatives=1/0 resolved=1 |
| D11 | PASS | D11 committed=1 frozen=1 continued=1 weak_failed=1 reformed=1 |
| D16 | PASS | D16 retreat=1 alternate=1 rear_distance=39.6056 complete=1 equal_break=0 |
| D17 | PASS | D17 independently allocatable protected slots=8; D17 scarce_occupied=5 ample_occupied=8 spacing=1 |
| lifecycle | FAIL (assert abort) | assertion in .local/phase3b/mechanisms/lifecycle.log |
| plumbing | PASS | all assertions passed |
| positions | PASS | Position service: authored layouts 0/5/6/7, reservations, area rejection and four templates PASS |
| sector | PASS | Sector position query: lane rejects; lane union objective disc accepts reachable covered flank |
| D12 | Deferred by instruction | No gun pickup implementation |

D08 adds an observer geometry check before simulation and a second check on the live accepted route. Each reports1.0 blocked fraction, against the0.6 requirement. Sector40–60 degrees and radius20–45 m are verified by the new sector test, with the original lane-only query as its negative control. These pass without replacing the failing assault-line/consolidation assertions.

## Individual criteria and distribution result

No significant regression versus Phase2d: **False**. Authored targets improved versus candidate90 (latest user reference): **False**. Authored targets improved versus Phase2d (review exit-paragraph alternative): **False**. Combined primary statistical exit: **False**. Overall slice fails because required mechanisms fail, independently of these flags.

| Set | Controller | Shots | Total casualties | NN median m | Under2 m % | Closure120/240 m | Azure orders/min | Hits/soldier-min |
|---|---|---:|---:|---:|---:|---|---:|---:|
| Works | candidate90 | 988.400 | 38.800 | 0.976 | 79.733 | 108.806/109.355 | 64.333 | 0.502 |
| Works | drills-phase2d | 973.800 | 14.400 | 5.413 | 3.885 | 73.419/75.803 | 88.717 | 0.142 |
| Works | drills-phase3b | 1144.900 | 11.000 | 7.396 | 5.728 | 78.728/60.803 | 86.250 | 0.131 |
| Works | legacy | 2306.500 | 38.000 | 6.539 | 16.440 | 94.741/91.292 | 210.150 | 0.468 |
| Trenches | candidate90 | 798.900 | 16.600 | 1.454 | 66.474 | 39.698/35.936 | 611.033 | 0.176 |
| Trenches | drills-phase2d | 495.600 | 6.500 | 2.657 | 36.501 | 25.134/27.685 | 78.217 | 0.084 |
| Trenches | drills-phase3b | 697.900 | 9.000 | 2.733 | 38.369 | 23.790/24.766 | 92.017 | 0.113 |
| Trenches | legacy | 1989.300 | 32.900 | 3.946 | 31.277 | 35.672/37.111 | 255.383 | 0.410 |
| F1 | candidate90 | 450.544 | 12.989 | 3.109 | 38.359 | 48.768/48.803 | 39.846 | 0.452 |
| F1 | drills-phase2d | 757.711 | 16.900 | 7.102 | 3.412 | 46.037/44.289 | 59.394 | 0.607 |
| F1 | drills-phase3b | 463.078 | 9.933 | 6.627 | 2.772 | 43.418/39.434 | 47.326 | 0.362 |
| F1 | legacy | 718.200 | 15.767 | 5.102 | 13.627 | 53.498/54.087 | 127.523 | 0.496 |

### Paired intervals

95% percentile paired intervals; F1 resamples generated-map clusters and authored maps resample battle seeds. Missing horizons are excluded pairwise and counts are disclosed. Inconclusive is not demonstrated equivalence.

| Set | Reference | Criterion | Paired n | Mean delta | CI95 | Finding |
|---|---|---|---:|---:|---|---|
| F1 | candidate90 | shots | 90 | 12.5333 | -65.4594 / 82.9953 | inconclusive |
| F1 | candidate90 | casualties_total | 90 | -3.0556 | -4.8892 / -1.2778 | regression |
| F1 | candidate90 | nearest_m | 90 | 3.5184 | 2.7705 / 4.2967 | improved |
| F1 | candidate90 | under_2m | 90 | -0.3559 | -0.4166 / -0.2929 | improved |
| F1 | candidate90 | closure_120s_m | 82 | -5.3620 | -11.9283 / 1.5914 | inconclusive |
| F1 | candidate90 | closure_240s_m | 67 | -8.5957 | -15.6222 / -0.8048 | regression |
| F1 | candidate90 | orders_azure_per_minute | 90 | 7.4805 | -0.7400 / 15.5573 | inconclusive |
| F1 | drills-phase2d | shots | 90 | -294.6333 | -402.1792 / -204.1758 | regression |
| F1 | drills-phase2d | casualties_total | 90 | -6.9667 | -9.3222 / -4.9219 | regression |
| F1 | drills-phase2d | nearest_m | 90 | -0.4751 | -1.0006 / 0.0609 | inconclusive |
| F1 | drills-phase2d | under_2m | 90 | -0.0064 | -0.0177 / 0.0044 | inconclusive |
| F1 | drills-phase2d | closure_120s_m | 84 | -2.1403 | -4.9640 / 0.2874 | inconclusive |
| F1 | drills-phase2d | closure_240s_m | 55 | -5.6170 | -10.1829 / -1.2415 | regression |
| F1 | drills-phase2d | orders_azure_per_minute | 90 | -12.0678 | -20.1203 / -4.4407 | improved |
| F1 | legacy | shots | 90 | -255.1222 | -361.0192 / -155.2081 | regression |
| F1 | legacy | casualties_total | 90 | -5.8333 | -7.8225 / -3.8997 | regression |
| F1 | legacy | nearest_m | 90 | 1.5246 | 1.0161 / 2.1014 | improved |
| F1 | legacy | under_2m | 90 | -0.1086 | -0.1263 / -0.0918 | improved |
| F1 | legacy | closure_120s_m | 86 | -9.7169 | -13.0433 / -6.6135 | regression |
| F1 | legacy | closure_240s_m | 65 | -11.0064 | -14.7394 / -7.0884 | regression |
| F1 | legacy | orders_azure_per_minute | 90 | -80.1966 | -94.4607 / -65.4385 | improved |
| Trenches | candidate90 | shots | 10 | -101.0000 | -390.5050 / 192.3525 | inconclusive |
| Trenches | candidate90 | casualties_total | 10 | -7.6000 | -11.2000 / -4.5000 | regression |
| Trenches | candidate90 | nearest_m | 10 | 1.2792 | 1.0661 / 1.4682 | improved |
| Trenches | candidate90 | under_2m | 10 | -0.2811 | -0.3284 / -0.2356 | improved |
| Trenches | candidate90 | closure_120s_m | 10 | -15.9075 | -17.6428 / -13.8658 | regression |
| Trenches | candidate90 | closure_240s_m | 10 | -11.1698 | -13.9581 / -8.1723 | regression |
| Trenches | candidate90 | orders_azure_per_minute | 10 | -519.0167 | -644.4604 / -397.0954 | improved |
| Trenches | drills-phase2d | shots | 10 | 202.3000 | -67.8775 / 476.1100 | inconclusive |
| Trenches | drills-phase2d | casualties_total | 10 | 2.5000 | -2.0000 / 6.4000 | inconclusive |
| Trenches | drills-phase2d | nearest_m | 10 | 0.0762 | -0.1402 / 0.2858 | inconclusive |
| Trenches | drills-phase2d | under_2m | 10 | 0.0187 | -0.0315 / 0.0635 | inconclusive |
| Trenches | drills-phase2d | closure_120s_m | 10 | -1.3434 | -3.1917 / 0.2202 | inconclusive |
| Trenches | drills-phase2d | closure_240s_m | 10 | -2.9192 | -5.3521 / -0.3835 | regression |
| Trenches | drills-phase2d | orders_azure_per_minute | 10 | 13.8000 | -0.4500 / 28.4000 | inconclusive |
| Trenches | legacy | shots | 10 | -1291.4000 | -1632.2200 / -969.6700 | regression |
| Trenches | legacy | casualties_total | 10 | -23.9000 | -29.3025 / -18.5000 | regression |
| Trenches | legacy | nearest_m | 10 | -1.2133 | -1.8837 / -0.5473 | regression |
| Trenches | legacy | under_2m | 10 | 0.0709 | 0.0146 / 0.1290 | regression |
| Trenches | legacy | closure_120s_m | 10 | -11.8823 | -13.5952 / -10.0992 | regression |
| Trenches | legacy | closure_240s_m | 10 | -12.3455 | -19.8468 / -5.2113 | regression |
| Trenches | legacy | orders_azure_per_minute | 10 | -163.3667 | -185.4354 / -143.1267 | improved |
| Works | candidate90 | shots | 10 | 156.5000 | -22.7350 / 320.8075 | inconclusive |
| Works | candidate90 | casualties_total | 10 | -27.8000 | -31.1000 / -24.5000 | regression |
| Works | candidate90 | nearest_m | 10 | 6.4193 | 5.9770 / 6.8365 | improved |
| Works | candidate90 | under_2m | 10 | -0.7400 | -0.7650 / -0.7132 | improved |
| Works | candidate90 | closure_120s_m | 10 | -30.0780 | -32.0755 / -28.0817 | regression |
| Works | candidate90 | closure_240s_m | 10 | -48.5528 | -55.2264 / -41.8982 | regression |
| Works | candidate90 | orders_azure_per_minute | 10 | 21.9167 | 14.6667 / 30.2508 | regression |
| Works | drills-phase2d | shots | 10 | 171.1000 | -83.9750 / 422.6925 | inconclusive |
| Works | drills-phase2d | casualties_total | 10 | -3.4000 | -6.7000 / -0.2000 | regression |
| Works | drills-phase2d | nearest_m | 10 | 1.9822 | 1.4562 / 2.5771 | improved |
| Works | drills-phase2d | under_2m | 10 | 0.0184 | -0.0015 / 0.0414 | inconclusive |
| Works | drills-phase2d | closure_120s_m | 10 | 5.3093 | 3.9191 / 6.7144 | improved |
| Works | drills-phase2d | closure_240s_m | 10 | -15.0001 | -23.5236 / -7.4649 | regression |
| Works | drills-phase2d | orders_azure_per_minute | 10 | -2.4667 | -11.9512 / 7.2029 | inconclusive |
| Works | legacy | shots | 10 | -1161.6000 | -1509.2100 / -813.4825 | regression |
| Works | legacy | casualties_total | 10 | -27.0000 | -29.9000 / -23.6000 | regression |
| Works | legacy | nearest_m | 10 | 0.8570 | 0.0714 / 1.5798 | improved |
| Works | legacy | under_2m | 10 | -0.1071 | -0.1337 / -0.0801 | improved |
| Works | legacy | closure_120s_m | 10 | -16.0134 | -19.1178 / -13.2658 | regression |
| Works | legacy | closure_240s_m | 10 | -30.4895 | -37.3029 / -23.4297 | regression |
| Works | legacy | orders_azure_per_minute | 10 | -123.9000 | -137.0850 / -111.9492 | improved |

Full distributions and diagnostic/conformance intervals: `.local/phase3b/distributions.md` and `paired-criteria.json`. The440-run machine-readable comparison in `paired-input.json` contains110 new drills,110 Phase2d drills, and220 historical baseline runs.

## Per-run disclosure

P3b=this build; P2=Phase2d; C=candidate90; L=legacy. Both-side casualty fractions remain disclosed (A/E). NA is unavailable horizon evidence, omitted pairwise with counts shown above, not an imputed failure. No per-run conjunction or tactical pass-count scoreboard is used.

| Set / draw / seed | Shots P3b/P2/C/L | Casualties P3b/P2/C/L | P3b A/E casualty % | NN m P3b/P2/L | <2m % P3b/P2/L | Closure120 P3b/P2/C | Closure240 P3b/P2/C | Azure orders/min P3b/P2/C | Hits/soldier-min P3b/P2/C |
|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|
| works / 0 / 100 | 1226.00/1263.00/839.00/2583.00 | 7.00/16.00/37.00/36.00 | 6.2/15.6 | 6.51/4.80/7.27 | 11.76/3.60/16.21 | 80.80/72.21/108.43 | 77.98/74.08/106.78 | 117.00/102.00/68.33 | 0.11/0.16/0.48 |
| works / 0 / 101 | 600.00/1049.00/1038.00/2012.00 | 8.00/19.00/41.00/35.00 | 18.8/6.2 | 6.81/5.72/5.04 | 7.20/5.01/23.52 | 76.64/72.82/108.32 | 44.60/81.28/106.43 | 79.67/103.67/57.17 | 0.10/0.18/0.55 |
| works / 0 / 102 | 1138.00/718.00/965.00/2270.00 | 8.00/8.00/45.00/35.00 | 0.0/25.0 | 7.93/4.17/5.98 | 4.49/7.42/16.51 | 81.61/73.47/106.23 | 76.86/76.93/118.03 | 74.67/84.33/69.83 | 0.12/0.08/0.63 |
| works / 0 / 103 | 1586.00/845.00/1272.00/2347.00 | 15.00/15.00/42.00/40.00 | 15.6/31.2 | 8.36/6.35/5.51 | 3.71/3.97/19.16 | 76.29/73.78/112.32 | 37.89/75.70/104.80 | 82.00/91.33/69.50 | 0.16/0.15/0.54 |
| works / 0 / 104 | 1216.00/1428.00/1067.00/2086.00 | 9.00/19.00/41.00/40.00 | 18.8/9.4 | 6.13/5.30/7.56 | 9.74/2.17/14.20 | 82.15/76.56/110.46 | 67.06/75.44/109.71 | 77.67/85.00/64.17 | 0.11/0.19/0.52 |
| works / 0 / 105 | 978.00/1073.00/1003.00/2318.00 | 7.00/13.00/34.00/41.00 | 3.1/18.8 | 7.20/5.96/6.80 | 7.79/3.50/13.31 | 78.07/72.98/109.37 | 62.83/74.19/109.55 | 87.83/87.33/69.50 | 0.09/0.14/0.41 |
| works / 0 / 106 | 1114.00/1320.00/973.00/2803.00 | 12.00/17.00/40.00/41.00 | 15.6/21.9 | 7.28/5.40/6.88 | 2.99/3.30/16.53 | 77.84/74.24/108.77 | 54.26/74.87/109.94 | 75.17/97.83/66.17 | 0.13/0.18/0.51 |
| works / 0 / 107 | 1821.00/1047.00/1197.00/1878.00 | 17.00/15.00/41.00/38.00 | 28.1/25.0 | 8.39/4.90/7.56 | 4.27/5.42/12.54 | 75.84/74.24/109.79 | 56.78/75.13/109.62 | 89.50/93.33/57.33 | 0.18/0.15/0.53 |
| works / 0 / 108 | 1202.00/586.00/841.00/1962.00 | 17.00/12.00/39.00/32.00 | 37.5/15.6 | 7.87/5.73/6.28 | 2.41/2.34/17.33 | 80.41/73.90/107.26 | 59.98/72.58/110.62 | 95.17/68.17/59.83 | 0.21/0.10/0.49 |
| works / 0 / 109 | 568.00/409.00/689.00/2806.00 | 10.00/10.00/28.00/42.00 | 18.8/12.5 | 7.48/5.81/6.51 | 2.93/2.11/15.09 | 77.64/69.98/107.12 | 69.79/77.82/108.08 | 83.83/74.17/61.50 | 0.10/0.08/0.34 |
| trenches / 0 / 100 | 737.00/803.00/598.00/2104.00 | 8.00/8.00/11.00/40.00 | 12.5/12.5 | 2.81/2.41/4.17 | 33.34/39.97/28.50 | 22.43/24.76/42.08 | 22.64/26.15/41.18 | 109.17/77.33/509.50 | 0.09/0.09/0.10 |
| trenches / 0 / 101 | 643.00/481.00/1342.00/1569.00 | 11.00/5.00/17.00/24.00 | 12.5/21.9 | 3.13/2.67/3.39 | 25.65/37.24/33.43 | 24.12/23.98/37.65 | 24.39/23.73/27.90 | 100.00/64.17/313.33 | 0.14/0.08/0.18 |
| trenches / 0 / 102 | 395.00/962.00/1179.00/1774.00 | 5.00/17.00/23.00/28.00 | 9.4/6.2 | 2.83/2.79/2.58 | 39.59/34.41/39.51 | 23.40/23.98/32.20 | 22.31/25.64/36.55 | 77.00/88.00/836.17 | 0.07/0.17/0.25 |
| trenches / 0 / 103 | 897.00/239.00/511.00/1805.00 | 11.00/2.00/14.00/29.00 | 18.8/15.6 | 3.00/2.66/3.30 | 35.35/40.74/30.39 | 22.85/28.46/41.65 | 27.27/33.66/33.43 | 131.17/82.50/473.00 | 0.17/0.04/0.18 |
| trenches / 0 / 104 | 733.00/521.00/817.00/1377.00 | 9.00/8.00/18.00/26.00 | 21.9/6.2 | 3.00/3.06/2.69 | 35.30/35.22/40.27 | 23.81/30.56/39.89 | 25.03/34.98/34.42 | 89.83/77.33/670.00 | 0.12/0.11/0.19 |
| trenches / 0 / 105 | 1416.00/379.00/558.00/1948.00 | 15.00/4.00/15.00/31.00 | 25.0/21.9 | 3.07/2.64/5.77 | 36.16/30.55/27.75 | 24.54/23.59/40.50 | 22.99/28.25/32.04 | 115.17/67.67/428.33 | 0.18/0.07/0.14 |
| trenches / 0 / 106 | 412.00/205.00/552.00/2552.00 | 7.00/2.00/13.00/41.00 | 12.5/9.4 | 2.27/2.81/4.41 | 44.28/34.05/26.96 | 25.50/24.25/43.71 | 29.92/24.25/36.94 | 68.83/64.00/983.00 | 0.07/0.03/0.13 |
| trenches / 0 / 107 | 225.00/507.00/655.00/2284.00 | 1.00/6.00/15.00/39.00 | 0.0/3.1 | 1.90/2.43/4.68 | 51.99/38.81/28.78 | 25.19/23.01/39.85 | 27.64/29.41/39.22 | 72.50/81.50/580.33 | 0.02/0.07/0.15 |
| trenches / 0 / 108 | 413.00/387.00/385.00/2262.00 | 6.00/5.00/10.00/39.00 | 12.5/6.2 | 2.40/2.25/4.14 | 43.20/42.79/30.53 | 22.76/24.15/41.72 | 22.04/23.88/37.17 | 68.83/87.17/703.17 | 0.09/0.08/0.11 |
| trenches / 0 / 109 | 1108.00/472.00/1392.00/2218.00 | 17.00/8.00/30.00/32.00 | 31.2/21.9 | 2.94/2.84/4.34 | 38.83/31.24/26.66 | 23.29/24.60/37.73 | 23.42/26.91/40.51 | 87.67/92.50/613.50 | 0.19/0.11/0.31 |
| F1 / 1 / 108 | 300.00/832.00/411.00/1027.00 | 8.00/20.00/12.00/21.00 | 33.3/0.0 | 5.84/5.64/6.14 | 0.35/1.06/13.19 | 55.58/56.46/61.41 | 55.58/43.51/74.44 | 37.83/59.50/70.50 | 0.12/0.41/0.23 |
| F1 / 1 / 107 | 454.00/1180.00/466.00/1038.00 | 7.00/25.00/14.00/16.00 | 29.2/0.0 | 5.92/8.54/7.69 | 0.28/1.54/11.07 | 49.52/60.26/70.99 | 49.42/76.69/73.08 | 39.33/62.33/64.00 | 0.13/0.63/0.28 |
| F1 / 2 / 107 | 359.00/300.00/205.00/486.00 | 6.00/6.00/14.00/10.00 | 8.3/100.0 | 5.09/7.46/4.34 | 3.49/3.32/26.00 | 44.05/48.97/NA | NA/NA/NA | 68.78/127.29/98.55 | 0.36/0.42/1.04 |
| F1 / 1 / 109 | 194.00/1118.00/512.00/835.00 | 7.00/29.00/11.00/15.00 | 29.2/0.0 | 5.94/8.46/6.14 | 0.18/4.49/10.17 | 41.51/69.55/69.31 | 41.51/69.11/70.58 | 34.67/60.50/54.17 | 0.12/0.77/0.21 |
| F1 / 2 / 108 | 352.00/303.00/247.00/215.00 | 6.00/8.00/16.00/5.00 | 8.3/100.0 | 6.96/7.93/4.26 | 5.05/3.71/26.76 | 61.55/55.19/58.05 | NA/NA/NA | 113.21/127.25/105.22 | 0.40/0.42/1.11 |
| F1 / 2 / 109 | 275.00/402.00/132.00/314.00 | 9.00/9.00/8.00/8.00 | 20.8/100.0 | 6.61/6.54/4.34 | 2.18/3.56/26.05 | NA/44.26/NA | NA/NA/NA | 118.13/104.23/117.46 | 0.59/0.42/0.67 |
| F1 / 3 / 107 | 401.00/424.00/421.00/719.00 | 11.00/14.00/11.00/22.00 | 20.8/100.0 | 5.82/7.52/4.32 | 12.75/2.60/17.89 | 33.73/NA/5.44 | NA/NA/5.44 | 106.60/168.07/17.50 | 0.71/1.45/0.25 |
| F1 / 3 / 108 | 842.00/497.00/581.00/508.00 | 20.00/13.00/13.00/17.00 | 66.7/66.7 | 4.34/8.65/5.92 | 2.91/2.83/16.92 | 31.82/NA/9.03 | 31.03/NA/7.75 | 36.33/117.23/21.33 | 0.75/0.83/0.33 |
| F1 / 3 / 109 | 718.00/562.00/552.00/1073.00 | 14.00/15.00/13.00/24.00 | 45.8/50.0 | 5.90/7.33/4.29 | 12.49/2.36/12.28 | 32.43/38.39/9.90 | 31.41/NA/7.75 | 33.83/118.15/18.83 | 0.41/0.85/0.36 |
| F1 / 4 / 107 | 376.00/462.00/213.00/497.00 | 12.00/16.00/10.00/16.00 | 45.8/16.7 | 8.17/4.38/4.72 | 1.14/10.82/17.57 | 29.31/28.57/13.91 | 25.60/27.19/12.73 | 25.83/26.33/21.17 | 0.36/0.46/0.25 |
| F1 / 4 / 108 | 366.00/407.00/262.00/425.00 | 11.00/18.00/12.00/20.00 | 37.5/33.3 | 8.95/5.40/4.86 | 0.55/1.73/15.82 | 28.60/38.46/17.49 | 28.06/NA/12.52 | 25.50/79.06/23.50 | 0.32/0.83/0.30 |
| F1 / 4 / 109 | 248.00/547.00/172.00/497.00 | 9.00/13.00/10.00/13.00 | 33.3/16.7 | 5.74/5.91/5.04 | 0.39/8.41/14.74 | 28.38/31.77/7.49 | 28.38/NA/4.31 | 26.67/60.37/19.00 | 0.25/0.50/0.21 |
| F1 / 5 / 107 | 701.00/1600.00/806.00/1459.00 | 12.00/30.00/17.00/17.00 | 37.5/37.5 | 7.52/7.81/5.07 | 1.10/4.85/11.89 | 59.68/67.31/68.59 | 59.01/64.75/69.22 | 32.83/50.00/41.17 | 0.25/1.13/0.46 |
| F1 / 5 / 108 | 875.00/1326.00/564.00/1224.00 | 12.00/22.00/17.00/20.00 | 33.3/50.0 | 6.47/6.04/4.78 | 1.60/2.20/15.45 | 58.42/63.28/67.51 | 58.50/62.20/67.35 | 36.50/41.67/36.00 | 0.28/0.69/0.50 |
| F1 / 5 / 109 | 485.00/1127.00/644.00/1149.00 | 10.00/21.00/14.00/18.00 | 37.5/12.5 | 5.99/9.45/5.08 | 1.64/1.45/12.80 | 60.19/64.33/68.30 | 59.69/66.04/68.06 | 37.00/38.67/42.00 | 0.23/0.66/0.38 |
| F1 / 6 / 108 | 412.00/815.00/497.00/727.00 | 12.00/25.00/18.00/21.00 | 16.7/100.0 | 9.90/7.85/4.45 | 2.62/1.88/16.79 | 32.11/19.95/47.07 | NA/26.46/46.83 | 113.85/55.83/29.83 | 0.59/0.80/0.53 |
| F1 / 6 / 107 | 357.00/731.00/338.00/404.00 | 10.00/23.00/10.00/10.00 | 29.2/37.5 | 9.90/6.61/4.32 | 1.25/10.78/32.72 | 28.82/26.98/45.56 | 26.86/37.93/45.18 | 31.50/53.25/30.00 | 0.26/0.73/0.26 |
| F1 / 6 / 109 | 158.00/661.00/427.00/638.00 | 7.00/18.00/14.00/20.00 | 29.2/0.0 | 9.53/6.52/5.74 | 0.43/4.17/10.79 | 21.74/44.90/46.80 | 21.74/NA/46.66 | 25.83/77.52/31.00 | 0.16/0.73/0.37 |
| F1 / 7 / 107 | 723.00/454.00/749.00/553.00 | 10.00/7.00/7.00/11.00 | 56.2/16.7 | 5.50/6.63/4.54 | 1.89/1.44/15.58 | 62.15/56.67/65.26 | 61.75/NA/63.76 | 29.67/50.48/18.00 | 0.48/0.74/0.30 |
| F1 / 7 / 109 | 592.00/854.00/754.00/1138.00 | 9.00/11.00/10.00/13.00 | 18.8/100.0 | 6.18/6.50/6.10 | 5.66/4.49/8.68 | 66.86/58.15/63.01 | NA/NA/61.38 | 67.30/56.27/17.83 | 0.61/0.71/0.36 |
| F1 / 7 / 108 | 790.00/1219.00/513.00/999.00 | 12.00/16.00/8.00/9.00 | 62.5/33.3 | 8.04/6.92/6.15 | 2.48/1.12/11.54 | 64.95/55.66/63.05 | 65.38/59.13/64.13 | 25.17/25.17/17.00 | 0.54/0.62/0.28 |
| F1 / 8 / 107 | 279.00/617.00/435.00/384.00 | 4.00/13.00/11.00/14.00 | 18.8/10.0 | 5.00/5.30/5.00 | 1.24/9.83/13.31 | 32.53/36.93/54.99 | 32.53/23.36/55.41 | 18.17/26.67/27.50 | 0.11/0.41/0.40 |
| F1 / 8 / 108 | 225.00/587.00/468.00/897.00 | 5.00/17.00/11.00/16.00 | 31.2/0.0 | 6.00/8.15/5.02 | 1.16/2.52/5.87 | 34.70/44.76/56.81 | 34.70/57.44/56.44 | 20.50/42.36/26.17 | 0.11/0.53/0.35 |
| F1 / 8 / 109 | 120.00/539.00/381.00/461.00 | 3.00/14.00/9.00/12.00 | 18.8/0.0 | 5.56/8.37/5.02 | 8.50/1.05/9.26 | 24.30/26.89/56.97 | 24.30/34.46/56.97 | 18.17/38.17/27.83 | 0.07/0.45/0.30 |
| F1 / 9 / 107 | 489.00/889.00/488.00/676.00 | 9.00/30.00/17.00/18.00 | 37.5/0.0 | 7.26/8.73/4.52 | 0.79/2.38/17.74 | 61.86/65.37/73.35 | 58.47/63.11/72.96 | 45.00/47.50/60.17 | 0.19/0.93/0.39 |
| F1 / 9 / 108 | 704.00/680.00/396.00/854.00 | 13.00/22.00/12.00/17.00 | 50.0/10.0 | 7.10/6.86/4.53 | 3.17/4.76/14.39 | 62.73/69.07/74.77 | 60.89/NA/73.53 | 45.00/90.30/53.17 | 0.25/0.79/0.28 |
| F1 / 9 / 109 | 359.00/921.00/587.00/448.00 | 12.00/27.00/18.00/11.00 | 45.8/10.0 | 6.11/7.23/4.82 | 0.95/7.18/11.32 | 54.58/69.27/74.54 | 54.58/76.49/72.58 | 36.33/66.40/55.17 | 0.26/0.83/0.47 |
| F1 / 10 / 107 | 183.00/467.00/443.00/513.00 | 3.00/14.00/14.00/15.00 | 18.8/0.0 | 5.79/6.72/5.59 | 0.28/0.50/9.30 | 23.17/33.85/53.77 | 22.65/15.37/49.67 | 16.17/29.17/29.83 | 0.06/0.45/0.50 |
| F1 / 10 / 108 | 340.00/448.00/468.00/504.00 | 3.00/16.00/14.00/12.00 | 18.8/0.0 | 5.50/6.72/5.87 | 1.38/1.08/5.34 | 23.17/47.30/51.61 | 23.17/NA/50.59 | 17.17/73.28/30.33 | 0.09/0.86/0.46 |
| F1 / 10 / 109 | 55.00/293.00/237.00/349.00 | 3.00/6.00/11.00/10.00 | 18.8/0.0 | 5.62/5.32/4.51 | 0.33/0.35/15.15 | 20.08/16.07/48.16 | 20.08/16.07/48.38 | 15.67/17.67/35.50 | 0.06/0.16/0.40 |
| F1 / 11 / 107 | 554.00/258.00/1189.00/460.00 | 11.00/4.00/17.00/7.00 | 20.8/100.0 | 6.00/4.88/4.50 | 9.51/6.52/17.94 | 59.44/45.24/56.50 | NA/45.24/60.86 | 86.35/23.33/46.99 | 0.72/0.09/0.55 |
| F1 / 11 / 108 | 462.00/844.00/1045.00/1559.00 | 13.00/13.00/14.00/20.00 | 29.2/100.0 | 5.75/7.12/5.22 | 4.74/6.32/17.11 | NA/53.64/56.08 | NA/NA/59.71 | 110.53/87.52/47.56 | 0.89/0.62/0.45 |
| F1 / 11 / 109 | 787.00/1218.00/1216.00/1536.00 | 14.00/13.00/22.00/17.00 | 33.3/100.0 | 6.20/8.02/5.83 | 11.56/5.66/10.50 | 62.95/52.96/57.62 | NA/55.08/58.08 | 79.84/44.67/61.30 | 0.78/0.31/0.99 |
| F1 / 12 / 107 | 337.00/753.00/187.00/379.00 | 10.00/5.00/10.00/7.00 | 37.5/100.0 | 6.00/6.29/6.00 | 12.57/2.42/14.46 | 76.22/75.84/NA | NA/NA/NA | 87.27/82.82/69.57 | 0.67/0.32/1.08 |
| F1 / 12 / 108 | 330.00/377.00/706.00/186.00 | 4.00/4.00/12.00/1.00 | 0.0/100.0 | 6.00/7.51/4.34 | 4.67/4.20/18.96 | NA/80.30/67.45 | NA/NA/76.61 | 119.36/106.02/33.07 | 0.52/0.39/0.62 |
| F1 / 12 / 109 | 367.00/402.00/573.00/425.00 | 4.00/6.00/7.00/6.00 | 0.0/100.0 | 5.61/6.33/4.40 | 4.48/5.10/16.99 | 90.06/74.41/76.86 | NA/NA/NA | 108.18/116.65/37.99 | 0.53/0.47/0.50 |
| F1 / 13 / 107 | 523.00/1351.00/739.00/1204.00 | 7.00/18.00/17.00/14.00 | 31.2/16.7 | 6.00/6.00/5.00 | 0.17/0.67/9.25 | 47.58/51.39/66.23 | 47.58/72.49/68.90 | 23.67/36.25/37.50 | 0.15/0.54/0.53 |
| F1 / 13 / 108 | 210.00/1150.00/654.00/1434.00 | 5.00/17.00/14.00/11.00 | 31.2/0.0 | 6.00/6.55/5.71 | 0.13/1.62/3.67 | 47.80/67.82/66.57 | 47.80/NA/70.70 | 22.33/48.47/39.50 | 0.11/0.68/0.41 |
| F1 / 14 / 107 | 874.00/1019.00/592.00/634.00 | 15.00/20.00/15.00/11.00 | 43.8/100.0 | 5.78/6.68/4.40 | 4.45/6.96/20.89 | 64.93/65.84/63.95 | NA/NA/63.79 | 59.62/51.79/31.67 | 0.99/1.24/0.62 |
| F1 / 13 / 109 | 303.00/860.00/607.00/990.00 | 5.00/18.00/10.00/11.00 | 31.2/0.0 | 6.00/5.41/5.45 | 0.13/1.23/4.40 | 47.41/54.42/60.83 | 47.41/67.49/67.76 | 20.83/32.17/40.50 | 0.10/0.63/0.23 |
| F1 / 14 / 108 | 708.00/1129.00/411.00/488.00 | 12.00/15.00/10.00/12.00 | 56.2/37.5 | 4.40/4.61/4.40 | 2.72/2.38/25.73 | 63.70/61.00/65.23 | 63.70/62.95/64.67 | 26.67/23.67/30.67 | 0.43/0.64/0.34 |
| F1 / 14 / 109 | 838.00/1302.00/658.00/539.00 | 11.00/17.00/12.00/10.00 | 62.5/12.5 | 4.46/4.61/4.40 | 2.02/2.08/18.04 | 64.06/58.02/66.37 | 64.89/56.92/64.67 | 25.17/26.17/26.17 | 0.42/0.77/0.46 |
| F1 / 15 / 107 | 448.00/492.00/360.00/528.00 | 11.00/9.00/12.00/12.00 | 62.5/8.3 | 5.51/5.14/6.00 | 1.23/0.75/8.53 | 53.91/56.39/60.45 | 53.85/55.92/60.45 | 20.17/23.50/24.67 | 0.31/0.25/0.39 |
| F1 / 15 / 108 | 433.00/756.00/495.00/621.00 | 8.00/19.00/14.00/12.00 | 50.0/0.0 | 4.96/5.71/5.00 | 13.24/1.60/10.51 | 54.67/56.84/59.96 | 54.67/NA/61.03 | 22.33/40.31/28.50 | 0.21/0.89/0.45 |
| F1 / 16 / 107 | 467.00/463.00/227.00/353.00 | 9.00/17.00/5.00/13.00 | 6.2/100.0 | 6.34/4.52/4.40 | 1.50/4.08/11.51 | 37.32/36.79/18.23 | NA/NA/18.23 | 72.96/71.38/24.00 | 0.75/1.27/0.16 |
| F1 / 15 / 109 | 470.00/289.00/537.00/524.00 | 11.00/10.00/13.00/9.00 | 56.2/16.7 | 5.54/8.79/6.00 | 0.69/0.80/8.10 | 53.79/52.66/63.75 | 53.25/52.66/67.64 | 19.50/20.50/30.50 | 0.28/0.25/0.45 |
| F1 / 16 / 108 | 495.00/363.00/158.00/426.00 | 19.00/12.00/4.00/12.00 | 81.2/75.0 | 5.44/10.70/5.00 | 5.11/0.88/13.26 | 32.71/32.95/1.80 | 33.08/27.15/1.80 | 36.33/25.00/19.00 | 1.01/0.45/0.12 |
| F1 / 16 / 109 | 370.00/334.00/298.00/440.00 | 10.00/11.00/11.00/15.00 | 50.0/25.0 | 8.52/9.76/4.82 | 2.14/1.28/7.79 | 35.35/25.35/22.35 | 35.35/25.35/22.30 | 23.33/24.00/20.67 | 0.37/0.40/0.38 |
| F1 / 17 / 107 | 170.00/846.00/219.00/1148.00 | 7.00/26.00/12.00/27.00 | 25.0/8.3 | 6.41/6.00/6.00 | 0.24/1.28/9.41 | 18.46/42.38/52.20 | 18.46/50.63/52.20 | 27.17/66.25/43.33 | 0.11/0.71/0.30 |
| F1 / 17 / 108 | 225.00/937.00/294.00/861.00 | 7.00/24.00/10.00/23.00 | 29.2/0.0 | 6.41/7.44/6.00 | 0.28/1.52/4.99 | 16.49/39.16/51.82 | 16.49/37.12/51.96 | 27.83/48.83/57.17 | 0.12/0.61/0.21 |
| F1 / 17 / 109 | 273.00/1297.00/356.00/1138.00 | 7.00/32.00/22.00/26.00 | 25.0/8.3 | 6.22/9.86/6.00 | 0.87/2.24/6.16 | 18.67/41.25/51.56 | 18.47/49.63/51.75 | 23.67/48.83/44.33 | 0.12/0.87/0.59 |
| F1 / 18 / 107 | 503.00/1304.00/286.00/1103.00 | 10.00/29.00/14.00/23.00 | 29.2/25.0 | 9.90/8.98/5.00 | 0.36/3.13/5.96 | 26.90/37.04/52.00 | 26.90/40.75/52.00 | 31.33/59.00/50.50 | 0.20/0.93/0.32 |
| F1 / 18 / 108 | 512.00/1590.00/513.00/829.00 | 11.00/28.00/21.00/22.00 | 29.2/33.3 | 10.04/7.73/5.71 | 0.39/5.14/4.22 | 22.98/36.00/48.24 | 22.98/45.69/48.24 | 29.83/57.83/60.50 | 0.24/0.73/0.61 |
| F1 / 18 / 109 | 475.00/1503.00/303.00/1062.00 | 11.00/23.00/17.00/22.00 | 37.5/16.7 | 9.90/7.43/5.48 | 0.58/8.75/5.85 | 19.43/21.31/50.89 | 19.43/34.11/50.89 | 33.33/55.50/40.67 | 0.22/0.58/0.41 |
| F1 / 19 / 107 | 715.00/801.00/447.00/827.00 | 12.00/29.00/16.00/26.00 | 41.7/16.7 | 5.10/9.90/5.04 | 1.12/3.10/11.10 | 35.93/33.25/29.23 | 34.60/37.45/28.97 | 48.17/70.17/28.00 | 0.28/0.85/0.35 |
| F1 / 19 / 108 | 334.00/849.00/526.00/598.00 | 10.00/28.00/16.00/24.00 | 41.7/0.0 | 6.00/5.68/6.00 | 0.71/2.13/10.35 | 32.73/31.29/29.85 | 30.74/15.59/30.89 | 43.33/78.00/35.50 | 0.21/0.83/0.39 |
| F1 / 19 / 109 | 702.00/596.00/547.00/713.00 | 14.00/16.00/23.00/26.00 | 50.0/16.7 | 5.36/5.43/6.39 | 0.78/2.77/15.44 | 31.21/28.93/31.03 | 26.62/36.25/21.58 | 47.83/67.67/35.33 | 0.33/0.37/0.64 |
| F1 / 20 / 107 | 300.00/777.00/383.00/723.00 | 13.00/17.00/20.00/25.00 | 29.2/60.0 | 9.90/6.33/4.95 | 5.97/11.85/11.77 | 22.92/31.19/43.70 | 20.93/44.25/44.04 | 34.17/65.00/36.33 | 0.29/0.38/0.58 |
| F1 / 20 / 108 | 245.00/1074.00/484.00/922.00 | 6.00/22.00/22.00/23.00 | 25.0/0.0 | 9.05/8.96/4.53 | 0.86/4.99/16.83 | 24.16/33.46/44.10 | 24.16/47.56/45.21 | 38.33/92.38/39.50 | 0.17/0.71/0.69 |
| F1 / 20 / 109 | 124.00/1023.00/602.00/752.00 | 5.00/23.00/27.00/19.00 | 20.8/0.0 | 7.80/9.87/5.06 | 0.34/6.75/9.41 | 23.66/26.94/47.53 | 23.66/27.26/44.62 | 32.83/90.61/36.67 | 0.10/0.66/0.95 |
| F1 / 21 / 107 | 291.00/534.00/54.00/434.00 | 6.00/15.00/2.00/14.00 | 31.2/8.3 | 6.04/6.00/5.02 | 0.42/1.15/3.41 | 26.47/33.81/2.99 | 26.47/36.55/2.99 | 16.00/31.67/8.50 | 0.16/0.43/0.06 |
| F1 / 21 / 108 | 171.00/617.00/33.00/347.00 | 4.00/18.00/3.00/9.00 | 18.8/8.3 | 6.00/6.00/5.00 | 0.33/1.55/3.50 | 30.38/28.93/3.36 | 27.81/41.79/3.36 | 15.83/44.70/7.67 | 0.09/0.55/0.07 |
| F1 / 21 / 109 | 408.00/711.00/65.00/538.00 | 7.00/13.00/2.00/19.00 | 31.2/16.7 | 6.04/6.00/5.00 | 0.50/0.52/7.68 | 30.19/28.32/3.27 | 26.23/35.64/3.27 | 15.67/30.33/7.33 | 0.18/0.37/0.07 |
| F1 / 22 / 107 | 473.00/1515.00/401.00/988.00 | 10.00/21.00/7.00/15.00 | 41.7/0.0 | 8.02/6.00/5.10 | 0.31/1.28/11.16 | 53.02/64.43/76.43 | 53.02/58.19/76.43 | 35.67/51.67/49.00 | 0.19/0.56/0.18 |
| F1 / 22 / 108 | 899.00/1153.00/554.00/1493.00 | 12.00/18.00/6.00/23.00 | 45.8/10.0 | 6.00/5.91/4.75 | 1.52/0.96/14.73 | 69.43/65.95/75.82 | 68.64/56.52/75.17 | 46.83/53.50/44.67 | 0.26/0.43/0.13 |
| F1 / 22 / 109 | 686.00/782.00/284.00/1498.00 | 10.00/12.00/9.00/15.00 | 37.5/10.0 | 9.58/5.03/5.61 | 0.64/7.14/16.99 | 56.45/65.79/75.31 | 55.99/57.85/75.43 | 43.17/46.33/54.17 | 0.22/0.24/0.18 |
| F1 / 23 / 107 | 521.00/952.00/727.00/394.00 | 14.00/19.00/25.00/13.00 | 33.3/100.0 | 7.00/5.36/4.26 | 4.91/1.11/23.36 | 54.64/34.96/51.53 | NA/36.62/53.47 | 122.41/38.67/22.50 | 0.95/0.54/1.20 |
| F1 / 23 / 108 | 616.00/1030.00/480.00/313.00 | 14.00/24.00/16.00/10.00 | 33.3/100.0 | 6.70/6.60/3.78 | 3.27/3.88/27.55 | 50.03/42.20/52.52 | NA/44.22/52.64 | 93.54/51.83/23.83 | 0.77/0.89/0.49 |
| F1 / 23 / 109 | 1073.00/831.00/478.00/674.00 | 15.00/14.00/16.00/13.00 | 58.3/16.7 | 5.21/5.66/4.13 | 2.53/5.87/24.16 | 40.15/42.73/49.43 | 37.33/NA/49.43 | 40.17/95.76/23.83 | 0.42/0.58/0.51 |
| F1 / 24 / 107 | 131.00/408.00/432.00/456.00 | 8.00/15.00/16.00/17.00 | 37.5/20.0 | 6.01/4.46/5.00 | 8.75/1.15/8.91 | 24.88/34.76/46.33 | 24.88/30.03/41.79 | 23.33/40.17/28.17 | 0.20/0.55/0.64 |
| F1 / 24 / 108 | 299.00/418.00/436.00/411.00 | 9.00/15.00/13.00/20.00 | 50.0/10.0 | 5.04/5.89/5.00 | 0.95/0.50/13.04 | 29.40/26.13/42.42 | 29.40/10.13/39.49 | 24.33/37.00/28.67 | 0.25/0.50/0.45 |
| F1 / 24 / 109 | 352.00/539.00/260.00/395.00 | 9.00/12.00/11.00/17.00 | 43.8/20.0 | 5.00/6.92/5.00 | 9.56/0.84/15.58 | 33.35/27.25/42.05 | 28.93/23.55/41.81 | 31.00/43.83/28.33 | 0.31/0.40/0.37 |
| F1 / 25 / 107 | 445.00/282.00/355.00/282.00 | 9.00/6.00/13.00/9.00 | 31.2/100.0 | 6.88/8.25/5.24 | 5.09/3.04/15.73 | 74.38/65.01/57.03 | NA/NA/69.66 | 96.91/83.62/41.00 | 0.64/0.52/0.56 |
| F1 / 25 / 108 | 323.00/625.00/715.00/225.00 | 6.00/8.00/14.00/3.00 | 12.5/100.0 | 6.00/7.49/6.00 | 11.12/9.80/19.51 | 69.27/69.06/57.96 | NA/NA/67.94 | 82.38/72.61/36.45 | 0.61/0.52/0.74 |
| F1 / 25 / 109 | 293.00/391.00/459.00/542.00 | 10.00/8.00/9.00/8.00 | 37.5/100.0 | 8.39/4.96/5.81 | 2.19/2.09/20.23 | 69.91/68.30/57.53 | NA/NA/NA | 71.08/64.64/41.68 | 0.77/0.49/0.55 |
| F1 / 26 / 107 | 697.00/795.00/515.00/545.00 | 13.00/24.00/20.00/13.00 | 12.5/100.0 | 9.64/7.75/5.00 | 0.60/10.72/11.83 | 28.04/33.61/46.78 | NA/35.51/NA | 81.05/49.67/78.28 | 0.44/0.62/1.05 |
| F1 / 26 / 108 | 325.00/686.00/540.00/648.00 | 8.00/28.00/20.00/22.00 | 25.0/20.0 | 9.80/9.90/5.00 | 0.39/2.93/13.97 | 27.45/31.99/44.56 | 26.01/36.87/43.10 | 39.50/79.71/34.00 | 0.18/0.95/0.55 |
| F1 / 26 / 109 | 440.00/682.00/538.00/650.00 | 16.00/21.00/24.00/25.00 | 45.8/50.0 | 9.75/9.90/4.52 | 0.43/9.72/14.74 | 30.53/18.96/48.08 | 29.78/28.38/47.00 | 44.00/43.83/33.00 | 0.38/0.52/0.67 |
| F1 / 27 / 107 | 461.00/479.00/216.00/402.00 | 9.00/16.00/14.00/17.00 | 12.5/100.0 | 5.93/8.99/4.59 | 2.72/1.86/11.58 | 37.46/30.03/NA | NA/NA/NA | 128.14/114.29/134.86 | 0.52/0.76/1.30 |
| F1 / 27 / 109 | 283.00/592.00/354.00/733.00 | 9.00/11.00/12.00/24.00 | 12.5/100.0 | 6.85/9.90/4.40 | 1.21/1.94/16.52 | NA/24.86/40.77 | NA/33.86/40.44 | 153.33/63.84/32.00 | 0.77/0.36/0.31 |
| F1 / 27 / 108 | 523.00/426.00/227.00/463.00 | 14.00/11.00/13.00/15.00 | 33.3/100.0 | 6.03/9.90/4.26 | 1.10/2.73/21.81 | 34.88/33.01/NA | NA/NA/NA | 70.06/108.43/132.83 | 0.47/0.50/1.20 |
| F1 / 28 / 107 | 360.00/760.00/142.00/517.00 | 13.00/21.00/9.00/23.00 | 41.7/30.0 | 6.03/8.57/6.00 | 0.64/0.57/7.58 | 32.00/37.93/0.00 | 32.00/26.48/0.00 | 29.33/43.83/11.50 | 0.28/0.57/0.19 |
| F1 / 28 / 108 | 350.00/325.00/154.00/957.00 | 13.00/8.00/7.00/27.00 | 45.8/20.0 | 6.00/9.90/4.92 | 0.64/0.40/17.47 | 32.07/22.03/2.11 | 32.07/22.03/0.00 | 29.33/37.00/9.83 | 0.29/0.19/0.13 |
| F1 / 28 / 109 | 353.00/568.00/124.00/801.00 | 13.00/16.00/7.00/28.00 | 41.7/30.0 | 6.03/9.90/5.00 | 0.64/2.32/12.90 | 34.34/33.62/0.00 | 34.34/19.28/0.00 | 32.83/52.67/11.17 | 0.32/0.38/0.15 |
| F1 / 29 / 107 | 1155.00/1331.00/924.00/1771.00 | 19.00/22.00/20.00/20.00 | 50.0/87.5 | 7.81/5.00/5.00 | 5.70/2.86/11.44 | 60.77/61.36/52.46 | 60.26/61.55/64.23 | 44.67/51.83/41.17 | 0.57/0.66/0.55 |
| F1 / 29 / 108 | 1096.00/1004.00/641.00/663.00 | 17.00/22.00/12.00/14.00 | 58.3/37.5 | 5.20/7.90/5.55 | 5.48/4.99/14.32 | 56.69/56.87/59.78 | 59.11/67.20/63.80 | 37.00/66.33/41.67 | 0.42/0.77/0.32 |
| F1 / 29 / 109 | 1150.00/1108.00/547.00/1815.00 | 16.00/23.00/12.00/22.00 | 62.5/12.5 | 8.06/6.00/5.90 | 2.03/5.48/10.55 | 59.09/57.19/59.81 | 55.87/NA/63.90 | 34.83/72.91/41.83 | 0.41/0.99/0.31 |
| F1 / 30 / 107 | 464.00/101.00/212.00/342.00 | 12.00/4.00/4.00/7.00 | 62.5/20.0 | 5.30/6.96/5.22 | 1.34/0.49/9.41 | 57.46/39.91/77.69 | 59.63/39.91/77.69 | 31.50/22.17/48.50 | 0.33/0.09/0.16 |
| F1 / 30 / 108 | 249.00/723.00/248.00/371.00 | 6.00/18.00/7.00/10.00 | 37.5/0.0 | 5.24/7.68/4.47 | 0.46/1.37/19.50 | 59.31/72.45/76.22 | 56.03/78.35/76.17 | 33.33/48.00/31.83 | 0.15/0.58/0.23 |
| F1 / 30 / 109 | 504.00/607.00/453.00/557.00 | 12.00/15.00/11.00/10.00 | 50.0/40.0 | 6.00/6.66/4.48 | 2.27/1.21/11.80 | 57.96/57.10/77.57 | 57.96/58.55/76.59 | 31.33/29.67/60.50 | 0.34/0.45/0.36 |


## Verification and reproducibility

- Full `./scripts/test-sim.sh`: PASS (exit 0; reported elapsed 240.332 s). Focused drills failures above are separate optional selectors, not hidden by the main-suite pass.
- Python:57 tests pass. New test verifies candidate90 as the authored target reference and inclusion of Trenches closure.
- Historical authored digests: 40/40 exact matches, legacy and candidate90, both maps seeds100–109 (`authored-parity/parity.json`).
- Drills trace parity: 3/3 exact matches, Works107, Trenches107, F1 draw1/107 (`trace-parity.json`).
- All 110 candidate90 trace-reference manifests revalidated against their untraced baselines (`candidate-reference-revalidation.json`). No new candidate90 behavior or baseline replacement.
- Controller defaults/reruns: 0 exit (`defaults.log`). Legacy remains default.
- Engagement guard enabled: three zero-shot runs abort a ten-run block. 20 authored and 90 F1 runs complete; zero-shot counts 0/0 (`engagement-summary.json`).
- Protected layouts/terrain, frozen seed lists and `tools/evaluate_routes.py` retain all baseline hashes (`static-checks.json`). `git diff --check` is clean.
- Windows/Unreal stay with the architect; neither was invoked. No Fable launcher, commit, reset or stash. Existing uncommitted work preserved.

Commands (expanded case commands and manifest locations are stored by each runner):

```sh
python3 tools/source_id.py
./scripts/test-sim.sh --drills D08  # premeasurement observer/fixture integration checks
./scripts/test-sim.sh             # final full-suite.log
./scripts/battle-lab.sh --drills --seconds 1 --seed 107 --no-trace --out .local/phase3b/build-smoke
python3 -m unittest discover -s tests -p "test_*.py"
python3 .local/phase3b/run_mechanisms.py
python3 .local/phase3b/measure.py
# measure.py expands to:
python3 .local/phase3b/run_authored.py
python3 .local/phase3b/parity.py .local/phase3b/authored-parity .local/phase3b/final/battle-lab
python3 tools/run_family.py --binary .local/phase3b/final/battle-lab --out .local/phase3b/f1-dev --family F1 --gen-seeds 1-30 --seeds 107-109 --controllers drills --seconds 360 --jobs 2 --trace
python3 tests/check_controller_defaults.py --binary .local/phase3b/final/battle-lab --out .local/phase3b/defaults
python3 .local/phase3b/trace_checks.py
python3 .local/phase3b/diagnose.py
python3 .local/phase3b/analyze.py
python3 .local/phase3b/static_checks.py
git diff --check
```

Premeasurement logs: `preflight-D08.log`, `preflight-screened.log`, `preflight-cli.log`; the frozen-binary diagnosis expands exact fixture commands in `fixture-diagnostics/results.json`. Only the final fingerprint was used for the distribution.

## Failure diagnostics

All diagnostic fixture reruns use the frozen measured binary. Commands, trace locations and extracted transitions are in `.local/phase3b/fixture-diagnostics/results.json`; no follow-up source change was made.

- **D08 progresses, then blocks.** The live accepted route is 100% blocked from the defender's observer line at acceptance. SupportByFire accepts at11.150001 s, delivery evidence establishes at15.150001 s and the first rush starts then. The squad issues successive buddy bounds, with observed rush duration at most3.3 s. At101.65 s it reports `Blocked: no executable protected five-second rush`. There is no assault-line receipt or consolidation. A screened group route does not guarantee that every later buddy endpoint can satisfy the position, spacing and five-second execution constraints. This remains an implementation defect; the angle/phase-line/consolidation assertions are not waived.
- **D07:** phase-line receipt and lift receipt both remain -1. Zero late rounds does not demonstrate correct lifting when no phase line is reached.
- **D09:** the imposed gap produces a support-loss transition at38.400002 s and fresh evidence resumes the retained contract at49.350002 s. The same-instance/generation assertion passes. Protected-hold checking fails. The rush uses projected walkable positions and can rely on route concealment without a physical cover slot, so its pause does not establish the required protected hold. The nominal continuous control also loses real delivery evidence at45.2 s, resuming at47.55 s, and again at65.45/65.8 s; it therefore does not provide continuously delivered support. Both aspects are disclosed; the pair fails.
- **D04 unchanged bare control:** the primary contact/return-fire/cover/spacing/assessment assertions pass, but the bare control emits `no covered route: report upward and continue supported bounding closure` at6.55 s instead of the expected BreakContact/rearward trace. The new fallback is exercised, but the old asserted negative-control contract is no longer demonstrated. It remains a reported failure, not an accepted new expectation.
- **Lifecycle pin:** fails `assignment.execution.deadline == 0`. The fixture traces have no nonzero deadline on received orders. The unchanged shared support-completion code in `TaskSim.cpp` (the Done-to-support-lost paths) writes `min(intent.expiresAt,time+15)` locally; the new fallback maps stationary gun members to that Completion::Support path. This is a likely integration cause of the nonzero deadline and conflicts with the drills stage-clock invariant. No guard was added after measuring, and no passing lifecycle claim is made.
- **D10/D11/D16:** the attack is now committed for both inside/outside corridor controls; exactly one inside alternate and zero outside alternates are measured. One physical casualty retains membership and continuation; two produce InsufficientStrength/Reorganise. D16 alternates and retreats39.61 m to completion; its equal-number control does not break.

The full scoreboard and per-run table below are the outcome evidence. Protected/walkable endpoints, nonzero battle shots, or lower order counts alone do not establish tactical acceptance.

Paired outcome evidence against Phase2d:

- F1 shots: -294.63, 95% CI [-402.18,-204.18]; total casualties: -6.97 [-9.32,-4.92]. Both regress significantly. Closure240: -5.62 m [-10.18,-1.24], also regression. Closure120 is inconclusive. Mean hit rate is0.362 against Phase2d0.607.
- Works total casualties: -3.40 [-6.70,-0.20]; closure240: -15.00 m [-23.52,-7.46]. Closure120 improves +5.31 m [3.92,6.71]; shots are inconclusive at +171.10 [-83.98,422.69]. Four squad attacks commit across the ten Works runs, but none reaches a phase line (`action-diagnostics.json`).
- Trenches closure240: -2.92 m [-5.35,-0.38]. Shots and total-casualty changes remain inconclusive despite higher means.
- F1 orders/min decreases by12.07 [-20.12,-4.44]. Reduced order activity alongside reduced fighting is not sufficient tactical improvement.

Thus the Phase2d no-regression exit fails independently of the mechanism failures. The authored targets do not all improve against either Phase2d or candidate90. The per-run values and every individual interval remain reported rather than aggregated into a per-run conjunction.


## Changes and binding corrections

Read `plans/014-phase3-fable-review.md` first. Entry fingerprint `3231bd74bac2cef1`; the one distribution build is `9b338688d4ab02e0`. The six corrections were implemented without changing historical-controller policy or authored layouts.

1. **Cover-sector flank search.** `PositionSim.h/.cpp` adds optional maximum angle, inner/outer radius, a union disc, and a configurable alternative count; defaults preserve existing query callers. `Flank` now queries cover slots (including the position service's cover tangents), 40–60 degrees off the actual known gun-group base at the objective, 20–45 m away. It evaluates reachable alternatives with the existing tactical route planner and ranks them by `RouteCost::Total`, which includes its exposure cost. It no longer constructs exact polar goals. Each manoeuvre member must have a path to the selected endpoint. The sector/lane negative-control test passes.
2. **Attack area.** SupportByFire and SquadAttack queries use the original lane rectangle united with a 60 m objective disc. Walkability clips it to the map. Route points must remain in that union. Closure fallback retains the union. Acceptance traces name the union and disc radius and carry the objective; assignment/export fields carry the numeric lane bounds, disc centre and radius. These new assignment fields and the closure-fallback state are hashed only for drills. The offline area metric recognises the union.
3. **Covered route.** Known-threat exposure must be at most 40% of travel and no continuous exposed distance may exceed 10 m. Sampling uses at most 1 m segments; a constant posture speed makes the length fraction equal to the planned travel-time fraction. The policy uses officer tracks, not the defender's actual state. D08 separately checks observer lines from the actual defender before simulation on candidate routes, and again on the route actually accepted during production simulation. Both measured blocked fractions are 1.0, exceeding the required 0.6. The observer assertions count obstruction by the fixture geometry; they do not isolate the screen from its low-cover objects.
4. **Closure fallback and entry.** SquadAttack no longer requires effective incoming fire. At known resistance within 100 m without superiority, a covered flank chooses attack; absence of a route issues the gun group's Support contract, reports Support with a `no covered route` trace, and resumes the existing committed bounding movement stages. Stationary gun-group orders map to BoundCover/Support, retaining delivered-fire behavior. Under effective incoming fire without superiority, a moving fallback element searches protected forward slots; if none are available, it holds existing cover. Quiet fallback continues with walkable formation projection. Failed/unreachable columns still use the existing Blocked behavior; this can independently prevent progress and is not claimed to satisfy the new closure exit.
5. **D16 control.** Both ratio fixtures use durable own members so the three-casualty trigger does not confound the ratio. Enemies remain durable and are allowed only short physical firing windows every five seconds. No contact, task receipt or fire-delivery record is injected. The unchanged behavioural assertions now pass: ratio-two retreats by alternating bounds; the equal-number control does not break.
6. **References.** Every criterion has a paired 95% interval versus Phase2d, candidate90 and legacy. Phase2d is the no-regression reference. The user's latest instruction makes candidate90 the targeted authored-map reference; that is the primary targeted flag. The review's final paragraph instead asks for authored improvement against Phase2d with candidate90 disclosed. Both flags are reported, plus all legacy intervals, so this inconsistency is explicit. Neither interpretation can excuse failed mechanism pairs. Trenches closure is now included, following the current instruction applying closure to both authored maps.

## Fixture and integration amendments

- Existing D01–D05/D17 assertions and authored fixtures44–55 are unchanged. Their current failures are reported, not waived.
- The D08-family wall extends from x0 to60 at y12 (previously18–42). Manoeuvre members start at y20/26/32/38 with adjacent protected cover on the screened approach. The durable target has health500 rather than10000, so eventual physical clearance is possible; no elimination is scripted for consolidation.
- The initial live trace showed that mandatory firing lines for the rifle group in contact-cover/setup stages pulled it out from behind the screen. `DrillSim.cpp` now requires those lines from the gun group; rifle positions still require protection, reachability and occupancy checks. This is an additional implementation decision supporting the screened approach, not a separate architect ruling. It is applied generally, not by map or seed. Its possible contribution to the old D04/lifecycle failures is not concealed.
- The D08 physical-angle assertion follows the review's changed sector (40–60 degrees, at most45 m). Timing, support, consolidation and Reorganise assertions remain required. Its new observer and sector assertions do not replace its end-to-end checks.
- D10/D11 retain physical threat/casualty stimuli with normal sensing and transport. Gun pickup and D12 remain explicitly deferred. The Phase3 report's gun-recovery design note remains the proposal; no weapon-transfer mechanic was added.
- D06 still lacks a separate spacing assertion noted in the Phase3 report. Its passing pair certifies only its actual assertions, not that omitted bound. Distributional spacing is reported separately.

## Statistical method

`tools/compare_drills.py` uses the existing `report_family.py` implementation: 2,000 deterministic percentile bootstrap resamples. F1 resamples the 30 generated-map clusters with their three battle seeds retained; each authored map resamples its ten battle-seed pairs. A wholly favourable interval is improved, wholly adverse is regression, crossing zero is inconclusive rather than equivalence. Missing closure horizons are omitted pairwise with sample counts shown, never extrapolated or treated as failed battles. There is no conjunction of per-run tactical pass flags.

Shots, total casualties across both sides, median nearest-squadmate distance, under-2 m share, front-line displacement at120/240 s and Azure soldier orders/min are the corrected criteria. Both-side casualty fractions and hits per active soldier-minute are disclosed per run. Each reported NN value is the per-run median; aggregate tables average those medians. Existing candidate90 traced references remain digest-equal to untraced baseline manifests, including the accepted344 orders for Works107. Per-run raw evidence is retained with the new family conformance fields; null assault angle means no phase-line sample, not a successful assault.

## Disagreements and limits

No disagreement with the six corrections or the one-measured-build stop rule. The target-reference inconsistency is resolved explicitly above in favor of the user's latest candidate90 instruction, with the alternative fully disclosed. Premeasurement compiles and fixture traces were used to establish the screen and integration; only the final fingerprint was used for the authored/F1 distribution. After measurement started, no simulation or test source was changed.

The slice is not promoted if any required pair or criterion fails. Legacy remains default. No Phase4/platoon task tree, F2/F3 or gun pickup; no per-seed tuning; no commit, reset, stash or Fable launcher. Native Windows and Unreal verification remain with the architect and were not attempted.

Additional implementation assumption: a protected fallback candidate must make at least3 m of projected forward progress before it counts as a bound. This rejects selecting the same occupied cover again, but the review did not prescribe that numeric minimum; it may exclude a shorter useful protected step. It is disclosed for review, not presented as a binding doctrinal value. No metric or route threshold was tuned after seeing the distribution.


Final fingerprint rechecked: `9b338688d4ab02e0`. Stopped after the report; no further measured iteration or Phase4 work.
