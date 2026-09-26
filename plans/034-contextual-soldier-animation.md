# Contextual soldier animation — 25 September 2026

Status: **implementation in progress on UE 5.8.3 / GASP 5.8**. The source library
now has 360 motions per body and four indexed databases. Native Motion Matching,
pose history, fixed-step decision caching, equipment profiles and battle/replay
wiring are implemented. Initial four-body tests reproduce the native blend stack
and seeks. FBX root scale/basis and the separate USkeleton reference pose have been
corrected; all 720 motion clips have been regenerated. Epic foot contacts, cached
root corrections and released-hand support are implemented. The 46-second review now
includes a warped GASP vault with free-hand contact, Chaos lower coats and bolt-palm
contact. Skeletal seeks and muzzle queries preserve poses; cloth resets on a seek.
Prone/crawl, authored weapon-action polish, cloth tuning, complete rendered acceptance
and performance acceptance remain open. Functional checks of all 64 soldiers and
a Development packaged executable pass; numerical success is not visual approval.
**Do not stop at the former unarmed retarget checkpoint.** Jordan explicitly
instructed continuation until the full system is hooked up. No AAA/visual acceptance
is claimed. See [reproduction and limits](../docs/GASP_PROTOTYPE.md).

Jordan requests AAA-quality continuous animation, adaptable to equipment and outside
variables, based on the latest GASP if appropriate. External animation sources are
allowed when they fit. Jordan explicitly authorized downloading UE 5.8 and GASP.
Quality is judged in rendered motion, not by passing numerical pose checks.

Worktree: `/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler`.
Branch: `codex/gasp-soldier-animation`, starting at `9a559c4`, the latest fetched
`origin/covering-fire-2026-09-24` and `origin/main`. The original main checkout has
unrelated dirty work and was preserved. The older September 21 art branch is not
the development base. Jordan subsequently directed integration into main; the
worktree now includes main `0a137f5` with grenades and building destruction.
This plan became **034** because main's building-destruction plan already owns 033.
Animation makes no changes to the simulation sources or gameplay defaults.

## Observed project state

The current branch already integrates the actual Tripo male with 49 retargeted
clips, the female and refined MG. See `docs/ART_INTEGRATION_023.md`; it supersedes
the older `ART_HANDOFF.md` boundary saying these assets are Blender-only.

| Behavior | Current input / implementation | Work required |
| --- | --- | --- |
| Directional walk/run/sprint | Recorded positions, facing, sprinting; in-place clip blending | Starts, stops, pivots, foot contacts, continuous pose selection |
| Fatigue | stamina, winded; procedural breathing | Weight-sensitive carry and fatigue layers without changing sim speed |
| Crouch | Crouch locomotion/aim clips | Authored enter/exit and motion-matched interruption |
| Prone/crawl | Stance::Prone; lowered crouch set (`CharacterBlend.h`) | Actual prone, crawl, turns, aim, reload and down/up transitions |
| Cover and peeking | coveredPath, stance, action, aim, suppression | Geometry-relative ready/lean/peek/duck; do not assume every covered path is crouched |
| Vaulting | vaulting/progress/height, takeoff/landing/landsAt | Real obstacle-contact clips and weapon carry; current jump sequence/root arc is a placeholder |
| Rifle shots | Recorded shot times, gun action/cycle, recoil | Authored aim/fire/recoil/manual bolt cycle, synchronized to sim cadence |
| MG | Equipped weapon, supportGun, movingFire, ammo/reload | Distinct heavy locomotion, shoulder/hip/support stances and authored reload |
| Injuries/death | health/activity, event time and direction | Weighted reactions, interruption, hand release, ground contact; preserve replay |
| Attention | look separately from facing and aimPoint | Bounded additive gaze/aim; no enemy-truth lookup |
| Grenades | Plan 032 now merged, opt-in; recorded reason, stun/deafness and blast height | Authored throw, throw-back, dive and recovery coverage; exact action/release alignment remains open |

The gun's definition and resolved action (`WeaponItem`, `WeaponStats`) should drive
handling, not only the existing `MachineGun` boolean. Modifiers already affect
timing. New animation data must not redefine combat numbers.

## Architecture selected for the first evaluation

1. **Epic GASP 5.8 as a reference and asset foundation.** Preserve the army's own
   simulation/replay movement authority. Do not replace soldiers with GASP's player
   controller or Mover-driven gameplay. Pin the downloaded sample version and engine
   patch before copying assets. Use a separate sample project for inspection.
2. **Context-filtered pose search.** Choosers select compatible databases by carry
   family, stance, speed, aim and full-body action. Motion matching selects the
   incoming pose/entry frame using trajectory and pose history. Starts, stops,
   direction changes and turn-in-place require real clip coverage.
3. **Equipment animation profiles.** Each equipped item supplies carry family,
   compatible locomotion sets, grip and shoulder/support contacts, hand-pose assets,
   aim limits, reload/cycle clips, release/reacquisition curves and attachment points.
   Begin with bolt rifle and heavy MG, with an explicit unarmed profile. A heavy
   gun changes balance and hips; an upper-body overlay alone is insufficient.
   Profile dimensions are presentation authoring data, not a second ballistics model.
4. **Authored actions plus procedural correction.** Use linked animation layers for
   equipment, additive aim/recoil/breathing/suppression, and authored bolt/reload
   sequences. Inertial transitions preserve continuity on interruption. Separate
   release curves let hands leave the gun for a bolt, magazine, wall or grenade;
   never force two-hand IK through every action. Hands are corrected after layering.
5. **Contact-aware body solving.** Retarget to both actual bodies with dedicated
   retarget poses. Add required virtual/IK bones and validate axes, scale, root,
   finger chains and twist distribution. Use bounded stride/orientation/root offsets,
   terrain foot placement and pelvis/body correction. Keep the grip and muzzle
   constraints consistent so one correction does not undo another.
6. **Traversal and world interactions.** Match real vault/cover transition clips
   to support surfaces and approved takeoff/landing targets. Motion-warp only the
   visual path within the recorded action interval. The animation must not drag the
   simulation body through cover, invent a climb, or delay a shot for convenience.
7. **Secondary motion and reactions.** Cloth, straps and powered ragdoll can add
   quality after locomotion/contact fundamentals. Evaluate Physics Control for hits
   and falls. Experimental features, including UAF, are isolated trials until their
   behavior is measured; the architecture does not require adopting all new features.

## Replay is an architectural constraint

GASP pose history, inertial blending, IK springs, cloth and ragdolls are stateful;
the existing renderer permits arbitrary pause/seek/rate changes. Calling a motion
matching node at an arbitrary replay time is not sufficient to reproduce a pose.

Prototype fixed-step visual evaluation from recorded movement, then cache pose
selection decisions, clip times, transition weights, root offsets and contact
states. On seek, restore a visual checkpoint and replay a bounded history window.
For physics, evaluate caching/baked tracks against checkpoint warm-up. Specify
what remains deterministic before enabling physics in the battle renderer.
Full pose caching for all soldiers and all battle frames needs a memory budget;
do not assume it is free. Rewind Debugger is an inspection tool, not the game's
replay implementation. Rendering may sample the completed battle's future path;
this data must never flow back into soldier decision-making.

Exact shot/reload/release events remain owned by the simulation. Clip markers map
visual contact phases onto those intervals; animation notifies must not fire extra
bullets or change ammunition. If a gameplay interval cannot fit a convincing
action, report that mismatch rather than arbitrarily speeding up the whole body.

## Animation sources and missing coverage

Existing Mixamo exports provide 49 clips per body but lack much of the contact and
transition coverage above. Preserve source traveling/root trajectories for search
features even when actor displacement stays simulation-driven. Do not fabricate a
motion-matching database by treating stripped in-place travel as true root motion.

Epic GASP is the first source for locomotion/traversal. MoCap Online Rifle Pro is
a candidate for coherent armed starts/stops and directional transitions. Its
publisher describes 360 unique animations and 760 files including duplicate
traveling/in-place versions; file count is not unique motion coverage. It does
not establish suitability for this bolt rifle or heavy MG. Inspect actual full-body
clips before purchase/import. First-person arms-only packs and gun-only animations
do not solve this game's third-person requirements. No paid pack was purchased.
Custom authored/captured prone, bolt, MG support/reload and grenade clips remain
possible necessities. Preserve licenses/source manifests for acquired content.

## First visible acceptance slice

One soldier on a small test course: idle → start → walk → sharp pivot → sprint →
stop → crouch → aim/fire → bolt → reload → cover peek/duck → prone/crawl/get up →
low vault → recovery. Build rifle coverage first, then repeat with the MG and both
bodies. Grenade actions join when their authoritative event contract lands.

Review fixed-camera side/front/three-quarter and close-up captures at normal speed
and slow motion. Include mid-action interruption, uneven ground, stance changes,
deaths and equipment changes. Failure examples: foot skating, popping hips,
weightless pivots, muzzle/hand separation, knees through coats, overextended arms,
instant hand teleportation, and abrupt pose restoration on replay seek.
Record numerical contact/pose discontinuity and frame-time measurements alongside
video; thresholds are initial engineering diagnostics, never substitutes for
Jordan's visual acceptance. Compare with the shipped GASP example in the same
view instead of claiming equivalence from the technology name.

Then measure 64/100/200 soldiers on the target hardware at gameplay and inspection
zoom. Use significance-based search/IK/cloth budgets, with the selected close-up
soldier receiving full evaluation. Budget Allocator chiefly addresses component
ticking; also measure worker-thread Pose Search/Control Rig and cloth cost.

## Execution order and current blocker

1. Install UE 5.8 and obtain the official matching sample; launch it independently.
2. Inspect the real sample assets and plugin versions. Build this branch using 5.8
   explicitly; do not silently adapt it to 5.4 for this evaluation.
3. Retarget the sample's baseline locomotion to one actual soldier and render the
   unarmed comparison. Establish foot/root/scale correctness before weapon layers.
4. Add the rifle carry family and contact/action layers; demonstrate the first
   continuous slice and interruptions. Extend to MG and the second body.
5. Integrate recorded battle context, deterministic seeking and new action coverage.
6. Tune cloth/reactions and crowd cost, then request visual acceptance from Jordan.

Before Jordan's installation, this machine's Epic manifest listed only UE 5.4.4. No matching sample
was found in the usual project locations. Jordan confirmed both need downloading.
The Windows computer-use tool failed before evaluating JavaScript:

`js: codex/sandbox-state-meta: sandboxCwd is not a local file URI: file:///home/jchan/ww1-autobattler`

Resetting the node kernel and retrying produced the same error. No launcher input,
download, installation or account action succeeded. This is an initialization/path
rejection, not an Epic error. A Windows-native task rooted on a Windows drive is a
workaround to test, not a verified resolution. The user has been asked to provide
installed engine/sample paths if completing those launcher steps manually.

## Primary sources checked 25 September 2026

- [Epic GASP 5.8 announcement, 12 August 2026](https://www.unrealengine.com/tech-blog/download-the-latest-game-animation-sample-project-now-updated-for-ue-5-8): current sample, Chooser/Pose Match/Blend Stack and Physics Control additions.
- [Official GASP download](https://www.fab.com/listings/880e319a-a59e-4ed2-b268-b32dac7fa016).
- [GASP documentation](https://dev.epicgames.com/documentation/unreal-engine/game-animation-sample-project-in-unreal-engine).
- [Pose warping](https://dev.epicgames.com/documentation/en-us/unreal-engine/pose-warping-in-unreal-engine).
- [Motion warping](https://dev.epicgames.com/documentation/en-us/unreal-engine/motion-warping-in-unreal-engine).
- [Animation layer linking](https://dev.epicgames.com/documentation/en-us/unreal-engine/animation-blueprint-linking-in-unreal-engine).
- [IK retargeting](https://dev.epicgames.com/documentation/en-us/unreal-engine/ik-rig-animation-retargeting-in-unreal-engine).
- [Animation Budget Allocator](https://dev.epicgames.com/documentation/en-us/unreal-engine/animation-budget-allocator-in-unreal-engine).
- [Pose Search debugging](https://dev.epicgames.com/documentation/unreal-engine/motion-matching-debugging-in-unreal-engine).
- [UAF plugin status](https://dev.epicgames.com/documentation/unreal-engine/API/PluginIndex/UAF): experimental.
- [Publisher's Rifle Pack coverage](https://faq.mocaponline.com/en/articles/4127639-rifle-animation-packs).
- [OpenAI Windows/WSL setup](https://learn.chatgpt.com/docs/windows/windows-app#windows-subsystem-for-linux-wsl): Windows-native agent plus Windows-drive projects is the recommended reliable setup; no documentation of the exact error was found.

## Preparation completed while the user downloads dependencies

Jordan will download the engine/sample and asked work to continue meanwhile. Added
`AnimationContext.h`, a read-only input adapter for the latest soldier/weapon/shot
record. Its portable test passes exact shot indexing, equipment/stance/traversal
handling, between-frame reload recovery and 2,000 shuffled seeks. This is input
validation, not a claim that GASP/cloth history can now seek correctly.

Added a UE 5.8/sample preflight with six passing negative/structural tests, an
[audit of the 49-clip libraries](../docs/ANIMATION_COVERAGE_2026-09-25.md), and the
[equipment/contact and replay input contract](../docs/SOLDIER_ANIMATION_INPUTS.md).
The adapter is not wired into the current renderer. Simulation code is untouched.
The sample's actual Blueprint/Control Rig assets and visual prototype still require
the downloads and editor validation. No commit, push or new Unreal build claimed.

## UE 5.8 installation and target-rig checkpoint

Jordan reported the engine and GASP installed. Verified UE **5.8.3**, changelist
58210709, at `C:/Program Files/Epic Games/UE_5.8`. Engine/plugin structural checks
pass. The official sample's location is still requested: no `.uproject` in the
usual Unreal Projects folder and the default Epic VaultCache is empty. This is
not proof that the sample is absent elsewhere.

The isolated mirror is `C:/Users/Jordan/Documents/Codex/ArmyPrototype-GASP`.
`scripts/build.sh` completed all 44 native actions successfully in 66.5 seconds,
using MSVC 14.51.36257 / SDK 10.0.26100.0. UBT warns that this compiler is newer
than its preferred version; compilation/linking succeeded. The source project
remains 5.8. Git LFS objects were hydrated before editor asset inspection.

`tools/character/audit_unreal_animation.py` ran in UE 5.8.3 with no asset errors:
100 animation sequences, 3 skeletal meshes (including the archived male proxy),
2 skeletons. Production female: 56 bones, root `SoldierRig`; production male:
68 bones, root `Male_Azure_Rig`. Both roots have reference scale 100, so scale/root
motion must be checked explicitly when matching a unit-scale sample skeleton.
Female fingers have thumb/index/middle chains; male also has ring/pinky chains.

`tools/character/create_soldier_ik_rigs.py` creates new assets under
`/Game/Characters/GASP`: `IKR_Female` (18 verified chains) and `IKR_Male`
(22 verified chains). Pelvis is `Hips`, with each mesh's own hierarchy root as
its root-motion bone. Endpoints/ancestry and saved settings are checked. Original
meshes/skeletons/clips are untouched. These are **target chain definitions only**:
no source mapping, corrected retarget pose, FBIK/contact solver or GASP motion
has been validated yet. The actual sample is needed next.

Local evidence: `.local/animation-context/build-5.8.log`,
`asset-audit-5.8.log`, `soldier-asset-audit.json`, `create-ik-rigs-5.8.log`, and
`soldier-ik-rigs.json`. No game screenshot/video or quality approval is claimed.


## Sample located, normalized retarget and rendered study

Jordan supplied `C:/Users/Jordan/Documents/Unreal Projects/GameAnimationSample`.
This resolves the installation/path blocker above. The actual 5.8 sample contains
3,890 packages and 2,008 animation sequences, with 155 Pose Search databases and
33 schemas. Its skeleton audit completed without asset errors.

Dependency-aware migration staged a reviewed 1,188-package source closure only in
the separate Windows mirror. Ten clips per body now export through dedicated
retargeters with mapped chains, auto-aligned target poses and FBIK. A direct pass
on the imported scale-100 roots collapsed the torso. The corrected pass duplicates
the bodies/skeletons, bakes reference translations to centimetres and verifies all
reference joint positions are preserved while scales become one. Original meshes,
skeletons and production animation stay intact. The corrected clips pass five
finite/proportion pose samples each; this is not contact or quality acceptance.

The opt-in `GaspReviewGameMode` displays source/female/male together. Its latest
capture runs each motion at original speed, with horizontal root travel centered
and explicit cuts between clips. Initial phase-normalized captures were anatomy
checks only and are superseded for speed review. Crouched coat folds, fingers and
shoulder clearance still need work. Cloth/post-process are disabled in this study.
There is no battle renderer replacement or continuous motion-matching graph yet.

Reproduction, files, dependencies and remaining checks:
[docs/GASP_PROTOTYPE.md](../docs/GASP_PROTOTYPE.md). Native UE 5.8 build succeeds;
13 focused Python checks and the portable animation-input test pass. Fresh-editor
validation reloads all 20 compressed clips with zero errors/warnings, verifies
normalized scales and confirms source notify events are absent. Root turn rotation
is preserved in the review using transient clip copies; the earlier extraction-locked
capture is superseded. Local evidence
includes `gasp-asset-audit.json`, `gasp-transfer-report.json`,
`gasp-retarget-report.json` and `build-gasp-review.log` under
`.local/animation-context/`. No full simulation suite or commit is claimed for
this isolated presentation checkpoint.


The corrected local capture is `.local/animation-context/review/gasp-soldiers-final.mp4`
(31.63 s at 30 fps). A single prototype gameplay digest check passes on unchanged
source `0874018c441ad8c7`: legacy Works seed 100, 360 s, digest
`5032858285234573878`, using the existing matching binary. Raw battle output was
removed after retaining the manifest and check result. Full simulation suite and
production visual acceptance remain unclaimed.
