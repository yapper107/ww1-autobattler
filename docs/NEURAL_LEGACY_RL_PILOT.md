# Neural squad learning against active Legacy

The first reward-training stage is implemented, with 384 active-Legacy training
battles and 780 evaluation battles. **It is not an improvement to promote yet.**
On 45 reserved-map battles, selected RL seed 25 wins/draws/loses 17/3/25 against
Legacy's 17/6/22. The wider-choice model is 17/2/26. Paired intervals include zero,
and the selected model regresses on the separate static-validation attack score.
All tested battle/conduct guards pass. The three short videos are linked below.

Jordan authorized this stage on 22 September 2026: train against active Legacy
Plan 023 opponents, retain the lean benchmark workflow and short paired videos,
and separately test a wider choice of maneuvers. Legacy remains the game default.

## What changed

The actor still selects a maneuver and destination for Azure at the existing
comparison points. Plan 023 carries out movement, bounds, cover, succession and
squad coordination. This is a limited squad ranker, not a replacement for every
soldier or platoon decision.

Schema 3 adds a legal **continue the pending plan** action (KEEP) and its feature.
It preserves the preparation clock instead of repeatedly restarting it. A committed
plan clears that clock. Active bounds still finish through the existing executor.
A separate experiment expands the routed candidate shortlist from two to six per
maneuver family, up to 30 candidates plus hold and KEEP. The additional choices
retain existing cover, route and tactical restrictions. They add destinations,
not hidden enemy knowledge or new physical abilities. In the first 2,000 recorded
training decisions, the narrow run had a mean 9.663 legal choices (maximum 12);
the wide run had 24.765 (maximum 32). These are descriptive samples from diverging
trajectories, not a matched estimate of tactical benefit.

The first schema-3 model copies the imitation weights and initializes its new
feature weight to zero. It is an explicit comparison arm: changing the interface
can change behavior even before learning. Schema-2 models retain their old path.

## Training contract

Persistent native workers run ordinary generated-city battles with Azure under
the external actor and Ember under active Legacy. They keep lean records and
reset all battle state for every episode. The protocol checks the episode,
decision sequence, legal mask and exact map-file identity. Sampling uses a Python
random stream, separate from the combat RNG. The external policy is marked in
configuration, exports and the digest; choices are recorded for reproduction.

The actor receives permitted squad observations. Global casualty counts and time
are supplied separately to the training-only critic and reward calculation. They
are not appended to actor input. Teacher scores are absent from worker messages.

The team reward is enemy loss fraction minus own loss fraction, plus 0.25 for a
win or minus 0.25 for a loss. A draw adds zero. There are no points for merely
moving or firing. A completed 360-second battle is terminal. The finite-horizon
pilot uses no reward discount; GAE has a 30-second trace half-life. Each squad's
successive decision intervals receive their intervening events, and its final
interval receives the terminal bonus once, even if that squad stopped deciding.

Masked PPO starts from the imitation model: clipping 0.2, actor learning rate
0.0001, critic 0.0003, entropy coefficient 0.003, frozen-imitation KL coefficient
0.05. Full-batch approximate KL above 0.02 stops actor updates after an epoch;
critic fitting continues. Single-choice observations remain in trajectories and
critic fitting but do not enter actor normalization or policy loss.

The sampling temperature is calibrated on the earlier teacher observations, so
its 0.7 target confidence is not a measured schema-3 rollout confidence. Actual
maximum probability, entropy, sampled argmax share and KEEP availability are
reported separately for every training iteration.

## Experiment specified before evaluation

- Training: procedural map seeds 701–760, battle seeds 107–109, 360 seconds.
- Narrow shortlist: training seeds 24, 25 and 26; four updates of 24 completed
  battles each, 96 battles per seed. Use each run's final checkpoint.
- Wider shortlist: seed 24, identical battle budget and map-sampling seed.
- Development: maps 901–910, three battle seeds each, paired across all arms.
- Final held-out evaluation: maps 1001–1015, three battle seeds each. Among narrow
  seeds passing ordinary guards, select highest development win-minus-loss. If
  none pass, select the highest as diagnostic only. Ties favor fewer Azure losses,
  then lower training seed. Evaluate wide seed 24 separately. Do not tune on this set.
- Comparisons: frozen Legacy, original imitation, untrained schema-3 continuation,
  trained narrow actors, and wide actors. The unchanged ordinary-city conduct
  guards are paired against Legacy. Static attacks and trenches remain the
  existing separate regression bundle; they are not the training objective.

This is a small first reward-learning experiment. Multiple seeds describe some
training variation; a single wider run does not establish a general advantage for
larger action spaces. The splits use disjoint map seeds but the same three battle
seeds and city generator; this is map generalization, not a test of every possible
opponent, terrain generator or combat seed. None of the held-out map directories
existed when the split audit was recorded. Reusing held-out results for tuning would make them
additional development data.

## Actual Fable consultation and Astra resolutions

The exact `claude-fable-5-1` architect supplied the
[design](../plans/024-legacy-rl-fable-design.md) and
[implementation review](../plans/024-legacy-rl-fable-review.md), using the existing
subscription launcher. Fable did not modify the checkout.

1. Added an untrained schema-3 arm to distinguish interface changes from learning.
2. Moved KL stopping to a full-batch epoch statistic; critic fitting continues.
3. Excluded single-choice rows from actor loss and advantage normalization.
4. Reported actual rollout confidence beside the older calibration target.
5. Opened native map files in binary mode, preserving CRLF byte identity.
6. Guarded the external callback at the direct maneuver entry point.

Two limits on the review's wording: not every inherited early return clears a
pending plan, and an untrained schema-3 actor need not reproduce schema-2 gameplay.
The comparison arm measures that difference rather than assuming equivalence.
The review also called categorical KL mask-safe; the real rollout later exposed
legal-probability underflow, a separate issue from doubly masked actions, repaired below.

The first larger update stopped with a nonfinite loss before producing a trained
model. Replaying the old KL on real rollout rows reproduced an infinite KL when a legal
probability underflowed despite finite log probabilities. The implementation now operates directly on finite log probabilities:
float32 can underflow a legal softmax probability to zero while its log probability
is still finite. Masked logits use a finite floor. A targeted underflow regression
and a four-epoch update on 2,000 real observations pass; rollout snapshots are now
saved before learning. Failed attempts are excluded from model-quality evidence.

## Results and validation

All bounded runs and paired evaluations are complete. Build compatibility and
tactical performance are reported separately below.

### Implementation verification

Native simulation fingerprint: `d73667841df73faa`. The frozen Plan 023 reference
is `45da1e25dd1aa9e7`.

- Full Linux simulation suite: exit 0 (428.5 seconds).
- Python tools and learning contracts: 134 tests pass.
- Historical/city recording parity: 41/41 pairs, without replacing references.
- Trace parity: three scenarios plus a determinism repeat pass.
- Linux and Windows native neural contracts: 159 passive decisions retain parity; 200 KEEP
  selections produce four commits without resetting preparation on every choice.
- Persistent-worker repeated episode: identical actions, action hash, battle digest,
  winner and survivors after RESET.
- Unreal 5.8 build: succeeds.
- Existing schema-2 neural replay: unchanged gameplay digest
  `2372919768571971356`.

These checks establish compatibility and implementation properties. The existing
loop-specific external promotion gates are not claimed as a completed bundle.

### The soldiers left behind in the earlier regression clip

At 440 seconds of the original imitation city-28, battle-seed-108 replay, six of
Azure's nine surviving soldiers had `RearGuard` orders: IDs 3, 7, 8, 15, 22 and 29.
All six had health below 55. The inherited `KnowsWounded` / `RearPosition` branch
in `CommandSim.cpp` explicitly assigns known wounded soldiers that task. Two other
survivors had Advance orders and one had Hold.

This explains part of the visible separation as inherited wounded-soldier
behavior. A snapshot does not establish the cause of every prolonged wait or
whether every rear position was good. The maneuver ranker does not override those
individual task rules. Reward learning must therefore be judged on what it can
actually control; this pilot does not claim to have repaired every straggler.
The extracted evidence is `.local/plan024/rl/old-regression-440s.json`.

### Completed training

All four fixed-budget runs completed. Every run used 12 lean workers and 96
ordinary battles; no static-defence battle contributed reward. Each final model
passed 2,000 actual-observation native/PyTorch decisions on both Linux and Windows,
with zero action disagreements.

| Run | Decisions | Distinct training maps | Wall minutes | Peak worker MiB |
|---|---:|---:|---:|---:|
| seed24 | 46,585 | 48 | 5.98 | 388.1 |
| seed25 | 56,058 | 51 | 6.05 | 388.0 |
| seed26 | 45,346 | 50 | 6.11 | 388.1 |
| wide24 | 47,788 | 48 | 7.19 | 387.5 |

Total: 384 training battles and 195,777 decision samples. Maps and battle seeds
can recur across updates; the count is not a count of unique scenarios. The failed
first attempt is excluded. Timing includes concurrent evaluation work on the host.

Artifacts and per-run provenance are in
[`models/squad/plan024-legacy-rl-v1/`](../models/squad/plan024-legacy-rl-v1/).
Each model remains experimental. Training records and complete sampled action
lists are in `.local/plan024/rl/{seed24-v2,seed25,seed26,wide24}/training.json`.

### Development: 30 matched active-Legacy battles per arm

| Azure controller | Wins | Draws | Losses | Own loss | Enemy loss |
|---|---:|---:|---:|---:|---:|
| legacy | 15 | 4 | 11 | 57.3% | 58.3% |
| imitation | 9 | 4 | 17 | 62.3% | 54.5% |
| continuation | 15 | 1 | 14 | 59.3% | 58.6% |
| rl24 | 15 | 2 | 13 | 58.3% | 58.9% |
| rl25 | 17 | 1 | 12 | 57.7% | 58.5% |
| rl26 | 14 | 3 | 13 | 58.8% | 59.2% |
| continuation-wide | 14 | 0 | 16 | 60.6% | 58.9% |
| wide24 | 15 | 1 | 14 | 58.4% | 58.9% |

All neural arms pass the unchanged ordinary-city guards on these 30 cases.
The predeclared selection rule picks **rl25** among the three final narrow
checkpoints. Its paired win-minus-loss difference versus Legacy is +0.033,
95% map-cluster interval [-0.333, +0.400]. Against the untrained continuation arm
it is +0.133 [0.000, +0.333]. Neither interval establishes a strict positive gain.
The comparison with the original imitation model also includes interface changes.

The wider actor is level with the untrained narrow continuation arm on mean
outcome. A single wider seed and ten maps do not establish whether wider action
spaces help with more training. No checkpoint or hyperparameter is changed after
these results. The reserved set tests the selected final checkpoint once.

The complete 240-row batch is `.local/plan024/rl/development/report.json`; the
portable summary is stored beside the model artifacts. Rows include model hash,
native build, exact map identity, seeds, conduct metrics and paired comparisons.

### Short paired videos

Each clip is 30.04 seconds at 10× speed, showing battle seconds 60–360. Legacy is
on the left; selected RL seed 25 is on the right. Both face active Legacy. Cases
are ranked by the candidate-minus-Legacy team reward on development only: highest,
middle and lowest. These examples are not the aggregate result.

- [Best case: city 902, battle seed 108](/home/jchan/ww1-autobattler/.local/plan024/rl/videos/best/city-902-overview.mp4): reward difference +1.031.
- [Typical case: city 901, battle seed 108](/home/jchan/ww1-autobattler/.local/plan024/rl/videos/typical/city-901-overview.mp4): reward difference -0.094.
- [Worst case: city 908, battle seed 109](/home/jchan/ww1-autobattler/.local/plan024/rl/videos/worst/city-908-overview.mp4): reward difference -0.938.

All six regenerated battle digests match the corresponding evaluation rows.
All MP4s decode at 25 fps; rendered previews were inspected for labels, units and
comparison layout. This is format verification, not a claim that every moment of
the clips has been visually reviewed.

### Full Plan 023 regression bundle

All 270 paired lean battles completed: 60 development attacks, 45 separate
validation attacks, 20 ordinary towns and 10 trenches, each for Legacy and the
selected model. All 10 battle/conduct guards pass. The benchmark does not
populate its six external loop-gate slots; standalone build/test/parity evidence
is reported above, and a complete loop promotion bundle is not claimed.

The static-attack objective is level on development: 0.8094 against Legacy's
0.8102, paired -0.0009 [-0.0468, +0.0508]. It is worse on the validation draw:
**0.8030 against 0.8359**, paired **-0.0329 [-0.0627, -0.0036]**. The model clears
40/45 validation attacks; Legacy clears 43/45. This is a regression of the selected
model versus Legacy; this two-arm regression batch cannot attribute it specifically
to PPO versus the schema-3 interface change.

Azure order rate on the original ordinary-town set is +8.64/minute relative to
Legacy [-10.28, +28.55], which passes the unchanged churn guard. Passing that guard
does not mean order churn has been eliminated or that its mean is lower than
Legacy's. Straggler share on static validation is 8.88% versus Legacy's 8.37%; the
pilot does not establish a general fix for soldiers left behind.

Static defenders remain a regression scenario, not a training opponent. The raw
report is `.local/plan024/rl/regression/report.json`; the portable summary sits
beside the model artifacts. Wall time was 17.1 minutes with
seven workers alongside the separate held-out evaluation.

### Reserved maps: final result

All 270 battles completed: six arms on the same 15 previously unused city maps,
three battle seeds per map. Selection was fixed before opening this result.

| Azure controller | Wins | Draws | Losses | Own loss | Enemy loss |
|---|---:|---:|---:|---:|---:|
| legacy | 17 | 6 | 22 | 57.6% | 57.7% |
| imitation | 22 | 3 | 20 | 56.8% | 58.6% |
| continuation | 19 | 2 | 24 | 59.0% | 57.6% |
| rl25 | 17 | 3 | 25 | 60.1% | 56.1% |
| continuation-wide | 18 | 2 | 25 | 59.7% | 56.9% |
| wide24 | 17 | 2 | 26 | 59.4% | 56.7% |


**No demonstrated reward-learning gain.** Selected RL seed 25 versus Legacy has a
paired win-minus-loss difference of -0.0667 [-0.4444, +0.2889]. Versus untrained
continuation it is -0.0667 [-0.2667, +0.1333]. The wider actor versus Legacy is
-0.0889 [-0.4222, +0.2444]. These intervals include zero; the raw outcomes also do
not support promotion. The original imitation actor won more on this draw, unlike
development, which illustrates why the development ranking alone was insufficient.

All ordinary-city battle/conduct guards pass. The selected model's straggler
share is 0.50 percentage points lower than Legacy [-1.22, +0.32 points], and order
rate is 6.89/minute lower [-16.76, +3.07]. Neither establishes a reliable reduction.
The failed static-validation objective is reported separately above.

The wide run provides more candidate choices, but this single seed with the same
small training budget shows no benefit. No weights or settings were changed after
reserved-map evaluation. **Legacy remains default; neither RL artifact is promoted.**

Total completed evaluation: 240 ordinary development battles, 270 reserved-map
battles, and 270 historical regression battles: **780**, plus the six video
regenerations. Training is separate: 384 battles. The final report is
`.local/plan024/rl/heldout/report.json`; portable results and the experimental
selection record are beside the saved policies.

### What this establishes and what remains

The persistent-worker PPO connection, native model export, continuation action
and wider candidate variant are implemented and reproducible. The first bounded
experiment has not established tactical improvement. Four updates per seed are
limited evidence about what PPO could eventually learn. The candidate shortlist,
observations and inherited execution gates still limit its authority.

Before increasing squad authority, the next useful investigation is a matched
action/commit comparison against the untrained continuation control, followed by
longer active-Legacy training with a predeclared budget. This report does not claim
that simply training longer will fix it. These now-inspected maps become regression
evidence for any further tuning; reserve fresh maps for a future promotion test.
