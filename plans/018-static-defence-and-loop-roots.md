# Plan 018: static-defence attack scenarios and the first loop roots

Draft 1, 18 September 2026. Architect and harness implementer: Claude Fable 5.1 (`claude-fable-5-1`), direct
Claude Code session in this checkout. Source fingerprint at planning time: `4f1deaa79cc1a897` (plan 017 phase 3).
This plan continues [plan 016](016-improvement-loop.md); it changes what the loop scores and what it needs from the Sim.
Legacy remains the playable default throughout.

## User decisions recorded in this session (18 September 2026)

1. **Maps.** AI behaviour is tested on the procedurally generated city maps. The static authored maps (Fractured
   Works, authored Trenches) are no longer behaviour tests. Trench maps are kept only to prove soldiers still shoot,
   because trench terrain by nature promotes getting into cover and trading fire.
2. **Score.** Rank on the town validation set; keep the trench sets for the still-shooting guards (score v2, done).
3. **Roots.** Both existing controllers, legacy and drills, are the first roots of the discovery tree.
4. **Static defenders instead of head-to-head.** The user proposed, in place of a mixed-controller battle, an enemy
   that does not manoeuvre: defenders placed in cover in varied ways on the city map (a squad in a building, a group
   spread out, clusters), who fire and duck but never leave their spots, so the AI under test has something to work
   out. Accepted by the architect as the faster and better first objective; reasons and limits below.
5. **Go-ahead.** The user approved the architect's list: re-baseline the two blocking guards, a lineage rule so both
   roots can have children, a proposer, a replay command for the user's review, then parameter search and the
   Dream-RSI policy layer. Proposer models stay as plan 016 decision 6: Sonnet 5 by default, Haiku 4.5 for narrow
   single-function edits, no LLM in parameter search, model and usage recorded on every node.

## Why static defence is the right first objective

- On a symmetric town battle both sides run the same controller, so the Azure result measures side balance, not
  controller quality. A mixed-controller battle would fix that but the Sim selects one controller per battle and
  reads the controller flags at roughly 80 sites.
- The Sim already has the two parts a static defence needs: `CommandRuntime::fixedDefender` (a team whose squad
  leaders only ever order Hold at the soldier's own position; used by F1 and the encounter fixtures) and seeded
  scenario placement with a per-squad alive mask (`GeneratedScenario`, `ApplyScenario`).
- The defender is neutral: no candidate edits it, so legacy-lineage and drills-lineage nodes are scored against
  the same yardstick and can be compared directly, and a baseline can be a pinned root binary.
- It aims the objective at what is actually broken: closing with an enemy in cover. Measured on three city maps on
  18 September: drills squads were static for 20 % of squad-seconds (column position unavailable, idle after the
  first travel leg); legacy flanks in 6 to 9 m hops with a quarter to a third of flank moves cancelled within 3 s.

Limits, disclosed: it scores the attack only. Defence, meeting engagements and reacting to an enemy that manoeuvres
are not measured, and an optimiser could learn that the enemy never counter-attacks. The symmetric town battles stay
as guards (shooting, spacing, order churn, friendly fire), the user's replay verdicts stay the source of new guards,
and a mixed-controller battle remains the later second objective. Under `--drills` both teams use foundations
perception, so the defender differs slightly between lineages; within a lineage it is identical.

## Sim change (implemented by an Opus agent in an isolated worktree; Fable reviews, verifies, commits)

`Config::staticDefence {layout None|Building|Spread|Clusters, defenders 4..32 default 12, seed}`; CLI
`--static-defence <layout> --defenders N --defence-seed S`; allowed with `--map` or an authored terrain, refused with
generated families, encounters and recovery. Off by default: every existing digest is unchanged.

- **Placement.** Ember only. Seeded by a splitmix64 hash (never the battle RNG). Positions are native
  `CoverPositions(map)` slots protected toward the Azure approach, on Ember's side of the map, minimum spacing 3 m.
  Building: window and interior slots of one building, overflow to the nearest cover around it. Spread: slots within
  the defended locality with nearest neighbour at least 8 m. Clusters: two or three groups of four to six. Unused
  Ember slots are dead at frame 0 (as F1 does); every defending squad keeps a leader; the machine gun is included
  from six defenders up.
- **Hold.** `fixedDefender` is set, and a defender's order is clamped to its own slot (shelter to peek plus 1 m):
  it peeks, fires, ducks, reloads and is suppressed by the ordinary soldier code, but never relocates, withdraws or
  moves to wounded support.
- **Attacker's order.** Azure squads receive the defended locality as their own pre-battle objective, offset
  laterally per squad across the locality; never an enemy track. Drills uses the mission as its destination when
  static defence is on (it already does for generated families).
- **Win rule.** Azure wins only by incapacitating every defender inside the time limit. Otherwise Ember wins.
  This closes the loophole where a larger attacker wins on headcount by sitting still.
- **Evidence.** Manifest records layout, defenders, seed and objective; exact reruns restore them. Unreal accepts
  `-ArmyStaticDefence= -ArmyDefenders= -ArmyDefenceSeed=` so the user can watch the same battle.
- **Tests.** A `--static-defence` test group: count and cover membership at frame 0, spacing, no defender ever more
  than its slot length plus 1 m from its frame-0 position, defenders fire, determinism, seeds and layouts differ,
  time-limit win rule, flag-off digest identity.

## Loop changes (Fable, `tools/loop/`)

1. **Score v3.** Objective on `town-attack-val`: per battle `defender_loss_fraction - 0.5 * attacker_loss_fraction`,
   mean with a cluster bootstrap on the map, ranked by the lower bound; cleared-battle share and time to clear are
   reported. Symmetric `town-dev` keeps the paired behaviour guards; `town-*`, `trench-dev` and the attack sets carry
   the shooting guards. `town-val` and `trench-val` symmetric runs are dropped to keep a candidate near five minutes
   of battles.
2. **Guards re-baselined.** Selectors: no selector that passes on the lineage root may fail on a child (the root's
   own failures, today D02, D07, D08 and D17, are recorded on it). Protected files: `TerrainSim.cpp` re-pinned to its
   hash after the 17 September map rework.
3. **Lineage rule.** A node records its controller. The parity guard checks the controllers the node does not own
   (drills children: legacy and candidate90; legacy children: drills and candidate90) on spot battles, including one
   static-defence battle, so a candidate can change only its own lineage's behaviour and never the defender. Shared
   soldier-level code is therefore out of the loop's reach for now; stated as a limitation. Added lines in non-policy
   files that touch frame or soldier arrays are listed on the node as requiring a hidden-state audit before a survivor
   reaches the user.
4. **Proposer.** `tools/loop/propose.py` writes a brief from a node (failing metric, static windows and their stated
   reasons, file region). The `claude` CLI is not installed in this WSL, so for now the architect session launches
   the proposer agents (Sonnet 5 or Haiku 4.5) in isolated worktrees and runs `evaluate` on each result against the
   shared tree (`ARMY_LOOP_ROOT`). An unattended nightly loop needs the CLI installed; noted, not done.
5. **Replay.** `python3 -m tools.loop replay <node> --set ... --key ...` syncs the node's source snapshot into the
   Windows mirror, builds, and launches the same map, seed, controller and defence so the user can judge it.
6. Parameter search (needs doctrine thresholds in a parameter file) and the Dream-RSI policy layer follow once the
   tree has nodes; unchanged from plan 016.

## Order

Sim change and loop changes in parallel; then both roots are re-evaluated on the new source; then the replay command
and the first proposals. Nothing is promoted; the user's replay review decides survivors.

## Status, 18 September 2026 (evening)

Landed uncommitted on source `b8f9e3b64c1fb65e`. The Sim change was implemented by an Opus agent in an isolated
worktree and reviewed by Fable, with two follow-ups by Fable: the drills attacker now heads for its ordered
objective on every leg and in the platoon's no-contact advance legs (it previously swept its own lane past the
locality), and defender positions whose firing edge is within 3 m of the shelter are seated first (face-sampled
cover on long walls gave slots up to 7 m long). Verification on that source: 40/40 historical parity, full Linux
suite with the new `--static-defence` group, 115 Python tests, Unreal module compile and link on UE 5.4. The six
known failing selectors and scenarios are unchanged.

Measured while reviewing: the locality is 165 to 235 m from the attacker's start line and at 360 s legacy squads
were still closing (9 to 99 m away) and drills squads were 58 to 199 m away, so attack battles run 600 s.

First roots under score v3 (`.local/loop/tree/b8f9e3b64c1fb65e-*`, logs in `.local/plan018/`):

| Root | town-attack-val mean | lower bound | cleared | defenders lost | attackers lost | guards |
|---|---:|---:|---:|---:|---:|---|
| legacy | +0.589 | +0.487 | 20 % | 77 % | 37 % | all pass |
| drills | +0.390 | +0.274 | 0 % | 51 % | 23 % | fails `firing_squads` (2 town battles) and `attacker_firing_squads` (10 attack battles) |

Spread is the hardest layout for both. The first diagnosis of legacy's worst attacks shows the order churn the
user saw in play: in one battle 220 FLANK orders were replaced by CLEAR FIRING LANE within three seconds. For
drills the largest static reasons are the end of the travelling stage with no next leg, waiting on a platoon
directive, and "column position unavailable".

Open: the work is uncommitted, and a proposer's isolated worktree is created from the last commit, so the first
proposals wait for the user's go-ahead to commit. The pre-battle preview in Unreal does not show the defenders
(playback does, because Run Battle goes through `Simulate`).

## Amendment, 18 September 2026 (night): what a node keeps

User question: is all the data the battles generate needed? No. Measured on the legacy root: 1.6 GB, of which
everything the loop reads again (metric rows, scores, source snapshot, diff, binary, test binary, selector logs) is
about 5 MB. The rest is raw battle output, mostly the per-frame evaluation export (82 to 130 MB a battle). Nothing
reads it after the metric row exists: `diagnose` reruns with a trace, `replay` rebuilds the node in Unreal, and
blind pairs had copied it for the user to watch although Unreal cannot load an exported battle.

Decision: raw output is a cache. A scored battle keeps its manifest and summary; `remeasure` regenerates rows from
the node's frozen binary when a new metric is needed and reports any digest that differs from the recorded one.
Generated map folders keep only the `.army` files, and only the sets the score reads are generated. Determinism was
checked before anything was deleted by re-fighting the legacy root's 65 battles and comparing every digest.

## First generation, 18 September 2026 (night)

Two Sonnet proposers, one per lineage, each from the brief `tools/loop/propose.py` wrote from its root's diagnosis.
Both isolated worktrees were cut from `main` rather than the working branch; each agent rebuilt the node source and
confirmed the fingerprint before testing, and the architect re-applied each diff on the branch tip in a fresh
worktree for evaluation. Patches, logs and scores are under `.local/plan018/generation1/`.

**Scoring amendment (score v3, same version: no guard-passing node's value changes except roots, which are now valued
at their mean instead of their lower bound).** Validation maps are drawn fresh per node, so two nodes' absolute means
differ by map sample as well as by merit. A child is now judged against its lineage root on the same battles: the root's
frozen binary fights the child's draws (cached per epoch), and the child's value is the root's mean (anchor) plus the
lower bound of the paired delta. `rescore --run-missing` fights whatever root battles are missing.

| Node | Lineage | Change | Paired delta, 20 dev maps | Paired delta, 15 val maps | Guards |
|---|---|---|---|---|---|
| `a1498179dd29bf64` | legacy | 2.5 s commitment to an issued flank or bound in `CommandSim` `send()` (10 lines) | +0.007 [-0.072, +0.089], 10 better, 10 worse | +0.157 [+0.028, +0.282], 10 better, 4 worse | fails `friendly_fire` (+1.10 hits per 100 soldier-minutes against the root, interval above zero), `attacker_firing_squads` (one battle with two silent squads), `selectors` (`--stats`, see below) |
| `e4fe94c34bd42782` | drills | third-tier recovery in `IssueStage`: march in file to the leg's end when no formation or column slot exists (16 lines) | +0.044 [-0.027, +0.121], 9 better, 6 worse | +0.017 [-0.055, +0.082], 7 better, 6 worse | still fails `attacker_firing_squads` (12 battles, root 10) and `firing_squads` (2); no new selector failure; parity matches |

Neither is a survivor. The legacy change probably helps (about +0.07 pooled over the 35 shared battles) but pays for it
in friendly fire, which is the expected cost of flankers no longer being recalled; the next legacy brief keeps the
commitment and lets a friendly-lane report break it. The drills change is harmless and small; its own proposer traced
the silent squads to the other stall family, squads that bound so slowly they never arrive, which is the next drills brief.

**Test amendment.** The `--stats` group asserted two things about one default legacy battle that depend on when the
controller brings a machine gun into action, not on the stat model: a stacked-recoil burst inside the first 120 s, and
no recoil left in the final frame. The legacy child moved the burst later and had a gun mid-burst in the last frame.
The first now looks at the whole 360 s battle before failing; the second applies to soldiers who stopped firing at
least 1.5 s before the end. `--stats` passes on the branch source and on the legacy child's source. Tests are not part
of the source fingerprint, so the epoch is unchanged. Disclosed as a guard repair, not made to pass a candidate: that
child fails two other guards regardless.

## Second generation, 19 September 2026

The user asked for a picture of the tree and then for the loop to run; part-way through they asked that it stop after
this generation. `python3 -m tools.loop view` now writes the tree as one page (`.local/loop/tree.html`), published
privately for the user and refreshed after each generation. Proposers worked in worktrees the architect prepared at the
branch tip with the parent node's exact source as a local detached commit, which removed the wrong-branch problem of
generation 1 and makes `git diff` the proposal. Evidence: `.local/plan018/generation2/`.

| Node | Parent | Change | Paired delta vs lineage root, 20 dev | 15 val | Guards |
|---|---|---|---|---|---|
| `8b6da91cb019eed0` | drills `e4fe94c34bd42782` | a contact FightHere directive without an area banded the squad around its start-line row; it now bands around the squad's current position (2 lines, `DrillSim.cpp`) | +0.088 [+0.019, +0.158], 15 better, 5 worse | +0.115 [+0.001, +0.223], 10 better, 2 worse | fails `zero_shot` and `attacker_firing_squads` on the same three validation maps (cluster layouts) where the drills root also fires no shot; silent-squad attack battles 3 of 35 (root 10, generation 1 12), town battles 0 of 20 (root 2) |
| `ccdd8eaad36f1cc3` | legacy `a1498179dd29bf64` | commitment window 2.5 s -> 1.0 s (one constant, `CommandSim.cpp`) | -0.016 [-0.041, +0.000], 2 of 20 battles differ | +0.017 [+0.000, +0.052], 1 of 15 differs | all pass; does not beat its root: an order takes about 1.2 s to arrive, so a 1.0 s window almost never engages and the node is the root again in all but three battles |

No survivor yet. The drills node is the first measured improvement in the tree, with both intervals above zero, and the
band bug it fixed was exposed by plan 018's own change that sends drills squads off their start lanes toward an
objective. What blocks it is older than the loop: on some maps the drills attackers never reach the defended locality at
all (zero shots in 600 s on root and child alike).

The legacy proposer reported that a static-defence battle gave two digests on one binary. Checked and not so: two
simultaneous runs on its final build gave the identical digest, equal to its own first value; the other came from a
variant build. It also established two useful negatives: exempting soldiers inside a reported blocked fire lane changes
nothing, because friendly hits land before any lane is reported, and a 1.5 s window lifts attacks (+0.10 on its five
maps) but still raises friendly fire.

**Where to resume.** Drills: next brief from `8b6da91cb019eed0`, targeting squads that never arrive; start by tracing the
three zero-shot validation maps (map seeds 65552, 644915, 355292, cluster layout), where root and child both fire nothing.
Legacy: the commitment helps attacks at 2.5 s and costs friendly fire; the open question is a mechanism that separates the
two, for instance a commitment that holds only while the soldier's path stays clear of friendly firing sectors the leader
already knows, or one scaled to the distance still to go. Parent for that work is the root or `a1498179dd29bf64`, not
`ccdd8eaad36f1cc3`, which is the root in effect. Proposer cost so far: four Sonnet proposals, about 0.78 million tokens.

## Branching rule, 19 September 2026 (user decision)

The user asked what triggers another branch from a root. Until then nothing did: each generation deepened one chain
per lineage from its best node, so the tree was two chains. Dream-RSI's learned exploration policy (plan 016 phase 4)
needs hundreds of nodes to replay; with seven, the user approved this explicit rule instead, to be applied by the
architect and run alongside the generation in progress:

1. Every generation, one proposal per lineage deepens from that lineage's best node (best paired value; among unscored
   nodes, the best paired delta with the fewest failed guards).
2. When a lineage has gone two generations without a node whose paired interval lies above zero and whose guards pass,
   one **explorer** is added from the lineage root, aimed at the largest stated stall in the root's diagnosis that the
   chain has not addressed, and told not to work on the chain's idea. An explorer costs one more proposal (about 150 to
   250 thousand Sonnet tokens).
3. A change is never stacked on a parent that is harmful or unproven when the new idea can be tested cleanly from an
   ancestor; ideas that each work alone are merged in a later proposal.

First use: legacy qualified after generations 1 and 2 (no survivor), so generation 3 runs a legacy explorer from the
root aimed at "PREPARE MOVEMENT" (730 squad-seconds static in the root's three worst attacks, healthy squads silent for
40 to 110 s at a time), beside the two deepening proposals. With three proposers running their own check battles at
once the explorer runs one battle at a time, because memory, not cores, is the limit on this machine.

## Third generation, 19 September 2026

The user resumed the loop ("continue"). Three Sonnet proposers: one deepening each lineage and, under the new
branching rule, a legacy explorer from the root. Evidence: `.local/plan018/generation3/`.

| Node | Parent | Change | Paired delta vs lineage root, 20 dev | 15 val | Guards |
|---|---|---|---|---|---|
| `4192db8318921036` | drills `8b6da91cb019eed0` | the platoon no longer renews an advance leg it has marked route-exhausted (the stale, completed leg was re-issued every 75 s and dragged the squad back; one guard in `PlatoonTaskSim.cpp`) | +0.085 [+0.008, +0.161], 14 better, 6 worse | +0.005 [-0.097, +0.117], 6 better, 8 worse | ONE battle of 75 fails (`zero_shot` and `attacker_firing_squads` on validation map 828295, spread), where the drills root also fires nothing; root fails 12 |
| `f90df393f3ba9394` | legacy `a1498179dd29bf64` | the 2.5 s commitment no longer suppresses a Hold within 1.5 m of where the soldier stands | +0.002 [-0.061, +0.063] | +0.030 [-0.069, +0.128] | fails `friendly_fire` (+1.52 [+0.64, +2.49] against the root) and `attacker_firing_squads` (one battle) |
| `f7ef9f40c0203c33` | legacy root (explorer) | a sidestep ordered to clear a reported friendly lane must also be sheltered from the commander's known contacts (`ClearReportedFireLane`) | -0.001 [-0.079, +0.074], 9 better, 9 worse | -0.060 [-0.165, +0.042], 4 better, 8 worse | fails `friendly_fire` only (+1.12 [+0.35, +1.89]) |

Findings.
- **Drills is one battle from a score.** The three drills changes each removed a real stall (march in file, band on the
  squad's position, no renewal of exhausted legs); development deltas against the root are +0.044, +0.088 and +0.085.
  The validation delta depends on the draw: the root fires nothing on three of the second node's fifteen maps and on one
  of the third's. What remains, from the proposer's trace of map 65552: near the objective the formation and column slot
  search jams in dense cover ("column position unavailable", Blocked), and one squad cycles Bound and BoundCover for
  600 s without arriving. Next drills brief: that jam, from `4192db8318921036`.
- **The legacy commitment chain is retired.** Three generations, no repeatable gain without the friendly-fire cost.
- **A proposer's own five-battle check predicts little.** The explorer's five maps all improved by +0.08 to +0.23 and the
  full paired result was zero: it measured the root's three worst battles plus two, and worst battles regress toward
  the mean under any change. Briefs should stop presenting the parent's worst battles as the check set, or give a
  random dev subset beside them. Only the paired full-suite result decides.
- **Three independent legacy changes raised friendly fire**, and the user has seen friendly-fire avoidance interfere with
  the AI in play. The avoidance logic is mostly shared soldier-level code, which no lineage may change, and the guard is
  relative to the root, which freezes whatever caution the root has.

## User decisions, 19 September 2026

1. **WSL stays at 30 GB**; the other half of the host's memory is reserved for Windows. Not to be suggested again.
2. **Lean battle mode**, approved, to be built by the architect after generation 3 and before generation 4: fold the
   digest as frames are produced, compute evaluation rows at record time and drop the frames, keeping full frames only
   for Unreal and tests that read them (design in `docs/BATTLE_PERFORMANCE.md`). Verification: 40/40 parity,
   byte-identical evaluation output, and a root `remeasure` with every digest matching; then both lineages are re-rooted
   and the live drills node is carried across.
3. **Friendly-fire ablation**, approved, right after the lean mode: on scratch builds of the root (not tree nodes) switch
   off the shooter's hold-fire check, the lane-clearance orders, and both, and measure attack score, friendly hits and
   static time. The user then sets an absolute friendly-fire budget to replace the root-relative guard, and any repair
   of the shared avoidance logic is a designed architect change that starts a new epoch, not a lineage proposal. Lead
   to test: hits land before any lane is reported (a report needs about a second of held fire plus the chain delay), so
   the reporting chain may be producing churn without preventing anything.

## Lean recording and the friendly-fire ablation, 19 September 2026

**Lean recording landed** (`69ff4a4`, source `efce1ef0fb0e378a`; details in `docs/BATTLE_PERFORMANCE.md`): 4.97 GB to
0.50 to 0.61 GB per 600 s battle with byte-identical exports; the full digest is unchanged (40/40 parity) and a lean digest
is a different number over the same fields. Both lineages were re-rooted (`efce1ef0fb0e378a-legacy`, `-drills`): every one
of the 20 development attack scores equals the old root's, for both controllers. The three drills changes were carried
across as `08a5a8f33d1f2732` and reproduce +0.085 [+0.008, +0.161] against the root. Battles per node fell from 505 s to
240 to 275 s at fourteen jobs, less than the parallelism allows; the per-battle Python metrics step is the suspected limit.

**Ablation** (scratch build, not a node; switches proven inert by an identical digest when off; evidence and the switch
patch in `.local/plan018/ablation/`). Legacy and drills, 20 development attacks (attackers switched only, so the defenders
stay fixed) and 20 symmetric town battles (both sides switched), paired against the unswitched baseline:

| Controller | Condition | Attack score vs baseline | Friendly hits per 100 soldier-minutes (symmetric) |
|---|---|---|---|
| legacy | baseline | +0.537 | 6.59 |
| legacy | shooter never holds fire for friends | -0.055 [-0.148, +0.040] | 15.72, +9.14 [+7.57, +10.68] |
| legacy | leader never orders a lane sidestep | -0.005 [-0.097, +0.083] (cleared 35 % against 20 %) | 8.00, +1.42 [+0.60, +2.28] |
| drills | baseline | +0.215 | 4.31 |
| drills | shooter never holds fire for friends | -0.026 [-0.102, +0.053] | 8.68, +4.37 [+3.44, +5.28] |
| drills | leader never orders a lane sidestep | exactly unchanged: drills never uses it | unchanged |

Reading. Friendly-fire avoidance is **not** what holds the attack back: switching off either part does not raise the
attack score for either controller, and the shooter's hold-fire rule alone halves friendly fire. With hold-fire off the lane
sidestep never triggers (its reports come from blocked shooters), so "both off" equals "hold-fire off" to the digit. The
legacy sidestep chain prevents about 1.4 of 6.6 hits and costs nothing measurable. The three legacy candidates that raised
friendly fire did so by moving soldiers across friendly lines more, not by being freed from avoidance, and none of their
gains survived the paired comparison. The shared avoidance logic therefore stays as it is, and stays outside the loop.
Open for the user: whether to replace the root-relative friendly-fire guard with an absolute budget (legacy root 6.59,
drills root 4.31; the rejected legacy candidates measured 7.7 to 8.1).

## Fourth generation, 19 September 2026

Two Sonnet proposers on the lean source, with a changed brief: each measures the parent's three worst battles AND a fixed
random five (maps 22, 27, 33, 36, 39) and reports the random five as the honest estimate. Both proposers used it to
recommend against their own change. Evidence: `.local/plan018/generation4/`.

| Node | Parent | Change | Paired delta vs lineage root, 20 dev | 15 val | Guards |
|---|---|---|---|---|---|
| `a2f0b34f44950e0b` | drills `08a5a8f33d1f2732` | a squad ordered to FightHere a known group beyond one and a half sight ranges moves by plain Traveling, not TravelingOverwatch or Bound (whose element slot search fails on some geometry and loops Blocked every 7 s) | +0.057 [-0.033, +0.147], 12 better, 8 worse | +0.043 [-0.068, +0.170], 6 better, 9 worse | **all pass: the first drills node with a score** (0.253 against the root's mean 0.322, so not a survivor) |
| `ba7287750efbaa4c` | legacy root | the squad leader's "trail behind the corporal" point, the only unvalidated position `PlanSquad` assigns, snaps to real shelter within 6 m when exposed to a fresh contact (trace: the leader left and re-sought cover 95 times in 57 s, the committed flank never completed and timed out, which is the PREPARE MOVEMENT stall) | +0.074 [-0.007, +0.158], 12 better, 8 worse | -0.124 [-0.224, -0.018], 4 better, 10 worse | fails `attacker_firing_squads` (one battle); friendly fire passes (+0.38 [-0.61, +1.36]) |

Findings.
- Drills now has a guard-passing node: marching at long range gets every squad into the fight, at some cost in attack
  quality against its parent (+0.057 on development against the parent's +0.085). Its proposer's better idea keeps the
  bounding technique and repairs the slot search where it fails (the loose file fallback fails the inside-corridor check
  at long range; the corridor group cap may be too tight for long obstructed legs).
- The legacy PREPARE MOVEMENT cause is established. The fix as written is not an improvement.
- **The measurement is too noisy for effects of this size.** Two candidates now have development and validation sets
  that disagree, each with an interval excluding zero (generation 1 legacy +0.007 and +0.157; this legacy node +0.074 and
  -0.124), and one proposer saw its random five swing from -0.08 to +0.17 across trivial variants of one mechanism. A
  battle is chaotic: any change perturbs the whole trajectory, so one battle a map carries roughly +/-0.3 of noise per
  map and the loop cannot resolve effects below about +/-0.1. With lean battles the remedy is cheap: three battle seeds
  per map on the attack sets (105 attack battles a node instead of 35), clustered by map as now, roots re-scored the same
  way. To be done before generation 5.

## Four proposals a generation, 19 September 2026 (user decision)

With lean battles memory no longer limits proposers (a check battle is about 0.6 GB; the evaluator's fourteen battles about
8 GB of the 30 GB WSL keeps). The user asked whether more proposals per generation were possible and chose **four**. The
binding limits are now the serial evaluator (12 to 15 minutes a candidate with three battle seeds a map, so four proposals
keep it busy for about an hour without a queue), the need for distinct targets (each proposal takes a different stated
stall from the parent's diagnosis, and is told which stalls other proposers hold), and tokens (about 170 thousand Sonnet
tokens a proposal). The branching rule stands: legacy gets its explorer from the root each generation while its chain has
no proven gain. The user also asked whether lean scoring differs from standard: it does not; evaluation and shots exports
are byte-identical and both re-rooted roots reproduced all twenty development scores; only the digest is a different number.

## Fifth generation, 19 September 2026: the first survivor

Four Sonnet proposers (three drills, one legacy explorer), three battle seeds a map, and the legacy generation 1 node
re-measured at the user's prompting. Evidence: `.local/plan018/generation5/`.

| Node | Parent | Change | Paired delta vs lineage root, 60 dev | 45 val | Guards |
|---|---|---|---|---|---|
| **`a5b94b2706ad71c6`** | drills `a2f0b34f44950e0b` | a committed assault that never receives its first delivered-support evidence gives up the wait after 30 s and falls back to Reorganise and supported closure (one branch, `SquadDrillSim.cpp`); the wait had no bound | **+0.100 [+0.035, +0.169]**, 39 better, 20 worse | **+0.085 [+0.040, +0.138]**, 26 better, 16 worse | **all pass: the first survivor** (value 0.367 against the root's 0.327) |
| `f3b92cc62b71255b` | drills `08a5a8f33d1f2732` | movement stages search positions in a working band widened to include the leg's destination (the 48 m strip around the squad's row rejected every candidate toward an off-row goal) | +0.114 [+0.062, +0.167], 44 better, 15 worse | -0.005 [-0.055, +0.044] | fails `attacker_firing_squads` (one battle) |
| `18a991576780ea1a` | drills `a2f0b34f44950e0b` | the platoon reassesses a squad whose reports show no movement over 4 m and no own-squad fire for 50 s under a committed intent | +0.097 [+0.035, +0.158] | +0.043 [-0.026, +0.116] | fails `zero_shot` and `attacker_firing_squads` (one battle) |
| `8fc504e6f6aab1b0` | legacy root (explorer) | a repeated execution-deadline timeout at one waypoint no longer re-blocks; the squad accepts the ground reached | +0.015 [-0.029, +0.059] | -0.005 [-0.035, +0.027] | fails `attacker_firing_squads` (two battles) |
| `3272f20315669fe4` | legacy root (generation 1 carried for re-measurement) | 2.5 s hold on issued flank and bound orders | -0.006 [-0.074, +0.054] | -0.021 [-0.078, +0.031] | fails `friendly_fire` (+1.10 [+0.04, +2.26]) |

Findings.
- **Survivor.** The drills chain now passes every guard and beats its root on both sets with intervals above zero. Most of
  the gain was already in its parents (+0.013 against its own parent on the same development battles); this step made the
  validation interval clear zero. For the user's replay review: `python3 -m tools.loop replay a5b94b2706ad71c6`.
- **The legacy order-hold idea is closed.** Its one significant result (generation 1 validation, +0.157 on one battle a map)
  does not survive three seeds a map.
- **A legacy root cause found, not yet fixed.** The explorer's trace: a committed flank counts the corporal in its arrival
  majority, and the corporal freezes "regrouping with the squad corporal" when the mean of his riflemen is over 10 m away
  because two of them are pinned by fire; the flank never completes, times out and is re-picked every 57 to 90 s. Next
  legacy brief: the corporal freeze itself.
- The slot-search repair has the strongest development result in the tree and nothing on validation: it helps some
  geometries and hurts others. A merge with the survivor is worth one proposal.

Harness changes made during this generation (all committed): the runner sized its pool from free pages, which exclude the
file cache, and had been fighting one battle at a time (now MemAvailable: fourteen jobs); `scripts/loop-evaluate.sh` syncs
the current harness into a worktree before evaluating; metrics parse each evaluation export once with orjson (identical
values, 5 to 8 s down to 1 to 3 s a battle); parallel compilation (38 s to 15 s); selectors and Python tests run beside the
battles; early stop on a failed cheap guard or a new selector failure; one shared validation draw per generation. An
evaluation fell from 674 s to 367 s. The tree page became a collapsed tree with generation badges, plain titles, proposals
in flight and the whole history.

## The user's replay verdict, score v4 and the sixth generation, 19 September 2026

**Verdict on the survivor (`a5b94b2706ad71c6`): rejected.** The user replayed it in Unreal and reported three things the
attack score cannot see: the soldiers do not take a covered firing position on contact ("they shoot from where they see
them at, sometimes in the middle of the road"), once some are in a firefight the rest hang back ("only a couple of
soldiers fighting"), and inside the defended buildings they move back and forth and wander into the next building. "The
drills lineage still needs more direction." The verdict is stored on the node.

**Score v4** turns the first two into guards, measured by `tools/conduct_metrics.py` from the evaluation export (observer
truth, attackers only, from their first shot) and paired against baseline legacy on the 60 development attacks:
`force_at_the_fight` (share of living attackers within 100 m of a living defender must not be significantly below
legacy's) and `fights_from_cover` (share of attacker-seconds at the fight with an enemy line of sight on the man must not
be significantly above legacy's). Both roots, the survivor and every generation 6 node were measured under v4; no digest
changed. v3 is kept as `guards-v3.json`.

Generation 6: three Sonnet proposers and three architect merges. Validation draw `generation6`. Evidence:
`.local/plan018/generation6/`.

| Node | Parent | Change | 60 dev vs lineage root | 45 val | At the fight vs legacy | Exposed at the fight vs legacy | Other guards |
|---|---|---|---|---|---|---|---|
| drills root | | | | | -0.467 | +0.029 | firing squads fail |
| `a5b94b2706ad71c6` | (generation 5 survivor) | | +0.100 [+0.035, +0.169] | +0.085 [+0.040, +0.138] (its own draw) | -0.179 [-0.231, -0.126] | +0.023 [+0.012, +0.036] | pass |
| `4cad62af1f23f394` | survivor | a plain support or help position that never establishes delivered fire reports Blocked after 30 s (trace: a squad sent to help sat 76 m from the target, out of sight, silent for 89 s until the 75 s directive lifetime expired) | +0.088 [+0.031, +0.146] | +0.051 [-0.035, +0.133] | -0.170 | +0.029 | pass |
| `a6274e53068f0f1f` | survivor | a Bound leg of the moving element prefers a catalogued covered firing position over a bare formation slot (trace: contact cover is assigned correctly; the exposure comes one drill later, when bounds end on open-ground slots and a man seen in transit halts and fires where he stands) | +0.064 [+0.009, +0.122] | +0.048 [-0.030, +0.129] | -0.150 | **+0.014 [+0.002, +0.026]** | one validation battle with two squads firing |
| `8630dc9d64b11667` | survivor | both of the above (architect merge) | +0.093 [+0.044, +0.146] | +0.035 [-0.044, +0.110] | -0.147 [-0.190, -0.102] | +0.020 [+0.007, +0.033] | the same validation battle |
| `a8455114f78c31d3`, `8519c316856a1909` | survivor | merges with the generation 5 slot-search and stale-order ideas | +0.096, +0.100 | +0.028, +0.025 (intervals cross zero) | -0.153, -0.160 | +0.025, +0.023 | pass |
| **`34bcb81ab1cc24ad`** | legacy root | a corporal holding a sergeant-ordered Flank, PullBack or BoundMove is exempt from the drift-based regrouping halt | **+0.058 [+0.000, +0.118]** | **+0.069 [-0.001, +0.150]** | +0.021 [+0.002, +0.041] | +0.013 [+0.007, +0.018] fails | friendly fire, spacing and order rate pass |

Findings.
- **No survivor under v4.** The drills chain is a third of the way from its root to legacy on force at the fight
  (-0.47 to about -0.15) and the covered-bound change halves its exposure gap; neither closes. On the generation 6
  validation draw every drills node's interval crosses zero, the old survivor's gain included in all likelihood (it was
  measured on its own draw): drills' proven gain is on development only.
- **The first legacy gain in eight proposals**, from fixing the root cause found in generation 5 rather than its symptom.
  On `city-28` the root's squad 3 corporal stands at one corner from 112 s to 494 s holding re-issued flank orders; with
  the change he leads the flank through two blocks and the battle ends with 2 defenders left instead of 6 and 20
  attackers instead of 15. It fails `fights_from_cover` by 1.3 points: a flank that happens is seen more than one that
  does not. Whether the guard should carry a tolerance is the user's decision; it was not changed.
- **The user's review of the flank video** (`tools/battle_video.py`, side by side, sent as an MP4; the user wants future
  behaviour shown this way): in both versions some soldiers stutter back and forth rapidly, and with the fix the corporal
  flanked with only part of his men, slowly, while another squad did the fighting.
- **The stutter is real, large and in shared soldier code.** New metric `stutter_share` (share of living
  attacker-seconds inside a burst of four or more direction reversals at most 1.5 s apart): legacy 3.7 % over five
  attacks, the drills survivor 0.4 %. On `city-28` the legacy squad 3 sergeant reverses 375 times and walks 355 m in
  170 s without leaving a 5 m stretch; two riflemen walk 443 m and 194 m to move 2 m. The first reading of the trace
  (a second contact flanking the shelter) was wrong and is corrected in the next section. Every controller shares this
  code, so the loop cannot touch it (lineage parity); a repair is an architect change that moves every digest and
  re-roots both lineages.
- Same battle, the under-strength flank: riflemen 26 and 27 stand 25 m behind for 170 s with zero metres walked under
  REGROUP orders, so the corporal flanks with the three men who are with him. Next legacy brief.

## The stutter fix, score v5 and generations 7 and 8, 19 September 2026

**The stutter, corrected diagnosis and repair (user: "Fix it").** Two order shuttles, neither involving an enemy:
- `BattleSim.cpp` `ChooseOrder` (shared soldier code): a man under a Hold order at a post exposed toward his order's
  sector, with no contact at all, gets an emergency shelter through `protectHold`, which accepts shelters up to 8 m from
  the post; the stale-cover rule at the top of the same function releases any shelter more than 3 m from the post when
  there is no threat. So he set off for the shelter, was released on the next decision, walked back, and was assigned it
  again, every 0.4 s. Repair: the release allows a holder's emergency shelter the same 8 m, and that shelter is kept
  alive while he holds, with or without a contact. (Refusing shelters beyond 3 m was tried first and breaks a unit test
  that pins "an idle holder exposed to his sector takes cover".)
- `CommandSim.cpp` `ClearReportedFireLane` (legacy relay): a clearing move was re-issued for eight seconds to a man
  already out of the reported lane; with a second of order transport it alternated with his real order (a flank) every
  cycle, and two riflemen shuttled at one spot for 280 s. It is kept only while he or his destination is in a lane.
Measured with `stutter_share` on five town attacks: legacy 3.7 % of attacker time before, 0.1 % after. Source
`9613abbd8e140498`, commit `885ed96`: full Linux suite, 40 references archived to `.local/baselines-pre018/stutter/`
and regenerated, 40/40 parity, 3/3 drills trace parity and a determinism repeat, Unreal module compiles on UE 5.4,
before/after video sent to the user. **Both roots score as before** (legacy +0.563 development and +0.614 validation
against +0.569 and +0.609; drills +0.252 against +0.250): the stutter was ugly, not costly.

**Score v5** (`guards-v4.json` keeps v4). Two changes: a battle the attackers won by clearing the position is exempt from
the three-squads-firing guard (the new legacy root cleared one in 422 s with two squads having fired, score +0.83;
architect's call, disclosed to the user); and, **user decision**, `fights_from_cover` allows a mean of 2 points above
legacy, because a flank that happens is seen a little more than one that never starts, while the drills conduct the
user rejected measured 2.3 points and more. The runner honours a machine share (`.local/loop/max_jobs`, currently 7, and
low priority) at the user's request.

**Third epoch (`9613abbd8e140498`), carried nodes and generations 7 and 8.** Children compare with their parent only on
the 60 development battles, which never change; each generation has its own validation draw.

| Node | Lineage, parent | Change | 60 dev vs root | 45 val vs root | Guards |
|---|---|---|---|---|---|
| **`0321f54854ba31db`** | legacy root (gen 6 carried) | a corporal on a committed flank is exempt from the regrouping halt | +0.099 [+0.052, +0.150] | +0.077 [+0.028, +0.120] | **all pass: legacy's first survivor**, value 0.642 against the root's 0.614 |
| **`db5db5ec5a560586`** | `0321…` (gen 7 carried) | the fire team covering a bound is left out of the flank leg's arrival majority | +0.118 [+0.061, +0.184] | +0.078 [+0.009, +0.151] | all pass, value 0.623; the user saw the squad that called the flank stop committing its men |
| `123c7ac3836794c7` | `0321…` (gen 8, architect variant) | a covering rifleman more than 45 m behind the corporal closes up instead of covering | +0.103 [+0.052, +0.150] | +0.071 [+0.013, +0.134] | all pass, value 0.627 |
| `b0653592d675647f` | `0321…` (gen 8) | the same at the 14 m regroup threshold | +0.087 [+0.033, +0.147] | +0.067 [+0.007, +0.133] | all pass, value 0.621 |
| `ce92c23cb29a1c62` | `0321…` (gen 8) | flank candidates are scored toward the far end of the known enemy group on their side, not the nearest known man | +0.087 [+0.031, +0.143] | +0.055 [-0.009, +0.116] | all pass, no value gain |
| `84602e20ebc000b9` | drills root (chain through gen 6 carried) | seven accepted proposals | +0.108 [+0.049, +0.167] | +0.070 [+0.001, +0.136] | at the fight -0.148, exposed +2.4 points |
| `6f0e6426015852e6` | drills `8630…` (gen 7, second epoch) | with no enemy known a static-defence attacker marches in one Travel stage instead of traveling overwatch | **+0.145 [+0.076, +0.209]** | **+0.215 [+0.141, +0.293]** | three development battles without a shot (maps 34, 37); at the fight -0.165; first shot 102 s against the parent's 178 s and legacy's 62 s; **gated on the scenario type**, which a controller must not know |
| `5016c14a19a272c3` | drills `8630…` (gen 7, second epoch) | a different nearest defender within 40 m is not a changed enemy group (no new FightHere directive) | +0.056 [+0.010, +0.105] | +0.154 [+0.094, +0.225] | at the fight -0.160; below its parent's +0.093 on development |
| (not evaluated) | drills `8630…` (gen 7) | scoring bonus for support positions protected from every known contact | | | proposer's own ten: exposure +3 points worse; withdrawn |
| `bc972c5163914724` | legacy `34bc…` (gen 7, second epoch) | the flank-pace change before carrying | +0.122 [+0.077, +0.170] | +0.049 [-0.027, +0.127] | one validation battle with two squads firing |

Findings.
- **Legacy has survivors.** The corporal fix holds on both sets after the stutter repair. Nothing in generation 8 beats it
  on the development battles (+0.087 to +0.103 against its +0.099): the loop cannot resolve effects this small.
- **The user's video observations, traced.** (1) Two riflemen of the flanking squad never leave the start building: they
  are the covering fire team of a bound whose moving team is 95 m away; the relay re-issues BoundCover at their own
  position every cycle and any regroup order is overwritten within two seconds. Closing them up at 14 m fixes what is
  seen (both within 13 m of the corporal at 300 s) but pulls covering fire off ordinary bounds; at 45 m one man closes
  by 300 s and the other only by 500 s. Not solved. (2) The flank goes at the enemy's front: the sergeant's flank
  candidates are all scored by approach to the single nearest known contact, and in that battle he never learns of the
  lone defender, so no knowledge-only rule could have taken him first. Aiming at the known group's end helps the three
  hardest maps (+0.15 to +0.73 on one) and loses elsewhere. (3) In the flank-pace build the squad that called the flank
  stops committing its men: noted on the node, not yet worked on.
- **Drills approaches too slowly and too carefully.** With no enemy known, a blind corridor ahead switches a squad to
  traveling overwatch, the same alternating-element machinery as bounding under fire, so the platoon halts and swaps
  elements every 40 m for three minutes. Marching instead gives the largest attack gain in the tree, and exposes a
  second defect: a squad pulled off its first firing position by a HelpSquad order that then never fires, and three
  battles in which nobody fires. Next drills briefs: the same change without the scenario gate (the general version
  broke D03 and D09, which exercise that path just before contact), and the silent battles.
- Other drills findings from the proposers' traces: the squad assault sequence never runs on these maps because the
  flank search finds no covered route; most remaining exposure is in the base of fire's stationary positions at 30 to
  60 m, protected only against the one target they were chosen for.
- Harness faults found and fixed during these generations: a waiter that matched its own command line; the
  evaluate wrapper broken for one queue by a misplaced `exec`; conduct metrics missing on nodes measured before score v4
  (they show as failing the conduct guards; they are closed nodes and were not re-measured).

Next, at the user's request: [plan 019](019-fire-on-the-move.md), fire on the move, a shared soldier-code change that
re-roots both lineages again.

## Fire on the move, the fourth epoch and generation 9, 20 September 2026

**Plan 019 landed** ([plan](019-fire-on-the-move.md), commit `4624840`, source `24e7fba35634d590`): soldiers on an attack
movement fire while walking, with the user's rulings (only on an attack, flanks quiet, 80 % pace, the gun from the hip).
Both lineages were re-rooted. Paired over the same 60 development battles, fire on the move changed neither root
measurably (legacy attack score -0.029 [-0.083, +0.026], drills -0.018 [-0.058, +0.031]; shots, losses, exposure and
friendly fire all inside their intervals). The legacy survivor carried forward (`e536f82ee9608605`) is +0.138
[+0.075, +0.201] on development and +0.015 [-0.066, +0.092] on its new validation draw: not a survivor in this epoch.
Its validation gains on three draws were +0.069, +0.077 and +0.015: a draw of 15 maps moves that much.

**The user's verdict on the legacy survivor** (three replay videos): "Flanks are still thin... squads still aren't
utilizing all of their men. Also the flanking still doesn't work, they do not go on a flank to put more fire on the
enemy." Two new conduct measures (`tools/conduct_metrics.py`): `flank_fire_share` (share of a squad's aimed rifle rounds
reaching the target 45 degrees or more off the line from the target to the squad's own machine gun) and
`flank_fire_squads`; legacy root about 0.01, no squad. `engaged_firing_share` was already there: 0.19 to 0.23 for legacy.
The user also corrected the architect: **loop proposers are Sonnet**; an Opus proposer launched for the larger flank
brief was stopped and the brief re-issued to Sonnet in three ordered steps. Briefs now share one rules file
(`.local/loop/briefs/`), and the user allowed more proposers at once (five in generation 9, all cores).

| Node | Lineage, parent | Change | 60 dev vs root | 45 val vs root | Guards |
|---|---|---|---|---|---|
| **`a6ac2f2526ec1b34`** | legacy `e536…` | a flank candidate qualifies as a firing position with a clear line to the known enemy, 25 to 60 m from him, 45 degrees or more off the squad's own gun; the rifle group moves as one during a committed flank; an arrived flank that is delivering fire holds | **+0.189 [+0.124, +0.264]** | **+0.138 [+0.039, +0.234]** | friendly fire significantly down (-1.9 [-3.1, -0.7]); flank fire share 0.13 against the parent's 0.09; **fails only `fights_from_cover`, 2.29 points against the 2.0 tolerance** |
| (withdrawn) | legacy `e536…` | firing-position search radius 12 m to 20 m | | | proposer's own set flat on participation, friendly fire up; finding: a Hold rifleman may only fire at an enemy he has personally seen in the last six seconds (shared soldier code), which caps what command-level positioning can do for participation |
| **`03491c1460892ae9`** | drills `a52f…` (chain + march) | a no-contact advance leg is complete within 25 m, not 12 m: a column on a narrow street never brought its centroid within 12 m, restarted the same leg for ten minutes and froze the platoon (the three battles without a shot) | **+0.245 [+0.168, +0.322]** | **+0.160 [+0.105, +0.217]** | no silent battle; at the fight -0.069 [-0.106, -0.030] (was -0.18); exposed +2.25 points; both still fail |
| `59793720dd0307bd` | drills `a52f…` | accepting any new drill clears an unfinished help approach (a stale flag returned early before the no-evidence timeout could run: one squad silent for a whole battle) | +0.155 [+0.060, +0.265] (parent +0.171) | +0.117 [+0.015, +0.211] | as the parent; a correct fix with no measurable gain |
| `4163eda5ad775894` | drills `a52f…` | march rule restated as no enemy known, over 170 m to the destination and no blind corner ahead | +0.103 (the chain without the march) | +0.022 | the destination is the 60 m leg, so the rule never fires: the march is undone |
| `e89e53878c35eb05` | drills `a52f…` (architect) | march when the platoon directive carries an advance lane | stopped early | | breaks selector Q01 (no squad chooses support under a platoon intent) |
| `a52fe037dc125e5e` | drills chain + march, carried | | +0.171 [+0.080, +0.274] | +0.154 [+0.074, +0.237] | three battles without a shot (maps 34 and 37), now explained and fixed by `0349…` |

Findings.
- **Both lineages are one guard-width from a survivor**, and both best nodes are the largest gains measured so far.
- A latent test premise surfaced: the whole-battle sweep asserted a terminal impact for every round with a victim; a
  round that has exited a body and is still in the air when the battle ends has none. The unchanged source shows it on
  3 of 40 other seeds. The assertion was restated (`1a7a51c`); no simulator change.
- The march rule still carries a scenario gate. Third restatement, under evaluation as generation 10: the platoon
  commander marks a no-contact leg as a march while the ordered objective is more than 100 m away, and the squad
  marches only on that order (`7e022bced6c6259e`).
Generation 10 (four Sonnet proposers): legacy on `a6ac…`: a covered approach for the flank, and what the flank group
does after it arrives; drills on `0349…`: squads that reach the fight late, and base-of-fire positions covered from
every known enemy.

## Generation 10, 20 September 2026

Four Sonnet proposers and three architect variants of the march rule. Evidence: `.local/plan018/generation10/`.

| Node | Lineage, parent | Change | 60 dev vs root | 45 val vs root | Guards |
|---|---|---|---|---|---|
| **`fe7696c3cf753277`** | legacy `a6ac…` | an arrived flank holds while engaged or for 25 s after its last effective fire, unless in emergency (the hold dropped the instant a defender ducked, and HOLD and FLANK orders alternated every 2 to 8 s for whole battles, so riflemen never got their firing slots) | **+0.203 [+0.135, +0.278]** | **+0.175 [+0.099, +0.251]** | friendly fire -2.2; fails only `fights_from_cover` (+2.31 points) |
| (withdrawn) | legacy `a6ac…` | flank candidates charged for their route's exposed seconds | | | proposer's set: exposure -0.2 points for -30 % flanking fire; stronger weights made exposure worse |
| `2337be6cb8e4c0d7` | drills `0349…` | a squad reacting to or closing on its own contact refuses the radio hand-off into another squad's passive support wait | +0.219 [+0.138, +0.303] (parent +0.245) | +0.215 [+0.143, +0.289] | neutral; at the fight unchanged (-0.066) |
| (withdrawn) | drills `0349…` | base-of-fire candidates seen by any known contact sorted last | | | proposer's set: score -0.08, exposure +2 points: it trades the line onto the target for concealment |
| `7e022bced6c6259e`, **`020643643985b080`** | drills `0349…` (architect) | the platoon commander marks a no-contact leg as a march while the ordered objective is more than 100 m / 60 m away; the squad marches only on that order | +0.122, **+0.123 [+0.045, +0.199]** | +0.168, **+0.179 [+0.110, +0.250]** | every selector passes; half the gated rule's development gain, whatever the distance |
| `02cbe15d8b19b9dd` | drills `0349…` (architect) | the same, plus marching under any live FightHere/HelpSquad directive | stopped early | | breaks D03 |

Findings.
- **What the exposure guard measures.** The covered-approach proposer split the flank node's extra exposure: most of it is
  stationary men in their firing positions, not the approach. Paired against the legacy root on the 60 development
  battles, the frozen evaluator's `exposed_without_firing` (stationary, in an enemy's sight, no shot available) is
  unchanged for the flank node (+0.16 s per soldier [-0.49, +0.86]) while its total exposed share is +2.29 points; it
  loses no more men (+0.8 points) and puts 19 points more defenders out of action. The same measure is significantly
  worse for drills (+3.85 s [+2.77, +4.86] for its best node), which is what the user described there. The architect
  asked the user whether `fights_from_cover` should measure that instead; the guard was not changed.
- **The drills mainline is now the ungated march** (`020643643985b080`): a controller may not know the scenario type, so
  the gated nodes (`a52f…`, `0349…`, `2337…`) cannot be promoted whatever they score. Generation 11 asks where the other
  half of the gain came from.
Generation 11 (four Sonnet proposers): legacy on `fe76…`: why most squads never commit a qualifying flank
(`flank_fire_squads` is 0.05), and what a squad does after the enemy in front of it is dead; drills on `0206…`: which
no-enemy-known situations the gate marched through, and the passive support waits.

## Generations 11 and 12, score v6, plan 020 and the fifth epoch, 20 September 2026

**A WSL crash** (memory: fourteen battles plus four proposers, each free to trace at 5 GB) interrupted generation 11.
Nothing was lost: commits and worktree diffs survived, the half-made node was re-evaluated with `--force`, and the three
interrupted proposers were resumed from their transcripts. Since then traces go through a machine-wide lock
(`.local/loop/trace.lock`), proposers run three lean battles at most, and the loop's pool is capped at ten.

**Score v6 (user decisions).** `fights_from_cover` now counts `idle_exposed_share`: attacker-seconds at the fight in which
the man stands still in an enemy's sight with NO shot of his own, not every second he is seen (the flank nodes were
seen more because they shoot more and lost no more men). The architect's first evidence for the change came from the
frozen evaluator's both-teams measure; on the attackers-only measure the flank nodes are +0.22 points above legacy's
0.75 %, reliably, which the architect reported to the user before any node was called a survivor. The user then set a
tolerance of half a point. The old measure stays as a loose backstop (`seen_at_the_fight`, 4 points). **Legacy survivors
under v6:** `fe7696c3cf753277` (value 0.651 against the root's 0.552) and its parent `a6ac2f2526ec1b34` (0.591).

**The user's verdict on `fe76…`** (four replays): it does flank, but "the squads keep moving around very rapidly when
there are still enemies", men cross open ground "when they should do a safer path if they know enemies are around" and
are shot, some are left in the backline, two squads stood split outside a building: "a lack of general intelligence".
Measured: soldiers do not forget the enemy (4 to 6 % of the time near a defender they have faced); they are re-ordered
every 6 to 9 s and start a new move every 15 to 25 s, and a third to a half of all wounds are taken while displacing.
New conduct measures: `moves_per_soldier_minute`, `orders_per_soldier_minute`, `moving_share`, `wounded_moving_share`.

| Node | Lineage, parent | Change | 60 dev vs root | 45 val vs root | Result |
|---|---|---|---|---|---|
| **`568f3f306cc9d1a7`** | drills `0206…` (gen 11) | a squad that holds NO platoon order (deployment, or a lapsed 75 s directive) and knows no enemy marches | **+0.237 [+0.164, +0.313]** | **+0.225 [+0.145, +0.307]** | the whole gated march gain from a rule the leader can apply; every selector passes; the drills mainline |
| `c8dd2b0657f68804` | drills `0206…` (gen 11) | a squad that only supports posts its whole roster on the base of fire | +0.110 | +0.183 | friendly fire +1.4 (significant) and three other guards: closed |
| `827b74aab5a4880a` | legacy `fe76…` (gen 11) | a contact not seen for 25 s no longer holds the squad | +0.185 | +0.054 [-0.016, +0.116] | below its parent on validation: closed |
| (withdrawn) | legacy `fe76…` (gen 11) | wider flank candidate search | | | score -0.04 on its own set; finding: the gun and the flankers share one street, so flanks stay shallow, and the gun drifts toward the flankers |
| (withdrawn) | legacy `fe76…` (gen 12) | `UsefulFiringPosition` may answer "stay here" | | | a real defect, a rare trigger, a wash; finding: regroup orders re-target the corporal's live position every 2 s (up to half of relay orders) |
| `925674ad1ac39697` | drills `568f…` (gen 12) | a member whose slot is still legal keeps his order (41 to 45 % of orders at the fight went to the identical position) | stopped early | | broke D09, D10 and sprint, which its proposer had reported unchanged |

**Plan 020** ([plan](020-threat-aware-paths-and-rejoin.md), commit `1fccf05`, source `fa0ce26c574eec38`): threat-aware soldier
paths on the user's measure (seconds revealed to one known enemy, 3 s, 30 s memory, 1.5 times detour) and his cover rule
("men should never leave cover under enemy fire unless a squad wide retreat order is given or he has better cover
somewhere close by"); implemented by an Opus agent at the user's instruction. **Fifth epoch.** Paired over the same 60
development battles plan 020 moved neither root measurably (legacy score +0.014 [-0.041, +0.059], attackers lost -1.7
points [-6.8, +3.7]; drills +0.016 and -1.3 points), like plan 019 before it: about 8 % of path decisions take a covered
detour. Carried forward: **legacy `dd847612977627b1` survives** (+0.150 [+0.079, +0.222] and +0.127 [+0.033, +0.223],
value 0.641 against 0.608, every guard passing); drills `ff4aff9f66a5f5a3` +0.164 and +0.125, men at the fight 8 points
below legacy, seen-and-shotless half a point above. Legacy receives a new order every 6 s at the fight (10.0 a
soldier-minute; drills 5.6).
Generation 13 (four Sonnet proposers): legacy on `dd84…`: the regroup order that chases the corporal, and the
sergeant's re-planning cadence; drills on `ff4a…`: slot retention that keeps the drills' execution contracts intact,
and the anatomy of standing in the enemy's sight with no shot.

## Generation 13, 20 September 2026

Four Sonnet proposers on the fifth epoch, all aimed at the user's restlessness verdict. Evidence: `.local/plan018/generation13/`.

| Node | Lineage, parent | Change | 60 dev vs root | 45 val vs root | Result |
|---|---|---|---|---|---|
| **`22b8504a0d673627`** | legacy `dd84…` | a paused crossing rules out the ground within 15 m (was 6 m); the preparation clock restarts only when the best candidate moves more than 10 m (was 3 m) | +0.150 [+0.087, +0.217] (parent +0.150) | +0.159 [+0.084, +0.245] | every guard passes, value 0.692: the best legacy node; but orders, moves and wounds while moving are UNCHANGED on the 60 battles (10.1, 4.06, 42 %): its proposer's gains on thirteen battles did not hold |
| `6c847fd1f4729081` | legacy `dd84…` (measured without selectors) | a lagging man is sent to a rally point that stays put | +0.091 [+0.036, +0.153] | +0.076 [-0.009, +0.167] | orders -13 %, moves -10 %, wounds while moving 42 to 39 %, attackers lost 37.6 to 34.3 %, friendly fire down a further 1.0: the calm the user asked for, for 0.06 of attack score (defenders out 88.5 to 81 %); moves two pinned single-battle fixtures |
| **`b893ce78cc634f93`** | drills `ff4a…` | a support slot is protected from every known enemy within 12 m of its target, not from the target alone | +0.171 [+0.110, +0.235] (parent +0.164) | +0.147 [+0.088, +0.202] | seen-and-shotless 0.58 to 0.55 points over legacy (tolerance 0.50); men at the fight -0.080; the drills mainline |
| (withdrawn) | drills `ff4a…` | identical re-orders suppressed where orders are built, execution contracts intact (every selector unchanged) | | | ten of twelve check battles bit-identical: the re-orders never moved anyone |

Finding: the restlessness measure was too blunt. On two battles of the best legacy node a quarter of the "moves" at
the fight are men leaning out of cover to fire; about half are relocations of six metres or more, and those carry
nearly all the time a man is seen while moving (a relocation every 35 to 45 s). New measures:
`relocations_per_soldier_minute` and `relocation_seen_seconds_per_soldier_minute`.
Generation 14 (four Sonnet proposers): legacy on `22b8…`: what orders each relocation and which are pointless, and a
rally point that stays put but slides to cover with a line of fire; drills on `b893…`: the anatomy of the 8 points
missing from the fight, and the same relocation attribution for drills.

## Generation 14, 20 September 2026: what the restlessness is made of

Four Sonnet proposers, each told to decompose its problem with data before proposing. Evidence: `.local/plan018/generation14/`.

| Node | Lineage, parent | Change | Result |
|---|---|---|---|
| `bca46c81924eea7e` | drills `b893…` | an established base of fire more than 90 m from its objective re-seats up to 30 m closer, into a protected slot, at most every 45 s | +0.181 [+0.117, +0.249] development (parent +0.171), +0.220 validation; men at the fight unchanged (-0.080): fires in too few battles; the drills mainline |
| (withdrawn) | legacy `22b8…` | a rejoining rifleman is sent once to a covered spot with a line of fire near the corporal's destination | own set: orders -26 %, relocations -21 %, attackers lost -4.7 points, but defenders out -6.9 points and men at the fight -25.7 points: riflemen sit back on good spots while the fight moves on |
| (withdrawn) | legacy `22b8…` | `UsefulFiringPosition` keeps the present slot unless a candidate is clearly better | own set: score +0.012, relocations flat |
| (withdrawn) | drills `b893…` | members who fired from a still-legal slot are not re-seated when contact cover is re-issued | own set: score -0.016, relocations not reduced; broader versions broke D03 or cost more |

Findings.
- **Drills' missing men.** 94 % of the man-seconds missing from the fight are men 100 to 150 m out, mostly support elements
  that set up once and never moved while the nearest living defender got farther away. The architect checked whether the
  100 m ring was unfair to men who were shooting: it is not (within 100 m OR fired in the last 30 s: drills 0.778
  against 0.772; legacy 0.92; far and silent 22 % against 8 %). Wounded men are not counted as living. The larger cause
  is a different path: a squad within 70 m of a known threat under effective fire without superiority never resumes
  closure (`closeAfterCover`): the next drills target.
- **Legacy's relocations, attributed.** Of the moves of six metres or more at the fight, 46 to 52 % are made under a Flank
  order (the manoeuvre itself: the relay's formation offsets around a moving corporal, and the shared 12 m route-stage
  segmentation), 15 to 21 % under Hold with the task unchanged (the shared soldier cover decision), 13 % under Advance,
  and only 3 to 8 % come from the firing-position search that three proposals had worked on.
- **Seven proposals in three generations tried to calm the squads by deleting, freezing or damping re-positioning
  orders; every one either traded the calm for attack or changed nothing.** In both controllers the advance is MADE of
  those re-positionings: legacy closes on the enemy by continually re-seating its riflemen toward a moving corporal;
  drills by re-optimising cover slots whenever a new defender comes into view. The restlessness the user sees is the
  way these controllers move, not surplus orders on top of it. Calming it needs a different way of moving (deliberate
  bounds: few, long, covered legs with a base of fire, each man moving once per leg), which is a design change, not a
  one-mechanism proposal.

## Generation 15: plan 021 as a loop node, 20 September 2026

[Plan 021](021-legacy-attack-by-bounds.md) (the legacy attack by queued bounds with one slot per rifleman fixed at commit,
nobody left behind, a job for every squad; user rulings; Opus implementation) was evaluated as a legacy node on
`22b8504a0d673627`: **`0a562ead03f0fe75`: +0.242 [+0.165, +0.326] development, +0.246 [+0.166, +0.333] validation, every
guard passing, value 0.774 against the root's 0.608 and the previous best 0.692**; defenders out of action 97 % (88 %),
attackers lost 36.5 % (37.4 %), flanking fire 0.27 (0.15), friendly fire below the root. Without part C
(`d8395eef274a1503`) the score is the same and the seen-at-all backstop fails by a hair. Its acceptance targets on
relocations (-20 % against -30 %) and stragglers (7 % against 3 %) were not met. Plans 022 (stamina and sprint; endurance
and a new speed stat; user rulings) is being implemented in parallel. The branch was pushed to GitHub at the user's
request for the art branch.


## The sixth epoch and generation 16, 20 September 2026

[Plan 022](022-stamina-and-sprint.md) landed on source `4703559cea2e248f` and re-roots both lineages. Legacy root: attack
mean 0.611 (0.614 before), no score, because two battles of 105 have fewer than three attacking squads firing without a
clearance (map 34 seed 107: two squads put 83 % of the defenders out of action, two never fire). Drills root: 0.295,
failing squads firing and men at the fight as on every build. Carried nodes: plan 021 as `d04e3909a0b3d1f4` (every guard,
+0.200 [+0.142, +0.261] development, +0.194 [+0.128, +0.267] validation, value 0.738, clears 87 %); the drills mainline
`537691ba1ba017d7` fails selectors and its conduct guards as before.

The user replayed plan 021 on maps 39, 28, 24 and 26 and on the plan 022 root (map 39) and said: soldiers hang back too
long ("whatever it was half it"), the green squad retreats instead of flanking or facing the enemy, nobody flanks from the
bottom sooner, a man who got across a failed flank falls back although he had an advantageous spot, a rifle group
retreats when its corporal dies, one man stays behind all battle, men called to the corporal bunch up, and a squad stands
while its corporal is out in the open. The architect's trace of that last one on the root: the corporal is the only man
firing (60 rounds in 100 s from a corner), the gun never gets a line, hold scores 22 against 7 because one rifle counts
as the platoon's base of fire delivering.

| node | change | development | against parent | guards |
|---|---|---|---|---|
| `b4707cdcb9ca9e86` | the user's halved limits (10 s, 15 s) | 0.786 | 0.000 | pass |
| `ff93b76eb82e4179` | halt positions from the cover catalogue, 4.5 m apart, chosen once | 0.776 | -0.010 | pass; men within 2 m 15.1 to 13.1 %, friendly hits 6.6 to 5.4, stragglers 7.9 to 10.2 % |
| `c43b2e4a693895d2` | a rifleman who reached his slot and is clear of fire is not recalled and becomes the rally point | 0.797 | +0.010 | pass |
| `e116253398d5d6b0` | an exposed crossing waits at most 20 s for rounds on its one overlooking enemy | 0.794 | +0.008 | pass; quiet squads 0.63 to 0.37 |
| `fbf8df65bb7d7223` | without a corporal the manoeuvre is planned from the senior rifleman, not the sergeant at the rear | 0.794 | +0.008 | pass |
| `155ffe71dc4a563e` | an engaged squad's bound deadline is capped at 25 s | 0.802 | +0.015 | seen at all 4.19 against 4.0 |
| `1e68c68335ed5438` | all five and the halved limits | 0.801 | +0.015 | seen at all 4.02; flanking fire 0.249 to 0.379, quiet squads 0.43, stragglers 10.0 % |
| `f3ea7ed4a1d67932` | the same without the 25 s cap | 0.803 | +0.017 | seen at all 4.22; flanking fire 0.351, quiet squads 0.32 |

Findings: the flank is ordered within 5 s of contact and then freezes at an exposed crossing (8 to 13 pauses a battle);
the "retreat" after a corporal's death is an ordinary flank planned from the sergeant's position; the lone man behind on
map 26 is the platoon sergeant attached to squad 0, re-ordered every 4 s to an offset of the squad centre and pinned by
the stay-in-cover rule (not yet addressed). At 97 % of defenders out of action the attack score has no room left to
separate these nodes; the conduct measures and the user's eye do. Open for the user: a tolerance on the seen-at-all
backstop (both stacks miss by 0.02 to 0.22 points), and the straggler rise. Before plan 021 can land on the branch:
rename two shadowed locals in its `PlatoonSim.cpp` (MSVC C4456, found when building the stack for Unreal; done only in
the scratch overlay `.local/loop/gen16/unreal-overlay`) and resolve the `MGEncounterTests` assertion (2 of 3 dislodged)
that three proposers saw fail on `d04e3909a0b3d1f4` and that passes under the crossing and retreat changes. Proposers
left three self-matching `pgrep` waiters running for over an hour; the next brief forbids background jobs outright and
evaluations run under a tracked watcher on the log file. `tools/battle_video.py` marks a sprinting man with an amber ring
and streak and plays below 5x at a lower frame rate; videos stay at the usual speed (user). The user stopped iterations
for the night after the stack's videos and an Unreal run of `1e68c68335ed5438` on map 39 seed 107.

## Score v7 and generation 17, 21 September 2026

**Score v7 (user decision, 21 September 2026: "thats fair to increase the back stop IF we get more flanking"):** the
seen-at-all backstop `seen_at_the_fight` allows 5 points above the root instead of 4 when the node's `flank_fire_share`
is reliably above the root's on the same battles (paired 95 % interval above zero); `relaxed_by` in
`tools/loop/guards.json`, `guards-v6.json` preserved. Under v7 every generation 16 node passes every guard: both stacks
(`1e68c68335ed5438` seen 4.02, flanking fire +0.354 over the root; `f3ea7ed4a1d67932` 4.22, +0.332), the 25 s cap
(`155ffe71dc4a563e`) and the generation 17 parent `8835da3260c710b7` (4.22, +0.262; development 0.803, quiet squads
0.37 a battle, men within 2 m 13.6 %, stragglers 10.1 %). New measure `behind_corporal_share` (the user: "the cpl pushed
up first, then his men followed", "his soldiers stayed back"): rifleman-seconds 20 m or more farther from the nearest
defender than their corporal; 0.34 on the generation 17 parent. Generation 17 (five Sonnet proposers from that parent,
the last of the night): the rifle group moves with its corporal; the forward-holder rule reworked so that a held
position must be forward, on the bound just dropped and bearing on a known enemy (the user's guess that the generation 16
rule pins men back was right on reading the code: it never tests that the holder is forward); why the third and fourth
squads engage late; how the flank's side is chosen; the platoon sergeant attached to squad 0 follows in cover.

**Generation 17 results (21 September 2026, the last of the night; all five pass every guard under v7, scored against the
parent `8835da3260c710b7`, development 0.803):** a held position must be a real one `19ff60129be5c49b` +0.001 (traced: of 9
cycles in which the generation 16 rule anchored a group on a holder, none had a line of fire, one was behind his corporal,
one had no enemy known; the rework fires in 7 of 60 battles); the corporal holds 4 s when a bound starts
`8946560782173e62` -0.010, seen 4.22 to 3.21, friendly hits 6.4 to 5.3, value 0.736, and `behind_corporal_share`
unchanged at 0.34 although the proposer's own 14 battles showed -0.06; a job at once for the squad without a line
`05e33312c6b5bf9a` -0.013; flank positions checked against every known enemy `d014d4ca75496fdc` -0.021; platoon staff
follow in cover `2a96cebbbeec352a` -0.030 (the under-fire cover rule freezes them in transit). Stack of the first two,
`5b37f519e6320986`: development 0.786 (-0.017 against the parent), seen 3.27, friendly hits 5.35, value 0.733, every guard;
videos against plan 021 sent to the user. Open and first for the next session: nothing moved `behind_corporal_share`, and
the late-squads trace found that `PlanPlatoon` re-scores the mover every 8 s and hands the flank to another squad before
the first arrives (map 34: squad 3 is made mover three times and first fires at 251 s): a sticky mover. With one known
contact the flank's side is close to a coin flip on unseen ground. Proposers' full suites exceed the harness's 10 minute
foreground limit when three run beside an evaluation: split the suite in the next brief.


## The user's review of the generation 17 stack, 21 September 2026

Videos of `5b37f519e6320986` against plan 021 (maps 39, 28, 24, 26, seed 107). The user: on map 39 "the Blues Corporal moves
up forward however his men doesn't follow him"; on map 28 the green squad takes a while to flank ("they should have charted
their path in segmented bounds and pathfinder to their spot faster if they had encountered no enemy resistance") and "one of
the cpls got wounded and took his entire squad with him to the backlines, he should have passed his command to his second in
command, and further down the chain"; on map 24 the green corporal "didn't find the flank in the very beginning it's only
later that his men and other men from the platoon find it"; on map 26 the men did not follow their corporal again: "the ones
at the firing position are okay not to follow them but the ones who are just in cover and haven't seen enemies they are just
standing there".

Architect's measurements on those four battles (stack binary): of the rifleman-time spent 20 m or more behind the corporal,
73 % is standing still and 87 % is by men who have not fired for 60 s. 37 % of it is a man who HOLDS A MOVEMENT ORDER (Flank
or Rally, action Advance, goal 56 to 70 m away), is not suppressed, not seen, not winded, has a route, and does not displace:
43 such episodes on maps 39 and 26, median 19 s, the longest 335 s. A trace of one (map 39, soldier 12, 120 to 205 s) shows
the corporal's relay re-tasking him every 2 to 8 s with contradictory goals: REGROUP (28, 21), FLANK (47, 21), REGROUP
(24, 3), OVERWATCH (47, 29), FLANK (24, -17), REGROUP (7, 12), OVERWATCH (47, 29), FLANK (47, 48): a flank to the north, then
to the south, regroups behind him in between; and from 181.7 s ("cover released, following a quieter flank") to 195.5 s he
stands with a flank order 49 m long and does not move, which is soldier-level (shared code) and not yet explained. On map 28
the cyan corporal is wounded at 53 s (health 66), keeps command, and between 120 s and 135 s the whole rifle group goes from
47-65 m back to 80-104 m from the enemy with him; the blue corporal at health 18 goes to the rear alone and his men stay.
Next generation's subjects: (1) one order at a time for a rifleman: the relay does not replace a movement order with a
different kind of order while the man is executing it and the squad's plan has not changed; (2) the sticky mover and a flank
side that is kept once chosen (the generation 17 late-squads finding); (3) succession: a wounded corporal hands his group to
the senior rifleman and the group is not regrouped on a man going to the rear; (4) an uncontested flank moves fast: no waits
for covering fire or for latecomers while no enemy is known on the route, bounds chained without halts; (5) architect: why a
man with a route and a movement order stands still (shared soldier code).


## Why soldiers stand with a movement order (architect, 21 September 2026, at the user's request)

Cause, in shared soldier code (`TaskExecutionPath`, `BattleSim.cpp`): a man on Flank, Rally, BoundMove or PullBack whose order
carries the squad's tactical route is pathed by `FollowCorridor`, which forbids ground more than 4 m off the route's lane. When
the man stands more than about 5 m off the lane, or his goal lies off it (a regroup on the corporal issued with the squad's
route still attached), it returns no path. The fallback "rejoin through the route entry" is gated on `s.assignment.id`, a
typed-task id that only the cognition and drills controllers set; a legacy order has none. So a legacy rifleman off the lane
gets NO path, keeps action Advance, asks again every 2 s (`path_recovery`, `no_executable_path`) and stands until his order
is replaced. One traced battle (map 39 seed 107, 200 s): 557 failed path requests against 687 executable ones among the
attackers, every one with the man or the goal off the lane (462 man off / goal on, 76 both off, 19 goal off), none without
a route. It predates the loop (the corridor is plan 010 era); plan 021's slots and the generation 16 flanks put more men off
the lane and made it visible.

Scratch experiment (`.local/loop/gen18/stall/scratch-fix.patch`, three lines: with no typed task and no corridor path the man
takes his own cautious path to the goal), eight battles of `5b37f519e6320986` (maps 39, 28, 24, 26, seeds 107 and 108):
soldier-seconds standing with a movement order 1224 to 90 a battle, `behind_corporal_share` 0.34 to 0.13, stragglers 10.3 %
to 6.0 %, quiet squads 0.25 to 0, attackers lost 43 % to 36 %, seen 8.7 % to 10.2 %; attack score 0.762 to 0.727 on the
mean, five battles better or equal and two much worse (24/108: 0.750 to 0.125, the attack fails to clear and loses 75 %;
28/108: 0.812 to 0.547), so more men at the front is not yet more defenders out: not tuned, eight battles are noise-level for
the score. A repair is an architect change in shared code that changes every legacy digest (20 legacy references, a seventh
epoch for the legacy lineage; cognition and drills set the id and should stay bit-identical): the user's decision.

## The path fix and the seventh epoch, 21 September 2026

**The path fix, the seventh epoch, memory, the exploration policy (21 September 2026).** The user asked why soldiers stand
with a movement order. Cause, in shared soldier code (`TaskExecutionPath`): an order that carries the squad's route is
pathed inside a 4 m corridor, the fallback that rejoins through the route entry ran only for typed tasks
(`assignment.id`, set by cognition and drills, never by legacy), so a legacy man off the lane, or sent to a goal off it,
got no path and stood until his order was replaced (557 failed path requests against 687 good ones in 200 s of one
battle). Fixed at the user's instruction on source `a2c3182b1b6177d8` (`offLanePaths`, `--no-off-lane-paths`; pin test;
cognition references 20/20 untouched and drills bit-identical on all 60 development attacks; legacy references
regenerated; full suite, 126 Python tests, Unreal compiles). **Legacy root: development 0.586 to 0.705, validation 0.611
to 0.744, clears 35 % to 63 % and 31 % to 76 %, defenders out 77 % to 91 %, quiet squads 0.9 to 0.4, every guard passes;**
attackers lost 36 % to 42 %, friendly hits 8.2 to 9.2. The five best legacy nodes carried onto it all still beat the root
by about +0.10 (plan 021 `8888a49d0a244677` 0.812, flanking fire 31 % against 6 %), but four now fail
`force_at_the_fight` (92.6 % against the root's 94.6 %; stragglers 6 to 7 % against 2.5 %): only the generation 16
three-fix stack `6e16adfd8b5c3ae2` passes every guard (value 0.754 against the root's 0.744).
By user ruling parents are no longer hand-picked: `python3 -m tools.loop select` (`tools/loop/policy.py`) takes, per
worker, the guard-passing node with the highest value plus an exploration bonus that shrinks with its children. It is a
hand-written seed, not Dream-RSI's method (there the policy is code an LLM rewrites and tests by replaying recorded
trees, starting from "parallel refining"; legal parents are the root and leaves): the user was told so.
A second WSL crash (kernel log: three full suites at about 10 GB each beside full-record reference battles) led to:
traced battles run lean with an identical trace (0.4 GB against 2.6 GB); the 40 references and trace parity are lean
(`tools/verify/`, 40/40 in 80 s, ten at a time); the suite releases each whole-battle record once read (11.5 GB to 6 GB,
output identical); `scripts/test-sim.sh` gives the full suite three machine-wide slots. The user does not want this kept
as a memory rule: it lives in the scripts. Generation 18 (five Sonnet proposers from `6e16adfd8b5c3ae2`): the men this
line leaves behind; the platoon keeps its mover and side; succession when a corporal is wounded (the user: "he should
have passed his command to his second in command, and further down the chain"); an uncontested flank moves fast; one
order at a time for a rifleman. The user sees only survivors.

## Generation 18 on the path-fix build, 21 September 2026

**Generation 18 on the path-fix build (21 September 2026; parent `6e16adfd8b5c3ae2` chosen by the policy, development 0.806,
value 0.754; root 0.705 and 0.744).** Four of five survive, every guard passing: the rifle group is led by whoever can lead
it `f7d7aa48ecc1e453` (the relay, regroup point, lagging test, bound origin and order authorisation were hard-wired to the
corporal's roster slot, wounded, dead or not; one recursive helper; development 0.839, +0.033 over the parent, attackers
lost 31.7 %, **value 0.799, the best of the epoch**; two suite assertions encode the old design and fail: "the sergeant
becomes the point" in `ReassessmentTests` and `MGEncounterTests` 2 of 3: to be restated if the node lands); the platoon
keeps its mover, base of fire and side `d8c602861821ae02` (role changes 24 to 2 a battle, quiet squads 0.27 to 0.17,
value 0.794; the proposer's friendly-fire alarm on two maps was noise on twenty); a gunner left behind rejoins
`03fcf0867579b9f7` (his next position was searched only within 55 m of himself; stragglers 6.2 % to 3.9 %, men at the fight
93.2 % to 94.3 %, quiet squads 0.27 to 0.43, value 0.791); an uncontested flank chains its bounds `0f005820dd9052c2` (2 s
instead of 10 s for latecomers while nobody is under fire; flanking fire 25 % to 31 %, value 0.789). Not surviving: a
rifleman keeps the order he is carrying out `075cfc94cdb385cf` (the relay re-judged "lagging" from raw distance every 2 s,
recalling a man closing on a flank goal; regroup orders halve and development is the generation's best at 0.818, but men at
the fight fall to 92.0 %, failing `force_at_the_fight`). Videos of the four survivors sent to the user. Machine: not memory
bound (16 of 30 GB, load 4 to 6 of 16 cores): the wait is proposer time; next brief: the architect runs the parent's suite
once for all, six check battles at a time per proposer.


## The user's review of generation 18's survivors, and generation 19 (21 September 2026)

The user on the four videos: succession (map 36) "did it ... after the second in command took over he seemed to take a more
cautious approach than the cpl, which was nice to see"; sticky mover (map 34) "the flanks worked well, only issue is ... some
stragglers who are doing nothing take a little too long to get called up to their squad"; gunner rejoins (map 22) "the light
blue soldiers who have good positions are called back instead of pushing their advantage"; fast flank (map 28) "works a lot
better, however I did see a purple soldier run through a house an enemy soldier was in just to get into a flanking position,
which was extremely dangerous and something he should have found the safer route for".
Generation 19 (five Sonnet proposers, parents by the policy: `f7d7aa48ecc1e453` twice, `d8c602861821ae02`,
`03fcf0867579b9f7`, `0f005820dd9052c2`; the parent's suite run once by the architect for all, six check battles at a
time): a man AHEAD of his leader is not recalled and the group comes up to the advantage; idle men out of the fight are
called up promptly whatever task label they idle under; the support gun that comes up comes up to a firing position (the
gunner-rejoin node's quiet squads 0.27 to 0.43); the fast chain closes ranks at the last covered bound before contact;
one order at a time with a progress test so nobody is left behind.
The purple soldier (architect's trace of `0f005820dd9052c2`, map 28 seed 107, soldier 21): ordered on a squad FLANK to a
goal 17 m from a defender other than the tracked one, hit at 289 s (health 97 to 36), and his emergency shelter, chosen by
the shared soldier cover search, was the outside wall of the house that defender was in, 2 m from him: the search demands
protection from the threat and from VISIBLE contacts and has no term for an enemy he knows of on the other side of the wall.
It is rare: attackers spend about 18 soldier-seconds a battle within 6 m of a living defender. A scratch rule (cover within
10 m of an enemy known in the last 30 s is refused; `.local/loop/gen19/shelter/scratch-shelter.patch`) took that to 13 on six
battles with score +0.024 and attackers lost 36.5 % to 34.4 % (noise-level), and did nothing on map 28 itself, where the
rest is the flank goal's and the path's nearness to OTHER known enemies. Shared code: a repair re-roots all three
controllers; not landed; proposed to the user for the next shared-code change.
