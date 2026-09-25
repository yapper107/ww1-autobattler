# Plan 024 first implementation review

Jordan authorized implementation after the initial review, specifically requiring
the existing Plan 023/AI_PROCESS benchmark suite, lean parallel battles, and
tools/battle_video.py's short side-by-side squad videos. Review the current diff
and new files READ ONLY; no edits, delegation or training. Return concrete findings
with severities, not approval of tactical quality. Exact Fable 5.1 only.

Base HEAD c760cae7dd15bf827d23f2cab097920ae14fbb16, baseline sim
45da1e25dd1aa9e7; current built sim 293e2111d4c18fa3. Unrelated pre-existing
docs/AI_PROCESS.md typo must stay untouched. The initial review and Astra resolutions
are in plans/024-neural-squad-layer.md; read the resolutions, they correct several
proposals (especially timeouts, candidate policy, memory, labels and compute claims).

Files: new Sim/SquadPolicy.{h,cpp}; additions in Sim/ManeuverSim.cpp,
TacticalRouteSim.h, BattleSim.{h,cpp}, Diagnostics.cpp; tools/battle_cli.cpp;
new tools/neural/{run,train,verify,check_export}.py and probe.cpp;
tests/neural_tests.h with --neural selector in sim_tests.cpp;
scripts/test-sim.sh, tools/loop/{config,runner}.py, tools/rerun_battle.py,
BattleGameMode.cpp opt-in -ArmyNeuralModel=; tools/battle_video.py only encoder
discovery/exit handling changed (same visuals).

Implemented scope: first learned candidate ranker and demonstration path, not the
full intent layer and NOT PPO yet. Canonical action order is manoeuvre/position,
never legacy-score order; fixed 64 features, shared 64->32 ReLU->1 scorer,
mask, no teacher score passed to inference. Legacy narrow candidates unchanged;
optional 30-candidate mode keeps two legacy proposals plus four spatially diverse
proposals per family. The FIRST dataset and model use narrow mode to isolate
imitation; widening is implemented but requires its own benchmark. Candidate
restrictions, early returns and execution release gates are retained and disclosed.
Only Azure ranker changes; attached/merged groups and platoon remain Plan 023.
No recurrent memory. Candidate features cache with original assessment costs,
support/current strength features updated with dynamic support score. Model
content digest is in SameConfig, manifest and gameplay digest only when selected;
model artifact travels with export. The recorder is a diagnostic side channel.

Current measured evidence: new --neural contract tests pass, including 159 recorded
real encounter decisions with identical gameplay digest, legal masks, malformed
models, NaN inputs, model identity. Baseline rebuilt and frozen at
.local/plan024/baseline/battle-lab (the pre-existing cached lab was OLD; not used).
60 teacher battles on new city seeds 501..520 are collecting, lean, 14 workers
using existing default_jobs. Plan 023 benchmark/conduct code reused. Native replay
verification against 40 historical configurations is prepared; local historical
baseline manifests are absent on this host, so we compare against the frozen
unchanged source binary without overwriting reference files. Full suite, Python
suite, native export checks, UE build and paired videos follow.

Look especially for: hidden-state/candidate leakage; cached feature consistency;
loss/label/mask errors; topology/own-order collisions; false claims of passive
recording or off-mode parity; model digest/replay identity; failure handling;
sampling/split bias; correct use of guards and missing cases. We will not promote
from classification accuracy, skip failed benchmarks or call the ranker a full
squad replacement. Return a bounded review ~1000 words, focus on actionable
defects. Additional architecture beyond this slice should be clearly separated.
