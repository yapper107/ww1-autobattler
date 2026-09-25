# Plan 027 — first schema-4 training run (go-now timing + map view)

Started under Jordan's overnight instruction of 22 September 2026, recorded in plan 026: "Make any
changes to the neural net training to be improved based on whatever findings you find on these runs",
and if the neural AI looks promising, keep running to refine it. Overseer: claude-opus-5-5. Legacy
remains the default, and nothing is promoted without Jordan's replay approval.

## Why this run

- Plan 025 used stronger learning settings with destination-only authority. The policy moved, but
  development play stayed flat in all three seeds.
- Plan 026 measured authority:
  - uniform random destination choice matched the imitation network;
  - go-now timing changed outcomes significantly (always-now −0.50 W−L [−0.78, −0.24]).

  Timing is a lever the network can learn from. The map view gives it inputs about where releasing is
  safe: known enemies, reported fire, cover, friendlies.

## Frozen settings

- **Binary.** `.local/lab/battle-lab-train`, source 422987091a8601ee (PGO), schema 4 with map view.
- **Start model.** Imitation (`models/squad/plan024-imitation-v1`) → schema 3 → schema 4:
  - `--now-bias -0.15`: the go-now head is a copy of the gates head, offset so each row goes now
    about 5% of the time at the calibrated temperature;
  - map-view embedding seeded, projection zero, so the starting logits equal imitation.
- **Learning** (plan 025 settings):
  - 72 battles per update, actor learning rate 3e-4, KL anchor 0.01;
  - PPO clip 0.2, 4 epochs, KL stop 0.02, entropy 0.003;
  - reward unchanged; candidate mode 0.
- **Opponent and maps.** Active Legacy on training cities 701–760 × seeds 107–109.
- **Scale.** Three seeds (24, 25, 26), 30 updates each. Capacity `.local/neural/max_jobs` = 15.
- **Development check.** Greedy every 5 updates on the fixed 90 cases (901–930 × 107–109).
- **Baselines on those cases:**
  - update 0 = imitation greedy 40/9/41 (never go now);
  - uniform random destinations 51/2/37;
  - Legacy (native CLI, frozen baseline) 48/6/36.
- **Reported each update:** go-now share, outcome shares (`support_wait`, `preparing`, `committed`,
  `committed_now`) and KL.

## What counts as promise

Greedy development results clearly above 40/9/41 and consistent across seeds, reaching Legacy's
48/6/36 or better, with go-now used selectively (not collapsing to 0% or near 100%). If promise shows,
refine per plan 026's overnight instruction. Candidates: longer training, mode 30 candidates after the
throughput check, reward or authority adjustments justified by the curves. Each change gets its own
recorded run. A candidate for promotion then needs fresh reserved maps (1201–1230) and Jordan's replay
review.

Output: `.local/plan027/`.

## Result (completed 23 September 2026)

Three seeds × 30 updates. The go-now share in training stayed at 1–3.5% with no clear trend.

| Seed | 5 | 10 | 15 | 20 | 25 | 30 |
|---|---|---|---|---|---|---|
| 24 | 38/6/46 | 46/4/40 | 40/8/42 | 39/5/46 | 41/3/46 | 44/5/41 |
| 25 | 47/7/36 | 44/2/44 | 46/6/38 | 44/7/39 | 36/7/47 | 47/1/42 |
| 26 | 38/9/43 | 43/6/41 | 39/4/47 | 38/7/45 | 37/4/49 | 37/2/51 |

Paired win-minus-loss against the start (never-now greedy, same 90 cases, map-cluster bootstrap,
`.local/plan027/paired.py`), pooled over three seeds:

| Update | Pooled W−L vs start |
|---|---|
| 5 | +0.004 [−0.133, +0.137] |
| 10 | +0.041 [−0.126, +0.204] |
| 15 | +0.004 |
| 20 | −0.022 |
| 25 | −0.093 [−0.274, +0.089] |
| 30 | −0.011 [−0.167, +0.148] |

**Not promising by this plan's criterion.** No reliable gain, and seeds are inconsistent.

## Next diagnostic (overseer)

On the same 90 cases:
- Legacy's own choice: 48/6/36 (native, P2);
- uniform random legal choice: 51/2/37;
- the imitation network greedy: 40/9/41, with HOLD chosen in 55–59% of decisions (`retain` receipts).

The network does worse than both its teacher and chance. The hypothesis is systematic over-holding
that PPO's noisy team reward has not corrected. Test it without training: greedy play with a HOLD
logit handicap sweep.

## Hold probe result and variance decomposition (23 September 2026)

**Hold probe** (`.local/plan027/hold/`, agent claude-opus-5-5):
- Handicapping HOLD does not help. Offsets −0.2, −0.5 and −0.95 give +0.03, 0.00 and −0.06 W−L against
  greedy; intervals about ±0.2.
- Never-hold loses: −0.256 [−0.467, −0.033].
- The premise was wrong. HOLD is 36.9% of decisions; the 55.5% figure is `support_wait` (a chosen move
  held by the covering-fire gate). Converted holds mostly become `support_wait`.
- Also, imitation vs Legacy on these cases is −0.144 [−0.378, +0.100]: not significant.

**Variance decomposition.** 29 arms on the same 90 cases, 2,610 battles. The case (map and battle
seed) explains 36% of team-return variance and 30% of W−L variance; between-map variance alone is
smaller still. Most outcome variance is battle-to-battle divergence, not scenario difficulty. So
paired or grouped baselines remove only part of the noise, and a team-level return per 6-minute battle
gives weak per-decision credit.

**Next probe: hand-written go-now rules** (timing only, destination greedy). If a simple rule beats
never-now, the action space has real headroom that can be taught directly. The development set is
widened to 270 cases (maps 901–990 × 107–109) for power. Maps 931–990 are diagnostic development
maps, not a promotion set.

## Timing-rule probe result (23 September 2026; agent claude-opus-5-5, `.local/plan027/rules/`)

270 cases per arm (maps 901–990 × 107–109). Timing only; the row is always greedy through the gates.

| Rule | W/D/L | Go-now share | W−L vs never |
|---|---|---|---|
| never | 121/20/129 | — | — |
| protected | 118/15/137 | 3.5% | −0.041 [−0.185, +0.107] |
| supported | 121/14/135 | 0.2% | −0.022 [−0.130, +0.089] |
| strong | 112/15/143 | 5.2% | −0.085 [−0.248, +0.070] |
| withdraw | 124/19/127 | — | +0.019 (7 battles changed) |
| protected+supported | 113/20/137 | 3.9% | −0.059 [−0.196, +0.078] |
| always | 77/7/186 | 13% | −0.374 [−0.533, −0.219] |

`never` reproduces the earlier never-now rows 90/90.

**Findings**
1. No simple rule beats never-now; more go-now does worse.
2. Go-now as built (plan 026 4b, "chained segments keep it") releases the covering-fire gate for every
   later bound of the manoeuvre (`policyRelease`, `ManeuverSim.cpp` ~290, `CoordinationSim.cpp` ~423).
   Even `protected`, which skips only 2 s at a safe start, therefore also skips cover on later exposed
   bounds. This is an interface design flaw of this plan's 4b ruling.
3. 60% of decisions are `support_wait`, and live covering support is present in only 0.35% of now-legal
   decisions. The Legacy coordination rarely produces the covering fire its own gate requires. That is
   an execution-layer bottleneck, which matches Fable's plan 024 execution-audit advice. Changing it
   would change Legacy behaviour and is left for Jordan.

**Next (overseer):** a start-only go-now variant (skip `support_wait` and preparation at commit, no
persistent release), behind a switch that keeps the current behaviour and digests by default. Then
re-run the rule probe on it.

## Start-only go-now result, and overnight conclusion (23 September 2026)

Start-only go-now skips the commit-time gates but releases no later bound. Agent claude-opus-5-5;
`.local/plan027/startonly/`; binary `battle-lab-startonly` (build c3a9e27bd133871b, not integrated;
the default reproduces the lab exactly: 40/40, 41/41).

| Rule | W/D/L | W−L vs never |
|---|---|---|
| never | 121/20/129 | — |
| protected | 104/26/140 | −0.104 [−0.248, +0.041] |
| supported | 128/14/128 | +0.030 [−0.078, +0.133] |
| strong | 94/22/154 | −0.193 [−0.344, −0.037] |
| always | 76/19/175 | −0.337 [−0.485, −0.193] |

270 cases per rule. 84% of start-only go-now commits hit the covering-fire gate on their first
bound one tick later and re-planned.

**Conclusion.** At the squad-choice layer of the current executor, no tested policy change shows
headroom over the imitation start:
- destination choice (random ≈ greedy ≈ Legacy within ±0.2);
- HOLD frequency;
- five timing rules, with two go-now scopes;
- two PPO designs (plans 025 and 027).

The measured bottleneck is execution. 60% of squad decisions wait for covering fire, and covering
support is live in 0.35% of the decisions that could go now. Neural training is therefore paused
rather than repeated.

The next useful work is a Legacy execution change: how covering fire is arranged, and how its gate is
satisfied. That changes the playable AI and needs Jordan's ruling. After it, re-run the authority
probes.
