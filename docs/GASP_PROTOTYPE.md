# Armed GASP integration — 25 September 2026

**In progress, not visually accepted.** The battle renderer now reads a fixed-step
GASP motion cache for both actual soldier bodies with their rifle/MG overlays.
The earlier ten-clip comparison is retained below as authoring history; it is not
the acceptance scene. Plan 034 remains open for prone/crawl, traversal polish,
weapon-action polish, cloth tuning and complete rendered acceptance. Functional
64-body battle checks and a Development packaged executable now pass.

## Continuous motion and replay

`SoldierMotionInstance` evaluates native UE 5.8 Motion Matching and Pose History at
30 Hz. The catalogue contains 360 retargeted motions per body, with separate standing
and crouching Pose Search databases. `SoldierVisual` stores the native blend stack,
root offset, pelvis/foot corrections and sprint carry transition at each step.
The visible `SoldierAnimInstance` reconstructs that pose at replay time and applies
equipment handling. A paused or backward seek does not advance pose history.

The planner copies a compiled, constant Motion Matching node from
`/Game/Characters/GASP/Runtime/ABP_MotionNodeTemplate`. Unreal strips the node's
folded settings from native fields in a cooked build; the generated template retains
their compiled class data. The instance holds the template class alive. Generate it
with `--runtime` after the motion library. Its graph has no dynamic pins or functions;
runtime database selection remains on the native planner. Editor checks pass with
identical results after this change. The Development packaged executable also
passes the four-body course and the 64-soldier city2 battle checks.

The worktree includes main `0a137f5` (plans 032/033). The destruction renderer's
instanced geometry now participates in presentation collision queries. Each motion
cache step selects its matching geometry revision, then restores the displayed
revision before cloth and rendering. Replay seeks show geometry before characters.
Recorded blast height is included in character placement; airborne contacts are
disabled. This connects existing blast displacement, not an authored knockdown,
grenade throw or dive animation. Those actions still require source coverage.

`AnimationContext.h` reads the existing immutable battle record. Future trajectory
samples are presentation inputs only. Shot timing, reload duration, movement and
casualty state remain authoritative simulation outputs. The same pose cache supplies
the visible gun muzzle and projectile origin. No simulation source changes.

The contact graph uses Epic's Foot Placement node with independent virtual foot
targets and two-bone leg solves. World presentation geometry blocks visibility traces.
A native bounded root offset consumes extracted root motion, with a 12 cm positional
limit, a 55 degree rotation limit, decay and obstacle sweeps. This is a custom native
adapter, not a claim that the sample's experimental Offset Root Bone node is used.
It never displaces the recorded battle actor. Contact output is cached for rewind.

Equipment data assets under `/Game/Characters/GASP/Equipment` control carry,
lean, breathing, aim limits, recoil and manual bolt behavior. The present bolt/reload
paths are procedural targets based on the earlier standing poses, not imported
mocap reloads. Released hands follow their action targets without moving the gun to
satisfy their reach. The supporting hand remains on its grip. Authored finger and
mechanism contact polish is still required.

The rifle palm now follows the actual bolt-knob transform during the manual cycle;
the profile supplies the same rest position, opening angle and travel for both the
visible mechanism and hand solve. During rifle reload, the released right palm and
stripper clip converge on the receiver feed position, with a distinct insertion
phase. The current numerical receiver contact error is below 0.001 cm; this does
not certify finger contact or convincing body motion. Muzzle sampling restores aim/look, transform,
skeletal pose and cloth state after evaluating the shot-time pose.

The standing GASP vault now uses a cropped traversal segment, mapped to recorded
takeoff/landing landmarks and obstacle height. It preserves the source's wall-crossing
phase, plants the free left hand, carries the weapon in the right, and blends into
and out of the cached locomotion pose. The source clip's extended falling tail is
excluded. One close-up is inspected; continuous landing/contact review is still open.

Chaos coat authoring is in `create_gasp_cloth.py` and `GaspClothAuthoring.cpp`.
Only the existing lower-coat section simulates: waist pins, a free hem and six
normalized body collision capsules. `SoldierClothComponent` advances Chaos from
the replay clock; a pause freezes it, and a seek resets and locally settles it.
**Cloth does not reproduce its exact historical deformation after a seek.** Bone,
grip and muzzle poses continue to use the deterministic skeletal cache. Runtime
cloth output and cost must be checked separately from the successful asset import.
The battle limits cloth to close-view soldiers, prioritizing the selected unit and
screen centre (`army.Cloth.MaxSimulated`, default 4), with retention preference for
already simulated coats. Live budget activation uses three warm-up steps and a
0.15-second replay-time fade; seeks still settle twelve steps. Distant coats retain their skin
weights. The four-body review always exercises all four coats. Binding must update
source-section user data and invalidate the mesh DDC; otherwise a loaded cloth asset
can report a simulation instance while its render mapping and output remain empty.
The generated coat material explicitly enables Clothing usage.

## Coordinate corrections

The original FBX object roots contain both scale 100 and a 90 degree basis rotation.
Generated bodies use unit scale and an identity root basis, baking the old root basis
into its direct children. Both **mesh and USkeleton reference poses** must be updated:
`SkeletonModifier` alone updated the mesh but left the separate skeleton at scale 100.
That made extracted root motion 100 times too large even though rendered poses and
Pose Search trajectory features appeared correct. `SynchronizeNormalizedSkeleton`
now updates the generated USkeleton explicitly. Original production bodies stay intact.

An additional upper-body correction anchors the gun to pelvis translation without
inheriting the unarmed hip twist, and calibrates the barrel axis before applying aim.
Head attitude is resolved in component space so sprint hip lean is not added twice.
Native checks now include barrel heading and the root-offset bound, not just wrist
positions. The adapter restores the simulation aim marker's documented 1.5 m height
offset to recover the actual target. World-space aim and gaze are smoothed on the
fixed replay clock and cached, then resolved relative to body facing. Numerical
success still does not certify visual quality.

## Reproduce the armed integration

Build with UE 5.8.3 and an isolated marked Windows mirror, with matching GASP 5.8
installed. The local sample is at
`C:/Users/Jordan/Documents/Unreal Projects/GameAnimationSample/GameAnimationSample.uproject`.
The current mirror is `C:/Users/Jordan/Documents/Codex/ArmyPrototype-GASP`.

```bash
scripts/build.sh
python3 tools/character/run_gasp_prototype.py \
  --engine '/mnt/c/Program Files/Epic Games/UE_5.8' \
  --sample '/mnt/c/Users/Jordan/Documents/Unreal Projects/GameAnimationSample/GameAnimationSample.uproject' \
  --mirror '/mnt/c/Users/Jordan/Documents/Codex/ArmyPrototype-GASP' \
  --stage --retarget --motion-library --contacts --actions --cloth --runtime --motion-validate
```

Generated assets belong under `Unreal/Content/Characters/GASP/` in LFS. **Copy newly
generated assets from the mirror back to that directory before another build**:
`build.sh` copies repository assets into the mirror. Do not build while that mirror's
editor/game still has the native module loaded. The source sample's assets are staged
only in the build mirror, not redistributed wholesale in the repository.

Run `--combat-review --capture` for the continuous 46-second four-body test; add
`--still --time 27` for one shot, or `--body 0` for a close female-rifle view (1 female
MG, 2 male rifle, 3 male MG). Frames are saved in a new timestamped folder under
`Saved/Screenshots/GaspCombat-*`. Wait for `capture-complete.txt` and process exit.
Encode `combat-%04d.png` at 30 fps. The older `--review` is an unarmed clip comparison.

Headless `--motion-validate` writes `Saved/AnimationReview/gasp-combat-check.txt`,
`gasp-combat.csv` and `gasp-queries.txt`. The course covers starts/stops, turns,
covered movement, run/sprint, crouch/rise, fire/bolt, reload, moving fire, fatigue and
death, and a one-metre obstacle vault. It does not yet exercise prone. Native reconstruction,
finite poses, grip reach and repeated seeks are checked across 1,381 frames and four
body/equipment combinations. Current fixed-step generation is roughly one second
for this course before cloth, about 18 seconds with all four coats on this machine;
this is not a full-army frame-time benchmark. The runner checks the newly written
`passed=1` marker as well as process completion; a zero launcher exit code is insufficient.

The first continuous rendered capture is local
`.local/animation-context/gasp-armed-contact-review-v1.mp4` (42 s, 1600×900, H.264).
It predates the skeleton-reference and barrel-axis fixes and is **diagnostic only**.
Do not present it as the finished system or substitute it for a corrected capture.

The corrected 46-second capture is
`.local/animation-context/gasp-armed-review-v3.mp4` (1600×900, H.264), generated from
`GaspCombat-20260925-175936`. It includes the blue cloth material, bolt-knob contact
and muzzle-query preservation. Inspected sprint/reload/vault/landing frames; reloads
still need stronger authored motion and prop contacts. This is a review, not acceptance.

The city2 seed-100 integration check passes on a 120-second recorded battle: 640
body/time samples, 12 rifle and 12 MG shot events, finite poses, wrist constraints,
pose advancement and repeated seeks at changed playback rates. The inspector now
reports the actual evaluated GASP clips instead of the legacy selector's names.
Add `-ArmyAnimationBenchmark` to `-ArmyCharacterBattleTest` for the cached-pose CPU
measurement with zero/four close coats; this excludes rendering and motion search.

Package the runtime after the editor build and asset copy:

```bash
python3 tools/character/package_gasp.py \
  --engine '/mnt/c/Program Files/Epic Games/UE_5.8' \
  --mirror '/mnt/c/Users/Jordan/Documents/Codex/ArmyPrototype-GASP' --validate
```

Use `--skip-cook` only for native-code changes against already cooked assets. The
helper checks fresh result files, all 64 GASP bodies, and the actual city2 map load;
it retains reports/manifests and removes analyzed raw battle exports. The archive is
`Saved/GaspPackage/Windows/ArmyPrototype.exe` in the mirror. Runtime assets are cooked
from explicit character/effects folders; staged sample gameplay is excluded. Four
generated `.army` map files are packaged as UFS data. This is a Development build,
not Shipping certification; the external map-generation Python tool is not bundled.

Latest packaged check: 1,381 frames × four bodies, exact repeated skeletal seeks,
finite output from 1,628 cloth vertices, 0.0012 cm bolt contact, 0 cm reload/vault
contact, and muzzle queries preserving pose/cloth. The 120-second city2 run passes
640 body/time checks and 24 exact rifle/MG shot events. A short cached-pose CPU
sample measured 2.4 ms mean with no coats and 9.3 ms with four coats (14.8 ms maximum)
while Linux tests ran; it excludes rendering and motion search, so is not an FPS
claim or quiet-machine performance acceptance.

Jordan reported the inline v3 video did not display. A Windows-accessible copy is
`C:/Users/Jordan/Documents/Codex/AnimationReviews/armed-gasp-46-seconds.mp4`.
It predates receiver-contact reload, aim smoothing and cloth-budget fade changes.

The updated v4 capture is `C:/Users/Jordan/Documents/Codex/AnimationReviews/armed-gasp-v4-46-seconds.mp4`
(46 s, 1600×900, H.264). `animation-review.html` in that folder embeds the entire
video and provides chapter buttons and slow playback without a web server. It
includes the latest receiver contact, aiming and cloth changes. The renderer was
rebuilt after integration with main. It remains a staged review, not battlefield
or AAA visual acceptance.

## Earlier ten-clip checkpoint (historical)

The following records the initial retarget study. Its remaining-work statements
refer to that checkpoint; current status and instructions are above.

## Verified inputs and scale repair

- Engine: UE 5.8.3, CL 58210709.
- Official sample: `C:/Users/Jordan/Documents/Unreal Projects/GameAnimationSample/GameAnimationSample.uproject`.
- Development mirror: `C:/Users/Jordan/Documents/Codex/ArmyPrototype-GASP`.
- Sample audit: 3,890 asset packages; 2,008 animation sequences, 155 Pose Search
  databases, 33 schemas, 15 Choosers. Skeleton inspection returned no asset errors.
- Source: `SKM_UEFN_Mannequin` and its IK rig. Target bodies retain their existing
  geometry, materials and skin weights, but use **separate normalized skeletons**.

Both imported soldier roots have scale 100. UE 5.8's retarget processor strips
reference scale before rebuilding component-space transforms. Direct export on
the original hierarchies collapsed the torso to roughly 0.5 cm. The generator
therefore duplicates each body and skeleton below `/Game/Characters/GASP/Bodies`,
multiplies non-root reference translations by 100 and makes all bone scales one.
It verifies that every reference joint's global position is unchanged within
0.001 cm before saving. Production meshes, skeletons and their old clips stay intact.

Each normalized body has a chain-mapped, automatically aligned IK retargeter with
FBIK. Ten clips per body cover idle, walk start/loop/stop, a right refacing start,
run, sprint, crouched idle/walk and a right standing turn. Five samples per clip
check finite landmarks and reject collapsed torsos. These checks establish a
usable export, **not convincing contacts or an accepted retarget pose**.

The generated clips discard source notify events (including references back to
Epic's gameplay/audio/search objects); animation curves and sync markers are retained. New soldier
contacts/events must be authored against the army's event contract. No footstep
sound or source Blueprint gameplay is inferred from this comparison.

## Reproduce

Use the isolated worktree `codex/gasp-soldier-animation`. Hydrate its LFS assets.
Set `.local/paths.env` to the explicit UE 5.8 engine and a **separate**, marked
Windows build mirror; see `scripts/build.sh`. Build before running the tool.

```bash
scripts/build.sh
python3 tools/character/run_gasp_prototype.py \
  --engine '/mnt/c/Program Files/Epic Games/UE_5.8' \
  --sample '/mnt/c/Users/Jordan/Documents/Unreal Projects/GameAnimationSample/GameAnimationSample.uproject' \
  --mirror '/mnt/c/Users/Jordan/Documents/Codex/ArmyPrototype-GASP' \
  --stage --retarget --review
```

The runner passes the matching sample's plugins explicitly. It enables
`SkeletalMeshModelingTools` for skeleton normalization. Its narrowly scoped native
`GaspAuthoringLibrary` supplies the skeleton reassignment missing from Python.
Existing normalized rigs are preserved by the bootstrap script.

`--stage` uses Unreal's dependency-aware migration, with collision policy SKIP,
into the mirror only. The reviewed closure includes 1,188 packages (about 1.08 GB):
source mesh/notify references pull in the CMC animation library and Foley assets.
Those packages are **not copied into this source repository**. A fresh machine
needs its own installed matching sample and this staging step. Changes to that
closure or an already populated destination require checking the transfer report;
SKIP is not a source asset update mechanism.

`--retarget` rebuilds only generated target assets. After authoring, copy the
mirror's `Content/Characters/GASP/` back to the worktree's
`Unreal/Content/Characters/GASP/` **before running `build.sh` again**, because the
build sync copies repository assets into the mirror. Source IK and retargeter
assets reference the locally staged Epic mesh, so the authoring/review scene
requires staging even though the target clip notify dependencies are removed.

For capture, use `--review --capture`; add `--still` for one frame or `--clip 0`
through `--clip 9` for one motion. Each invocation creates a new timestamped
folder below the mirror's `Saved/Screenshots/`. Wait for `capture-complete.txt`
and the editor to exit before encoding. Frames are 30 fps, at original clip speed.
Idle samples last three seconds; other clips play in full. There are **cuts**
between clips. Root orientation is retained on transient clip copies; horizontal root travel is
centered for anatomical comparison;
this cannot certify planted feet against world movement.

```bash
ffmpeg -framerate 30 -i /absolute/capture-folder/gasp-%04d.png \
  -c:v libx264 -crf 20 -pix_fmt yuv420p -movflags +faststart /absolute/review.mp4
```

`--validate` reopens the saved results in a fresh editor process, checks both original
roots remain scale 100, all normalized bones have scale one, target clips use the
correct skeleton and no source notifies, and compressed poses have finite landmarks.
It runs automatically after retargeting. This catches unsaved in-memory corrections.

Reports/logs live in the mirror's `Saved/GaspPreparation/` and
`Saved/gasp-retarget-report.json`; source migration report is in the sample's
`Saved/army-gasp-transfer-report.json`. Local checkpoint copies are under
`.local/animation-context/` in this worktree.

## Remaining visual work

The first rendered study shows correct overall body proportions with readable
walk/crouch poses. Coat panels remain strongly driven by leg weights and fold
awkwardly near the knees in crouch. Hand/finger poses and shoulder clearance need
attention. This review disables the production post-process/cloth layer to expose
the underlying retarget. It does not establish foot planting, terrain alignment,
weapon contact, transition quality, replay fidelity or performance at army scale.
Physics assets, sockets and the production post-process must be checked separately
against unit-scale bones before enabling ragdoll/cloth or reusing weapon attachments;
the normalization pass certifies reference joint positions and rendered skin only.

Next is a continuous, trajectory-driven course with correct feet/root behavior,
then equipment-specific full-body carry and authored actions. The old Mixamo rifle
and MG handling cannot simply be attached to this unit-scale rig without conversion
and contact validation. Do not replace the battle renderer with this clip playlist.


## Verification checkpoint

Native review build succeeds on UE 5.8.3. The 13 focused Python checks and portable
animation-input test pass. A separate fresh-editor validation loads both normalized
bodies and all 20 compressed clips with zero reported errors/warnings; each target
standing turn retains about 90 degrees of root rotation. Retarget generation itself
reports 167 engine `ConditionalPostLoad Dependency` warnings while replacing
intermediate duplicated animation objects, but exits successfully. The fresh-load
check is therefore part of the workflow, not an assumption from the exporter exit.
The notify API does not mark these packages dirty, so the generator explicitly
forces their save; the fresh-load test caught and now guards that serialization gap.

The current review retains raw root rotation. The first 31.63-second capture hid
turns through Unreal's root-motion extraction and is superseded. The final review
is a visual diagnostic, not approval of the animation system.


Final local comparison: `.local/animation-context/review/gasp-soldiers-final.mp4`
(1600×900, H.264, 30 fps, 31.63 seconds), also copied to the Windows mirror's
`Saved/AnimationReview/`. The sampled exported turn frame confirms root rotation
is visible. This is an unarmed clip study with cuts, not continuous locomotion.

One required prototype digest check passes: unchanged sim source
`0874018c441ad8c7`, existing matching Linux binary, legacy Works seed 100, 360 s,
lean/no trace; digest `5032858285234573878` matches the current stored baseline,
4,604 shots. Raw battle data was removed after retaining its manifest and result.
No full simulation suite, commit or push was performed at this checkpoint.
