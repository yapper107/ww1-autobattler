# Animation critic pass 6 — combat crouch

25 September 2026. Independent focused visual review; no runtime or asset changes.

**Focused female rifle crouch grade: 5.0/10 — unaccepted.** This is a visible improvement over pass 4, but it is well below the user's 8.5 standard of fluid, continuous, studio-ready AAA motion. The rejected original remains the fixed 3/10 anchor. This focused result does not replace the historical overall 4.0/10 assessment or raise the overall score.

## Evidence and limits

Reviewed completed capture `GaspCombat-20260925-212921`: 150 frames at 30 fps, course 21–26 seconds, female rifle, camera 40, walls hidden. Frame numbers below are zero-based capture filenames; course time is `21 + frame / 30` seconds. I inspected chronological samples throughout, full-size poses, and consecutive frames at entry, movement start, stopping, and rise. In particular, I inspected every frame 18–35, 96–119, and 120–143.

This is sampled and adjacent-frame inspection, not real-time video playback. I did not watch external reference footage. Grades come from the rendered character, not implementation claims or contact metrics. Foot visibility is substantially better here, but the featureless floor and tracking camera limit conclusions about world-space foot sliding. I cannot certify planted contacts from these views.

## What visibly improved

The idle is now a usable bent-knee combat stance instead of the earlier deep kneel. Its height is much closer to the moving crouch, so the transition no longer needs the same conspicuous climb into the movement pose seen in pass 4. The improvement is clear before considering how it was implemented.

The previously problematic local **22→23** (21.733→21.767 seconds) and **29→30** (21.967→22.000 seconds) boundaries have continuous intermediate poses in this capture. I do not see the former one-frame airborne-looking leg split or a replacement whole-pose teleport there.

Entry, particularly frames 0–11 (21.000–21.367), progressively bends the legs and lowers the body. Rise, frames 120–134 (25.000–25.467), progressively extends the legs and recentres the body. These sections look substantially more compatible with the intended crouch than the old kneeling stance. Neither inspected section presents an obvious one-frame jump.

## Remaining defects, in priority order

1. **The stop still looks like a pose change rather than controlled armed deceleration.** Frames **103–113 (24.433–24.767)** roll and straighten the torso while the rifle swings conspicuously upward; the weapon then settles lower through frames 114–119. This has intermediate poses, so I am calling it a fast, awkward continuous change, not a one-frame pop. The barrel and chest flourish distract from the task of stopping while remaining ready to fire. Author the stop around a clear final weight-bearing step, pelvis deceleration and modest torso recovery, with a purposeful weapon line throughout.

2. **The final steps do not clearly resolve into a stable support stance.** Around frames **96–110 (24.200–24.667)** the feet pass tightly across one another and appear toe-biased before spreading into the settled stance. Crossing steps are not inherently wrong, but this particular sequence, combined with the torso recovery, does not communicate a confident armed stop. Establish which foot accepts the weight, keep it visibly stable during that interval, and place the recovery foot without an additional body flourish. Verify this with a fixed camera and ground reference marks before claiming sliding is solved.

3. **Moving posture remains stiff and heavily hunched.** Across roughly **22.000–24.300**, the chest/head pitch forward while the weapon carriage changes comparatively little. The higher idle removes the worst height mismatch, but the transition still reads as entering a separate shuffle pose. Shape the spine, head, shoulders and elbows together so the forward lean reflects acceleration and direction, then relax it as the character slows. Preserve aiming intent without holding the whole upper body rigid.

## Acceptance still missing

This capture supports a focused improvement in female rifle crouch only. It does not establish the same result for the male body, either machine-gun body, reversals, interrupted crouch, varied approach speeds, or the complete course. Review those actual renders, and review real-time motion with visible ground references, before considering a larger quality claim. The continuous start and rise are useful progress; the stop and weight transfer remain the next authoring priorities.

Diagnostic strips: `.local/critic-pass1/pass6/` (`course-*`, `entry-*`, `start-*`, `stop-*`, and `rise-*`). Earlier reports and scores are preserved.
