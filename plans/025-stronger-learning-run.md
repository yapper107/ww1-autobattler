# Plan 025 — stronger-learning PPO run (22 September 2026)

Jordan asked for neural training runs "to see if the Neural AI has promise", at half machine
capacity (a cap file he can raise; running jobs pick up extra slots). He chose the stronger-learning
design from three options. Legacy remains the default; nothing is promoted by this run.

## Why

The completed duration run (plan 024) barely moved its policy: per-update KL was 0.001–0.008, never
near the 0.02 stop, and development results were flat. The choice-authority test
(`tools/neural/authority.py`, `.local/plan025/authority/`) played the imitation model on 30
development maps × 3 seeds against active Legacy:

| Choice | W/D/L |
|---|---|
| greedy (deployed) | 40/9/41 |
| sampled at the training temperature | 47/6/37 |
| uniform random legal | 51/2/37 |

Random minus greedy, win-minus-loss: +0.17 [-0.14, +0.51] (map-cluster bootstrap). The network's
preferences are not shown to beat chance among the options it controls.

## Frozen settings

Unchanged from plan 024:
- imitation start model;
- network 97 → 32 → 1;
- reward: enemy loss fraction minus own loss fraction plus 0.25 × (win − loss);
- active Legacy opponent on training cities 701–760 × seeds 107–109;
- calibrated temperature;
- PPO clip 0.2, 4 epochs, KL stop 0.02, entropy 0.003;
- candidate mode 0.

Changed:
- 72 battles per update (was 24);
- actor learning rate 3e-4 (was 1e-4);
- KL anchor weight 0.01 (was 0.05).

Three seeds (24, 25, 26), 30 updates each. Binary: `.local/lab/battle-lab-train`, source
f28c195b711323f9 (outcomes identical to the frozen d7366 binary).

Development check every 5 updates: greedy play on the same 90 cases as the authority test.
Baselines: imitation 40/9/41 (update 0), random 51/2/37. These maps (901–930) are development
evidence only; no final or reserved maps are opened.

## Reading the result

Promise means the greedy checkpoints move clearly above the imitation baseline on development,
consistently across seeds, and approach or beat random. If KL per update rises but development stays
flat, the choices themselves carry too little value (candidate authority), not the learning strength.

Capacity: `.local/neural/max_jobs` (8 at launch). The three runs split it (3/3/2 at 8).
Output: `.local/plan025/stronger/seed{24,25,26}/`.

## Result (completed 23 September 2026)

All three seeds finished 30 updates (72 battles each). Greedy development checks on the fixed 90
cases, W/D/L; imitation start 40/9/41, uniform random 51/2/37:

| Seed | 5 | 10 | 15 | 20 | 25 | 30 |
|---|---|---|---|---|---|---|
| 24 | 38/12/40 | 38/3/49 | 41/3/46 | 43/4/43 | 46/6/38 | 41/7/42 |
| 25 | 39/9/42 | 40/10/40 | 44/7/39 | 38/10/42 | 41/9/40 | 40/5/45 |
| 26 | 41/2/47 | 39/6/45 | 39/6/45 | 36/6/48 | 36/8/46 | 43/6/41 |

The policy moved more per update than in plan 024: per-epoch KL reached about 0.005–0.017, and one
update stopped early. Development play did not improve reliably in any seed; every checkpoint lies
within noise of the start. The stronger settings do not rescue destination-only authority. Plan 026's
authority measurement explains why: random destination choice matched greedy, while go-now timing
moved outcomes by −0.5 W−L. The next run uses schema 4. Nothing is promoted.
