## Plan 018: static-defence attack scenarios and the first loop roots — 18 September 2026

[Plan 018](plans/018-static-defence-and-loop-roots.md) records the user's decisions of
18 September 2026. AI behaviour is judged on generated **city maps**; trench maps only
prove soldiers still shoot; the static authored maps stay only in parity checks. Both
**legacy and drills are roots** of the plan 016 discovery tree. The objective is the
user's own idea: an attack on **static defenders**, Ember soldiers placed in cover
(building, spread or clusters, 12 by default) who fire and duck but never leave their
position; Azure wins only by clearing them. Score v3 (`tools/loop/guards.json`) ranks on
`town-attack-val`: defenders put out of action minus half the attacker's own loss, 600 s
battles, lower bound of a cluster bootstrap. Sim source `b8f9e3b64c1fb65e`
(`--static-defence <layout> --defenders N --defence-seed S`, `-ArmyStaticDefence=` in
Unreal; `Sim/DefenceGen.cpp`), implemented by an Opus agent and reviewed by Fable, who
added two follow-ups: the drills attacker heads for its ordered objective on every leg
(it walked past it), and positions whose firing edge is within 3 m are seated first.
Off by default: 40/40 historical parity, full Linux suite, the new `--static-defence`
group and 115 Python tests pass; the six known failing selectors and scenarios are
unchanged. The Unreal module compiles on UE 5.4 on this machine (`scripts/build.sh`
now adapts only the mirror to the installed engine; the repository still declares 5.8).

First scored roots (20 development and 15 validation town attacks, evidence in
`.local/plan018/`): **legacy +0.589 mean, +0.487 lower bound**, clears 20 % of
battles, defenders lost 77 %, attackers lost 37 %, every guard passes; **drills +0.390
mean, +0.274 lower bound**, clears none, defenders lost 51 %, and it has no score
because 10 attack battles and 2 town battles had fewer than three squads firing, the
stall measured earlier the same day. Drills still beats legacy on the paired town
guards (11 points fewer men within 2 m, about 105 fewer orders a minute, less friendly
fire). Loop changes: selectors guard relative to the lineage root, parity guard as the
lineage rule (a node may change only its own controller; the defender too must stay
digest-identical), sparring rows from the root binary per epoch, `diagnose`, `brief`
and `replay` commands, exports compressed, seven parallel battles (memory bound: 3.1 GB
a battle, WSL capped at 30 GB of this host's 61.6 GB). Not yet done: proposer agents
have not been launched (Sonnet 5 default, Haiku 4.5 for narrow edits; a worktree needs
this work committed first), parameter search and the Dream-RSI policy layer. Limits
disclosed in the plan: the objective measures the attack only, and shared soldier-level
code is outside the loop's reach. Nothing is promoted; legacy remains the default.

Two generations of Sonnet proposals followed (18 and 19 September 2026; details and where to
resume are at the end of the plan). Children are scored against their lineage root on the same
battles, and raw battle output is no longer kept (battles regenerate bit-identically from a
node's frozen binary; `remeasure`). No survivor yet. Best so far: drills `8b6da91cb019eed0`,
paired +0.088 and +0.115 over its root with both intervals above zero, still unscored because
on three validation maps drills fires no shot at all, as its root does. The legacy commitment
idea lifts attacks at 2.5 s but raises friendly fire; at 1.0 s it is the root again. The user
paused the loop after generation 2. Tree page: `python3 -m tools.loop view`.

Generation 3 (19 September 2026, loop resumed by the user): drills `4192db8318921036` is one
battle of 75 from a score (its root fails 12; paired +0.085 on development); the legacy
commitment chain is retired; a legacy explorer from the root showed +0.08 to +0.23 on its own
five check maps and zero on the paired full suite, so a proposer's own check predicts little.
Three independent legacy changes raised friendly fire. User decisions the same day, recorded at
the end of the plan: a branching rule for the tree; WSL stays at 30 GB; the architect builds a
lean battle mode (frames dropped after digest and evaluation rows are folded) before
generation 4, then runs a friendly-fire ablation on scratch builds so the user can set an
absolute friendly-fire budget in place of the root-relative guard.

Generations 4 and 5 (19 September 2026): lean recording landed (`--lean`, 5 GB to 0.5 GB a
battle, identical scores, a different digest number; source `efce1ef0fb0e378a`, both lineages
re-rooted with identical development scores). The friendly-fire ablation showed avoidance is
not the brake (switching it off does not raise the attack score; hold-fire alone halves
friendly fire), so the shared logic stays as it is. Attack maps are fought with three battle
seeds. Four proposals a generation (user decision). **First survivor: drills
`a5b94b2706ad71c6`**, every guard passing, +0.100 [+0.035, +0.169] on development and +0.085
[+0.040, +0.138] on validation against the drills root; awaiting the user's replay review
(`python3 -m tools.loop replay a5b94b2706ad71c6`). Legacy has no gain after seven proposals;
its next target is a corporal who freezes waiting on pinned riflemen. An evaluation now takes
about six minutes. Details at the end of the plan.

Generation 6 (19 September 2026): the user replayed the survivor and **rejected it** (soldiers fire from where they stand,
most of the force hangs back, back-and-forth in buildings). Score v4 adds two conduct guards paired against legacy on the
development attacks, `force_at_the_fight` and `fights_from_cover` (`tools/conduct_metrics.py`); under v4 no node survives.
Drills: at the fight -0.47 (root) to about -0.15 below legacy; a covered-bound change (`a6274e53068f0f1f`) halves the
exposure gap; drills' gain is proven on development only. **Legacy's first gain**, `34bcb81ab1cc24ad` (a corporal on a
committed flank no longer halts to regroup): +0.058 [+0.000, +0.118] and +0.069 [-0.001, +0.150], failing only
`fights_from_cover` by 1.3 points; whether that guard gets a tolerance is the user's open decision. The user reviews
behaviour from side-by-side videos (`tools/battle_video.py`) and saw a rapid back-and-forth stutter: measured by the new
`stutter_share` (legacy 3.7 % of attacker time, drills 0.4 %) and traced to the shared soldier cover decision in
`BattleSim.cpp` (first reading of the trace was wrong; the corrected cause and the repair are in the next
paragraph); outside the loop's reach, so a repair is an architect change that re-roots both lineages. Details at the end of
the plan.

Stutter fix, score v5, generations 7 and 8 (19 September 2026): the stutter was two order shuttles with no enemy
involved (a holder's emergency shelter offered up to 8 m from his post and released beyond 3 m, in shared
`BattleSim.cpp`; a clear-lane move re-issued to a man already out of the lane, in legacy `CommandSim.cpp`), fixed by the
architect at the user's instruction on source `9613abbd8e140498`: stutter 3.7 % to 0.1 % of attacker time, both roots
score as before, full suite, 40 references regenerated (40/40, 3/3 trace parity), Unreal compiles. Score v5: cleared
battles are exempt from the squads-firing guard, and by user decision `fights_from_cover` tolerates 2 points above
legacy. **Legacy's first survivors:** `0321f54854ba31db` (the corporal fix carried forward, +0.099 [+0.052, +0.150] and
+0.077 [+0.028, +0.120], value 0.642 against the root's 0.614) and three children that pass but do not beat it. Drills:
marching instead of traveling overwatch while no enemy is known gives the largest gain in the tree (+0.145 and +0.215)
but leaves three battles without a shot and is gated on the scenario type; drills still has 15 points fewer men at the
fight than legacy. The user reviews behaviour from side-by-side videos (`tools/battle_video.py`); his open
observations: two riflemen of a flanking squad stay in the start building (covering team never displaced; partly
fixed), the flank goes at the enemy's front, the squad that calls a flank stops committing. The loop runs at a machine
share of 7 battles and low priority (`.local/loop/max_jobs`). Next: [plan 019](plans/019-fire-on-the-move.md), fire on
the move (user rulings recorded there), a shared soldier-code change that re-roots both lineages.

Fire on the move and generation 9 (20 September 2026): [plan 019](plans/019-fire-on-the-move.md) landed on source
`24e7fba35634d590` (walking fire on attack movements with heavy penalties, user rulings in the plan; implemented by an
Opus agent, reviewed and extended by Fable; full suite, 40/40 references regenerated, 3/3 trace parity, Unreal
compiles); it changed neither root's attack score measurably. **Loop proposers are Sonnet** (user correction; an Opus
proposer was stopped). After watching the legacy survivor the user said flanks are thin and "do not go on a flank to
put more fire on the enemy"; new measures `flank_fire_share` and `flank_fire_squads`. Generation 9 (five Sonnet
proposers) produced the best node of each lineage, each failing by a guard-width: legacy `a6ac2f2526ec1b34`, a flank
that qualifies a firing position at an angle and moves the rifle group as one (+0.189 [+0.124, +0.264] and +0.138
[+0.039, +0.234], friendly fire down, exposure 2.29 points against the 2.0 tolerance); drills `03491c1460892ae9`, the
25 m arrival radius that ends the silent battles (+0.245 and +0.160, men at the fight -0.069, exposure +2.25 points).
Generation 10 is running on both. The march rule in drills still carries a scenario-type gate that the architect is
replacing. Details at the end of plan 018.

Generations 11 and 12, score v6, plan 020 (20 September 2026): after a WSL crash (memory) traces run through a
machine-wide lock and the loop pool is capped at ten. Score v6 by user decision: `fights_from_cover` counts standing
still in an enemy's sight with no shot of one's own (`idle_exposed_share`), half a point of tolerance, with the old
seen-at-all measure as a 4-point backstop. The user's verdict on the best legacy node: it flanks, but squads keep moving
rapidly while enemies remain, men cross open ground and are shot, some are left behind: "a lack of general
intelligence"; measured as a new order every 6 to 9 s and a third to a half of wounds taken while displacing (new
restlessness measures). Drills found its march rule without a scenario gate (`568f3f306cc9d1a7`: a squad with no platoon
order and no known enemy marches; +0.237 and +0.225). [Plan 020](plans/020-threat-aware-paths-and-rejoin.md) landed on
source `fa0ce26c574eec38` (covered soldier paths on the user's 3 s revealed-to-one-enemy measure; a man in cover under
fire stays except for a squad retreat or better cover close by; Opus implemented at the user's instruction; full suite,
40/40, 3/3, Unreal compiles); like plan 019 it moved neither root measurably. **Fifth epoch: legacy
`dd847612977627b1` survives** (+0.150 [+0.079, +0.222], +0.127 [+0.033, +0.223]); drills `ff4aff9f66a5f5a3` still fails
men at the fight and seen-and-shotless. Generation 13 is on restlessness in both lineages. Details at the end of plan 018.

Plans 021 and 022, the sixth epoch and generation 16 (20 September 2026): [plan 021](plans/021-legacy-attack-by-bounds.md)
(the legacy attack by queued bounds, one slot per rifleman, nobody left behind, a job for every squad; user rulings; Opus)
exists only as a loop node and is the best legacy survivor. [Plan 022](plans/022-stamina-and-sprint.md) (stamina and the
sprint to cover; toughness renamed endurance, a new speed stat; user rulings; Opus) landed on source `4703559cea2e248f`
(full suite, 40/40, 3/3, Unreal compiles) and re-roots both lineages: legacy root attack mean 0.611 but it now fails the
squads-firing guard on two battles of 105; drills root 0.295, failing as before. Plan 021 carried onto it is
`d04e3909a0b3d1f4`: every guard passes, +0.200 [+0.142, +0.261] development, value 0.738. The user's replay notes on it
(men hang back, a squad retreats instead of flanking, no flank from below, a man who crossed is recalled, men bunch when
called together, a squad stands while its corporal fires alone) became five Sonnet proposals; the user's "halve it" on
the waiting limits (10 s and 15 s, `b4707cdcb9ca9e86`) changes nothing measurable. Four pass every guard and none moves
the attack score: halts in cover and spread out `ff93b76eb82e4179`, a forward man keeps his ground `c43b2e4a693895d2`,
an exposed crossing goes after 20 s `e116253398d5d6b0` (quiet squads 0.63 to 0.37 a battle), a group without its
corporal plans from where it stands `fbf8df65bb7d7223`; the 25 s cap on a stalled bound `155ffe71dc4a563e` misses the
seen-at-all backstop (4.19 against 4.0). Stacked, flanking fire rises from 25 % to 35 to 38 % and men within 2 m fall
from 15.1 % to 13 %, but both stacks miss the same backstop by a hair (`1e68c68335ed5438` 4.02, `f3ea7ed4a1d67932`
4.22) and stragglers rise to 9 to 10 %. The user has the side-by-side videos and an Unreal run of the five-fix stack and
stopped iterations for the night; open: whether the backstop gets a tolerance, and the straggler rise. Known defects to
fix before plan 021 can land: two MSVC shadowing errors in its `PlatoonSim.cpp` (Unreal build) and the
`MGEncounterTests` assertion (2 of 3 dislodged) that fails on `d04e3909a0b3d1f4`. Details at the end of plan 018.

## Plan 017 phase 3 landed — 18 September 2026 (plan complete on Linux)

Sway and recoil are on source `4f1deaa79cc1a897`: the aim point wanders on two
incommensurate periods with an amplitude set by ergonomics, dexterity, stance and
suppression, and every shot adds a recoil kick that decays with a quarter-second time
constant at the reference, so sustained machine-gun bursts settle near three kicks and
walk upward until the 18-round pause. Phases and recoil direction are hashed from the
roster slot; the RNG draw order per shot is unchanged. Trace, evaluation export, digest,
fingerprint and the inspector carry sway and recoil. Full Linux suite, `--stats` and
102 Python tests pass. References archived to `.local/baselines-pre017/phase3/` and
regenerated: 40/40 parity, 3/3 trace parity plus a determinism repeat
(`.local/plan017/phase3/`). Informational acceptance: development 8/9, held-out 21/30
(8/9/4). Reference battles, phase 2 -> phase 3 mean shots and winners azure/ember/draw:
candidate90 works 1259 -> 1531, 7/2/1 -> 5/5/0; candidate90 trenches 571 -> 808,
5/5/0 -> 5/4/1; legacy works 2380 -> 3171, 2/8/0 -> 4/5/1; legacy trenches 1974 -> 2918,
4/5/1 -> 3/7/0. Shots per battle rose about a quarter with hits roughly flat: the
accumulated recoil lifts sustained fire by about 12 mrad, which at 50 m and beyond
passes over a torso aim point, so machine-gun volume now buys less than before. This is
the designed effect at the chosen constants and was not tuned; the user may want a
gunner compensation term or a different decay rate later. Failing selectors are
unchanged: D02, D07, D08, D17, `--decision-loop` deployment, `--reliability`
reconnaissance. Windows and Unreal builds remain unverified on this branch; the
inspector edits are uncompiled. The phase 2 commit had left the moved phase 1
reference paths tracked; this commit stages those deletions so a fresh checkout finds
exactly 40 reference manifests.

## Plan 017 phase 2 landed — 18 September 2026

Energy ballistics are on source `c01ca99f0842cac0`: velocity decays in flight, impact energy is
deposited through a continuous body-absorption rule, a severity roll replaces the flat
damage draw, and a round that keeps more than the exit threshold passes through the body
into whoever is behind (`Shot::victims`, one Hit event per victim, `impact` is the
terminal stop). Lead uses the drag-aware flight time. Fable corrected two details of the
plan's control flow during review: the re-run advances the sweep interpolation toward the
substep end rather than toward 1, and the delivery-report block still runs on an exit
pass. Full Linux suite, `--stats` (energy and over-penetration tests) and 102 Python
tests pass. References archived to `.local/baselines-pre017/phase2/` and regenerated:
40/40 parity, 3/3 trace parity plus a determinism repeat (`.local/plan017/phase2/`).
Informational acceptance: development 9/9, held-out 20/30 (9/9/2). Reference battles
(mean shots, winners azure/ember/draw, phase 1 -> phase 2): candidate90 works: shots 1167 -> 1259, winners azure/ember/draw 7/3/0 -> 7/2/1; candidate90 trenches: shots 515 -> 571, winners azure/ember/draw 4/5/1 -> 5/5/0; legacy works: shots 2455 -> 2380, winners azure/ember/draw 6/4/0 -> 2/8/0; legacy trenches: shots 2119 -> 1974, winners azure/ember/draw 3/7/0 -> 4/5/1.
Failing selectors are now D02, D07, D08, D17, `--decision-loop` deployment and
`--reliability` reconnaissance; D05 passes on this source. Nothing was tuned.

## Plan 017 stat system — 18 September 2026 (phase 1 landed)

The user approved [plan 017](plans/017-stat-system.md) on 17 September 2026: seven
soldier stats on a base of 100 (perception, dexterity, toughness, strength, wisdom,
initiative, composure), weapons as items with a data table, energy ballistics with
body over-penetration, and sway plus recoil. User decisions and the assumptions Fable
made without a ruling are listed in the plan; formulas are in
[docs/STATS_AND_WEAPONS.md](docs/STATS_AND_WEAPONS.md). Execution changed for this
plan at the user's instruction: Opus agents implement, Fable reviews the diff, runs
verification and commits on branch `plan-017-stats`. Fable owns the Sim sources,
fixtures, `tests/`, `tools/battle_cli.cpp` and `BattleGameMode.cpp` until the plan
lands; Astra does not edit them meanwhile. Legacy remains the playable default.

Phase 1 (stats, sampler, roster seed, weapon table, `EquipWeapon`, fire control on
the equipped weapon, magazine tracking, diagnostics and HUD) is on source
`ccaa94cdca873c23`. Full Linux suite passes including the whole-battle sweep,
102 Python tests pass, `--stats` passes. The 40 authored legacy/cognition references
were archived to `.local/baselines-pre017/phase1/` and regenerated on this source:
40/40 parity against the new references, 3/3 drills trace parity and a repeat run
for determinism (`.local/plan017/phase1/`). Frozen acceptance is informational after
plan 017: development 7/9 (layouts 3/3/1) and held-out 25/30 (10/9/6), against 9/9
and 22/30 before. Digests were re-measured, not tuned.

**Reported, not repaired:** 30 of the 35 loop mechanism selectors pass. D02, D05,
D07, D08 and D17 fail, and so do the `--decision-loop` physical deployment and
`--reliability` reconnaissance scenarios. Isolated one change at a time on unchanged
source: every fixture soldier now reacts at the reference 0.425 s instead of a hashed
0.25 to 0.60 s spread, which alone reproduces D05, D08, D17, the deployment and the
reconnaissance failures and moves D02's element separation from 13 s to 72 s; the
rifle's random cadence jitter is gone, which shifts the RNG stream and alone
reproduces D07 (90 rounds at the original area after a lift). A varied reaction
spread fails a different six, so these fixtures are sensitive to reaction timing at
the 0.1 s level rather than to lockstep as such. Per the plan no stat, weapon value,
seed or horizon was adjusted to bring them back. Two fixture premises the model made
impossible were repaired and are disclosed: cognitive variants 20/21 place the
in-lane mover beyond the gun's own 95 m friendly sight, and the reliability
physical-threat report delay is 6 s instead of 7 s. Open for the user: whether
fixtures should keep a natural reaction spread, whether initiative should map to
reaction time more steeply than linearly (in real battles half of all soldiers now
sit within 5 % of the reference), and whether D07's late fire is an AI defect to fix.

## User decision — 17 September 2026: AI accepted for now

After replaying the drills controller on the reworked maps, the user judged the AI
"good enough for now" and moved on to other features. Plans 014, 015 and 016 stand
as recorded below; no further AI review round is pending. The plan 016 improvement
loop remains available (`tools/loop/`) for when AI work resumes; its next step is a
first full node evaluation with selectors. Legacy remains the playable default
unless the user selects otherwise in game.

## Battle performance and improvement loop — 17 September 2026

At the user's request after the terrain rework, Fable measured and optimised battle
cost on generated maps. Twenty fresh seeds of both kinds all fight; per-battle wall
clock fell 14 to 30 % with every digest bit-identical (five generated-map and Works
references, 40/40 authored legacy/cognition parity, full Linux suite, Python tests,
native Windows build and tests on `1d11593db5b6514f`). Changes: the gameplay digest
is computed once per CLI battle, and line-of-sight and walkability queries are
memoised by exact arguments per geometry revision. Record memory (about 3 GB a
battle, the frames, not the maps) is the remaining structural item with a design
recorded. See [battle performance](docs/BATTLE_PERFORMANCE.md).

The plan 016 improvement-loop harness exists in `tools/loop/` with score v1, the
discovery tree, verdicts, blind pairs and generated town/trench scenario sets:
[plan 016](plans/016-improvement-loop.md), [loop guide](docs/IMPROVEMENT_LOOP.md).
No node has been evaluated with selectors yet; legacy remains the default.

## Integrated map generator — 17 September 2026

The user requested town/connected-trench generation, then explicitly requested
Unreal integration and generation built into the project. **New +** in preparation
generates and loads the next seed through the project tool and UE's bundled Python.
Map selection includes original and generated layouts; F opens roofs, G reloads.
The user's correction requires cover derived from all usable physical geometry,
not a restriction to generator-marked positions. Native face sampling, geometric
validation and revision-owned navigation caches implement that direction.
Research, controls, schema, evidence and limits: [Map generator](docs/MAP_GENERATOR.md).
Attributed Fable reviews: [initial](plans/016-map-generator-fable-review.md),
[integration](plans/016-map-integration-fable-review.md),
[performance](plans/016-map-performance-fable-review.md).
This changes map generation/integration, not AI policy or promotion. Legacy remains
the default; original maps stay selectable and historical parity is checked.

## Current AI direction — 16 September 2026 (plan 014)

After playing candidate90 the user reported squads bunching together. Three code
surveys and a research pass confirmed a structural cause: the cognition controller
gives every squad the map origin as its first objective, packs members into a 10 m
bubble with 1.1 m separation, bypasses the ally-occupancy rules, has no cross-squad
separation, and emits only five task types, so suppression and flanking do not really
exist in it. Measured median nearest-squadmate distance is 0.95 m against legacy's
7.50 m ([normal-map review](docs/AI_NORMAL_MAP_REVIEW.md)).

User decisions recorded in the attributed [plan 014](plans/014-battle-drill-controller.md)
and its [scenario and metric companion](plans/014-battle-drill-scenarios.md):

- Astra implements the new **battle-drill controller** (`--drills`, `-ArmyDrills`) in
  phases; Fable reviews each phase on request. Legacy and cognition stay selectable and
  digest-identical.
- A measured crowding hotfix on candidate90 comes first; its 28/30 historical score may move.
- Acceptance for the new controller is a distributional scoreboard on rotating generated
  validation draws plus the user's replay review. The frozen 9 and 30 cases still run and
  are reported, but they no longer gate or guide tuning. The 8/9 and 8/10-per-layout law
  below remains history for cognition only. Per-case fixes are refused in review.
- On 17 September 2026 the user amended the platoon design: [plan 015](plans/015-squad-initiative-amendment.md) replaces platoon orchestration with intent orders and squad initiative over a platoon radio; pass bar is replay review with guards. The user authorised execution on 17 September; the Step A result is recorded below.
- Squads operate as two elements (gun group and rifle group) led by the sergeant and
  corporal; officers lead the platoon. Element membership is frozen for the duration of a
  drill and reorganised only at completion. Key-personnel loss and attrition follow
  doctrine templates (gun never silent, succession culture, collapse rules).

## Plan 015 execution — 17 September 2026

Step A is fully accepted in the [Step B review](plans/015-step-b-fable-review.md):
P04–P07, 40/40 authored legacy/cognition digests and 3/3 drills trace-parity checks
pass at `69386129a292b240`. See the [Step A report](.local/handoffs/015-step-a-report.md).

The [Step B3 review](plans/015-step-b3-fable-review.md) accepts the Q02 chain
and requires a3 m arrival tolerance at movement timeout and15 m protected pause
holds. This continuation passes Q03 and D09 on its first local attempt at
`0b4a4450c274f8e9`, from `aea3516355ab7f4a`. All28 selectors pass, including all13
squad pairs and7 pins, with fixtures/assertions unchanged. The join remains enabled.
The [Step B report](.local/handoffs/015-step-b-report.md) preserves the trace evidence,
preliminary compilations and later Q03 final-bound limitations. Full Linux suite,
65 Python tests,40/40 authored legacy/cognition digests and3/3 drills trace parity
pass on this source. Final audit also finds the broad arrival ruling incomplete:
ordinary bounds with a squad-owned progress clock still lack the3 m timeout
certification. This omission is disclosed in the Step B report; tests did not
cover it. Step C's single measured build stops on the resolution guard after six
Works runs force the ten-run median to360 s, with sides retaining60% or more.
The in-flight seventh run drained; all seven have every squad firing and AARs,
but matched order rates also exceed Phase4f. See the
[Step C report](.local/handoffs/015-step-c-report.md) for every completed run,
parity evidence and the mixed Fixing/NeedSupport re-consumption loop. No remaining
distribution, Step E or Step D work follows. No post-measurement policy repair was
made. Legacy remains default; Windows and Unreal stay with the architect.


The [Step C review](plans/015-step-c-fable-review.md) accepts Step B at
`0b4a4450c274f8e9` and withdraws the absolute resolution rule and Phase4f churn
reference in favour of legacy-paired intervals. The requested repair continuation
ends at `8bf1a7eac576fba9`: all28 existing selectors and the new physical
movement-clock arrival pin pass, but strengthened Q05 fails on local attempt3.
Independent radio consumption passes its earlier mixed/standalone checks; that
fixture's exhaustion-retention predicate was vacuous, and the strengthened fixture
fails to produce the required exhausted-help then Fixing sequence. Traces show a
platoon-directed help approach and a fixing gun's invalid-geometry report. See the
[updated Step B report](.local/handoffs/015-step-b-report.md).67 Python tests pass;
protected files are unchanged. The AAR now opens with a human summary and linked
attribution before its appendices. **No new Step C distribution, full-battle
parity gate, Step E or Step D follows this local stop.** Earlier-source parity
results do not certify this continuation. Legacy remains default; native work
stays with the architect.


The [Step C2 review](plans/015-step-c2-fable-review.md) accepts the radio repair,
clock arrival certification and AAR summary, restores the original Q05 and assigns
exhaustion retention to a focused pin. This continuation passes all 31 selectors
on `4786fc9830d0c1c0`, including that pin; full Linux suite, 72 Python tests,
40/40 authored legacy/cognition digests and 3/3 drills trace-parity pairs pass.
See the [Step B report](.local/handoffs/015-step-b-report.md). Its single Step C
measurement stops after all ten Works seeds100–109 on the recalibrated remaining-
strength guard: stronger-side strength60.94% versus legacy47.19%, paired delta
+13.75 percentage points,95% interval[+8.44,+18.13]. All eight squads fire in
every run; mean2224.4 shots, NN median6.54 m and under2m share6.78%; spacing,
participation, time and both per-side order-rate guards pass. All ten AARs and
per-run/paired evidence are in the [Step C report](.local/handoffs/015-step-c-report.md).
**No Trenches or F1 distribution, Step E or Step D follows the guard failure.**
No simulation edit follows measurement. Legacy remains default; Windows/Unreal stay
with the architect. No promotion or user replay approval is claimed.

The [Step C3 review](plans/015-step-c3-fable-review.md) withdraws stronger-side
remaining strength as a guard. On unchanged source `4786fc9830d0c1c0`, Works is
reclassified as passing and Trenches seeds 100–109 are completed with ten new AARs.
All 20 authored battles have every squad firing; time and both order-rate guards
pass. Trenches spacing fails: under-2 m share 33.5549% versus legacy 31.2771%,
and mean per-run nearest-mate median 2.995347 m against the 3 m target. The
[Step C report](.local/handoffs/015-step-c-report.md) records per-run tables,
paired intervals and persistent-close-position trace evidence. **No F1 distribution,
Step E or Step D follows this guard failure.** Simulation source and protected files
remain unchanged; 73 Python tests pass, and earlier same-source C++/parity results
are inherited, not rerun. No promotion or replay approval is claimed. Legacy remains
default; Windows/Unreal remain with the architect.

The [Step C4 review](plans/015-step-c4-fable-review.md) authorises one general
halted-slot separation repair and allows a remaining measured Trenches spacing miss
to proceed to F1. This repair changes source `4786fc9830d0c1c0` to
`d9cc4c9fd6e9cec9`; 28/31 selectors pass, with Q04 (no delivered help fire),
D08 (late consolidation, no Reorganise) and D17 (crowded fallback conflicts with
scarce-cover separation/cardinality) failing. Fixtures and assertions remain
unchanged. The [Step C report](.local/handoffs/015-step-c-report.md) preserves
all three traces and the exact repair; **no repaired-source authored or F1
distribution, Step E or Step D follows the failed mechanism prerequisite**.
The remaining Trenches-spacing exception does not waive these failures. Full
Linux suite, 74 Python tests, 40/40 authored legacy/cognition digests and
3/3 drills trace-parity checks pass. Legacy
remains default; no replay approval or promotion is claimed. Windows/Unreal
remain with the architect.

The [Step C5 review](plans/015-step-c5-fable-review.md) withdraws crowded-slot
fallback and permits two bounded repair attempts before restoring the floor.
The attempts at `f31e6ff4772d7b27` and `21b85a48d9bda95c` each pass 24/31
selectors; D17 passes both and Q04 passes the second, but D08 still fails.
Each attempt passes the full Linux suite, 40/40 historical authored digests and
3/3 drills trace parity. The four files were copied from the authorised C4-entry
snapshot, restoring **`4786fc9830d0c1c0`**. Fresh measurement then completes all
20 authored and 90 F1 runs, with 20 authored AARs; 74 Python tests pass and the
protected hashes are intact. Both authored sets pass the current guards. Trenches'
under-2 m paired delta is +2.28 percentage points, CI [-0.31,+4.71], so it passes
the interval rule; its 2.995347 m NN-median target and allocation defect remain open.
**Step C stops on F1 win share:** 57/6/27 wins/draws/losses versus the exact
`a0364bff5cea6ab9` reference's 75/5/10, paired win delta -20.00 percentage points,
CI [-31.11,-8.89]. F1 engagement, spacing and both per-side churn guards pass.
The [Step C report](.local/handoffs/015-step-c-report.md) preserves every run,
paired intervals, failed repair patches and trace evidence. No post-measurement
policy change, Step E leader dials/battles or Step D presentation work follows this
non-exempt guard failure. Legacy remains default; no promotion or replay approval
is claimed. Windows/Unreal remain with the architect.

The [Step C6 review](plans/015-step-c6-fable-review.md) authorises bounded
assault/caller/support repairs and continuation after an isolated F1 win-share miss.
The identity audit over16 matched losses finds no duplicate report counting; belief
policy is unchanged. Three local attempts end at `26145f87ae81a257`, with35/35
selectors, full Linux suite,40/40 historical digests and3/3 trace pairs passing.
The single C6 measurement completes20 authored and90 F1 runs with20 authored AARs.
Both authored sets pass all guards; Trenches under2m delta+1.61pp has CI[-1.08,+4.01]
and its mean NN median reaches3.024m. F1 is61/1/28 versus75/5/10 at the exact
squad-only reference: win delta-15.56pp, CI[-28.89,-3.33], a real failure.
All other F1 guards pass. Under C6's explicit exception, Step E proceeded;
no promotion is claimed. The [Step C report](.local/handoffs/015-step-c-report.md)
records every run and the disputed10/108 stale-ratio diagnosis (new physical loss
preceded retirement). Legacy remains default; native verification stays with the
architect.

Step E is implemented as CLI-opt-in leader effects at `4c2ca48bb9c1add9`:
net delay/loss, reported-picture quality, profile-driven calls and initiative gate,
with successor-own-profile semantics. All35 prior selectors, leader contracts,
full Linux suite,77 Python tests,40/40 historical authored digests,3/3 default-drills
trace pairs and manifest/default checks pass; the selected default-drills digests
also match C6. The one equal-roster F1 role-swapped measurement completes180 battles
and90 pairs with180 AARs and no zero-shot battle. **Step E fails:** bad loses90/180,
exactly half; pairs favour good/bad/neither5/3/82. The retained F1 fixed-defender
branch also prevents the defending lieutenant from exercising all four dials;
this is an implementation/harness gap documented with trace evidence. No second
measured profile build follows. See the [Step E report](.local/handoffs/015-step-e-report.md).
**Step D is not prepared** under the stop-on-failure rule; see the
[stop note](.local/handoffs/015-step-d-report.md). No BattleGameMode edit, Windows
build, Unreal build, Fable invocation, commit, reset or stash occurred in this
continuation. Legacy remains default; no promotion or replay approval is claimed.

## Current playable default — user replay decision, 16 September 2026

The user rejected the crowding hotfix after replay: soldiers spread out but remained
passive, with only one or two firing and no movement to cover. Trenches averaged
228 shots against candidate90's 799 and legacy's 1989; Works casualty fractions
fell to 36/18% against 69/53%. The hotfix and its tests are archived at
`.local/phase0b/hotfix-final.patch`; reports remain in `.local/handoffs/`.

Legacy is the playable default while the drills controller is built. Explicit
`--cognition` / `-ArmyCognition` selects preserved candidate90. Slice A restored
simulation source `d0e577abab5319b6` before default/crash changes; see the
[restore report](.local/handoffs/014-restore-report.md). Phase 1 F1 generation and
reporting are complete at `9ce4051ccbd13ed7`: 180 development baseline runs,
40/40 authored-controller digest matches, and passing Linux verification. See the
[Phase 1 report](.local/handoffs/014-phase1-report.md). The attributed
[Phase 1 review](plans/014-phase1-fable-review.md) accepts the harness and records
passing Windows lab, Unreal and both smoke checks on `9ce4051ccbd13ed7`.

Phase 2's experimental drills source is `70abe8f2c9abc0e3`. Its one measured build
fails mechanism and per-run exit criteria and is **not promoted**; see the
[Phase 2 report](.local/handoffs/014-phase2-report.md). Legacy remains the default.
Native verification of Phase 2 remains with the architect. F2/F3, Phase 3 and the
platoon task tree have not started. No candidate141 behavior is restored.

The attributed [Phase 2 review](plans/014-phase2-fable-review.md) accepts the
foundation and corrects the exit criteria: shots and total casualties across both
sides must meet candidate90 per run; under-2 m share must not exceed legacy and
nearest-squadmate median must reach 3 m. Works and F1 also require attacking
front-line displacement at 120 s and 240 s to meet candidate90. Each side's casualty
fraction remains disclosed; surviving is not a failure. Family distributions and
the user's replay review remain required.

Phase 2b's single corrected build is `d80bca688ebe67ad`. It remains experimental
and unpromoted: D02/D04 pass, while D01/D03/D05/D17 fail. See the
[Phase 2b report](.local/handoffs/014-phase2b-report.md) for per-run corrected exits,
parity and Works diagnostics. Legacy remains the playable default. No Phase 3,
platoon task tree or F2/F3 work is authorised by this result.


The attributed [Phase 2b review](plans/014-phase2b-fable-review.md) requires committed
stages, latched arrivals and element changes only through Reorganise. It adds a
per-run own-side soldier-order rate ceiling at candidate90's measured rate.
Phase 2c's measured source is `26e028623123f46e`: D01–D04 and D17 pass, and the
production lifecycle pin passes; D05's weak-group report is fixed but its capable
control still fails on a stage deadline. The build remains unpromoted. See the
[Phase 2c report](.local/handoffs/014-phase2c-report.md). Legacy remains default;
no Phase 3, platoon task tree or F2/F3 work follows this slice.

The attributed [Phase 2c review](plans/014-phase2c-fable-review.md) accepts the
lifecycle and requires separate formation/cover generation, eligible-movement
clocks and fire-gated retreat. Phase 2d's single measured build is
`cdcfe811c96f3616`; D01–D04, D17 and lifecycle pins pass, but D05's unchanged
capable control now fails on column/corridor allocation. Its per-run tactical
exit is not met; it remains unpromoted. See the
[Phase 2d report](.local/handoffs/014-phase2d-report.md). Legacy remains default;
Windows/Unreal verification stays with the architect. No further measured
iteration, Phase 3, platoon task tree or F2/F3 follows this slice.

The attributed [Phase 2d review](plans/014-phase2d-fable-review.md) accepts
Phase 2 scope as complete and moves authored-map intensity/closure to Phase 3.
The scoreboard now uses individual paired confidence intervals rather than a
per-run conjunction; the promotion bar remains unchanged. Phase 3's single
measured source is `3231bd74bac2cef1`. D05's corridor repair passes unchanged,
as do the other Phase 2 pairs and lifecycle pins. New assault and break-contact
mechanism pairs fail, and paired F1 intervals show significant intensity and
closure regressions against Phase 2d. This build is experimental and unpromoted. See the
[Phase 3 report](.local/handoffs/014-phase3-report.md). Gun recovery is a deferred
design note. Legacy remains default; native verification belongs to the architect.
No further measured iteration, platoon task tree or F2/F3 follows this slice.

The attributed [Phase 3 review](plans/014-phase3-fable-review.md) requires
cover-sector flank search, a lane-plus-objective-disc attack area, the reviewed
exposure contract, and supported closure when no covered flank exists. Phase 3b's
single measured source is `9b338688d4ab02e0`. D06, D10, D11 and D16 pass;
D07–D09, the unchanged D04 control and lifecycle pin fail. Paired intervals show
F1 intensity and later closure regressions against Phase2d. This build remains
experimental and unpromoted; see the [Phase 3b report](.local/handoffs/014-phase3b-report.md)
for paired intervals against Phase2d and both historical controllers. Legacy
remains default. No further measured iteration, Phase4/platoon task tree, F2/F3
or gun pickup follows this slice; native verification stays with the architect.


The attributed [Phase 3b review](plans/014-phase3b-fable-review.md) requires
projected rush endpoints, blocked-attack recovery, protected pauses and emergency
BreakContact precedence. Phase 3c's single measured source is `7596d85ca9eb5318`.
D04, unchanged D07 and the corrected lifecycle pin pass; D08 reaches the assault
line but fails consolidation, and D09 passes its positive pause/resume checks
but fails the continuous-support control. F1 intensity, spacing and later closure
regress against Phase2d in paired intervals. It remains experimental and unpromoted;
see the [Phase 3c report](.local/handoffs/014-phase3c-report.md) for all paired
intervals against Phase2d and both historical controllers, per-run evidence and
remaining defects. Legacy remains default. No second measured build, Phase4,
platoon task tree, F2/F3 or gun pickup follows this slice. Windows/Unreal stay
with the architect.


The attributed [Phase 3c review](plans/014-phase3c-fable-review.md) replaces
Phase2d intensity floors with F1 win rate and casualty exchange against candidate90
and legacy, retaining passivity and spacing guards. Authored targets move to
Phase4. Phase 3d's single measured source is `f134afb1b5e7a25f`: unchanged D09
and the new sprint pin pass, but D08 fails final safe-endpoint allocation and D07
fails after blocked-attack recovery resumes original-area fire. This build remains
experimental and unpromoted; see the [Phase 3d report](.local/handoffs/014-phase3d-report.md)
for outcome intervals, per-run tables and metric limitations. Legacy remains the
playable default. No second measured build, Phase4, F2/F3 or gun pickup follows
this slice; native verification remains with the architect.


The attributed [Phase 3d review](plans/014-phase3d-fable-review.md) permits
buddy-covered final assault endpoints within 18 m, and records the outcome-first
scoreboard reading with the trench median floor deferred to Phase4. Phase 3e's
single measured source is `5d0923671a8c3c18`. Unchanged D07 now passes; D08 reaches
objective cover but still fails consolidation at its 180 s limit. All other
pairs and pins pass. This build remains experimental and unpromoted; see the
[Phase 3e report](.local/handoffs/014-phase3e-report.md) for the paired scoreboard,
per-run evidence and the same-binary deathmatch-termination diagnostic. Phase4's
conditional authorization was not activated because D08 failed. Legacy remains
default; no second measured build, Phase4, F2/F3 or gun pickup follows this slice.
Windows/Unreal verification remains with the architect.


The attributed [Phase 3e review](plans/014-phase3e-fable-review.md) accepts the
statistical scoreboard and authorizes a remote surviving defender plus a 240 s
D08 horizon. Phase3f applied only that fixture correction, source
`6ade972b0e7de642` (fixture files are included in the simulation fingerprint).
D08 still fails: after the objective defender falls at181.406 s, the battle now
continues, but the assault pauses at188.55 s and never consolidates by240 s.
All other pairs and pins pass. See the [Phase3f report](.local/handoffs/014-phase3f-report.md)
for the new evidence and explicit disagreement with a termination-only diagnosis.
Phase3 is not marked complete; [Phase4 is not started](.local/handoffs/014-phase4-report.md)
because its D08 prerequisite failed. No policy change or behavioural assertion
relaxation was made. Legacy remains default; native verification stays with the architect.


The attributed [Phase3f review](plans/014-phase3f-fable-review.md) permits close
bounds under stationary buddy overwatch, requiring delivered rounds only for
objective contacts observed within six seconds. Phase3g source `ae9ab767f6805765`
changes only that permission helper; fixtures and assertions remain unchanged.
D08 still fails, now on an earlier138.55 s readiness pause: the implementation
requires a line from each covering member, and one member's accepted position
is screened. This strict interpretation is explicitly recorded as an
implementation limitation in the [Phase3g report](.local/handoffs/014-phase3g-report.md).
All other pairs and pins pass. The user's stop rule was applied; Phase3 is not
marked complete and [Phase4 remains unstarted](.local/handoffs/014-phase4-report.md).
Legacy remains default; native verification stays with the architect.



The attributed [Phase3g review](plans/014-phase3g-fable-review.md) allowed up to
three local D08 assault-stage attempts. Phase3h passed on attempt2 at source
`a0364bff5cea6ab9`: D08 consolidates at191 s and reorganises at197 s; all13 pairs
and7 pins then pass once on that source. Fixtures and assertions are unchanged.
See the [Phase3h completion report](.local/handoffs/014-phase3h-report.md).
Phase3 is complete on its scope; this does not promote drills or change the default.

Phase4's single measured task-tree build is `3bda3ace2c9dacdc`. It fails the
mechanism exit (P01/P02/P03/P05 and seven existing squad pairs); P04 succession,
P06 expiry and all seven auxiliary pins pass. It remains experimental and
unpromoted. The [Phase4 report](.local/handoffs/014-phase4-report.md) records the
paired scoreboard, per-run evidence and implementation gaps, including weapon
attachment, Merge and corridor/area lifecycle limitations. No second measured
build follows. Legacy remains the playable default; native verification stays
with the architect. No F2/F3 or gun pickup was implemented.



The attributed [Phase4 review](plans/014-phase4-fable-review.md) accepts Phase3
scope at `a0364bff5cea6ab9` and requires persistent platoon commitments, deferred
ordinary receipts, route-buffer areas and hard corridor exclusions. Phase4b used
three local mechanism attempts, ending at `c98020b91fed4f51`. On that source,
22/26 selectors pass: twelve of thirteen squad pairs, three of six platoon pairs
and all seven pins. D03 and P01–P03 still fail; the local allowance is exhausted.
**No distribution measurement was started**, because the all-mechanism prerequisite
was not met. See the [Phase4b report](.local/handoffs/014-phase4b-report.md) for
per-attempt fingerprints, trace evidence and the remaining defects. P05 now
proves the commander belief and passes its unchanged withdrawal/control assertions.
Weapon attachment, Merge member transfer and company escalation remain Phase4c
items by the review. No Phase4c implementation follows. Legacy remains default;
Windows and Unreal verification stay with the architect.

The attributed [Phase4b review](plans/014-phase4b-fable-review.md) requires
recoverable-stage reports to remain Executing and flank corridor pairs to be
chosen jointly. Phase4c used three local attempts, ending at `982796dfe73d3f5f`.
D03 and P02 now pass; all13 squad pairs, all7 pins and4/6 platoon pairs pass
(24/26 selectors). P01's positive checks pass, but its bare-control assertion
counts a no-contact Advance waypoint as a threat sector; that disagreement is
proved with its own trace and observer diagnostic, without changing the assertion.
P03 delivers the lift but a later Support replacement permits six original-area
shots. See the [Phase4c report](.local/handoffs/014-phase4c-report.md).
The three-attempt allowance is exhausted. **No distribution measurement, full
suite or full-battle parity gate was started**, because all pairs did not pass.
Weapon attachment, Merge transfer and company escalation remain Phase4d items;
no Phase4d implementation follows. Legacy remains default. Windows and Unreal
verification remain with the architect.

The attributed [Phase4c review](plans/014-phase4c-fable-review.md) accepts the
known-enemy correction to P01 and requires platoon-owned assault-lane fire control
that survives Support directive replacement. Phase4d passes all26 mechanism
selectors on `26af0a096babc8bf` after two local P03 attempts. The full Linux suite,
40/40 authored legacy/cognition digest checks and all3 drills trace-parity checks
pass. Its **single measurement fails the engagement guard**: four completed Works
runs all have zero shots; six completed F1 runs include three zero-shot battles.
In-flight workers drained; no Trenches distribution or remaining draws were run.
The recorded6/6 F1 wins include three zero-shot, zero-casualty outcomes and do not
establish tactical success. See the [Phase4d report](.local/handoffs/014-phase4d-report.md)
for the ten per-run records, partial descriptive intervals, unchanged-source
checks and repeated Advance/leg-completion trace evidence. The build remains
experimental and unpromoted; no second measured build follows. Weapon attachment,
Merge transfer and company escalation remain Phase4e items, not implemented.
Legacy remains default; Windows and Unreal verification stay with the architect.



The attributed [Phase4d review](plans/014-phase4d-fable-review.md) requires Secure
only after attack objectives, per-squad Advance legs and a no-contact P07 pair.
Phase4e passes P07 and all26 existing selectors on its first local attempt,
source `d8586da13b539c61`; full Linux suite,40/40 authored legacy/cognition digest
checks and3/3 drills trace-parity checks pass. Its single measured build completes
all20 authored and90 F1 runs and passes every engagement guard (one zero-shot
Trenches run, seed103; none on Works or F1). F1 records71/3/16 wins/draws/losses;
its primary outcome intervals against Phase3e cross zero and its shots/spacing guards pass.
The aggregate raw-loss exchange sensitivity regresses against Phase3e.
The Phase4 exit still fails11 of18 required criteria: authored casualties/closure,
Works order rate, and authored spacing. See the
[Phase4e report](.local/handoffs/014-phase4e-report.md) for the complete paired
scoreboard,110 per-run records, terrain-stall evidence and the disclosed limitation
that the40 m loop guard is applied before route-endpoint resolution. No second
measured build follows. Weapon attachment, Merge transfer and company escalation
remain Phase4f, not implemented. Legacy remains default; Windows/Unreal stay
with the architect. No F2/F3 or gun pickup was added.



The attributed [Phase4e review](plans/014-phase4e-fable-review.md) accepts the
Advance lifecycle repair and requires supported fire-and-movement when no covered
flank exists, a45 s observation limit, P08 and resolved loop-guard validation.
Phase4f used three local attempts, ending at `01462c286da88358`. All27 existing
selectors pass unchanged, but P08 fails: its three moving squads advance at most
9.372,8.119 and3.583 m within the90 s contact window, and Reserve appears after
support is lost. Its weak control proves ratio0.627528, Fix/Observe and a bounded
Withdraw through production transport; the same-binary map-boundary diagnostic
proves route exhaustion for all four squads. See the
[Phase4f report](.local/handoffs/014-phase4f-report.md) for fingerprints, local
attempts, traces and disagreements. **No distribution, full-suite run,40-case
authored digest gate or full-battle trace-parity gate was started**, because P08
failed at the three-attempt limit.63 Python tests pass; protected files are intact.
No fourth attempt or measured build follows. Legacy remains default. Weapon
attachment, Merge transfer and company escalation remain deferred; F2/F3 and gun
pickup are not implemented. Windows and Unreal stay with the architect.

## Previous main-build decisions (history, superseded by the replay decision above)

Phase 0 measurement is accepted in the attributed
[Fable review and Phase 0b resolutions](plans/014-phase0-fable-review.md).
The four measured Phase 0b increments are left uncommitted for review:
[local report](.local/handoffs/014-phase0b-report.md). That iteration’s source
`19fe733644e046d8` fails the spatial exit and regresses engagement and existing
cognition contracts; it is not a promoted replacement for candidate90.
Phase 1 has not started.

The attributed [Phase 0b review](plans/014-phase0b-fable-review.md) replaces
first-leg retention and mandatory covering-band blocking. One corrected iteration
is recorded in [the local Phase 0b2 report](.local/handoffs/014-phase0b2-report.md).
Measured source `be61f2ac859db33c` preserves engagement in all twenty cognition
runs. The attributed [Phase 0b2 review](plans/014-phase0b2-fable-review.md)
accepts the engagement and spacing exit and confirms that plan 014 section 11
permits the own-friendly-state read; the prior defect classification is withdrawn.
Fixture amendments and the diagnostic trace relabel are recorded in the
[Phase 0b3 report](.local/handoffs/014-phase0b3-report.md), source
`b011de1fb6d44828`. The hotfix remains unpromoted pending the user's replay review
on Works, Trenches and authored layout 5 seed 107, including its method-exhaustion
limitation. Phase 1 has not started. The engagement restoration rule did not
trigger; candidate90 remains preserved in `.local/phase0b/original/`.

The user explicitly chose the best-performing saved AI as the main build, superseding
older instructions below that require promotion gates before enabling cognition.
The main simulation is candidate90 (`d0e577abab5319b6`): historical 28/30 and original
8/9. New Unreal and CLI battles default to cognition on the normal map; explicit
legacy selection and recorded-controller reruns remain supported. This is a
user-approved working baseline, **not** a claim that the earlier full promotion
criteria or 30/30 passed. Later candidate141 research and its additional contracts
are recoverable from [the experimental archive](experiments/candidate141/README.md).
See [main-build decision and verification](docs/AI_MAIN_BUILD.md). Do not silently
restore candidate141 or reapply its later behavior fixes: its historical result was
15/30. Neural-network controllers are future work, not part of this change.

# Project architect context

Read [AGENTS.md](AGENTS.md) for project law and the user-approved Astra/Fable
collaboration agreement. Astra owns delivery, implementation, visual judgment,
verification and integration. Exact model `claude-fable-5-1` provides bounded
architectural consultation using the existing subscription, in this project's
dedicated launcher session. Do not edit Astra's checkout during a review, change
models, enable API billing/extra usage, copy credentials, or delegate recursively.
The user retains scope and art authority. Report an unavailable service candidly.

Read [DESIGN_VISION.md](docs/DESIGN_VISION.md) before gameplay design and
[BATTLE_LAB.md](docs/BATTLE_LAB.md) before behavioral diagnosis.

Current first-slice plan and resolved architectural tradeoffs:
[AI_FOUNDATIONS_PLAN.md](docs/AI_FOUNDATIONS_PLAN.md).
Attributed review: [AI_FOUNDATIONS_FABLE_REVIEW.md](docs/AI_FOUNDATIONS_FABLE_REVIEW.md).
Do not mistake first-slice software regressions for tactical or visual acceptance.

## Current cognition implementation

User authorized the roadmap implementation on 14 September 2026. Each new feature
requires a specific discriminating scenario; a straight opposing-army outcome is
insufficient. Preserve the unchanged strict tactical evaluator and 8/9 target.

[Roadmap and research](plans/001-ai-upgrade-roadmap.md),
[attributed Fable implementation contract](plans/002-ai-upgrade-implementation-review.md),
[attributed Fable code review](plans/003-cognition-code-review.md), and
[Astra resolutions, scenarios and results](docs/AI_COGNITION_IMPLEMENTATION.md)
are the current context. The `--cognition` controller remains opt-in and
experimental. Focused mechanism passes do not constitute tactical acceptance.
The prior recovery controller's 2/9 result belongs to that controller alone.

Current accepted completion work: [decision-to-action loop](plans/004-decision-action-loop.md).
Earlier implementation: [decision-loop results](docs/AI_DECISION_LOOP_RESULTS.md).
The pre-reliability baseline `8a5b385e04c22185` passed the original 9/9 on Linux and Windows:
[nine-case results and recommendation](docs/AI_NINE_GATE_RESULTS.md).
Cognition remains opt-in. Frozen held-out seeds 110–119 have now been evaluated;
Both platforms scored 10/10, 7/10, 5/10 by layout, below the per-layout promotion gate.
Frozen acceptance cases: `tests/ai_acceptance.json`. Do not tune on held-out seeds.

## Character art planning

The user prefers the simplified low-poly reference with minimal facial detail.
[Modular character production proposal](plans/006-modular-character-production.md)
records Astra's proposed sequence and compatibility boundaries. This is pending
design discussion, not an accepted production scope. Fable review was unavailable
because of the subscription limit; no review of this plan is claimed.

## Ongoing AI reliability repair

[Working reliability results](docs/AI_RELIABILITY_RESULTS.md) records the current
unaccepted implementation, exact fingerprints, mechanisms and remaining failures.
Opened seeds110–119 are regression evidence; independent seeds2001–2010 remain
unopened in `tests/ai_validation_v2.json`. Preserve the frozen evaluator and360s
settings. No final promotion or new Fable approval is claimed by this checkpoint.

[Attributed reliability review](docs/AI_RELIABILITY_FABLE_REVIEW.md) identifies
cross-squad support loss, support amendments, bounded waits and local-role fixes.
Implement and verify those findings; this is not default-controller approval.

Actual subsequent architecture review: [injury capability and progress receipts](docs/AI_INJURY_CAPABILITY_FABLE_REVIEW.md). Generation-gap, temporary shelter, remaining-path and retirement-position corrections are under verification; no promotion approval is implied.

Actual subsequent review: [support preflight and protected staging](docs/AI_SUPPORT_PREFLIGHT_FABLE_REVIEW.md). Candidate91 exposes uncovered-threat waiting and unsafe gun relocation; proposed bounded handshake remains under implementation.

Actual subsequent review: [feasible approaches and persistent refusal](docs/AI_FEASIBLE_APPROACH_FABLE_REVIEW.md). Candidate103 regressions and post-refusal loops require restricted route replacement, persistent failure evidence and platoon objective revision. [Execution plan010](plans/010-feasible-approach-implementation.md) records Astra resolutions; no promotion approval.

Actual subsequent review: [firing-area consistency and safe fallback](docs/AI_FINAL_THREAT_FABLE_REVIEW.md). Planner/shooter geometry mismatch, permanent reserve directives and exposed pauses remain to be repaired and physically tested.

Current remaining-failure review: [actual Fable012 response](docs/AI_PROMOTION_BLOCKERS_FABLE_REVIEW.md). Latest candidate141 (`1abef4125efaed2a`) remains unaccepted: Linux/native Windows original8/9, historical15/30. Earlier119 was8/9 and20/30; neither certifies readiness. Independent2001–2010 unopened. See working results for exact test/platform status.

Actual latest review: [Fable013 command adaptation](docs/AI_ADAPTATION_FABLE_REVIEW.md), with [Astra implementation and explicit corrections](plans/013-command-adaptation-implementation.md). Review is advisory, not acceptance; no new validation seeds may be opened before the frozen9/9 prerequisite.
