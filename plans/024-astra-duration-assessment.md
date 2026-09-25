# Independent Astra review of the longer neural training experiment

22 September 2026. Requested explicitly by Jordan after the external model attempts
failed. Reviewer: `/root/astra_training_review`, an independently spawned Astra
agent in this thread. The reviewer inspected source and live evidence read-only;
it did not edit files, interrupt training, inspect reserved final maps, or watch
videos. Snapshot: nine completed updates per training seed.

## Reviewer response

**Finish the fixed 40-update experiment. It is informative, but stronger squad AI
remains an open question. I found no concrete defect in the inspected learning
path that warrants stopping the active run.**

The design controls the important comparisons: unchanged reward and authority,
three training seeds, an untrained schema-3 control, development curves, selection
before fresh-map evaluation, and all three final seeds evaluated. Using this
run's update 4 as its short-budget comparison correctly handles changed worker
ordering. See the [experiment plan](024-longer-rl-experiment.md).

The implementation separates actor observations from privileged critic inputs,
computes returns along each squad's own decisions, terminates completed battles
correctly, and excludes single-choice rows from actor optimization. Those are
sound choices. Evidence: `tools/neural/actor.py:53`, `worker.py:68`, `ppo.py:47`.
This read-only assessment is not a replacement for the recorded tests or a proof
of correctness.

### Three highest-priority risks

1. **Many decisions have limited immediate influence, making credit assignment
   difficult.** The actor picks from two heuristic-selected destinations per
   maneuver family; preparation and support gates still decide when movement
   starts. Successful active maneuvers and effective flank positions can bypass
   neural selection entirely. Evidence: `ManeuverSim.cpp:395`, `:270`, `:503`.
   Across the inspected nine updates per seed, approximately **55–61% of receipts
   were support_wait; only 2.5–2.9% were committed**. These are decision counts,
   not time spent idle; waiting decisions can still affect future plans. PPO gives
   each eligible decision a training row, so repeated waiting situations can
   dominate experience. Shared team casualties and a 30-second GAE trace make it
   difficult to identify which earlier maneuver helped. The trace multiplier
   across 120 seconds is 1/16, although critic bootstrapping can carry longer-term
   value (`returns.py:30`). This is a plausible bottleneck, not an established bug.

2. **Training and deployment execute different policies.** Training samples
   actions; native deployment selects the highest score (`worker.py:91`,
   `SquadPolicy.cpp:48`). Across the inspected updates, sampled argmax share was
   approximately 61–69%. Improved sampled return therefore would not establish
   improved deployed behavior. Small score changes can flip greedy decisions
   near ties. The existing deterministic development evaluation is essential.

3. **The fixed imitation anchor may limit useful departures, but this has not
   been demonstrated.** Every update penalizes deviation from the original actor
   with coefficient 0.05; the reference never follows the learned policy
   (`ppo.py:102`, `:65`). Conversely, that anchor can protect useful imitation
   behavior. All 27 completed updates inspected had finite reported KL and no
   actor early stop, so the 0.02 stopping threshold is not currently shown to be
   the bottleneck. The parent's separate action probe demonstrates that rankings
   can change; it does not demonstrate tactical improvement. Do not remove the
   anchor merely because the pilot failed.

### Evidence and next measurements

The pilot weighs against claiming success for this setup: its development winner
did not improve reliably on reserved maps, and static-validation performance
regressed. It does not establish that this architecture cannot learn or that
neural squad control is generally inferior. The current incomplete development
report cannot settle either question. Training rewards fluctuate across different
sampled battles and alone are not a learning curve on a fixed test.

After update 40, prioritize:

- Paired deterministic development curves for every seed versus its own update 4
  and untrained continuation; report both win/loss outcome and training reward.
- Fresh-map results for all final seeds and the preselected checkpoint, with
  map-cluster intervals. Twenty-five maps, not 75 fully independent maps, and
  three training seeds limit certainty.
- Preparation resets, commit frequency, support waiting, action changes, critic
  prediction quality, and advantages grouped by decision outcome.
- Conduct regressions and the requested videos before promotion.

**Preferred follow-up:** evaluate the same frozen checkpoints with sampled versus
greedy action selection on development scenarios, using several explicit policy
sampling seeds and matched combat seeds. This needs no retraining and isolates a
concrete uncertainty cheaply. If sampled policies improve while greedy policies
do not, deployment alignment becomes the next target. If neither improves, more
compute alone is a weak prescription; investigate credit assignment and effective
action authority first.

## Lead Astra's disposition

I agree with completing the fixed experiment. No reviewer finding requires a
training change or interruption. The risks are hypotheses to diagnose, not proven
causes of the pilot's result. Preserve the reward, anchor, action authority,
training budget, selection rule and unopened final-map boundary.

The recommended sampled-versus-greedy comparison is a follow-up proposal; it has
not been run or silently added to the current experiment. The current deterministic
checkpoints already test the policy that would actually be deployed.

Separate local checks during this review confirmed frozen training/native/guard
hashes, identical initial actors across seeds and absent final-map directories.
Evidence: `.local/plan024/long-rl/assessment-integrity.json`.

A descriptive probe of the first 500 training observations per seed found update9
versus initial argmax changes of 29/500, 178/500 and 33/500 for seeds 24,25,26;
versus update4, 17/500,147/500,12/500. Panels differ by seed, and this establishes
ranking changes only, not tactical gains. Evidence:
`.local/plan024/long-rl/assessment-action-probe.json`.
