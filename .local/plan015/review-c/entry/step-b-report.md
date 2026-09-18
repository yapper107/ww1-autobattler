# Plan 015 Step B — arrival and protected-pause continuation

## Result

**Step B passes its mechanism gate at `0b4a4450c274f8e9`: 28/28 selectors.** Q03 and D09 pass on the first of three authorised local attempts (overall attempt10). All thirteen squad pairs, Q01–Q04, P04–P07 and all seven pins pass on that source. The join remains enabled; no user decision is deferred. Fixtures and assertions are unchanged.

Entry fingerprint: `aea3516355ab7f4a`. Review: [Fable Step B3](../../plans/015-step-b3-fable-review.md). Previous reports and source remain in `.local/plan015/step-b/review3-entry/`, `review2-entry/` and `review-entry/`. This report supersedes the earlier mechanism stop; it does not claim replay promotion. Legacy remains default. Step C measured this same frozen source and stopped on its resolution guard; see the [Step C report](015-step-c-report.md). Steps E and D remain unstarted.

## Implementation

- `Sim/TaskSim.cpp`: a drills movement task (Transit or Occupy) at a rush or execution timeout reports Done/Arrived when the actual soldier is within3 m of the assigned endpoint, active, with executable geometry. The existing `SetTaskStatus` captures the actual position and existing transport delivers it. Support/Observe are not certified by proximity. Reload or shelter does not erase this real arrival. No leader-side receipts are injected.
- `Sim/SquadDrillSim.cpp`: support-loss pause searches protected slots within15 m, with a15 m path budget inside the corridor; stage, instance and generation stay retained.
- `Sim/TaskSim.cpp`: the corresponding paused-soldier movement limit is also15 m, so selection and execution agree.

The new handler is independent of named drill/stage for soldier execution timeouts. **Final-audit coverage gap:** ordinary MoveTactically bounds use the separate squad progress clock and issue soldier orders with `execution.deadline=0` (`DrillSim.cpp:446`). Its `expire` path (`DrillSim.cpp:346`) still goes to column recovery/Blocked without requesting a3 m arrival certification. Therefore the broader ruling's “every movement stage” coverage is incomplete even though every requested mechanism passes. This is my implementation omission, not a disagreement with the ruling or a fixture defect. The gap was identified after the Step C guard stop; no post-measurement simulation change was made. It must be closed with real member Done receipts through transport before calling the whole arrival contract complete.

## Attempt10: first local attempt, no distribution

Build source `0b4a4450c274f8e9`. Commands:

```text
./scripts/test-sim.sh --platoon Q01
./scripts/battle-lab.sh --version
python3 .local/plan015/step-b/run_pairs.py 10 0
python3 .local/plan015/step-b/trace_pairs.py 10 Q03 D09
python3 -m unittest discover -s tests -p 'test_*.py'
git diff --check
```

The two preliminary compilations ran Q01 only, before any Q03/D09 attempt: an edit-script lookup initially missed the non-static Pause function; static review then found the soldier's separate8 m execution limit. Both were corrected before the single target-scenario attempt. Their fingerprints are `4f0ed9e6881acf51` (TaskSim only) and `178deedc389a2ca3` (pause query amended, before the execution-limit correction). Logs and explanations are preserved in `attempt10/preflight/` and `preflight2/`; no scenario attempt or distribution result is hidden.

| Selector | Unchanged result |
|---|---|
| Q02 | fixing4.8 s; assault6.6 s; phase78.65 s; lift80 s; Rush control does not assault |
| Q03 | sides1/-1; lead squad2; lift1; lanes1; crossing0; unscreened join0 |
| Q04 | need21.3 s; neighbour help22.75 s; delivery by60 s; distant HelpSquad order and receipt |
| D05 | support1; incorrectly blocked0; weak report1; latency3.9 s |
| D08 | covered attack, movement, physical angle, consolidation and Reorganise all pass; longest rush4.95001 s; bare control passes |
| D09 | pause1; resume same instance/generation1; protected hold1; continuous-support pause0 |
| Other selectors | all pass; `attempt10/results.json` and `pairs/*.log` |

### Trace evidence

Q03: encounter90, run `attempt10/traces/90/battle-107-1789660759751792370/`. At45 s, trace16190 now reports soldier20 **Done: arrived**, actual `(28.429956,-47.585739)`, goal `(29.80839,-45.726189)` (2.31 m remaining). This was the prior failure at exactly the same position. Lead squad2 reaches its phase line at79.85 s (20173); fixing squad0 lifts at81.2 s (20317),1.35 s later. Both assault lanes pass the unchanged no-crossing predicate.

Q03 still exposes later limits beyond its assertion: squad1 cannot allocate a final assault rush at71.95 s (18027), and squad2 at98.25 s (21994); both report and resume closure. Passing the join/lift pair is not evidence that both assaults capture the objective. These are disclosed for replay/distribution assessment, not locally tuned after the pass.

D09: encounter62, run `attempt10/traces/62/battle-107-1789660762672362289/`. At38 s, traces7243/7395/7542/7644 allocate protected holds for members1/3/4/5 within15 m. Trace7646 pauses permission;7837 resumes at48.35 s. The unchanged observer assertion verifies protection for halted rifle members and retained instance/generation. Continuous-support encounter63 passes with no spurious pause. Extracts are `attempt10/90-evidence.json` and `62-evidence.json`; raw traces and paired controls remain alongside them.

## Checks, boundaries and disagreements

65 Python tests pass (3.476 s). `git diff --check` passes. Protected-file hashes and all existing C++ test-header/sim-test hashes match entry. Only the two simulation files named above change in this continuation; `review3-simulation.patch` preserves the exact diff. No fixture changes, per-seed branch, hidden-enemy read, receipt injection, Fable invocation, commit, reset or stash. Windows and Unreal remain with the architect.

No disagreement with the rulings. The squad-clock coverage omission above remains; mechanism success must not be read as complete coverage of that broader contract. No second or third local Q03/D09 attempt was needed. Step C prerequisites also pass on this source: the full Linux suite,40/40 authored legacy/cognition digest matches, and3/3 drills trace-parity checks (both maps and F1 draw1). Detailed manifests and commands are under `.local/plan015/step-c/`.
