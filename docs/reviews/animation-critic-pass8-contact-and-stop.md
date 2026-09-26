# Independent animation review — pass 8, 25 September 2026

**Female crouch: 5.0/10, unchanged from pass 6. Female first shot/bolt: 5.0/10. Male first shot/bolt: 5.0/10, both improved from pass 7's 4.0. All remain unaccepted.** The user's anchors remain fixed: rejected original = 3/10; 8.5 = fluid, continuous, studio-ready AAA motion, with The Last of Us Part II as the stated gold standard. These focused grades do not raise the overall grade.

## Evidence and limits

Reviewed completed renders independently:

| Capture | Body and scope | Frames and timing |
| --- | --- | --- |
| `GaspCombat-20260925-214951` | Female rifle, crouch and first shot/bolt | 189 frames; course 21.000–27.267 seconds; time = 21 + frame/30 |
| `GaspCombat-20260925-215156` | Male rifle, first shot/bolt | 39 frames; course 26.000–27.267 seconds; time = 26 + frame/30 |

Both capture-complete markers were present. The supplied camera is 65 degrees, height 160. I inspected full-resolution poses, chronological crouch samples, every female frame 0–11, 18–36, 72–125, and 150–188, plus two-frame intervals 126–148. I inspected all 39 male shot/bolt frames. Diagnostic strips are in `.local/critic-pass1/pass8/`.

This is **sampled and adjacent-frame review, not continuous video playback**. I cannot certify normal-speed rhythm, easing, all intervening hitches, or planted world-space contacts on a featureless floor with a tracking camera. I did not watch external reference footage. I judged renders before reading the previous report. Grades do not derive from contact metrics, implementation changes or the number of repair passes. The changed camera limits exact comparison of small clearances.

## Female crouch — 5.0/10

The compatible higher idle remains an improvement over the earlier deep kneel. Entry progressively lowers the body, and the inspected **f22→23 (21.733→21.767)** and **f29→30 (21.967→22.000)** boundaries retain intermediate poses without the original one-frame leg split. The directional change around **f78→79 (23.600→23.633)** also progresses through surrounding poses in this capture.

The main pass 6 objection remains, with its most conspicuous part occurring later:

- **f102–112, 24.400–24.733:** the feet gather tightly and cross beneath a forward-pitched body, with toe-biased support. The sequence does not clearly communicate a final planted leg receiving the body's weight.
- **f114–120, 24.800–25.000:** the base spreads toward the idle stance while the torso straightens and the muzzle pitches upward. This remains a conspicuous weapon/body flourish during a stop. There are intermediate poses; I am not calling this a one-frame teleport.
- **f121–125, 25.033–25.167:** the body then extends rapidly into standing. The settled crouch receives little time before this next change. The course timing and the motion together need to show whether the stop can settle convincingly when held, not only when immediately followed by rise.

The reported stable selection of one stop clip can be a valid technical repair without resolving this visual result. My interpretation is a mismatch between the final support poses, pelvis/torso motion and the destination idle. That is an authoring hypothesis, not a measured centre-of-mass or foot-slip diagnosis. A single continuous source clip can still exhibit it after adaptation.

**Next correction:** establish one clearly weight-bearing plant, let the pelvis decelerate and the supporting knee accept the load, place the recovery foot, then settle into the compatible idle. Keep the weapon line purposeful while the torso recovers. Avoid compensating for the support mismatch with a torso/muzzle lift. Render a held stop, a stop-to-rise and the opposite-foot stop against visible ground references. The heavily hunched moving posture and narrow shuffling steps remain secondary concerns.

## First shot/bolt — female 5.0, male 5.0

This repair produces a real visible gain on both actual bodies. The operating forearm is less upright and crowded against the cheek. During **26.267–26.500** (female f158–165; male f8–15), the glove and the visible bolt stem read as parts of the same operation. Through the rearward and forward portions, the glove remains visually associated with that mechanism rather than primarily presenting a fist beside the face. Compact recoil and fore-end support remain intact. The final return through **27.033–27.267** has visible intermediate poses back toward the firing grip.

That is sufficient to improve the focused grade from 4.0 to 5.0, not to certify an excellent performance. The bulky glove still hides fine grasp and locking detail, especially on the male body. Across **26.533–26.800** (female f166–174; male f16–24), the upper body and operating hand spend substantial time in very similar configurations. The stages are more traceable now, but still look deliberately positioned rather than a confident, economical physical operation. Exact finger contact and the impression of pressure through unlock/lock remain weak or obscured from this view.

**Next correction:** preserve the improved approach and mechanism association, then refine the grasp, wrist rotation, distinct rearward/forward endpoints and final locking pressure. Shape the spacing between those events so the hand does not appear to wait in a generic intermediate pose. Use a mechanism-side view as well as this three-quarter view; do not add unrelated body sway to disguise incomplete hand performance. Verify the entire cycle at normal speed and slow speed before calling the timing polished.

## Acceptance boundary

These captures establish one crouch course on the female rifle body and one complete first shot/bolt cycle on each rifle body. They do not establish repeat cycles, reload pickup, moving fire, the male crouch, either machine-gun body, or the complete four-body course. Earlier reports and their historical scores are preserved. No code, runtime or source assets were edited by this review.
