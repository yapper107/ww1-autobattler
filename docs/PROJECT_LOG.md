# Project log

The dated history of this project: user decisions, plan milestones, measurements and handoffs.
`AGENTS.md` (identical to `CLAUDE.md`) holds only the law, the current state, the standing rulings,
the gates and an index; everything narrative lives here.

**Adding an entry.** Put a new `## <what happened> — <day> <Month> <year>` section at the top,
directly below this index, and add its row at the top of the table. Then update "Current state"
and, if a user ruling changed, "Standing rulings" in `AGENTS.md` and copy it to `CLAUDE.md`.
Older plans that say "prepend to AGENTS.md/CLAUDE.md" mean this log. Each index row must match a
`## ` heading exactly (`tests/test_project_docs.py`).

Every entry older than "Instruction files restructured — 22 September 2026" was moved verbatim from
the old `CLAUDE.md`, so its relative links are written from the repository root (`docs/X.md`,
`plans/Y.md`), not from `docs/`.

## Index

| Date | Entry | Related |
|---|---|---|
| 26 Sep 2026 | Machine-gun mechanisms authored and reviewed — 26 September 2026 | [authoring handoff](AUTHORED_SOLDIER_ACTIONS.md), [female MG review](reviews/animation-critic-pass46-female-mg-armor.md), [male MG review](reviews/animation-critic-pass48-male-shoulder-cloth.md) |
| 25 Sep 2026 | Soldier actions authored in Blender — 25 September 2026 | [authoring handoff](AUTHORED_SOLDIER_ACTIONS.md), [female pass 37](reviews/animation-critic-pass37-female-thumb-views.md), [male pass 36](reviews/animation-critic-pass36-male-pronation.md) |
| 25 Sep 2026 | Soldier animation rejected and reference study started — 25 September 2026 | [study](SOLDIER_MOTION_STUDY_2026-09-25.md), [reference page](../art/reviews/gasp/research.html) |
| 25 Sep 2026 | GASP brought onto main with destruction-aware contacts — 25 September 2026 | [plan 034](../plans/034-contextual-soldier-animation.md), [review](../art/reviews/gasp/armed-soldiers-2026-09-25.mp4) |
| 25 Sep 2026 | Grenades and building destruction merged, off by default — 25 September 2026 | [plan 032](../plans/032-grenades-and-using-the-pin.md), [plan 033](../plans/033-building-destruction.md) |
| 25 Sep 2026 | Armed GASP integration and replay cache underway — 25 September 2026 | [plan 034](../plans/034-contextual-soldier-animation.md) |
| 25 Sep 2026 | GASP sample retargeted to both soldier bodies — 25 September 2026 | [prototype](GASP_PROTOTYPE.md), [plan 034](../plans/034-contextual-soldier-animation.md) |
| 25 Sep 2026 | UE 5.8 build and soldier target rigs — 25 September 2026 | [plan 034](../plans/034-contextual-soldier-animation.md) |
| 25 Sep 2026 | Contextual animation preparation on current gameplay — 25 September 2026 | [plan 034](../plans/034-contextual-soldier-animation.md), [inputs](SOLDIER_ANIMATION_INPUTS.md) |
| 25 Sep 2026 | Covering fire made useful: Stage G is the default — 25 September 2026 | [plan 031](../plans/031-fire-and-movement.md), [tools/covering](../tools/covering/README.md) |
| 24 Sep 2026 | Plan 031 stage D measured, merged off; D2 approved; work pushed for the move — 24 September 2026 | [plan 031](../plans/031-fire-and-movement.md), [tools/covering](../tools/covering/README.md) |
| 24 Sep 2026 | Plan 031 fire and movement started — 24 September 2026 | [plan 031](../plans/031-fire-and-movement.md) |
| 24 Sep 2026 | Why covering fire does not work (W-1) — 24 September 2026 | [plan 030](../plans/030-suppression-mechanics.md) |
| 24 Sep 2026 | Azure's edge traced to Ember's search lanes; spawn lanes made the default — 24 September 2026 | [plan 030](../plans/030-suppression-mechanics.md) |
| 24 Sep 2026 | Plan 029 switches and retire-fallen made the baseline — 24 September 2026 | [plan 029](../plans/029-village-verticality.md), [plan 030](../plans/030-suppression-mechanics.md) |
| 24 Sep 2026 | Every squad a machine gunner; WSL crash clean-up — 24 September 2026 | [weapons doc](STATS_AND_WEAPONS.md) |
| 24 Sep 2026 | Overnight run: covering-fire levers measured, city2 wired and optimized — 24 September 2026 | [summary](AI_SESSION_HANDOFF_2026-09-24.md), [plan 030](../plans/030-suppression-mechanics.md) |
| 23 Sep 2026 | Village and city2 accepted and promoted; credit ray flipped; plan 030 started — 23 September 2026 | [plan 029](../plans/029-village-verticality.md), [plan 030](../plans/030-suppression-mechanics.md) |
| 23 Sep 2026 | City2 shared paving and geometry review — 23 September 2026 | [v2 report](../plans/029-city2-geometry-review-astra-report.md) |
| 23 Sep 2026 | City2 road-blending study — 23 September 2026 | [road-blending notes](../plans/029-city2-road-blending-notes.md) |
| 23 Sep 2026 | City2 street-first map family — 23 September 2026 | [city2 report](../plans/029-city2-astra-report.md) |
| 23 Sep 2026 | Curved village roads and sunken lanes — 23 September 2026 | [curves report](../plans/029-village-curves-astra-report.md) |
| 23 Sep 2026 | Village validation across multiple objectives — 23 September 2026 | [objective report](../plans/029-village-objectives-astra-report.md) |
| 23 Sep 2026 | Plan 029 simulator packages integrated — 23 September 2026 | [plan 029](../plans/029-village-verticality.md) |
| 23 Sep 2026 | Village uneven damage across parcel boundaries — 23 September 2026 | [uneven-damage report](../plans/029-village-uneven-damage-astra-report.md) |
| 23 Sep 2026 | Plan 029 village art pass — 23 September 2026 | [art-pass report](../plans/029-village-art-pass-astra-report.md) |
| 23 Sep 2026 | Plan 028: covering fire, stopped by the stop rule — 23 September 2026 | [plan 028](../plans/028-covering-fire.md) |
| 22–23 Sep 2026 | Overnight neural work, plans 025–027 — 22–23 September 2026 | [plan 027](../plans/027-schema4-training-run.md) |
| 22 Sep 2026 | Instruction files restructured — 22 September 2026 | [plan 026](../plans/026-ai-findings-fixes.md) |
| 22 Sep 2026 | MotionBricks animation research — 22 September 2026 | [MOTIONBRICKS_VIABILITY](MOTIONBRICKS_VIABILITY.md) |
| 22 Sep 2026 | Session handoff — saved 22 September 2026 | [handoff](AI_SESSION_HANDOFF_2026-09-22.md) |
| 22 Sep 2026 | Plan 025 stronger-learning neural run — started 22 September 2026 | [plan 025](../plans/025-stronger-learning-run.md) |
| 22 Sep 2026 | Five-agent exact optimization — 22 September 2026 | [ROUND4](NEURAL_TRAINING_ROUND4.md), [F28 profile](NEURAL_TRAINING_PROFILE_F28.md) |
| 22 Sep 2026 | Faster neural training builds — 22 September 2026 | [6FF profile](NEURAL_TRAINING_PROFILE_6FF.md), `tools/neural/README.md` |
| 22 Sep 2026 | Next AI work: execution audit recommendation — 22 September 2026 | [assessment](../plans/024-soldier-execution-priority-assessment.md) |
| 22 Sep 2026 | Opus 5.5 exact ray-prefetch optimization — 22 September 2026 | [PREFETCH](NEURAL_TRAINING_PREFETCH.md) |
| 22 Sep 2026 | Claude client / Opus 5.5 available — 22 September 2026 | [client update](../plans/024-claude-client-update.md) |
| 22 Sep 2026 | Four Opus performance experiments — 22 September 2026 | [OPUS_EXPERIMENTS](NEURAL_TRAINING_OPUS_EXPERIMENTS.md) |
| 22 Sep 2026 | Second exact training-battle optimization — 22 September 2026 | [PERFORMANCE_2](NEURAL_TRAINING_PERFORMANCE_2.md) |
| 22 Sep 2026 | Exact training-battle optimization — 22 September 2026 | [PERFORMANCE](NEURAL_TRAINING_PERFORMANCE.md) |
| 22 Sep 2026 | Longer neural training experiment — completed 22 September 2026 | [DURATION](NEURAL_LEGACY_RL_DURATION.md), [plan](../plans/024-longer-rl-experiment.md) |
| 22 Sep 2026 | Neural reward pilot against active Legacy — 22 September 2026 | [RL_PILOT](NEURAL_LEGACY_RL_PILOT.md) |
| 22 Sep 2026 | Neural squad pilot — 22 September 2026 | [plan 024](../plans/024-neural-squad-layer.md), [SQUAD_PILOT](NEURAL_SQUAD_PILOT.md) |
| 21 Sep 2026 | Plan 023 + art integration — 21 September 2026 | [ART_INTEGRATION_023](ART_INTEGRATION_023.md) |
| 18–21 Sep 2026 | Plan 018: static-defence attack scenarios and the first loop roots — 18 September 2026 | [plan 018](../plans/018-static-defence-and-loop-roots.md), plans 019–023 |
| 18 Sep 2026 | Plan 017 phase 3 landed — 18 September 2026 (plan complete on Linux) | [plan 017](../plans/017-stat-system.md) |
| 18 Sep 2026 | Plan 017 phase 2 landed — 18 September 2026 | [plan 017](../plans/017-stat-system.md) |
| 18 Sep 2026 | Plan 017 stat system — 18 September 2026 (phase 1 landed) | [plan 017](../plans/017-stat-system.md), [STATS_AND_WEAPONS](STATS_AND_WEAPONS.md) |
| 17 Sep 2026 | User decision — 17 September 2026: AI accepted for now | [plan 016](../plans/016-improvement-loop.md) |
| 17 Sep 2026 | Battle performance and improvement loop — 17 September 2026 | [BATTLE_PERFORMANCE](BATTLE_PERFORMANCE.md), [IMPROVEMENT_LOOP](IMPROVEMENT_LOOP.md) |
| 17 Sep 2026 | Integrated map generator — 17 September 2026 | [MAP_GENERATOR](MAP_GENERATOR.md) |
| 16 Sep 2026 | Current AI direction — 16 September 2026 (plan 014) | [plan 014](../plans/014-battle-drill-controller.md) |
| 17 Sep 2026 | Plan 015 execution — 17 September 2026 | [plan 015](../plans/015-squad-initiative-amendment.md) |
| 16 Sep 2026 | Current playable default — user replay decision, 16 September 2026 | [AI_MAIN_BUILD](AI_MAIN_BUILD.md), plan 014 phase reviews |
| by 16 Sep 2026 | Previous main-build decisions (history, superseded by the replay decision above) | [AI_MAIN_BUILD](AI_MAIN_BUILD.md) |
| undated | Early project instructions — undated, before 16 September 2026 | [plans/README](../plans/README.md), [AI_RELIABILITY_RESULTS](AI_RELIABILITY_RESULTS.md) |

## Machine-gun mechanisms authored and reviewed — 26 September 2026

Rifle checkpoint `59c963d` is pushed. The MG continuation authors ready/reload
poses, a hinged cover, feeding parts, charging handle and ammunition-pouch exchange
on both bodies. Latest focused MG reviews are female 6.0 (pass 46) and male 8.0
provisional (pass 48). Action boundaries, pouch clearance, male sleeve topology,
armor attachment and male shoulder-cloth intrusion are repaired. An 11-clip local
player preserves the reviewed views and current rifle-body regression checks.
Overall remains 4.0 and the requested 8.5 is unachieved. [The handoff](AUTHORED_SOLDIER_ACTIONS.md)
records exact review links, reproduction, regressions and remaining work. No
simulation change or AAA acceptance is claimed.

## Soldier actions authored in Blender — 25 September 2026

Jordan directed: "Make the aninations ourself." Rifle shot/bolt and reload are now
editable keyed performances on the approved female rig, retargeted to the actual
male proportions, with body/head response, supporting hand, elbow, finger and
weapon controls. MG shot/reload blocking is authored separately on both fitted
bodies. No animation-pack purchase follows this direction. GASP locomotion remains
in place; these changes do not alter simulation timing or rules.

Independent rendered-frame critique remains **4.0/10 overall**, below Jordan's 8.5
bar. Focused reviews through 26 September: female rifle reload 6.0 (pass 37,
stock clearance and support wrist improved; pressure and pickup remain obscured), male sequence 7.5 provisional (pass 36, glove fin and sleeve collapse repaired), female MG
reload/exit 4.0 (pass 12), held crouch stop 5.5 (pass 11).
The shared authored spine/gun frame, body-specific male arm fit, cached MG carry
transition and rigid belt-pouch weights address measured defects. Explicit finger
poses and ammunition seating have a subsequent correction pass. Both rifle bodies
now have articulated pouches. Exact masks preserve their existing skeletal/cloth
bindings and the male faction atlas. A measured web/cuff weight repair removes the
male glove fin, and forearm pronation repairs the extraction sleeve collapse.
Current rifle sources match those reviews. Female pressure/release weight remains
under review; hidden contacts are not assumed faulty.
Male interruption clearance is repaired. Convincing retrieval, complete MG mechanics and broad action coverage
remain open. Numerical checks and the 732-clip inventory are not visual acceptance.

Editable Blender/FBX sources, reproduction, graded captures and exact outstanding
work are in the [authoring handoff](AUTHORED_SOLDIER_ACTIONS.md). This is an
unaccepted work-in-progress checkpoint, not completion of plan 034 or the requested
animation quality. Simulation source stays `090b6da63e131f07`; its full Linux suite
and 230 Python tests passed (8 skipped). Later action revisions use native builds,
focused handling checks and completed Unreal captures; no fresh packaged or
64-body gameplay approval is claimed.

## Soldier animation rejected and reference study started — 25 September 2026

Jordan rejected the armed GASP v4 review's carry, crouch sidestep, weapon-action
continuity and vault. He directed a deep study of real soldiers and successful
games before further visual tweaks; prone waits. The reference brief records
primary sources, proposed performance requirements and code/frame evidence.
Our own current render frames were inspected. External video playback remains
unverified because the Windows browser tool rejects the WSL cwd before execution;
the study distinguishes creator breakdowns and museum transcripts/catalogues from
watched footage. No measured real-footage timings or visual approval are claimed.

Concrete findings: standing aim overwrites locomotion's upper body; carry is only a
small gun offset; procedural actions bypass the motion blend stack; both leg solves
use fixed knee poles. The neutral standing vault uses two hands, while our gun layer
occupies one. Its root-height crossing is used as a landing marker, without a
landing recovery performance, and about 0.9 seconds is stretched across the 2.2-second
review event. The brief separates confirmed code behavior from hypotheses requiring
layer-isolation renders. Existing numerical contact/replay checks are not quality
acceptance. No runtime animation changes, asset purchases or new repair render in
this research pass. The local reference page is
`C:/Users/Jordan/Documents/Codex/AnimationReviews/soldier-motion-study.html`.

## GASP brought onto main with destruction-aware contacts — 25 September 2026

Jordan's direction is integration into main. The animation worktree now includes
main `0a137f5` (grenades and destruction); animation's plan is renumbered 034 to
avoid colliding with destruction's 033. The original checkout is untouched.
No simulation source or gameplay default is changed by animation.

The combined UE 5.8.3 editor and Development packaged runtime build successfully.
Motion contacts select the recorded geometry revision at each cached step, restore
the displayed revision afterward, and update geometry before character presentation
on seeks. Instanced obstacles participate in presentation collision queries. Blast
height now places the visual body above its recorded floor; airborne feet do not
plant. The grenade reason/stun/deafness/rush contract is available to the adapter;
authored grenade action tracks remain unfinished.

The packaged motion check passes 1,381 frames × four body/weapon combinations.
A 120-second city2 battle passes 640 body/time samples, all 64 GASP bodies, 24 exact
rifle/MG shot events, pose advancement, pause, rewind and changed-rate checks.
The packaged destruction check also passes four geometry versions, backward seeks,
73 repeated debris transforms and all five destruction-event stages.
The full Python suite passes (230 tests, eight skips). Its historical digest test
now explicitly supplies the original baseline-path fixture: production hashing and
the expected digest are unchanged, and worktrees can run the same assertion.
The full Linux simulation suite passed on the pre-merge source in 1,103 seconds;
the incoming simulation is unchanged from main's separately validated source.
The engine-independent animation-context check also covers blast-height interpolation.

The updated 46-second H.264 review is tracked in `art/reviews/gasp/` with LFS.
Jordan could not see the earlier inline video, so the Windows review folder also
contains `animation-review.html`: a self-contained player with chapters and slow
playback. This is a review capture, not AAA acceptance. Prone/crawl, authored
weapon/grenade actions, contact/cloth polish and battlefield visual acceptance remain.
Jordan has added voxel vision's Free Animation Library to his Fab account; it has
not appeared in the local projects or Launcher download cache. The Windows UI tool
fails before execution because it rejects the WSL workspace URI, even after reset.
The account download/add-to-project step was left with Jordan; independent work continued.

## Grenades and building destruction merged, off by default — 25 September 2026

Jordan (25 Sep): the soldiers should use the pin (close in on pinned enemies) and grenades, with physics-based blast
and fragments; then "might be a good time to add destruction to the buildings ... You can work on that part." Jordan's
rulings are in [plan 032](../plans/032-grenades-and-using-the-pin.md) sections 8–9 and
[plan 033](../plans/033-building-destruction.md) section 9 ("we prototype"). Three Opus 5.5 agents built them in
worktrees (grenades; destruction in the simulator; destruction in Unreal); the overseer merged and integrated.

- **Grenades** (`--grenades azure|ember|both`, game `-ArmyGrenades[=...]`, Legacy only, off): 1–2 per man (gunners
  none), 50/50 fragmentation (70 g TNT, 0.55 kg casing) or concussion (US Mk 3, 170 g, fibre); throws at pinned or
  known enemies from reports only; close-ins on pinned enemies; dives, runs and skill-checked throw-backs; friendly
  fire, no duds; "make it safer" (no friend within 15 m of the aim, the thrower 20 m away unless in cover).
  Physics: Kingery–Bulmash blast, Bowen lethality, Hirsch eardrums, knockback from the net impulse, a Mott fragment
  population flown as projectiles. Calibrated: a standing man in the open at 5 m from a fragmentation grenade is
  out of action with p 0.50 (E_v 137.9 J; 0.98 at 2 m, 0.22 at 8 m; prone 0.19 at 5 m); the concussion grenade puts a
  man out of action only within about half a metre in the open (60% killed there; in a room at 1 m survival 0.0005),
  stuns 8 s within 1 m and throws a man 0.98 m at 0.5 m.
- **Destruction** (`--destruction`, `--test-charge x,y,z,kg,time`, game `-ArmyDestruction`, off): every explosion
  (test charges, and grenade bursts when both are on) loads wall panels (village stone, city2 brick, timber sheds;
  no concrete), window panes and sheds; single-degree-of-freedom response, FM 5-250 breaching, glass at 7 kPa;
  walls crack, breach or go, sheds break, glass shatters and flies, storeys collapse; debris and glass are
  projectiles; one geometry revision per explosion with incremental cache updates; soldiers learn of changes by
  seeing them. Grenade-scale anchors: walls outdoors only crack; windows within 6 m shatter; sheds within 1–2 m
  break; 0.5 kg in contact breaches one brick; a 2.2 kg charge at 2–3 m breaches one brick but only cracks the
  maps' 0.5 m walls. Cost: 90 s village battle 4.20 s off, 4.23 s with five charges.
- **Unreal:** geometry changes shown during playback (walls hidden, split, rubble added, storeys falling), debris
  chunks and dust, window glass until it shatters, grenades in flight, a flash and smoke per burst.
  `-ArmyTestDestruction -ArmyDestructionCapture` (fabricated) and `-ArmyBlastCapture` (a real battle) take stills.
- **In battle** (8 battles, both sides with grenades): 6–21 bursts per battle, 0–4 casualties from them; they crack
  up to 25 walls and shatter up to 22 panes per battle; one burst beside a timber shed destroyed it (city2 E-6 7535,
  seed 107; top-down video sent). Indoors, the room's ×3 pulse lets a grenade blow out a thin (0.23 m) wall within
  about 2 m; the maps' 0.5 m walls only crack.
- **Gates:** off byte-identical (40/40 lean parity; E-6 8/8 digests); `sim_tests --grenades` and `--destruction`
  pass, including a new check that every burst reaches the explosion queue; with each switch on, the merged build
  equals its module's own build digest for digest (grenades 4/4 E-6, destruction 2/2); Unreal build (no new
  warnings) and the fabricated-destruction capture pass; full suite and Python tests pass; source 090b6da63e131f07. The Kingery–Bulmash fits live once, in `BlastSim`.
- **Screen** (lean rule: meeting battles, Azure with grenades against none, 30 E-6 maps × seed 107): flat. Exchange
  +0.022 [−0.072, +0.120], win share +0.10 [−0.05, +0.27], own lost −0.17, enemy lost +0.53 (map-cluster 95%
  intervals); stopped there. Attacks, where grenades should matter most, were not screened.
- **Not done:** test charges still hurt nobody by blast (only by debris and collapse); grenade art beyond a sphere,
  flash and smoke.
## Armed GASP integration and replay cache underway — 25 September 2026

Further continuation: the review course is now 46 seconds with a standing GASP vault,
recorded takeoff/landing warping, free-hand wall contact and a bounded airborne body
reach correction. Chaos simulates the existing lower coat on each actual body (260
female / 554 male vertices), with waist pins, leg/body capsules and environment
collisions. Persisting both section binding and its source-section record, and
invalidating the mesh DDC, was necessary to retain the cloth render mapping. A
separate cloth-enabled material fixes Unreal's grey fallback. Cloth freezes on pause
and resets/settles on seek; its historical deformation is not deterministic. The
battle uses a configurable close-view cloth budget (four by default).

Muzzle queries now preserve the current pose, aim/look state and cloth instead of
resetting secondary motion each time a shot origin is sampled. The rifle palm follows
the visible bolt knob through its opening and travel. Latest native four-body course:
1,381 frames, wrist error below output precision, wall-hand error below output precision,
bolt-palm error 0.0012 cm, barrel heading error 0.07993 degrees, 1,628 simulated cloth
vertices with finite output, exact repeated skeletal seeks and unchanged pose/cloth
after muzzle queries. Generation takes about 18 seconds with cloth. These are technical
checks, not visual acceptance or a full-army performance result. Corrected v3 motion
capture is complete (46 seconds); reloads still need stronger action/prop work.
City2 seed100 passes 640 body/time samples, 24 exact shot events and replay pose checks.
The inspector now names the actual evaluated GASP clips. A generated, constant Motion
Matching Blueprint template supplies the compiled node data missing from a standalone
native graph in cooked builds; editor poses remain unchanged, standalone verification
is in progress. The 46-second v2 capture is diagnostic:
it predates the cloth material fix and bolt-knob contact. Requested voxel vision's
Free Animation Library in a temporary project to evaluate its listed prone clips;
the current installation has none. The Fable architectural helper is absent from
`/home/jchan/.local/share/astra-fable/fable_architect.py`; independent work continued.

Continuation: a complete 42-second armed capture now exists for all four body/weapon
combinations. Foot placement and two-bone leg solves are cached and reproduce after
seek. The capture and extended diagnostics exposed two additional faults: the
separate USkeleton still retained the old FBX root scale after the mesh was normalized
(extracted root motion was 100× too large), and the standing gun overlay inherited
unarmed hip twist. The generated skeleton reference pose is now synchronized explicitly;
the overlay calibrates barrel heading. A bounded native presentation-root adapter,
smoother sprint carry, component-space head attitude and support-hand-aware reload
reach are under validation. The first capture predates these corrections and is not
accepted. Prone, real traversal contacts, cloth, action polish and full battle review
remain open. No simulation changes, commit, push or AAA-quality claim.


Jordan explicitly rejected stopping at the unarmed retarget checkpoint and requested
continuous work until the full animation system is connected. The same isolated
`codex/gasp-soldier-animation` worktree remains the development branch.

Expanded to 360 named GASP motions per actual body, with standing and crouching
Pose Search databases and 50 converted existing weapon/death clips per body.
Native Motion Matching and pose history run on a fixed 30 Hz visual clock; the
renderer samples cached blend decisions so display frame rate and backward seeking
do not change selection history. Separate editable rifle/MG carry profiles and a
four-soldier continuous test course are implemented; battle shots remain authoritative.

The first numerical pass reproduced native blended joint positions and backward
seeks, but the gait audit found walking/running continuing through stops. Query
inspection identified the FBX object root's 90-degree basis: horizontal trajectory
features discarded forward movement. The root basis is now normalized while
preserving non-root bind positions and the old weapon animations; full library
regeneration and contact-solving tests are in progress. This is **unfinished work**:
prone, traversal contacts, authored weapon actions, coat physics and rendered motion
acceptance remain outstanding. A passing grip-distance test is not visual acceptance.

## GASP sample retargeted to both soldier bodies — 25 September 2026

Jordan supplied the installed Game Animation Sample path; it is the matching 5.8
project. The isolated animation branch now has ten GASP clips for each actual
soldier body and an opt-in three-body Unreal review scene. Scale-100 imported roots
required normalized duplicate meshes/skeletons; reference joint positions are
verified unchanged. The native build and focused checks pass. The reviewed sample
dependency closure stays in the local mirror, reproducible from the installed
sample. Original assets and battle presentation remain intact.

This is a retarget checkpoint, not the requested finished animation system. The
comparison uses original playback speed, centered root travel and cuts between
clips; coat/knee deformation and hand/shoulder poses still need refinement.
Continuous pose search, weapon layers, world contacts, cloth, seeking and crowd
cost remain to implement and review. [Reproduction and limits](GASP_PROTOTYPE.md).
No visual acceptance or simulation changes are claimed.

## UE 5.8 build and soldier target rigs — 25 September 2026

Jordan reported the dependencies installed. UE 5.8.3 is verified and the current
game compiles/links in the separate `ArmyPrototype-GASP` mirror (44 native actions,
66.5 s). Editor inspection loads the production bodies without errors: female
56 bones, male 68, with different finger layouts. New reproducible target IK
rigs have 18 and 22 checked chains, respectively. They preserve the original
meshes and skeletons; source mapping, retarget poses, contact solving and visible
GASP animation remain pending. Both imported roots have scale 100, which needs
explicit validation against the sample. The sample `.uproject` was not found in
usual locations; Jordan has been asked for its path. This updates the dependency
and build status of the earlier preparation entry. No visual acceptance, runtime
animation replacement or simulation change is claimed. Details/evidence in
[plan 034](../plans/034-contextual-soldier-animation.md).

## Contextual animation preparation on current gameplay — 25 September 2026

Jordan requests AAA-quality continuous, equipment-aware soldier animation using
the latest GASP if suitable, and permits outside animation sources. Work is isolated
on `codex/gasp-soldier-animation`, based on latest `9a559c4`. The current male/female
art is already integrated; prone still substitutes lowered crouch, and vaults use
jump clips. The engine/sample download is pending: only UE 5.4 is installed here,
and Windows UI tooling fails during WSL path initialization. Jordan is downloading
UE 5.8 and GASP and asked preparation to continue.

A tested read-only replay context adapter, equipment/contact contract, clip-gap
audit and dependency preflight are prepared. Exact shot events and 2,000 shuffled
input queries pass, along with six preflight tests. No GASP pose graph, visual
improvement, new Unreal build or acceptance is claimed. Simulation source and
playable defaults are unchanged. The [plan](../plans/034-contextual-soldier-animation.md)
records primary-source research, replay/physics constraints and the first visible
quality test. No paid animation source was acquired.

## Covering fire made useful: Stage G is the default — 25 September 2026

Jordan (24 Sep, night, leaving the session to run): "continue until cover fire actually is useful. Make any changes
you like to the codebase ... At the end, covering fire actually helps." The PC slept from 00:15 to 08:03; the work
resumed on his "continue". Full record: [plan 031](../plans/031-fire-and-movement.md), "Overnight 24–25 September".

- **What it is worth.** Scratch upper bounds (observer truth, diagnostics only): pinning every enemy who can see our
  moving men is worth +0.41 exchange in meeting battles and −7.1 attackers lost in attacks; making our movers
  unhittable +0.31. Of that, what a still squadmate could reach is +0.27; the squad's gun alone +0.05.
- **Why it did not work.** Fire below the pin line does nothing (a near miss is gone in ~1.5 s; two rifles cannot
  pin), a pin takes seconds while a rush lasts ~2 s, and a pin hides the pinned man too. Every rifle or drill design
  was neutral or worse: D2 (no gain; get down worse than running), D3 (prepare −0.145, halves −0.155), watcher and
  threat targeting, stacked/keep-down/flinch/crossfire/5 m-radius worlds. D2 and D3 are not merged.
- **What works: Stage G, the gun as a support weapon.** A bipod when set (spread ×0.5) and covering bursts (5 rounds,
  0.5 s beat, every known enemy position in turn, those overlooking the squad first). Real build, one side: meeting
  +0.085 [+0.054, +0.117] (120 pairs), attack −1.73 attackers lost [−2.88, −0.53] and −23 s; pre-registered
  confirmation on 20 fresh maps +0.093 [+0.037, +0.150]. The men it saves are saved by its suppression (with its
  rounds suppressing nobody its side's losses no longer fall). Both sides with it: a side's gun suppression saves
  +0.88 [+0.20, +1.56] men per battle pooled (today nothing), noisy by orientation (Azure −0.03, Ember +1.78). Side-by-side videos sent (meeting and attack, nearest-to-mean
  pairs).
- **Jordan's ruling (25 Sep ~10:00): "Lets keep G as default."** Stage G on for both teams in battle_cli and the game
  (`--no-gun-support`, `--no-gun-bipod`, `-ArmyNoGunSupport`, `-ArmyNoGunBipod` restore; `Config{}` off); source
  54550b22de8bb68b; 40 lean references re-baselined (40/40; candidate90 unchanged).
- **His suppression design on Stage G** (prototype): battles barely change, but the gun's covering fire becomes worth
  +1.43 men and +0.068 exchange per meeting battle (significant). **Jordan (25 Sep ~10:40): "Make suppression the
  default."** Graded peek, keep-down and pinned neighbours are on in battle_cli and the game (`--no-graded-peek`,
  `--no-keep-down`, `--no-pinned-neighbours`, `-ArmyNoGradedPeek`, `-ArmyNoKeepDown`, `-ArmyNoPinnedNeighbours`
  restore; `Config{}` off); the 40 references re-baselined again (archive `plan031-suppression`).
  The real-build check did not replicate the prototype's gain (Azure side, 60 pairs: +0.15 vs −0.03 men, both n.s.).
- **Tools** (`tools/covering/`): `NAME@BASE` arms, `analyse.py PREFIX CONTROL`, `pair.py`, the pre-registered
  confirmation draw (`COVER_DRAW=confirm`), per-invocation work folders (concurrent runs used to delete each other's
  battles); `battle_video.py` marks pinned men. Controls against the old gun now need `--no-gun-support --no-gun-bipod`.
- **Jordan (25 Sep): "too many tests ... extremely tedious"; "i like the changes to testing".** Lean feature testing is
  the rule (the gates in AGENTS.md): screen on meeting battles, one orientation, 30 maps × 1 seed, stop if flat;
  only a finalist gets both orientations, attacks, a mechanism check and the confirmation set; traces only to
  diagnose; agents build and gate, the overseer measures once; the full suite only before a commit.

## Plan 031 stage D measured, merged off; D2 approved; work pushed for the move — 24 September 2026

**Stage D** is the squad fire-and-movement drill: the agent's package `.local/plan031/D/`, integrated by the
overseer. It works where it applies. A drilled move is covered 30–40% of the time, against 2–4% before. But
drilled moves are only about 7% of exposed movement, so total coverage rises only from 2–4% to about 5%,
and the movers are not safer.

The uncovered time comes from:
- emergency cover runs: 25–32%, two-thirds of them started while no one was firing at the man;
- the gun's own moves: 17%, because its drill station faces the enemy;
- gate timeouts;
- moves outside the drill;
- squads without their gunner.

**Outcome** (paired, 180 battles):
- Meeting battles: no change.
- Attacks: 38 s slower [+9, +68]; wins −0.07, not significant.

**Merge.** The drill is merged as the opt-in switch `--fire-and-movement both|azure|ember`, off and
byte-identical when off, as the base for D2. Source `c945628c9538efbe`.
- Gates: 40/40, the full suite, the Unreal build.
- The 40 lean reference manifests in Git were updated to the 24 September re-baseline, so that 40/40 works
  from a fresh clone.

**Jordan's D2 rulings:**
- The gun holds the men watching the current rush for the whole rush: approved.
- Drill stations with cover the gunner fires over: approved.
- "Get down, don't run" instead of the 35 m emergency sprint: a separate, measured switch.
- The No. 2 takes over the gun: later.

**Tools.** The measurement tools moved to `tools/covering/`, with a README. `make_maps.py` rebuilds the 30
E-6 maps byte-identically (checked).

**Pushed for Jordan's move to another computer:** branch `covering-fire-2026-09-24`. `.local/` stays out of
Git, so a fresh machine needs:
- the lab binary, rebuilt with `scripts/battle-lab.sh`;
- the E-6 maps, rebuilt with `make_maps.py`, and the chain and outcome baselines, re-run with
  `tools/covering/run.py` and `outcome.py`;
- the frozen binaries (`.local/plan024/…`, `.local/plan029/baseline`), the neural venv and training data,
  and the loop state, copied over.

## Plan 031 fire and movement started — 24 September 2026

Jordan approved the three W-1 changes ("Yeah, let's do it … Just start it up"): D, a squad fire-and-movement
drill (the gun sets first on ground bearing on the threats to the next leg and fires on them; the riflemen
rush short legs only while it fires; leapfrog); G, the gun as a real support weapon, calibrated modestly
(Jordan: a gun worth nine riflemen "is probably an exaggeration … the machine gunner did need support");
S, the plan 030 suppression mechanics (still in the code, all off) re-measured once fire is delivered, with
a graded accuracy loss under fire. Stage D is with an Opus 5.5 agent (`.local/plan031/D/`); the overseer
measures on the W-1 harness. Every change is a switch, off by default. Art passes by Astra landed earlier
(village curves, city2; plan 029 reports).

## Why covering fire does not work (W-1) — 24 September 2026

Jordan asked for deep research into why covering fire, historically extremely useful, does not work in the
game (orders too slow? men too slow? should they sprint? enemies react too fast?). The chain was measured in
traced battles (plan 030, "W-1"): suppression works when it lands (a mover whose watchers are all pinned is
hit about 70% less), but his own squad's gun is firing on the men watching him only 2–4% of the time and
standing still with a line to them 5–7%, because the gun is re-sited from the rifle group's position at
every plan and spends ~39% of its time walking (44–54% of its overwatch positions are never reached), fires
at its own nearest target, and the riflemen move regardless. Instant orders, sprinting gunners and movers
changed nothing; slower enemy aim protected movers on its own; the gun's must-move flag defect, the plan
028/030 covering stack, riflemen waiting for the gun and a gun accepting exposure did not create covering
fire. A squad fire-and-movement drill is proposed for Jordan's design ruling; no default changed.

## Azure's edge traced to Ember's search lanes; spawn lanes made the default — 24 September 2026

Jordan: "we're going to have to figure out why Azure wins more battles than Ember, even when the maps are
flipped." On generated maps the search-lane code sent every Ember squad to the lane on the far side of the
map before contact (it mirrored Ember's lanes, as the authored maps mirror Ember's spawns; the generator
does not). Equal-troops battles on the 30 E-6 maps and their mirrors: Azure 0.594 before, 0.478 with the
lanes following each team's spawn order. The rest of the old gap is the standing roster (fresh rosters:
0.650 to 0.575). Update order is not a cause. `Config::spawnLanes` is now the game and battle_cli default
(`--no-spawn-lanes`, `-ArmyNoSpawnLanes`); authored maps and the 40 references are unchanged; source
`5ab0c846380f6623`. The loop roots still need re-rooting before the next generation. Details: plan 030,
"E-6c to E-6f".

## Plan 029 switches and retire-fallen made the baseline — 24 September 2026

Jordan: "Do it, switch the switches to baseline and do the tests." Concealment, prone, vaulting and
retire-fallen are on by default in `battle_cli` and the game (source `ee42cd0a80c00dac`), beside the gun in
every squad and muzzle credit; `--no-concealment`, `--no-prone`, `--no-vaulting`, `--no-retire-fallen`
(`-ArmyNo…` in the game) restore; `Config{}` keeps them off for unit fixtures. Manifests now always record
the four keys; `tools/rerun_battle.py` maps `false` to the `--no-` flag. Evidence behind the flip: pre-fixed
fresh-map tests E-4/E-5 (the three plan 029 switches: city2 +0.097 [+0.039, +0.164], village and town
neutral) and K-1 (retire-fallen halves covering-fire requests on dead enemies, score unchanged); Jordan's
instruction stands in for the side-by-side review. Checks: default and `--no-` manifests verified, the 40
references re-baselined and 40/40, trace parity 3/3, loop tests, Unreal build, all passing
(`.local/plan029/flip-switches/`). Then
E-6: does covering fire matter with a gun in every squad (`.local/plan030/E-6/`)? No: pre-registered
exchange −0.007 [−0.035, +0.021] on 30 fresh village/city2 maps (540 battles). New finding: on the new
baseline Azure wins 73% of meeting battles on those maps against 56% with the old defaults (+0.172
[+0.011, +0.317], E-6b); guns and switches each push the same way. A mirror test (maps flipped, spawns
swapped) shows it is not the maps: with the terrain cancelled Azure still wins 0.650 [0.600, 0.706] on the
new baseline and 0.569 [0.506, 0.631] with the old defaults; the map-side edge is not significant. The
simulation itself favours Azure; cause not yet found.

## Every squad a machine gunner; WSL crash clean-up — 24 September 2026

**WSL crash.** The WSL virtual disk (`C:\Users\Jordan Chan\AppData\Local\wsl\{389da785-…}\ext4.vhdx`)
had grown to 686 GB holding 601 GB of raw battle output (`evaluation.jsonl` 435 GB, trace `.jsonl`
176 GB) under `.local/`, filling C: (6.9 GB free afterwards). Codex restarted WSL at 12:29. All raw
per-battle output except the 40 lean references and the recorded training battles was deleted
(`.local/` 601 → 30 GB); the virtual disk file does not shrink by itself and needs compacting from
Windows. Nothing in flight was lost: every overnight package had reported and been integrated; the
only interrupted job was the final Linux gate on `a8e46ca6b2bfffd5`, re-run afterwards (40/40, 3/3).
Rule (Jordan): raw battle output is deleted when its analysis is done. Prepared for the compaction:
backups in `G:\WW1-Recovery-2026-09-24\pre-compact\`, the free space trimmed (686 GiB), and a job at
`G:\WW1-Recovery-2026-09-24\compact\orchestrator.ps1` (WSL shutdown, one UAC approval, `diskpart compact
vdisk`, WSL restart; progress in `status.txt`). Codex ran it at 14:31: the admin prompt was cancelled after
2 minutes, so nothing was compacted (VHDX 685 GB, C: 6.3 GB free); WSL and this session came back.

**Every squad a machine gunner (Jordan: "give every squad a machine gunner now").** Each squad's eighth
man is its gunner on both sides (`Config::squadMachineGuns`; `battle_cli` and the game default it on,
`--platoon-mg` / `-ArmyPlatoonMG` restore one per platoon; `Config{}` keeps one per platoon for unit
fixtures). The equipment button cycles squad / platoon / all rifles; a static defence of 12 seats two
guns instead of one. Source `8c7486584355f64a`. Checks run, and only these (Jordan: "tests that
actually are needed"): new `--squad-guns` group (roster, rifles-only, defence seating, a 180 s battle
in which all 8 guns fire), one pinned-digest group proving the old roster unchanged, the 40 references
re-baselined and 40/40, trace parity, four smoke battles on village and city2, the Unreal build.
The loop roots and earlier measurements predate the change; the neural worker keeps one gun per
platoon until training resumes.

## Overnight run: covering-fire levers measured, city2 wired and optimized — 24 September 2026

Under Jordan's overnight authorization, `claude-opus-5-5` agents built and measured every candidate for
making covering fire useful, all as switches (off): plan 028's stack on the repaired credit (E-2), the
suppression mechanics S1–S4 (M-S, M-S4, S1b), the quiet release with wider/upper stations and a rifle
base of fire (M-S5), and covering fire on city2 (E-3, E-3b). None beats plain Legacy; the trace
diagnosis found that 62% of unanswered requests name an enemy already down (a knowledge-layer defect;
K-1 in progress). Pre-fixed tests on fresh maps found `--concealment --prone --vaulting` wins on city2
(+0.097) and is neutral on villages and towns: a flip candidate for Jordan's review, with videos. City2
is wired into the loop and neural tools, its stair lookup indexed (exact, −30% CPU), village and city2
seed 17 promoted with golden tests, and the Unreal "City" slot added. Later the same night Jordan ruled
towns out of the runs: loop score v8 ranks and guards on the village and city2 sets (Legacy root
`2730fe73fadce803-legacy-v8` +0.809); M-S6 measured that covering fire changes no meeting-battle outcome
on the new families; Jordan's own suppression design (M-S7) went into measurement.
[Morning summary](AI_SESSION_HANDOFF_2026-09-24.md), plans 029 and 030.

## Village and city2 accepted and promoted; credit ray flipped; plan 030 started — 23 September 2026

Jordan accepted the village and city2 looks ("promote them"): seed 17 of each is in
`Unreal/Config/GeneratedMaps/` (`village.army`, `city2.army`), pinned by golden-byte and native import
tests; the city2 publication guards were lifted; the Unreal "City" slot (F-D2) and the loop/neural
wiring plus the first real-city2 battle costs (G-5) are in progress. Earlier the same day Jordan
flipped `muzzleCredit` on by default (source `ae3224df477f0f4c`, importer accepting `city2`): the
covering-fire delivery credit ray had started at the shooter's feet and was dead on villages and
trenches; 40 references re-baselined, fixture digests re-pinned, loop re-rooted (`ae3224df477f0f4c-legacy`
value +0.819 against the old root's 0.841, every conduct guard passing). Plan 030 (suppression
mechanics S1–S5) authorized: gunner compensation (S4) measured as lethality without suppression and
stays off; S1–S3 and E-2 (plan 028 stack on repaired credit) in progress. Gate protocol trimmed at
Jordan's instruction. Details: `plans/029-village-verticality.md`, `plans/030-suppression-mechanics.md`.

## City2 shared paving and geometry review — 23 September 2026

Jordan ruled **“Lock in shared paving”**, accepting the third road-blending option. Astra made
it the city2 preview default, verified pixel equivalence on the saved three-seed geometry,
and refreshed the gallery. That renderer stage left native bytes unchanged. Overall city art
acceptance and promotion remain separate.

Jordan then supplied the actual Fable overseer geometry review. Astra added the 120-part
reserve, explicit borrowing-wing footprints and clipped slabs, safe terrace steps, alley
crater clearance, and civic reservations before secondary-street routing. These structural
fixes intentionally change city2 geometry, while Town/Trenches/village goldens remain identical.
The [follow-up report](../plans/029-city2-geometry-review-astra-report.md) distinguishes the
accepted paving from the structural changes and resolves findings against the actual contract.

All 52 generator tests pass. The 60-seed sweep has zero placement contradictions in 72 attempts,
60/60 Linux acceptance and 59/60 UE acceptance. UE seed 38 timed out under overlapping
build/test load, then passed separately with a matching payload (16.854 s generation); these
are provisional contended timings. Minimum supportability is 0.70,
solids 3,817–4,021 and B parts 106–118. Four geometry-only native agreement maps, three alias
imports, fifteen seating cases and 1,014 party-wall protection queries pass. The overseer owns
the importer change and real-family rerun. Overall catalogue reduction, reliable New+ latency
and battle CPU improvement are not established; no simulator edit or promotion was made by Astra.

## City2 road-blending study — 23 September 2026

Jordan asked Astra to research blending roads into an interconnected surface without individual
road outlines. The current preview paints each road's casing and fill before the next road,
which makes later casings cross earlier surfaces. Primary cartography and geometry references
support grouped casing/fill passes and a union of road and square surfaces. Astra prepared a
three-option visual comparison on saved seeds 17/5/1201, including a shared SVG mask with
subdued shoulders. Browser checks pass; this is a presentation prototype, with no generator,
native-map or simulator edits and no new art acceptance. Evidence and recommendation:
[road-blending notes](../plans/029-city2-road-blending-notes.md), local study
`.local/plan029/city2/road-blend/index.html`.

## City2 street-first map family — 23 September 2026

At Jordan's instruction, Astra implemented a new `city2` ARMYMAP 2 family with curved street
networks, frontage parcels, terraces and connected L/U-shaped buildings, civic courts, uneven
damage and the village's multi-objective supportability contract. Existing Town/Trenches seed
17 and village 17/5/1201 native bytes are unchanged. No simulator or Unreal C++ changes,
canonical map writes or loop/neural promotion were made by this task. Art remains Jordan's.

The final 60-seed development sweep (0–49, 1201–1210) accepted 60/60 on Linux and 59/60 on UE
Python; seed 28 exhausted its 28 s deadline, but completed separately in the full UE CLI at
26.160 s. Completed serialized payloads match across platforms. Minimum supportability 0.70,
3,688–4,032 solids, 29 placement contradictions in 102 attempts, 756 retained repair operations
on Linux. An exact per-attempt composition cache avoids rebuilding unchanged geometry during
repair rounds; all 60 Linux payloads match before/after. Worst individual attempt is
5.184/9.249 s Linux/UE; worst request 16.533/28.090 s, the latter a deadline rejection.
The report preserves earlier CLI timeouts too; dependable New+ completion is unestablished.

Actual city2 native checks stop at `Unsupported map header`; the current importer allowlist
needs the overseer to add the family in both header checks. Separately labelled geometry-only
copies with a village header pass the unchanged native agreement gates on four seeds, imports
on three previews, and 15/15 static-defence seating cases. These are not city2 runtime acceptance.
The actual-family test classes have explicit integration skips. City2 publication is disabled
pending acceptance/integration, and its golden will be pinned only after art acceptance.

The bounded exact-model Fable structural consultation timed out without a final response;
there is no Fable review or approval. Full evidence, definitions of the look measures and the
axis-aligned facade limitation: [Astra report](../plans/029-city2-astra-report.md). Previews:
`.local/plan029/city2/index.html` and `measures.html` (seeds 17, 5, 1201).

## Curved village roads and sunken lanes — 23 September 2026

Jordan liked the objective preview and requested curved roads and more curved sunken lanes.
Astra implemented gentle road bends, rounded junction approaches, and 2–3 separate curved
lanes with matching floors, banks and usable ramps. Native geometry remains ARMYMAP 2;
no simulator/Unreal C++ edits or canonical map writes belong to this pass. All objective/team
coverage thresholds remain unchanged. Generator version 5; fingerprint `be711b3ca7f9d117`.

Final Linux and Windows development sweeps accepted 60/60 maps with matching payloads,
137 attempts, zero WFC contradictions, 46 two-lane maps and 14 three-lane maps. Minimum
support remains 0.70. All 41 mapgen/native tests, 52 integration/docs tests and five native
imports passed. Worst measured full Windows CLI invocation: 21.365 s; no quiet-machine
guarantee. Exact validator caching and earlier abandonment of fruitless repair attempts
keep the expanded geometry bounded. Full verification, timing and the failed Fable
geometry-consultation attempt are documented in the
[curves report](../plans/029-village-curves-astra-report.md). Art acceptance remains Jordan’s.

## Village validation across multiple objectives — 23 September 2026

Jordan ruled that village supportability must cover 2–4 objectives, every team against every
objective at ≥0.70. Astra implemented deterministic landmark selection with 60 m separation,
per-objective observer/path analysis, bounded repairs followed by a full recheck, JSON and CLI
minima, a reproducible 60-seed sweep and the support overlay’s objective selector. The previous
80/20 focal point remains separate for spawn goals and damage exclusion; no objective record,
score or simulator behaviour was added. Native format and Town/Trenches golden bytes remain
unchanged. No simulator/Unreal C++ edits or canonical map writes belong to this follow-up.

Development seeds 0–49 and 1201–1210 passed 60/60 on Linux and UE-bundled Windows Python:
107 attempts, zero WFC contradictions, 34 two-objective maps and 26 three-objective maps;
minimum share 0.70, 53 repaired maps. No accepted map retained four objectives after spacing;
that count is tested on a landmark fixture. The Windows generation/serialization sweep’s
measured maximum was 14.851 s; a separate full CLI invocation of that seed, including startup
and output writes, took 20.182 s, within the 30 s budget. Full per-seed results, verification
and limits are in the
[objective report](../plans/029-village-objectives-astra-report.md). Art acceptance remains
Jordan’s, and real scored objectives remain a later plan.

## Plan 029 simulator packages integrated — 23 September 2026

All plan 029 simulator packages are in the main tree on source `aca3a8350cad7018`, implemented by
`claude-opus-5-5` agents and integrated by the overseer (`claude-fable-5-1`): ARMYMAP 2 importer (F-A),
stacked floors, stairs, door passages and window teams on imported buildings (F-B), concealment rays
and behaviour (F-C+M-B), prone stance and crawl (M-A1), prone cover and craters (M-A2), vaulting (M-C),
Unreal renderer and the Village map slot (F-D), the WFC village generator, validator, native probe and
pipeline wiring (G-1..G-4). Every behaviour switch (`--prone`, `--concealment`, `--vaulting`) is off by
default; digests are unchanged: 40/40 lean parity, 3/3 trace parity, 41/41 neural verify, 12 exact
recorded replays, full Linux suite, Python and mapgen suites, MSVC and Unreal builds. Village look is
being reworked by Astra (`plans/029-village-art-pass-astra-request.md`); `village.army` is not yet
promoted. Rulings recorded in the plan: supportability against several objectives per map (validator);
a real scored objective is marked for a later plan. Open: vault reversals in villages (20–34% of
vaults), overseer recommends path-length cover scoring inside the switch. Legacy remains the default;
no promotion. Evidence: `.local/plan029/`.

## Village uneven damage across parcel boundaries — 23 September 2026

Jordan observed that craters still followed tile allocation and chose **uneven damage**:
a heavily battered approach, damage reaching the centre, quieter ground beyond. This replaces
the old 3–6-per-cell/~20%-of-open-cells quota with a comparable map-wide impact budget; physical
rim, supportability, elevated-cover and geometry limits remain unchanged.

Astra implemented a continuous world-coordinate bombardment layer, correlated house damage,
physically broken hedge/wall sections and tree stumps. Source IDs survive as low remnants;
new pieces receive new IDs. Old/fresh scar colour is preview illustration. No simulator C++
changes or runtime geometry mutation. [Report](../plans/029-village-uneven-damage-astra-report.md).

60/60 development maps pass: support ≥70% per side, elevated-safe 75.41–84.83%, 2,307–2,905
solids; 0/76 WFC contradictions, maximum two attempts. Full Python suite passes (176 tests,
one skipped); native agreement is 100% in all sample families, 15/15 defence seating cases,
and importer checks pass on Town, Trenches and three villages. UE-bundled Python generates
the requested seeds in 0.43–1.00 s; Linux/Windows export text matches.

The gallery at `.local/plan029/G/art/index.html` is refreshed. Before/after and preserved v2
exports are in `.local/plan029/G/uneven/`. Jordan retains visual judgement; no canonical map
or playable default was promoted.

## Plan 029 village art pass — 23 September 2026

Astra implemented the [requested village art pass](../plans/029-village-art-pass-astra-request.md):
merged irregular fields, displaced physical hedges, denser street frontages, square-facing
houses, 34 m farm courts with three wings, rear orchards and concentrated 3–6-crater clusters.
The request's coverage, record, determinism, cap and repair gates remain in force. Preview-only
foliage/soil illustration is distinguished from physical geometry with an edge overlay.

Final sweep: 60/60 maps (0–49, 1201–1210), support ≥70% per side, elevated-safe 73.52–84.94%,
2,238–2,969 solids, 0/84 WFC contradictions; 24 attempts rejected by unchanged density,
support or stair gates. Full Python suite: 174 tests run, one skipped; suite passed; native agreement, 15 defence
seating cases and native import/stair/cover/replay checks pass. UE-bundled Python generates
17, 5 and 1201 in 0.587, 3.412 and 0.414 s; Linux/Windows exported text agrees.

[Report](../plans/029-village-art-pass-astra-report.md), previews and evidence in
`.local/plan029/G/art/`. No simulator C++ edits, canonical map writes, Fable visual review or
promotion. Jordan's visual judgement and the renderer package's organic meshes/materials remain
separate from these geometry checks.

## Plan 028: covering fire, stopped by the stop rule — 23 September 2026

Jordan approved repairing how Legacy arranges covering fire ("Do it"), because plans 025–027 showed the
squad layer was blocked by it. Opus 5.5 agents implemented; claude-opus-5-5 oversaw.

Each stage was built behind switches that are off by default, with identical digests when off, and
integrated. Source is now 55182142b3598f04; all gates pass.
- **Stage 0 (measure).** Only 9.3% of wait episodes end covered. **34% of the enemies waited on are
  already dead**, and 12% have moved.
- **Stage 3c (graduated gate).** Jordan's rulings: wait only on enemies seen within 20 s; high danger
  (MG, 5+ enemies, or exposure ≥ .6) goes round; otherwise cross after 8 s. Squads crossed, mostly
  uncovered: objective 0.792.
- **Stages 1+2a (requests, fast credit), then Stage 4 (gun aim, platoon aim, short rifle shifts).**
  Requests and credit work (about 2.6 s from request to credit), but only 7–8% of requests are
  answered in full. The ground rarely offers a covered position that bears on the threat.
- **Loop objectives against the root's 0.841:** 0.741–0.799. None beats it, and Azure casualties rise.

Every switch stays off. The game is unchanged. Details: [plan 028](../plans/028-covering-fire.md).

## Overnight neural work, plans 025–027 — 22–23 September 2026

Jordan asked (22 Sep) for neural runs at half, then full, capacity, and for the four review findings
to be fixed (plan 026). Opus 5.5 agents implemented; the main session (claude-opus-5-5) oversaw.
He authorised overnight training changes based on findings, and refinement if promising.

- **Plan 026 (implemented and integrated; source 422987091a8601ee, all gates pass):**
  - instruction files restructured, with this log created;
  - friendly-fire regression diagnosed as unreplicated on fresh maps, so no repair; ablation
    switches kept;
  - rollout measurement: Python GIL contention, about 10–14% at 3×5 workers; `--rollout-processes`
    added; native sampling not built;
  - schema 4 with go-now timing and a map view (local raster), old models bit-identical.
- **Plan 025** (stronger PPO, destination-only): no reliable gain.
- **Plan 027** (schema-4 PPO with go-now and map view): no reliable gain. Pooled W−L vs start at
  update 30: −0.011 [−0.167, +0.148].
- **Probes on the same development cases** (up to 270 per arm):
  - random destination ≈ greedy ≈ Legacy;
  - handicapping HOLD does not help;
  - no go-now rule, with either release scope, beats never-now.
- **Bottleneck:** 60% of squad decisions wait for covering fire that is live in 0.35% of go-now-legal
  decisions. The next step is a Legacy execution change, for Jordan to rule on. Neural training is
  paused.
- Details: [plan 026](../plans/026-ai-findings-fixes.md), [plan 025](../plans/025-stronger-learning-run.md),
  [plan 027](../plans/027-schema4-training-run.md).

## Instruction files restructured — 22 September 2026

Plan 026 P1. `CLAUDE.md` and `AGENTS.md` (86 KB each, 94% dated narrative, loaded by every
session) became one identical 12.4 KB file: the collaboration agreement and law sections
(verbatim), current state, standing rulings, verification gates, an index and the rule for keeping
it. Every dated section of the old `CLAUDE.md` moved into this log verbatim, in its old order
(newest first). The pre-restructure files are commit `a32a669`. The old `AGENTS.md` held no
narrative the old `CLAUDE.md` lacked; its law sections live on verbatim in the new file. The old
file's undated tail is the oldest entry, its headings demoted one level so the index stays flat.
`tests/test_project_docs.py` guards the new files. Loss check
(`.local/plan026/p1-docs/loss_check.py`, both pre-restructure files against the new `AGENTS.md`,
`CLAUDE.md` and this log) found everything, 0 missing, and the dated body is byte-identical:
old CLAUDE.md 30/30 headings, 98/98 16-hex ids, 129/129 link targets, 133/133 paragraphs; old AGENTS.md 32/32, 97/97, 122/122 and 134/134.
Implemented by an Opus 5.5 agent (`claude-opus-5-5`) under plan 026.

## MotionBricks animation research — 22 September 2026

Jordan requested viability research on NVIDIA MotionBricks and localai-org's C++
port. CPU/Vulkan makes a small offline-bake experiment plausible on the RX 9070 XT;
released weights use G1 robot bones, and human retargeting plus recorded-path/event
fidelity need a visual proof. No models or game integration were run. See
[research, measured-source timing limits and next proof](docs/MOTIONBRICKS_VIABILITY.md)
and [exact Fable review with Astra's corrections](plans/motionbricks-viability-fable-review.md).
Research only; no change to the paused AI work or gameplay authority.

## Session handoff — saved 22 September 2026

Jordan asked to stop here and pick this up later. Training/evaluation and performance
experiments are complete; no new run or execution audit is active. Legacy remains
default. Current optimized source is 6ff5c2010bc64352; the completed experiment keeps
its frozen d73667841df73faa binary. **Read [the full resume handoff](docs/AI_SESSION_HANDOFF_2026-09-22.md) first** for results, videos, model/evidence paths,
rejected ideas, current model access, verification limits and proposed next work.
Work is saved in the working tree, with substantial uncommitted/untracked changes.

## Plan 025 stronger-learning neural run — started 22 September 2026

Jordan asked for neural runs "to see if the Neural AI has promise" at half capacity. A choice-authority
test on 90 development cases found uniform random choice 51/2/37 against the imitation network's greedy
40/9/41 (not significant): the network's preferences are not shown to beat chance. Jordan chose the
stronger-learning run: 3 seeds × 30 updates × 72 battles, actor lr 3e-4, anchor 0.01, otherwise plan 024
settings, greedy development check every 5 updates on the same 90 cases. Capacity cap
`.local/neural/max_jobs` (8 at launch; raise it and running jobs grow). [Spec](plans/025-stronger-learning-run.md);
output `.local/plan025/stronger/`. Legacy remains default; nothing promoted.

## Five-agent exact optimization — 22 September 2026

At Jordan's request five exact claude-opus-5-5 agents optimized the five areas above 10% of battle CPU
(orders, cover, routes, paths, sight); Astra integrated and verified. Source **f28c195b711323f9**:
59.5% less battle CPU [57.4, 61.5] than 6ff5c2010bc64352 on 24 quiet 16-wide recorded training pairs,
all exact; memory 222 → 197 MiB. A training generation now takes 74–76 s (202–220 s in the completed
experiment); a full 40-generation run is estimated at about 1 hour. Oracle 882,432 exact, 40/40 and
41/41 parity, full Linux suite, drills traces equal to 6ff, Windows contracts and 6 pairs, UE 5.8 build.
No Fable review requested or claimed. [Report, changes and cautions](docs/NEURAL_TRAINING_ROUND4.md).
[Post-round profile and next targets](docs/NEURAL_TRAINING_PROFILE_F28.md): manoeuvre route assessment ~40%, CoverExists linear scan ~7–10% (cheapest next win), reactions/struct copies ~15%.

## Faster neural training builds — 22 September 2026

At Jordan's request: `scripts/build-train-lab.sh` builds `.local/lab/battle-lab-train`
(current simulator source, PGO+LTO, profile regenerated from six training-map battles
each build, ~45 s against 7 s). `tools.neural.ppo` now defaults to it; workers get huge pages;
battles go to whichever worker is free, with samples ordered by episode (1-iteration checkpoints
byte-identical for 2 and 4 jobs). 17.5% less CPU [16.3, 19.0], 24/24 recorded-action replays
faster and exact; 40/40 lean historical parity. 16 concurrent battles give 22% more throughput
than 12. Game, Windows and Unreal builds unchanged. No end-to-end training generation timed yet;
changed ppo.py/worker.py hashes differ from the completed experiment's frozen inputs.
Evidence `.local/plan024/pgo-build/`; details in `tools/neural/README.md`.
The whole neural pipeline (`ppo`, `evaluate`, `run`, `video`, `verify`) now defaults to this
binary with huge pages and refuses a binary built from older source; frozen baselines unchanged.
Measured generation 1 (same 24 battles per seed, 3 seeds × 5 jobs): 1.75–1.85× faster than the
completed run; a full 40-generation run is estimated at ~1.6 h against 2.85 h.
[Fresh profile of 6ff](docs/NEURAL_TRAINING_PROFILE_6FF.md): squad manoeuvre route assessment
~37–41% of battle CPU, soldier order choice ~21%, cover tests ~15%, pathfinding ~16%.

## Next AI work: execution audit recommendation — 22 September 2026

Jordan asked whether individual soldier AI should precede further squad learning.
Astra/Fable recommend tracing the squad-to-soldier handoff and schema-3 friendly-fire
regression, repairing demonstrated faults, then freezing execution before more PPO.
No learned soldier replacement, changed rules or new run is authorized by this
question. [Assessment, exact Fable response and evidence corrections](plans/024-soldier-execution-priority-assessment.md).

## Opus 5.5 exact ray-prefetch optimization — 22 September 2026

Source `6ff5c2010bc64352`: same three tactical-ray lookups, with earlier cache-line
fetch hints. **6.7% less native CPU** versus 69962220d762ea04 on 12 recorded
training cases, 10/12 faster, interval [3.8%, 9.4%]; all results exact.
A 24-pair hint-disabled control supports the hint's benefit. Full Linux suite,
41 historical cases, 882,432 cost and 649,332 query/path comparisons, drills traces,
Windows contracts/six pairs and UE 5.8 build pass. Exact Opus 5.5 proposal and Fable 5.1
review; Astra owns verification/integration. Existing experiment stays frozen on
d73667841df73faa; no policy promotion. [Report, controls and limits](docs/NEURAL_TRAINING_PREFETCH.md).

## Claude client / Opus 5.5 available — 22 September 2026

At Jordan’s request, Claude Code was updated to 2.1.280. The launcher now selects
`/home/jchan/.local/bin/claude`; the existing subscription login remains active.
Exact `claude-opus-5-5` responded successfully with verified model metadata.
The earlier client-version blocker is resolved; Fable 5.1 remains the architect.
[Update and verification](plans/024-claude-client-update.md).

## Four Opus performance experiments — 22 September 2026

Four exact `claude-opus-5` agents implemented isolated candidates (the authorized
fallback; Opus 5.5 requires a newer installed client). No survivor retained after
90 exact recorded-action benchmark battles: grouped visibility and segment front
caches were slower; obstacle traversal had no demonstrated gain; smoothing averaged
0.96% less CPU across 24 pairs but its interval includes no gain. All four passed
882,432 exact field checks, 649,332 query/path comparisons and targeted route tests.
Main source `69962220d762ea04` and both current/frozen training binaries unchanged.
[Results, limitations and archived proposals](docs/NEURAL_TRAINING_OPUS_EXPERIMENTS.md),
[exact Fable review/disposition](plans/024-four-opus-performance-fable-review.md).

## Second exact training-battle optimization — 22 September 2026

Source `69962220d762ea04` stably orders threat bounds and bypasses the second
segment memo only after tactical-ray misses on prepared maps. Additional
15.2% less native CPU time versus `cfcd101678649cb2` across 12 recorded-action
pairs, identical results. 882,432 exact cost comparisons, 41 historical pairs,
full Linux suite plus final route cases, drills traces, Windows route/neural
contracts, six Windows battle pairs and UE 5.8 build pass. The live training run
retains its frozen `d73667841df73faa` binary and settings. Timing variability and
repeat results are disclosed in [the report](docs/NEURAL_TRAINING_PERFORMANCE_2.md).
Exact [Fable implementation review and disposition](plans/024-command-performance-implementation-review.md).
No policy promotion or learning change.

Fresh current-build profile: squad/platoon commands take 68.1% of simulation CPU,
individual soldier decisions 20.9%; cached line checks and obstacle searches dominate
the function samples. Six direct pairs against the frozen training binary use 26.7%
less CPU (1.36× throughput), all outcomes and protocol messages exact. No simulator
change. [Profile, method and limits](docs/NEURAL_TRAINING_CURRENT_PROFILE.md).

Further optimization review: exact Fable 5.1 recommends measured three-ray result
reuse, memo-cache experiments and cheaper obstacle queries; Astra prioritizes a
small exact path-smoothing experiment after targeted counters. No additional speedup
is claimed. [Review](plans/024-further-performance-fable-review.md) and
[corrections / experiment order](plans/024-further-performance-next-steps.md).

## Exact training-battle optimization — 22 September 2026

Source `cfcd101678649cb2` reuses exact tactical visibility endpoints and report
weights per assessment. Same training behavior on 12 recorded-action pairs;
15.9% less total native CPU time. All 41 historical pairs, 441,216 bit-exact
field-cost comparisons, full Linux suite and three drills trace checks plus repeat
pass. The existing 40-update experiment retains its frozen `d73667841df73faa`
binary; new builds and future training runs receive the optimization. No policy
promotion or gameplay change. Later combined-build Windows/Unreal verification is recorded above. [Evidence and limits](docs/NEURAL_TRAINING_PERFORMANCE.md),
[Astra review](plans/024-route-performance-astra-review.md).

Fable 5.1 consultation succeeded after Jordan enabled full access: [verbatim
review](plans/024-command-performance-fable-review.md), [Astra’s corrections and
next experiments](plans/024-command-performance-next-steps.md). Re-profile the
optimized build with call-site/hit-rate attribution, then test descending threat
bounds and visibility-cache access reductions. Memory-latency dominance and exact
payoffs remain hypotheses; preserve the frozen training build and all parity gates.
The reviewed follow-up is implemented in the second optimization recorded above.

## Longer neural training experiment — completed 22 September 2026

Completed 2,880 active-Legacy training battles across three 40-update seeds and 1620 evaluation cases. Legacy remains default; not promoted. Development selected rl25-i040.

This duration experiment does not establish a reliable average outcome improvement over both Legacy and untrained continuation on the reserved maps. Inspect individual seeds and development curves below; more training is not demonstrated to solve the problem.

See [results and videos](docs/NEURAL_LEGACY_RL_DURATION.md) and [experiment plan](plans/024-longer-rl-experiment.md). Fresh-map seeds 1101–1125 are now inspected. New Fable review was unavailable in this sandbox; no new approval claimed.

## Neural reward pilot against active Legacy — 22 September 2026

Jordan authorized the next stage: train against **active Legacy Plan 023**, with
static-defence attacks retained only as regression cases. The schema-3 actor adds
KEEP for a pending plan; a separate matched experiment expands two to six routed
candidates per maneuver family. Persistent lean workers, elapsed-time masked PPO,
separate actor/critic inputs and comparison against the untrained schema-3 actor
are implemented. Legacy remains the default; no promotion is implied. Exact Fable
5.1 design/review and Astra's resolutions, experiment split and results live in
[the reward pilot report](docs/NEURAL_LEGACY_RL_PILOT.md).

Completed: source `d73667841df73faa`, 384 active-Legacy training battles / 195,777
decisions (three narrow seeds and one wider run), 780 evaluation battles. The
selected narrow seed 25 is 17/3/25 W/D/L on 45 reserved-map battles against Legacy
17/6/22; wide is 17/2/26. No reliable improvement; **not promoted**. All ten
historical battle/conduct guards pass, but static-validation attack score falls
0.0329 [-0.0627, -0.0036]. Full Linux suite, 134 Python tests, 41 parity pairs,
three traces plus repeat, Linux/Windows neural contracts, four models × 2,000
native/PyTorch decisions on each platform and UE 5.8 build pass. Models are in
`models/squad/plan024-legacy-rl-v1/`; best/middle/worst short videos and limitations
are in the report. These inspected development/reserved maps must not be reused
as an unopened promotion set in the next training iteration.


## Neural squad pilot — 22 September 2026

Jordan authorized [Plan 024](plans/024-neural-squad-layer.md), requiring the Plan 023
benchmarks, lean parallel battles and short side-by-side videos. The first imitation
ranker is implemented on source `aef3b097c0df4b47` and available by optional
`--neural-model` / `-ArmyNeuralModel` flags. It controls Azure candidate selection
through Plan 023 execution. At that milestone PPO and broader squad authority
were not implemented; the subsequent reward pilot is described above.
Legacy remains the default. The exact Fable 5.1 architecture and implementation
reviews, with Astra's resolutions, are linked in the
[pilot report](docs/NEURAL_SQUAD_PILOT.md).

Twenty separate training maps / 60 lean battles produced 20,612 decisions. The model
is saved in `models/squad/plan024-imitation-v1/`. Full paired evaluation: 270 lean
battles, 12 workers, 8.8 minutes, maximum 585 MiB per battle. Attack performance is
statistically level with Plan 023; **not promoted**, because Azure order rate rises
18.44/minute [3.01, 32.53] and fails the existing churn guard. All other battle/conduct
guards pass; loop-specific external gates are not claimed as a promotion bundle.
Full Linux suite, 126 Python tests, 41 historical/city parity pairs, 3 trace pairs
plus repeat, Linux/Windows native neural contracts, 2,000 real native/PyTorch
inference comparisons on each platform and Unreal 5.8 build pass. Video links and
limits are in the report. Next: replay verdict, diagnose plan churn, then extend
learning and squad authority without weakening the existing conduct rules.

**Pilot replay verdict (22 September):** Jordan says the imitation model did its job;
first two clips looked good, regression clip left men behind for a while. This accepts
the bootstrap, not promotion. [Astra/Fable assessment](plans/024-pilot-assessment.md)
records new-map evidence, reward proposal and corrections to the attributed review.
The recommendation at that point was explicit plan continuation, focused straggler
diagnosis and persistent lean RL infrastructure, then PPO from imitation weights.
No PPO run had started at that assessment; the completed stage is recorded above.
No conduct thresholds have changed.

**Next-phase opponent ruling (22 September):** Jordan requires training against
active Legacy Plan 023 AI, not specialization in stationary defenders. Training and primary evaluation use moving Legacy opponents on varied generated
cities; static-defence battles are regression diagnostics only. The earlier
static-attack reward proposal is superseded for these phases. The ordinary
battle reward is now defined in the reward pilot report above; conduct checks,
lean parallel workers and short videos are retained. See [Plan 024](plans/024-neural-squad-layer.md).

## Plan 023 + art integration — 21 September 2026

User-authorized main integration combines AI `16592ff` with art `b53cdbf`.
The latest AI is Legacy Plan 023 Stage E (`80dfe8feb994faf2`), not Drills.
When Jordan says "pull up the project", open the playable demo (`-game -ArmyLegacy`),
not Unreal Editor. Projectile visibility should use richer color, not larger bullets.
Sim remains identical to Plan 023 (`45da1e25dd1aa9e7`). Actual male, matching blue
palette, refined MG grips and faction-colored rune/missile/impact visuals are
integrated. Full Linux suite, 126 Python tests, UE 5.8 build, four-variant handling
and native battle/projectile checks pass. Coats use skinned motion; Blender cloth
physics has not become Chaos cloth. See [integration and evidence](docs/ART_INTEGRATION_023.md).
The user explicitly excludes Fable review for visual iteration; no Fable visual
review was requested or claimed. Architecture collaboration below still applies.

Runtime projectile follow-up (22 September): real 1x battle captures exposed
washed-out additive blending and loss of moving trail detail. Premultiplied alpha
and responsive AA retain faction color without resizing the bullets. The muzzle
correction now uses the elevated first flight sample; native projectile contracts
include that real-record convention. See the integration report above.

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

**Queued for after the AI iterations (user, 21 September 2026):** one shared-code change that keeps soldiers away from enemies
they know about (shelter, flank and bound goals, path cost), re-rooting all three controllers, and the decision on the
`MGEncounterTests` backstop: see the section of that name at the end of plan 018. Not while generations are running.

**Generation 19 (21 September 2026):** five Sonnet proposals on the user's notes, all scored, none beats its parent's value
(four pass every guard: a man ahead is not recalled `e9d98b7abaf157b0`, the support comes up to a firing position
`e02115d56cda2594`, a chained bound's deadline from real distances `dda79cf26104d800`, a man left behind is called up
whatever his task `7e9144f8f75a9d2c`; one order with a progress test `4d32a8e2baae98fe` fails men at the fight). Four
independent traces land on the rifle group's relay in `UpdateCommands` (`lagging` by raw distance in any direction, regroup
on a moving leader, skipped when the corporal is gone, the leader's own route set elsewhere): one-branch fixes trade one
failure for another; the architect proposes a plan-sized redesign of the relay with the user's rulings. Table at the end
of plan 018.

**Plan 023 landed (21 September 2026):** [plan 023](plans/023-the-rifle-group-moves-as-one.md), the rifle group moves as
one (stations from one allocator, behind and ahead along the group's axis, the stand-off, a general `pace` on every order
with the leader at half pace until his men are with him, the covering pair, the gun's angled firing position, the officer
with the leading squad, the shattered squad attached or merged), five stages each scored as a loop node
(`a5353ef76c03cc80`, `5ab90b4e236dc5c9`, `82c82b7c67d54e01`, `dd6eae013fd640e0`, `15bb3594f8ddddf3`,
`80dfe8feb994faf2`), is on the branch with plan 021 inside it: source `45da1e25dd1aa9e7`, 40/40 lean parity, trace
parity, full suite exit 0 with three assertions restated for the design, 126 Python tests, Unreal compiles. Against the
node it started from: level on value (0.767 to 0.799 by the validation draw; development 0.810 against 0.839), regroup
orders a quarter of what they were, friendly fire and quiet squads down, flanking fire up, attackers lost 32 % to 34 %.
The whole process is written up in [docs/AI_PROCESS.md](docs/AI_PROCESS.md) for whenever AI work resumes.

**[Plan 023](plans/023-the-rifle-group-moves-as-one.md), drafted 21 September 2026 at the user's instruction, awaiting his
rulings:** one design for the rifle group's relay in place of single-branch fixes: every member, the leader included,
holds a fixed covered station that belongs to the group's objective; behind and ahead are measured along the group's
axis, not as distance to a man; a man behind is called to his station once, a man ahead in a bearing place keeps it and
the group comes up to him; an order is re-sent only when its content changes; the relay never goes dark; the support
and the platoon staff are included. Four stages, each scored as a loop node; nothing is built until the six rulings in
its section 6 are answered.

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

## Early project instructions — undated, before 16 September 2026

The undated closing sections of the old `CLAUDE.md`, from the cognition era (before 16 September
2026). Text verbatim; headings demoted one level.

### Project architect context

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

### Current cognition implementation

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

### Character art planning

The user prefers the simplified low-poly reference with minimal facial detail.
[Modular character production proposal](plans/006-modular-character-production.md)
records Astra's proposed sequence and compatibility boundaries. This is pending
design discussion, not an accepted production scope. Fable review was unavailable
because of the subscription limit; no review of this plan is claimed.

### Ongoing AI reliability repair

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
