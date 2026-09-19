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
