# Plan 024 — a learned squad decision layer

22 September 2026. **Implementation authorized; first imitation pilot delivered, not promoted.**
Requested by Jordan. Astra inspected the current source and consulted exact model
`claude-fable-5-1` through the project's existing subscription session. The
[unabridged Fable response](024-neural-squad-fable-review.md),
[request](024-neural-squad-review-request.md), and
[independent source/documentation research](024-neural-squad-research.md) are saved.
Jordan subsequently authorized implementation, explicitly requiring Plan 023 benchmarks,
lean parallel battles and the established short video format. Stages 1 and 2 plus optional
CLI/Unreal loading are implemented. The [pilot report](../docs/NEURAL_SQUAD_PILOT.md)
records the real results and [implementation review](024-neural-implementation-fable-review.md).
The broader architecture below remains the roadmap; its unimplemented stages are not
claimed complete and proposed reward/conduct changes are not additional user rulings.

Baseline: HEAD `c760cae7dd15bf827d23f2cab097920ae14fbb16`, simulation fingerprint
`45da1e25dd1aa9e7`, Legacy Plan 023 Stage E. The implemented pilot source is
`aef3b097c0df4b47`; data collection, CPU training, native loading and paired evaluation
are complete. Attack performance is statistically level, but order churn fails the
existing guard. The model is experimental and Legacy remains the default.

## Next-phase opponent — user ruling, 22 September 2026

Jordan explicitly requires the next neural training phases to use **active Legacy
Plan 023 opponents**, to avoid specializing in static-defence attacks. Train the
neural side against the full moving, firing, flanking Legacy controller on varied
generated city maps and battle seeds. Freeze and identify the Legacy opponent for
each experiment. Keep training, development and final evaluation maps separate.

Static-defence cases remain historical/regression diagnostics, not the main
training distribution, reward objective or promotion ranking for these phases.
The earlier proposal to optimize the static-attack casualty score is superseded
for upcoming training. Define the reward against the ordinary battle outcome and
force preservation, with explicit weights and the existing conduct checks, in the
next architecture slice. Do not silently carry over the twelve-defender objective
or treat a static-attack score gain as success against live Legacy.

Keep Plan 023 execution, lean parallel workers and short matched videos. Compare
neural-versus-Legacy with frozen-imitation-versus-Legacy and Legacy-versus-Legacy
on identical scenarios. The current optional neural path controls Azure while
Ember keeps Legacy; ordinary battles must omit the static-defence scenario flag.
No new training run is launched by recording this ruling. The current pilot and
its results remain the original static-defence experiment.

## Recommendation and scope

Build one small neural policy shared by squads, with each squad acting on its own
information and maintaining its own decision history. Train outside Unreal using
the existing authoritative C++ simulator. Ship frozen weights for local inference;
ordinary battles do not require an LLM, a subscription call, or online training.

The first learned behaviour should select a manoeuvre and destination, or choose
to hold or continue the current plan. This fits the existing candidate comparison
in `ManeuverSim.cpp::UpdateManeuver`. It is a useful first neural controller, but
**a learned ranker within existing tactical rules is not yet replacement of the
whole squad layer**. Subsequent work gives the policy explicit authority over
commitment, reassessment and support/movement decisions through the same interface.

| Layer | Proposed responsibility |
|---|---|
| Existing platoon commander | Mission, squad coordination, attachments and merges |
| Neural squad policy | Select manoeuvre/destination; hold/continue; later select tactical execution parameters |
| Squad executor | Carry out accepted intent through stations, order identity, message delays, relay and succession |
| Soldier simulation | Paths, cover reactions, stamina, aiming, shooting and physical consequences |

Direct per-soldier movement commands would multiply the learning problem and
discard useful execution work. Keep them outside the first design. Networks
cannot learn actions that the candidate service never offers or that the executor
always rejects: candidate coverage and accepted-versus-executed actions must be
measured alongside rewards.

## Observation and action contract

Create a policy-owned, versioned observation type rather than passing `Frame`,
`Soldier` objects containing unrestricted fields, or authoritative enemy arrays.
Inputs include permitted friendly state, known enemy tracks and their ages,
reported fire, received platoon orders, current intent and progress, known terrain
features, equipment, relevant stats, doctrine and commander traits. Unknown and
absent values have explicit masks. Values are normalized using frozen constants
or training-only statistics; candidate ordering and tie-breaking are stable.

Use bounded member/contact/candidate sets with overflow diagnostics and relative
coordinates. Initial capacities must cover current attached/merged groups. Fable's
suggested 12-member capacity is a placeholder, not an accepted bound. Existing C++
roster constants still constrain battle size even if the network accepts sets.
Rotating coordinates requires corresponding rotation/relabeling of directional
actions and doctrine features.

Start with a categorical choice over `keep`, `hold` and approximately 24–32
geometrically diverse candidate plans, with the actual cap chosen after profiling.
Every candidate includes manoeuvre type, destination, route cost, known exposure,
support information and firing geometry. Validate both candidate creation and
masks against the leader's knowledge. `keep` retains plan identity; selecting the
same plan must not restart orders or deadlines. Known failures produce observations
and receipts, allowing reconsideration without order churn.

For example: the commander knows about a machine gun ahead, has six capable members
and an available supporting gun. The network can choose covered ground to the
left rather than another forward bound. The executor gives the rifle group its
stations and delivers orders normally. Whether that choice is better is learned
from battles and evaluated in replays.

Start with a small feed-forward candidate scorer plus explicit recent history.
Add recurrent memory only after a discriminating test exposes information missing
from that representation. Commander changes must respect knowledge boundaries:
do not transfer private memories to a successor automatically. Persistent squad
intent and received reports may transfer according to the command contract.

## Implementation sequence and exits

| Stage | Work | Exit evidence |
|---|---|---|
| 1. Policy connection | Extract observation/candidate/choice/commit boundary; old scorer adapter; log decisions without changing choices | Existing controller reference digests unchanged; policy inputs cannot reveal hidden state; commands have one owner |
| 2. Neural bootstrap | Widen candidates separately; record exact teacher choices; train a small imitation model; load weights in C++ | Teacher-label coverage reported; closed-loop comparison with Legacy; Python/native action agreement; replayable neural battle |
| 3. Learning through battles | Add blocking decision callback over persistent worker pipes; collect transitions; PPO fine-tuning | Correct per-squad trajectories, rewards and time discounts; measured throughput; learning curves across training seeds |
| 4. Tactical breadth | Broader generated city training, moving opponents, attack/defence, roster/stat variation; expand policy authority | Improvement on independent maps and acceptable conduct; measured evidence that added authority helps |
| 5. Playable integration | Frozen model artifact, CLI/Unreal selection, provenance and replay inspector | Linux/Windows inference checks, relevant suite and Unreal build, comparative replay review by Jordan |

Likely source areas: `ManeuverSim.*`, `PlanSim.*`, `CommandSim.*`,
`CoordinationSim.*`, new `SquadPolicy.*`/`NeuralSquadSim.*`, `BattleSim.h` config,
`tools/battle_cli.cpp`, `tools/neural/`, and explicit neural support in `tools/loop/`.
Exact interfaces belong to stage 1. Keep new inference dependencies optional for
ordinary simulation tests.

The callback permits the current `Simulate` call to remain alive with its RNG,
projectiles, message queues, paths and caches intact. Python responds at squad
decision points. Each worker should handle successive resets/battles without a new
process per action. A public reset/step refactor or Python binding becomes useful
if measured IPC or reset overhead warrants it; it is not a prerequisite for the
first imitation model.

All squads share weights but produce separate trajectories. With asynchronous
decisions, complete a transition on that squad's next decision or battle end;
record elapsed time, the old mask, chosen action, log probability and rewards over
the interval. The next squad queried is not automatically the previous squad's
next state. Shared team reward avoids making squads compete for kill credit.
Exploration uses a policy RNG separate from combat RNG. A centralized training
critic is optional; privileged data must have a separate typed training path and
never enter actor features, normalization, candidates or recurrent state.

Use Python/PyTorch for training and a small native CPU scorer for the first fixed
MLP if export checks support it. ONNX Runtime remains an alternative if model
complexity justifies it. Memory plus action masks and asynchronous multi-agent
discounts require tested integration; current SB3 MaskablePPO does not supply all
three. Prefer an existing masked PPO baseline for a simplified first experiment;
budget an explicitly tested extension for the full collector. A short custom PPO
implementation is not automatically a reliable one. See the linked research for
primary sources and library limitations.

## Training and evidence

Use imitation to establish competence and expose missing observations, then RL to
explore beyond the teacher. Record demonstrations by instrumenting the matching
source and verifying that the instrumentation leaves decisions/digests unchanged.
Historical binaries cannot be retroactively fitted with a recorder; summary scores
and videos are not valid observation/action labels. A teacher winner absent from
the new candidate set is a mapping failure to fix or exclude and report, never an
invented `hold` label.

Begin with attainable generated city encounters and expand to full static-defence
attacks, moving opponents, defending, varied equipment/stats and leadership losses.
Train on many procedurally generated maps beyond the 60 established development
battles. Retain those battles for regression comparisons. Self-play comes after
fixed opponents establish that the controller learns useful behaviour.

Start rewards from actual objective progress/completion and friendly losses. The
old normalized casualty trade-off is a baseline to discuss, not a complete general
combat reward. Do not reward firing or movement for their own sake. If adding time
pressure or shaping, verify that it does not buy speed through reckless losses.
Use conduct guards for inactivity, exposed waiting, cohesion, friendly fire and
useful flanking, plus Jordan's replay verdict.

Separate training maps, repeatedly used validation maps and a final unopened
promotion set. Repeatedly selecting checkpoints on a fresh draw still makes those
results part of development. Compare neural and Legacy on the same maps and seeds,
cluster uncertainty by map, and use multiple training seeds. Neural improvement
is currently unproven.

## Astra resolutions of the Fable review

1. **Candidate restrictions are partly policy.** The inspected code excludes
   windows, uses fixed distance/elevation bands, requires protection, excludes a
   15 m area around failed moves and prioritizes specific flank geometry. These
   are not all physical legality. Stage 1 classifies restrictions as physical,
   authorized command/execution contract, or optional tactical preference. Retain
   user-ratified rules unless explicitly changed; measure their limits honestly.
   Also audit early returns and post-choice release gates: replacing only scores
   leaves much of the old decision layer in control.
2. **Parity and widening are separate changes.** Extract the legacy adapter first
   with the identical candidate set, RNG order and cache effects. Widen only in
   the neural path afterward. Protect old-controller control runs; defenders need
   not produce identical trajectories when a different attacker shoots at them.
3. **Time limits require semantics.** A 600 s deadline that determines game outcome
   is terminal and needs remaining time in observations. A shorter collection
   cut-off in an ongoing game is truncation and may bootstrap. Do not always label
   the current battle deadline truncation. For variable intervals, discount reward,
   bootstrap and GAE consistently by elapsed time; do not adopt 0.995/sec without
   checking the resulting planning horizon.
4. **Memory and model identity affect simulation state.** Future recurrent state
   must be included in decision checkpoints/state verification or reproducibly
   rebuilt with an explicit check. Excluding it categorically from state digests
   would hide divergences. Preserve only knowledge legitimately available after
   succession or merge.
5. **Determinism must be demonstrated.** Explicit native loop order and compiler
   settings help but do not prove cross-platform equivalence. ONNX is not uniquely
   subject to floating-point differences. Test realistic boundary observations,
   near-tied scores, masks and chosen actions as well as logit tolerance; preserve
   model/schema/normalizer/runtime hashes and decision traces. Random-vector tests
   alone are insufficient. Display scores and evidence, not fabricated verbal
   explanations of why a neural network chose something.
6. **Imitation failure is a diagnostic.** It can reveal label mismatch, candidate
   omissions, insufficient model capacity, execution differences or observation
   gaps. Fable's suggested 0.03 score tolerance is not a settled acceptance rule.
   Likewise, one conduct failure does not by itself prove reward hacking.
7. **Compute thresholds need measurement.** Fable's three-battles/minute pivot and
   12–14 workers are unsupported here. Benchmark before choosing them. Low
   throughput does not automatically make evolutionary search more efficient.
   GPU access remains unverified; use available hardware after checking it, with
   no purchases or paid cloud runs assumed.
8. **Later parameters remain proposals.** Disabling the covering pair, altering
   leader pace, or changing shattered-squad rules may conflict with Plan 023 user
   rulings. Keep those rules in the initial executor. Propose any changes with
   concrete behaviour evidence. A new lineage and trait inputs are recommended;
   neither means silently accepting every older controller-specific test for the
   new network or weakening existing checks.

## Original sequencing and remaining design choices

The first implementation deliverable should be the policy connection, unchanged
Legacy replay checks, and a decision dataset/throughput report. That makes training
cost and the initial action space concrete before a large run. The current CPU
and memory support starting that work; full training time remains unknown.

The main scope choice is whether Jordan wants the limited ranker as the first
playable neural milestone or wants the broader intent layer before judging it.
Recommended: ranker first, explicitly followed by expanded squad authority. Treat
doctrine and officer traits as inputs from the start, while testing that they have
meaningful effects. New reward trade-offs and changes to established squad conduct
remain Jordan's design decisions. This consultation does not require resolving
those choices to deliver the proposed architecture.

## Pilot replay assessment — 22 September

Jordan judged the imitation bootstrap successful and flagged lingering soldiers in
the regression clip. The [Astra/Fable assessment](024-pilot-assessment.md) records
the actual generalization evidence, initial outcome reward proposal, commitment
prerequisite and next-stage scope. It does not promote the model or launch PPO.

## Authorized active-Legacy reward pilot — 22 September

Jordan said to proceed, train the next phases against active Legacy rather than
static defenders, and asked how the neural policy gains more options. The
[implementation and experiment report](../docs/NEURAL_LEGACY_RL_PILOT.md) records
the bounded PPO stage and separate wider-candidate experiment. The exact Fable
[architecture](024-legacy-rl-fable-design.md) and
[implementation review](024-legacy-rl-fable-review.md) are preserved; Astra's
resolutions are in the report. This authorization supersedes the earlier statement
that PPO had not been launched. Promotion still needs the unchanged checks and
Jordan's replay verdict.


**Reward-pilot result:** implemented on `d73667841df73faa`; 384 training battles
against active Legacy, 780 evaluation battles, three short paired videos. Selected
RL is 17/3/25 on 45 reserved-map battles against Legacy 17/6/22; wider choices are
17/2/26. No reliable gain; not promoted. All tested battle/conduct guards pass,
but static-validation attack score regresses by 0.0329. The report above contains
all native/build/test evidence and the preserved models. These inspected maps are
now regression data for subsequent iterations, not an unopened promotion set.
