# Earlier decision-to-action loop results: 7/9

**Superseded status:** the [15 September follow-up](AI_NINE_GATE_RESULTS.md) reaches
9/9 on the original matrix on Linux and Windows. Held-out generalization still
blocks promotion. The source/results below document the preceding 7/9 baseline.

The authorized plan is [004-decision-action-loop.md](../plans/004-decision-action-loop.md).
Final simulation source identity: `228617a248e8f17b`.
Cognition remains opt-in. The unchanged 360-second tactical matrix reaches **7/9**,
below the required **8/9**. Feature passes and victories by elimination do not replace this gate.
Seeds **110–119 remain frozen and untested**; development must pass before evaluating them.
Fable's subscription limit prevented a fresh architectural review. This is not newly Fable-approved.

## Implemented

- Explicit transit, occupation, observation and support completion contracts, preserving existing task identifiers and legacy execution.
- Shelter, selected peek, stance and geometry revision carried into physical execution. Up to two available riflemen observe; command roles retain their duties when riflemen are unavailable.
- Physical movement, occupation, looking/peeking, nine-ray inspection evidence, recognition and delayed reporting. Empty inspected rays remain separate from sightings and do not certify unseen ground as safe.
- Receipts matched to assignment, method, route stage and per-member generation. Pause/resume retains assignment identity, original arrival evidence and deadlines. Casualties replace only affected roles.
- One accepted squad plan; equivalent higher orders preserve execution, failures and mission deadlines. Local alternatives are exhausted before inability reaches higher command. Observation never implicitly completes a seize goal.
- Observation methods require the assigned observer's completion receipt. Repeated inspection requires changed threat evidence or geometry; unrelated sightings cannot restart a completed observation loop.
- Actual supporting soldier/squad and movers exported to replay, traces and evaluator. Support deployment and useful delivery are distinct. Loss of fire reopens support execution, with a bounded reacquisition deadline and alternative firing-position search.
- Prompt forwarding of changed delivery evidence, independent of periodic summaries. Each hop retains transport/reaction delay and the original timestamp. Expired, wrong-sector or rifle-only delivery cannot release supported movement.
- Support positions use the remembered target posture, valid muzzle geometry and reachable shelter/peek pairs. Fresh resistance can supersede a stale machine-gun report. Restored support triggers reconsideration of a previously failed parent approach.
- Deterministic local avoidance of friendly congestion after physical lack of movement; it retains the accepted destination and uses friendly positions only.
- Bounded memory, report provenance, deduplication, uncertainty and separate unseen-force estimates; distinct judgment, bias, risk and adaptability checks under controlled identical evidence.
- Inspector and trace fields for contracts, viewpoints, inspected rays, support identities, failure history, candidate scores and waiting/reconsideration reasons. Replays restore recorded knowledge.

The two-person final foothold, support freshness windows, nine inspection samples and officer coefficients are implementation assumptions tested by scenarios. Research does not validate their numerical values.

## Duration and reproduction

The preparation slider spans **1–10 minutes**, in **30-second steps**, defaulting to **six minutes**.
It applies to normal and experimental battles and invalidates cached reuse. The unconditional
70-second override is removed. `-ArmyBattleSeconds=` and `--seconds` retain exact fixture durations;
manifests/reruns preserve them. Existing early-elimination and time-limit outcomes remain.

Use `--cognition` in Battle Lab or `-ArmyCognition` in Unreal. Explicit legacy selection is
`--legacy-ai` / `-ArmyLegacy`. Manifest reruns reset controller flags before applying the recorded configuration.

## Tactical acceptance

The evaluator SHA-256 remains `3ade284789f519b1d4c6d377b091b075b177f14b183d2329464a1bfaa8d86dca`.
The frozen specification is [ai_acceptance.json](../tests/ai_acceptance.json).
The preceding cognition baseline `c8bac9e44840cd47` scored 0/9; its executable and source are preserved
under `.local/decision-loop-baseline`. The older recovery controller's historical 5/9 and 2/9
results belong to those separate versions.

| Layout | Seed 107 | Seed 108 | Seed 109 |
| --- | --- | --- | --- |
| 5 | Pass | Pass | Pass |
| 6 | Fail | Pass | Pass |
| 7 | Pass | Pass | Fail |

Linux and native Windows produce the same pass/fail matrix. Their raw floating-point gameplay
digests are platform-specific. Both failures eliminate the defenders, but never complete the
required spatially useful flank with two surviving movers and continuous three-second firing angles.

Remaining causal evidence on source `0b6e871e165c6416` (same tactical outcomes on the final source):

- **Layout 6 / seed 107:** support expires at 85.2s; the original approach fails preparation at 105.2s. Restored fire at 143.2s makes the parent approach eligible again, but it loses support again at 146.2s. Local alternatives eventually exhaust at 233.2s. Elimination ends the battle at 289.1s without a completed accepted flank.
- **Layout 7 / seed 109:** the support request changes with fresh resistance; the gun physically relocates and delivers fire. At 137.2s the moving squad resumes the original approach, but elimination ends the battle at 144.8s before the required completion/angle interval. This remains a failed tactical demonstration.

These traces support further work on maintaining useful support and coordinated route progress
as contact changes. They do not justify weakening the evaluator, forcing enemies to survive,
increasing the acceptance duration or promoting this controller.

## Validation and evidence

Physical feature cases use production sensing, geometry, navigation, execution and delayed transport.
Controlled contract/profile inputs supplement them; they do not replace physical scenarios.
Linux/native Windows checks cover hidden and distant targets, empty/impossible observation,
physical obstruction, useful/unavailable/lost support, arrival semantics, interruptions,
role loss/replacement, stale/reordered receipts, memory, officer profiles and trace parity.
Normal-map checks include actual command casualties, obstructed views and unavailable support on both maps.

Six-hundred-second normal-map runs retain all 64 soldier records. Final-source process peaks:

| Platform | Fractured Works | Trenches |
| --- | --- | --- |
| Linux | 4.62 GiB | 4.37 GiB |
| Native Windows | 4.65 GiB | 4.38 GiB |

Both maps reached the full 600 seconds on both platforms and stayed below 6 GiB.
These are standalone process peaks, not a combined Unreal-editor/GPU memory budget.

Separate layout-5 / seed-108 limits of 180, 360 and 600 seconds all ended by elimination
at 140.55 seconds on both platforms. The limit was not binding in that case. This does
not establish that longer battles repair tactical failures; acceptance remains at 360 seconds.

### Completed checks and local evidence

- Final-source Linux/native Windows decision-loop, cognition and normal-map scenarios pass. The normal-map checks verify actual command losses, obstructed views and unavailable support. Logs: `.local/loop-features-verified.log`, `.local/loop-windows-features-verified.log`, `.local/loop-cognition-final.log`, `.local/loop-windows-cognition-final.log`, `.local/loop-normal-verified.log`, `.local/loop-windows-normal-final.log`.
- Foundations pass on Linux and Windows; 27 Python tests pass. Logs: `.local/loop-foundations-final.log`, `.local/loop-windows-foundations-v32.log`, `.local/loop-python-final.log`.
- Full legacy regression suites pass on source `0b6e871e165c6416`: Linux 257.135 seconds; Windows 521.344 seconds. Logs: `.local/loop-linux-full-v32.log`, `.local/loop-windows-full-v32.log`. The subsequent simulation change only restricts observation selection/replacement to available riflemen; final-source affected suites were rerun. The full legacy suite was not redundantly repeated for that cognition-only restriction.
- Ten preserved six-minute legacy seeds 100–109 retain exactly matching gameplay digests against baseline `c8bac9e44840cd47`. `.local/loop-legacy-parity-v32/parity.json` records each candidate's exact source; the run spans the final cognition-only restriction. Earlier preserved baseline comparisons remain available.
- Final-source traced/untraced physical observation has identical same-platform gameplay digests on Linux and Windows. Final-source duration/resource/trace manifests: `.local/loop-validation-final/validation.json` and the Windows mirror's `Saved/BattleLab/Validation-final/validation.json`.
- Native C++ and Unreal builds pass. Final Unreal checks simulate 600 seconds, seek backward/forward and to the end, and compare recorded knowledge, coverage, method and support identity on both maps. Logs: `.local/loop-unreal-verified.log`, `.local/loop-playback-works-verified.log`, `.local/loop-playback-trenches-verified.log`. Preparation and inspector captures were visually inspected; the slider labels and description fit without overlap.
- Final tactical matrices: `.local/loop-acceptance-final/acceptance.json` and the Windows mirror's `Saved/BattleLab/Acceptance-final/acceptance.json`. Both deliberately return a failing acceptance status at 7/9. Held-out evaluation and default promotion were not performed.

Intermediate runs remain under `.local/loop-*`, including regressions. They are not
substituted for the final-source matrix. This pass implements the decision/action mechanisms;
it does **not** complete the plan's tactical acceptance and promotion requirements.

## Reproduce

```sh
./scripts/test-sim.sh --decision-loop
.local/tests/sim_tests --cognition
.local/tests/sim_tests --normal-cognition
.local/tests/sim_tests --foundations
.local/tests/sim_tests
./scripts/test-sim-windows.sh --decision-loop
python3 -m unittest discover -s tests -p 'test_*.py'
./scripts/battle-lab.sh --version
python3 tools/run_ai_acceptance.py --out .local/ai-development
```

The acceptance runner supports the native Windows executable from WSL with `--binary` and
converts its output path. It verifies the frozen evaluator hash. Held-out evaluation requires
`--held-out --development-results PATH` referencing a passing development result for that
exact build. Failed held-out cases must not become tuning cases.

UE5.8 and the installed Visual Studio C++ toolchain build this implementation. No additional
Visual Studio component, planner, ML package or Unreal plugin is required.
