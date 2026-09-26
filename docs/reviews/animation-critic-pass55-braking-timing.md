# Pass 55 — braking timing and bounded stop regressions

26 September 2026. Independent rendered-frame review. No implementation or animation assets edited.

**Focused sprint/braking grade: male rifle 6.5/10; female rifle 6.5/10, up from pass 53's 6.0.** The last footfall, compression and recovery are more closely connected. The former 583→584 stance split remains absent. This improvement does not certify the general stop change: the current crouch stop spends longer in a cramped, crossed support configuration before opening its stance. Both sprint grades remain below the fixed **8.5 studio-ready** bar; the user's rejected original remains **3/10**.

This is a bounded review, not a new whole-system grade. Pass 51's historical **5.5/10 course grade** is preserved separately. Reloads, vaulting, death and omitted action families were not comprehensively reassessed here.

## Evidence and limits

All three captures have completion markers. Originals are 1600 × 900, 30 fps.

| Capture | Actual inspection |
|---|---|
| [081602 male rifle](/mnt/c/Users/Jordan/Documents/Codex/ArmyPrototype-GASP/Saved/Screenshots/GaspCombat-20260926-081602) | Every consecutive frame 0–89; time = 18 + frame/30. Additional native lower-body crops of every frame 32–49. |
| [081655 female rifle](/mnt/c/Users/Jordan/Documents/Codex/ArmyPrototype-GASP/Saved/Screenshots/GaspCombat-20260926-081655) | Every consecutive frame 0–89, same mapping; native crops 32–49. |
| [081746 four-body course](/mnt/c/Users/Jordan/Documents/Codex/ArmyPrototype-GASP/Saved/Screenshots/GaspCombat-20260926-081746) | Complete 1,380-frame capture. Reviewed all consecutive frames in the six windows below: 287 course frames, not all 1,380. |
| Pass 53 comparisons | Reopened close-view sequences from 080224/080313 and course evidence from 080401, including native crouch crops 717–740. |

Course windows: **138–184**, **226–269**, **570–614**, **648–679**, **714–752**, **1074–1153**. All four actual bodies are visible, left to right: male MG, male rifle, female MG, female rifle. Current crouch frames 717–740 received additional native-scale inspection. Current 582–585 were also compared together.

**This is chronological adjacent-frame inspection, not continuous video playback.** Pose continuity and visible support paths can be judged; perceived normal-speed rhythm, impact and fluidity remain less certain. That limitation is not itself a demonstrated animation failure. Soft shadows do not establish exact sole height or measured sliding, and ordinary occlusion does not establish contact failure. Source playback rates and numerical diagnostics did not determine these grades. The later continued-turn repair is outside this evidence.

## Sprint braking: improvement and remaining work

In pass 53, the body spent a longer interval already low while the leading boot had weakly legible support. The current close sequences have a clearer last stride before the stronger compression. On the male, **30–34 / 19.000–19.133s** continues the stride, **35–39** passes through flight and lead-foot approach, and **40–45 / 19.333–19.500s** deepens the knee/pelvis compression. The female starts that step at a different phase, but also develops the stronger compression around **40–45**. **46–61** progressively recovers the rear foot and body; **62–89** settles quietly. A same-numbered frame is not necessarily the same footfall phase between bodies or revisions.

The low hovering impression is **reduced, not proven eliminated**. Native **38–42** still shows brief separation between the leading sole and its shadow region. I do not count every short flight as a defect: the important improvement is that the body no longer remains in the earlier low configuration for as long before completing the footfall. The deeper knee bend is plausible for a fast stop, and its entry remains continuous.

The old exact boundary is still repaired: close **43→44**, and course **583→584 / 19.433→19.467s**, proceed along the existing leg paths on all four bodies. No equivalent replacement split was demonstrated in course **570–614**. Rifle/hand association also remains coherent; no new gross shoulder or weapon jump was demonstrated in the close sequences.

The upper-body catch reads a little more clearly because the trunk and gun change pitch over a shorter interval, roughly **34–43**. Nevertheless, the knees and pelvis remain the most expressive parts. The gun/shoulder assembly has modest distinct lag, absorption and recovery for the speed being arrested. This still limits the sense of carried mass, particularly for the course MG bodies. Preserve the clearer plant timing, then add restrained trunk/shoulder absorption and weapon recovery around that plant without breaking the grips.

The male coat still has a broad, stiff-looking trailing shape through much of **15–33**, but the subsequent compression and settling shorten the previously prolonged flare. This is an improvement in the visible sequence, not evidence that cloth behavior itself was reauthored. More progressive garment settling remains a secondary polish target.

## Other stop windows

| Course range | Observed result |
|---|---|
| **138–184 / 4.600–6.133s**, walking stop | Footfall completion and return to ready remain progressive. Timing differs from pass 53, but no new broad lunge or one-frame stance substitution was demonstrated. |
| **226–269 / 7.533–8.967s**, standing turn | There is an initial foot adjustment; the later rotation still has weakly legible unloading/support. This review does not replace the separate pass 54 turn assessment or approve it. |
| **648–679 / 21.600–22.633s**, crouch movement | The higher crouch is preserved, including the absence of the original deep-kneel snap at 670→671. Wide side steps and restrained armed upper-body response remain. |
| **714–752 / 23.800–25.067s**, crouch stop | **Timing/support regression concern.** Current 717–733 holds a low torso over tightly tucked, narrow or crossed feet, before the stance opens around 734–744. In pass 53's 080401, support opens progressively through approximately 720–730. The current male rifle exposes this clearly in native crops; the broad course shows the same delayed stance opening across the group. This is continuous, not a pose pop, but the low sideways shuffle reads less secure. |
| **1074–1153 / 35.800–38.433s**, moving-fire stop | Stepping, stance opening around 1117–1128 and subsequent settlement remain coherent. No new deep sprint-style brake or gross one-frame stance failure was demonstrated. Upper-body load/recoil remains restrained. |

The crouch concern prevents a blanket “no stop regressions” conclusion. Investigate that action on its own: establish a readable lateral support foot before holding the low stopping posture, and let the pelvis settle over that support rather than extending the narrow/crossed phase. A close view with the ground grid would help distinguish actual sole travel from overlapping feet; the present course supports the visible timing concern, not an exact world-space slip measurement.

Priority order is: preserve the repaired sprint boundary and clearer footfall timing; repair the delayed crouch support; then improve plant-driven trunk/weapon load and garment settlement. Normal-speed review and broader conditions remain necessary before any 8.5 claim.

Scratch evidence: [.local/critic-pass1/pass55](/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler/.local/critic-pass1/pass55). Earlier reports and grades are unchanged.
