# Neural squad pilot

The first controller is an optional **Azure manoeuvre ranker** with Plan 023's
executor. The original artifact is trained by imitation; the subsequent PPO experiment is described below. The default game remains Legacy.
See [Plan 024](../../plans/024-neural-squad-layer.md) and the attributed review.

## Reward learning against active Legacy

The next-stage implementation uses persistent lean native workers and masked PPO.
It remains optional. See [the experiment report](../../docs/NEURAL_LEGACY_RL_PILOT.md)
for the reward, information boundary, paired controls and actual evidence.

```sh
scripts/build-train-lab.sh   # ~45 s: PGO+LTO training binary, .local/lab/battle-lab-train (the ppo default)
.local/neural-venv/bin/python -m tools.neural.ppo --out .local/neural/rl24 --seed 24 --iterations 4 --episodes 24 --jobs 12
# Separate wider-candidate experiment, same starting model and battle budget:
.local/neural-venv/bin/python -m tools.neural.ppo --out .local/neural/wide24 --seed 24 --candidates 30 --iterations 4 --episodes 24 --jobs 12
python3 -m tools.neural.evaluate --arm imitation=models/squad/plan024-imitation-v1/squad.policy --arm continuation=.local/neural/rl24/initial.policy --arm rl24=.local/neural/rl24/squad.policy --out .local/neural/ordinary-development
.local/neural-venv/bin/python -m tools.neural.video --model .local/neural/rl24/squad.policy --map 901 --overview --out .local/neural/rl-video
```

**Training speed (22 September 2026).** Rebuild the training binary after any
simulator source change; it regenerates its profile each time. Same source and
results as the `-O2` lab (compiler flags only), 17.5% less battle CPU. Workers
run with transparent huge pages and take the next battle when free; samples are
ordered by episode, so a checkpoint is identical for any `--jobs`. On this
8-core/16-thread host, 16 concurrent battles give 22% more battles per minute
than 12: use about 16 workers in total (e.g. `--jobs 5` each for three seeds).
`evaluate`, `run`, `video` and `verify` use the same binary by default (`tools/neural/native.py`),
and every entry point stops if it was built from older simulator source. Frozen baseline binaries
are never rebuilt. Evidence: `.local/plan024/pgo-build/`.

The default collection and video opponent is now active Legacy. The old `run
evaluate` command retains the full historical regression benchmark. The new
`evaluate` module runs the separate ordinary-city matched comparison. For a final
unopened set, use `--phase heldout --first-map 1001 --maps 15` only after development
selection. Schema 3 adds KEEP at action index 1 and feature column 96; the actor is
97 → 32 → 1. Its new weight starts at zero during schema-2 migration.

## Reproduce the original pilot

Use a project-local Python environment with the versions in `requirements.txt`.
Install PyTorch from the CPU index shown there. Ordinary simulation builds require
no Python/ML runtime. Pillow plus the bundled ffmpeg wheel supports the existing
video format on hosts without a system encoder.

```sh
scripts/battle-lab.sh --version
python3 -m tools.neural.run collect --opponent static-defence --out .local/neural/data --first-seed 501 --maps 20
.local/neural-venv/bin/python -m tools.neural.train --data .local/neural/data --out .local/neural/model
python3 -m tools.neural.run evaluate --model .local/neural/model/squad.policy --out .local/neural/evaluation
.local/neural-venv/bin/python -m tools.neural.video --model .local/neural/model/squad.policy --opponent static-defence --map 24 --squad 1 --out .local/neural/video
```

`evaluate` requires an archived baseline binary, with `--baseline-binary` and
`--expected-baseline` specifying its source identity. The pilot baseline is
`45da1e25dd1aa9e7`. Never substitute a stale cached executable. It runs the existing
60 development attacks, 45 validation attacks, 20 town and 10 trench cases with
the existing metric and guard code; every model/baseline pair shares map and seeds.
The model content hash determines the validation draw. Reusing that draw for
model selection makes it development evidence, not an unopened promotion test.

Every batch uses `--lean`; `default_jobs(..., lean=True)` uses available memory,
CPU count and the existing machine-share cap. `--jobs` can lower the pool size.
Ordinary runs prune full exports after metrics are extracted; model artifacts
remain. Video generation regenerates only the selected pairs with lean evaluation
exports. Each 300-second battle segment becomes roughly 30 seconds at 10x.

## Scope and feature schema 2

The policy selects among retain/no-new-plan and routed candidates **at existing
Legacy comparison points**. Active bounds, searching, attachment, succession,
covered firing holds and release gates retain their existing rules. Choosing a
candidate does not prove it was committed: recordings distinguish `retain`,
`support_wait`, `preparing`, and `committed`. This is not a full neural intent layer.

The shared MLP is 96 inputs, 32 ReLU units and one score per action. It has no
action-index input. The action list is canonical by manoeuvre and position, not
teacher score. Legal masks apply before argmax; tie-breaking chooses the first
legal action. The actor has no teacher scores or world-state pointer.

- Columns 0–31: live permitted squad context, identical for all rows: time,
  strength ratio, pressure, idle time, gun, engagement/emergency/support status,
  mobile count, doctrine, plan/progress state, known track age/class/confidence,
  range, commander profile and stats, danger and capable riflemen.
- Columns 32–58: action family and candidate geometry/cost features at assessment
  time, including progress/lateral distance, firing geometry, reported fire,
  congestion, route costs and exposure. They preserve the information that produced
  the cached teacher comparison.
- Column 59: assessment age. Columns 60–61: current covering support and strength.
  Columns 62–63: received platoon task (normalized category) and time to expiry.
- Columns 64–95: explicitly historical context when the route assessment was
  made. These are distinct from the live context, not a silently stale copy of it.

Values are normalized in the emitter and clamped to [-16,16]. No normalization is
learned from evaluation maps. Contact and friendly-state summaries are the first
pilot representation; general entity encoders and recurrent memory are later work.
Commander inputs use the current leader's profile/stats. A feature's presence is
not evidence that the network learned a meaningful personality effect.

Candidate mode 0 preserves the two routed proposals per family. Mode 30 retains
those two and adds four spatially diverse choices per family, still respecting
the current cover/search restrictions. It changes the teacher's available choices
and must be measured separately; a model declares its candidate mode. The first
pilot uses mode 0 to isolate imitation from candidate expansion.

The model is a bounded text artifact with explicit dimensions/version and finite
weights. Its content digest enters replay identity and the gameplay digest;
`neural.policy` is copied with exports. Launch an explicit CLI battle with
`--neural-model PATH`, or Unreal with `-ArmyLegacy -ArmyNeuralModel=PATH`.
Invalid explicit model requests fail visibly, never silently substitute another
controller. No model is installed as the default by these commands.

## Checks

```sh
scripts/test-sim.sh --neural
python3 -m tools.neural.verify --out .local/neural/parity
g++ -std=c++17 -O2 -I Unreal/Source/ArmyPrototype/Sim tools/neural/probe.cpp Unreal/Source/ArmyPrototype/Sim/SquadPolicy.cpp -o .local/neural/policy-probe
.local/neural-venv/bin/python -m tools.neural.check_export --model-dir .local/neural/model --data .local/neural/data --probe .local/neural/policy-probe
```

`verify` checks the forty historical configurations plus an imported city attack
against the frozen baseline, with recording enabled in the new build. It does not
overwrite reference manifests. Full simulator/Python suites, trace parity, Windows
native inference and Unreal compilation remain separate checks. Do not present
missing external gates as passed or classification accuracy as tactical success.
