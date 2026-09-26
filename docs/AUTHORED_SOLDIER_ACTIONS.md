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

The latest focused reviews are female rifle reload **5.5/10** (pass 17), male
shot/bolt **5.5** and reload **5.5** (pass 15), and female MG reload/exit **4.0**
(pass 12). Female held crouch stop is **5.5**, carry **5.5**, walking **5.0**, and
walk-stop **4.5**. These grades refer to the exact captures in the critic reports,
not subsequent unreviewed changes. Finger gestures, the male's intermediate elbow
arc and ammunition seating have a later correction pass in progress.

The remaining visible problems include retrieval through a closed pouch, weak
physical feed/release beats, residual male arm clearance during interruption,
incomplete MG replacement/feed mechanics, and locomotion weight acceptance. None
is waived by a passing technical check.

## Editable sources and reproduction

All paths below are repository-relative. Binary art belongs in Git LFS.

| Source | Contents |
|---|---|
| `art/characters/authored_rifle/Female/Rifle_Handling_Authored.blend` | Editable shot/bolt, reload and lowered-carry loop, weapon controls, wrist IK, elbow pole, planted ankles and body keys |
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
both arms to the targets without lengthening bones. The operating elbow has an
explicit forward/outward preference through manipulation.

The editable female scene also carries the rigid belt-pouch weight repair.
The female scene saves the reload action together with its matching `Elbow_Reload`
control action. When manually changing the rig action, change the elbow action too.
Open, pinch, knob-grasp and thumb-press finger poses are fitted on the existing
three-digit glove rig, then blended through explicit action keys.

Run with Blender 5.2 in background mode, using these arguments after `--`:

1. Open `art/characters/authored_sources/female_grip_C_2026-09-25.blend`; run
   `tools/character/author_rifle_actions.py` with output
   `art/characters/authored_rifle/Female`.
2. Open that generated female blend; run `retarget_authored_rifle.py` with male
   output directory, `art/characters/authored_sources/gunners_2026-09-25.blend`,
   and the generated female manifest as its three arguments.
3. Open the same gunners blend; run `author_mg_actions.py` with output
   `art/characters/authored_mg`. It takes the actual body-specific standing MG grip
   at source frame 85. The shot and reload are newly keyed actions.
4. `scripts/build.sh` copies authoring exports to the marked Windows mirror.
   Run `Tools/character/import_authored_rifle.py` through UE's Python commandlet;
   despite the historical filename, it imports both authored weapon families.
   It preserves the existing source skeleton and normalizes duplicate runtime
   clips into `/Game/Characters/GASP/Legacy/{Female,Male}`.
5. Copy newly generated mirror assets back into `Unreal/Content/Characters/`
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
| Rifle reload → aim | Female pass 17: 5.5; male pass 15: 5.5. Closed-pouch retrieval, feed explanation and intermediate male clearance remain open. |
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
