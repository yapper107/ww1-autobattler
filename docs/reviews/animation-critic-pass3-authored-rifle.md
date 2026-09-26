# Independent authored rifle review — pass 3, 25 September 2026

**Not accepted. The first authored reload has clearer staging, but its loading hand
visibly misses the lowered receiver.** Provisional focused grades: **shot/bolt 4.0/10;
reload 3.5/10**. This single female-rifle capture does not regrade the whole animation
system. The last complete-course grade remains 4.0/10; the 8.5 target is not reached.

## Evidence

Reviewed completed `GaspCombat-20260925-201912`, 393 frames at 30 fps, beginning at
course time 21 s. Local frame `f` corresponds to `21 + f/30` seconds. Rendered evidence
was inspected before any implementation documents or code; no implementation reads
or numeric checks were used to infer quality. Inspected 26–34 s at dense chronological
intervals, adjacent frames around the first shot/bolt cycle, and full-resolution and
cropped reload-contact views. Also inspected adjacent frames around the reported
crouch boundaries at local f23 and f79. This is **frame-based review, not continuous
video playback**. Only the actual female rifle body is in this focused capture.

Comparison uses the pass-1 rendered course and retained inspection strips. The latest
close side/three-quarter camera provides better visibility than the earlier four-body
view, so not every newly visible defect can be claimed as a new regression.

## What improved

At approximately 30.27–31.60 s (f278–318), the rifle lowers, the head follows the work,
the operating arm releases and reaches downward, then begins returning. This reads
more clearly as a deliberate action than pass 1's manipulation around an almost
unchanged aiming pose. The return toward aim at 33.47–33.87 s (f374–386) also has a
visible preparation and raising path. Keep that staging.

Around the first shot, f150–156 (26.0–26.2 s), the gun and shoulder have a compact recoil
and recovery. The authored action has visible coordinated motion; it should not be
described as completely static. That is progress, but the complete weapon performance
still lacks sufficient clarity and contact to pass.

## Prioritized defects and authoring corrections

1. **Loading contact is visibly wrong: 31.733–32.667 s, f322–350.** The right glove
   rises to the sternum while the receiver remains down near the abdomen. There is
   a clear gap between the glove and the receiver. At f330 / 32.0 s, it reads as a
   hand held against the chest, not ammunition being inserted into the rifle.
   Only later, around f358 / 32.933 s, does the hand approach the gun again.
   This breaks the central action regardless of how smooth its approach is. Author
   the insertion with the actual lowered weapon and loading prop visible in the
   authoring scene. Make the hand, fingers, prop and receiver agree throughout the
   insertion and release, then retain the body performance around those contacts.
   Do not simply preserve a target that was correct for the raised gun. Evidence:
   `.local/critic-pass1/pass3/reload-contact-0.jpg` and full frame `combat-0330.png`.

2. **Retrieval and insertion still read as broad pose stops rather than a complete
   manipulation.** Around 30.933–31.467 s (f298–314), the glove hangs low near the belt;
   the actual pouch interaction and ammunition acquisition are not visibly established.
   Around 31.867–32.4 s (f326–342), the hand then holds at the chest with little readable
   operation. Fix the incorrect loading contact first, then make the reach, grasp,
   retrieval, transport, insertion and return distinguishable without overacting.
   The current render does not let me verify a coherent prop path from storage to
   the receiver. I am not claiming the prop or event is absent from the implementation.
   Preserve a readable supporting arm and some natural body adjustment as the hand
   works; avoid a long static hold followed by the next pose change.

3. **The bolt action remains visually crowded and weakly articulated.** During much
   of 26.4–27.0 s (f162–180), the operating glove sits in the cheek/stock area while
   the supporting arm and torso maintain very similar silhouettes. The successive
   unlock, rearward operation, forward return and closure are not clearly readable
   in this view. A small hand path and a moving mechanism are insufficient if the
   action reads as a glove held near the face. Refine wrist/finger orientation,
   elbow clearance, head/stock relationship and the visible acceleration changes
   between the operational phases. Use an opposite-side close view to expose the
   mechanism and verify contact before deciding whether a larger gesture is needed.
   Do not exaggerate the motion only to satisfy this one camera. Evidence:
   `bolt-adjacent-0.jpg`, `bolt-adjacent-1.jpg` and `fire-0.jpg` through `fire-2.jpg`.

4. **Body involvement is still modest compared with the target.** The reload now
   lowers the weapon and bends the head/body, which helps; most of the stance and
   support-side silhouette remain held through the long manipulation. The shot/bolt
   cycle similarly returns to a very similar held pose each time. Continue authoring
   connected support and recovery, with the head leading attention and the torso
   responding to the task. This does not require adding arbitrary sway or a large
   footstep to every action. Exact rhythm still needs real-time playback, which this
   review cannot certify from strips.

## Crouch remains open

The new local f22→23 transition (21.733→21.767 s) visibly changes the rear leg and
support arrangement abruptly as the deep stance becomes the moving posture. The
f78→79 region (23.6→23.633 s) also changes the forward-foot contact relationship;
this view does not establish a clean planted stop. The pass-2 result was a narrow
fix for its specific f40→41 boundary; it was never proof that the crouch family was
fixed globally. Do not carry that narrow acceptance forward to these new boundaries.

## Next review

Keep authoring these actions ourselves, per Jordan's current direction; acquiring
another motion pack is not a proposed remedy. First render a short reload with the
correct hand/prop/receiver relationship. Include both sides and a front three-quarter
view from reach through reacquisition. Then repeat shot→bolt→aim→reload as continuous
playback and verify the same performance on the male rifle body. MGs, crouched/moving
weapon actions and interruption cases remain outside this focused result. A complete
four-body course is required before changing the overall grade.

Pass-1 and pass-2 reports are unchanged. All pass-3 diagnostic strips are in
`.local/critic-pass1/pass3/`. No runtime code or source assets were edited by this review.
