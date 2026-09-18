# Plan 014 — Phase 3 slice report

**FAIL / not promoted.** D05 is repaired and all Phase 2 pairs/lifecycle pins pass. D06 passes; D07–D11 and D16 fail. D12 remains expressly deferred. This is one measured distribution build, with no tactical edits or second build after measurements began. Legacy remains the playable default.

F1 significantly regresses versus Phase 2d: shots -349.33 (95% CI -437.72 to -266.68), total casualties -8.71 (-10.83 to -6.83), and both closure horizons decline. Authored intensity gains are inconclusive. All 110 runs engage, all 40 historical digests match, trace parity is 3/3, and the full simulation and 56 Python tests pass. These infrastructure passes do not satisfy the tactical exit.

Entry fingerprint: `cdcfe811c96f3616`. Isolated D05 repair: `4953ffcdf9c8b87d`. Final measured fingerprint: `3231bd74bac2cef1`. The final source and test snapshots still equal the working tree byte for byte; the test binary used by the focused suites equals the full-suite binary.

## First repair and mechanism results

The required first isolated corridor build passes D01–D05, D17, positions, plumbing and lifecycle (9/9 selectors). Evidence: `.local/phase3/corridor/checks.log` and `corridor/results/*.log`. D05 was re-run unchanged: capable support=1, incorrectly blocked=0, weak report=1, latency=3.9 s.

| Selector | Result | Recorded output |
|---|---|---|
| D01 | PASS | D01 moving=1611 spacing_share=0.934823 arrived=8 corridor_inside=1 |
| D02 | PASS | D02 report_only=1 30-50m=1 protected_trail=1 control_traveling=1 control_close=1 |
| D03 | PASS | D03 alternation=1 covered=1 maximum_bound=46.9951 far_early_bounds=0 |
| D04 | PASS | D04 first_receipt=2.2 return_shooters_4s=7 all_cover=1 spacing=1 path_bound=1 assessment=1 bare_rear=1 |
| D05 | PASS | D05 support=1 incorrectly_blocked=0 weak_report=1 latency=3.9 |
| D06 | PASS | D06 established=1 lost=1 evidence=1 protected=4 silent_released=0 |
| D07 | FAIL (assert abort) | D07 phase_receipt=-1 lift_received=-1 late_original_area_rounds=0 no_signal_lift=0 |
| D08 | FAIL (assert abort) | D08 covered_attack=0 moved=0 physical_angle=0 longest_rush=0 consolidate=0 reorganise=0 bare_attack=0 bare_report=1 |
| D09 | FAIL (assert abort) | D09 pause=0 resume_same=0 protected=1 continuous_pause=0 |
| D10 | FAIL (assert abort) | D10 committed=0/0 alternatives=0/0 resolved=0 |
| D11 | FAIL (assert abort) | D11 committed=0 frozen=1 continued=1 weak_failed=0 reformed=0 |
| D16 | FAIL (assert abort) | D16 retreat=1 alternate=1 rear_distance=45.3897 complete=1 equal_break=1 |
| D17 | PASS | D17 independently allocatable protected slots=8; D17 scarce_occupied=5 ample_occupied=8 spacing=1 |
| lifecycle | PASS | Lifecycle continue samples=779 retained overwatch samples=780 latched receipt samples=1086; Progress clock paused=113 running=170 |
| plumbing | PASS |  |
| positions | PASS | Position service: authored layouts 0/5/6/7, reservations, area rejection and four templates PASS |
| D12 | Deferred by user | No pickup implementation or passing claim |

D07 has no phase-line receipt, so zero post-lift shots is not a pass. D08 never commits its screened attack, making angle/rush/consolidation checks unexercised. D09 and D10 likewise never reach their required committed-attack stimulus. D11 preserves surviving membership but has neither the required initial attack nor the weak-group failure/reorganisation. These are defects or unexercised contracts, not intentional assertion changes. D16 completes an alternating retreat by 45.39 m but also retreats in the control; that control failure remains unresolved. See the diagnostic evidence below. No existing Phase 2 behavioural assertion was edited.

## Verification and commands

Commands are relative to the repository root. Local runners preserve every expanded CLI command and manifest path in their JSON artifacts.

```sh
python3 tools/source_id.py
./scripts/test-sim.sh --drills D05  # isolated corridor build; archived
python3 .local/phase3/check_corridor.py
./scripts/test-sim.sh             # final frozen build, full-suite.log
./scripts/battle-lab.sh --drills --seconds 1 --seed 107 --no-trace --out .local/phase3/build-smoke
python3 .local/phase3/run_mechanisms.py
python3 -m unittest discover -s tests -p "test_*.py"
python3 .local/phase3/measure.py
# measure.py executes:
python3 .local/phase3/run_authored.py
python3 .local/phase3/parity.py .local/phase3/authored-parity .local/phase3/final/battle-lab
python3 tools/run_family.py --binary .local/phase3/final/battle-lab --out .local/phase3/f1-dev --family F1 --gen-seeds 1-30 --seeds 107-109 --controllers drills --seconds 360 --jobs 2 --trace
python3 tests/check_controller_defaults.py --binary .local/phase3/final/battle-lab --out .local/phase3/defaults
python3 .local/phase3/trace_checks.py
python3 .local/phase3/analyze.py
python3 .local/phase3/static_checks.py
```

Premeasurement fixture/debug builds are recorded in `.local/phase3/*preflight*.log`, `support-contract-build.log`, `flank-contract-test.log` and `cli-build.log`. Only `3231bd74bac2cef1` was used for the final authored/F1 distribution. Additional frozen-binary traces of encounters 60 and 69 are mechanism diagnostics, not another tactical revision. Their exact commands are in `fixture-diagnostics/results.json`.

- Full `./scripts/test-sim.sh`: PASS (exit 0; 238.069 s) (`full-suite.log`). The new drills mechanisms are optional selectors run separately above.
- Python: 56 tests pass (`python-tests.log`), including paired-CI direction/overlap and actual-frame assault metric tests.
- Historical authored parity: 40/40 exact digests, legacy and candidate90, Works/Trenches seeds 100–109 (`authored-parity/parity.json`).
- Drills trace on/off: 3/3 exact digests, Works107, Trenches107 and F1 draw1/107 (`trace-parity.json`).
- Candidate90 churn/hit references: all 110 archived traced manifest digests revalidated against their untraced baselines (`candidate-reference-revalidation.json`); Works107 retains the accepted 344-order reference.
- Controller defaults: 0 exit (`defaults.log`). Legacy remains default.
- Protected files: all four baseline hashes match, including authored terrain, both frozen seed lists and the route evaluator. Entry-to-final simulation patch: `simulation.patch`; verification: `static-checks.json`.
- No Windows/Unreal invocation; native verification remains with the architect. No commit/reset/stash/Fable launcher. No frozen acceptance re-run was requested for this slice.

## Distribution summary

20 authored runs and 90 F1 development runs, same map/draw/battle seeds and 360 s limits as preserved baselines. Every run and both casualty fractions appear below. Hits are diagnostic.

| Set | Controller | Shots | Total casualties | NN median m | Under 2 m % | Closure 120/240 m | Azure orders/min | Hits/soldier-min |
|---|---|---:|---:|---:|---:|---|---:|---:|
| Works | candidate90 | 988.400 | 38.800 | 0.976 | 79.733 | 108.806/109.355 | 64.333 | 0.502 |
| Works | drills-phase2d | 973.800 | 14.400 | 5.413 | 3.885 | 73.419/75.803 | 88.717 | 0.142 |
| Works | drills-phase3 | 1028.800 | 12.800 | 6.962 | 3.724 | 83.583/68.417 | 85.050 | 0.151 |
| Works | legacy | 2306.500 | 38.000 | 6.539 | 16.440 | 94.741/91.292 | 210.150 | 0.468 |
| Trenches | candidate90 | 798.900 | 16.600 | 1.454 | 66.474 | 39.698/35.936 | 611.033 | 0.176 |
| Trenches | drills-phase2d | 495.600 | 6.500 | 2.657 | 36.501 | 25.134/27.685 | 78.217 | 0.084 |
| Trenches | drills-phase3 | 624.100 | 7.200 | 2.744 | 32.799 | 26.795/29.138 | 77.417 | 0.088 |
| Trenches | legacy | 1989.300 | 32.900 | 3.946 | 31.277 | 35.672/37.111 | 255.383 | 0.410 |
| F1 | candidate90 | 450.544 | 12.989 | 3.109 | 38.359 | 48.768/48.803 | 39.846 | 0.452 |
| F1 | drills-phase2d | 757.711 | 16.900 | 7.102 | 3.412 | 46.037/44.289 | 59.394 | 0.607 |
| F1 | drills-phase3 | 408.378 | 8.189 | 7.662 | 2.719 | 32.505/31.244 | 35.392 | 0.250 |
| F1 | legacy | 718.200 | 15.767 | 5.102 | 13.627 | 53.498/54.087 | 127.523 | 0.496 |

Statistical slice exit against Phase 2d: **False**. Strict no-significant-regression check against both historical controllers: **False**. Overall slice fails regardless, due to the mechanism failures.

Engagement guard: enabled throughout, abort threshold three zero-shot runs per ten-run block. All 20 authored and 90 F1 runs completed; zero zero-shot battles; no failed block. Machine-readable evidence: `.local/phase3/engagement-summary.json`.

## Individual paired criteria

95% percentile paired intervals; F1 resamples generated-map clusters and authored maps resample battle seeds. Missing horizons are excluded pairwise and counts are disclosed. Inconclusive is not demonstrated equivalence.

| Set | Reference | Criterion | Paired n | Mean delta | CI95 | Finding |
|---|---|---|---:|---:|---|---|
| F1 | candidate90 | shots | 90 | -42.1667 | -118.6336 / 28.3017 | inconclusive |
| F1 | candidate90 | casualties_total | 90 | -4.8000 | -6.2556 / -3.3664 | regression |
| F1 | candidate90 | nearest_m | 90 | 4.5533 | 3.7652 / 5.3612 | improved |
| F1 | candidate90 | under_2m | 90 | -0.3564 | -0.4151 / -0.2964 | improved |
| F1 | candidate90 | closure_120s_m | 84 | -16.1494 | -21.8458 / -9.9642 | regression |
| F1 | candidate90 | closure_240s_m | 74 | -17.9918 | -23.9645 / -11.9596 | regression |
| F1 | candidate90 | orders_azure_per_minute | 90 | -4.4540 | -9.8263 / 0.5930 | inconclusive |
| F1 | drills-phase2d | shots | 90 | -349.3333 | -437.7156 / -266.6831 | regression |
| F1 | drills-phase2d | casualties_total | 90 | -8.7111 | -10.8333 / -6.8331 | regression |
| F1 | drills-phase2d | nearest_m | 90 | 0.5598 | 0.0742 / 1.0502 | improved |
| F1 | drills-phase2d | under_2m | 90 | -0.0069 | -0.0157 / 0.0022 | inconclusive |
| F1 | drills-phase2d | closure_120s_m | 86 | -13.0751 | -15.2605 / -10.9355 | regression |
| F1 | drills-phase2d | closure_240s_m | 57 | -15.1181 | -18.3733 / -11.7106 | regression |
| F1 | drills-phase2d | orders_azure_per_minute | 90 | -24.0023 | -31.8294 / -17.4419 | improved |
| F1 | legacy | shots | 90 | -309.8222 | -416.2361 / -208.3203 | regression |
| F1 | legacy | casualties_total | 90 | -7.5778 | -9.5222 / -5.7219 | regression |
| F1 | legacy | nearest_m | 90 | 2.5595 | 1.9197 / 3.1762 | improved |
| F1 | legacy | under_2m | 90 | -0.1091 | -0.1282 / -0.0921 | improved |
| F1 | legacy | closure_120s_m | 88 | -20.8122 | -23.9117 / -17.8692 | regression |
| F1 | legacy | closure_240s_m | 72 | -21.7395 | -24.7830 / -18.4572 | regression |
| F1 | legacy | orders_azure_per_minute | 90 | -92.1311 | -106.8956 / -77.2860 | improved |
| Trenches | candidate90 | shots | 10 | -174.8000 | -454.5150 / 141.0225 | inconclusive |
| Trenches | candidate90 | casualties_total | 10 | -9.4000 | -14.3000 / -5.1000 | regression |
| Trenches | candidate90 | nearest_m | 10 | 1.2907 | 1.1063 / 1.4791 | improved |
| Trenches | candidate90 | under_2m | 10 | -0.3367 | -0.3719 / -0.3030 | improved |
| Trenches | candidate90 | orders_azure_per_minute | 10 | -533.6167 | -650.3067 / -420.3975 | improved |
| Trenches | drills-phase2d | shots | 10 | 128.5000 | -75.6050 / 369.6075 | inconclusive |
| Trenches | drills-phase2d | casualties_total | 10 | 0.7000 | -1.9000 / 3.3000 | inconclusive |
| Trenches | drills-phase2d | nearest_m | 10 | 0.0877 | -0.0944 / 0.2674 | inconclusive |
| Trenches | drills-phase2d | under_2m | 10 | -0.0370 | -0.0797 / 0.0022 | inconclusive |
| Trenches | drills-phase2d | orders_azure_per_minute | 10 | -0.8000 | -10.3342 / 7.6171 | inconclusive |
| Trenches | legacy | shots | 10 | -1365.2000 | -1666.3750 / -1080.7825 | regression |
| Trenches | legacy | casualties_total | 10 | -25.7000 | -30.3000 / -21.2000 | regression |
| Trenches | legacy | nearest_m | 10 | -1.2017 | -1.8601 / -0.5621 | regression |
| Trenches | legacy | under_2m | 10 | 0.0152 | -0.0332 / 0.0611 | inconclusive |
| Trenches | legacy | orders_azure_per_minute | 10 | -177.9667 | -197.3025 / -158.7496 | improved |
| Works | candidate90 | shots | 10 | 40.4000 | -183.5000 / 258.3225 | inconclusive |
| Works | candidate90 | casualties_total | 10 | -26.0000 | -29.3000 / -22.7000 | regression |
| Works | candidate90 | nearest_m | 10 | 5.9852 | 5.6212 / 6.3690 | improved |
| Works | candidate90 | under_2m | 10 | -0.7601 | -0.7786 / -0.7395 | improved |
| Works | candidate90 | closure_120s_m | 10 | -25.2234 | -26.3812 / -24.1842 | regression |
| Works | candidate90 | closure_240s_m | 10 | -40.9383 | -48.9670 / -32.0934 | regression |
| Works | candidate90 | orders_azure_per_minute | 10 | 20.7167 | 16.5833 / 24.8333 | regression |
| Works | drills-phase2d | shots | 10 | 55.0000 | -239.1750 / 264.1050 | inconclusive |
| Works | drills-phase2d | casualties_total | 10 | -1.6000 | -5.2000 / 1.5000 | inconclusive |
| Works | drills-phase2d | nearest_m | 10 | 1.5480 | 0.9957 / 2.1026 | improved |
| Works | drills-phase2d | under_2m | 10 | -0.0016 | -0.0161 / 0.0132 | inconclusive |
| Works | drills-phase2d | closure_120s_m | 10 | 10.1639 | 8.9859 / 11.3264 | improved |
| Works | drills-phase2d | closure_240s_m | 10 | -7.3857 | -16.0799 / 1.2307 | inconclusive |
| Works | drills-phase2d | orders_azure_per_minute | 10 | -3.6667 | -8.8175 / 1.7521 | inconclusive |
| Works | legacy | shots | 10 | -1277.7000 | -1514.0100 / -1024.6925 | regression |
| Works | legacy | casualties_total | 10 | -25.2000 | -28.4000 / -22.3000 | regression |
| Works | legacy | nearest_m | 10 | 0.4229 | -0.2436 / 1.0405 | inconclusive |
| Works | legacy | under_2m | 10 | -0.1272 | -0.1487 / -0.1072 | improved |
| Works | legacy | closure_120s_m | 10 | -11.1588 | -14.6066 / -7.9058 | regression |
| Works | legacy | closure_240s_m | 10 | -22.8750 | -31.6836 / -13.4138 | regression |
| Works | legacy | orders_azure_per_minute | 10 | -125.1000 | -137.5025 / -111.1829 | improved |


Full metric distributions and paired intervals, including diagnostic hits and conformance, are in `.local/phase3/distributions.md` and `paired-criteria.json`. The machine-readable 440-run comparison is `paired-input.json` (110 new, 110 prior drills, 220 historical).

## Per-run disclosure

P3=Phase3; P2=Phase2d; C=candidate90; L=legacy. Casualties are total inactive across both sides; A/E are each side’s fraction. NA means the battle ended before that horizon or no eligible front sample. It is neither imputed nor scored as failure.

| Set / draw / seed | Shots P3/P2/C/L | Casualties P3/P2/C/L | P3 A/E casualty % | NN m P3/P2/L | <2m % P3/P2/L | Closure120 P3/P2/C | Closure240 P3/P2/C | Azure orders/min P3/P2/C | Hits/soldier-min P3/P2/C |
|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|
| works / 0 / 100 | 1477.00/1263.00/839.00/2583.00 | 17.00/16.00/37.00/36.00 | 34.4/18.8 | 6.60/4.80/7.27 | 2.67/3.60/16.21 | 85.02/72.21/108.43 | 82.93/74.08/106.78 | 86.83/102.00/68.33 | 0.19/0.16/0.48 |
| works / 0 / 101 | 1081.00/1049.00/1038.00/2012.00 | 10.00/19.00/41.00/35.00 | 12.5/18.8 | 6.77/5.72/5.04 | 3.51/5.01/23.52 | 83.63/72.82/108.32 | 45.97/81.28/106.43 | 86.67/103.67/57.17 | 0.15/0.18/0.55 |
| works / 0 / 102 | 923.00/718.00/965.00/2270.00 | 15.00/8.00/45.00/35.00 | 21.9/25.0 | 7.56/4.17/5.98 | 2.50/7.42/16.51 | 83.38/73.47/106.23 | 75.97/76.93/118.03 | 87.00/84.33/69.83 | 0.18/0.08/0.63 |
| works / 0 / 103 | 1147.00/845.00/1272.00/2347.00 | 13.00/15.00/42.00/40.00 | 21.9/18.8 | 6.32/6.35/5.51 | 4.42/3.97/19.16 | 83.88/73.78/112.32 | 85.92/75.70/104.80 | 89.67/91.33/69.50 | 0.14/0.15/0.54 |
| works / 0 / 104 | 423.00/1428.00/1067.00/2086.00 | 6.00/19.00/41.00/40.00 | 6.2/12.5 | 6.21/5.30/7.56 | 5.59/2.17/14.20 | 84.24/76.56/110.46 | 59.70/75.44/109.71 | 91.00/85.00/64.17 | 0.08/0.19/0.52 |
| works / 0 / 105 | 803.00/1073.00/1003.00/2318.00 | 12.00/13.00/34.00/41.00 | 18.8/18.8 | 7.93/5.96/6.80 | 2.46/3.50/13.31 | 84.56/72.98/109.37 | 61.12/74.19/109.55 | 78.67/87.33/69.50 | 0.14/0.14/0.41 |
| works / 0 / 106 | 1426.00/1320.00/973.00/2803.00 | 19.00/17.00/40.00/41.00 | 25.0/34.4 | 7.94/5.40/6.88 | 3.17/3.30/16.53 | 84.67/74.24/108.77 | 58.54/74.87/109.94 | 89.83/97.83/66.17 | 0.21/0.18/0.51 |
| works / 0 / 107 | 1492.00/1047.00/1197.00/1878.00 | 17.00/15.00/41.00/38.00 | 25.0/28.1 | 6.51/4.90/7.56 | 4.90/5.42/12.54 | 81.56/74.24/109.79 | 57.18/75.13/109.62 | 88.17/93.33/57.33 | 0.18/0.15/0.53 |
| works / 0 / 108 | 671.00/586.00/841.00/1962.00 | 9.00/12.00/39.00/32.00 | 9.4/18.8 | 6.78/5.73/6.28 | 5.70/2.34/17.33 | 81.99/73.90/107.26 | 73.47/72.58/110.62 | 79.00/68.17/59.83 | 0.11/0.10/0.49 |
| works / 0 / 109 | 845.00/409.00/689.00/2806.00 | 10.00/10.00/28.00/42.00 | 9.4/21.9 | 6.99/5.81/6.51 | 2.32/2.11/15.09 | 82.89/69.98/107.12 | 83.36/77.82/108.08 | 73.67/74.17/61.50 | 0.14/0.08/0.34 |
| trenches / 0 / 100 | 601.00/803.00/598.00/2104.00 | 9.00/8.00/11.00/40.00 | 18.8/9.4 | 3.09/2.41/4.17 | 25.04/39.97/28.50 | 27.93/24.76/42.08 | 26.65/26.15/41.18 | 73.17/77.33/509.50 | 0.11/0.09/0.10 |
| trenches / 0 / 101 | 763.00/481.00/1342.00/1569.00 | 9.00/5.00/17.00/24.00 | 15.6/12.5 | 3.03/2.67/3.39 | 25.84/37.24/33.43 | 24.38/23.98/37.65 | 33.01/23.73/27.90 | 83.83/64.17/313.33 | 0.11/0.08/0.18 |
| trenches / 0 / 102 | 731.00/962.00/1179.00/1774.00 | 13.00/17.00/23.00/28.00 | 15.6/25.0 | 2.86/2.79/2.58 | 29.32/34.41/39.51 | 29.99/23.98/32.20 | 25.15/25.64/36.55 | 85.50/88.00/836.17 | 0.13/0.17/0.25 |
| trenches / 0 / 103 | 455.00/239.00/511.00/1805.00 | 9.00/2.00/14.00/29.00 | 9.4/18.8 | 2.70/2.66/3.30 | 33.55/40.74/30.39 | 28.07/28.46/41.65 | 27.41/33.66/33.43 | 83.00/82.50/473.00 | 0.13/0.04/0.18 |
| trenches / 0 / 104 | 304.00/521.00/817.00/1377.00 | 3.00/8.00/18.00/26.00 | 6.2/3.1 | 3.00/3.06/2.69 | 33.56/35.22/40.27 | 24.61/30.56/39.89 | 24.18/34.98/34.42 | 87.33/77.33/670.00 | 0.06/0.11/0.19 |
| trenches / 0 / 105 | 1103.00/379.00/558.00/1948.00 | 8.00/4.00/15.00/31.00 | 12.5/12.5 | 2.79/2.64/5.77 | 35.73/30.55/27.75 | 23.92/23.59/40.50 | 26.74/28.25/32.04 | 78.00/67.67/428.33 | 0.11/0.07/0.14 |
| trenches / 0 / 106 | 169.00/205.00/552.00/2552.00 | 2.00/2.00/13.00/41.00 | 0.0/6.2 | 3.03/2.81/4.41 | 30.65/34.05/26.96 | 26.26/24.25/43.71 | 27.49/24.25/36.94 | 73.17/64.00/983.00 | 0.03/0.03/0.13 |
| trenches / 0 / 107 | 434.00/507.00/655.00/2284.00 | 5.00/6.00/15.00/39.00 | 6.2/9.4 | 2.16/2.43/4.68 | 43.01/38.81/28.78 | 26.33/23.01/39.85 | 25.94/29.41/39.22 | 45.17/81.50/580.33 | 0.05/0.07/0.15 |
| trenches / 0 / 108 | 1189.00/387.00/385.00/2262.00 | 11.00/5.00/10.00/39.00 | 6.2/28.1 | 2.41/2.25/4.14 | 35.07/42.79/30.53 | 29.09/24.15/41.72 | 40.07/23.88/37.17 | 83.83/87.17/703.17 | 0.10/0.08/0.11 |
| trenches / 0 / 109 | 492.00/472.00/1392.00/2218.00 | 3.00/8.00/30.00/32.00 | 0.0/9.4 | 2.38/2.84/4.34 | 36.22/31.24/26.66 | 27.38/24.60/37.73 | 34.75/26.91/40.51 | 81.17/92.50/613.50 | 0.05/0.11/0.31 |
| F1 / 1 / 107 | 209.00/1180.00/466.00/1038.00 | 7.00/25.00/14.00/16.00 | 29.2/0.0 | 9.75/8.54/7.69 | 0.12/1.54/11.07 | 39.17/60.26/70.99 | 39.17/76.69/73.08 | 28.00/62.33/64.00 | 0.12/0.63/0.28 |
| F1 / 1 / 108 | 263.00/832.00/411.00/1027.00 | 4.00/20.00/12.00/21.00 | 16.7/0.0 | 9.75/5.64/6.14 | 0.11/1.06/13.19 | 43.96/56.46/61.41 | 43.96/43.51/74.44 | 29.67/59.50/70.50 | 0.07/0.41/0.23 |
| F1 / 2 / 107 | 375.00/300.00/205.00/486.00 | 10.00/6.00/14.00/10.00 | 33.3/50.0 | 9.90/7.46/4.34 | 1.25/3.32/26.00 | 34.04/48.97/NA | 33.13/NA/NA | 38.50/127.29/98.55 | 0.27/0.42/1.04 |
| F1 / 1 / 109 | 336.00/1118.00/512.00/835.00 | 7.00/29.00/11.00/15.00 | 29.2/0.0 | 9.75/8.46/6.14 | 0.15/4.49/10.17 | 39.45/69.55/69.31 | 39.25/69.11/70.58 | 28.33/60.50/54.17 | 0.13/0.77/0.21 |
| F1 / 2 / 109 | 200.00/402.00/132.00/314.00 | 9.00/9.00/8.00/8.00 | 20.8/100.0 | 9.32/6.54/4.34 | 2.16/3.56/26.05 | NA/44.26/NA | NA/NA/NA | 131.62/104.23/117.46 | 0.69/0.42/0.67 |
| F1 / 2 / 108 | 249.00/303.00/247.00/215.00 | 5.00/8.00/16.00/5.00 | 4.2/100.0 | 9.90/7.93/4.26 | 6.09/3.71/26.76 | NA/55.19/58.05 | NA/NA/NA | 84.51/127.25/105.22 | 0.35/0.42/1.11 |
| F1 / 3 / 107 | 519.00/424.00/421.00/719.00 | 9.00/14.00/11.00/22.00 | 37.5/0.0 | 9.90/7.52/4.32 | 0.35/2.60/17.89 | 16.45/NA/5.44 | 16.33/NA/5.44 | 26.83/168.07/17.50 | 0.20/1.45/0.25 |
| F1 / 3 / 108 | 474.00/497.00/581.00/508.00 | 11.00/13.00/13.00/17.00 | 41.7/16.7 | 8.08/8.65/5.92 | 7.78/2.83/16.92 | 16.66/NA/9.03 | 16.66/NA/7.75 | 35.00/117.23/21.33 | 0.30/0.83/0.33 |
| F1 / 3 / 109 | 290.00/562.00/552.00/1073.00 | 8.00/15.00/13.00/24.00 | 33.3/0.0 | 9.90/7.33/4.29 | 0.34/2.36/12.28 | 16.45/38.39/9.90 | 16.45/NA/7.75 | 30.00/118.15/18.83 | 0.19/0.85/0.36 |
| F1 / 4 / 107 | 161.00/462.00/213.00/497.00 | 9.00/16.00/10.00/16.00 | 37.5/0.0 | 6.00/4.38/4.72 | 8.83/10.82/17.57 | 15.05/28.57/13.91 | 15.05/27.19/12.73 | 18.83/26.33/21.17 | 0.19/0.46/0.25 |
| F1 / 4 / 108 | 137.00/407.00/262.00/425.00 | 5.00/18.00/12.00/20.00 | 20.8/0.0 | 9.07/5.40/4.86 | 0.14/1.73/15.82 | 16.54/38.46/17.49 | 16.54/NA/12.52 | 25.17/79.06/23.50 | 0.13/0.83/0.30 |
| F1 / 4 / 109 | 217.00/547.00/172.00/497.00 | 6.00/13.00/10.00/13.00 | 20.8/16.7 | 9.66/5.91/5.04 | 6.12/8.41/14.74 | 16.44/31.77/7.49 | 16.44/NA/4.31 | 21.50/60.37/19.00 | 0.14/0.50/0.21 |
| F1 / 5 / 107 | 547.00/1600.00/806.00/1459.00 | 12.00/30.00/17.00/17.00 | 37.5/37.5 | 6.28/7.81/5.07 | 0.88/4.85/11.89 | 55.09/67.31/68.59 | 55.09/64.75/69.22 | 33.17/50.00/41.17 | 0.29/1.13/0.46 |
| F1 / 5 / 108 | 1114.00/1326.00/564.00/1224.00 | 16.00/22.00/17.00/20.00 | 50.0/50.0 | 6.32/6.04/4.78 | 1.62/2.20/15.45 | 62.68/63.28/67.51 | 61.22/62.20/67.35 | 32.67/41.67/36.00 | 0.38/0.69/0.50 |
| F1 / 5 / 109 | 983.00/1127.00/644.00/1149.00 | 17.00/21.00/14.00/18.00 | 62.5/25.0 | 6.00/9.45/5.08 | 1.52/1.45/12.80 | 53.14/64.33/68.30 | 57.94/66.04/68.06 | 32.33/38.67/42.00 | 0.46/0.66/0.38 |
| F1 / 6 / 107 | 431.00/731.00/338.00/404.00 | 11.00/23.00/10.00/10.00 | 41.7/12.5 | 7.28/6.61/4.32 | 7.19/10.78/32.72 | 24.39/26.98/45.56 | 24.58/37.93/45.18 | 35.83/53.25/30.00 | 0.27/0.73/0.26 |
| F1 / 6 / 108 | 341.00/815.00/497.00/727.00 | 11.00/25.00/18.00/21.00 | 33.3/37.5 | 9.90/7.85/4.45 | 8.64/1.88/16.79 | 21.44/19.95/47.07 | 21.44/26.46/46.83 | 33.50/55.83/29.83 | 0.25/0.80/0.53 |
| F1 / 6 / 109 | 222.00/661.00/427.00/638.00 | 9.00/18.00/14.00/20.00 | 25.0/37.5 | 9.90/6.52/5.74 | 7.62/4.17/10.79 | 16.55/44.90/46.80 | 16.55/NA/46.66 | 30.83/77.52/31.00 | 0.20/0.73/0.37 |
| F1 / 7 / 107 | 878.00/454.00/749.00/553.00 | 8.00/7.00/7.00/11.00 | 31.2/50.0 | 7.04/6.63/4.54 | 0.45/1.44/15.58 | 53.86/56.67/65.26 | 53.43/NA/63.76 | 16.50/50.48/18.00 | 0.27/0.74/0.30 |
| F1 / 7 / 108 | 452.00/1219.00/513.00/999.00 | 4.00/16.00/8.00/9.00 | 18.8/16.7 | 5.07/6.92/6.15 | 0.63/1.12/11.54 | 54.86/55.66/63.05 | 54.86/59.13/64.13 | 16.17/25.17/17.00 | 0.13/0.62/0.28 |
| F1 / 7 / 109 | 778.00/854.00/754.00/1138.00 | 7.00/11.00/10.00/13.00 | 31.2/33.3 | 5.48/6.50/6.10 | 10.98/4.49/8.68 | 55.55/58.15/63.01 | 55.29/NA/61.38 | 15.83/56.27/17.83 | 0.26/0.71/0.36 |
| F1 / 8 / 107 | 160.00/617.00/435.00/384.00 | 3.00/13.00/11.00/14.00 | 18.8/0.0 | 6.00/5.30/5.00 | 0.88/9.83/13.31 | 16.50/36.93/54.99 | 16.50/23.36/55.41 | 14.17/26.67/27.50 | 0.09/0.41/0.40 |
| F1 / 8 / 108 | 135.00/587.00/468.00/897.00 | 2.00/17.00/11.00/16.00 | 12.5/0.0 | 7.97/8.15/5.02 | 1.13/2.52/5.87 | 16.58/44.76/56.81 | 16.58/57.44/56.44 | 14.50/42.36/26.17 | 0.06/0.53/0.35 |
| F1 / 8 / 109 | 128.00/539.00/381.00/461.00 | 3.00/14.00/9.00/12.00 | 18.8/0.0 | 6.91/8.37/5.02 | 1.09/1.05/9.26 | 16.50/26.89/56.97 | 16.50/34.46/56.97 | 15.50/38.17/27.83 | 0.08/0.45/0.30 |
| F1 / 9 / 107 | 438.00/889.00/488.00/676.00 | 12.00/30.00/17.00/18.00 | 45.8/10.0 | 6.30/8.73/4.52 | 1.78/2.38/17.74 | 50.10/65.37/73.35 | 48.47/63.11/72.96 | 34.67/47.50/60.17 | 0.28/0.93/0.39 |
| F1 / 9 / 108 | 396.00/680.00/396.00/854.00 | 10.00/22.00/12.00/17.00 | 33.3/20.0 | 9.75/6.86/4.53 | 0.41/4.76/14.39 | 43.94/69.07/74.77 | 41.72/NA/73.53 | 32.00/90.30/53.17 | 0.23/0.79/0.28 |
| F1 / 9 / 109 | 284.00/921.00/587.00/448.00 | 8.00/27.00/18.00/11.00 | 33.3/0.0 | 5.45/7.23/4.82 | 6.24/7.18/11.32 | 49.96/69.27/74.54 | 49.96/76.49/72.58 | 34.17/66.40/55.17 | 0.18/0.83/0.47 |
| F1 / 10 / 107 | 252.00/467.00/443.00/513.00 | 6.00/14.00/14.00/15.00 | 37.5/0.0 | 6.00/6.72/5.59 | 0.54/0.50/9.30 | 16.42/33.85/53.77 | 15.12/15.37/49.67 | 24.00/29.17/29.83 | 0.14/0.45/0.50 |
| F1 / 10 / 109 | 139.00/293.00/237.00/349.00 | 4.00/6.00/11.00/10.00 | 25.0/0.0 | 5.62/5.32/4.51 | 0.31/0.35/15.15 | 19.80/16.07/48.16 | 19.25/16.07/48.38 | 19.33/17.67/35.50 | 0.10/0.16/0.40 |
| F1 / 10 / 108 | 293.00/448.00/468.00/504.00 | 6.00/16.00/14.00/12.00 | 37.5/0.0 | 5.58/6.72/5.87 | 0.53/1.08/5.34 | 20.08/47.30/51.61 | 15.53/NA/50.59 | 23.33/73.28/30.33 | 0.17/0.86/0.46 |
| F1 / 11 / 108 | 645.00/844.00/1045.00/1559.00 | 13.00/13.00/14.00/20.00 | 29.2/100.0 | 9.75/7.12/5.22 | 0.74/6.32/17.11 | 53.65/53.64/56.08 | NA/NA/59.71 | 79.54/87.52/47.56 | 0.70/0.62/0.45 |
| F1 / 11 / 107 | 766.00/258.00/1189.00/460.00 | 10.00/4.00/17.00/7.00 | 16.7/100.0 | 8.01/4.88/4.50 | 4.01/6.52/17.94 | 49.74/45.24/56.50 | NA/45.24/60.86 | 56.15/23.33/46.99 | 0.47/0.09/0.55 |
| F1 / 12 / 107 | 396.00/753.00/187.00/379.00 | 4.00/5.00/10.00/7.00 | 0.0/100.0 | 8.34/6.29/6.00 | 0.81/2.42/14.46 | 54.33/75.84/NA | NA/NA/NA | 41.83/82.82/69.57 | 0.26/0.32/1.08 |
| F1 / 12 / 108 | 334.00/377.00/706.00/186.00 | 5.00/4.00/12.00/1.00 | 6.2/100.0 | 8.26/7.51/4.34 | 1.35/4.20/18.96 | 52.73/80.30/67.45 | NA/NA/76.61 | 61.81/106.02/33.07 | 0.45/0.39/0.62 |
| F1 / 11 / 109 | 227.00/1218.00/1216.00/1536.00 | 5.00/13.00/22.00/17.00 | 20.8/0.0 | 9.75/8.02/5.83 | 0.27/5.66/10.50 | 38.48/52.96/57.62 | 38.48/55.08/58.08 | 21.33/44.67/61.30 | 0.10/0.31/0.99 |
| F1 / 12 / 109 | 325.00/402.00/573.00/425.00 | 5.00/6.00/7.00/6.00 | 6.2/100.0 | 8.74/6.33/4.40 | 0.33/5.10/16.99 | 51.30/74.41/76.86 | NA/NA/NA | 52.56/116.65/37.99 | 0.39/0.47/0.50 |
| F1 / 13 / 107 | 220.00/1351.00/739.00/1204.00 | 5.00/18.00/17.00/14.00 | 31.2/0.0 | 6.00/6.00/5.00 | 0.24/0.67/9.25 | 43.17/51.39/66.23 | 43.17/72.49/68.90 | 22.67/36.25/37.50 | 0.11/0.54/0.53 |
| F1 / 13 / 108 | 350.00/1150.00/654.00/1434.00 | 7.00/17.00/14.00/11.00 | 43.8/0.0 | 7.17/6.55/5.71 | 0.21/1.62/3.67 | 40.06/67.82/66.57 | 39.62/NA/70.70 | 25.83/48.47/39.50 | 0.16/0.68/0.41 |
| F1 / 13 / 109 | 278.00/860.00/607.00/990.00 | 5.00/18.00/10.00/11.00 | 31.2/0.0 | 6.22/5.41/5.45 | 0.58/1.23/4.40 | 38.58/54.42/60.83 | 38.58/67.49/67.76 | 19.33/32.17/40.50 | 0.11/0.63/0.23 |
| F1 / 14 / 107 | 652.00/1019.00/592.00/634.00 | 12.00/20.00/15.00/11.00 | 56.2/37.5 | 6.28/6.68/4.40 | 1.42/6.96/20.89 | 57.54/65.84/63.95 | 56.50/NA/63.79 | 22.00/51.79/31.67 | 0.43/1.24/0.62 |
| F1 / 14 / 108 | 684.00/1129.00/411.00/488.00 | 10.00/15.00/10.00/12.00 | 50.0/25.0 | 5.73/4.61/4.40 | 1.57/2.38/25.73 | 58.27/61.00/65.23 | 57.44/62.95/64.67 | 23.67/23.67/30.67 | 0.34/0.64/0.34 |
| F1 / 14 / 109 | 844.00/1302.00/658.00/539.00 | 9.00/17.00/12.00/10.00 | 50.0/12.5 | 5.53/4.61/4.40 | 0.92/2.08/18.04 | 54.78/58.02/66.37 | 53.26/56.92/64.67 | 21.33/26.17/26.17 | 0.28/0.77/0.46 |
| F1 / 15 / 107 | 307.00/492.00/360.00/528.00 | 6.00/9.00/12.00/12.00 | 37.5/0.0 | 6.00/5.14/6.00 | 1.34/0.75/8.53 | 37.42/56.39/60.45 | 37.42/55.92/60.45 | 21.50/23.50/24.67 | 0.14/0.25/0.39 |
| F1 / 15 / 108 | 304.00/756.00/495.00/621.00 | 7.00/19.00/14.00/12.00 | 43.8/0.0 | 6.47/5.71/5.00 | 1.83/1.60/10.51 | 38.28/56.84/59.96 | 38.09/NA/61.03 | 21.50/40.31/28.50 | 0.17/0.89/0.45 |
| F1 / 15 / 109 | 258.00/289.00/537.00/524.00 | 6.00/10.00/13.00/9.00 | 37.5/0.0 | 6.00/8.79/6.00 | 1.27/0.80/8.10 | 37.45/52.66/63.75 | 37.45/52.66/67.64 | 20.00/20.50/30.50 | 0.13/0.25/0.45 |
| F1 / 16 / 107 | 243.00/463.00/227.00/353.00 | 7.00/17.00/5.00/13.00 | 37.5/12.5 | 5.20/4.52/4.40 | 0.53/4.08/11.51 | 20.77/36.79/18.23 | 20.77/NA/18.23 | 29.33/71.38/24.00 | 0.24/1.27/0.16 |
| F1 / 16 / 108 | 483.00/363.00/158.00/426.00 | 15.00/12.00/4.00/12.00 | 43.8/100.0 | 8.00/10.70/5.00 | 3.67/0.88/13.26 | 26.24/32.95/1.80 | NA/27.15/1.80 | 64.35/25.00/19.00 | 0.94/0.45/0.12 |
| F1 / 16 / 109 | 708.00/334.00/298.00/440.00 | 10.00/11.00/11.00/15.00 | 12.5/100.0 | 9.80/9.76/4.82 | 8.04/1.28/7.79 | 35.75/25.35/22.35 | NA/25.35/22.30 | 59.59/24.00/20.67 | 0.81/0.40/0.38 |
| F1 / 17 / 107 | 164.00/846.00/219.00/1148.00 | 6.00/26.00/12.00/27.00 | 20.8/8.3 | 6.41/6.00/6.00 | 0.21/1.28/9.41 | 19.57/42.38/52.20 | 19.57/50.63/52.20 | 28.67/66.25/43.33 | 0.09/0.71/0.30 |
| F1 / 17 / 108 | 426.00/937.00/294.00/861.00 | 9.00/24.00/10.00/23.00 | 33.3/8.3 | 6.41/7.44/6.00 | 0.28/1.52/4.99 | 18.46/39.16/51.82 | 16.49/37.12/51.96 | 33.00/48.83/57.17 | 0.15/0.61/0.21 |
| F1 / 17 / 109 | 204.00/1297.00/356.00/1138.00 | 7.00/32.00/22.00/26.00 | 25.0/8.3 | 6.41/9.86/6.00 | 0.51/2.24/6.16 | 16.49/41.25/51.56 | 16.49/49.63/51.75 | 27.83/48.83/44.33 | 0.12/0.87/0.59 |
| F1 / 18 / 107 | 671.00/1304.00/286.00/1103.00 | 10.00/29.00/14.00/23.00 | 33.3/16.7 | 9.90/8.98/5.00 | 0.90/3.13/5.96 | 15.68/37.04/52.00 | 15.79/40.75/52.00 | 33.67/59.00/50.50 | 0.20/0.93/0.32 |
| F1 / 18 / 108 | 825.00/1590.00/513.00/829.00 | 11.00/28.00/21.00/22.00 | 33.3/25.0 | 9.90/7.73/5.71 | 1.07/5.14/4.22 | 15.81/36.00/48.24 | 17.40/45.69/48.24 | 34.17/57.83/60.50 | 0.21/0.73/0.61 |
| F1 / 18 / 109 | 698.00/1503.00/303.00/1062.00 | 11.00/23.00/17.00/22.00 | 33.3/25.0 | 9.90/7.43/5.48 | 1.40/8.75/5.85 | 15.64/21.31/50.89 | 15.75/34.11/50.89 | 32.67/55.50/40.67 | 0.22/0.58/0.41 |
| F1 / 19 / 107 | 272.00/801.00/447.00/827.00 | 7.00/29.00/16.00/26.00 | 25.0/8.3 | 6.67/9.90/5.04 | 1.24/3.10/11.10 | 16.08/33.25/29.23 | 16.08/37.45/28.97 | 42.83/70.17/28.00 | 0.14/0.85/0.35 |
| F1 / 19 / 108 | 376.00/849.00/526.00/598.00 | 8.00/28.00/16.00/24.00 | 33.3/0.0 | 5.97/5.68/6.00 | 1.53/2.13/10.35 | 16.36/31.29/29.85 | 15.73/15.59/30.89 | 43.83/78.00/35.50 | 0.15/0.83/0.39 |
| F1 / 19 / 109 | 162.00/596.00/547.00/713.00 | 5.00/16.00/23.00/26.00 | 20.8/0.0 | 6.00/5.43/6.39 | 6.06/2.77/15.44 | 16.26/28.93/31.03 | 16.26/36.25/21.58 | 43.17/67.67/35.33 | 0.09/0.37/0.64 |
| F1 / 20 / 107 | 759.00/777.00/383.00/723.00 | 13.00/17.00/20.00/25.00 | 16.7/90.0 | 9.90/6.33/4.95 | 0.87/11.85/11.77 | 19.33/31.19/43.70 | 17.01/44.25/44.04 | 35.67/65.00/36.33 | 0.25/0.38/0.58 |
| F1 / 20 / 108 | 209.00/1074.00/484.00/922.00 | 8.00/22.00/22.00/23.00 | 25.0/20.0 | 9.13/8.96/4.53 | 6.00/4.99/16.83 | 16.40/33.46/44.10 | 16.40/47.56/45.21 | 35.00/92.38/39.50 | 0.17/0.71/0.69 |
| F1 / 20 / 109 | 480.00/1023.00/602.00/752.00 | 14.00/23.00/27.00/19.00 | 20.8/90.0 | 9.90/9.87/5.06 | 0.14/6.75/9.41 | 21.42/26.94/47.53 | 21.42/27.26/44.62 | 39.00/90.61/36.67 | 0.27/0.66/0.95 |
| F1 / 21 / 107 | 250.00/534.00/54.00/434.00 | 6.00/15.00/2.00/14.00 | 31.2/8.3 | 7.02/6.00/5.02 | 0.36/1.15/3.41 | 17.30/33.81/2.99 | 15.52/36.55/2.99 | 19.67/31.67/8.50 | 0.14/0.43/0.06 |
| F1 / 21 / 108 | 82.00/617.00/33.00/347.00 | 4.00/18.00/3.00/9.00 | 18.8/8.3 | 6.10/6.00/5.00 | 0.77/1.55/3.50 | 17.61/28.93/3.36 | 17.61/41.79/3.36 | 20.83/44.70/7.67 | 0.09/0.55/0.07 |
| F1 / 21 / 109 | 341.00/711.00/65.00/538.00 | 5.00/13.00/2.00/19.00 | 25.0/8.3 | 6.79/6.00/5.00 | 0.61/0.52/7.68 | 17.61/28.32/3.27 | 15.54/35.64/3.27 | 21.17/30.33/7.33 | 0.12/0.37/0.07 |
| F1 / 22 / 107 | 593.00/1515.00/401.00/988.00 | 8.00/21.00/7.00/15.00 | 33.3/0.0 | 7.47/6.00/5.10 | 6.64/1.28/11.16 | 45.52/64.43/76.43 | 43.74/58.19/76.43 | 32.67/51.67/49.00 | 0.16/0.56/0.18 |
| F1 / 22 / 108 | 405.00/1153.00/554.00/1493.00 | 7.00/18.00/6.00/23.00 | 29.2/0.0 | 9.75/5.91/4.75 | 6.12/0.96/14.73 | 42.80/65.95/75.82 | 42.80/56.52/75.17 | 33.33/53.50/44.67 | 0.12/0.43/0.13 |
| F1 / 22 / 109 | 416.00/782.00/284.00/1498.00 | 5.00/12.00/9.00/15.00 | 20.8/0.0 | 9.75/5.03/5.61 | 0.20/7.14/16.99 | 43.91/65.79/75.31 | 43.91/57.85/75.43 | 33.00/46.33/54.17 | 0.12/0.24/0.18 |
| F1 / 23 / 107 | 289.00/952.00/727.00/394.00 | 3.00/19.00/25.00/13.00 | 12.5/0.0 | 6.57/5.36/4.26 | 0.26/1.11/23.36 | 27.34/34.96/51.53 | 27.34/36.62/53.47 | 25.67/38.67/22.50 | 0.06/0.54/1.20 |
| F1 / 23 / 108 | 1174.00/1030.00/480.00/313.00 | 17.00/24.00/16.00/10.00 | 66.7/16.7 | 5.22/6.60/3.78 | 2.90/3.88/27.55 | 43.64/42.20/52.52 | 41.12/44.22/52.64 | 40.83/51.83/23.83 | 0.50/0.89/0.49 |
| F1 / 23 / 109 | 408.00/831.00/478.00/674.00 | 7.00/14.00/16.00/13.00 | 25.0/16.7 | 9.90/5.66/4.13 | 0.77/5.87/24.16 | 27.58/42.73/49.43 | 27.58/NA/49.43 | 28.67/95.76/23.83 | 0.15/0.58/0.51 |
| F1 / 24 / 107 | 194.00/408.00/432.00/456.00 | 7.00/15.00/16.00/17.00 | 31.2/20.0 | 5.23/4.46/5.00 | 0.34/1.15/8.91 | 16.36/34.76/46.33 | 15.96/30.03/41.79 | 27.00/40.17/28.17 | 0.21/0.55/0.64 |
| F1 / 24 / 108 | 161.00/418.00/436.00/411.00 | 10.00/15.00/13.00/20.00 | 56.2/10.0 | 6.16/5.89/5.00 | 0.28/0.50/13.04 | 14.83/26.13/42.42 | 14.83/10.13/39.49 | 26.33/37.00/28.67 | 0.27/0.50/0.45 |
| F1 / 25 / 107 | 250.00/282.00/355.00/282.00 | 6.00/6.00/13.00/9.00 | 12.5/100.0 | 9.02/8.25/5.24 | 3.81/3.04/15.73 | 53.71/65.01/57.03 | NA/NA/69.66 | 57.24/83.62/41.00 | 0.58/0.52/0.56 |
| F1 / 24 / 109 | 274.00/539.00/260.00/395.00 | 9.00/12.00/11.00/17.00 | 50.0/10.0 | 4.90/6.92/5.00 | 1.51/0.84/15.58 | 15.96/27.25/42.05 | 15.51/23.55/41.81 | 29.00/43.83/28.33 | 0.26/0.40/0.37 |
| F1 / 25 / 108 | 737.00/625.00/715.00/225.00 | 10.00/8.00/14.00/3.00 | 37.5/100.0 | 8.55/7.49/6.00 | 8.09/9.80/19.51 | 56.35/69.06/57.96 | 72.32/NA/67.94 | 37.91/72.61/36.45 | 0.43/0.52/0.74 |
| F1 / 25 / 109 | 255.00/391.00/459.00/542.00 | 8.00/8.00/9.00/8.00 | 43.8/25.0 | 6.41/4.96/5.81 | 12.28/2.09/20.23 | 57.31/68.30/57.53 | 51.08/NA/NA | 25.33/64.64/41.68 | 0.31/0.49/0.55 |
| F1 / 26 / 107 | 501.00/795.00/515.00/545.00 | 14.00/24.00/20.00/13.00 | 16.7/100.0 | 9.90/7.75/5.00 | 4.72/10.72/11.83 | 19.48/33.61/46.78 | NA/35.51/NA | 113.70/49.67/78.28 | 0.69/0.62/1.05 |
| F1 / 26 / 108 | 302.00/686.00/540.00/648.00 | 9.00/28.00/20.00/22.00 | 25.0/30.0 | 9.90/9.90/5.00 | 6.03/2.93/13.97 | 16.40/31.99/44.56 | 16.40/36.87/43.10 | 35.00/79.71/34.00 | 0.21/0.95/0.55 |
| F1 / 26 / 109 | 197.00/682.00/538.00/650.00 | 6.00/21.00/24.00/25.00 | 25.0/0.0 | 9.90/9.90/4.52 | 5.83/9.72/14.74 | 16.42/18.96/48.08 | 16.42/28.38/47.00 | 32.67/43.83/33.00 | 0.16/0.52/0.67 |
| F1 / 27 / 107 | 695.00/479.00/216.00/402.00 | 11.00/16.00/14.00/17.00 | 20.8/100.0 | 8.66/8.99/4.59 | 0.94/1.86/11.58 | 23.02/30.03/NA | NA/NA/NA | 80.38/114.29/134.86 | 0.46/0.76/1.30 |
| F1 / 27 / 108 | 409.00/426.00/227.00/463.00 | 9.00/11.00/13.00/15.00 | 12.5/100.0 | 9.90/9.90/4.26 | 0.24/2.73/21.81 | 18.36/33.01/NA | NA/NA/NA | 65.80/108.43/132.83 | 0.34/0.50/1.20 |
| F1 / 27 / 109 | 471.00/592.00/354.00/733.00 | 11.00/11.00/12.00/24.00 | 20.8/100.0 | 9.90/9.90/4.40 | 0.63/1.94/16.52 | 22.01/24.86/40.77 | NA/33.86/40.44 | 83.79/63.84/32.00 | 0.48/0.36/0.31 |
| F1 / 28 / 107 | 385.00/760.00/142.00/517.00 | 9.00/21.00/9.00/23.00 | 33.3/10.0 | 9.79/8.57/6.00 | 0.49/0.57/7.58 | 17.75/37.93/0.00 | 17.75/26.48/0.00 | 28.83/43.83/11.50 | 0.17/0.57/0.19 |
| F1 / 28 / 108 | 195.00/325.00/154.00/957.00 | 7.00/8.00/7.00/27.00 | 25.0/10.0 | 9.79/9.90/4.92 | 6.91/0.40/17.47 | 16.44/22.03/2.11 | 16.44/22.03/0.00 | 29.83/37.00/9.83 | 0.16/0.19/0.13 |
| F1 / 28 / 109 | 206.00/568.00/124.00/801.00 | 8.00/16.00/7.00/28.00 | 29.2/10.0 | 8.12/9.90/5.00 | 0.29/2.32/12.90 | 15.46/33.62/0.00 | 15.46/19.28/0.00 | 34.33/52.67/11.17 | 0.17/0.38/0.15 |
| F1 / 29 / 107 | 537.00/1331.00/924.00/1771.00 | 12.00/22.00/20.00/20.00 | 45.8/12.5 | 4.96/5.00/5.00 | 17.32/2.86/11.44 | 48.81/61.36/52.46 | 43.46/61.55/64.23 | 30.00/51.83/41.17 | 0.27/0.66/0.55 |
| F1 / 29 / 108 | 628.00/1004.00/641.00/663.00 | 9.00/22.00/12.00/14.00 | 33.3/12.5 | 4.93/7.90/5.55 | 15.12/4.99/14.32 | 52.19/56.87/59.78 | 49.84/67.20/63.80 | 32.00/66.33/41.67 | 0.21/0.77/0.32 |
| F1 / 29 / 109 | 869.00/1108.00/547.00/1815.00 | 11.00/23.00/12.00/22.00 | 41.7/12.5 | 6.29/6.00/5.90 | 3.14/5.48/10.55 | 55.97/57.19/59.81 | 53.41/NA/63.90 | 33.00/72.91/41.83 | 0.26/0.99/0.31 |
| F1 / 30 / 107 | 334.00/101.00/212.00/342.00 | 8.00/4.00/4.00/7.00 | 50.0/0.0 | 5.30/6.96/5.22 | 0.69/0.49/9.41 | 48.45/39.91/77.69 | 55.98/39.91/77.69 | 28.50/22.17/48.50 | 0.22/0.09/0.16 |
| F1 / 30 / 108 | 359.00/723.00/248.00/371.00 | 9.00/18.00/7.00/10.00 | 50.0/10.0 | 6.50/7.68/4.47 | 0.95/1.37/19.50 | 46.27/72.45/76.22 | 38.42/78.35/76.17 | 27.67/48.00/31.83 | 0.22/0.58/0.23 |
| F1 / 30 / 109 | 166.00/607.00/453.00/557.00 | 3.00/15.00/11.00/10.00 | 12.5/10.0 | 5.38/6.66/4.48 | 1.25/1.21/11.80 | 47.88/57.10/77.57 | 47.88/58.55/76.59 | 20.83/29.67/60.50 | 0.10/0.45/0.36 |


## Diagnostic pull and unresolved failures

Frozen-binary fixture traces are retained under `fixture-diagnostics/60` and `/69`; their CLI configurations match the test defaults (seed107, drills, 180/140 s). These diagnostics use the same measured source, with no edit or rebuild.

- **D08 screened approach:** at 33.350002 s, squad0 accepts SupportByFire. Flank evaluation rejects 39 endpoints as outside the area, unwalkable or unprotected; eight routes have zero points; one 25-point route fails the covered-route contract (planner exposure18.291161 s). No candidate is accepted. At35.75 s the element's delivered fire establishes, but it holds and reports no covered flank. This directly explains why the D07–D11 chain is unexercised. The presence of a screening wall is not evidence that the controller can connect its actual positions to a valid protected 45–55 degree endpoint. The precise allocator/geometry repair remains unresolved; no relaxed acceptance was substituted.
- **D16 equal-number control:** BreakContact starts at22.950001 s and completes at54.350002 s, with a30 m alternation at39.5 s. At the first exported frame at23 s, own known strength is5, believed enemy strength9.56595 and superiority isfalse. The supposed one-to-one-with-superiority condition has not persisted: three own members were lost. The code permits three recent known losses to trigger BreakContact. Its trace text always says “believed ratio at least two” even when the casualty trigger selected the drill. The trace does not distinguish the two triggers; that diagnostics defect and the unmet control precondition remain reported; the assertion was not weakened and the pair is not counted as passing.
- D11's scripted casualty pair never enters the intended committed attack. Frozen membership alone is not sufficient evidence for its minStrength contract.
- The new assault-angle/suppression metrics can be null when no assault reaches the corresponding physical stage. Null is not successful doctrinal conformance. Full per-run records retain those fields.

The order/hit-rate table is included per run above. Works trace transition counts and per-run attack commitments are retained in `action-diagnostics.json`; those are observer diagnostics, not policy inputs. Mechanism failures and any significant scoreboard regressions remain grounds to reject this slice even where aggregate intensity increases.

Additional source/fixture audit limits (not repaired after freezing):

- The contact-to-SquadAttack entry currently requires effective incoming fire as well as lack of superiority. This is narrower than the requested general third branch; quiet known resistance can remain in basic movement. This is an implementation limitation, not an architect-approved exception.
- D08's defender has health10000. That makes support persistence durable, but the fixture does not arrange a credible objective-clearance event for the later consolidation assertion. The failure precedes this point; consolidation remains unverified rather than being waived on elapsed time.
- D06's passing assertions prove delivery gating, loss, protected occupants and its silent control. They do not separately assert the companion's inter-member spacing bound. The distribution measures still report spacing, but that is not a substitute for this missing mechanism assertion.

Paired scoreboard evidence confirms that this is not merely a failing fixture: F1 shots change by -349.33 (95% CI -437.72 to -266.68), total casualties by -8.71 (-10.83 to -6.83), closure120 by -13.08 m (-15.26 to -10.94) and closure240 by -15.12 m (-18.37 to -11.71) against Phase2d. Mean hits/soldier-minute fall from0.607 to0.250. Lower order churn (delta -24.00/min) accompanies this lost activity and is not evidence of improved tactics by itself. Nearest-squadmate median improves by0.56 m, but it does not compensate for those regressions.

Authored shots and casualties have intervals crossing zero against Phase2d on both maps. Works closure120 improves by10.16 m (8.99 to11.33), while closure240 is inconclusive at -7.39 m (-16.08 to1.23). The targeted improvement requirement is therefore not met. F1 has no measured phase-line angle samples; no assault completion is inferred.


## Implementation, interpretation and deferred work

## Scope and decisions

Read `plans/014-phase2d-fable-review.md` first. It accepts Phase 2 scope and assigns authored-map intensity/closure to Phase 3. Entry source is `cdcfe811c96f3616`. Legacy remains default; candidate90 remains preserved and selectable. No Fable launcher, commit, reset, stash, native Windows or Unreal invocation. No F2/F3 or platoon task tree. Gun pickup/recovery is deliberately not implemented.

The corridor repair was completed first in isolation: build/evidence in `.local/phase3/corridor/`. D05's unchanged capable control and the other five Phase 2 pairs, position/plumbing checks and lifecycle pins all pass there. It retains a usable accepted corridor or constructs one from an actual known element member to the stage destination; a geometric element centre is not assumed to be navigable. Empty routes are rejected before position allocation. Column anchors follow the retained route's own start/destination. No historical route planner/evaluator was changed.

`SquadDrillSim.cpp` contains Phase 3 squad actions alongside the existing basic movement/contact controller. The following describes code paths, not a claim that the failing mechanisms were validated:

- SupportByFire uses frozen gun-group membership and received delivered-round records: two support-weapon rounds or three rifle rounds by an element shooter on the named area inside six seconds. Support is lost after eight seconds without qualifying evidence, observed at plan cadence. Valid occupied support slots remain owned when the firing contract changes. The element requires protected occupants with geometrical lines; every rifleman need not have the gun's range. Movement release still requires real deliveries. Lost support causes a matching-contract pause/resume; the instance, generation and task identity remain.
- SquadAttack evaluates flank positions 45–55 degrees from the base at the objective and at most 40 m away, inside the accepted area. Candidates include catalogue tangent positions and projected angular anchors. Paths require at least half their travel concealed/protected and no continuous exposed stretch over five seconds; these are explicit doctrinal implementation thresholds, not fitted values. One alternate evaluation is allowed for a newly learned threat inside the committed corridor. No alternative is triggered for an outside-corridor threat.
- Buddy rushes use at most two members, path-limited to 8 m before allocation and at most 9.45 m after projection. Soldier execution has a five-second permission clock, excluding an explicitly received support pause. It reports timeout instead of silently continuing a failed rush. The assault line uses five-metre intervals. Matching phase-line arrival receipts trigger base-fire lift through normal order transport before crossing; drills-only lift cancels further fire solutions and bursts. Near-objective movement within 18 m requires fresh delivered fire from a stationary, non-lifted squad member.
- Consolidation requires matching objective receipts from at least half the manoeuvre element and no known enemy inside the objective radius. Slots face remaining known threats; completion enters Reorganise before another drill. Elements never migrate on drill acceptance. A minStrength crossing reports InsufficientStrength and enters Reorganise.
- BreakContact is selected on believed strength at least twice own without superiority, three known own casualties in twenty seconds without superiority, or withdrawal orders. One element suppresses while the other seeks a 25–50 m rear bound (30 m nominal); they alternate on received arrivals. No fresh contact within 100 m for twenty seconds or reaching the rally completes it. Withdraw then occupies the rally. Occupy retains mutually supporting slots until supersession. Observe uses the existing Observe completion/coverage receipt; forty-five seconds without evidence reports NoObservation.

Soldier vocabulary maps to existing Task/Completion pairs: Suppress→BoundCover/Support; Rush→BoundMove/Transit with a five-second budget; OccupySlot→Overwatch/Occupy; Observe→Overwatch/Observe; Withdraw→PullBack/Occupy. Shelter retains the existing higher-priority emergency execution path. No new physical weapon mechanic or platoon planner was introduced.

New deterministic action state, rush pause timing and evaluation fields are inside the drills digest/export path. Shared execution/fire changes are gated on a drill assignment. Policy uses officer memory, own orders, received deliveries/receipts and permitted squad-member fields. Observer exports and `Record.shots` are used only by offline metrics and tests.

## Scenarios and fixture boundaries

New fixture IDs are appended after 55: D06=56/57, D07=58/59, D08=60/61, D09=62/63, D10=64/65, D11=66/67, D16=68/69. Existing 44–55 fixtures and behavioural assertions are retained. The new fixtures use production sensing, reaction, navigation, firing and task-report transport. Reload changes are physical test stimuli. D10 reveals an actual new soldier inside/outside the committed corridor; it never injects a contact. D11 changes physical health/action at the stimulus time, then relies on production casualty reporting; those two test casualties are scripted physical stimuli, not ballistic-kill evidence. D12 specifically requires a projectile casualty followed by RecoverWeapon; that scenario is **deferred**, not counted as passed, because the user explicitly deferred gun recovery.

The screened-flank fixture was corrected during premeasurement work to use the actual frozen gun/rifle membership and to place manoeuvre members on the screened approach. Assertion bounds were not loosened. Preflight also exposed and corrected a support-allocation error requiring every rifleman to have gun range. The first D06 test incorrectly treated every established frame as new evidence; it now checks establishment transitions against recorded shot launches with the simulator's maximum one-second flight allowance, while policy uses delivered timestamps inside the exact six-second window.

## Statistical interpretation

There is no per-run conjunction or pass-count scoreboard. `tools/compare_drills.py` classifies paired mean differences by a deterministic 95% percentile bootstrap (2,000 resamples). F1 resamples generated-map clusters, retaining the three battle seeds; each authored map resamples its ten battle-seed pairs. A CI wholly favourable is improved; wholly adverse is a regression; crossing zero is inconclusive, not proof of equivalence. Missing closure horizons are excluded pairwise, with paired n disclosed; they are not counted as failed battles or extrapolated.

The causal slice comparison is Phase 3 minus the preceding Phase 2d drills build. Authored shots, total casualties and Works closure at 120/240 s must show improvement; other corrected criteria must not show a significant regression. The same intervals against candidate90 and legacy are reported in full, including a separate strict historical no-regression result. This resolves the review's unspecified comparison reference explicitly; it does not replace the unchanged promotion bar or claim noninferiority from inconclusive intervals. If any mechanism/parity requirement or this statistical test fails, the slice fails. Raw per-run values, including both-side casualty fractions, remain disclosed.

Metric meanings are inherited: casualties = initial-active minus final-active across both teams; nearest-squadmate median and under-2 m share are the existing Phase 0 metrics; closure is the established surviving-member paired front displacement; order rate counts Azure soldier orders (including NCO/self/staff orders) per actual battle minute, excluding platoon directives; both-side hits per integrated active soldier-minute is diagnostic. Archived candidate90 trace references retain the accepted 344 Azure orders on Works107, not the withdrawn 454 figure.

New family conformance measurements use actual exported movement/phase-line frames: physical assault-element angle at the first phase-line receipt; whether support had established before assault movement; and BreakContact selected in squads whose exported actor belief was at least twice own strength without superiority. Missing concepts/samples are null. These measurements do not drive policy.

## Deferred gun-recovery design (D12)

Proposed next design, not implemented:

1. On a drills gunner's projectile casualty, create a stable dropped-weapon record with identity, position, owning element and availability in Frame. Keep the dead soldier's identity separate from the weapon. Hash these records only in the drills block.
2. Expose the friendly loss/weapon position through existing sighting and report transport. An officer cannot know the weapon is safe or already claimed from observer state.
3. Within the frozen gun group, allocate the nearest capable member with a protected reachable approach. RecoverWeapon maps to a new explicit pickup completion, since neither Transit nor Occupy proves a physical transfer. The surviving group continues rifle support; dependent movement pauses if its real element-delivery evidence lapses.
4. Atomically claim and transfer the weapon on physical arrival, preventing two recoverers. Resume support only on new delivered rounds, never on the pickup receipt alone. An exposed/unreachable pickup reports Blocked and uses a rifle base of fire.
5. D12 must then use an actual projectile casualty and its exposed-position control, with recovery/fire latency bounded by path/1.89 m/s plus two seconds. Also test claim contention, interrupted recovery, second recoverer casualty, trace parity and unchanged historical digests. The initial ownership/template decision still needs architect review before implementing the physical mechanic.


## Disagreements and completion limits

- No disagreement with the Phase 2 acceptance, required corridor repair, one-measured-build stop rule or deferred gun recovery.
- The comparison reference for “regression” is underspecified. I explicitly use Phase2d for the causal slice exit and disclose separate paired intervals versus both historical controllers. Neither interpretation yields an accepted slice; no promotion bar was relaxed.
- Covered-route implementation adds explicit >=50% protected/concealed travel and <=5 s continuous exposure thresholds; these are assumptions for review, not claimed architect rulings.
- D07–D11 and D16 remain failing. Later assault contracts are not demonstrated. D12 is deferred by instruction. Occupy/Observe/Withdraw code paths are present but this slice provides no additional dedicated passing mechanism pair for each.
- The asserted equal-strength/superiority control and casualty/minStrength fixture conditions require review against the actual received knowledge; no pass is inferred from their labels.
- This measured build is left in the working tree with its failing evidence. No second measured iteration, Phase4/platoon tree or F2/F3 was started.

Final fingerprint rechecked: `3231bd74bac2cef1`. Stop after this report.
