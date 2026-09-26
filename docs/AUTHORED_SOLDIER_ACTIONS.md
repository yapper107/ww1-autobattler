# Authored soldier actions — 25 September 2026

**Work in progress; not accepted.** Jordan directed us to make the animations
ourselves. The rifle performances are now editable Blender actions on the actual
soldier rig, exported into the existing deterministic Unreal presentation layer.
GASP still provides locomotion. We are not replacing the character or weapon art.
No new animation pack purchase is part of this work.

The independent critic's last complete four-body course grade is **4.0/10**.
The requested 8.5/10 has not been reached. Focused reviews below do not approve the complete system or raise that overall
score. Review is from dense chronological rendered frames, not continuous video
playback.

The latest focused reviews are female rifle reload **6.0/10** (pass 37), the
male shot/bolt/interrupted reload sequence **7.5 provisional** (pass 36), and female MG
reload/exit **4.0** (pass 12). Female held crouch stop is **5.5**, carry **5.5**,
walking **5.0**, and walk-stop **4.5**. These grades refer to the exact captures in
the critic reports, not subsequent unreviewed changes.

Male bolt placement and ammunition visibility improve, and the glove fin is repaired,
and the extraction sleeve fold is repaired. Female stock clearance and supporting wrist improve;
the feed still needs a clearly readable press. Pickup remains obscured. Complete
MG mechanics, locomotion weight acceptance and broad action coverage remain open.
Passing numerical checks do not waive these visible failures.

## Editable sources and reproduction

All paths below are repository-relative. Binary art belongs in Git LFS.

| Source | Contents |
|---|---|
| `art/characters/authored_rifle/Female/Rifle_Handling_Authored.blend` | Editable shot/bolt, reload and lowered-carry loop, weapon controls, keyed two-bone reload solve, planted ankles and body keys |
| `art/characters/authored_rifle/Male/Male_Rifle_Handling_Authored.blend` | Compatible male actions retaining his actual proportions and finger gestures |
| `art/characters/authored_mg/MachineGun_Handling_Authored.blend` | Body-specific MG firing and ammunition-box reload blocking; not finished feed mechanics |
| Each body's `manifest.json` and FBXs | Exact durations, 60 Hz bake, editable action names and WIP status |

Exact input blend snapshots and their SHA-256 hashes are retained under
`art/characters/authored_sources`; earlier repository inputs are preserved.
The initial rifle pose is the already approved grip C. Body responses, head/eye
attention, recoil, bolt manipulation, ammunition reach/transport/press, supporting
arm and sight reacquisition are keyed in `tools/character/author_rifle_actions.py`.
The rifle stays rigid. Hand contacts are solved after layering rather than
stretching the gun or the arm. `retarget_authored_rifle.py` transfers the performance
to the fitted male rig and preserves changes in finger pose relative to his grip.
His wider chest needs its own torso opening and arm fit: copying female FK rotations
left the source wrists 12–16 cm away from their controls. The male action now keys
both arms to the targets without lengthening bones. The operating elbow transports an outward/downward bend frame from a forward
reach to the live wrist. A fixed world-space pole can align with a close reach
and swap elbow sides; the transported frame removes that singularity.

The editable female scene also carries the rigid belt-pouch weight repair.
The female scene saves the reload action together with matching `Elbow_Reload`
and `Pouch_Reload` control actions. When manually changing the rig action, change
both control actions too. Keep `author_rifle_pouch.py` beside the action authoring
script, together with `author_rifle_charger.py`, the male pouch helper and
`repair_male_glove.py`, when copying scripts to a separate
Blender working folder.
Open, pinch, knob-grasp and thumb-press finger poses are fitted on the existing
three-digit glove rig, then blended through explicit action keys.

Run with Blender 5.2 in background mode, using these arguments after `--`:

1. Open `art/characters/authored_sources/female_grip_C_2026-09-25.blend`; run
   `tools/character/author_rifle_actions.py` with output
   `art/characters/authored_rifle/Female`.
2. Open the newly authored female blend; run `retarget_authored_rifle.py` with
   the male output directory, `art/characters/authored_sources/gunners_2026-09-25.blend`,
   and the female manifest as its three arguments. Keep `author_male_rifle_pouch.py`
   and `author_rifle_pouch.py`, plus `fit_authored_fingers.py`, beside the retargeter. The articulated variant fits
   the male glove's actual fingertip pinch and exports his opening pouch, mask
   specification and matching flap actions. The optional `--closed-pouch-source`
   female authoring mode remains available for historical diagnostics.
3. Open the same gunners blend; run `author_mg_actions.py` with output
   `art/characters/authored_mg`. It takes the actual body-specific standing MG grip
   at source frame 85. The shot and reload are newly keyed actions.
4. `scripts/build.sh` copies authoring exports to the marked Windows mirror.
   Run `Tools/character/import_authored_rifle.py` through UE's Python commandlet;
   despite the historical filename, it imports both authored weapon families.
   It preserves the existing source skeleton and normalizes duplicate runtime
   clips into `/Game/Characters/GASP/Legacy/{Female,Male}`.
   For articulated manifests it also runs `import_rifle_pouch.py` and
   `import_male_rifle_pouch.py` for the respective bodies.
   Import with `-nullrhi`, then validate the material in the rendered game review.
   The capture waits for asset/shader compilation and rejects material-fallback
   errors in its own `render.log`; NullRHI alone cannot certify a material.
   A cold rendering commandlet was aborted after compiling unrelated engine
   debug materials; it is not passing validation evidence.
5. Run `Tools/character/repair_handling_materials.py` after the native authoring
   library has been built when regenerating handling materials. It asserts its
   graph connections, clears the two generated feed materials' cached opaque
   flags and restores separate brass/cyan/steel sections. Validate with an actual
   rendered capture; NullRHI cannot detect every platform shader failure.
6. Copy newly generated mirror assets back into `Unreal/Content/Characters/`
   before another build, or the source checkout will replace them in the mirror.

The male FBX retains the `Male_Azure_Rig` root contract. The female uses
`SoldierRig`. Do not normalize already normalized exports twice.

## Runtime contracts

Rifle action time is normalized to the recorded equipped weapon's cycle/reload
duration; the review's four-second reload is a diagnostic performance, not a change
to simulation timing. Body movement and firearm actions remain separate layers.
Interrupted rifle shots now remain in the pose mixture as reload fades in; the
visible bolt uses the same weights. This is sampled from recorded event time, with
no mutable playback history. Standing actions are the starting point; moving/crouched variants need their own
visual acceptance. Simulation shot positions, cadence and ammunition rules are not
changed by these animation edits.

The gun socket and both hand targets come from the authored clip. A final contact
solve accommodates differences between the two bodies. Authored bolt wrist rotation
must not receive a second procedural bolt rotation. Reload contacts use the measured
receiver on the imported static mesh, not a free-floating target above the stock.
The eight-round strip is vertical and descends into the receiver.

The MG reload uses `Weapon_Free` as the ammunition-box carrier while alive; death
still uses the existing drop contract. The MG firing source exists as editable
blocking, but is **not enabled as the runtime firing action** yet. Its interrupted
burst behavior needs authoring and review before replacing current recoil.
The MG feed cover and belt are not articulated in this source mesh; the reload
blocking is not a claim of mechanically complete operation.

The final two-arm fit also respects rigid bolt/receiver contacts. An undocked MG
box follows the final reachable palm during its grasp phase, then returns to the
authored receiver transform. Previously, the hand was clamped to arm reach while
the box continued to the unreachable authored position (up to 17 cm on the male).
The validator now requires nonzero contact samples for both bodies and checks the
box contact too; its previous wrist-only result did not prove prop contact.

## Coverage and open work

| Family / transition | Evidence and remaining work |
|---|---|
| Rifle shot → bolt → aim | Female pass 10: 5.5; male pass 13: 5.5. Mechanism effort and regrip remain weak. |
| Rifle reload → aim | Female pass 31: 6.0; male sequence fresh pass 30: 5.5. Pouch opening and stock clearance improve, but pickup/feeding and the male bolt grip remain rejected. Later contact edits require new review. |
| Crouch start / side move / stop | Held female stop pass 11: 5.5. Timed stopping reduces early planting; toe support and load acceptance remain unaccepted. |
| Walk / turns / run / sprint / braking | Pass 9 female carry 5.5, walk 5.0, stop 4.5. Other gait/body combinations still need review. Carry follows chest; intent contexts remain separate. |
| Moving fire / crouched handling | Layers function, but the standing performance has not been certified for these adaptations. |
| MG firing / reload | New editable blocking; burst integration and complete feed mechanics remain open. |
| Vault / landing | Improved retained carry and free-hand plant. Landing is continuous in the inspected sequence; speed/obstacle variants and landing-to-travel remain open. |
| Winded / death / drop | Existing runtime behavior; no new quality approval. |
| Prone / other gameplay actions | No claim of complete authored coverage. |

`audit_gasp_library.py` inventories all 732 normalized locomotion/action source
clips for numerical properties. Every entry remains `UNREVIEWED` visually; a finite
pose/root check does not certify performance or every possible transition.

## Diagnostic evidence

Reviews: [pass 1](reviews/animation-critic-pass1.md),
[pass 2](reviews/animation-critic-pass2-crouch.md),
[pass 3](reviews/animation-critic-pass3-authored-rifle.md),
[pass 4](reviews/animation-critic-pass4-crouch-reload.md),
[pass 5](reviews/animation-critic-pass5-male-rifle.md),
[pass 6](reviews/animation-critic-pass6-combat-crouch.md),
[pass 7](reviews/animation-critic-pass7-rifle.md),
[pass 8](reviews/animation-critic-pass8-contact-and-stop.md),
[pass 9](reviews/animation-critic-pass9-carry-crouch-reload.md),
[pass 10](reviews/animation-critic-pass10-rifle-sequence.md),
[pass 11](reviews/animation-critic-pass11-authored-continuity.md),
[pass 12](reviews/animation-critic-pass12-rifle-pickup-and-mg-exit.md),
[pass 12b](reviews/animation-critic-pass12b-male-rifle.md),
[pass 13](reviews/animation-critic-pass13-male-clearance.md),
[pass 14](reviews/animation-critic-pass14-female-hand-articulation.md),
[pass 15](reviews/animation-critic-pass15-male.md),
[pass 16](reviews/animation-critic-pass16-seated-ammunition.md),
[pass 17](reviews/animation-critic-pass17-ammunition-verification.md).

The native orientation layer amplified an approximately 2 cm raw foot change into
a much larger visible change on the crouch start. Layer isolation is available with
`run_gasp_prototype.py --warp-mask`: orientation=1, stride=2, foot placement=4;
default 7. This is diagnostic, not an alternative accepted configuration.
The independent virtual foot-root branch now prevents orientation warping from
rotating the weighted skeleton root a second time. Root-delta counter compensation
is disabled because motion-matching switches can reverse the delta without an
authored body turn. The remaining transition and support quality still need work.

`run_gasp_prototype.py --combat-crouch --contexts` generates duplicates under
`/Game/Characters/GASP/CombatCrouch`. A smooth minimum raises the female resting
pelvis toward 60 cm and the male toward 64.8 cm. A two-bone leg solve retains the
source ankle positions and rotations without stretching; generation fails if it
cannot retain a contact within 1 mm. It does not edit the original retargeted clips.

The planner has separate idle, moving, starting and stopping contexts. A selected
stop may finish while the predicted trajectory still asks for a stop and the stance
is unchanged. Starts/stops index their full duration. Entry windows are measured from each
clip's actual root travel; approach and idle tails block new entry while allowing
the current footfall to continue. A fixed first 1.2-second stop window was wrong:
the inspected crouch stop brakes around 2.2 seconds, outside that window. The newer
measured windows remove that search error; timed playback additionally aligns the
selected plant with the recorded stop. The earlier trimmed sample range invalidated continuing poses at the cut
and forced left/right stop reselection during planting. These are presentation
decisions; the simulation's movement and stance rules remain unchanged.

The combat validator checks pose reconstruction, fixed-time seeking, contact
targets, muzzle queries and finite cloth. Its `passed=1` is a technical result;
it does not gate visual continuity or the critic's 8.5 bar. Crouch raw/final foot and
hip deltas are reported separately for diagnosis.

Windows capture root: `C:/Users/Jordan/Documents/Codex/ArmyPrototype-GASP/Saved/Screenshots`.
Pass-4 evidence: `GaspCombat-20260925-205105` (crouch, 21–25.5 s) and
`GaspCombat-20260925-205402` (female reload, 30–34.1 s).
The incomplete `GaspCombat-20260925-202924` ended after graphics-device loss; it must
not be reported as a completed review. Short subsequent captures succeeded.

The portable MP4 player is generated by `tools/character/build_action_review.py`.
It requires a completion marker and every expected frame. Its input manifest lists
capture folders and course start/end times. The output includes local H.264 MP4s,
posters, a manifest and `authored-actions.html` with speed and frame controls.
Current Windows review: `C:/Users/Jordan/Documents/Codex/AnimationReviews/authored-actions.html`.

Verification so far: the full Linux simulation suite passed on unchanged simulation
source `090b6da63e131f07`; Python ran 230 tests (8 skipped), all passing. Subsequent
native presentation edits require their corresponding Unreal builds and captures.
No packaged-build or fresh 64-body gameplay result is claimed for these repairs.

Near-zero travel now fades orientation/stride warping between 5 and 35 cm/s and
retains the last meaningful travel direction. This avoids an undefined standstill
heading steering planted feet. It does not certify the stop performance. The review
floor has fixed metre marks, and `--hold-crouch` keeps the diagnostic stop crouched
for inspection before any rise. These review-only changes do not affect gameplay.

Builds may use `ARMY_BUILD_JOBS=1 scripts/build.sh` on a memory-constrained host.
An earlier parallel compile exhausted Windows committed memory; the one-job retry
passed. Focused handling tests include interrupted-action weight continuity and
seek determinism. The full simulation/Python results above remain separate from
visual acceptance and are not rerun for each action-key revision.

The stop correction uses UE5.8's experimental native Pose Search timed events:
`Army.Animation.Stop` is placed at the measured end of root travel. The predicted
stop time from the recorded trajectory selects and time-scales the matching
performance. Capture `GaspCombat-20260925-224507` (21–26 seconds, held crouch) demonstrates
reduced early planting against the marked floor; load acceptance remains unaccepted. The trajectory has 0.1-second
future samples; the simulation remains untouched. Event participation and playback
rate are recorded in the query log.

The review accepts `--reload-start` and `--reload-end` to exercise interrupted
handling at different bolt phases. For example, 29.025–33.025 starts halfway through
the third rifle cycle's rearward stroke. The default 30–34 course returns to aim
before reload and does not prove that interruption case.

The latest source correction transports the elbow pole with the shoulder-to-wrist
axis. A fixed world-space pole crossed that axis during pouch extraction and
produced the fast elbow excursion observed in pass 10. The source manifests report
adjacent elbow displacement at 60 Hz as a diagnostic, not a quality grade. Rendered
review remains required after baking and the runtime contact solve.

Native timed-stop integration detail: UE5.8's `FPoseSearchBlueprintResult` drops
`EventPoseIdx` when the next continuing search is reconstructed. Entering the stop
therefore forces one event search; its measured source endpoint then preserves the
playback rate against remaining trajectory time. The first integration capture
showed early planting and did not establish a working timed stop. The query log
now records requested stop time, source stop time and the event-search count.


The source-only elbow correction did not remove the rendered elbow sweep in
`GaspCombat-20260925-224644` (female, 28.25–33.5 s) and
`GaspCombat-20260925-224811` (male, 26–33.5 s). Both interrupt a bolt cycle with a
29.025–33.025 s reload. The subsequent runtime contact solve now transports the
bend plane with the corrected wrist, too. The new palm route explicitly connects
bolt, pouch, extraction, receiver, withdrawal and bolt regrasp; it does not blend
through a trigger reference during transport. `gasp-arm-continuity.csv` measures
rendered elbow displacement in component space at 30 Hz. Neither source nor
runtime displacement is a substitute for viewing the performance.

Latest graded MG evidence is `GaspCombat-20260925-231250` (female, 30–35.5 s).
The 34-second exit jump is repaired by cached movement-fire intent/carry weights,
with the same fixed-step history used when seeking. It still lacks complete feed
mechanics and a distinct empty-box/replacement operation.

The source-only elbow repair did not address the largest runtime pickup excursion.
The authored spine previously inherited an unarmed pelvis tilt while its gun used
a different calibrated hip frame, moving the shoulder about 14 cm. Both now use
the same frame, blended by action weight. That improves the female reload in
`GaspCombat-20260925-230847`, but regressed male clearance in `231536`. Male-specific
source fitting improves it in `233433` (pass 13); two brief collapses remain in
that capture. `234531` is the later male arc/finger capture: pass 15 confirms those two
repairs, but still finds arm disappearance at 29.23–29.30 seconds during the
interrupted action mixture. The exact action boundary itself remains continuous.

`repair_female_pouch_weights.py` makes the four belt pouches' 329 vertices follow
Hips rigidly. Chest straps and coat keep their existing weights. The source bodies
remain intact; only the normalized female runtime duplicate is changed. Capture
`232832` verifies stable pouch shape; cloth remains bound and finite (1,628 vertices
across the four review bodies). This does not add pouch-flap articulation.

`repair_gunner_materials.py` restores the refined MG's six material sections,
which had all been assigned to one wood slot. `repair_handling_materials.py`
restores brass cases, blue tips and charcoal bolt material from separate FBX
sections. Both use disposable imports to recover section mapping and preserve
existing runtime geometry. The weapon importers call the corresponding repair after reimport.
The handling material also masks cartridges as they pass into the receiver. Once
aligned, the ammunition stays in the feed rather than following the withdrawing
hand back out. This is presentation only; simulation ammunition remains authoritative.

Close review uses `--camera-width 160 --focus-height 118`, alongside the existing
camera yaw/height and body selectors. `233902` is the female finger/palette capture
before the subsequent seated-round repair. The default full-body framing is still
needed to assess balance and torso continuity.


Pass 16 (`235127`, female close view) verifies progressive ammunition seating and
empty-hand withdrawal in place of the large returning strip, but catches residual
cartridge fragments below the stock at 31.817 seconds. A subsequent correction
removes the prop draw once the feed plane passes every vertex; it needs its own
rendered check. The normal frame at which ammunition becomes fully seated is
computed from the actual mesh bound, not a review-time special case.

### Resume priorities

1. Preserve the verified seated-ammunition correction while improving the hand performance.
2. Author genuine access to the pouch opening; the current flap remains shut.
3. Keep the male arm outside his vest through the complete interrupted blend,
   especially 29.23–29.30 seconds; held-key clearance alone is insufficient.
4. Add complete MG exchange/feed mechanics and integrate its authored burst.
5. Review and improve remaining locomotion, crouched/moving handling, traversal,
   landing, winded and death variants on both bodies and in actual gameplay.

The last full-course 4.0 and focused 5.5 scores remain below the requested 8.5.

Pass 17 (`235955`, female close view) confirms the residual below-stock fragment is
gone through every adjacent frame 97–112, with progressive seating and no large
loaded-strip return or premature whole-stack pop in that interval. The female
reload remains **5.5/10**; thumb pressure and closed-pouch access are still rejected.
The portable [review player](../art/reviews/authored-actions/authored-actions.html)
contains five completed captures with their individual historical limits. The
latest UE5.8.3 editor build, 7 documentation tests and focused weapon-handling tests
pass; the final four-body diagnostic reports contact/seek reconstruction and finite
cloth passing. These checks do not constitute the requested visual acceptance.

### 26 September continuation — male anticipation and female pouch

[Pass 18](reviews/animation-critic-pass18-male-anticipation.md), capture
`GaspCombat-20260926-001808`, confirms the male interruption clearance repair at
29.20–29.33 s, with earlier feed/withdrawal repairs preserved. The male opens his
broad torso before closing his hand on the bolt; the old action delayed that
opening until after contact. A component-space elbow-blend experiment did not
repair the cause and was reverted. Shot/bolt and reload remain **5.5/10**. The
opposite close view `002109` shows no new jump but partly hides the operating arm.
The review is adjacent-frame inspection, not continuous playback.

The new female pouch is a separate low-poly bag with an interior and a hinged
flap, authored by `author_rifle_pouch.py`. The editable duplicate removes only the
old 82-vertex front-right pouch. Runtime keeps the skeletal mesh and its cloth
binding: a scoped, bind-space webbing mask is intended to hide that original pouch;
the two static components follow its exact bind-to-current pelvis transform. The
first rendered version failed to hide the old pouch (diagnosis below). This is currently female-rifle equipment
only. The common male authoring input still reproduces the earlier closed-pouch
route (source elbow diagnostic 2.34055 cm per 60 Hz sample).

The female keys reach for the flap, lift it, enter the opening, pinch, and carry
ammunition toward the receiver. During access, the runtime hand follows the pouch's
pelvis frame rather than the gun frame; receiver contact resumes before feeding.
A first straight-up extraction folded the wrist close to the shoulder, so the
source now draws toward the gun with an explicit outward elbow. A first pouch
render exposed reversed bag faces; those faces and the planar UVs were repaired.
These implementation details do **not** establish an accepted visual result.

[Pass 19](reviews/animation-critic-pass19-pouch.md), capture `003711`, lowers the
female reload to **5.0/10**. Frames 58–60 show sleeve/rim conflict; 54–61 have a
fast wrist reversal; the forearm hides extraction at 68–74. The prior ammunition
seating and interruption repairs remain visible. This is adjacent-frame review,
not continuous playback.

The subsequent material diagnostic found that the cloned opaque webbing retained
`bCanMaskedBeAssumedOpaque`. Despite `BlendMode=BLEND_Masked` and a connected mask,
the renderer's `GetBlendMode()` returned opaque, including with a constant-zero
mask. `FinalizeArticulatedPouchMaterial` clears this flag only on the generated
pouch material; the importer and runtime verify the effective masked mode. The
hand now approaches the raised flap more horizontally. Pass 20 confirms the
duplicate surface and blue intrusion are gone, but still rejects the contorted
opening route (5.0/10). The later capture `014313`, with static meshes hidden,
confirms that the old front-right pouch alone is removed by the material.

The first masked render then exposed the previously dormant shader error:
pre-skinned position cannot feed a pixel opacity expression directly on SM5.
The importer now uses a vertex interpolator, verifies the 82-of-329 pouch vertex
selection, and checks material compilation errors when graphics is enabled.
The diagnostic captures with fallback gray webbing are failed probes, not review
versions.

[Pass 21](reviews/animation-critic-pass21-pouch-reach.md), captures `014800`,
`015241` and `015453`, restores the female reload to **5.5/10**. Keeping the wrist
away from the shoulder and removing the transport detour repairs the severe fold.
A new approach conflict remains at 29.883–29.917 s, plus weak pressure and unclear
clip completion. These captures are 1066×600; earlier comparison captures were
1600×900. The critic explicitly limits its conclusions to adjacent-frame evidence.

The next ungraded source raises the hand before approaching the flap; a short
front capture `015943` checks this approach only. A further iteration fits the
loaded strip to the actual thumb/index tips and retains a separate empty charger
rail at the receiver. The closing bolt displaces that rail, using the interaction
described in the [FN Mauser operator's manual, the “Loading the magazine” section](https://www.indaginibalistiche.it/utlities/manuali/fn_mauser_98_EN.pdf).
This is an animation reference for the fictional weapon, not a claim that its
eight-round arcane ammunition matches that rifle. This iteration requires new
rendered review; it does not inherit pass 21's score.


26 September continuation, pass 22: the new empty charger remains in the guide and is ejected by the bolt, but the independent critic lowers the female reload to **5.0/10**. The hand doubles back against the forearm during extraction, and cartridge fragments reappear below the stock. [Pass 22 evidence](reviews/animation-critic-pass22-charger-and-thumb.md) supersedes any assumption that the new candidate preserves the pass 21 contacts. The review player still shows the last graded 5.5 candidate; current source is under further repair.

The ammunition leak has a concrete material cause: a diagnostic in `FinalizeHandlingFeedMaterial` reported `assumed_opaque=1 effective_blend=0` for both `M_handlingbrass` and `M_handlingcyan`. The mask graph was therefore not sufficient. `repair_handling_materials.py` now invalidates that cached opaque optimization through a helper scoped to those two generated materials. The Unreal build passed in 22.30 seconds and the repair commandlet passed with zero errors; rendered verification remains required. The native pouch helper retains its separate exact-path guard.

A straight-wrist reach-cone experiment was rejected before visual review: with the hand path too close to the shoulder, its elbow moved 30.24 cm in a 60 Hz source sample. The next candidate authors a continuous **fingertip** transport path, keeps minimum wrist clearance, and derives the elbow direction from that same glove instead of an independent downward pole. Its maximum source elbow step is 6.98 cm; this diagnostic alone is not a quality pass. The editable source output is `AuthoredRiflePinchRoute`, with corresponding `.blend`, FBX and authoring script retained in the repository.


Follow-up rendered verification found a second cause hidden by the old opaque flag: the `ComponentMask` node had no connected input, so enabling the mask fell back to the default material. `repair_handling_materials.py` now uses local vertex position through a vertex interpolator and an asserted dot-product connection, with compilation errors checked. `GaspCombat-20260926-023218` is rejected (the capture runner removed its completion flag). `023546`, `023831` and `024249` completed without material fallbacks and show brass/blue cartridges entering the receiver without the earlier underneath-stock leak in inspected samples. They remain unaccepted pose experiments, not published improvements.

The current low-transfer candidate replaces the old over-high palm route with a lateral fingertip grip, keeps its orientation through extraction, and turns toward the receiver farther from the shoulder. It removes a high-speed bolt-release detour. A baked elbow control transports its previous bend through pole-axis ambiguity and bounds roll change to four degrees per 60 Hz key; it introduces no runtime history and does not change seek determinism. The unused minimum-reach cone was removed because its closest-orientation solution itself became singular. `AuthoredRifleLowTransfer` has a maximum source elbow step of 5.69 cm. Actual normal-speed renders and an independent review are still required.

Timing limitation found during this continuation: the reviewed rifle load has been forced to four seconds to inspect contacts, while `Sim/Weapons.cpp` specifies **2.5 seconds at dexterity 100**. The simulation is unchanged. Four-second contact approval cannot certify gameplay timing; a 2.5-second native capture is required separately before promotion.


Pass 23 rejects the low-transfer pose at **4.5/10**: [independent report](reviews/animation-critic-pass23-lateral-transfer.md). It credits repaired brass/blue feeding and empty-rail completion but finds the operating arm collapsing into the torso through transfer. Do not promote this candidate. `024458` and `024618` are its front/side evidence.

The subsequent source revision replaces the female reload's rig-specific pole correction with explicit two-bone joint placement, keyed onto the editable action (the original forearm IK influence is keyed off only in that action). It uses a stable upper-arm orientation reference and retains the original constraints for shot/bolt and carry. A hard elbow-arc constraint experiment (`AuthoredRifleClearElbow`) was discarded after a 33.39 cm source step; no acceptance is attached to it. The current candidate instead brings the rifle 12 cm toward the operating side and 6 cm forward in the horizontal body frame during the load, shortens the extraction excursion and keeps a forward/outside/downward elbow preference. `AuthoredRifleReceiverReach` has a 4.54 cm maximum source elbow step at 60 Hz. Native visual verification is underway. No simulation timing or gameplay state changed.


Pass 24 scores the receiver-shift candidate **5.0/10**, including a native 2.5-second reload: [report](reviews/animation-critic-pass24-arm-and-clearance.md). The arm no longer disappears, but its raised loop during pouch access and forearm/stock/pouch intersection during recovery remain blockers. Native captures: `025741` front, `025917` side, and `030029` at 2.5 seconds. The critic reviewed all adjacent frames, not continuous playback.

Runtime diagnosis: pouch contact remaps the authored hand through the live pelvis, while the chest and rifle are calibrated to weapon facing. Reusing the old arm bend after those different transformations does not preserve the authored anatomical relationship. `SoldierAnimInstance.cpp` now derives the female articulated-pouch reload elbow preference from the live shoulder line, outward/downward during retrieval and on the gun's operating side during closing. This is stateless IK after the authored action; it preserves event timing, source clips and replay seeking. The `030440` side capture removes the raised loop in the inspected pouch frames, but retains a recovery intersection; it is not promoted.

The next candidate, `AuthoredRifleClearCarrier`, reduces the temporary gun shift to 4 cm toward the operating side (6 cm forward retained) and combines it with the separate gun-space closing preference. Native compilation passed in 7.42 seconds. Its source maximum elbow step is 5.21 cm at 60 Hz; visual review and native-speed clearance verification remain pending.


The next diagnostic found a geometry/contact mismatch that the old point-to-point
check could not catch. The imported `SM_Bolt` lateral handle has UE coordinates
X = 0–6.7 cm, Y = +2.4–+3.6 cm, Z = −0.9–+0.5 cm. The profile used
Y = −3 cm: its validated contact was six centimetres away from the visible
handle. The new contact uses Y = +3 cm and is checked against imported mesh
vertices during import. Earlier near-zero bolt-contact errors established
consistency with the profile, not contact with the visible handle.

The operating arm was also being driven across the stock. The next candidate
reflects the separate handle component onto the operating side, with matching
negative-X pivot/knob, opening rotation and Blender hand keys for **both** rifle
bodies. Source manifests now record `bolt_side` and `bolt_knob_ue_cm`; the importer
rejects a mismatched body pair. The renderer reflection is applied once in the
contact check. `AuthoredRifleOperatingSide` and `AuthoredMaleOperatingSide` are
unreviewed replacements, including shot/bolt as well as reload; they do not
inherit earlier grades. The core rifle art and simulation timings are unchanged.

UE 5.8 compilation passed in 20.25 seconds, and the matching import passed with
zero errors and the ten known animation-only FBX bind-pose warnings. Rendered
front/side and actual-duration verification follow before any score change.


[Pass 25](reviews/animation-critic-pass25-measured-bolt-contact.md) raises the
female reload to **5.5/10**. The measured-handle candidate removes the high pouch
elbow loop and recovery sleeve/pouch intersection in front, side and 2.5-second
renders (`032752`, `032628`, `032854`). It remains rejected for a sharp transfer
reversal, a high cuff with a folded feeding glove, and crowded pouch contact.
The critic inspected every adjacent frame, without continuous playback.

The transfer reversal coincides with a source singularity: at reload phase
0.4208, the preferred elbow direction becomes almost parallel to the shoulder–
wrist axis, producing a 26.29 cm source elbow step. The next authoring revision
transports the approved bend plane and chooses an outward/forward preference
that stays off that axis. A further rejected preference (`StableBend`) still had
a 23.46 cm step; `StableBend2` reduces it to 3.73 cm. `AuthoredRifleForwardPress`
also aligns the palm toward the receiver along the reaching forearm, rather than
sideways to it, and has a maximum source elbow step of 3.44 cm. Its native visual
review is pending; those measurements alone are not quality acceptance.

New capture runs retain their own technical contact and arm-geometry reports
inside each capture directory, so the next run cannot overwrite their evidence.
The runner rejects fallback materials and failed native validation.


[Male pass 26](reviews/animation-critic-pass26-male-contact.md), captures `033026`
and `033233`, leaves shot/bolt at **5.5**, and lowers reload to **5.0**. Both
captures contain 225 frames (start 26, end 33.5), not 226. Glove geometry shows
through the cuff during feeding, and the male still retrieves through a closed
pouch. The changed mechanism side does not introduce another torso collapse.

The forward-press female captures (`033420`, `033523` and the gameplay capture recorded in `.local/animation-context/capture-forward-press-gameplay.log`) are ungraded
diagnostics. Correcting the hand direction alone leaves a sharply angled wrist
because the live retrieval elbow preference persists into pressing. The next
revision derives the pressing elbow from the glove's axis on both rifle bodies.
An unconstrained trial (`034028`) raised the elbow above the shoulder and is not
promoted. The current `AuthoredRiflePressClearance` candidate selects the nearest
feasible bend with the elbow below the shoulder by 22% of upper-arm length, then
blends through the pressure interval. This constraint changes only the authored
and runtime reload arm fit; no bone is stretched and no simulation clock changes.
It requires new complete views and gameplay-duration review.


The male editable-file audit found a separate transform bug: the mesh world matrix
was read after moving its parent rig and then transformed again for saving. The
saved body therefore had a second bind-axis rotation and deformed across a
roughly three-metre volume, although animation-only FBX did not export that mesh.
`retarget_authored_rifle.py` now captures the rig and mesh world matrices after
dependency evaluation and before resetting the origin. The repaired saved body
evaluates from Z = 0.001 to 1.741 m in the ready pose; the source mesh is upright
again. This repair changes the editable scene presentation, not the game mesh or
its animation timing. `AuthoredMalePortablePress` supplies the corrected blend.


[Pass 27](reviews/animation-critic-pass27-supported-press.md) remained at 5.5:
the old transfer jump was repaired, but press entry acquired a new elbow jump at
frames 80–81. [Pass 28](reviews/animation-critic-pass28-press-arc.md) reaches
**6.0/10** after the press elbow follows an earlier angular blend on its actual
reach circle. The critic inspected every frame of front `035245`, side `035139`,
and actual-duration `035347`: the exact defect and its gameplay counterpart are
repaired. Pressure readability, high forearm posture and crowded pouch access
remain rejected. This focused score does not approve the full course (still 4.0).

The current portable player includes all three pass 28 views. Its encoder now
uses the same end-exclusive sample count as capture; 3.75 seconds at 30 fps has
113 samples, not Python's banker's-rounded 112. Missing frames still fail export.

The broader live elbow correction exposed a male-only press discontinuity near
phase 0.47. It remains under repair, with exact body-specific continuity reports
retained beside captures. The female's next ungraded `OpenReceiver` experiment
cants the gun toward the operating hand and raises it slightly to open the
pressure and pouch silhouettes. Neither candidate inherits a grade.


## 26 September continuation — male pouch and stable reach frame (ungraded)

[Pass 29](reviews/animation-critic-pass29-open-receiver.md) reviews the female
`OpenReceiver` side experiment at a provisional 6.0, without promoting its whole
action. The new cant exposes more mechanism but does not expose thumb pressure;
the support wrist bends more and the butt moves lower across the belt. The
subsequent `BeltClearance` candidate raises the stock, reduces roll to 5 degrees
and muzzle pitch to -2, with a small keyed shoulder/support response during
feeding. Its generated source reload elbow step is 3.50 cm at 60 Hz.

The earlier male press-release discontinuity measured 14.42 cm per 30 Hz frame.
A single outside-half-circle elbow parameter and a regularized pressing direction
reduce that transition to 3.91 cm in the `042122`/`042230` diagnostic captures.
The press direction stays in weapon space as the glove releases toward the bolt;
the elbow no longer follows the new hand rotation through an ambiguous direction.
Those measurements do not establish a visual grade.

The new male source uses the actual articulated female performance. Its mapped
pouch is fitted to the measured male dimensions, and the wrist is solved from
the glove's own thumb/index contact rather than a scaled female wrist offset.
A separate source singularity at the close extraction reach is removed by
transporting a bend frame from a forward reach. `AuthoredMalePouchPinch` has
source maximum elbow steps 2.93 cm (shot/bolt) and 5.66 cm (reload) at 60 Hz;
its faster extraction still requires rendered inspection.

The male editable scene replaces exactly three disconnected pouch islands
(41 vertices) and packs its atlas. In Unreal the new vertex-stage material mask
selects the same 41 unique positions and explicitly protects nine nearby strap
vertices. The initial all-material check also saw 22 coat vertices; selection
is now validated against the atlas slot to which the mask actually applies.
The coat material and skeletal mesh are not rebuilt. The male atlas retains its
`BaseColorTexture` parameter for Ember. The new pouch and flap follow the live
pelvis; the empty charger and thumb-contact path now apply to both rifle bodies.

At the pass 30/31 checkpoint the source and portable assets used `AuthoredRifleBeltClearance` and
`AuthoredMalePouchPinch`. Front and operating-side captures at the actual
2.5-second reload duration are in progress. They do not inherit prior scores.


[Fresh male pass 30](reviews/animation-critic-pass30-fresh-male-pouch.md) grades
`043444`/`043558` at 5.5. The pouch does open; the critic identifies the conspicuous
raised fingers above the bolt, obscured feeding and weakly readable bolt-driven
empty-rail ejection. [Female pass 31](reviews/animation-critic-pass31-belt-clearance.md)
keeps `043710`/`043813` at 6.0: stock clearance and the support wrist improve, while
pickup and thumb pressure remain hidden. Both reviews cover actual 2.5-second
reloads, with every adjacent frame inspected; neither is continuous playback.

Subsequent source work replaces male finger-quaternion deltas with anatomical
palm-frame fingertip fitting. Phalanx lengths stay fixed and local-space blending
preserves the original firing grip outside manipulation. The bolt now contacts
the actual thumb/index pad midpoint on both rifle bodies, rather than a palm
proxy several centimetres away; the native validator checks that same physical
grip against the measured mesh knob. The source operating wrist follows the same
contact, and the shot's approach starts earlier without changing cycle length.
The next pressure orientation approaches more from the operating side to expose
the feed. `AuthoredRifleSidePress` and `AuthoredMaleSidePress` are the current
ungraded candidate (not the videos in the player). New rendered verification is
pending; no studio-ready or full-course score is inferred from source fits.


### Passes 32–33 and glove repair — 26 September 2026

[Male pass 32](reviews/animation-critic-pass32-male-grasp.md) grades
`044912`/`045015` at **6.0**. The compact bolt grip is visibly improved over pass
30, but moving fingers pull sharp triangular fins out of the glove web.
[Female pass 33](reviews/animation-critic-pass33-side-press.md) keeps
`045117`/`045449` at **6.0**, with the additional opposite/high view `045631`.
The projecting digit's identity and the visible pressure surface need diagnosis;
the reviewer does not claim that projected overlap establishes a measured 3D gap.
Every adjacent frame in those views was inspected, not continuous playback.

A source-mesh audit found male palm-web vertices dominated by the thumb's second
joint, including an edge stretching from 2.01 cm to 10.78 cm during opening.
The new `repair_male_glove.py` paints three measured web vertices and blends the
cuff's wrist/forearm weights. It changes 54 source vertices, no positions, topology
or bones. `hand-weights.json` records bind positions and weights; the Unreal
importer matches mesh-description vertex IDs by position, checks the region and
normalization, then verifies weights after committing. This also repairs the
shared male MG body. That body still requires its own rendered review.

At the glove-weight checkpoint the male editable source was `AuthoredMaleGloveWeights`; female remained
`AuthoredRifleSidePress`. This weight repair has no inherited visual score.
The optional `--contact-markers` review overlay labels projected thumb, index and
middle bones, including occluded points, to diagnose digit identity. It is an
explicit diagnostic overlay, not a replacement for the unmarked rendered review.


[Male pass 34](reviews/animation-critic-pass34-male-glove-weights.md) grades
`050529`/`050629` at **6.5**. Both 180-frame views confirm that the black web fin
is removed and cuffs improve. A forearm/cuff opening persists at frame 121, and
feed force/contact plus pouch staging remain unresolved. Native import changed
54 of 2,612 vertices. The four-body numerical check still reports 1,628 finite
cloth vertices, seek equality, and passing contact checks. This is not an 8.5.

The next source candidate (`AuthoredRifleThumbPress`, `AuthoredMaleThumbPress`)
folds the index/middle fingers during seating while preserving the extended
pressing thumb. It retains the male web/cuff weight repair. These are unreviewed
source/FBX/Unreal assets; the eight-clip player intentionally labels the last
graded captures (female33, male34), not an inherited grade for later assets.

Latest focused verification: Unreal 5.8 build succeeded; full Python suite
230 tests, eight skips; presentation weapon-handling checks pass including
2,000 replay seeks. The earlier full Linux suite on unchanged simulation code
remains the simulation evidence; it was not rerun for glove weights.


The male source wrist audit measured approximately 170 degrees of axial twist
at extraction (source phase 0.40). `AuthoredMaleForearmRoll` transfers this twist
into forearm pronation while retaining joint positions, bone lengths and wrist
swing; the source residual axial twist is near zero in the fully operating pose.
New native renders are required to judge the sleeve result. The loaded magazine
surface is now checked against the actual imported cartridge bounds as well as
the profile target; the diagnostic overlay distinguishes hidden surface contact
from the visible index-finger silhouette. These diagnostics alone carry no grade.


### Current reviewed checkpoint — passes 36–37

[Male pass 36](reviews/animation-critic-pass36-male-pronation.md) grades
`051706` front / `051554` side **7.5/10 provisional**. The extraction sleeve
collapse at frame 121 is repaired, and no new gross pronation jump is observed.
Small camera-hidden contact details remain unverified rather than proven wrong.
[Female pass 37](reviews/animation-critic-pass37-female-thumb-views.md) grades
`051928` / `052026`, plus high `051108`, **6.0/10**. The projecting digit was the
index; the earlier late-thumb inference is withdrawn. Pressure/release weight
and the elevated operating-arm silhouette remain performance concerns.

The source, FBX and imported Unreal rifle clips now match these captures:
`AuthoredRifleThumbPress` and `AuthoredMaleForearmRoll`. The eight-clip portable
player includes these graded views. Both critics inspected every adjacent frame;
neither certifies continuous playback or AAA acceptance. Overall remains 4.0.
The next major unfinished action is the MG's complete ammunition exchange and
feed operation, followed by locomotion weight/transition and wider action review.

Verification of this checkpoint: native UE5.8 build and D3D11 captures pass;
all four bodies retain 1,628 finite cloth vertices, deterministic seeks, actual
bolt-pad contact, and 0.15 cm maximum thumb-to-cartridge surface spacing. Full
Python230 tests pass with eight skips, documentation7 pass, and focused weapon
handling checks including2,000 seeks pass. Unchanged simulation inherits the
previous full Linux suite; these numerical checks do not establish visual quality.
