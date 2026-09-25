# Longer neural training against active Legacy

Completed **2,880 training battles / 1,527,606 decisions**, three seeds at 40 PPO updates each, plus **1,620 evaluation cases** (90 cached identical control cases) and six video regenerations. Legacy remains default; no model is promoted.

The development-only choice was **rl25-i040**. The fresh-map comparison below was run after freezing that choice. All three final seeds are included regardless of their development ranking.

## Fresh maps: 25 cities, three battle seeds each

| Azure controller | Wins | Draws | Losses | Own loss | Enemy loss |
|---|---:|---:|---:|---:|---:|
| continuation | 35 | 2 | 38 | 59.6% | 56.5% |
| imitation | 35 | 6 | 34 | 58.5% | 55.7% |
| legacy | 23 | 6 | 46 | 59.5% | 54.8% |
| rl24-i040 | 35 | 4 | 36 | 58.6% | 56.9% |
| rl25-i040 | 31 | 4 | 40 | 59.7% | 57.4% |
| rl26-i040 | 32 | 4 | 39 | 59.4% | 57.8% |

Mean paired win-minus-loss effect of the three final seeds (average within each case; map-cluster 95% interval):

- Against legacy: +0.2311 [+0.0089, +0.4667].
- Against imitation: -0.0889 [-0.3778, +0.1868].
- Against continuation: -0.0356 [-0.1956, +0.1200].

This duration experiment does not establish a reliable average outcome improvement over both Legacy and untrained continuation on the reserved maps. Inspect individual seeds and development curves below; more training is not demonstrated to solve the problem.

These intervals measure new-map uncertainty for three realized policies. They do not establish reliability over arbitrary training seeds, opponents, map generators or battle seeds. Development checkpoint selection is exploratory. No final-map result was used to retune training.

## Fixed development learning curves

Values are wins/draws/losses over the same 30 cases; the untrained continuation control and Legacy are in the saved summary.

| Update | Seed 24 | Seed 25 | Seed 26 |
|---:|---|---|---|
| 4 | 13/2/15 | 15/0/15 | 15/2/13 |
| 5 | 13/1/16 | 15/1/14 | 14/2/14 |
| 10 | 15/1/14 | 15/1/14 | 15/1/14 |
| 15 | 13/2/15 | 14/1/15 | 15/1/14 |
| 20 | 13/5/12 | 12/2/16 | 17/2/11 |
| 25 | 13/1/16 | 15/2/13 | 12/3/15 |
| 30 | 12/2/16 | 16/2/12 | 15/1/14 |
| 35 | 12/0/18 | 14/2/14 | 14/2/14 |
| 40 | 11/2/17 | 18/1/11 | 17/1/12 |

## Conduct and historical regression

Fresh-map ordinary guard failures by arm: `{"continuation": ["friendly_fire"], "imitation": [], "rl24-i040": ["friendly_fire"], "rl25-i040": ["friendly_fire"], "rl26-i040": ["friendly_fire"]}`.
Historical battle/conduct guards: `{"zero_shot": true, "firing_squads": true, "attacker_firing_squads": true, "under_2m": true, "orders_azure_per_minute": true, "orders_ember_per_minute": true, "friendly_fire": true, "force_at_the_fight": true, "fights_from_cover": true, "seen_at_the_fight": true}`. External loop gates are not claimed as a promotion bundle.
Static-defence town-attack-dev attack-score difference: -0.0163 [-0.0668, +0.0417].
Static-defence town-attack-val attack-score difference: -0.0330 [-0.0649, +0.0001].

Static defenders were used only for regression. They were never training opponents.

## Short matched videos

Legacy is on the left, the selected model on the right; both face active Legacy. Cases are ranked by development reward difference. Each clip covers battle seconds 60–360 at 10×. All six regenerated digests match their evaluation rows. Videos were decoded automatically; that is not a human visual verdict.

- [Best development case](/home/jchan/ww1-autobattler/.local/plan024/long-rl/videos/best/city-907-overview.mp4) — map 907, battle seed 109.
- [Typical development case](/home/jchan/ww1-autobattler/.local/plan024/long-rl/videos/typical/city-906-overview.mp4) — map 906, battle seed 108.
- [Worst development case](/home/jchan/ww1-autobattler/.local/plan024/long-rl/videos/worst/city-908-overview.mp4) — map 908, battle seed 109.

## Verification and reproduction

All final policies and the selected checkpoint passed Linux native-versus-PyTorch inference checks on 2,000 recorded decisions each. Eight neural training tests passed. The evaluator now uses the spawn process method because the sandbox forbids the default forkserver socket; no training math or simulator code changed. Training, initial model, native binary and guard hashes remained fixed.

The previously verified native source d73667841df73faa is reused. Full simulator/Unreal builds were not rerun for this experiment. The automatic duration pipeline did not perform new Windows checks of these final policies or obtain a new Fable assessment of these training results. The access restrictions described in its original template have since been resolved. Later optimization builds and Fable code reviews are separate evidence; they do not establish Windows validation of these final policies or Fable approval of the training outcome.

Three independent trainer processes each used four persistent lean battle workers; development used four additional workers. The first measured updates took about 3.5 minutes concurrently. Training row order differs from the previous 12-worker pilot, so update4 inside each new run is the short-budget reference.

[Experiment plan](../plans/024-longer-rl-experiment.md). Exact specification, hashes, training reports, checkpoints, complete evaluation rows, selection and logs: `.local/plan024/long-rl/`. Experimental policies: `models/squad/plan024-legacy-rl-duration-v1/`. Final maps 1101–1125 are now inspected and cannot be reused as unopened promotion evidence.
