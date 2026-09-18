# Plan015 Step C — single measured build, stopped on guard

**Step C stops on `stronger_remaining_at_limit`.** Source before/after measurement is `4786fc9830d0c1c0`. 10/20 authored cases completed; no F1 distribution was dispatched. Steps E and D remain unstarted. The local implementation began at `8bf1a7eac576fba9`; all31 selectors pass on the measured source, including restored Q05 and the focused retention pin. See the [Step B report](015-step-b-report.md).

The measured binary and simulation snapshot are frozen in `.local/plan015/review-c2/final/`. No gameplay source changed after dispatch. Scheduling is sequential; there is no in-flight or queued candidate battle after a failure. Completed runs and AARs remain recorded. Missing maps/draws are not scored as successes. Legacy remains the playable default; this source is not replay-approved or promoted.

## Guard interpretation fixed before dispatch

The [Step C review](../../plans/015-step-c-fable-review.md) replaces absolute resolution and Phase4f churn thresholds with legacy-paired intervals. `measurement-contract.md` was written before dispatch. Paired differences below are drills minus legacy; positive is worse. Intervals are95% percentile intervals for the paired mean from2000 fixed-RNG resamples by battle seed. A resolution/churn criterion fails only when the lower bound is above zero. All final per-run values are disclosed rather than treating each pair as its own hard gate.

Time to decision is the existing recorded-duration metric. Stronger remaining strength is `max(active/initial)` and is compared for pairs where both reach the360 s limit; earlier resolutions are handled by the time guard. Orders count issued soldier orders per actual battle minute, excluding directives/reports, with trace/event count equality checked. Spacing retains the existing set comparison: mean per-run under-2m share no higher than legacy; the trench target is the mean of per-run nearest-neighbour medians at least3 m. Participation requires three firing squads per side in every authored battle. A single zero-shot battle stops immediately, stricter than the older three-in-ten engagement counter, which is also recorded.

Five new guard unit tests and legacy self-comparisons on both maps pass. The baseline self-comparisons reach360 s and pass without applying the withdrawn absolute300 s/60% thresholds.

The stronger side retains **60.9375%** on average, versus legacy's **47.1875%**: a paired increase of **13.75 percentage points**,95% interval **+8.4375 to +18.1328 points**. All ten pairs reach360 s, so no pair is excluded from this calculation. Nine of ten individual pairs are adverse on this measure; seed102 is the exception. Order rates average150.63/146.90 per minute versus legacy210.15/211.38. Every side in every run has all four squads firing; no zero-shot run occurs.

## Paired scoreboard

| Map | Criterion | Drills − legacy mean | 95% interval | Result |
|---|---|---:|---|---|
| works | time_to_decision | 0.000 | [0.000, 0.000] | pass |
| works | stronger_remaining_at_limit | 0.138 | [0.084, 0.181] | **FAIL** |
| works | orders_azure_per_minute | -59.517 | [-75.051, -43.025] | pass |
| works | orders_ember_per_minute | -64.483 | [-76.033, -53.649] | pass |
| works | under_2m | -0.097 | set threshold | pass |

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
| 100 | 150.67 / 228.50 | 148.83 / 234.67 | 6.95 / 7.27 | 6.76 / 16.21 | stronger remaining |
| 101 | 147.50 / 228.50 | 158.67 / 246.17 | 7.05 / 5.04 | 6.53 / 23.52 | stronger remaining |
| 102 | 153.50 / 239.33 | 141.33 / 221.17 | 6.03 / 5.98 | 6.01 / 16.51 | none on these measures |
| 103 | 149.83 / 206.50 | 130.17 / 188.00 | 6.37 / 5.51 | 6.76 / 19.16 | stronger remaining |
| 104 | 161.33 / 197.00 | 138.17 / 193.33 | 6.84 / 7.56 | 6.35 / 14.20 | stronger remaining |
| 105 | 176.00 / 181.67 | 135.33 / 169.33 | 6.20 / 6.80 | 5.15 / 13.31 | stronger remaining |
| 106 | 139.33 / 171.83 | 148.33 / 234.17 | 6.29 / 6.88 | 8.56 / 16.53 | stronger remaining |
| 107 | 164.67 / 222.83 | 176.17 / 220.33 | 6.89 / 7.56 | 7.65 / 12.54 | stronger remaining |
| 108 | 130.00 / 226.00 | 160.67 / 220.67 | 6.68 / 6.28 | 7.88 / 17.33 | stronger remaining |
| 109 | 133.50 / 199.33 | 131.33 / 186.00 | 6.09 / 6.51 | 6.18 / 15.09 | stronger remaining |

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

## Trace evidence and diagnostic limits

Every completed run has its human AAR linked above, the full command appendix, raw trace, events and evaluation. `measured-trace-diagnostics.json` summarizes all ten runs' radio/drill transition counts, decision-time pictures and net statistics without introducing observer facts into policy.

- **Works100, repaired consumption:** squad3 has one no-route Fixing evaluation at116.45 s (trace119879, instance2) and one radio help acceptance at126.65 s (193353, instance3). The earlier source's same-seed trace had114 help acceptances and115 no-route evaluations. The current evidence is saved in `works100-radio-evidence.json`; this observed reduction is not a counterfactual attribution of the whole battle outcome.
- **Works106, largest remaining-strength difference:** final actives19/23 against legacy7/16; stronger remaining71.875% against50%. All squads fire, but counts are uneven: Azure180/41/151/81, Ember716/179/147/97. Thus passing participation does not mean equal contribution. The AAR records squad3 entering BreakContact at236.40 s (trace323672, reason “believed ratio at least two without superiority”), reaching the contact-broken/rally condition at303.90 s (482107), and answering another help call at304.90 s (487562). It loses6/8 members. These are recorded decisions and outcomes, not proof that withdrawal caused the set-level resolution failure.

The traces establish that the accepted radio loop repair operates during a full battle and that there is substantial firing. They do not isolate a new single structural cause for the higher surviving strength. No extra diagnostic battle, tactical edit or remeasurement was used after the guard failure.

## Verification on this source

| Check | Result |
|---|---|
| Existing28 selectors + Q05 + clock pin + retention pin | 31/31 pass |
| Full `./scripts/test-sim.sh` | exit0;237.642 s; default legacy360 s /1878 shots |
| Python unittest | 72 pass |
| Authored legacy/cognition, both maps seeds100–109 | 40/40 digest matches |
| Drills trace on/off: Works107, Trenches107, F1 gen1/107 | 3/3 matches |
| Protected hashes | all4 match |
| `git diff --check` | pass |

Drills paired digests: Works `2368092312704331323`; Trenches `7010569149597981856`; F1 `7012570963591353430`. Verification runs are separate from the distribution and do not fill missing cases. The preserved squad-only executable `a0364bff5cea6ab9-linux` was identified for the F1 reference but no reference/candidate F1 distribution was opened after this guard stop.

## Commands and artifacts

```text
./scripts/test-sim.sh --platoon retention
python3 .local/plan015/review-c2/run_pairs.py
./scripts/battle-lab.sh --version
./scripts/test-sim.sh
python3 -m unittest discover -s tests -p 'test_*.py'
python3 .local/phase4/parity.py .local/plan015/review-c2/authored-parity .local/plan015/review-c2/final/battle-lab
python3 .local/plan015/review-c2/trace_checks.py
python3 .local/plan015/review-c2/run_authored.py --terrain 0
python3 tools/source_id.py
git diff --check
```

Each measured battle argv and its AAR command are saved in `authored-results.json`; every battle uses the frozen binary with `--drills --terrain N --seed S --seconds 360 --evaluate --out DIR`. AARs are under `after-action/MAP/SEED.md`, alongside JSON. `verification.json` links all digest manifests. Guard code is `tools/initiative_guards.py`, tested in `tests/test_initiative_guards.py`; no metric feeds gameplay policy.

## Stop, disagreements and remaining work

The recalibrated guard failure stands. No reinterpretation, policy repair, second measured build, Step E leader dials/paired run or Step D screen preparation follows. The user has not judged this source in replay. No Fable launcher, Windows/Unreal build, commit, reset or stash was used. Protected files and pre-existing work remain intact.

No disagreement with the rulings. Remaining-strength at the limit is an attrition proxy, not proof of inactivity: shots, participation, spacing and raw outcomes are disclosed separately. The authored duration metric is censored at360 s and cannot claim tactical decisions happened earlier. The summary retains all trace evidence in its appendix; attribution remains an observed sequence, not counterfactual causation.
