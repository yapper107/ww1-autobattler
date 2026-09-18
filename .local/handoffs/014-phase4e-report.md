# Plan 014 Phase 4e — Advance-leg lifecycle

**Result: Phase4e does not meet the Phase4 tactical exit.** The Advance lifecycle repair and new P07 pass on the first local attempt, with all26 existing selectors retained. Full Linux suite,40/40 authored legacy/cognition digest checks and3/3 drills trace-parity checks pass. The single measured build completes all110 runs and passes every engagement guard, but11 of18 required statistical criteria fail. No second build or follow-on implementation was started. Legacy remains default.

17 September 2026. Implementation by Astra, against the attributed [Phase4d review](../../plans/014-phase4d-fable-review.md). No new architect consultation was invoked. Legacy remains the playable default; drills is experimental.

## Source and scope

Entry fingerprint: `26af0a096babc8bf`. Final and only local-attempt source: `d8586da13b539c61`. Entry and attempted sources are preserved under `.local/phase4e/{entry,attempt1}/source`; the slice-only patch is `.local/phase4e/attempt1/simulation.patch`. Existing uncommitted work was retained. No commit, reset, stash, Fable launcher, native Windows build or Unreal operation was performed.

- `Sim/PlatoonTaskSim.cpp:140`: one persistent Advance node per reported squad, capacity one and squad filter. Its next objective is 60 m forward from that squad's reported position, retaining its lateral position. Nodes and accepted objectives persist between completions.
- `Sim/PlatoonTaskSim.cpp:171`: Secure activation requires a completed Flank attack directive with a matching goal, excluding Advance even though its existing goal-purpose vocabulary is Seize.
- `Sim/PlatoonTaskSim.cpp:182`: matching Done advances the existing node, route, area and directive intent for the same squad. The accepted directive serial prevents repeated stale Done reports from consuming multiple legs. Ordinary transport assigns the renewal a new message serial; its intent remains unchanged.
- `Sim/PlatoonTaskSim.cpp:186`: two accepted completions within 18 m trigger `platoon_no_progress` and a proposed next objective at least 40 m ahead. Own completion history lives in `PlatoonTaskState` and is included only in the drills digest block.
- `Sim/DrillSim.cpp:292,360`: a same-intent renewal with a changed Advance waypoint is one material transition; an unchanged renewal does not restart the drill. Completed no-contact Advance remains Done at Reorganise until a new leg, contact or expiry, allowing normal report transport to deliver completion without repeated reacceptance.
- `tests/platoon_tests.h:70`, `Sim/PlatoonFixtures.cpp:28`, companion P07: new encounters 82/83. Four durable squads march over open ground with a remote durable holding-fire opponent. The control uses the existing covered-contact geometry with the defender 15 m closer (90 m nominal initial separation). All sensing, reports, directive delivery and member receipts are production paths; observer distance, displacement and node checks exist only in tests. Existing fixtures and behavioral assertions are retained. Encounter dispatch and CLI bounds extend through 83.

## Local attempt and mechanisms

Only attempt 1 was needed. Commands:

```sh
./scripts/test-sim.sh --platoon P07
./scripts/battle-lab.sh --version
python3 .local/phase4e/run_attempt.py 1
python3 .local/phase4e/trace_attempt.py 1
.local/phase4e/final/battle-lab --drills --encounter 82 --seconds 120 --evaluate --out .local/phase4e/attempt1/traces/82
```

All **27/27 selectors** pass on one source: D01–D11 (including D06–D09), D16, D17; P01–P07; close, sprint, projection, sector, positions, plumbing and lifecycle pins. Existing P01–P06 function bodies are byte-identical to the entry snapshot. Logs and exact per-selector commands: `.local/phase4e/attempt1/{results.json,mechanisms/}`.

P07: front displacement **225.751 m** by 120 s; minimum observed enemy distance **310.303 m**; no known contact; no Secure; maximum **5** platoon directives to any squad; control Fix and Flank both true. The fixture's no-contact premise is also asserted over every frame.

P07 trace evidence (`.local/phase4e/p07-evidence.json`): squad 0 receives its initial waypoint x=5.929 at3.85 s; completes at26.55 s; commander renews the same intent to x=58.677 at29.95 s; the squad resumes at31.75 s. Further renewals go to x=108.772 at60.95 s and x=158.272 at90.95 s. Done remains available during report transit. This is forward progression, with one restart after each received new leg, rather than the prior unchanged four-second acceptance loop. No distribution runs occurred during mechanism development.

Unchanged P03 still passes: phase receipt139 s, fixing leader amendment140.4 s, all active fixing members lifted142 s, **zero** late original-area rounds; no-phase control emits no lift. P06 records17 renewals, valid60–90 s lifetimes and no stale execution. D08 and all lifecycle pins pass unchanged.

## Verification before measurement

`python3 .local/phase4e/gates.py` runs the gates sequentially and records commands, exit codes and logs in `gate-status.json`:

1. `./scripts/test-sim.sh`: **PASS**, reported simulation-test runtime229.573 s (compiler time additional). Default battle360 s,1878 shots, unchanged legacy behavior; full integration assertions pass.
2. `python3 .local/phase4/parity.py .local/phase4e/authored-parity .local/phase4e/final/battle-lab`: forty360 s runs, legacy and explicit cognition, Works and Trenches, seeds100–109, compared directly with preserved Phase0 manifests.
3. `python3 .local/phase4e/trace_checks.py`: drills360 s, seed107, Works/Trenches and F1 generator draw1, paired trace on/off.

Additional checks: `python3 -m unittest discover -s tests -p 'test_*.py'` **63 passed** in3.482 s. `git diff --check` passed. `.local/phase4e/static-checks.json` confirms protected authored terrain, both frozen seed lists and `tools/evaluate_routes.py` hashes unchanged, existing platoon pair function bodies unchanged, and source unchanged after attempt1. The source fingerprint changes include appended scenario construction and dispatch because simulation fixture files are hashed.

The110 preserved traced candidate90 references were revalidated against their untraced manifests, all digest-equal (`candidate-reference-revalidation.json`). Their order-rate reference data are reused; this is manifest revalidation, not110 newly executed candidate runs. The forty current-binary legacy/cognition checks above are fresh runs.

All three sequential gates completed successfully: **40/40 authored digest matches**, **3/3 trace-parity matches**. Exact expected/actual digest strings and commands are in `authored-parity/parity.json` and `trace-parity.json`.

## Single measured build and definitions

```sh
python3 .local/phase4e/measure.py
# First runs:
python3 .local/phase4e/run_authored.py
# Only after both authored sets complete without a guard failure:
python3 tools/run_family.py --binary .local/phase4e/final/battle-lab --out .local/phase4e/f1-dev --family F1 --gen-seeds 1-30 --seeds 107-109 --controllers drills --seconds 360 --jobs 4 --trace
```

Authoritative per-run commands are stored with each incremental case. Authored runs use two workers per map, sequential Works then Trenches, seeds100–109,360 s, `--drills --evaluate` with trace enabled. F1 uses the existing memory-bounded process-pool runner. Three zero-shot completions in a fixed ten-case block fail the engagement guard; dispatch stops, in-flight jobs drain, and the next set is not opened. This is one source/build and one cohort attempt, with no per-seed changes or second measured build.

Metrics reuse Phase0 dispersion/tactics, `family_metrics`, `closure_metrics` and `order_metrics`. Orders count ordinary issued soldier orders, not platoon directives; trace/event counts are checked. Hits/soldier-minute is diagnostic. Total casualties count both sides' incapacitated soldiers; each side's fraction is disclosed. The paired confidence intervals use2000 bootstrap resamples, seed1729, authored battle-seed pairing and F1 generator-draw clusters (three battle seeds per generator). Paired means govern criteria; per-run adverse labels are disclosures, not a conjunction gate. Incomplete guarded cohorts cannot establish distributional acceptance.

## Measured outcome and paired scoreboard

All **20 authored +90 F1** runs completed on `d8586da13b539c61`. Works: zero zero-shot runs; Trenches: one (seed103); F1: zero. All guard statuses are false. There were no failed subprocesses and no omitted or substituted draws. Incremental records are `authored/results.json` and `f1-dev/family.json` under `.local/phase4e/`.

F1 finishes **71 attacker wins /3 draws /16 losses**, versus Phase3e75/5/10, candidate9065/7/18 and legacy54/2/34. The paired change against Phase3e is -4.44 percentage points (CI -13.33 to+5.56); exchange is also lower in the point estimate but its paired interval crosses zero. These meet the review's “no regression beyond its interval” reading; neither establishes equivalence. F1's shots guard improves against candidate90 by72.26 (CI14.12 to132.73), and both spacing criteria improve against legacy.

The authored targets fail on **both** maps: total casualties and closure at both horizons regress against candidate90 beyond their intervals. Works' own-soldier order rate also regresses by18.83/min (CI13.57 to23.43). Trench order churn improves strongly, but its spacing is worse than legacy and its2.649 m median remains below3 m (paired-to-floor CI -0.517 to-0.192 m). Works nearest-squadmate median also regresses against legacy, although under-2 m share improves. Seven of18 required criteria pass; eleven fail. These are the measured findings, not grounds for another build in this slice.

The summary below reports per-run-ratio means in “Exchange”; raw aggregate exchange is disclosed separately. Rates and fractions use the same definitions as the earlier reports.

| Set | Controller | W/D/L | Shots | Total losses | Exchange | NN m | Under2 % | Closure120/240 m | Azure orders/min | Hits/soldier-min |
|---|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|
| F1 | candidate90 | 65/7/18 | 450.544 | 12.989 | 0.801 | 3.109 | 38.359 | 48.768/48.803 | 39.846 | 0.452 |
| F1 | drills-phase3e | 75/5/10 | 462.733 | 10.867 | 1.989 | 6.463 | 3.408 | 44.750/40.464 | 58.682 | 0.450 |
| F1 | drills-phase4e | 71/3/16 | 522.800 | 10.067 | 1.430 | 6.150 | 4.770 | 26.979/26.916 | 50.911 | 0.269 |
| F1 | legacy | 54/2/34 | 718.200 | 15.767 | 1.987 | 5.102 | 13.627 | 53.498/54.087 | 127.523 | 0.496 |
| Trenches | candidate90 | 5/0/5 | 798.900 | 16.600 | 1.647 | 1.454 | 66.474 | 39.698/35.936 | 611.033 | 0.176 |
| Trenches | drills-phase3e | 4/0/6 | 800.900 | 11.600 | 0.996 | 2.781 | 36.185 | 24.230/28.114 | 98.600 | 0.138 |
| Trenches | drills-phase4e | 6/2/2 | 262.300 | 4.600 | 2.263 | 2.649 | 39.101 | 23.621/23.521 | 77.250 | 0.059 |
| Trenches | legacy | 6/1/3 | 1989.300 | 32.900 | 1.575 | 3.946 | 31.277 | 35.672/37.111 | 255.383 | 0.410 |
| Works | candidate90 | 3/1/6 | 988.400 | 38.800 | 0.808 | 0.976 | 79.733 | 108.806/109.355 | 64.333 | 0.502 |
| Works | drills-phase3e | 5/3/2 | 1001.400 | 9.600 | 1.724 | 7.317 | 5.697 | 78.728/61.300 | 86.617 | 0.119 |
| Works | drills-phase4e | 5/1/4 | 793.300 | 11.200 | 0.863 | 4.958 | 9.852 | 63.836/82.570 | 83.167 | 0.128 |
| Works | legacy | 2/3/5 | 2306.500 | 38.000 | 0.979 | 6.539 | 16.440 | 94.741/91.292 | 210.150 | 0.468 |

### Required paired criteria

Differences are candidate minus reference. 95% paired percentile intervals use 2000 cluster resamples. Crossing zero is inconclusive, not equivalence. Primary exchange is the existing per-run ratio of defender/attacker casualty fractions; zero-attacker-loss ratios are unavailable and paired counts disclose omissions. Aggregate raw-loss ratios are supplementary.

| Set | Reference | Criterion | Paired n | Delta | CI95 | Finding |
|---|---|---|---:|---:|---|---|
| F1 | drills-phase3e | win_azure | 90 | -0.0444 | -0.1333 / 0.0556 | inconclusive |
| F1 | drills-phase3e | casualty_exchange | 88 | -0.6334 | -1.4442 / 0.0825 | inconclusive |
| F1 | candidate90 | shots | 90 | 72.2556 | 14.1208 / 132.7339 | improved |
| F1 | legacy | nearest_m | 90 | 1.0475 | 0.5177 / 1.6258 | improved |
| F1 | legacy | under_2m | 90 | -0.0886 | -0.1130 / -0.0644 | improved |
| Works | candidate90 | casualties_total | 10 | -27.6000 | -31.2025 / -23.1000 | regression |
| Works | candidate90 | closure_120s_m | 10 | -44.9698 | -48.0794 / -42.5715 | regression |
| Works | candidate90 | closure_240s_m | 10 | -26.7852 | -30.1368 / -23.8614 | regression |
| Works | candidate90 | orders_azure_per_minute | 10 | 18.8333 | 13.5654 / 23.4342 | regression |
| Works | legacy | nearest_m | 10 | -1.5802 | -2.2810 / -0.7477 | regression |
| Works | legacy | under_2m | 10 | -0.0659 | -0.0981 / -0.0393 | improved |
| Trenches | candidate90 | casualties_total | 10 | -12.0000 | -15.4000 / -8.9000 | regression |
| Trenches | candidate90 | closure_120s_m | 10 | -16.0771 | -18.8919 / -12.7997 | regression |
| Trenches | candidate90 | closure_240s_m | 10 | -12.4144 | -16.1376 / -7.0806 | regression |
| Trenches | candidate90 | orders_azure_per_minute | 10 | -533.7833 | -649.3283 / -418.2217 | improved |
| Trenches | legacy | nearest_m | 10 | -1.2968 | -1.8242 / -0.8137 | regression |
| Trenches | legacy | under_2m | 10 | 0.0782 | 0.0495 / 0.1053 | regression |
| Trenches | 3 m floor | nearest_m | 10 | -0.3506 | -0.5170 / -0.1921 | regression |

Full comparisons against Phase3e, candidate90 and legacy: `.local/phase4e/all-comparisons.md`; machine-readable intervals and inclusion counts: `phase4e-scoreboard.json`; metric distributions: `distributions.json`. The actual family-runner comparison also completed successfully:

```sh
python3 .local/phase4e/finish_analysis.py
python3 tools/report_family.py .local/phase1/f1-dev/family.json .local/phase4e/f1-dev/family.json --out .local/phase4e/family-report.json --markdown .local/phase4e/family-report.md
```

The first command validates artifacts, enriches all110 records, calculates the paired scoreboard, augments every per-run row, runs the second command and extracts zero-shot trace evidence. `final-analysis-status.json` and `analysis-status.json` record all successful exits. No simulation sources changed during analysis.

### Exchange sensitivity

The primary historical metric omits a per-run fraction ratio when attacker losses are zero. This leaves88 matched F1 pairs against Phase3e. Aggregate enemy/own raw-loss ratios use the whole cohort and differ from averaging fraction ratios (F1 sides differ in size):

| Reference | Candidate aggregate exchange | Reference aggregate exchange | Paired difference | CI95 | Matched runs |
|---|---:|---:|---:|---|---:|
| drills-phase3e | 0.2761 | 0.4174 | -0.1413 | -0.2866 / -0.0147 | 90 |
| candidate90 | 0.2761 | 0.2292 | 0.0468 | -0.0350 / 0.1326 | 90 |
| legacy | 0.2761 | 0.3540 | -0.0780 | -0.1679 / 0.0177 | 90 |

The aggregate raw-loss sensitivity **does regress against Phase3e**: -0.1413, CI -0.2866 to -0.0147. This differs from the primary per-run fraction-ratio result and is an adverse outcome finding. The primary definition was retained for comparability; the sensitivity is not treated as evidence of equivalence or hidden by the primary interval crossing zero.

## Trace evidence and remaining defects

- **The reviewed Advance loop is removed in the inspected Works100 trace.** The prior build recorded94 Azure deployment-leg completions and50 greedy assignments in that battle. The corrected run records3 leg completions,2 completed-leg renewals and8 greedy assignments; it fires593 shots. P07's committed intent and advancing waypoint sequence are recorded above. Same-build evidence: `.local/phase4e/advance-diagnostics.json`, including exact trace IDs, times and goals for Works100/103 and Trenches100/103.
- **Trenches103 remains passive for a different observed sequence.** Zero shots and zero casualties, with no positive Azure mental-map estimate in the extracted trace. Azure records four eligible-budget column contractions, four column-budget Blocked transitions, four “two expiries within6 m” Blocked transitions, and thirteen ordinary committed renewals. It has no deployment-leg completion and no completed-leg renewal, so the old Done→Secure diagnosis does not explain this run. At3.85 s the planner assigns objectives near x=-26; later it renews objectives near x=-11 (squad0), -10.6 (squad1) and -5.2 (squad2) while movement remains incomplete. This supports a remaining terrain/stage-execution failure hypothesis, not a claim that a specific untested remedy is proven. See `.local/phase4e/guard-trace-evidence.json` and its recorded run path. The engagement guard tolerates this single adverse run; the spacing and closure scoreboards still fail.
- Hits per soldier-minute remain diagnostic: Works0.128 versus candidate900.502, Trenches0.059 versus0.176; F10.269 versus0.452. Restoring nonzero engagement is insufficient to meet the requested authored-map tactical exit.

## Interpretations, disagreements and limits

1. No disagreement with separating Advance completion from secured attack objectives or with per-squad forward legs. The existing wire vocabulary has no standalone `PlatoonTask::Seize`; Advance and Flank both use `GoalPurpose::Seize`. Secure therefore keys on the completed **Flank task**, not that ambiguous goal purpose, to avoid restoring the reviewed defect. A future explicit Seize task must be added deliberately to that predicate.
2. P07 measures the foremost squad centre's displacement; the distribution closure metric remains the established mean of surviving squads' median paired member displacement. Both are stated separately; no baseline metric was changed. The P07 control has nominal90 m longitudinal initial separation, ordinary sensing and no injected contact receipt.
3. The loop guard guarantees a **requested** next objective at least40 m ahead. `ResolveOrderPosition` can adjust it within8 m or reject an impossible request near the finite map boundary; the resulting route is not separately checked for40 m forward displacement. Thus the literal resolved-endpoint minimum is an implementation limitation, not fully proven by P07. The inspected P07 and authored diagnostic traces did not exercise `platoon_no_progress`. A future correction should validate the resolved endpoint and report route exhaustion if the forward minimum cannot be satisfied. No post-measurement policy change was made.
4. Missing closure horizons after battle termination remain unavailable, not zero or successful closure; valid paired counts are printed. Zero-own-loss exchange ratios remain unavailable in the historical primary metric; aggregate raw-loss sensitivity above avoids hiding those runs. These limitations carry forward unchanged.
5. The full requested measurement and Linux checks were completed. Windows/Unreal verification remains with the architect and was not attempted. Weapon attachment, Merge member transfer and company escalation remain Phase4f; F2/F3 and gun pickup were not implemented. The requested single-build stop applies: the tactical exit fails and work stops with this report.

## Per-run records and adverse cases

P4e=current; P3e=accepted Phase3 measurement reference; C=candidate90; L=legacy. W/D/L are Azure outcomes. A:E losses are counts; casualty percentages and the historical exchange fraction are appended for every current run. `NA` preserves unavailable metrics. Adverse labels disclose individual deficits without replacing the paired statistical scoreboard. All110 runs follow.

| Set / draw / seed | Outcome P4e/P3e/C/L | A:E losses P4e/P3e/C/L | Shots P4e/P3e/C/L | NN m P4e/L | <2m % P4e/L | Closure120 P4e/P3e/C/L | Closure240 P4e/P3e/C/L | Azure orders/min P4e/P3e/C | Hits/soldier-min P4e/P3e | Per-run adverse guards  | Casualty % A:E P4e | Exchange P4e |
|---|---|---|---:|---:|---:|---:|---:|---:|---:|---|---:|---:|
| works / 0 / 100 | L/W/L/D | 3:2/0:3/27:10/18:18 | 593.00/696.00/839.00/2583.00 | 5.46/7.27 | 5.85/16.21 | 66.98/80.80/108.43/95.05 | 83.11/79.03/106.78/88.52 | 69.67/108.67/68.33 | 0.07/0.07 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C  | 9.38:6.25 | 0.667 |
| works / 0 / 101 | L/L/L/L | 9:6/6:2/29:12/20:15 | 1205.00/600.00/1038.00/2012.00 | 6.29/5.04 | 7.63/23.52 | 66.98/76.64/108.32/86.11 | 79.28/44.60/106.43/90.09 | 82.33/79.67/57.17 | 0.18/0.10 | losses<C, closure120<C, closure240<C, orders>C  | 28.12:18.75 | 0.667 |
| works / 0 / 102 | L/W/W/W | 10:5/0:8/22:23/12:23 | 1088.00/861.00/965.00/2270.00 | 5.32/5.98 | 8.02/16.51 | 64.58/81.61/106.23/93.35 | 81.36/77.00/118.03/97.13 | 81.17/74.67/69.83 | 0.17/0.10 | NN<L, losses<C, closure120<C, closure240<C, orders>C  | 31.25:15.62 | 0.500 |
| works / 0 / 103 | W/W/W/L | 0:6/3:10/18:24/22:18 | 728.00/1328.00/1272.00/2347.00 | 4.83/5.51 | 7.47/19.16 | 62.63/76.29/112.32/94.75 | 82.96/41.99/104.80/78.26 | 88.33/82.50/69.50 | 0.10/0.15 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C  | 0.00:18.75 | NA (zero own loss) |
| works / 0 / 104 | W/D/L/L | 0:7/3:3/25:16/24:16 | 311.00/1522.00/1067.00/2086.00 | 4.88/7.56 | 8.96/14.20 | 53.99/82.15/110.46/99.34 | 77.09/59.13/109.71/83.68 | 89.17/70.00/64.17 | 0.07/0.09 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C  | 0.00:21.88 | NA (zero own loss) |
| works / 0 / 105 | W/W/L/L | 6:7/1:4/21:13/22:19 | 586.00/567.00/1003.00/2318.00 | 4.00/6.80 | 11.57/13.31 | 63.98/78.07/109.37/92.96 | 82.06/62.97/109.55/93.13 | 84.33/88.17/69.50 | 0.14/0.08 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C  | 18.75:21.88 | 1.167 |
| works / 0 / 106 | L/D/D/L | 7:2/7:7/20:20/25:16 | 748.00/1107.00/973.00/2803.00 | 4.52/6.88 | 11.91/16.53 | 64.43/77.84/108.77/89.28 | 85.08/54.26/109.94/83.58 | 80.00/76.00/66.17 | 0.11/0.16 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C  | 21.88:6.25 | 0.286 |
| works / 0 / 107 | W/W/W/D | 6:8/4:10/17:24/19:19 | 888.00/1520.00/1197.00/1878.00 | 4.66/7.56 | 12.67/12.54 | 64.77/75.84/109.79/103.34 | 87.13/56.79/109.62/99.62 | 85.67/74.17/57.33 | 0.12/0.15 | shots<C (disclosure), U2>L, NN<L, losses<C, closure120<C, closure240<C, orders>C  | 18.75:25.00 | 1.333 |
| works / 0 / 108 | D/L/L/W | 6:6/8:5/23:16/15:17 | 783.00/1035.00/841.00/1962.00 | 4.49/6.28 | 13.06/17.33 | 64.41/80.41/107.26/100.83 | 79.44/58.78/110.62/95.38 | 86.00/90.17/59.83 | 0.14/0.17 | shots<C (disclosure), NN<L, losses<C, closure120<C, closure240<C, orders>C  | 18.75:18.75 | 1.000 |
| works / 0 / 109 | W/D/L/D | 7:9/6:6/18:10/21:21 | 1003.00/778.00/689.00/2806.00 | 5.12/6.51 | 11.38/15.09 | 65.61/77.64/107.12/92.41 | 88.19/78.47/108.08/103.55 | 85.00/122.17/61.50 | 0.18/0.12 | NN<L, losses<C, closure120<C, closure240<C, orders>C  | 21.88:28.12 | 1.286 |
| trenches / 0 / 100 | D/L/W/W | 2:2/6:3/2:9/19:21 | 293.00/656.00/598.00/2104.00 | 2.41/4.17 | 37.90/28.50 | 21.34/22.45/42.08/31.51 | 22.32/24.25/41.18/36.59 | 80.00/106.83/509.50 | 0.05/0.10 | shots<C (disclosure), NN<3, U2>L, NN<L, losses<C, closure120<C, closure240<C  | 6.25:6.25 | 1.000 |
| trenches / 0 / 101 | W/W/L/L | 1:3/5:6/15:2/20:4 | 289.00/966.00/1342.00/1569.00 | 2.56/3.39 | 40.94/33.43 | 31.26/23.92/37.65/36.31 | 35.79/39.62/27.90/27.25 | 110.67/105.67/313.33 | 0.07/0.16 | shots<C (disclosure), NN<3, U2>L, NN<L, losses<C, closure120<C  | 3.12:9.38 | 3.000 |
| trenches / 0 / 102 | L/W/L/W | 5:3/3:9/13:10/7:21 | 272.00/730.00/1179.00/1774.00 | 2.31/2.58 | 42.16/39.51 | 24.62/24.00/32.20/37.33 | 22.20/23.30/36.55/52.50 | 86.00/89.83/836.17 | 0.08/0.14 | shots<C (disclosure), NN<3, U2>L, NN<L, losses<C, closure120<C, closure240<C  | 15.62:9.38 | 0.600 |
| trenches / 0 / 103 | D/L/W/W | 0:0/10:7/5:9/5:24 | 0.00/1278.00/511.00/1805.00 | 2.21/3.30 | 46.52/30.39 | 20.28/22.85/41.65/39.26 | 21.74/36.27/33.43/52.18 | 44.50/118.17/473.00 | 0.00/0.19 | shots<C (disclosure), NN<3, U2>L, NN<L, losses<C, closure120<C, closure240<C, ZERO  | 0.00:0.00 | NA (zero own loss) |
| trenches / 0 / 104 | W/L/L/W | 1:4/12:5/10:8/12:14 | 269.00/1083.00/817.00/1377.00 | 2.61/2.69 | 39.72/40.27 | 20.47/23.81/39.89/36.93 | 22.38/30.18/34.42/43.42 | 69.67/103.50/670.00 | 0.05/0.18 | shots<C (disclosure), NN<3, NN<L, losses<C, closure120<C, closure240<C  | 3.12:12.50 | 4.000 |
| trenches / 0 / 105 | W/L/L/W | 0:4/8:5/8:7/13:18 | 140.00/870.00/558.00/1948.00 | 2.61/5.77 | 35.67/27.75 | 20.19/24.54/40.50/40.38 | 21.42/26.92/32.04/34.10 | 76.67/133.67/428.33 | 0.05/0.16 | shots<C (disclosure), NN<3, U2>L, NN<L, losses<C, closure120<C, closure240<C  | 0.00:12.50 | NA (zero own loss) |
| trenches / 0 / 106 | L/L/W/L | 1:0/5:4/6:7/24:17 | 151.00/394.00/552.00/2552.00 | 3.00/4.41 | 35.01/26.96 | 26.51/25.50/43.71/35.51 | 24.96/26.13/36.94/27.18 | 74.83/72.50/983.00 | 0.02/0.10 | shots<C (disclosure), U2>L, NN<L, losses<C, closure120<C, closure240<C  | 3.12:0.00 | 0.000 |
| trenches / 0 / 107 | W/W/W/W | 2:8/0:1/5:10/16:23 | 375.00/225.00/655.00/2284.00 | 2.90/4.68 | 40.02/28.78 | 24.28/25.27/39.85/32.27 | 21.41/28.06/39.22/23.72 | 67.00/77.17/580.33 | 0.12/0.02 | shots<C (disclosure), NN<3, U2>L, NN<L, losses<C, closure120<C, closure240<C  | 6.25:25.00 | 4.000 |
| trenches / 0 / 108 | W/L/W/L | 1:4/9:5/2:8/20:19 | 456.00/813.00/385.00/2262.00 | 2.94/4.14 | 35.10/30.53 | 25.19/26.67/41.72/34.77 | 21.11/21.81/37.17/49.50 | 87.00/90.00/703.17 | 0.07/0.16 | NN<3, U2>L, NN<L, losses<C, closure120<C, closure240<C  | 3.12:12.50 | 4.000 |
| trenches / 0 / 109 | W/W/L/D | 2:3/6:7/21:9/16:16 | 378.00/994.00/1392.00/2218.00 | 2.94/4.34 | 37.96/26.66 | 22.07/23.29/37.73/32.47 | 21.88/24.60/40.51/24.67 | 76.17/88.67/613.50 | 0.07/0.16 | shots<C (disclosure), NN<3, U2>L, NN<L, losses<C, closure120<C, closure240<C  | 6.25:9.38 | 1.500 |
| F1 / 1 / 107 | W/W/D/W | 8:4/7:0/13:1/12:4 | 749.00/454.00/466.00/1038.00 | 8.52/7.69 | 1.41/11.07 | 41.83/49.52/70.99/71.28 | 45.58/49.42/73.08/68.95 | 55.00/39.33/64.00 | 0.24/0.13 | none  | 33.33:33.33 | 1.000 |
| F1 / 1 / 108 | W/W/D/W | 10:1/8:0/12:0/13:8 | 413.00/300.00/411.00/1027.00 | 5.97/6.14 | 0.71/13.19 | 45.95/55.58/61.41/71.27 | 22.10/55.58/74.44/71.27 | 59.83/37.83/70.50 | 0.20/0.12 | NN<L  | 41.67:8.33 | 0.200 |
| F1 / 1 / 109 | D/W/W/W | 12:0/7:0/9:2/4:11 | 513.00/194.00/512.00/835.00 | 9.90/6.14 | 0.95/10.17 | 41.62/41.51/69.31/72.95 | 44.49/41.51/70.58/69.86 | 56.83/34.67/54.17 | 0.23/0.12 | none  | 50.00:0.00 | 0.000 |
| F1 / 2 / 107 | W/W/W/W | 4:4/3:4/10:4/6:4 | 199.00/231.00/205.00/486.00 | 9.31/4.34 | 4.21/26.00 | 26.50/NA/NA/58.01 | NA/NA/NA/58.25 | 46.86/86.43/98.55 | 0.24/0.56 | shots<C  | 16.67:100.00 | 6.000 |
| F1 / 2 / 108 | W/W/W/W | 1:4/4:4/12:4/1:4 | 336.00/302.00/247.00/215.00 | 9.31/4.26 | 1.88/26.76 | 36.05/31.14/58.05/63.55 | NA/NA/NA/NA | 165.27/87.47/105.22 | 0.22/0.48 | none  | 4.17:100.00 | 24.000 |
| F1 / 2 / 109 | W/W/W/W | 4:3/2:4/4:4/4:4 | 486.00/418.00/132.00/314.00 | 9.31/4.34 | 1.02/26.05 | 30.25/36.14/NA/59.35 | 31.55/NA/NA/65.23 | 47.00/64.67/117.46 | 0.17/0.26 | none  | 16.67:75.00 | 4.500 |
| F1 / 3 / 107 | W/W/W/W | 7:1/6:6/11:0/16:6 | 597.00/355.00/421.00/719.00 | 3.50/4.32 | 28.24/17.89 | 8.05/NA/5.44/33.38 | 11.37/NA/5.44/NA | 43.17/167.11/17.50 | 0.18/1.06 | U2>L, NN<L  | 29.17:16.67 | 0.571 |
| F1 / 3 / 108 | W/W/W/W | 9:1/13:6/11:2/11:6 | 651.00/495.00/581.00/508.00 | 4.18/5.92 | 18.20/16.92 | 9.32/NA/9.03/40.23 | 8.28/NA/7.75/NA | 58.00/107.62/21.33 | 0.24/1.41 | U2>L, NN<L  | 37.50:16.67 | 0.444 |
| F1 / 3 / 109 | W/W/W/L | 11:2/11:6/11:2/23:1 | 592.00/575.00/552.00/1073.00 | 4.22/4.29 | 12.89/12.28 | 3.31/36.81/9.90/36.48 | 23.17/NA/7.75/37.98 | 53.83/105.99/18.83 | 0.30/0.96 | U2>L, NN<L  | 45.83:33.33 | 0.727 |
| F1 / 4 / 107 | W/W/W/W | 7:2/13:0/10:0/10:6 | 399.00/272.00/213.00/497.00 | 4.50/4.72 | 24.56/17.57 | 13.49/20.56/13.91/36.13 | 22.50/20.56/12.73/30.46 | 43.00/24.33/21.17 | 0.22/0.33 | U2>L, NN<L  | 29.17:33.33 | 1.143 |
| F1 / 4 / 108 | W/W/W/W | 7:2/11:6/11:1/17:3 | 166.00/436.00/262.00/425.00 | 4.32/4.86 | 17.94/15.82 | 12.44/41.61/17.49/34.15 | 16.60/NA/12.52/31.13 | 91.83/81.35/23.50 | 0.18/0.80 | shots<C, U2>L, NN<L  | 29.17:33.33 | 1.143 |
| F1 / 4 / 109 | W/W/W/W | 9:2/8:6/10:0/10:3 | 300.00/581.00/172.00/497.00 | 4.29/5.04 | 21.12/14.74 | 9.79/44.70/7.49/34.24 | 27.35/43.42/4.31/32.43 | 40.67/67.67/19.00 | 0.27/0.56 | U2>L, NN<L  | 37.50:33.33 | 0.889 |
| F1 / 5 / 107 | W/W/W/W | 10:8/15:7/15:2/15:2 | 1165.00/1187.00/806.00/1459.00 | 9.21/5.07 | 1.10/11.89 | 26.90/66.81/68.59/60.39 | 48.80/67.36/69.22/61.22 | 58.57/49.00/41.17 | 0.46/0.66 | none  | 41.67:100.00 | 2.400 |
| F1 / 5 / 108 | W/W/L/W | 8:0/15:8/17:0/12:8 | 622.00/807.00/564.00/1224.00 | 8.60/4.78 | 0.47/15.45 | 18.89/62.42/67.51/62.45 | 8.68/59.69/67.35/63.83 | 48.67/63.01/36.00 | 0.14/0.77 | none  | 33.33:0.00 | 0.000 |
| F1 / 5 / 109 | W/W/W/W | 10:1/9:1/12:2/10:8 | 796.00/485.00/644.00/1149.00 | 8.60/5.08 | 1.08/12.80 | 11.85/60.19/68.30/59.78 | 11.57/59.69/68.06/59.72 | 64.50/37.00/42.00 | 0.20/0.23 | none  | 41.67:12.50 | 0.300 |
| F1 / 6 / 107 | W/W/W/W | 14:2/8:8/9:1/2:8 | 489.00/596.00/338.00/404.00 | 5.57/4.32 | 6.91/32.72 | 36.29/38.75/45.56/50.15 | 33.46/NA/45.18/NA | 44.83/80.82/30.00 | 0.33/0.65 | none  | 58.33:25.00 | 0.429 |
| F1 / 6 / 108 | W/W/W/W | 5:8/4:8/15:3/14:7 | 457.00/338.00/497.00/727.00 | 4.50/4.45 | 3.93/16.79 | 41.29/41.38/47.07/43.99 | NA/NA/46.83/48.36 | 77.97/131.53/29.83 | 0.54/0.77 | shots<C  | 20.83:100.00 | 4.800 |
| F1 / 6 / 109 | W/W/W/W | 11:1/7:0/13:1/14:6 | 421.00/158.00/427.00/638.00 | 7.55/5.74 | 5.78/10.79 | 32.06/21.74/46.80/48.36 | 31.62/21.74/46.66/50.35 | 37.67/25.83/31.00 | 0.25/0.16 | shots<C  | 45.83:12.50 | 0.273 |
| F1 / 7 / 107 | W/W/W/W | 9:2/7:6/6:1/7:4 | 871.00/593.00/749.00/553.00 | 6.00/4.54 | 5.12/15.58 | 39.41/61.30/65.26/72.39 | 50.91/NA/63.76/73.40 | 56.67/99.50/18.00 | 0.35/1.33 | none  | 56.25:33.33 | 0.593 |
| F1 / 7 / 108 | W/W/W/W | 5:6/10:6/7:1/3:6 | 762.00/920.00/513.00/999.00 | 9.25/6.15 | 8.14/11.54 | 21.99/64.75/63.05/71.33 | 24.73/NA/64.13/71.60 | 36.94/64.39/17.00 | 0.37/1.11 | none  | 31.25:100.00 | 3.200 |
| F1 / 7 / 109 | W/W/W/L | 10:4/3:6/9:1/12:1 | 1276.00/592.00/754.00/1138.00 | 9.25/6.10 | 0.87/8.68 | 21.99/66.86/63.01/66.23 | 45.26/NA/61.38/67.24 | 37.67/67.30/17.83 | 0.51/0.61 | none  | 62.50:66.67 | 1.067 |
| F1 / 8 / 107 | L/W/L/L | 7:0/3:1/10:1/11:3 | 245.00/279.00/435.00/384.00 | 4.86/5.00 | 3.60/13.31 | 21.23/32.53/54.99/52.04 | 28.94/32.53/55.41/41.36 | 45.33/18.17/27.50 | 0.16/0.11 | shots<C, NN<L  | 43.75:0.00 | 0.000 |
| F1 / 8 / 108 | W/W/L/L | 4:1/5:0/10:1/13:3 | 305.00/225.00/468.00/897.00 | 5.00/5.02 | 1.25/5.87 | 28.66/34.70/56.81/46.91 | 17.95/34.70/56.44/41.57 | 46.17/20.50/26.17 | 0.17/0.11 | shots<C, NN<L  | 25.00:10.00 | 0.400 |
| F1 / 8 / 109 | W/W/W/L | 6:1/3:0/6:3/11:1 | 405.00/120.00/381.00/461.00 | 5.45/5.02 | 0.62/9.26 | 12.53/24.30/56.97/48.57 | 27.48/24.30/56.97/55.88 | 48.83/18.17/27.83 | 0.26/0.07 | none  | 37.50:10.00 | 0.267 |
| F1 / 9 / 107 | W/W/W/W | 10:0/9:0/15:2/8:10 | 440.00/489.00/488.00/676.00 | 6.00/4.52 | 2.42/17.74 | 51.47/61.86/73.35/74.95 | 49.79/58.47/72.96/75.67 | 51.83/45.00/60.17 | 0.17/0.19 | shots<C  | 41.67:0.00 | 0.000 |
| F1 / 9 / 108 | W/W/W/W | 14:4/12:1/11:1/12:5 | 685.00/704.00/396.00/854.00 | 7.12/4.53 | 0.59/14.39 | 43.21/62.73/74.77/76.56 | 43.25/60.89/73.53/74.44 | 61.67/45.00/53.17 | 0.41/0.25 | none  | 58.33:40.00 | 0.686 |
| F1 / 9 / 109 | W/W/W/W | 10:4/11:1/14:4/9:2 | 833.00/359.00/587.00/448.00 | 5.75/4.82 | 0.74/11.32 | 50.52/54.58/74.54/72.36 | 39.60/54.58/72.58/73.47 | 57.50/36.33/55.17 | 0.32/0.26 | none  | 41.67:40.00 | 0.960 |
| F1 / 10 / 107 | W/L/L/L | 6:1/8:1/11:3/11:4 | 228.00/299.00/443.00/513.00 | 4.62/5.59 | 0.81/9.30 | 19.14/31.61/53.77/44.73 | 27.38/35.48/49.67/43.30 | 36.17/29.17/29.83 | 0.19/0.24 | shots<C, NN<L  | 37.50:10.00 | 0.267 |
| F1 / 10 / 108 | L/W/L/L | 8:1/4:2/13:1/12:0 | 331.00/218.00/468.00/504.00 | 4.63/5.87 | 7.44/5.34 | 22.69/23.74/51.61/47.17 | 33.44/23.74/50.59/45.75 | 39.50/21.67/30.33 | 0.22/0.16 | shots<C, U2>L, NN<L  | 50.00:10.00 | 0.200 |
| F1 / 10 / 109 | L/D/L/W | 8:1/6:0/10:1/7:3 | 251.00/310.00/237.00/349.00 | 4.81/4.51 | 0.81/15.15 | 20.47/16.42/48.16/45.78 | 26.68/14.81/48.38/41.30 | 38.50/25.33/35.50 | 0.26/0.13 | none  | 50.00:10.00 | 0.200 |
| F1 / 11 / 107 | W/W/W/W | 8:1/5:6/11:6/1:6 | 683.00/569.00/1189.00/460.00 | 7.27/4.50 | 0.86/17.94 | 25.85/59.44/56.50/64.79 | 24.25/NA/60.86/NA | 54.00/81.67/46.99 | 0.21/0.68 | shots<C  | 33.33:16.67 | 0.500 |
| F1 / 11 / 108 | W/W/W/W | 8:2/7:6/8:6/16:4 | 1093.00/375.00/1045.00/1559.00 | 8.52/5.22 | 0.39/17.11 | 28.68/NA/56.08/59.64 | 30.22/NA/59.71/55.94 | 44.33/128.12/47.56 | 0.22/1.23 | none  | 33.33:33.33 | 1.000 |
| F1 / 11 / 109 | W/W/W/W | 7:2/8:6/16:6/11:6 | 754.00/744.00/1216.00/1536.00 | 9.90/5.83 | 2.45/10.50 | 32.71/62.95/57.62/56.65 | 26.28/NA/58.08/54.94 | 56.00/86.02/61.30 | 0.18/0.78 | shots<C  | 29.17:33.33 | 1.143 |
| F1 / 12 / 107 | W/W/W/W | 2:4/6:4/6:4/4:3 | 391.00/343.00/187.00/379.00 | 6.44/6.00 | 11.73/14.46 | 50.99/75.96/NA/86.25 | NA/NA/NA/74.44 | 42.73/82.16/69.57 | 0.34/0.58 | none  | 12.50:100.00 | 8.000 |
| F1 / 12 / 108 | W/W/W/W | 2:4/0:4/8:4/1:0 | 461.00/330.00/706.00/186.00 | 6.00/4.34 | 4.83/18.96 | 60.46/NA/67.45/89.59 | NA/NA/76.61/88.38 | 54.20/119.36/33.07 | 0.33/0.52 | shots<C  | 12.50:100.00 | 8.000 |
| F1 / 12 / 109 | W/W/W/W | 0:4/0:4/3:4/6:0 | 353.00/367.00/573.00/425.00 | 6.57/4.40 | 16.12/16.99 | 59.17/90.06/76.86/90.21 | NA/NA/NA/88.01 | 45.40/108.18/37.99 | 0.28/0.53 | shots<C  | 0.00:100.00 | NA (zero own loss) |
| F1 / 13 / 107 | L/W/L/L | 7:0/5:2/14:3/13:1 | 538.00/523.00/739.00/1204.00 | 5.85/5.00 | 0.58/9.25 | -3.67/47.58/66.23/65.58 | -9.69/47.58/68.90/66.69 | 55.33/23.67/37.50 | 0.18/0.15 | shots<C  | 43.75:0.00 | 0.000 |
| F1 / 13 / 108 | L/L/L/L | 6:0/5:0/14:0/8:3 | 920.00/210.00/654.00/1434.00 | 6.00/5.71 | 0.32/3.67 | 26.10/47.80/66.57/63.91 | 36.94/47.80/70.70/64.42 | 43.17/22.33/39.50 | 0.16/0.11 | none  | 37.50:0.00 | 0.000 |
| F1 / 13 / 109 | L/L/L/L | 6:0/5:0/9:1/9:2 | 614.00/303.00/607.00/990.00 | 5.21/5.45 | 0.48/4.40 | -7.48/47.41/60.83/65.98 | 5.74/47.41/67.76/68.18 | 41.83/20.83/40.50 | 0.17/0.10 | NN<L  | 37.50:0.00 | 0.000 |
| F1 / 14 / 107 | W/D/L/W | 6:1/11:3/12:3/7:4 | 539.00/906.00/592.00/634.00 | 6.00/4.40 | 0.84/20.89 | 31.16/62.58/63.95/79.18 | 24.55/63.36/63.79/81.42 | 34.33/26.00/31.67 | 0.21/0.58 | shots<C  | 37.50:12.50 | 0.333 |
| F1 / 14 / 108 | W/W/W/W | 5:0/9:3/8:2/7:5 | 763.00/708.00/411.00/488.00 | 4.97/4.40 | 4.41/25.73 | 19.70/63.70/65.23/79.88 | 19.47/63.70/64.67/74.64 | 34.17/26.67/30.67 | 0.13/0.43 | none  | 31.25:0.00 | 0.000 |
| F1 / 14 / 109 | W/L/D/W | 7:1/10:1/10:2/5:5 | 685.00/838.00/658.00/539.00 | 8.19/4.40 | 1.82/18.04 | 31.77/64.06/66.37/78.07 | 38.31/64.89/64.67/78.99 | 28.00/25.17/26.17 | 0.24/0.42 | none  | 43.75:12.50 | 0.286 |
| F1 / 15 / 107 | L/L/L/L | 7:0/10:1/12:0/10:2 | 393.00/448.00/360.00/528.00 | 5.99/6.00 | 0.92/8.53 | 23.62/53.91/60.45/57.24 | 31.96/53.85/60.45/50.88 | 42.83/20.17/24.67 | 0.19/0.31 | NN<L  | 43.75:0.00 | 0.000 |
| F1 / 15 / 108 | L/L/L/L | 6:0/8:0/12:2/11:1 | 335.00/433.00/495.00/621.00 | 5.85/5.00 | 3.62/10.51 | 30.85/54.67/59.96/54.86 | 39.74/54.67/61.03/54.20 | 34.67/22.33/28.50 | 0.14/0.21 | shots<C  | 37.50:0.00 | 0.000 |
| F1 / 15 / 109 | L/L/L/L | 7:0/9:2/13:0/8:1 | 394.00/470.00/537.00/524.00 | 5.17/6.00 | 3.35/8.10 | 8.83/53.79/63.75/55.88 | 30.14/53.25/67.64/51.15 | 49.83/19.50/30.50 | 0.21/0.28 | shots<C, NN<L  | 43.75:0.00 | 0.000 |
| F1 / 16 / 107 | W/W/W/L | 3:0/3:8/4:1/12:1 | 325.00/551.00/227.00/353.00 | 4.40/4.40 | 11.47/11.51 | 7.15/39.96/18.23/37.53 | 8.88/NA/18.23/30.89 | 49.33/62.01/24.00 | 0.16/0.76 | none  | 18.75:0.00 | 0.000 |
| F1 / 16 / 108 | D/W/W/L | 10:2/4:8/4:0/11:1 | 412.00/378.00/158.00/426.00 | 4.48/5.00 | 5.85/13.26 | 7.50/NA/1.80/28.58 | 7.04/NA/1.80/28.71 | 42.17/96.10/19.00 | 0.35/1.14 | NN<L  | 62.50:25.00 | 0.400 |
| F1 / 16 / 109 | W/W/W/W | 9:3/10:3/9:2/11:4 | 346.00/355.00/298.00/440.00 | 4.43/4.82 | 6.45/7.79 | 7.50/36.23/22.35/30.37 | 34.60/35.35/22.30/18.99 | 45.50/28.17/20.67 | 0.41/0.47 | NN<L  | 56.25:37.50 | 0.667 |
| F1 / 17 / 107 | W/W/D/W | 6:1/6:1/12:0/18:9 | 335.00/170.00/219.00/1148.00 | 5.05/6.00 | 5.39/9.41 | 25.10/18.46/52.20/47.24 | 32.52/18.46/52.20/47.77 | 47.17/27.17/43.33 | 0.12/0.11 | NN<L  | 25.00:8.33 | 0.333 |
| F1 / 17 / 108 | W/W/W/W | 7:1/7:0/9:1/17:6 | 487.00/225.00/294.00/861.00 | 5.00/6.00 | 3.31/4.99 | 18.89/16.49/51.82/44.48 | 37.88/16.49/51.96/43.45 | 58.67/27.83/57.17 | 0.17/0.12 | NN<L  | 29.17:8.33 | 0.286 |
| F1 / 17 / 109 | W/W/L/L | 6:0/6:1/21:1/20:6 | 460.00/273.00/356.00/1138.00 | 5.00/6.00 | 12.23/6.16 | 25.59/18.67/51.56/47.36 | 25.59/18.47/51.75/47.95 | 29.50/23.67/44.33 | 0.11/0.12 | U2>L, NN<L  | 25.00:0.00 | 0.000 |
| F1 / 18 / 107 | W/W/D/L | 9:2/7:3/13:1/20:3 | 602.00/503.00/286.00/1103.00 | 4.94/5.00 | 0.76/5.96 | 14.44/26.90/52.00/21.81 | 8.19/26.90/52.00/15.68 | 53.83/31.33/50.50 | 0.25/0.20 | NN<L  | 37.50:16.67 | 0.444 |
| F1 / 18 / 108 | W/W/L/L | 8:3/8:4/20:1/18:4 | 756.00/773.00/513.00/829.00 | 5.15/5.71 | 2.68/4.22 | 13.71/22.12/48.24/21.49 | 4.94/19.41/48.24/6.99 | 63.33/32.83/60.50 | 0.22/0.26 | NN<L  | 33.33:25.00 | 0.750 |
| F1 / 18 / 109 | W/W/L/L | 12:3/9:2/15:2/19:3 | 742.00/475.00/303.00/1062.00 | 5.15/5.48 | 0.61/5.85 | 0.01/19.43/50.89/28.06 | 1.27/19.43/50.89/36.69 | 51.00/33.33/40.67 | 0.30/0.22 | NN<L  | 50.00:25.00 | 0.500 |
| F1 / 19 / 107 | W/W/W/L | 10:2/10:2/11:5/24:2 | 365.00/715.00/447.00/827.00 | 5.00/5.04 | 1.22/11.10 | 18.71/35.93/29.23/35.39 | 20.54/34.60/28.97/40.79 | 53.50/48.17/28.00 | 0.20/0.28 | shots<C, NN<L  | 41.67:16.67 | 0.400 |
| F1 / 19 / 108 | W/D/W/D | 8:0/13:1/7:9/18:6 | 457.00/433.00/526.00/598.00 | 5.10/6.00 | 1.65/10.35 | 16.73/26.91/29.85/33.37 | 16.73/26.91/30.89/26.55 | 36.50/46.83/35.50 | 0.13/0.28 | shots<C, NN<L  | 33.33:0.00 | 0.000 |
| F1 / 19 / 109 | W/W/W/L | 9:3/10:1/15:8/20:6 | 546.00/427.00/547.00/713.00 | 5.00/6.39 | 3.71/15.44 | 21.00/35.55/31.03/35.08 | 20.63/33.58/21.58/36.00 | 57.00/50.83/35.33 | 0.23/0.23 | shots<C, NN<L  | 37.50:25.00 | 0.667 |
| F1 / 20 / 107 | W/W/W/L | 11:8/14:4/14:6/22:3 | 683.00/542.00/383.00/723.00 | 5.34/4.95 | 9.30/11.77 | 37.59/30.92/43.70/39.59 | 37.40/27.45/44.04/37.20 | 42.00/43.33/36.33 | 0.39/0.43 | none  | 45.83:80.00 | 1.745 |
| F1 / 20 / 108 | W/W/W/W | 9:9/12:5/16:6/17:6 | 631.00/433.00/484.00/922.00 | 4.55/4.53 | 5.91/16.83 | 41.97/28.31/44.10/37.48 | 42.79/21.44/45.21/37.23 | 50.67/45.50/39.50 | 0.43/0.39 | none  | 37.50:90.00 | 2.400 |
| F1 / 20 / 109 | W/W/W/W | 5:10/10:0/20:7/15:4 | 542.00/355.00/602.00/752.00 | 5.00/5.06 | 6.21/9.41 | 20.32/28.94/47.53/34.88 | 21.09/24.57/44.62/40.66 | 79.57/37.33/36.67 | 0.37/0.22 | shots<C, NN<L  | 20.83:100.00 | 4.800 |
| F1 / 21 / 107 | L/L/W/L | 9:0/5:0/2:0/11:3 | 329.00/172.00/54.00/434.00 | 5.00/5.02 | 1.09/3.41 | 3.06/25.38/2.99/36.33 | -24.24/25.38/2.99/35.80 | 33.17/22.50/8.50 | 0.24/0.09 | NN<L  | 56.25:0.00 | 0.000 |
| F1 / 21 / 108 | L/W/W/L | 9:0/4:1/2:1/8:1 | 307.00/322.00/33.00/347.00 | 5.00/5.00 | 1.20/3.50 | 10.24/32.91/3.36/24.94 | -25.45/28.56/3.36/25.20 | 37.17/21.00/7.67 | 0.26/0.15 | none  | 56.25:0.00 | 0.000 |
| F1 / 21 / 109 | L/D/W/L | 10:1/4:0/2:0/16:3 | 295.00/322.00/65.00/538.00 | 6.00/5.00 | 0.80/7.68 | 31.98/26.39/3.27/36.01 | 29.26/26.39/3.27/46.80 | 30.00/20.83/7.33 | 0.26/0.09 | none  | 62.50:8.33 | 0.133 |
| F1 / 22 / 107 | W/W/W/W | 9:1/10:0/6:1/12:3 | 1081.00/473.00/401.00/988.00 | 9.90/5.10 | 0.36/11.16 | 40.62/53.02/76.43/82.67 | 38.59/53.02/76.43/71.47 | 54.50/35.67/49.00 | 0.22/0.19 | none  | 37.50:10.00 | 0.267 |
| F1 / 22 / 108 | W/W/W/L | 10:2/11:1/6:0/20:3 | 996.00/899.00/554.00/1493.00 | 6.33/4.75 | 1.01/14.73 | 38.71/69.43/75.82/74.33 | 41.45/68.64/75.17/75.00 | 61.00/46.83/44.67 | 0.26/0.26 | none  | 41.67:20.00 | 0.480 |
| F1 / 22 / 109 | W/W/W/W | 10:2/9:1/8:1/8:7 | 940.00/686.00/284.00/1498.00 | 9.62/5.61 | 1.08/16.99 | 36.61/56.45/75.31/74.34 | 33.53/55.99/75.43/73.07 | 63.67/43.17/54.17 | 0.28/0.22 | none  | 41.67:20.00 | 0.480 |
| F1 / 23 / 107 | W/W/W/W | 13:1/8:6/20:5/7:6 | 859.00/521.00/727.00/394.00 | 6.00/4.26 | 1.10/23.36 | 36.13/54.64/51.53/52.93 | 35.57/NA/53.47/74.88 | 49.33/122.41/22.50 | 0.33/0.95 | none  | 54.17:16.67 | 0.308 |
| F1 / 23 / 108 | W/W/W/W | 3:6/8:6/14:2/4:6 | 440.00/616.00/480.00/313.00 | 6.00/3.78 | 2.44/27.55 | 40.77/50.03/52.52/53.06 | NA/NA/52.64/NA | 112.54/93.54/23.83 | 0.53/0.77 | shots<C  | 12.50:100.00 | 8.000 |
| F1 / 23 / 109 | W/W/W/W | 8:6/15:2/14:2/8:5 | 544.00/1020.00/478.00/674.00 | 6.01/4.13 | 9.77/24.16 | 44.31/40.30/49.43/48.41 | 43.19/36.21/49.43/52.44 | 54.45/38.33/23.83 | 0.39/0.50 | none  | 33.33:100.00 | 3.000 |
| F1 / 24 / 107 | L/W/L/L | 13:2/6:1/13:3/15:2 | 360.00/91.00/432.00/456.00 | 5.27/5.00 | 1.79/8.91 | 32.44/24.95/46.33/36.81 | 32.44/24.95/41.79/36.04 | 33.67/24.67/28.17 | 0.54/0.18 | shots<C  | 81.25:20.00 | 0.246 |
| F1 / 24 / 108 | L/L/L/L | 12:2/8:1/11:2/16:4 | 303.00/299.00/436.00/411.00 | 4.88/5.00 | 0.44/13.04 | 29.28/29.40/42.42/24.65 | 8.46/29.40/39.49/38.29 | 27.33/24.33/28.67 | 0.38/0.25 | shots<C, NN<L  | 75.00:20.00 | 0.267 |
| F1 / 24 / 109 | L/W/W/L | 9:1/6:3/8:3/14:3 | 217.00/390.00/260.00/395.00 | 4.52/5.00 | 1.07/15.58 | 15.94/33.35/42.05/36.75 | 8.25/34.33/41.81/39.46 | 39.00/38.00/28.33 | 0.26/0.32 | shots<C, NN<L  | 56.25:10.00 | 0.178 |
| F1 / 25 / 107 | D/W/W/W | 14:2/4:4/10:3/5:4 | 528.00/358.00/355.00/282.00 | 6.00/5.24 | 2.14/15.73 | 58.17/72.87/57.03/83.21 | 66.48/NA/69.66/110.60 | 39.83/104.09/41.00 | 0.67/0.71 | none  | 87.50:50.00 | 0.571 |
| F1 / 25 / 108 | W/W/W/W | 3:4/2:4/10:4/1:2 | 345.00/323.00/715.00/225.00 | 8.59/6.00 | 5.67/19.51 | 54.61/69.27/57.96/80.60 | NA/NA/67.94/86.95 | 86.94/82.38/36.45 | 0.56/0.61 | shots<C  | 18.75:100.00 | 5.333 |
| F1 / 25 / 109 | W/W/W/W | 6:2/5:4/5:4/5:3 | 484.00/357.00/459.00/542.00 | 6.13/5.81 | 9.66/20.23 | 49.13/72.08/57.53/84.30 | 48.13/NA/NA/86.24 | 35.83/78.73/41.68 | 0.30/0.76 | none  | 37.50:50.00 | 1.333 |
| F1 / 26 / 107 | L/W/W/W | 15:0/5:10/10:10/11:2 | 498.00/598.00/515.00/545.00 | 5.49/5.00 | 8.83/11.83 | 30.33/40.82/46.78/34.50 | 32.35/NA/NA/34.21 | 48.17/120.81/78.28 | 0.35/0.66 | shots<C  | 62.50:0.00 | 0.000 |
| F1 / 26 / 108 | W/W/D/W | 15:7/6:10/17:3/15:7 | 659.00/482.00/540.00/648.00 | 4.62/5.00 | 2.82/13.97 | 29.12/36.42/44.56/33.27 | 29.91/NA/43.10/35.54 | 51.50/153.56/34.00 | 0.48/0.76 | NN<L  | 62.50:70.00 | 1.120 |
| F1 / 26 / 109 | W/W/D/L | 14:4/7:10/19:5/21:4 | 586.00/403.00/538.00/650.00 | 6.42/4.52 | 1.74/14.74 | 30.45/34.01/48.08/35.90 | 35.65/NA/47.00/32.75 | 44.83/99.49/33.00 | 0.43/0.68 | none  | 58.33:40.00 | 0.686 |
| F1 / 27 / 107 | W/W/W/W | 10:1/1:6/8:6/11:6 | 351.00/419.00/216.00/402.00 | 4.87/4.59 | 0.99/11.58 | 24.88/41.61/NA/37.85 | 19.85/NA/NA/NA | 45.17/153.78/134.86 | 0.30/0.61 | none  | 41.67:16.67 | 0.400 |
| F1 / 27 / 108 | W/W/W/W | 12:1/8:6/7:6/9:6 | 480.00/323.00/227.00/463.00 | 5.86/4.26 | 1.33/21.81 | 21.38/NA/NA/35.32 | 24.10/NA/NA/NA | 41.83/175.00/132.83 | 0.33/0.94 | none  | 50.00:16.67 | 0.333 |
| F1 / 27 / 109 | W/W/W/W | 2:6/2:6/10:2/19:5 | 273.00/213.00/354.00/733.00 | 6.12/4.40 | 5.34/16.52 | 22.91/NA/40.77/36.64 | NA/NA/40.44/29.59 | 59.89/206.53/32.00 | 0.44/0.83 | shots<C  | 8.33:100.00 | 12.000 |
| F1 / 28 / 107 | W/W/W/L | 7:1/11:2/8:1/21:2 | 199.00/266.00/142.00/517.00 | 4.52/6.00 | 20.39/7.58 | 15.18/33.47/0.00/36.34 | 7.81/33.43/0.00/32.02 | 87.17/33.83/11.50 | 0.16/0.29 | U2>L, NN<L  | 29.17:10.00 | 0.343 |
| F1 / 28 / 108 | W/W/W/L | 7:0/14:2/5:2/23:4 | 382.00/471.00/154.00/957.00 | 4.85/4.92 | 11.54/17.47 | 2.59/32.09/2.11/33.72 | 15.11/32.09/0.00/29.98 | 69.50/36.00/9.83 | 0.16/0.40 | NN<L  | 29.17:0.00 | 0.000 |
| F1 / 28 / 109 | W/W/W/L | 8:0/10:1/7:0/22:6 | 293.00/219.00/124.00/801.00 | 4.29/5.00 | 16.81/12.90 | 8.47/35.21/0.00/32.88 | 15.30/35.21/0.00/38.11 | 52.00/42.83/11.17 | 0.14/0.27 | U2>L, NN<L  | 33.33:0.00 | 0.000 |
| F1 / 29 / 107 | W/W/W/D | 3:0/9:8/17:3/18:2 | 361.00/635.00/924.00/1771.00 | 8.04/5.00 | 0.64/11.44 | 20.47/62.68/52.46/63.11 | 14.84/NA/64.23/61.44 | 54.00/65.11/41.17 | 0.09/0.67 | shots<C  | 12.50:0.00 | 0.000 |
| F1 / 29 / 108 | W/W/W/W | 8:2/12:2/11:1/6:8 | 729.00/980.00/641.00/663.00 | 8.00/5.55 | 2.95/14.32 | 44.71/56.69/59.78/69.80 | 48.48/56.59/63.80/79.56 | 54.00/37.83/41.67 | 0.21/0.33 | none  | 33.33:25.00 | 0.750 |
| F1 / 29 / 109 | W/W/W/W | 6:1/17:2/11:1/17:5 | 612.00/1104.00/547.00/1815.00 | 9.83/5.90 | 0.81/10.55 | 32.29/58.37/59.81/59.68 | 31.78/55.07/63.90/53.55 | 45.67/35.17/41.83 | 0.12/0.53 | none  | 25.00:12.50 | 0.500 |
| F1 / 30 / 107 | W/L/W/W | 6:2/10:2/3:1/5:2 | 348.00/464.00/212.00/342.00 | 6.68/5.22 | 0.32/9.41 | 38.72/57.46/77.69/80.14 | 48.22/59.63/77.69/82.41 | 27.17/31.50/48.50 | 0.19/0.33 | none  | 37.50:20.00 | 0.533 |
| F1 / 30 / 108 | W/D/W/W | 5:1/6:0/6:1/2:8 | 346.00/249.00/248.00/371.00 | 7.03/4.47 | 0.29/19.50 | 45.26/59.31/76.22/89.98 | 52.85/56.03/76.17/91.70 | 36.33/33.33/31.83 | 0.16/0.15 | none  | 31.25:10.00 | 0.320 |
| F1 / 30 / 109 | W/W/W/L | 4:1/8:4/8:3/9:1 | 319.00/504.00/453.00/557.00 | 6.00/4.48 | 0.59/11.80 | 45.25/57.96/77.57/80.76 | 47.73/57.96/76.59/80.23 | 35.50/31.33/60.50 | 0.16/0.34 | shots<C  | 25.00:10.00 | 0.400 |

## Final state

`python3 tools/source_id.py` still prints **`d8586da13b539c61`**. `.local/phase4e/final-artifact-checks.json` verifies all110 measured manifests carry this build, the frozen source is byte-identical to attempt1 and all protected hashes still match. Changes remain uncommitted in the working tree. No additional phase follows this report.
