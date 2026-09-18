# Plan 015 Step C — recalibrated continuation not measured

**Current run stops before Step C.** The new Step B prerequisite is29/30 at `8bf1a7eac576fba9`: all28 existing selectors and the movement-clock arrival pin pass, but strengthened Q05 fails at the third local-attempt limit. No new authored or F1 distribution was dispatched, and no new resolution, churn, participation or spacing result is claimed. Steps E and D remain unstarted. See the [current Step B report](015-step-b-report.md) for attempts, trace IDs and the failed fixture sequence.

The [Step C review](../../plans/015-step-c-fable-review.md) withdraws the absolute300 s/60% resolution rule and Phase4f churn reference. Future Step C measurement must pair time to decision, stronger-side remaining strength at the limit, and orders per minute per side against legacy on matched map/seed, using their intervals. Spacing and participation guards remain. The old seven-run stop below is preserved as historical evidence under its then-binding rule; it is **not a failure under the newly calibrated rule**, which has not yet been evaluated on the repaired source.

Entry for this continuation: `0b4a4450c274f8e9`; final source: `8bf1a7eac576fba9`. No post-measurement tuning occurred because this continuation performed no distribution measurement. Its AAR example was rendered from the existing Works100 trace only. No leader dials, paired leader measurement, in-game screen, Windows or Unreal work follows the local stop.

---

## Prior measured report (preserved; absolute resolution guard now withdrawn)

# Plan 015 Step C — single measured build, stopped on resolution guard

## Result and stop

**Step C fails the resolution guard. Steps E and D are unstarted.** Step B passes all 28 selectors at `0b4a4450c274f8e9`, including unchanged Q03 and D09 on the first authorised attempt; the join stays enabled. See the [Step B report](015-step-b-report.md).

Step C source before/after is **`0b4a4450c274f8e9`**, unchanged throughout verification and measurement. The current continuation began at `aea3516355ab7f4a`; its only simulation changes are the two reviewed arrival/pause repairs, in TaskSim.cpp and SquadDrillSim.cpp. No second measured build or post-measurement policy edit was made.

Six consecutive Works battles, seeds100–105, reached360 s. Even if all four remaining requested battles ended immediately, the ten-run median would be360 s. Seeds100,101,102 and104 also leave a side at or above60% strength. Thus neither alternative in the resolution guard can pass. Dispatch was stopped when this became conclusive. Seed106 was already in flight; it finished and is included below. **Seven of twenty requested authored runs completed; the F1 distribution was not opened.** Works107–109 and all ten Trenches distribution cases were not run. The earlier parity runs on both maps and one F1 draw remain verification evidence, not a replacement distribution.

There are no zero-shot battles among the seven completed runs, and all four squads on each side fire in all seven. Their mean is2216.14 shots, with mean nearest-squadmate median6.64 m. These gains do not override the failed guard. The user has not replay-reviewed or promoted this source; legacy remains default.

## Mechanism and verification gates

| Gate | Result on this source |
|---|---|
| Q01–Q04 with controls | 4/4 pass; Q03 join/lift remains enabled |
| P04–P07 with controls | 4/4 pass |
| Thirteen squad pairs | 13/13 pass, including D05, D08 and D09 |
| Seven auxiliary pins | 7/7 pass |
| Full `./scripts/test-sim.sh` | exit0;242.107 s; default360 s battle1878 shots |
| Python unittest discovery | 65 pass |
| Authored legacy/cognition parity | 40/40 digest matches, maps0/1, seeds100–109,360 s |
| Drills trace parity | 3/3, Works, Trenches and F1 draw1, seed107,360 s |
| Protected files and existing C++ tests | hashes unchanged |
| `git diff --check` | pass |

Drills traced/untraced digests:

| Case | Both digests |
|---|---|
| Works107 | `12970344080380585861` |
| Trenches107 | `2777152409642871741` |
| F1 gen1 / seed107 | `10463223191962002758` |

Artifacts are under `.local/plan015/step-c/`: `gate-status.json`, `authored-parity/parity.json` (all40 expected/actual digests and commands), `trace-parity.json`, `full-suite.log` and `static-checks.json`. The frozen binary and simulation snapshot are in `final/`. Native Windows and Unreal builds were not attempted, as instructed.

## Guard scoreboard

The measurement protocol checks zero shots and firing-squad participation per battle before dispatching another. Resolution, spacing and churn use the requested map set. For spacing/churn, arithmetic means of paired per-run metrics are used; both sides' order counts are disclosed. The paired7-run statistics below are descriptive after the early stop, **not completed ten-seed acceptance results**. Reported intervals use the existing2000-resample bootstrap with battle seed as cluster; no interval relaxes a guard.

| Criterion | Evidence | Status |
|---|---|---|
| No zero-shot battle | 0/7 zero-shot runs | Holds on completed runs; other sets unmeasured |
| At least3/4 squads per side fire | 4/4 on each side in7/7 | Holds on completed runs |
| Median decision<300 s or limit with both sides<60% | Six capped runs force full-ten median360 s; several sides retain60% or more | **Conclusive failure; stop trigger** |
| Under2 m share no worse than legacy | Matched7-run mean difference −10.99 percentage points;95% interval[−13.69,−8.45] | Favorable partial evidence; no full-set pass claimed |
| Trench median at least3 m | Trenches distribution not opened | Not assessed |
| Orders/min no higher than Phase4f | Azure201.67 vs142.00; Ember221.90 vs136.86 over matched7 | Adverse partial evidence |
| F1 attacker win share vs squad-only source | F1 distribution not opened | Not assessed |

Matched order-rate deltas: Azure **+59.67 orders/min**,95% interval[+26.55,+101.03]; Ember **+85.05**, interval[+41.50,+127.87]. Every completed pair has higher orders on both sides than Phase4f. The resolution guard alone is sufficient for the required stop; these partial intervals are not used to extrapolate an unmeasured F1 or Trenches result.

Phase4f had no completed historical distribution. Its preserved `01462c286da88358-linux` binary at `.local/phase4f/attempt3/battle-lab` was therefore run for Works100–109 with the same360 s settings, without trace, to obtain real order-count references. No reference value was approximated from Phase4e or candidate90. All ten reference manifests, digests, commands and event-derived counts are under `phase4f-reference/works/`; the matched comparison uses only100–106. Current-build trace and event order counts agree on every completed run.

## Every completed authored run

A/E = Azure/Ember; both start with32 active soldiers. C90 and legacy values come from the preserved baseline metrics in `.local/phase2d/enriched-runs.json`, whose authored digests were revalidated40/40. The strength fractions are counts divided by32; “limit strength>=60%” means at least one side fails the required strict-below60% condition.

| Map / seed | Shots drills / C90 / legacy | Firing squads A/E | Surviving A/E | Duration | NN m drills / legacy | <2 m % drills / legacy | Orders/min A/E drills | Orders/min A/E P4f | Adverse case |
|---|---:|---:|---:|---:|---:|---:|---:|---:|---|
| works 100 | 2040/839/2583 | 4/4 | 20/16 | 360.00 | 6.78/7.27 | 6.38/16.21 | 298.33/191.00 | 130.50/118.67 | limit strength >=60%, orders above P4f |
| works 101 | 2023/1038/2012 | 4/4 | 22/17 | 360.00 | 7.30/5.04 | 5.78/23.52 | 161.17/321.17 | 143.17/143.17 | limit strength >=60%, orders above P4f |
| works 102 | 1872/965/2270 | 4/4 | 14/20 | 360.00 | 6.21/5.98 | 4.28/16.51 | 219.00/287.17 | 137.00/152.00 | limit strength >=60%, orders above P4f |
| works 103 | 2862/1272/2347 | 4/4 | 15/15 | 360.00 | 6.73/5.51 | 6.85/19.16 | 142.17/275.83 | 133.17/143.50 | orders above P4f |
| works 104 | 2388/1067/2086 | 4/4 | 20/14 | 360.00 | 6.47/7.56 | 6.80/14.20 | 157.83/192.17 | 136.17/133.50 | limit strength >=60%, orders above P4f |
| works 105 | 2400/1003/2318 | 4/4 | 17/13 | 360.00 | 6.26/6.80 | 7.72/13.31 | 204.83/142.50 | 162.33/132.83 | orders above P4f |
| works 106 | 1928/973/2803 | 4/4 | 15/22 | 360.00 | 6.72/6.88 | 4.68/16.53 | 228.33/143.50 | 151.67/134.33 | limit strength >=60%, orders above P4f |

Candidate90 casualties and closure remain information only; no withdrawn tactical target was reapplied:

| Works seed | Casualty % A/E drills | Casualty % A/E C90 | Front120/240 m drills | Front120/240 m C90 | Hits/soldier-minute drills |
|---|---:|---:|---:|---:|---:|
| 100 | 37.50/50.00 | 84.38/31.25 | 74.69/93.53 | 108.43/106.78 | 0.295 |
| 101 | 31.25/46.88 | 90.62/37.50 | 75.38/86.18 | 108.32/106.43 | 0.270 |
| 102 | 56.25/37.50 | 68.75/71.88 | 78.29/67.39 | 106.23/118.03 | 0.328 |
| 103 | 53.12/53.12 | 56.25/75.00 | 78.63/95.53 | 112.32/104.80 | 0.351 |
| 104 | 37.50/56.25 | 78.12/50.00 | 79.22/90.24 | 110.46/109.71 | 0.298 |
| 105 | 46.88/59.38 | 65.62/40.62 | 81.72/102.27 | 109.37/109.55 | 0.354 |
| 106 | 53.12/31.25 | 62.50/62.50 | 82.72/87.67 | 108.77/109.94 | 0.293 |

Every completed authored run has an after-action Markdown report and JSON companion under `after-action/works/{100..106}.{md,json}`. `authored-results.json` records each run directory, gameplay digest, exact command, squad-shot counts, survivor fractions, order metrics and after-action command. `closure-diagnostics.json` holds the additional observer-only measures. No observer metric feeds policy.

## Trace evidence and remaining defect

The first Works battle is `authored/works/100/battle-100-1789661118997907545/`. Its trace exposes a repeatable radio-consumption defect, not a hypothesis based solely on order counts:

- Squad3 receives Fixing serial1000001 at116.4 s (trace116642), then NeedSupport serial3000002 at126.35 s (188597).
- It accepts help at126.65 s (193353), evaluates the already received Fixing and finds no route at126.9 s (203855), and reports firing-position exhaustion (203856).
- With no new radio receipt in between, it accepts help again at127.9 s (221883), reevaluates Fixing at128.5 s (240165), accepts help at128.75 s (243466), and repeats at129.1/129.35/129.6/129.85 s.
- Across the battle, squad3 records114 help acceptances,115 no-route evaluations and113 firing-position-exhaustion transitions. Squad5 also records59 help acceptances and58 no-route evaluations.

`SquadDrillSim.cpp::RadioAction` stores both message types in the same `p.radioHandled`. Handling Fixing overwrites the handled NeedSupport serial; handling the same NeedSupport again overwrites Fixing. `Accept` consequently resets the support action and makes its exhausted search repeat. The trace alternation and the two assignments in that function establish this consumption/lifecycle defect. Its exact contribution to casualties or decision time has not been isolated by another build and is not claimed.

Evidence: `works-100-radio-loop.json` preserves the received serials and transition IDs; `works-100-diagnostic.json` preserves counts and events. The corresponding after-action report links command knowledge and later observer outcomes. Proposed next repair, **not implemented here**: retain consumption per broadcast kind/sender (or retain processed serials), keep an existing help commitment and exhaustion evidence across an unrelated no-route opportunity, and add a mixed NeedSupport/Fixing paired mechanism so these two accepted messages cannot re-accept each other. This is a general lifecycle correction, not a Works-seed special case.

The Step B Q03 trace also retains later final-bound allocation failures after the successful join and lift; these are disclosed in that report. The mechanism pass does not certify complete two-pronged capture in every battle.

## Commands and stop mechanics

```text
./scripts/test-sim.sh
python3 .local/phase4/parity.py .local/plan015/step-c/authored-parity .local/plan015/step-c/final/battle-lab
python3 .local/plan015/step-c/trace_checks.py
python3 .local/plan015/step-c/run_authored.py --terrain 0
python3 .local/plan015/step-c/reference_orders.py 0:100
python3 .local/plan015/step-c/reference_orders.py 0:101 0:102 0:103 0:104 0:105 0:106 0:107 0:108 0:109
python3 .local/plan015/step-c/diagnose.py 100
python3 .local/plan015/step-c/trace_loop.py
python3 .local/plan015/step-c/score_authored.py
python3 tools/source_id.py
git diff --check
```

Each candidate invocation uses `--drills --terrain 0 --seed N --seconds 360 --evaluate --out ...`; trace is on. After-action reports use `python3 tools/after_action.py RUN --out REPORT.md`. The legacy/cognition parity helper and trace helper preserve every expanded command in their JSON outputs. Read-only closure extraction uses `tools/closure_metrics.py`'s `evaluate` for the seven completed records.

The initial runner checked set-level resolution after ten cases. Once six capped cases proved the result irreversible, a local dispatch stop was added without touching simulation source: the already running frozen executable was preserved, and its next invocation was blocked by a temporary guard launcher. Seed106 drained; the attempted107 launch returned75 before starting a simulation. The parent runner reported exit1 for that deliberate refusal. `STOP.json` records the six-case proof and `dispatcher-stop-result.json` preserves the original diagnostic. The frozen executable was restored byte-for-byte afterwards (SHA256 equal to the Step B binary); no simulation was reset, rebuilt or remeasured. This was a measurement-dispatch control, not a tactical change or an unreported battle failure.

## Disagreements, ambiguities and deferred work

**Additional implementation omission found in final audit:** the3 m handler covers rush and soldier execution timeouts, but ordinary MoveTactically bounds expire through `DrillSim::ProgressClock`, with soldier `execution.deadline=0`. That stage-clock expiry still lacks a member-side3 m arrival certification. The broad “every movement stage” ruling is therefore not fully implemented; the passing28 selectors do not discriminate this path. This should have been caught before Step C. The Step B report now explicitly records the gap. No post-measurement repair or second build follows the required stop. A future correction must preserve normal Done receipts at actual member positions and the existing progress-clock pause rules.

No disagreement with the reviewed arrival or pause rules. Q03 passed, so the authorised join-disable fallback was not used and the user's two-sided join decision is not deferred.

For resolution, the fallback is read as requiring both sides below60% in every limit-ended battle when the median is not below300 s. The six-of-ten proof makes the stop independent of the remaining durations. For aggregate spacing/churn, partial paired means are disclosed without representing them as full-set acceptance. If “no churn” was intended as a per-run hard ceiling, seed100 already fails it; the result would still stop before Step E. The current report makes that interpretation boundary explicit rather than silently changing the guard.

Step C cannot pass; remaining authored cases and all90 F1 draws are unmeasured. Therefore **Step E's four leader dials, paired good/bad comparison and attribution additions were not started**, and **Step D's in-game after-action screen and leader controls were not prepared**. No new replay build is claimed. No further repair follows this report. Windows/Unreal verification remains with the architect. Protected files, authored layouts5–7, frozen seed lists and evaluator are untouched; no F2/F3, gun pickup, Fable launcher, commit, reset or stash.
