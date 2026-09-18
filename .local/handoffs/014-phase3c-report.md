# Plan 014 — Phase 3c slice report

**FAIL / not promoted.** D08 now reaches the assault line and unchanged D07 passes. D04 and the corrected lifecycle pin pass; D09 passes protected hold and same-generation resume. D08 still fails consolidation/reorganisation and D09 still fails its continuous-support control. The statistical exit also fails: F1 intensity, spacing and later closure regress against Phase2d; authored targets against candidate90 are not met. No second measured build or post-measurement tactical edit was made. Legacy remains the playable default.

Entry fingerprint: `9b338688d4ab02e0`. Final measured fingerprint: `7596d85ca9eb5318`. Frozen source/tests: `.local/phase3c/final/`; entry snapshot: `entry/`; slice simulation patch: `simulation.patch`. Static checks confirm unchanged measured source/tests, the original Phase2 assertion bodies, and all protected hashes.

## Mechanism pairs and pins

| Selector | Result | Evidence |
|---|---|---|
| D01 | PASS | D01 moving=1611 spacing_share=0.934823 arrived=8 corridor_inside=1 |
| D02 | PASS | D02 report_only=1 30-50m=1 protected_trail=1 control_traveling=1 control_close=1 |
| D03 | PASS | D03 alternation=1 covered=1 maximum_bound=19.6994 far_early_bounds=0 |
| D04 | PASS | D04 first_receipt=2.2 return_shooters_4s=7 all_cover=1 spacing=1 path_bound=1 assessment=1 bare_rear=1 |
| D05 | PASS | D05 support=1 incorrectly_blocked=0 weak_report=1 latency=3.9 |
| D06 | PASS | D06 established=1 lost=1 evidence=1 protected=4 silent_released=0 |
| D07 | PASS | D07 phase_receipt=121.35 lift_received=122.8 late_original_area_rounds=0 no_signal_lift=0 |
| D08 | FAIL (assert abort) | D08 observer screened candidate routes=2 best blocked fraction=1; D08 accepted route observer blocked fraction=1; D08 covered_attack=1 moved=1 physical_angle=1 longest_rush=4.35 consolidate=0 reorganise=0 bare_attack=0 bare_report=1 |
| D09 | FAIL (assert abort) | D09 pause=1 resume_same=1 protected=1 continuous_pause=1 |
| D10 | PASS | D10 committed=1/1 alternatives=1/0 resolved=1 |
| D11 | PASS | D11 committed=1 frozen=1 continued=1 weak_failed=1 reformed=1 |
| D16 | PASS | D16 retreat=1 alternate=1 rear_distance=39.6056 complete=1 equal_break=0 |
| D17 | PASS | D17 independently allocatable protected slots=8; D17 scarce_occupied=5 ample_occupied=8 spacing=1 |
| lifecycle | PASS | Lifecycle continue samples=778 retained overwatch samples=784 latched receipt samples=1051; Progress clock paused=113 running=187 |
| plumbing | PASS | all assertions passed |
| positions | PASS | Position service: authored layouts 0/5/6/7, reservations, area rejection and four templates PASS |
| projection | PASS | Projected rush: screened open ground succeeds without catalogue cover; short path budget rejects |
| sector | PASS | Sector position query: lane rejects; lane union objective disc accepts reachable covered flank |
| D12 | Deferred by instruction | No gun pickup implementation |

The retained D08 observer checks report 1.0 blocked fraction against the 0.6 requirement. The sector test and its original lane-only control pass. The new projection test proves screened open ground can supply a rush endpoint without catalogue cover and rejects an over-budget path. All existing D06–D11/D16 function bodies, including D07, are unchanged. D08 reaches AssaultLine; consolidation remains a failure.

## Individual criteria and distribution result

No significant regression versus Phase2d: **False**. Authored targets improved versus candidate90 (latest user reference): **False**. Authored targets improved versus Phase2d (review exit-paragraph alternative): **False**. Combined primary statistical exit: **False**. Overall slice fails because required mechanisms fail, independently of these flags.

F1 versus Phase2d: shots delta −298.31 [−392.16, −219.22], total casualties −6.17 [−8.41, −4.18], nearest-squadmate distance −0.593 m [−1.076, −0.057], and 240 s closure −5.43 m [−10.56, −0.38]. Trenches shots and casualties improve against Phase2d, but Azure order rate rises 22.7/min [10.45, 35.58]. Works loses casualties and later closure against Phase2d. Full criterion intervals follow.

| Set | Controller | Shots | Total casualties | Mean of per-run NN medians m | Under2 m % | Closure120/240 m | Azure orders/min | Hits/soldier-min |
|---|---|---:|---:|---:|---:|---|---:|---:|
| Works | candidate90 | 988.400 | 38.800 | 0.976 | 79.733 | 108.806/109.355 | 64.333 | 0.502 |
| Works | drills-phase2d | 973.800 | 14.400 | 5.413 | 3.885 | 73.419/75.803 | 88.717 | 0.142 |
| Works | drills-phase3c | 1001.400 | 9.600 | 7.317 | 5.697 | 78.728/61.300 | 86.617 | 0.119 |
| Works | legacy | 2306.500 | 38.000 | 6.539 | 16.440 | 94.741/91.292 | 210.150 | 0.468 |
| Trenches | candidate90 | 798.900 | 16.600 | 1.454 | 66.474 | 39.698/35.936 | 611.033 | 0.176 |
| Trenches | drills-phase2d | 495.600 | 6.500 | 2.657 | 36.501 | 25.134/27.685 | 78.217 | 0.084 |
| Trenches | drills-phase3c | 790.100 | 11.900 | 2.866 | 36.609 | 24.217/28.267 | 100.917 | 0.141 |
| Trenches | legacy | 1989.300 | 32.900 | 3.946 | 31.277 | 35.672/37.111 | 255.383 | 0.410 |
| F1 | candidate90 | 450.544 | 12.989 | 3.109 | 38.359 | 48.768/48.803 | 39.846 | 0.452 |
| F1 | drills-phase2d | 757.711 | 16.900 | 7.102 | 3.412 | 46.037/44.289 | 59.394 | 0.607 |
| F1 | drills-phase3c | 459.400 | 10.733 | 6.509 | 3.354 | 44.336/40.319 | 58.536 | 0.441 |
| F1 | legacy | 718.200 | 15.767 | 5.102 | 13.627 | 53.498/54.087 | 127.523 | 0.496 |

### Paired intervals

95% percentile paired intervals; F1 resamples generated-map clusters and authored maps resample battle seeds. Missing horizons are excluded pairwise and counts are disclosed. Inconclusive is not demonstrated equivalence.

| Set | Reference | Criterion | Paired n | Mean delta | CI95 | Finding |
|---|---|---|---:|---:|---|---|
| F1 | candidate90 | shots | 90 | 8.8556 | -64.4236 / 76.0667 | inconclusive |
| F1 | candidate90 | casualties_total | 90 | -2.2556 | -3.8781 / -0.6222 | regression |
| F1 | candidate90 | nearest_m | 90 | 3.4008 | 2.6513 / 4.1955 | improved |
| F1 | candidate90 | under_2m | 90 | -0.3500 | -0.4103 / -0.2890 | improved |
| F1 | candidate90 | closure_120s_m | 80 | -5.4326 | -11.8365 / 1.3617 | inconclusive |
| F1 | candidate90 | closure_240s_m | 58 | -10.8406 | -17.5897 / -3.2994 | regression |
| F1 | candidate90 | orders_azure_per_minute | 90 | 18.6907 | 6.0883 / 31.2234 | regression |
| F1 | drills-phase2d | shots | 90 | -298.3111 | -392.1600 / -219.2228 | regression |
| F1 | drills-phase2d | casualties_total | 90 | -6.1667 | -8.4111 / -4.1772 | regression |
| F1 | drills-phase2d | nearest_m | 90 | -0.5927 | -1.0758 / -0.0566 | regression |
| F1 | drills-phase2d | under_2m | 90 | -0.0006 | -0.0112 / 0.0092 | inconclusive |
| F1 | drills-phase2d | closure_120s_m | 83 | -1.4902 | -4.5156 / 1.1720 | inconclusive |
| F1 | drills-phase2d | closure_240s_m | 50 | -5.4256 | -10.5613 / -0.3801 | regression |
| F1 | drills-phase2d | orders_azure_per_minute | 90 | -0.8576 | -10.9066 / 9.4489 | inconclusive |
| F1 | legacy | shots | 90 | -258.8000 | -361.0122 / -158.8617 | regression |
| F1 | legacy | casualties_total | 90 | -5.0333 | -7.0333 / -3.2000 | regression |
| F1 | legacy | nearest_m | 90 | 1.4070 | 0.8895 / 1.9935 | improved |
| F1 | legacy | under_2m | 90 | -0.1027 | -0.1199 / -0.0870 | improved |
| F1 | legacy | closure_120s_m | 84 | -9.1929 | -12.8231 / -5.7554 | regression |
| F1 | legacy | closure_240s_m | 58 | -11.5572 | -15.5625 / -7.3589 | regression |
| F1 | legacy | orders_azure_per_minute | 90 | -68.9864 | -84.3699 / -53.2334 | improved |
| Trenches | candidate90 | shots | 10 | -8.8000 | -268.8200 / 279.1125 | inconclusive |
| Trenches | candidate90 | casualties_total | 10 | -4.7000 | -9.9000 / 0.2000 | inconclusive |
| Trenches | candidate90 | nearest_m | 10 | 1.4125 | 1.2118 / 1.5773 | improved |
| Trenches | candidate90 | under_2m | 10 | -0.2986 | -0.3248 / -0.2713 | improved |
| Trenches | candidate90 | closure_120s_m | 10 | -15.4802 | -17.1421 / -13.3759 | regression |
| Trenches | candidate90 | closure_240s_m | 10 | -7.6680 | -11.8418 / -3.1569 | regression |
| Trenches | candidate90 | orders_azure_per_minute | 10 | -510.1167 | -635.7337 / -389.7046 | improved |
| Trenches | drills-phase2d | shots | 10 | 294.5000 | 47.7900 / 543.8075 | improved |
| Trenches | drills-phase2d | casualties_total | 10 | 5.4000 | 0.4000 / 10.2000 | improved |
| Trenches | drills-phase2d | nearest_m | 10 | 0.2095 | 0.0077 / 0.4042 | improved |
| Trenches | drills-phase2d | under_2m | 10 | 0.0011 | -0.0340 / 0.0386 | inconclusive |
| Trenches | drills-phase2d | closure_120s_m | 10 | -0.9161 | -2.8461 / 0.7697 | inconclusive |
| Trenches | drills-phase2d | closure_240s_m | 10 | 0.5825 | -1.1759 / 2.5430 | inconclusive |
| Trenches | drills-phase2d | orders_azure_per_minute | 10 | 22.7000 | 10.4458 / 35.5846 | regression |
| Trenches | legacy | shots | 10 | -1199.2000 | -1563.2125 / -837.4900 | regression |
| Trenches | legacy | casualties_total | 10 | -21.0000 | -27.2000 / -15.0975 | regression |
| Trenches | legacy | nearest_m | 10 | -1.0800 | -1.7589 / -0.4035 | regression |
| Trenches | legacy | under_2m | 10 | 0.0533 | 0.0022 / 0.1030 | regression |
| Trenches | legacy | closure_120s_m | 10 | -11.4551 | -13.2909 / -9.6430 | regression |
| Trenches | legacy | closure_240s_m | 10 | -8.8438 | -15.8961 / -2.2629 | regression |
| Trenches | legacy | orders_azure_per_minute | 10 | -154.4667 | -175.5183 / -133.9996 | improved |
| Works | candidate90 | shots | 10 | 13.0000 | -163.4050 / 193.1225 | inconclusive |
| Works | candidate90 | casualties_total | 10 | -29.2000 | -32.6000 / -25.4000 | regression |
| Works | candidate90 | nearest_m | 10 | 6.3402 | 5.9135 / 6.7075 | improved |
| Works | candidate90 | under_2m | 10 | -0.7404 | -0.7607 / -0.7195 | improved |
| Works | candidate90 | closure_120s_m | 10 | -30.0780 | -32.0755 / -28.0817 | regression |
| Works | candidate90 | closure_240s_m | 10 | -48.0554 | -54.6873 / -40.6743 | regression |
| Works | candidate90 | orders_azure_per_minute | 10 | 22.2833 | 13.2158 / 33.3354 | regression |
| Works | drills-phase2d | shots | 10 | 27.6000 | -227.4050 / 269.8075 | inconclusive |
| Works | drills-phase2d | casualties_total | 10 | -4.8000 | -8.3000 / -1.4000 | regression |
| Works | drills-phase2d | nearest_m | 10 | 1.9030 | 1.3206 / 2.5467 | improved |
| Works | drills-phase2d | under_2m | 10 | 0.0181 | -0.0002 / 0.0387 | inconclusive |
| Works | drills-phase2d | closure_120s_m | 10 | 5.3093 | 3.9191 / 6.7144 | improved |
| Works | drills-phase2d | closure_240s_m | 10 | -14.5027 | -22.9344 / -6.3721 | regression |
| Works | drills-phase2d | orders_azure_per_minute | 10 | -2.1000 | -14.0508 / 12.2175 | inconclusive |
| Works | legacy | shots | 10 | -1305.1000 | -1622.7375 / -963.8875 | regression |
| Works | legacy | casualties_total | 10 | -28.4000 | -31.2000 / -25.4975 | regression |
| Works | legacy | nearest_m | 10 | 0.7779 | 0.0239 / 1.4334 | improved |
| Works | legacy | under_2m | 10 | -0.1074 | -0.1319 / -0.0832 | improved |
| Works | legacy | closure_120s_m | 10 | -16.0134 | -19.1178 / -13.2658 | regression |
| Works | legacy | closure_240s_m | 10 | -29.9921 | -36.2420 / -23.4350 | regression |
| Works | legacy | orders_azure_per_minute | 10 | -123.5333 | -139.2342 / -107.3279 | improved |

Full distributions and diagnostic/conformance intervals: `.local/phase3c/distributions.md` and `paired-criteria.json`. The440-run machine-readable comparison in `paired-input.json` contains110 new drills,110 Phase2d drills, and220 historical baseline runs.

## Per-run disclosure (20 authored and 90 F1)

P3c=this build; P2=Phase2d; C=candidate90; L=legacy. Both-side casualty fractions remain disclosed (A/E). NA is unavailable horizon evidence, omitted pairwise with counts shown above, not an imputed failure. No per-run conjunction or tactical pass-count scoreboard is used.

| Set / draw / seed | Shots P3c/P2/C/L | Casualties P3c/P2/C/L | P3c A/E casualty % | NN m P3c/P2/L | <2m % P3c/P2/L | Closure120 P3c/P2/C | Closure240 P3c/P2/C | Azure orders/min P3c/P2/C | Hits/soldier-min P3c/P2/C |
|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|
| works / 0 / 100 | 696.00/1263.00/839.00/2583.00 | 3.00/16.00/37.00/36.00 | 0.0/9.4 | 7.61/4.80/7.27 | 9.07/3.60/16.21 | 80.80/72.21/108.43 | 79.03/74.08/106.78 | 108.67/102.00/68.33 | 0.07/0.16/0.48 |
| works / 0 / 101 | 600.00/1049.00/1038.00/2012.00 | 8.00/19.00/41.00/35.00 | 18.8/6.2 | 6.81/5.72/5.04 | 7.20/5.01/23.52 | 76.64/72.82/108.32 | 44.60/81.28/106.43 | 79.67/103.67/57.17 | 0.10/0.18/0.55 |
| works / 0 / 102 | 861.00/718.00/965.00/2270.00 | 8.00/8.00/45.00/35.00 | 0.0/25.0 | 7.93/4.17/5.98 | 4.38/7.42/16.51 | 81.61/73.47/106.23 | 77.00/76.93/118.03 | 74.67/84.33/69.83 | 0.10/0.08/0.63 |
| works / 0 / 103 | 1328.00/845.00/1272.00/2347.00 | 13.00/15.00/42.00/40.00 | 9.4/31.2 | 7.79/6.35/5.51 | 3.53/3.97/19.16 | 76.29/73.78/112.32 | 41.99/75.70/104.80 | 82.50/91.33/69.50 | 0.15/0.15/0.54 |
| works / 0 / 104 | 1522.00/1428.00/1067.00/2086.00 | 6.00/19.00/41.00/40.00 | 9.4/9.4 | 5.75/5.30/7.56 | 9.63/2.17/14.20 | 82.15/76.56/110.46 | 59.13/75.44/109.71 | 70.00/85.00/64.17 | 0.09/0.19/0.52 |
| works / 0 / 105 | 567.00/1073.00/1003.00/2318.00 | 5.00/13.00/34.00/41.00 | 3.1/12.5 | 7.17/5.96/6.80 | 7.72/3.50/13.31 | 78.07/72.98/109.37 | 62.97/74.19/109.55 | 88.17/87.33/69.50 | 0.08/0.14/0.41 |
| works / 0 / 106 | 1107.00/1320.00/973.00/2803.00 | 14.00/17.00/40.00/41.00 | 21.9/21.9 | 7.28/5.40/6.88 | 3.21/3.30/16.53 | 77.84/74.24/108.77 | 54.26/74.87/109.94 | 76.00/97.83/66.17 | 0.16/0.18/0.51 |
| works / 0 / 107 | 1520.00/1047.00/1197.00/1878.00 | 14.00/15.00/41.00/38.00 | 12.5/31.2 | 8.07/4.90/7.56 | 3.96/5.42/12.54 | 75.84/74.24/109.79 | 56.79/75.13/109.62 | 74.17/93.33/57.33 | 0.15/0.15/0.53 |
| works / 0 / 108 | 1035.00/586.00/841.00/1962.00 | 13.00/12.00/39.00/32.00 | 25.0/15.6 | 7.87/5.73/6.28 | 2.41/2.34/17.33 | 80.41/73.90/107.26 | 58.78/72.58/110.62 | 90.17/68.17/59.83 | 0.17/0.10/0.49 |
| works / 0 / 109 | 778.00/409.00/689.00/2806.00 | 12.00/10.00/28.00/42.00 | 18.8/18.8 | 6.90/5.81/6.51 | 5.87/2.11/15.09 | 77.64/69.98/107.12 | 78.47/77.82/108.08 | 122.17/74.17/61.50 | 0.12/0.08/0.34 |
| trenches / 0 / 100 | 656.00/803.00/598.00/2104.00 | 9.00/8.00/11.00/40.00 | 18.8/9.4 | 2.86/2.41/4.17 | 35.91/39.97/28.50 | 22.45/24.76/42.08 | 24.25/26.15/41.18 | 106.83/77.33/509.50 | 0.10/0.09/0.10 |
| trenches / 0 / 101 | 784.00/481.00/1342.00/1569.00 | 10.00/5.00/17.00/24.00 | 6.2/25.0 | 2.96/2.67/3.39 | 34.07/37.24/33.43 | 23.92/23.98/37.65 | 30.24/23.73/27.90 | 116.67/64.17/313.33 | 0.13/0.08/0.18 |
| trenches / 0 / 102 | 753.00/962.00/1179.00/1774.00 | 8.00/17.00/23.00/28.00 | 9.4/15.6 | 3.00/2.79/2.58 | 31.67/34.41/39.51 | 24.00/23.98/32.20 | 22.61/25.64/36.55 | 93.67/88.00/836.17 | 0.12/0.17/0.25 |
| trenches / 0 / 103 | 1075.00/239.00/511.00/1805.00 | 21.00/2.00/14.00/29.00 | 43.8/21.9 | 2.98/2.66/3.30 | 34.52/40.74/30.39 | 22.85/28.46/41.65 | 36.27/33.66/33.43 | 122.17/82.50/473.00 | 0.23/0.04/0.18 |
| trenches / 0 / 104 | 1331.00/521.00/817.00/1377.00 | 20.00/8.00/18.00/26.00 | 50.0/12.5 | 3.47/3.06/2.69 | 32.37/35.22/40.27 | 23.81/30.56/39.89 | 32.18/34.98/34.42 | 103.83/77.33/670.00 | 0.22/0.11/0.19 |
| trenches / 0 / 105 | 632.00/379.00/558.00/1948.00 | 12.00/4.00/15.00/31.00 | 28.1/9.4 | 3.11/2.64/5.77 | 32.70/30.55/27.75 | 24.54/23.59/40.50 | 28.98/28.25/32.04 | 125.50/67.67/428.33 | 0.12/0.07/0.14 |
| trenches / 0 / 106 | 394.00/205.00/552.00/2552.00 | 9.00/2.00/13.00/41.00 | 15.6/12.5 | 2.66/2.81/4.41 | 40.90/34.05/26.96 | 25.50/24.25/43.71 | 26.13/24.25/36.94 | 72.50/64.00/983.00 | 0.10/0.03/0.13 |
| trenches / 0 / 107 | 225.00/507.00/655.00/2284.00 | 1.00/6.00/15.00/39.00 | 0.0/3.1 | 2.06/2.43/4.68 | 45.69/38.81/28.78 | 25.19/23.01/39.85 | 30.74/29.41/39.22 | 75.83/81.50/580.33 | 0.02/0.07/0.15 |
| trenches / 0 / 108 | 998.00/387.00/385.00/2262.00 | 16.00/5.00/10.00/39.00 | 40.6/9.4 | 2.92/2.25/4.14 | 36.07/42.79/30.53 | 26.62/24.15/41.72 | 26.80/23.88/37.17 | 95.00/87.17/703.17 | 0.19/0.08/0.11 |
| trenches / 0 / 109 | 1053.00/472.00/1392.00/2218.00 | 13.00/8.00/30.00/32.00 | 18.8/21.9 | 2.64/2.84/4.34 | 42.18/31.24/26.66 | 23.29/24.60/37.73 | 24.49/26.91/40.51 | 97.17/92.50/613.50 | 0.18/0.11/0.31 |
| F1 / 1 / 107 | 454.00/1180.00/466.00/1038.00 | 7.00/25.00/14.00/16.00 | 29.2/0.0 | 5.92/8.54/7.69 | 0.28/1.54/11.07 | 49.52/60.26/70.99 | 49.42/76.69/73.08 | 39.33/62.33/64.00 | 0.13/0.63/0.28 |
| F1 / 1 / 108 | 300.00/832.00/411.00/1027.00 | 8.00/20.00/12.00/21.00 | 33.3/0.0 | 5.84/5.64/6.14 | 0.35/1.06/13.19 | 55.58/56.46/61.41 | 55.58/43.51/74.44 | 37.83/59.50/70.50 | 0.12/0.41/0.23 |
| F1 / 1 / 109 | 194.00/1118.00/512.00/835.00 | 7.00/29.00/11.00/15.00 | 29.2/0.0 | 5.94/8.46/6.14 | 0.18/4.49/10.17 | 41.51/69.55/69.31 | 41.51/69.11/70.58 | 34.67/60.50/54.17 | 0.12/0.77/0.21 |
| F1 / 2 / 107 | 231.00/300.00/205.00/486.00 | 7.00/6.00/14.00/10.00 | 12.5/100.0 | 8.01/7.46/4.34 | 11.41/3.32/26.00 | NA/48.97/NA | NA/NA/NA | 86.43/127.29/98.55 | 0.56/0.42/1.04 |
| F1 / 2 / 108 | 285.00/303.00/247.00/215.00 | 8.00/8.00/16.00/5.00 | 16.7/100.0 | 9.90/7.93/4.26 | 4.72/3.71/26.76 | 30.30/55.19/58.05 | NA/NA/NA | 72.22/127.25/105.22 | 0.37/0.42/1.11 |
| F1 / 2 / 109 | 418.00/402.00/132.00/314.00 | 6.00/9.00/8.00/8.00 | 8.3/100.0 | 9.90/6.54/4.34 | 2.50/3.56/26.05 | 36.14/44.26/NA | NA/NA/NA | 64.67/104.23/117.46 | 0.26/0.42/0.67 |
| F1 / 3 / 107 | 446.00/424.00/421.00/719.00 | 11.00/14.00/11.00/22.00 | 20.8/100.0 | 5.79/7.52/4.32 | 3.70/2.60/17.89 | 36.23/NA/5.44 | NA/NA/5.44 | 121.73/168.07/17.50 | 0.65/1.45/0.25 |
| F1 / 3 / 108 | 495.00/497.00/581.00/508.00 | 19.00/13.00/13.00/17.00 | 54.2/100.0 | 5.42/8.65/5.92 | 8.24/2.83/16.92 | NA/NA/9.03 | NA/NA/7.75 | 107.62/117.23/21.33 | 1.41/0.83/0.33 |
| F1 / 3 / 109 | 575.00/562.00/552.00/1073.00 | 17.00/15.00/13.00/24.00 | 45.8/100.0 | 6.07/7.33/4.29 | 6.29/2.36/12.28 | 36.81/38.39/9.90 | NA/NA/7.75 | 105.99/118.15/18.83 | 0.96/0.85/0.36 |
| F1 / 4 / 107 | 272.00/462.00/213.00/497.00 | 13.00/16.00/10.00/16.00 | 54.2/0.0 | 5.43/4.38/4.72 | 0.74/10.82/17.57 | 20.56/28.57/13.91 | 20.56/27.19/12.73 | 24.33/26.33/21.17 | 0.33/0.46/0.25 |
| F1 / 4 / 108 | 335.00/407.00/262.00/425.00 | 15.00/18.00/12.00/20.00 | 37.5/100.0 | 6.07/5.40/4.86 | 4.06/1.73/15.82 | 39.11/38.46/17.49 | NA/NA/12.52 | 119.71/79.06/23.50 | 0.98/0.83/0.30 |
| F1 / 4 / 109 | 293.00/547.00/172.00/497.00 | 11.00/13.00/10.00/13.00 | 20.8/100.0 | 5.49/5.91/5.04 | 3.02/8.41/14.74 | NA/31.77/7.49 | NA/NA/4.31 | 117.09/60.37/19.00 | 0.78/0.50/0.21 |
| F1 / 5 / 107 | 1187.00/1600.00/806.00/1459.00 | 22.00/30.00/17.00/17.00 | 62.5/87.5 | 7.39/7.81/5.07 | 1.76/4.85/11.89 | 66.81/67.31/68.59 | 67.36/64.75/69.22 | 49.00/50.00/41.17 | 0.66/1.13/0.46 |
| F1 / 5 / 108 | 858.00/1326.00/564.00/1224.00 | 22.00/22.00/17.00/20.00 | 75.0/50.0 | 8.05/6.04/4.78 | 10.62/2.20/15.45 | 62.71/63.28/67.51 | 57.72/62.20/67.35 | 50.50/41.67/36.00 | 0.67/0.69/0.50 |
| F1 / 5 / 109 | 485.00/1127.00/644.00/1149.00 | 10.00/21.00/14.00/18.00 | 37.5/12.5 | 5.99/9.45/5.08 | 1.64/1.45/12.80 | 60.19/64.33/68.30 | 59.69/66.04/68.06 | 37.00/38.67/42.00 | 0.23/0.66/0.38 |
| F1 / 6 / 107 | 398.00/731.00/338.00/404.00 | 13.00/23.00/10.00/10.00 | 20.8/100.0 | 8.91/6.61/4.32 | 6.51/10.78/32.72 | 36.25/26.98/45.56 | NA/37.93/45.18 | 127.66/53.25/30.00 | 0.76/0.73/0.26 |
| F1 / 6 / 108 | 358.00/815.00/497.00/727.00 | 14.00/25.00/18.00/21.00 | 25.0/100.0 | 9.11/7.85/4.45 | 1.65/1.88/16.79 | 35.16/19.95/47.07 | NA/26.46/46.83 | 125.60/55.83/29.83 | 0.78/0.80/0.53 |
| F1 / 6 / 109 | 158.00/661.00/427.00/638.00 | 7.00/18.00/14.00/20.00 | 29.2/0.0 | 9.53/6.52/5.74 | 0.43/4.17/10.79 | 21.74/44.90/46.80 | 21.74/NA/46.66 | 25.83/77.52/31.00 | 0.16/0.73/0.37 |
| F1 / 7 / 107 | 593.00/454.00/749.00/553.00 | 13.00/7.00/7.00/11.00 | 43.8/100.0 | 4.97/6.63/4.54 | 6.96/1.44/15.58 | 61.30/56.67/65.26 | NA/NA/63.76 | 99.50/50.48/18.00 | 1.33/0.74/0.30 |
| F1 / 7 / 108 | 920.00/1219.00/513.00/999.00 | 16.00/16.00/8.00/9.00 | 62.5/100.0 | 6.00/6.92/6.15 | 4.56/1.12/11.54 | 64.75/55.66/63.05 | NA/59.13/64.13 | 64.39/25.17/17.00 | 1.11/0.62/0.28 |
| F1 / 7 / 109 | 592.00/854.00/754.00/1138.00 | 9.00/11.00/10.00/13.00 | 18.8/100.0 | 6.18/6.50/6.10 | 5.66/4.49/8.68 | 66.86/58.15/63.01 | NA/NA/61.38 | 67.30/56.27/17.83 | 0.61/0.71/0.36 |
| F1 / 8 / 107 | 279.00/617.00/435.00/384.00 | 4.00/13.00/11.00/14.00 | 18.8/10.0 | 5.00/5.30/5.00 | 1.24/9.83/13.31 | 32.53/36.93/54.99 | 32.53/23.36/55.41 | 18.17/26.67/27.50 | 0.11/0.41/0.40 |
| F1 / 8 / 108 | 225.00/587.00/468.00/897.00 | 5.00/17.00/11.00/16.00 | 31.2/0.0 | 6.00/8.15/5.02 | 1.16/2.52/5.87 | 34.70/44.76/56.81 | 34.70/57.44/56.44 | 20.50/42.36/26.17 | 0.11/0.53/0.35 |
| F1 / 8 / 109 | 120.00/539.00/381.00/461.00 | 3.00/14.00/9.00/12.00 | 18.8/0.0 | 5.56/8.37/5.02 | 8.50/1.05/9.26 | 24.30/26.89/56.97 | 24.30/34.46/56.97 | 18.17/38.17/27.83 | 0.07/0.45/0.30 |
| F1 / 9 / 107 | 489.00/889.00/488.00/676.00 | 9.00/30.00/17.00/18.00 | 37.5/0.0 | 7.26/8.73/4.52 | 0.79/2.38/17.74 | 61.86/65.37/73.35 | 58.47/63.11/72.96 | 45.00/47.50/60.17 | 0.19/0.93/0.39 |
| F1 / 9 / 108 | 704.00/680.00/396.00/854.00 | 13.00/22.00/12.00/17.00 | 50.0/10.0 | 7.10/6.86/4.53 | 3.17/4.76/14.39 | 62.73/69.07/74.77 | 60.89/NA/73.53 | 45.00/90.30/53.17 | 0.25/0.79/0.28 |
| F1 / 9 / 109 | 359.00/921.00/587.00/448.00 | 12.00/27.00/18.00/11.00 | 45.8/10.0 | 6.11/7.23/4.82 | 0.95/7.18/11.32 | 54.58/69.27/74.54 | 54.58/76.49/72.58 | 36.33/66.40/55.17 | 0.26/0.83/0.47 |
| F1 / 10 / 107 | 299.00/467.00/443.00/513.00 | 9.00/14.00/14.00/15.00 | 50.0/10.0 | 5.53/6.72/5.59 | 1.18/0.50/9.30 | 31.61/33.85/53.77 | 35.48/15.37/49.67 | 29.17/29.17/29.83 | 0.24/0.45/0.50 |
| F1 / 10 / 108 | 218.00/448.00/468.00/504.00 | 6.00/16.00/14.00/12.00 | 25.0/20.0 | 5.63/6.72/5.87 | 1.76/1.08/5.34 | 23.74/47.30/51.61 | 23.74/NA/50.59 | 21.67/73.28/30.33 | 0.16/0.86/0.46 |
| F1 / 10 / 109 | 310.00/293.00/237.00/349.00 | 6.00/6.00/11.00/10.00 | 37.5/0.0 | 6.00/5.32/4.51 | 0.36/0.35/15.15 | 16.42/16.07/48.16 | 14.81/16.07/48.38 | 25.33/17.67/35.50 | 0.13/0.16/0.40 |
| F1 / 11 / 107 | 569.00/258.00/1189.00/460.00 | 11.00/4.00/17.00/7.00 | 20.8/100.0 | 6.00/4.88/4.50 | 10.00/6.52/17.94 | 59.44/45.24/56.50 | NA/45.24/60.86 | 81.67/23.33/46.99 | 0.68/0.09/0.55 |
| F1 / 11 / 108 | 375.00/844.00/1045.00/1559.00 | 13.00/13.00/14.00/20.00 | 29.2/100.0 | 5.50/7.12/5.22 | 6.56/6.32/17.11 | NA/53.64/56.08 | NA/NA/59.71 | 128.12/87.52/47.56 | 1.23/0.62/0.45 |
| F1 / 11 / 109 | 744.00/1218.00/1216.00/1536.00 | 14.00/13.00/22.00/17.00 | 33.3/100.0 | 5.98/8.02/5.83 | 11.92/5.66/10.50 | 62.95/52.96/57.62 | NA/55.08/58.08 | 86.02/44.67/61.30 | 0.78/0.31/0.99 |
| F1 / 12 / 107 | 343.00/753.00/187.00/379.00 | 10.00/5.00/10.00/7.00 | 37.5/100.0 | 6.00/6.29/6.00 | 11.60/2.42/14.46 | 75.96/75.84/NA | NA/NA/NA | 82.16/82.82/69.57 | 0.58/0.32/1.08 |
| F1 / 12 / 108 | 330.00/377.00/706.00/186.00 | 4.00/4.00/12.00/1.00 | 0.0/100.0 | 6.00/7.51/4.34 | 4.67/4.20/18.96 | NA/80.30/67.45 | NA/NA/76.61 | 119.36/106.02/33.07 | 0.52/0.39/0.62 |
| F1 / 12 / 109 | 367.00/402.00/573.00/425.00 | 4.00/6.00/7.00/6.00 | 0.0/100.0 | 5.61/6.33/4.40 | 4.48/5.10/16.99 | 90.06/74.41/76.86 | NA/NA/NA | 108.18/116.65/37.99 | 0.53/0.47/0.50 |
| F1 / 13 / 107 | 523.00/1351.00/739.00/1204.00 | 7.00/18.00/17.00/14.00 | 31.2/16.7 | 6.00/6.00/5.00 | 0.17/0.67/9.25 | 47.58/51.39/66.23 | 47.58/72.49/68.90 | 23.67/36.25/37.50 | 0.15/0.54/0.53 |
| F1 / 13 / 108 | 210.00/1150.00/654.00/1434.00 | 5.00/17.00/14.00/11.00 | 31.2/0.0 | 6.00/6.55/5.71 | 0.13/1.62/3.67 | 47.80/67.82/66.57 | 47.80/NA/70.70 | 22.33/48.47/39.50 | 0.11/0.68/0.41 |
| F1 / 13 / 109 | 303.00/860.00/607.00/990.00 | 5.00/18.00/10.00/11.00 | 31.2/0.0 | 6.00/5.41/5.45 | 0.13/1.23/4.40 | 47.41/54.42/60.83 | 47.41/67.49/67.76 | 20.83/32.17/40.50 | 0.10/0.63/0.23 |
| F1 / 14 / 107 | 906.00/1019.00/592.00/634.00 | 14.00/20.00/15.00/11.00 | 68.8/37.5 | 5.06/6.68/4.40 | 2.43/6.96/20.89 | 62.58/65.84/63.95 | 63.36/NA/63.79 | 26.00/51.79/31.67 | 0.58/1.24/0.62 |
| F1 / 14 / 108 | 708.00/1129.00/411.00/488.00 | 12.00/15.00/10.00/12.00 | 56.2/37.5 | 4.40/4.61/4.40 | 2.72/2.38/25.73 | 63.70/61.00/65.23 | 63.70/62.95/64.67 | 26.67/23.67/30.67 | 0.43/0.64/0.34 |
| F1 / 14 / 109 | 838.00/1302.00/658.00/539.00 | 11.00/17.00/12.00/10.00 | 62.5/12.5 | 4.46/4.61/4.40 | 2.02/2.08/18.04 | 64.06/58.02/66.37 | 64.89/56.92/64.67 | 25.17/26.17/26.17 | 0.42/0.77/0.46 |
| F1 / 15 / 107 | 448.00/492.00/360.00/528.00 | 11.00/9.00/12.00/12.00 | 62.5/8.3 | 5.51/5.14/6.00 | 1.23/0.75/8.53 | 53.91/56.39/60.45 | 53.85/55.92/60.45 | 20.17/23.50/24.67 | 0.31/0.25/0.39 |
| F1 / 15 / 108 | 433.00/756.00/495.00/621.00 | 8.00/19.00/14.00/12.00 | 50.0/0.0 | 4.96/5.71/5.00 | 13.24/1.60/10.51 | 54.67/56.84/59.96 | 54.67/NA/61.03 | 22.33/40.31/28.50 | 0.21/0.89/0.45 |
| F1 / 15 / 109 | 470.00/289.00/537.00/524.00 | 11.00/10.00/13.00/9.00 | 56.2/16.7 | 5.54/8.79/6.00 | 0.69/0.80/8.10 | 53.79/52.66/63.75 | 53.25/52.66/67.64 | 19.50/20.50/30.50 | 0.28/0.25/0.45 |
| F1 / 16 / 107 | 533.00/463.00/227.00/353.00 | 10.00/17.00/5.00/13.00 | 12.5/100.0 | 8.77/4.52/4.40 | 1.71/4.08/11.51 | 38.40/36.79/18.23 | NA/NA/18.23 | 86.43/71.38/24.00 | 0.82/1.27/0.16 |
| F1 / 16 / 108 | 431.00/363.00/158.00/426.00 | 12.00/12.00/4.00/12.00 | 25.0/100.0 | 5.00/10.70/5.00 | 9.35/0.88/13.26 | 41.52/32.95/1.80 | NA/27.15/1.80 | 87.73/25.00/19.00 | 0.95/0.45/0.12 |
| F1 / 16 / 109 | 480.00/334.00/298.00/440.00 | 13.00/11.00/11.00/15.00 | 50.0/62.5 | 5.94/9.76/4.82 | 2.43/1.28/7.79 | 38.35/25.35/22.35 | 37.12/25.35/22.30 | 28.50/24.00/20.67 | 0.53/0.40/0.38 |
| F1 / 17 / 107 | 170.00/846.00/219.00/1148.00 | 7.00/26.00/12.00/27.00 | 25.0/8.3 | 6.41/6.00/6.00 | 0.24/1.28/9.41 | 18.46/42.38/52.20 | 18.46/50.63/52.20 | 27.17/66.25/43.33 | 0.11/0.71/0.30 |
| F1 / 17 / 108 | 225.00/937.00/294.00/861.00 | 7.00/24.00/10.00/23.00 | 29.2/0.0 | 6.41/7.44/6.00 | 0.28/1.52/4.99 | 16.49/39.16/51.82 | 16.49/37.12/51.96 | 27.83/48.83/57.17 | 0.12/0.61/0.21 |
| F1 / 17 / 109 | 273.00/1297.00/356.00/1138.00 | 7.00/32.00/22.00/26.00 | 25.0/8.3 | 6.22/9.86/6.00 | 0.87/2.24/6.16 | 18.67/41.25/51.56 | 18.47/49.63/51.75 | 23.67/48.83/44.33 | 0.12/0.87/0.59 |
| F1 / 18 / 107 | 503.00/1304.00/286.00/1103.00 | 10.00/29.00/14.00/23.00 | 29.2/25.0 | 9.90/8.98/5.00 | 0.36/3.13/5.96 | 26.90/37.04/52.00 | 26.90/40.75/52.00 | 31.33/59.00/50.50 | 0.20/0.93/0.32 |
| F1 / 18 / 108 | 773.00/1590.00/513.00/829.00 | 12.00/28.00/21.00/22.00 | 33.3/33.3 | 9.90/7.73/5.71 | 0.50/5.14/4.22 | 22.12/36.00/48.24 | 19.41/45.69/48.24 | 32.83/57.83/60.50 | 0.26/0.73/0.61 |
| F1 / 18 / 109 | 475.00/1503.00/303.00/1062.00 | 11.00/23.00/17.00/22.00 | 37.5/16.7 | 9.90/7.43/5.48 | 0.58/8.75/5.85 | 19.43/21.31/50.89 | 19.43/34.11/50.89 | 33.33/55.50/40.67 | 0.22/0.58/0.41 |
| F1 / 19 / 107 | 715.00/801.00/447.00/827.00 | 12.00/29.00/16.00/26.00 | 41.7/16.7 | 5.10/9.90/5.04 | 1.12/3.10/11.10 | 35.93/33.25/29.23 | 34.60/37.45/28.97 | 48.17/70.17/28.00 | 0.28/0.85/0.35 |
| F1 / 19 / 108 | 433.00/849.00/526.00/598.00 | 14.00/28.00/16.00/24.00 | 54.2/8.3 | 5.37/5.68/6.00 | 6.28/2.13/10.35 | 26.91/31.29/29.85 | 26.91/15.59/30.89 | 46.83/78.00/35.50 | 0.28/0.83/0.39 |
| F1 / 19 / 109 | 427.00/596.00/547.00/713.00 | 11.00/16.00/23.00/26.00 | 41.7/8.3 | 6.25/5.43/6.39 | 0.88/2.77/15.44 | 35.55/28.93/31.03 | 33.58/36.25/21.58 | 50.83/67.67/35.33 | 0.23/0.37/0.64 |
| F1 / 20 / 107 | 542.00/777.00/383.00/723.00 | 18.00/17.00/20.00/25.00 | 58.3/40.0 | 9.90/6.33/4.95 | 6.21/11.85/11.77 | 30.92/31.19/43.70 | 27.45/44.25/44.04 | 43.33/65.00/36.33 | 0.43/0.38/0.58 |
| F1 / 20 / 108 | 361.00/1074.00/484.00/922.00 | 13.00/22.00/22.00/23.00 | 45.8/20.0 | 8.43/8.96/4.53 | 1.26/4.99/16.83 | 28.66/33.46/44.10 | 21.54/47.56/45.21 | 40.83/92.38/39.50 | 0.33/0.71/0.69 |
| F1 / 20 / 109 | 253.00/1023.00/602.00/752.00 | 8.00/23.00/27.00/19.00 | 33.3/0.0 | 8.47/9.87/5.06 | 0.48/6.75/9.41 | 25.52/26.94/47.53 | 24.08/27.26/44.62 | 37.17/90.61/36.67 | 0.17/0.66/0.95 |
| F1 / 21 / 107 | 172.00/534.00/54.00/434.00 | 5.00/15.00/2.00/14.00 | 31.2/0.0 | 5.55/6.00/5.02 | 0.38/1.15/3.41 | 25.38/33.81/2.99 | 25.38/36.55/2.99 | 22.50/31.67/8.50 | 0.09/0.43/0.06 |
| F1 / 21 / 108 | 322.00/617.00/33.00/347.00 | 5.00/18.00/3.00/9.00 | 25.0/8.3 | 6.06/6.00/5.00 | 0.48/1.55/3.50 | 32.91/28.93/3.36 | 28.56/41.79/3.36 | 21.00/44.70/7.67 | 0.15/0.55/0.07 |
| F1 / 21 / 109 | 322.00/711.00/65.00/538.00 | 4.00/13.00/2.00/19.00 | 25.0/0.0 | 6.18/6.00/5.00 | 0.56/0.52/7.68 | 26.39/28.32/3.27 | 26.39/35.64/3.27 | 20.83/30.33/7.33 | 0.09/0.37/0.07 |
| F1 / 22 / 107 | 473.00/1515.00/401.00/988.00 | 10.00/21.00/7.00/15.00 | 41.7/0.0 | 8.02/6.00/5.10 | 0.31/1.28/11.16 | 53.02/64.43/76.43 | 53.02/58.19/76.43 | 35.67/51.67/49.00 | 0.19/0.56/0.18 |
| F1 / 22 / 108 | 899.00/1153.00/554.00/1493.00 | 12.00/18.00/6.00/23.00 | 45.8/10.0 | 6.00/5.91/4.75 | 1.52/0.96/14.73 | 69.43/65.95/75.82 | 68.64/56.52/75.17 | 46.83/53.50/44.67 | 0.26/0.43/0.13 |
| F1 / 22 / 109 | 686.00/782.00/284.00/1498.00 | 10.00/12.00/9.00/15.00 | 37.5/10.0 | 9.58/5.03/5.61 | 0.64/7.14/16.99 | 56.45/65.79/75.31 | 55.99/57.85/75.43 | 43.17/46.33/54.17 | 0.22/0.24/0.18 |
| F1 / 23 / 107 | 521.00/952.00/727.00/394.00 | 14.00/19.00/25.00/13.00 | 33.3/100.0 | 7.00/5.36/4.26 | 4.91/1.11/23.36 | 54.64/34.96/51.53 | NA/36.62/53.47 | 122.41/38.67/22.50 | 0.95/0.54/1.20 |
| F1 / 23 / 108 | 616.00/1030.00/480.00/313.00 | 14.00/24.00/16.00/10.00 | 33.3/100.0 | 6.70/6.60/3.78 | 3.27/3.88/27.55 | 50.03/42.20/52.52 | NA/44.22/52.64 | 93.54/51.83/23.83 | 0.77/0.89/0.49 |
| F1 / 23 / 109 | 1020.00/831.00/478.00/674.00 | 17.00/14.00/16.00/13.00 | 62.5/33.3 | 5.00/5.66/4.13 | 2.56/5.87/24.16 | 40.30/42.73/49.43 | 36.21/NA/49.43 | 38.33/95.76/23.83 | 0.50/0.58/0.51 |
| F1 / 24 / 107 | 91.00/408.00/432.00/456.00 | 7.00/15.00/16.00/17.00 | 37.5/10.0 | 4.48/4.46/5.00 | 10.04/1.15/8.91 | 24.95/34.76/46.33 | 24.95/30.03/41.79 | 24.67/40.17/28.17 | 0.18/0.55/0.64 |
| F1 / 24 / 108 | 299.00/418.00/436.00/411.00 | 9.00/15.00/13.00/20.00 | 50.0/10.0 | 5.04/5.89/5.00 | 0.95/0.50/13.04 | 29.40/26.13/42.42 | 29.40/10.13/39.49 | 24.33/37.00/28.67 | 0.25/0.50/0.45 |
| F1 / 24 / 109 | 390.00/539.00/260.00/395.00 | 9.00/12.00/11.00/17.00 | 37.5/30.0 | 4.57/6.92/5.00 | 9.84/0.84/15.58 | 33.35/27.25/42.05 | 34.33/23.55/41.81 | 38.00/43.83/28.33 | 0.32/0.40/0.37 |
| F1 / 25 / 107 | 358.00/282.00/355.00/282.00 | 8.00/6.00/13.00/9.00 | 25.0/100.0 | 6.00/8.25/5.24 | 5.32/3.04/15.73 | 72.87/65.01/57.03 | NA/NA/69.66 | 104.09/83.62/41.00 | 0.71/0.52/0.56 |
| F1 / 25 / 108 | 323.00/625.00/715.00/225.00 | 6.00/8.00/14.00/3.00 | 12.5/100.0 | 6.00/7.49/6.00 | 11.12/9.80/19.51 | 69.27/69.06/57.96 | NA/NA/67.94 | 82.38/72.61/36.45 | 0.61/0.52/0.74 |
| F1 / 25 / 109 | 357.00/391.00/459.00/542.00 | 9.00/8.00/9.00/8.00 | 31.2/100.0 | 7.82/4.96/5.81 | 1.93/2.09/20.23 | 72.08/68.30/57.53 | NA/NA/NA | 78.73/64.64/41.68 | 0.76/0.49/0.55 |
| F1 / 26 / 107 | 498.00/795.00/515.00/545.00 | 15.00/24.00/20.00/13.00 | 20.8/100.0 | 6.74/7.75/5.00 | 2.32/10.72/11.83 | 40.19/33.61/46.78 | NA/35.51/NA | 148.92/49.67/78.28 | 0.70/0.62/1.05 |
| F1 / 26 / 108 | 480.00/686.00/540.00/648.00 | 15.00/28.00/20.00/22.00 | 20.8/100.0 | 7.89/9.90/5.00 | 1.98/2.93/13.97 | 37.10/31.99/44.56 | NA/36.87/43.10 | 128.97/79.71/34.00 | 0.63/0.95/0.55 |
| F1 / 26 / 109 | 511.00/682.00/538.00/650.00 | 21.00/21.00/24.00/25.00 | 45.8/100.0 | 9.37/9.90/4.52 | 1.76/9.72/14.74 | 29.25/18.96/48.08 | 35.57/28.38/47.00 | 77.75/43.83/33.00 | 0.68/0.52/0.67 |
| F1 / 27 / 107 | 552.00/479.00/216.00/402.00 | 10.00/16.00/14.00/17.00 | 16.7/100.0 | 5.48/8.99/4.59 | 2.42/1.86/11.58 | 41.32/30.03/NA | NA/NA/NA | 121.36/114.29/134.86 | 0.50/0.76/1.30 |
| F1 / 27 / 108 | 340.00/426.00/227.00/463.00 | 11.00/11.00/13.00/15.00 | 20.8/100.0 | 6.64/9.90/4.26 | 1.02/2.73/21.81 | 40.95/33.01/NA | NA/NA/NA | 144.65/108.43/132.83 | 0.59/0.50/1.20 |
| F1 / 27 / 109 | 213.00/592.00/354.00/733.00 | 8.00/11.00/12.00/24.00 | 8.3/100.0 | 6.41/9.90/4.40 | 3.03/1.94/16.52 | NA/24.86/40.77 | NA/33.86/40.44 | 207.29/63.84/32.00 | 0.83/0.36/0.31 |
| F1 / 28 / 107 | 266.00/760.00/142.00/517.00 | 13.00/21.00/9.00/23.00 | 45.8/20.0 | 6.02/8.57/6.00 | 0.73/0.57/7.58 | 33.47/37.93/0.00 | 33.43/26.48/0.00 | 33.83/43.83/11.50 | 0.29/0.57/0.19 |
| F1 / 28 / 108 | 471.00/325.00/154.00/957.00 | 16.00/8.00/7.00/27.00 | 58.3/20.0 | 5.96/9.90/4.92 | 0.91/0.40/17.47 | 32.09/22.03/2.11 | 32.09/22.03/0.00 | 36.00/37.00/9.83 | 0.40/0.19/0.13 |
| F1 / 28 / 109 | 219.00/568.00/124.00/801.00 | 11.00/16.00/7.00/28.00 | 41.7/10.0 | 4.81/9.90/5.00 | 8.26/2.32/12.90 | 35.21/33.62/0.00 | 35.21/19.28/0.00 | 42.83/52.67/11.17 | 0.27/0.38/0.15 |
| F1 / 29 / 107 | 635.00/1331.00/924.00/1771.00 | 17.00/22.00/20.00/20.00 | 37.5/100.0 | 7.65/5.00/5.00 | 2.85/2.86/11.44 | 62.68/61.36/52.46 | NA/61.55/64.23 | 65.11/51.83/41.17 | 0.67/0.66/0.55 |
| F1 / 29 / 108 | 980.00/1004.00/641.00/663.00 | 14.00/22.00/12.00/14.00 | 50.0/25.0 | 5.20/7.90/5.55 | 8.49/4.99/14.32 | 56.69/56.87/59.78 | 56.59/67.20/63.80 | 37.83/66.33/41.67 | 0.33/0.77/0.32 |
| F1 / 29 / 109 | 1104.00/1108.00/547.00/1815.00 | 19.00/23.00/12.00/22.00 | 70.8/25.0 | 8.06/6.00/5.90 | 1.22/5.48/10.55 | 58.37/57.19/59.81 | 55.07/NA/63.90 | 35.17/72.91/41.83 | 0.53/0.99/0.31 |
| F1 / 30 / 107 | 464.00/101.00/212.00/342.00 | 12.00/4.00/4.00/7.00 | 62.5/20.0 | 5.30/6.96/5.22 | 1.34/0.49/9.41 | 57.46/39.91/77.69 | 59.63/39.91/77.69 | 31.50/22.17/48.50 | 0.33/0.09/0.16 |
| F1 / 30 / 108 | 249.00/723.00/248.00/371.00 | 6.00/18.00/7.00/10.00 | 37.5/0.0 | 5.24/7.68/4.47 | 0.46/1.37/19.50 | 59.31/72.45/76.22 | 56.03/78.35/76.17 | 33.33/48.00/31.83 | 0.15/0.58/0.23 |
| F1 / 30 / 109 | 504.00/607.00/453.00/557.00 | 12.00/15.00/11.00/10.00 | 50.0/40.0 | 6.00/6.66/4.48 | 2.27/1.21/11.80 | 57.96/57.10/77.57 | 57.96/58.55/76.59 | 31.33/29.67/60.50 | 0.34/0.45/0.36 |


## Verification and reproducibility

- Full `./scripts/test-sim.sh`: PASS (exit 0; 239.697 s). Focused drills failures above are separate optional selectors, not hidden by the main-suite pass.
- Python: 57 tests pass (no Python test changes in this slice).
- Historical authored digests: 40/40 exact matches, legacy and candidate90, both maps seeds100–109 (`authored-parity/parity.json`).
- Drills trace parity: 3/3 exact matches, Works107, Trenches107, F1 draw1/107 (`trace-parity.json`).
- All 110 measured manifests identify the same frozen build (`measured-build-check.json`); no distribution run used another source revision.
- All110 candidate90 trace-reference manifests revalidated against their untraced baselines (`candidate-reference-revalidation.json`). No new candidate90 behavior or baseline replacement.
- Controller defaults/reruns: 0 exit (`defaults.log`). Legacy remains default.
- Engagement guard enabled: three zero-shot runs abort a ten-run block. 20 authored and 90 F1 runs complete; zero-shot counts 0/0 (`engagement-summary.json`).
- Protected layouts/terrain, frozen seed lists and `tools/evaluate_routes.py` retain all baseline hashes (`static-checks.json`). `git diff --check` is clean.
- Windows/Unreal stay with the architect; neither was invoked. No Fable launcher, commit, reset or stash. Existing uncommitted work preserved.

Commands (expanded case commands and manifest locations are stored by each runner):

```sh
python3 tools/source_id.py
./scripts/test-sim.sh --drills D08  # premeasurement integration, still fails consolidation
./scripts/test-sim.sh --drills D07  # unchanged phase-line control; passes
./scripts/test-sim.sh             # final full-suite.log
./scripts/battle-lab.sh --drills --seconds 1 --seed 107 --no-trace --out .local/phase3c/build-smoke
python3 -m unittest discover -s tests -p "test_*.py"
python3 .local/phase3c/run_mechanisms.py
python3 .local/phase3c/measure.py
# measure.py expands to:
python3 .local/phase3c/run_authored.py
python3 .local/phase3c/parity.py .local/phase3c/authored-parity .local/phase3c/final/battle-lab
python3 tools/run_family.py --binary .local/phase3c/final/battle-lab --out .local/phase3c/f1-dev --family F1 --gen-seeds 1-30 --seeds 107-109 --controllers drills --seconds 360 --jobs 2 --trace
python3 tests/check_controller_defaults.py --binary .local/phase3c/final/battle-lab --out .local/phase3c/defaults
python3 .local/phase3c/trace_checks.py
python3 .local/phase3c/diagnose.py
python3 .local/phase3c/analyze.py
python3 .local/phase3c/action_diagnostics.py
python3 .local/phase3c/static_checks.py
git diff --check
```

Premeasurement integration logs: `preflight-D08.log`, `preflight-D07.log`, `cli-build.log`; the frozen-binary diagnosis expands exact fixture commands in `fixture-diagnostics/results.json`. Only the final fingerprint was used for the distribution.

## Failure diagnostics

Frozen-binary fixture runs and exact commands are in `.local/phase3c/fixture-diagnostics/results.json`; all use production sensing and transport.

- **D08 / encounter 60:** both observer screen fractions are 1.0; covered attack, movement and physical angle pass, longest observed rush is 4.35 s. AssaultLine begins at 116.0 s and the phase-line receipt arrives at 121.35 s. Supported assault bounds follow at 123.35, 129.75, 136.15 and 142.15 s. At 146.60 s the drill pauses and all four rushers receive protected-slot choices. No consolidation or reorganisation occurs within the fixture. Source `SquadDrillSim.cpp:304` requires recent stationary, non-lifted delivery near the objective, but :308 returns on missing support without the 30 s recovery failure in AttackMove (:277). The trace and code support this as the remaining late-Assault stall; they do not prove the same cause in every distribution run. The final Assault Assign return at :312 is also unchecked; that is a separate code-level risk, not established as this fixture's cause.
- **D09 / encounter 62:** the imposed gap pauses at 38.40 s, selects protected slots for all four rushers, and resumes at 49.35 s with retained instance/generation; all three positive checks pass. **Control encounter 63** has real element-delivery gaps: it pauses at 45.20–47.55 s and 65.45–66.15 s. It therefore fails the unchanged no-pause assertion. The first gap has one member without a protected slot inside 8 m; the second has four, all traced exposed. No synthetic delivery or relaxed expectation was introduced.
- **D04:** its unchanged bare control now takes emergency rearward bounds before ordinary attack/fallback selection. Covered response and spacing checks also pass.
- **Lifecycle:** retained-overwatch samples, latched arrivals and paused/running progress-clock samples all pass. Support-completion soldier execution deadlines remain supported by shared TaskSim and are no longer confused with the planner clock.


### Works attack progression (observer trace)

| Seed | Attack commitments | Phase-line receipts | Consolidations | Blocked-attack recovery transitions |
|---|---:|---:|---:|---:|
| 100 | 1 | 0 | 0 | 1 |
| 101 | 1 | 0 | 0 | 0 |
| 102 | 0 | 0 | 0 | 0 |
| 103 | 1 | 0 | 0 | 0 |
| 104 | 0 | 0 | 0 | 0 |
| 105 | 0 | 0 | 0 | 0 |
| 106 | 1 | 0 | 0 | 1 |
| 107 | 0 | 0 | 0 | 0 |
| 108 | 0 | 0 | 0 | 0 |
| 109 | 2 | 0 | 0 | 1 |

Exact per-seed reasons and run paths are in `.local/phase3c/action-diagnostics.json`. No Works attack reaches a phase-line receipt in this sample. These are observer diagnostics, not extra policy inputs or tuning targets.


## Changes and knowledge boundary

All paths below are relative to the repository; simulation paths have prefix `Unreal/Source/ArmyPrototype/Sim/`.

| Correction | Implementation and evidence |
|---|---|
| Projected rush endpoints | `SquadDrillSim.cpp:80` explicitly requests projection, nearby cover preference, known-threat endpoint safety and a 9.45 m path budget (5 s at the existing 1.89 m/s assumption). `PositionSim.h` adds opt-in query fields; `PositionSim.cpp:27` generates projected candidates, :36 admits nearby cover, :59 checks known-threat safety, :66 filters path budget/area/corridor before allocation. Existing default callers retain their previous query semantics. The new `tests/squad_drills_tests.h:115` projection selector has catalogue-only and short-budget controls. D08 retains its observer screen assertions. |
| Failed attack lifecycle | `SquadDrillSim.cpp:155` marks blocked attack/cause and enters Reorganise; `DrillSim.cpp:321` preserves the fallback objective/cause through reorganisation and starts supported bounding closure. This fixes the paths that invoke Fail; it does not cure the separately disclosed late-Assault support wait. |
| Protected pause | `SquadDrillSim.cpp:126` selects each rusher's nearest available protected slot within 8 m and the accepted corridor/area, reserving prior selections; no-slot cases hold and trace exposed. `BattleSim.h:422` stores pause slots and saved mover flags; `DrillSim.cpp:390` sends the amendment. `CommandSim.cpp:438`, `ReactionSim.cpp:59` retain task/method/generation through real transport. `TaskSim.cpp:122` allows bounded movement to the received pause slot while rush permission is suspended. `Diagnostics.cpp:166` hashes this state inside the drills-only block. D09 verifies same instance/generation and protected holds on the imposed-gap case. |
| Emergency precedence | `SquadDrillSim.cpp:181` checks permitted member suppression, leader knowledge/received fire reports and accepted protected slots before target/attack/fallback selection. Effective incoming fire with no protected slot enters BreakContact first. Unchanged D04 now passes. |
| Lifecycle pin | `tests/drills_tests.h:145` records why shared TaskSim may assign a soldier execution deadline for Support completions, excludes that field only for Support, and retains the planner stage-clock assertions. The lifecycle selector passes. |
| Phase-line control | D08 reaches the assault line at 116.0 s; unchanged D07 then passes with receipt at 121.35 s, delivered lift at 122.8 s, zero late original-area rounds and no lift in its no-signal control. |

Policy inputs remain officer knowledge, orders and reports, permitted own-member fields, and map geometry. The screen checks and measurement facts remain observer-side assertions/analysis. No injected receipts or hidden enemy-state reads were added. No authored layout, frozen seed list or route evaluator changed.

## Disagreements, limits and incomplete work

1. The review's first causal description does not match the entry source: `Assign` already set `q.formation=!cover`, and Rush called it with `cover=false` (`entry/SquadDrillSim.cpp`, Assign and Rush). The entry code did allocate before the final safety/path-budget rejection, without selecting an eligible alternative; that code path is directly evidenced, although its share of the F1 regression is not established. This slice implements the requested explicit projection/cover preference and moves those eligibility checks into position selection; it does not claim to have changed an originally catalogue-only rush query.
2. D08 still fails consolidation/reorganisation; D09 still fails its nominal continuous-support control. Neither assertion was weakened or fixture retuned. The six requested corrections were implemented, but the late-Assault support wait shows the intended bounded recovery is incomplete in that distinct stage. This is a remaining implementation defect, not an accepted doctrinal hold.
3. The inherited Phase3b exit wording has two references: the latest user request names candidate90 for targeted authored improvements, while the earlier review exit paragraph also names Phase2d. Both flags and all paired intervals are disclosed; the primary flag uses candidate90 targets and Phase2d no-regression. The failed mechanisms independently prevent acceptance under either reading.
4. Gun recovery remains deferred; Phase4, the platoon task tree and F2/F3 were not implemented. Native Windows and Unreal verification stay with the architect and were not attempted.
5. Pre-enrichment initially hit Python 3.14's sandbox-blocked forkserver socket; using the same explicit fork context as the existing analysis runner completed the read-only analysis. No battle or source revision was substituted.


Final fingerprint rechecked: `7596d85ca9eb5318`. Stopped after the report; no further measured iteration or Phase4 work.
