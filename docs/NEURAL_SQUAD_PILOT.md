# Plan 024: first neural squad pilot

The subsequent authorized [active-Legacy reward pilot](NEURAL_LEGACY_RL_PILOT.md)
adds schema-3 continuation and PPO. This report preserves the original imitation
experiment and its evidence.

22 September 2026. Jordan authorized implementation and specifically required
the Plan 023 benchmarks, lean parallel battles, and the established short video
format. Those are reused. **The first imitation model works end to end, but is
not promoted:** attack performance is statistically level with Plan 023 and the
model fails the existing order-churn guard. Legacy remains the default.

This is the first two stages of [Plan 024](../plans/024-neural-squad-layer.md),
with the optional CLI/Unreal loading work from stage 5 brought forward. It is a
learned manoeuvre ranker inside the Plan 023 executor. It does not yet replace
commitment, release gates, soldier execution, or the platoon commander. PPO,
persistent training workers and broader squad authority remain subsequent work.

## Short replay review

All clips use [the existing renderer](../tools/battle_video.py) described in
[AI_PROCESS](AI_PROCESS.md). Legacy is on the left; neural is on the right.
They show the same map and battle seed at 10x, with squad colours, corporal paths,
firing, exposure halos, covered detours and sprint/stamina diagnostics. The header
now uses three diagnostic lines so figures do not run outside the panel.

- [City 24, squad 1](../.local/plan024/videos/city24/city-24-squad-1.mp4): about
  24 seconds, battle seconds 60–298. The renderer stops when the shorter record
  ends: neural clears at 297.8 seconds. Both ultimately clear the defence; neural loses 13 of 32
  attackers versus Legacy's 19.
- [City 34, squad 3](../.local/plan024/videos/city34/city-34-squad-3.mp4): about
  29 seconds. Both ultimately clear; neural loses 7 attackers versus Legacy's 15.
- [City 28, all squads, seed 108](../.local/plan024/videos/city28-regression/city-28-overview.mp4):
  the later fight from 240 seconds; the largest attack-score regression in the development set, included as a
  failure diagnostic. The pair is selected by that criterion, not as an estimate
  of average performance. Legacy clears with 17 attackers lost; neural leaves
  four defenders alive and loses 25 attackers by the deadline.

Cities 24 and 34 were selected before reading the benchmark results because they
were useful in the earlier AI work. They happen to favour this model and must not
substitute for the full comparison below. The displayed clips are top-down
simulation exports; no claim of an Unreal visual playtest is made.

## What is implemented

The actor receives a numeric, versioned observation and legal action mask, with
no pointer to authoritative world state or teacher scores. One shared 96→32→1
ReLU network scores each candidate. The 3,137 parameters occupy a 41,378-byte
text artifact; native inference requires no Python, GPU, server, or ML runtime.

Current squad context is identical across all actions. Cached candidate costs
and their historical assessment context are separate, with assessment age
explicit. Inputs include permitted tracks/reports, received platoon task and
expiry, current leader traits/stats, route geometry, support and execution state.
Candidate ordering does not reveal the teacher ranking. Full schema and commands
are in [tools/neural/README.md](../tools/neural/README.md).

The pilot uses the original two routed candidates per family. An optional mode
with up to 30 spatially diverse candidates is implemented separately and has not
been trained or tactically evaluated. Existing candidate restrictions and early
returns remain: the network cannot choose actions the executor never offers.
Action zero means no new plan; it is not a general learned stop/continue command.

Recording distinguishes a selected move from its immediate execution outcome:
retain, waiting for support, preparing, or committed. This is an immediate receipt,
not yet a complete record of eventual arrival or failure. The model artifact and
candidate mode enter configuration identity, export manifests and gameplay
digests. Reruns restore the model and expected digest, including lean recording.
Invalid explicit models fail visibly rather than silently substituting Legacy.

The optional model is saved at
[models/squad/plan024-imitation-v1/squad.policy](../models/squad/plan024-imitation-v1/squad.policy),
with [provenance and numerical evidence](../models/squad/plan024-imitation-v1/provenance.json).
Use `--legacy-ai --neural-model PATH` in the lab, or
`-ArmyLegacy -ArmyNeuralModel=PATH` in Unreal. The flag enables the neural ranker
for Azure only. No default or old controller was replaced.

## Training and compute

Teacher: Plan 023 Stage E, baseline fingerprint `45da1e25dd1aa9e7`.
Instrumented/inference source: `aef3b097c0df4b47`, based on Git revision
`c760cae7dd15bf827d23f2cab097920ae14fbb16` plus this working-tree change.
The initially cached lab executable was stale; it was rebuilt from the baseline
before freezing the comparison binary. Every baseline row asserts its identity.

Generated city training maps 501–520, with three battle seeds each, produced
20,612 decisions. Of those, 17,904 had at least two legal choices and were used
for training. Maps 501, 506, 511 and 516 selected the checkpoint; they are
development data, not unopened tests. The selected checkpoint is epoch 48 of
100, seed 24, with 89.18% teacher-choice accuracy on those four maps. Accuracy
does not establish tactical quality; only one training seed was evaluated.

Recorded teacher choices: 16,912 candidates and 3,700 retain decisions. Family
counts are 7,895 north flanks, 8,562 south flanks, 18 presses, 40 withdrawals and
397 repositions. This is a heavily imbalanced demonstration set. Immediate
outcomes: 12,166 support waits, 2,985 preparing, 1,761 commits and 3,700 retains.
Repeated waiting decisions dominate; they are not independent tactical examples.

The existing lean runner sizes jobs from available memory, CPU count and the
machine-share cap. The 60 data battles ran with 14 workers in 137.7 seconds,
peaking at 581.7 MiB per battle. Training used three CPU threads and took 48.8
seconds. The 270 evaluation battles used 12 workers, took 528.5 seconds, and
peaked at 585.3 MiB per battle. These include export/metric work on this host and
are measurements, not portable performance guarantees. Ordinary metric runs
prune raw exports; selected video pairs retain the lean evaluation files.

Host inspection found 16 logical CPU cores, about 45 GiB visible to WSL, and an
AMD Radeon RX 9070 XT. This small pilot used CPU PyTorch; no CUDA or paid compute
was assumed. Dependencies are isolated in `.local/neural-venv`.

## Existing benchmark results

The unchanged scenario/metric/guard machinery runs 135 paired cases: 60 generated
city development attacks, 45 validation attacks, 20 symmetric city battles and
10 trench smoke battles. Model and Legacy share each map and battle seed. The
model hash determines the validation draw. Using it for further model selection
would make it development evidence, not a new unopened promotion test.

| Attack set | Legacy mean | Neural mean | Paired difference, map-cluster 95% interval |
|---|---:|---:|---|
| Development, 60 battles | 0.81024 | 0.81189 | +0.00165 [−0.03420, +0.04889] |
| Validation, 45 battles | 0.81551 | 0.82836 | +0.01285 [−0.00590, +0.03194] |

There is no reliable improvement. Development clear rate is 93.3% Legacy versus
91.7% neural; validation clear rate is 95.6% versus 97.8%. Development attacker
loss is 34.1% versus 34.8%; validation loss is 35.4% versus 34.0%.

All battle and paired conduct guards pass **except Azure order rate**: symmetric
city battles have +18.44 orders per minute [3.01, 32.53], a statistically reliable
increase. Guard thresholds were not relaxed. The whole legacy loop's external
gate bundle is not asserted for this new controller: `report.json` leaves those
entries as not run. Actual source/build/parity checks are listed separately below;
the dedicated mechanism-selector gate has not been established with the neural
policy enabled. This model has no promotion score and is not a loop survivor.

Raw results: `.local/plan024/evaluation-v2/report.json`. The earlier schema-1
dataset/model and interrupted evaluation are superseded and are not evidence for
this artifact.

## Verification

- Full Linux simulator suite: pass, 461.994 seconds
  (`.local/plan024/full-suite-v2.log`).
- Existing Python suite: 126 tests pass
  (`.local/plan024/python-tests-v2.log`).
- Native Linux and MSVC Windows neural contracts: pass; loader bounds, masks,
  deterministic tie-breaking, invalid inputs, configuration/model identity,
  full/lean digest identity and passive recording with 159 real decisions.
- Forty historical cognition/Legacy configurations plus an imported generated
  city static-defence attack match the frozen baseline with recording enabled:
  41/41 (`.local/plan024/parity-v2/parity.json`). Existing reference manifests
  were not regenerated or overwritten.
- Three drills trace on/off pairs and one repeat: all identical
  (`.local/plan018b/plan024-v2/trace-parity/trace-parity.json`).
- Linux and Windows native inference each match PyTorch choices on 2,000 real
  decisions / 18,207 action rows. Zero action disagreements; maximum absolute
  logit error 0.000002146. The Windows probe uses file input to avoid a WSL pipe
  stall; the numerical test itself is unchanged.
- The neural city-24 rerun preserves gameplay digest `2372919768571971356`,
  including model identity and lean recording (`.local/plan024/neural-rerun/verification.json`).
- Policy static check: pass. Fable also audited the feature builder for permitted
  knowledge. A token scan alone is not proof of information discipline.
- Unreal Engine 5.8 build: succeeded, 48.83 seconds
  (`.local/plan024/unreal-build.log`). Compilation and native inference are
  verified; an in-game neural playtest remains separate from these videos.

## Fable review and resolutions

The exact `claude-fable-5-1` architecture consultation and implementation review
are saved in [the plan](../plans/024-neural-squad-layer.md) and
[the attributed implementation response](../plans/024-neural-implementation-fable-review.md).
Fable did not modify the implementation checkout. Astra resolved the findings:

1. Stale candidate context: schema 2 separates live and assessment context; a
   contract test asserts live context equality for every action.
2. Missing city parity: added and passed the imported static-defence integration
   pair. It is exercised in the Python parity harness, not duplicated in C++.
3. Baseline identity: asserted on every baseline evaluation and parity row.
4. Incomplete benchmark: included validation and mark completion only after all
   cases return successfully; smoke subsets cannot claim completion.
5. Dataset reporting: added label/family/outcome histograms and per-episode hashes;
   disclosed checkpoint selection and waiting-row correlation.
6. Model identity: added full and lean digest tests with numerically identical
   models whose text identity differs.
7. Missing task/current leader inputs: added platoon task/expiry and actual
   leader profile, rather than the constant configuration profile.
8. Fallback suggestion: retained visible failure for an explicitly invalid model.
   Silently substituting Legacy would make a purported neural trial misleading.
9. Cross-platform proof: ran the real observation comparison in native MSVC.

Fable also identified churn as a risk outside the initial wiring slice. The full
benchmark confirms it. The next work should trace chosen/prepared/committed plan
changes, improve the training distribution and commitment interface, and repeat
paired evaluation with fresh evidence. Broader authority and RL should build on
that diagnosis. No claim is made that imitation alone delivered a better squad AI.
