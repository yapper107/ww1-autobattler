# AI session handoff — 22 September 2026

Jordan asked to record the work and pick it up later. This is the resume point.
The neural training/evaluation and performance experiments are complete. No
matching training, evaluation, neural-worker or Opus-performance processes were
running at handoff. No next training run, soldier replacement or execution audit
has been started. Legacy Plan 023 remains the game default; no neural model is promoted.

## Current source and saved work

- Working simulator source: **6ff5c2010bc64352**. Default Linux lab
  `.local/lab/battle-lab`, Windows native lab and Unreal build contain the latest
  retained performance change.
- Completed training used the frozen **d73667841df73faa** executable at
  `.local/plan024/long-rl/bin/battle-lab`; do not replace this reproducibility artifact.
  SHA256: `4afbb09ef31f5656def8699d0c2bcb1b6e73e86936a3c03b9fe15ae653cfcc62`.
- Git HEAD: `c760cae7dd15bf827d23f2cab097920ae14fbb16`. There is substantial
  **uncommitted and untracked work**, including neural implementation, reports,
  models, performance changes and pre-existing art changes. These notes are saved
  on disk; this handoff makes no Git commit. Do not reset the checkout or stage
  everything indiscriminately. Preserve the existing `movemeqqnt` text in AI_PROCESS.
- Local inventory/status snapshot: `.local/plan024/session-handoff-2026-09-22.json`.
  `.local/` evidence and binaries must be preserved separately from Git history.

## Neural implementation and experiments

The current network is a shared squad candidate scorer. It selects a maneuver and
its destination, HOLD, or schema-3 KEEP of a pending plan. Candidate generation,
preparation/support gates, member stations, order relay and soldier execution
remain hand-coded. It is not a complete replacement of squad or soldier control.

The three training seeds are independent copies initialized from imitation.
Each gathers 24 battles per PPO update; actor and training-only critic are separate.
Updates continue even if the latest batch is worse. We select one checkpoint;
we do not average the brains of high-scoring agents. Training samples legal actions;
deployment/evaluation chooses the highest score. The reward is enemy loss fraction
minus own loss fraction plus 0.25 times win-minus-loss, with the existing imitation
anchor and elapsed-time handling. Details and exact settings are in the linked reports.

1. **Imitation bootstrap:** 60 lean training battles / 20,612 decisions; 270 paired
   evaluation battles. Attack performance statistically level with Plan 023;
   not promoted because of order churn. Jordan judged the imitation task successful
   and observed lingering soldiers in a regression clip.
   [Pilot report](NEURAL_SQUAD_PILOT.md),
   [assessment and corrections](../plans/024-pilot-assessment.md).
2. **Initial reward pilot:** 384 active-Legacy training battles / 195,777 decisions,
   780 evaluation battles; narrow and wider candidate experiments. No reliable
   gain; not promoted. Selected narrow reserved result 17/3/25 versus Legacy
   17/6/22. Static-validation attack score regressed.
   [Reward pilot](NEURAL_LEGACY_RL_PILOT.md).
3. **Longer duration test, now complete:** three seeds × 40 updates,
   **2,880 training battles / 1,527,606 decisions**, plus **1,620 evaluation cases**
   (including 90 cached identical control cases), and six video regenerations.
   Development selected **rl25-i040 before opening final maps**.
   [Final report and videos](NEURAL_LEGACY_RL_DURATION.md),
   [frozen experiment plan](../plans/024-longer-rl-experiment.md).

### Final fresh-map results

Each controller played Azure on the same 25 previously unopened cities × three
battle seeds, against active Legacy Ember. Fixed sides/maps need not give Legacy
versus Legacy an even win rate.

| Controller | Wins | Draws | Losses |
|---|---:|---:|---:|
| Legacy | 23 | 6 | 46 |
| Original imitation | 35 | 6 | 34 |
| Untrained schema-3 continuation | 35 | 2 | 38 |
| RL seed 24, update 40 | 35 | 4 | 36 |
| Selected RL seed 25, update 40 | 31 | 4 | 40 |
| RL seed 26, update 40 | 32 | 4 | 39 |

Across the three final policies, paired win-minus-loss effect versus Legacy is
+0.2311 [0.0089, 0.4667]; versus imitation -0.0889 [-0.3778, 0.1868]; versus
untrained continuation -0.0356 [-0.1956, 0.1200]. These are map-cluster intervals
for the realized policies, not proof over arbitrary training seeds. The selected
model alone is not reliably better than Legacy: +0.1867 [-0.0800, 0.4667].

**Extra PPO duration has not demonstrated a reliable gain over the starting
policies.** This does not prove neural control cannot improve or that the policies
are equivalent. Development performance did not improve monotonically across seeds.

All three trained policies and untrained continuation fail the fresh-map friendly-
fire guard; original imitation passes. The selected policy passes all ten historical
battle/conduct guards. Its static-validation attack-score difference is -0.0330
[-0.0649, 0.0001]. No reliable general straggler improvement is established.
A difference between pass/fail verdicts does not itself prove a significant pairwise
model difference or identify a causal defect in KEEP.

Final policies passed Linux native/PyTorch inference comparison on 2,000 decisions
each and eight training tests passed. The automatic duration pipeline did not run
new Windows inference checks of these final policies or obtain a Fable verdict on
promotion. Later Windows performance checks used a different fixed checkpoint;
do not conflate them. Fable has since reviewed the architectural next-step question.

Models: `models/squad/plan024-imitation-v1/`, `plan024-legacy-rl-v1/`,
`plan024-legacy-rl-duration-v1/`. Experiment evidence: `.local/plan024/long-rl/`.
Final maps **1101–1125 are now inspected** and cannot be reused as unopened
promotion evidence; earlier pilot development/reserved maps are also inspected.

### Short videos ready for Jordan

Legacy left, selected model right, both facing active Legacy. Each covers battle
seconds 60–360 at 10×, about 30 seconds. These are development examples, not fresh-map
promotion evidence. Regenerated digests match evaluation rows. Automatic decoding
is not a human visual verdict; Jordan has not yet given a verdict on these new clips.

- [Best: city 907, seed 109](/home/jchan/ww1-autobattler/.local/plan024/long-rl/videos/best/city-907-overview.mp4)
- [Typical: city 906, seed 108](/home/jchan/ww1-autobattler/.local/plan024/long-rl/videos/typical/city-906-overview.mp4)
- [Worst: city 908, seed 109](/home/jchan/ww1-autobattler/.local/plan024/long-rl/videos/worst/city-908-overview.mp4)

## Performance work completed

All retained changes preserve tested observations, actions, costs and outcomes.
None was hot-swapped into the completed experiment. Future runs can use the current
optimized build, while old evidence retains its frozen executable.

| Stage | Source | Measured result |
|---|---|---|
| Exact endpoint/report reuse | cfcd101678649cb2 | 15.9% less CPU versus original, 12 pairs |
| Threat-bound ordering and tactical second-memo bypass | 69962220d762ea04 | Additional 15.2% less CPU versus preceding build, 12 pairs |
| Direct original/current comparison at that stage | 69962220d762ea04 | 26.7% less CPU / 1.36× throughput, six pairs on three maps |
| Opus 5.5 tactical ray prefetch | 6ff5c2010bc64352 | Additional 6.7% less CPU versus 699, 12 cases; interval [3.8%, 9.4%] |

Do not add these percentages or present a compounded estimate as a direct benchmark
of the final build versus the original. They measure native battle CPU, not full
PPO training time or guaranteed performance on all machines.

- [First optimization](NEURAL_TRAINING_PERFORMANCE.md),
  [second optimization](NEURAL_TRAINING_PERFORMANCE_2.md),
  [profile and direct comparison](NEURAL_TRAINING_CURRENT_PROFILE.md).
- The profile at source 699 attributes 68.1% of simulation CPU to command processing,
  20.9% to individual soldier decisions. Cache checks/obstacle queries dominate
  sampled functions. This is not a fresh profile of final source 6ff.
  GeometryKey's sampled label was suspect: a subsequent map 756 probe counted zero
  calls. Software-cache sizes/hit counts do not establish DRAM/TLB stalls.
- **Four Opus 5 proposals:** grouped visibility cache, segment front cache,
  obstacle traversal and path smoothing. No survivor after 90 benchmark battles.
  Smoothing's 0.96% mean saving had an interval crossing zero; others were slower
  or showed no gain. [Results and archived proposals](NEURAL_TRAINING_OPUS_EXPERIMENTS.md).
- **Opus 5.5 follow-up:** initial linked-surface path-copy idea had zero calls on
  three training maps and was parked. The final prefetch change passed **46 timed
  recorded-action pairs**, nine diagnostic replays, 882,432 exact cost comparisons,
  649,332 query/path comparisons, 41 historical cases, full Linux suite, drills
  traces/repeat, Windows route/neural contracts and six Windows pairs, UE 5.8 build.
  A 24-pair hint-disabled control averaged 4.12% less CPU with the real hint,
  interval [0.34%, 7.82%]. Large timing outliers remain in the data; four additional
  pairs after compilation ended were all faster. Exact Fable review found no
  correctness blocker. [Final optimization and limits](NEURAL_TRAINING_PREFETCH.md).

Evidence directories: `.local/plan024/performance/`, `performance2/`,
`profile-current/`, `performance-round3/`, `opus55-performance/`.
Earlier smaller-cache and regional-copy experiments did not establish gains either;
see the first optimization's linked plan before repeating them.

## Architect/model access

Claude Code was updated **2.1.275 → 2.1.280**. The launcher selects
`/home/jchan/.local/bin/claude`. Exact **claude-opus-5-5** is now verified working
through the existing subscription; the four earlier agents used the explicitly
authorized Opus 5 fallback before that update. Fable remains exact
**claude-fable-5-1**, the standing architect. Old launcher lock/socket restrictions
were resolved; historical failure notes must not be presented as current blockers.
No API billing or paid-extra settings were enabled.

[Client update](../plans/024-claude-client-update.md).
Use `/home/jchan/.local/share/astra-fable/fable_architect.py doctor`, then bounded
`ask --repo /home/jchan/ww1-autobattler --request /absolute/request.md` consultations.
Astra integrates; Fable reviews read-only. Preserve explicit model attribution.

## Proposed next work, not yet started

Jordan asked whether individual soldier AI should precede more squad learning.
Astra and Fable recommend a **bounded execution/interface audit**, with targeted
repairs only where evidence warrants them. A learned soldier controller or complete
rewrite is not established as necessary. The user then asked to save the work for
later; do not treat this handoff as a new training or rewrite instruction.

Start by reading [the assessment, exact Fable response and Astra corrections](../plans/024-soldier-execution-priority-assessment.md).
When Jordan resumes the work, the proposed order is:

1. Trace friendly-fire differences between imitation and untrained continuation;
   KEEP and pending-plan clearing are hypotheses to isolate, not proven defects.
2. Follow committed squad decisions through member orders and actions. Distinguish
   bad/replaced orders, legitimate cover/suppression reactions, inherited wounded
   or support roles, route/traffic failures, and unexplained lack of progress.
   Use existing data first; lean recording may lack the required detail, so
   targeted development traces or diagnostic instrumentation may be necessary.
3. Repair demonstrated faults at their owning layer; preserve existing conduct
   thresholds, legitimate safety decisions and knowledge/message-delay boundaries.
   Retain Plan 023 benchmarks, lean parallel battles and short paired videos.
4. Freeze execution and replay fixed policies. Diagnose effective action authority,
   sampled-versus-greedy behavior and reward credit before the next large PPO run.
   Primary training/evaluation opponents remain **active Legacy**, with static
   defenders used only as regression diagnostics. Reserve fresh final maps.

Important cautions: the old 55–61% support-wait / under 3% commit figures are a
nine-update snapshot of decision counts, not time fractions or proof waits are wrong.
An earlier straggler trace found six wounded survivors with inherited RearGuard
orders; this explains part of that replay, not all separation. Fable's proposed
1.5× arrival threshold and additional receipt/continuation guards have **not** been
adopted as rules. No reward weights or existing conduct limits have changed.

The current models and training infrastructure remain useful for measuring the
impact of future repairs. Continue from this checkpoint rather than restarting
completed experiments or silently reusing inspected final maps.
