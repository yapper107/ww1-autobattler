# Pilot verdict and transition to reinforcement learning

22 September 2026. Jordan judged the imitation model to have done its job, noted
that the first two clips looked good and that the regression clip left soldiers
behind, and asked for Astra/Fable's assessment and whether reward training comes
next. This is an assessment and next-stage recommendation, not model promotion
or a launched PPO run.

The [exact Fable 5.1 response](024-pilot-assessment-fable.md) and
[request](024-pilot-assessment-request.md) are preserved. It inspected the report,
provenance, relevant implementation and three actual video snapshots. It did not
watch the movies. Astra agrees that this is a successful imitation starting point,
that new-map performance is encouraging within static-defence attacks, and that
outcome-driven training is the next stage. Explicit plan continuation/commitment
semantics should be established before exploratory PPO rollouts. The interface
work and focused straggler diagnosis can proceed alongside training infrastructure.

## Evidence and corrections to the attributed response

- The validation set is **45 battles on 15 maps**, not 45 cities. Maps were absent
  from imitation training and checkpoint selection. Neural cleared 44/45, Legacy
  43/45. Paired score delta +0.01285, 95% map-cluster interval [-0.00590,+0.03194].
  This is encouraging transfer within a mission family, not proof of improvement,
  universal generalization, or formal equivalence. One training seed was tested.
- Native Linux and Windows agree with PyTorch on all 2,000 checked decisions.
  The bit-identical whole-battle rerun was verified on Linux. Whole-battle
  cross-platform replay equivalence was not established and is not claimed.
- Symmetric city tests were 20 battle pairs with behavioral guards, beyond a
  simple no-crash smoke test; trenches were 10 smoke pairs. Neural city wins were
  12 versus 10, trenches 2 versus 3, descriptive only. The significant Azure
  order-rate increase was in symmetric cities, not the static attack sets.
- Existing result rows already contain the cohesion/participation measurements;
  re-running all 60 development pairs to obtain them is unnecessary. Astra
  recomputed paired summaries from the original rows, saved in
  `.local/plan024/pilot-assessment-metrics.json`:
  * Development straggler share delta -0.00560 [-0.01255,+0.00189]; behind-corporal
    delta -0.01020 [-0.02784,+0.00681]; replaced-before-arrival delta +0.00333
    [-0.00617,+0.01157].
  * Validation straggler share delta +0.00433 [-0.00665,+0.01434]; behind-corporal
    delta +0.01413 [-0.00913,+0.03747]; replaced-before-arrival delta -0.01045
    [-0.03052,+0.00583]. No reliable aggregate direction is established.
- City28/seed108 straggler share is 6.65% neural versus 10.76% Legacy despite the
  visually observed lingering. This metric requires >40 m from the squad centre
  and 60 seconds without firing; shorter or closer episodes can be missed. This
  does not dismiss the user's observation. Trace individual orders, intended
  stations, firing role, path progress, attachment and selected/committed plans
  before deciding its cause. A screenshot cannot assign fault to the ranker or
  executor. Active movement also has early returns retaining control outside
  policy comparison points; the ranker does not always reconsider active plans.
- Model capacity has not been ablated. Fable's assertion that capacity is not the
  limit is a hypothesis; the demonstrated restriction is limited action authority.
- Fable's four proposed new hard cohesion guards are not user rulings. Keep the
  existing guards; add diagnostic reporting first. Do not invent thresholds.

## Subsequent user ruling: active Legacy opponents

Jordan subsequently specified active Legacy AI as the opponent for the next few
training phases, to avoid specialization in static-defence AI. This supersedes the
static-attack reward recommendation below for upcoming training. See
[Plan 024's next-phase opponent ruling](024-neural-squad-layer.md). The original
Fable assessment remains an attributed historical response; it predates this ruling.

## Initial reward recommendation (superseded for upcoming training)

Use the existing attack objective as the first controlled experiment:

    r(interval) = newly neutralized defenders / initial defenders
                  - 0.5 * newly lost attackers / initial attackers

For the current roster the denominators are 12 and 32. Reward is shared team
outcome over each squad's own decision interval, with no private kill credit.
Count each casualty once within an interval. Undiscounted rewards over one complete
squad trajectory sum to the existing casualty objective, provided its trajectory
covers the episode; do not add the same final casualty score again at termination.
Multiple squad trajectories share team events by design and must not be reported
as independent battle returns. Training-only outcome truth must stay outside the
actor's permitted observation path.

No initial points for shots, raw movement, flank labels, staying physically close,
or frequent order changes. Those proxies can reward useless shooting, bunching
or abandonment of legitimate support roles. No new time penalty or terminal clear
bonus is included initially; both change the objective and deserve separate study.
The casualty objective itself does not capture every mission or all tactics.

PPO updates the imitation-initialized policy using newly collected outcomes. Add
persistent lean workers, a value estimator, recorded masks and action probabilities,
per-squad elapsed intervals, and correct end-of-battle handling. A game-defining
600-second deadline is terminal; a temporary collection cutoff is truncation with
bootstrap. Any discount/GAE convention must be specified in seconds; Fable's
suggested 120-second horizon is provisional, not measured or approved. Discounting
also changes the timing preference relative to the undiscounted benchmark.

Check the initial stochastic policy before training: scorer values learned for
ranking are not automatically calibrated exploration probabilities. Compare each
candidate with both frozen imitation and Plan023 on the same cases, train multiple
seeds, keep an experiment-stable development draw and a final unopened map set,
retain conduct checks and short replay review. Candidate widening and broader
missions remain distinct experiments. A reward cannot repair an unavailable
execution action, an unobserved condition, or a broken path/relay.

Primary references checked for this assessment:
[OpenAI PPO documentation](https://spinningup.openai.com/en/latest/algorithms/ppo.html)
and [Gymnasium termination/truncation documentation](https://gymnasium.farama.org/tutorials/gymnasium_basics/handling_time_limits/).
